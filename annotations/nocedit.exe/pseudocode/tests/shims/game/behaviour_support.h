#pragma once

// =============================================================================
// BEHAVIOUR SUPPORT — the engine calls the hero behaviour shims reach
// =============================================================================
//
// The set, the game, the lights and the sound slots, defined here; the engine's
// motion, skeleton, inventory, door, light and script calls, the vtable slots
// the shims call through, and the netplay shims they ask, stood in for and
// recording what they were handed; and Gabriella's own calls, her dynamite
// and the collision and render calls she makes. The party and its vtable are
// hero_support.h's. reset() puts everything back.

#include "hero_support.h"
#include "nocturne.h"

#include <functional>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>

namespace behaviour_support {

using namespace hero_support;

// A setDesiredState or jumpToMotion call.
struct MotionCall {
    CMotionController *controller;
    int index;
    int force;
};

struct Stand {
    // --- motion ---------------------------------------------------------------
    std::map<const CMotionController *, SMotion *> motion; // getCurrentMotion; else `idle`
    SMotion idle = {};
    std::map<std::string, int> states; // findStateIndex; else -1
    std::map<int, float> weights;      // getStateBlendWeight; else 0
    std::vector<MotionCall> desired;   // setDesiredState
    std::vector<MotionCall> jumped;    // jumpToMotion
    // moveAndCollide; moves the character by the step unless replaced
    std::function<void(CCharacter *, CVector3f *)> on_move;
    std::vector<std::pair<CCharacter *, CVector3f>> moves;

    // --- the vtable slots -----------------------------------------------------
    std::map<const void *, int> melee_types;                   // getAllowedMeleeAttackTypes
    std::vector<std::pair<CDemonActor *, std::string>> sounds; // playSound
    std::vector<float> footsteps;                              // processFootstepAtOffset's volume
    std::vector<std::pair<CCharacter *, SDamageInfo>> damage;  // processDamage
    std::vector<CCharacter *> released;                        // releaseFromGrab
    std::map<const void *, int> drawn;                         // isWeaponDrawn
    std::map<const void *, int> cylinder_hits;                 // checkCylinderCollisionWorld
    std::vector<std::pair<CCharacter *, CVector3f>> cylinder_points;

    // --- the skeleton ---------------------------------------------------------
    std::map<std::string, int> bones; // findBone; else -1
    CVector3f bone_point = {};        // getBoneCachedModelPosition

    // --- the hero's interactions ----------------------------------------------
    int interact = 0, nearby_door = 0, talk = 0, lever = 0;
    std::vector<std::string> interactions; // each call, by name

    // --- the inventory --------------------------------------------------------
    int inventory_updates = 0, items_used = 0, health_auto_used = 0, display_resets = 0;
    int inventory_clears = 0;                             // CInventory::initialize
    int weapon_selections = 0;                            // selectWeapon
    std::map<const void *, std::string> models;           // setModelName, by model
    std::vector<std::pair<CWeapon *, int>> weapon_states; // setWeaponState

    // --- aiming: the Colonel's ------------------------------------------------
    std::map<std::string, int> motion_indices;               // findMotionIndex; else 0
    std::vector<std::pair<int, float>> layered;              // blendMotion: motion, frame
    std::vector<float> arm_blends;                           // blendBoneRotations' weight
    std::map<const void *, int> target_points;               // getTargetPoints' count
    CVector3f target_offset = {0.0f, 1.0f, 0.0f};            // where its first point is
    float ray_hit = 0.5f;                                    // raycast's fraction
    CDemonActor *ray_actor = nullptr;                        // what it hits; else what is
                                                             // at its end
    float random = 0.0f;                                     // getRandomFloatFromRange; else min
    int ready_to_fire = 1;                                   // isReadyToFire
    int shots = 0, beams = 0, renders = 0, processed = 0;    // fire, renderAimBeam, ...
    std::vector<std::pair<CDemonActor *, CVector3f>> placed; // setPositionAndOrientation's
                                                             // orientation

    // --- Gabriella's ----------------------------------------------------------
    // processMotionEvents: each delta, and what else it does; else nothing
    std::vector<float> motion_deltas;
    std::function<void(CGabriella *, float)> on_motion_events;
    std::vector<SMotionTransition> transitions;       // startTransition
    int pickup_found = 0, pickups = 0, put_downs = 0; // findAndPickupNearbyObject, ...
    int shipped_climb = 0, shipped_climbs = 0;        // tryClimbLadder: answer, calls
    std::set<const void *> burned_out;                // isFuseBurnedOut
    int fuses_lit = 0, ejected = 0, blood = 0;        // lightFuse, onFired, blood bursts
    float arc_hit = -1.0f;                            // iterativeRaycast
    std::vector<float> arcs;                          // createLaserPath's hit time
    float clear_ahead = 1.0f, ground = 0.0f;          // testCylinderCollision, ...
    std::vector<CVector3f> drops;                     // dropCarriedObject's direction
    std::vector<CVector3f> arm_eulers;                // eulerToQuaternion
    std::vector<CVector3f> mask_placed;               // applyScaledTransform's position
    int models_drawn = 0, render_states = 0;          // prepareForRendering, setup...

    // --- the netplay shims ----------------------------------------------------
    int net_active = 0, net_playing = 0, auto_use_health = 0, friendly_block = 0;
    std::vector<std::pair<int, int>> weapon_requests; // action, direction

    // --- the engine's other calls ---------------------------------------------
    std::vector<CCharacter *> base_damage;              // CCharacter::processDamage
    std::vector<CDemonLight *> lights_built;            // CDemonLight ctor
    std::map<std::string, C3DSLight *> scene_lights;    // addLightFilter
    std::map<std::string, int> art_sizes;               // getFileSize("art", ...)
    std::vector<std::pair<std::string, float>> filters; // addFilter
    int sound_locks = 0, sound_unlocks = 0;

    void reset();
};

extern Stand stand;

extern CGame *game;
extern CDemonSet *set;

// A character the set's list holds.
void put_in_set(CCharacter *character);

// A weapon of class `type`, as createActorByName makes one, with the weapons'
// vtable. Kept until the next reset().
CWeapon *weapon(CDemonActorType *type);

// The same for a stick of dynamite, unlit, of class CDynamite.
CDynamite *dynamite();

} // namespace behaviour_support
