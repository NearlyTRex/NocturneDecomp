#include "core/litecone/lightcone.h"

#include "common/math/extendedfloat.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;
// The version that first held the cone's state and its events.
constexpr int kEventVersion = 2;
// Over the cone's angle, its box's half-width for each unit of its length.
constexpr double kSpreadDegrees = 18.0;

} // namespace

// nocedit 0x00506aa0
constinit const CDemonActorType CLightCone::kType =
    makeActorType("CLightCone", &CDemonActor::kType, &CLightCone::create, kVersion);

// deferred: drawing the cone transparent, with the set's renderable lists
// nocedit 0x00506b10
CLightCone::CLightCone() = default;

// nocedit 0x00506e30
CLightCone::~CLightCone() = default;

// nocedit 0x00506b00
const CDemonActorType &CLightCone::getActorType() const {
    return kType;
}

// nocedit 0x00506ad0
std::unique_ptr<CDemonActor> CLightCone::create(CActor & /*classes*/) {
    return std::make_unique<CLightCone>();
}

// nocedit 0x00506bb0
void CLightCone::setup() {
    CDemonActor::setup();
}

// The cone points along z from its apex, as long as its falloff and as wide across as the
// spread over its angle, at the x87's precision.
// nocedit 0x00506cb0
CBoundingBox3D *CLightCone::getBoundingBox(CBoundingBox3D *out_box) {
    const float half_width = (common::CExtendedFloat(kSpreadDegrees) /
                              common::CExtendedFloat(fov_) * common::CExtendedFloat(falloff_))
                                 .toFloat();
    *out_box = {.min = {.x = -half_width, .y = -half_width, .z = 0.0F},
                .max = {.x = half_width, .y = half_width, .z = falloff_}};
    return out_box;
}

// nocedit 0x00506d00
void CLightCone::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveFloat(fov_, "fov");
    actor_archive.archiveFloat(falloff_, "falloff");
    if (actor_archive.getSavedVersion(kType) < kEventVersion) {
        return;
    }
    actor_archive.archiveInteger(state_, "state");
    actor_archive.archiveString(on_event_, "onEvent");
    actor_archive.archiveString(off_event_, "offEvent");
}

float CLightCone::getFov() const {
    return fov_;
}

float CLightCone::getFalloff() const {
    return falloff_;
}

int CLightCone::getState() const {
    return state_;
}

const std::string &CLightCone::getOnEvent() const {
    return on_event_;
}

const std::string &CLightCone::getOffEvent() const {
    return off_event_;
}

} // namespace nocturne::core
