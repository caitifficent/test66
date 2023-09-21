// Copyright (C) 2007 Id Software, Inc.
//

#ifndef __ALLOWFAILUREREASON_H__
#define __ALLOWFAILUREREASON_H__

enum allowFailureReason_t {
	ALLOWFAIL_UNKNOWN,
	ALLOWFAIL_PERMBAN,
	ALLOWFAIL_TEMPBAN,
	ALLOWFAIL_SERVERSPAWNING,
	ALLOWFAIL_SERVERFULL,
	ALLOWFAIL_SERVERNOMAP,
	ALLOWFAIL_SERVERMISCONFIGURED,
	ALLOWFAIL_SERVERNOSYNC,
	ALLOWFAIL_SERVERONLYLAN,
	ALLOWFAIL_SERVERONLYAUTH,
	ALLOWFAIL_SERVERNOTAUTHENTICATED,
	ALLOWFAIL_SERVERWRONGVERSION,
	ALLOWFAIL_INVALIDPASSWORD,
	ALLOWFAIL_PUNKBUSTER,
	ALLOWFAIL_NOREPEATERSALOWED,
};

#endif