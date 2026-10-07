// =============================================================================
// MELEE HELPERS FOR THE HERO ADDITIONS — implementation
// =============================================================================

#include "game/hero_melee.h"
#include "nocturne.h"

#include <cmath>

extern "C" int nocturne_hero_in_set(CCharacter *target)
{
    int i;

    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        if (g_CDemonSetPtr->characters[i] == target) {
            return 1;
        }
    }
    return 0;
}

extern "C" int nocturne_hero_is_throwable(CDemonActor *object)
{
    return ((*((object->vtable)._ub)->getAllowedMeleeAttackTypes)(object) & 4) != 0;
}

extern "C" int nocturne_hero_melee_target(CCharacter *target)
{
    if ((target == (CCharacter *)0x0) || ((target->base).lifecycle_state != ACTOR_CREATED)) {
        return 0;
    }
    if (target->hit_points <= 0.0f) {
        return 0;
    }
    if (nocturne_hero_is_player(target) != 0) {
        return 0;
    }
    return core_actor_cpp_castToClassHash_FUN_0040c790(&target->base, g_CEnemyClassInfo.name_hash)
           != (CDemonActor *)0x0;
}

extern "C" float nocturne_hero_melee_edge_distance(CDemonActor *self, CCharacter *target,
                                                   CVector3f *local)
{
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
        (self, local, &(target->base).location.position);
    return std::sqrt(local->x * local->x + local->z * local->z) -
           target->collision_cylinder_radius;
}

extern "C" int nocturne_hero_bone_world(CCharacter *self, const char *bone_name, CVector3f *world)
{
    CDeformableModelInstance *model = &self->model;
    CSkeleton *skeleton;
    CVector3f local_point;
    CVector3f *bone_point;
    int bone_index;

    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(model);
    bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(skeleton, (char *)bone_name, 1);
    if (bone_index < 0) {
        return 0;
    }
    bone_point = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0059fb00
                     (model, &local_point, bone_index);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&self->base, world, bone_point);
    return 1;
}

extern "C" float nocturne_hero_melee_hit(CCharacter *self, CCharacter *target,
                                         const CVector3f *from, float amount)
{
    SDamageInfo damage;

    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&damage);
    damage.damage_amount = amount;
    damage.damage_type   = DAMAGE_TYPE_MELEE;
    damage.impact_point  = *from;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
        (&target->base, &damage.impact_direction, (CVector3f *)from);
    damage.attacker      = &self->base;
    damage.wielder       = &self->base;
    (*(((target->base).vtable._uc)->_uc).processDamage)(target, &damage);
    return damage.damage_amount;
}
