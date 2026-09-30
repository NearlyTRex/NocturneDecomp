#pragma once

// =============================================================================
// ONE BARON PER BARON WEAPON
// =============================================================================
//
// CBaronWeapon::findOrCreateBaron takes the first CBaron in the set, so every
// Baron weapon shares one summon and CBaron::attachToOwner refuses the second
// owner. In a network game each weapon claims its own Baron instead. Outside
// one these are no-ops.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY at the call sites.

#ifdef __cplusplus
extern "C" {
#endif

struct CBaron;
struct CBaronWeapon;

// Whether a weapon other than `weapon` has claimed `baron`.
int nocturne_baron_claimed_by_other(struct CBaronWeapon *weapon, struct CBaron *baron);

// Records that `weapon` uses `baron`.
void nocturne_baron_claim(struct CBaronWeapon *weapon, struct CBaron *baron);

// Forget every claim. Called at session start, when the set's actors go.
void nocturne_baron_reset(void);

#ifdef __cplusplus
}
#endif
