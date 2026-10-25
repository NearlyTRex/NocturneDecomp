// =============================================================================
// HERO SUPPORT — see hero_support.h
// =============================================================================

#include "hero_support.h"

#include "class_support.h"

#include <cstring>
#include <memory>

CHero *g_HeroActors[4] = {};
int g_HeroCount = 0;
int g_LocalHeroIndex = 0;
CDemonActorType g_CCharacterClassInfo = {};
CDemonActorType g_CEnemyClassInfo = {};
CDemonActorType g_CHeroClassInfo = {};
CDemonActorType g_CStrangerClassInfo = {};
CDemonActorType g_CGabriellaClassInfo = {};
CDemonActorType g_CSvetlanaClassInfo = {};
CDemonActorType g_CScatClassInfo = {};
CDemonActorType g_CIcePickClassInfo = {};
CDemonActorType g_CColonelClassInfo = {};
CDemonActorType g_CMolochClassInfo = {};
CDemonActorType g_CLightActorClassInfo = {};
CDemonActorType g_CWeaponClassInfo = {};
CDemonActorType g_CMeleeClassInfo = {};
CDemonActorType g_CShovelClassInfo = {};
CDemonActorType g_CGunClassInfo = {};
CDemonActorType g_CHealthItemClassInfo = {};
CDemonActorType g_CGasMaskClassInfo = {};
CDemonActorType g_CAmmoClassInfo = {};
CDemonActorType g_CAmmoBoxClassInfo = {};
CDemonActorType g_CDynamiteClassInfo = {};
CDemonActorType g_CLadderClassInfo = {};
CDemonActorType g_CCrateClassInfo = {};

namespace hero_support {

CHero_full_vtable vtable;
std::map<const void *, EDeathState> death;
CDemonActorType item_type = {};

namespace {

std::unique_ptr<CHero> s_heroes[4] = {
    std::unique_ptr<CHero>(new CHero()), std::unique_ptr<CHero>(new CHero()),
    std::unique_ptr<CHero>(new CHero()), std::unique_ptr<CHero>(new CHero())};
std::unique_ptr<CCharacter> s_characters[8];
std::unique_ptr<CStranger> s_stranger(new CStranger());

EDeathState death_state(CCharacter *c) {
    std::map<const void *, EDeathState>::const_iterator it = death.find(c);
    return (it != death.end()) ? it->second : DEATH_STATE_ALIVE;
}

} // namespace

CHero *heroes[4] = {s_heroes[0].get(), s_heroes[1].get(), s_heroes[2].get(), s_heroes[3].get()};
CStranger *stranger = s_stranger.get();

CCharacter *character(int i) {
    if (!s_characters[i])
        s_characters[i].reset(new CCharacter());
    return s_characters[i].get();
}

void give_class(CDemonActor *actor, CDemonActorType *type) {
    actor->vtable._uh = &vtable;
    class_support::types[actor] = type;
}

void place_heroes(int count) {
    for (int i = 0; i < count; i++) {
        give_class(&heroes[i]->base.base, &g_CHeroClassInfo);
        heroes[i]->base.hit_points = 100.0f;
        heroes[i]->base.max_hit_points = 100.0f;
        g_HeroActors[i] = heroes[i];
    }
    g_HeroCount = count;
}

void reset() {
    for (std::unique_ptr<CHero> &h : s_heroes)
        std::memset(h.get(), 0, sizeof(*h));
    for (std::unique_ptr<CCharacter> &c : s_characters) {
        if (c)
            std::memset(c.get(), 0, sizeof(*c));
    }
    death.clear();
    std::memset(&vtable, 0, sizeof(vtable));
    vtable._ub.getActorType = class_support::actor_type;
    vtable._uc.getDeathState = death_state;

    using class_support::make;
    class_support::types.clear();
    g_CCharacterClassInfo = make("CCharacter", 0x100);
    g_CEnemyClassInfo = make("CEnemy", 0x110, &g_CCharacterClassInfo);
    g_CHeroClassInfo = make("CHero", 0x200, &g_CCharacterClassInfo);
    g_CStrangerClassInfo = make("CStranger", 0x210, &g_CHeroClassInfo);
    g_CGabriellaClassInfo = make("CGabriella", 0x220, &g_CHeroClassInfo);
    g_CSvetlanaClassInfo = make("CSvetlana", 0x230, &g_CHeroClassInfo);
    g_CScatClassInfo = make("CScat", 0x240, &g_CHeroClassInfo);
    g_CIcePickClassInfo = make("CIcePick", 0x250, &g_CHeroClassInfo);
    g_CColonelClassInfo = make("CColonel", 0x260, &g_CHeroClassInfo);
    g_CMolochClassInfo = make("CMoloch", 0x270, &g_CHeroClassInfo);
    g_CLightActorClassInfo = make("CLightActor", 0x300);
    g_CWeaponClassInfo = make("CWeapon", 0x400);
    g_CMeleeClassInfo = make("CMelee", 0x410, &g_CWeaponClassInfo);
    g_CShovelClassInfo = make("CShovel", 0x420, &g_CWeaponClassInfo);
    g_CGunClassInfo = make("CGun", 0x430, &g_CWeaponClassInfo);
    g_CHealthItemClassInfo = make("CHealthItem", 0x500);
    g_CGasMaskClassInfo = make("CGasMask", 0x510);
    g_CAmmoClassInfo = make("CAmmo", 0x520);
    g_CAmmoBoxClassInfo = make("CAmmoBox", 0x530);
    g_CDynamiteClassInfo = make("CDynamite", 0x440, &g_CWeaponClassInfo);
    g_CLadderClassInfo = make("CLadder", 0x320);
    g_CCrateClassInfo = make("CCrate", 0x330);
    item_type = make("CBoxActor", 0x310);

    std::memset(stranger, 0, sizeof(*stranger));
    give_class(&stranger->base.base.base, &g_CStrangerClassInfo);
    stranger->base.base.hit_points = 100.0f;

    for (CHero *&h : g_HeroActors)
        h = nullptr;
    g_HeroCount = 0;
    g_LocalHeroIndex = 0;
}

} // namespace hero_support
