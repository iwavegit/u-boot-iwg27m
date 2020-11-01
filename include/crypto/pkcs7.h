/* SPDX-License-Identifier: GPL-2.0-or-later */
/* PKCS#7 crypto data parser
 *
 * Copyright (C) 2012 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 */

#ifndef _CRYPTO_PKCS7_H
#define _CRYPTO_PKCS7_H

#ifndef __UBOOT__
#include <linux/verification.h>
#include <crypto/public_key.h>
#endif

struct key;
struct pkcs7_message;

/*
 * pkcs7_parser.c
 */
extern struct pkcs7_message *pkcs7_parse_message(const void *data,
						 size_t datalen);
extern void pkcs7_free_message(struct pkcs7_message *pkcs7);

extern int pkcs7_get_content_data(const struct pkcs7_message *pkcs7,
				  const void **_data, size_t *_datalen,
				  size_t *_headerlen);

#ifndef __UBOOT__
/*
 * pkcs7_trust.c
 */
extern int pkcs7_validate_trust(struct pkcs7_message *pkcs7,
				struct key *trust_keyring);

/*
 * pkcs7_verify.c
 */
extern int pkcs7_verify(struct pkcs7_message *pkcs7,
			enum key_being_used_for usage);

extern int pkcs7_supply_detached_data(struct pkcs7_message *pkcs7,
				      const void *data, size_t datalen);
#endif

#endif /* _CRYPTO_PKCS7_H */
