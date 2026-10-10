// =============================================================================
// ONE BARON PER BARON WEAPON — see hero_baron.h
// =============================================================================

#include "game/hero_baron.h"
#include "nocturne.h"

namespace {

// Heroes' weapons plus Scat's BaronProxy.
const int kMaxClaims = 16;

struct Claim {
    const CBaronWeapon *weapon;
    const CBaron *baron;
};

Claim s_claims[kMaxClaims];
int s_claim_count;

} // namespace

extern "C" int nocturne_baron_claimed_by_other(CBaronWeapon *weapon, CBaron *baron)
{
    if (!nocturne_net_session_active()) {
        return 0;
    }
    for (int i = 0; i < s_claim_count; i++) {
        if ((s_claims[i].baron == baron) && (s_claims[i].weapon != weapon)) {
            return 1;
        }
    }
    return 0;
}

extern "C" void nocturne_baron_claim(CBaronWeapon *weapon, CBaron *baron)
{
    if (!nocturne_net_session_active() || (baron == (CBaron *)0x0)) {
        return;
    }
    for (int i = 0; i < s_claim_count; i++) {
        if (s_claims[i].weapon == weapon) {
            s_claims[i].baron = baron;
            return;
        }
    }
    if (s_claim_count < kMaxClaims) {
        s_claims[s_claim_count].weapon = weapon;
        s_claims[s_claim_count].baron = baron;
        s_claim_count++;
    }
}

extern "C" void nocturne_baron_reset(void)
{
    s_claim_count = 0;
}
