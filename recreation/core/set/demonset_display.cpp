#include "common/math/extendedfloat.h"
#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/box/boundingbox3d.h"
#include "core/location.h"
#include "core/set/demonset.h"
#include "engine/drender/demonrenderer.h"

#include <algorithm>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::core {
namespace {

// Every pass's bit, which a mask of all of them sets on every actor.
constexpr std::uint32_t kAllPasses = 0xffffffffU;
// The passes a background always draws: the solid and the lit.
constexpr std::uint32_t kAlwaysDrawnPasses = 0xc;

// An actor to draw and how far its box's middle is from the camera, squared.
struct SDisplayEntry {
    CDemonActor *actor = nullptr;
    float distance_squared = 0.0F;
};

[[nodiscard]] bool isWhereDrawn(const CDemonActor &actor) {
    const SDrawnTransform &drawn = actor.getDrawnTransform();
    const common::CVector3f &position = actor.getLocation().position;
    const common::CVector3f &orientation = actor.getOrientation();
    return position.x == drawn.position.x && position.y == drawn.position.y &&
           position.z == drawn.position.z && orientation.x == drawn.orientation.x &&
           orientation.y == drawn.orientation.y && orientation.z == drawn.orientation.z;
}

} // namespace

// The original also cleared a flag only a panning camera reads, which retail can't load.
// nocedit 0x0056ade0
void CDemonSet::snapshotActorTransformState(CDemonActor &actor) {
    actor.setDrawnTransform({.position = actor.getLocation().position,
                             .orientation = actor.getOrientation(),
                             .dirty_flags = SDrawnTransform::kEveryPass});
}

// The distances are worked out at the x87's precision and stored. Retail has no panning camera,
// and the game is never in the editor, whose hidden actors the original passed over.
// unverified: the order left among actors at the same distance, which the original's Watcom
//   _qsort decides, by running its _qsort on such a list in the machine-code oracle
// deferred: the dynamic lights', the goggles' and the spotlights' passes, with addDynamicLight,
//   the goggles and setCameraView's spotlights
// deferred: listing the local hero only while netplay has it in the world (the decomp's
//   nocturne_net_respawn_hero_in_world), with CNetGame's sessions
// deferred: the time the list took, in profile mode, with processHotkeys
// nocedit 0x0056fbd0
void CDemonSet::buildDisplayList(std::uint32_t dirty_flags_mask) {
    common::CVector3f camera;
    owners_.renderer.getCameraOriginWorld(&camera);
    std::vector<SDisplayEntry> entries;
    for (CDemonActor *actor : renderable_actors_) {
        if (actor == local_hero_) {
            continue;
        }
        SDrawnTransform drawn = actor->getDrawnTransform();
        if (dirty_flags_mask == kAllPasses) {
            drawn.dirty_flags = kAllPasses;
        }
        if (!isWhereDrawn(*actor)) {
            drawn.dirty_flags |= dirty_flags_mask;
        }
        actor->setDrawnTransform(drawn);
        if ((drawn.dirty_flags & kAlwaysDrawnPasses) == 0) {
            continue;
        }
        CBoundingBox3D box;
        actor->getBoundingBox(&box);
        common::CVector3f centre{.x = (box.min.x + box.max.x) * 0.5F,
                                 .y = (box.min.y + box.max.y) * 0.5F,
                                 .z = (box.min.z + box.max.z) * 0.5F};
        common::CVector3f world;
        actor->localToWorldPoint(&world, &centre);
        const auto square = [](float from, float to) {
            const common::CExtendedFloat gap =
                common::CExtendedFloat(from) - common::CExtendedFloat(to);
            return gap * gap;
        };
        entries.push_back(
            {.actor = actor,
             .distance_squared = ((square(camera.x, world.x) + square(camera.y, world.y)) +
                                  square(camera.z, world.z))
                                     .toFloat()});
    }
    std::ranges::sort(entries, {}, &SDisplayEntry::distance_squared);
    sorted_render_actors_.clear();
    if (local_hero_ != nullptr) {
        sorted_render_actors_.push_back(local_hero_);
    }
    for (const SDisplayEntry &entry : entries) {
        sorted_render_actors_.push_back(entry.actor);
    }
}

void CDemonSet::setLocalHero(CDemonActor *local_hero) {
    local_hero_ = local_hero;
}

std::span<CDemonActor *const> CDemonSet::getSortedRenderActors() const {
    return sorted_render_actors_;
}

} // namespace nocturne::core
