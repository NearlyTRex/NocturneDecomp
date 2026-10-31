#include "core/actor/demonactor.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/textscanner.h"
#include "core/actor/actor_functions.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"

#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr int kVersion = 7;
// The version that dropped a field of view, and the one that first held the creation fields.
constexpr int kNoFovVersion = 7;
constexpr int kCreationVersion = 6;

struct STag {
    std::string class_name;
    std::string actor_name;
};

// " { %s \"%[^\"]\"\n" and its end-tag twin: what is read before the first mismatch.
STag readTag(common::CTextScanner &scanner, char brace) {
    STag tag;
    scanner.skipWhitespace();
    if (!scanner.expect(brace)) {
        return tag;
    }
    tag.class_name = scanner.scanWord();
    scanner.skipWhitespace();
    if (!scanner.expect('"')) {
        return tag;
    }
    const std::optional<std::string_view> name = scanner.scanUntil('"');
    if (!name) {
        return tag;
    }
    tag.actor_name = *name;
    scanner.expect('"');
    scanner.skipWhitespace();
    return tag;
}

} // namespace

constinit const CDemonActorType CDemonActor::kType =
    makeActorType("CDemonActor", nullptr, nullptr, kVersion);

// deferred: the defaults the constructor gives the orientation's matrix, and the platform,
//   rendering (but for the transparency), health and footstep fields, with the steps that read
//   them
// nocedit 0x004088b0
CDemonActor::CDemonActor() = default;

// The original also marked the actor freed, for the editor build's check of actor pointers.
// nocedit 0x00408a30
CDemonActor::~CDemonActor() = default;

// nocedit 0x00408b90
std::string_view CDemonActor::getActorClassName() const {
    return getActorType().class_name;
}

const std::string &CDemonActor::getActorName() const {
    return actor_name_;
}

void CDemonActor::setActorName(std::string_view actor_name) {
    actor_name_ = actor_name;
}

const CLocation &CDemonActor::getLocation() const {
    return location_;
}

void CDemonActor::setLocation(const CLocation &location) {
    location_ = location;
}

const common::CVector3f &CDemonActor::getOrientation() const {
    return orientation_;
}

void CDemonActor::setOrientation(const common::CVector3f &orientation) {
    orientation_ = orientation;
}

// The original also checks the actor is one it made, which an object always is.
// deferred: clearing the blood effect timer, with handleFootstep
// deferred: bringing the path map up to the actor's position, with CPathMap::findPathWithRetry
// nocedit 0x00408bb0
void CDemonActor::setup() {
    updateOrientationMatrix();
}

// nocedit 0x00408c10
void CDemonActor::updateOrientationMatrix() {
    orientation_ = {.x = normalizeAngleToPi(orientation_.x),
                    .y = normalizeAngleToPi(orientation_.y),
                    .z = normalizeAngleToPi(orientation_.z)};
    orientation_matrix_.buildRotationMatrix(orientation_);
}

// nocedit 0x00408ec0
common::CVector3f *CDemonActor::localToWorldPoint(common::CVector3f *output_world_point,
                                                  common::CVector3f *input_local_point) {
    const common::CVector3f turned = orientation_matrix_.transformVector(*input_local_point);
    *output_world_point = {.x = turned.x + location_.position.x,
                           .y = turned.y + location_.position.y,
                           .z = turned.z + location_.position.z};
    return output_world_point;
}

EActorLifecycleState CDemonActor::getLifecycleState() const {
    return lifecycle_state_;
}

float CDemonActor::getCreateProbability() const {
    return create_probability_;
}

const std::string &CDemonActor::getCreateEvent() const {
    return create_event_;
}

bool CDemonActor::isTransparent() const {
    return transparent_;
}

void CDemonActor::setTransparent(bool transparent) {
    transparent_ = transparent;
}

bool CDemonActor::isRenderable() const {
    return renderable_;
}

void CDemonActor::setRenderable(bool renderable) {
    renderable_ = renderable;
}

bool CDemonActor::isCollisionDisabled() const {
    return collision_disabled_;
}

void CDemonActor::setCollisionDisabled(bool collision_disabled) {
    collision_disabled_ = collision_disabled;
}

const common::CVector3i &CDemonActor::getScale() const {
    return scale_;
}

void CDemonActor::setScale(const common::CVector3i &scale) {
    scale_ = scale;
}

// Files before version 7 held a field of view, which is read and dropped.
// nocedit 0x0040c1c0
void CDemonActor::archive(CActorArchive &actor_archive) {
    actor_archive.archiveLocation(location_, "location");
    actor_archive.archiveOrientation(orientation_, "orient");
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version < kNoFovVersion) {
        float field_of_view = 0.0F;
        actor_archive.archiveFloat(field_of_view, "fov");
    }
    if (saved_version < kCreationVersion) {
        return;
    }
    actor_archive.archiveEnum(lifecycle_state_, "wasCreated");
    actor_archive.archiveFloat(create_probability_, "createProb");
    actor_archive.archiveString(create_event_, "createEvent");
}

// The original also quit on a read error after the end tag, which text in memory can't have.
// nocedit 0x0040b050
void CDemonActor::load(common::CTextScanner &scanner, const SActorArchiveOwners &owners) {
    const std::string_view class_name = getActorClassName();
    const STag start = readTag(scanner, '{');
    if (!common::equalsIgnoringAsciiCase(class_name, start.class_name)) {
        common::displayErrorAndQuit(
            std::format("Start of actor file tag mismatch for class {}", class_name));
    }
    actor_name_ = start.actor_name;
    CActorArchive actor_archive(scanner, *this, owners);
    archive(actor_archive);
    const STag end = readTag(scanner, '}');
    if (!common::equalsIgnoringAsciiCase(class_name, end.class_name) ||
        !common::equalsIgnoringAsciiCase(actor_name_, end.actor_name)) {
        common::displayErrorAndQuit(std::format(
            "End of actor file tag mismatch for class {} name \"{}\"", class_name, actor_name_));
    }
}

} // namespace nocturne::core
