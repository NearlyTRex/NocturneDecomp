#include "core/actor/actorarchive.h"

#include "common/error/error.h"
#include "common/math/vector3f.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/demonactor.h"
#include "core/location.h"

#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr std::string_view kLocationType = "4D location";
constexpr std::string_view kOrientationType = "Euler PBH orientation";
constexpr std::string_view kVectorType = "3D vector";
constexpr std::string_view kFloatType = "Floating point value";
constexpr std::string_view kIntegerType = "Integer value";
constexpr std::string_view kStringType = "String";

} // namespace

CActorArchive::CActorArchive(common::CTextScanner &scanner, const CDemonActor &actor,
                             const CActor &actor_classes)
    : scanner_(scanner), actor_(actor), actor_classes_(actor_classes) {}

common::CTextScanner &CActorArchive::getScanner() const {
    return scanner_;
}

int CActorArchive::getSavedVersion(const CDemonActorType &type) const {
    return actor_classes_.getSavedVersion(type);
}

// deferred: writing the value to a save file, with CDemonActor::save
// nocedit 0x0040b480
void CActorArchive::archiveLocation(CLocation &location, std::string_view description) {
    if (common::scanFormat(scanner_, "%d,%f,%f,%f", location.area_id, location.position.x,
                           location.position.y, location.position.z) != 4) {
        quitOnPropertyError(kLocationType, description);
    }
    archiveDescription(kLocationType, description);
}

// deferred: writing the value to a save file, with CDemonActor::save
// nocedit 0x0040b3e0
void CActorArchive::archiveOrientation(common::CVector3f &orientation,
                                       std::string_view description) {
    if (common::scanFormat(scanner_, "%f,%f,%f", orientation.x, orientation.z, orientation.y) !=
        3) {
        quitOnPropertyError(kOrientationType, description);
    }
    archiveDescription(kOrientationType, description);
}

// deferred: writing the value to a save file, with CDemonActor::save
// nocedit 0x0040b340
void CActorArchive::archiveVector(common::CVector3f &vector, std::string_view description) {
    if (common::scanFormat(scanner_, "%f,%f,%f", vector.x, vector.y, vector.z) != 3) {
        quitOnPropertyError(kVectorType, description);
    }
    archiveDescription(kVectorType, description);
}

// deferred: writing the value to a save file, with CDemonActor::save
// nocedit 0x0040b770
void CActorArchive::archiveFloat(float &value, std::string_view description) {
    const std::optional<float> read = scanner_.scanFloat();
    if (!read) {
        quitOnPropertyError(kFloatType, description);
    }
    value = *read;
    archiveDescription(kFloatType, description);
}

// deferred: writing the value to a save file, with CDemonActor::save
// nocedit 0x0040b7f0
void CActorArchive::archiveInteger(int &value, std::string_view description) {
    const std::optional<int> read = scanner_.scanInteger();
    if (!read) {
        quitOnPropertyError(kIntegerType, description);
    }
    value = *read;
    archiveDescription(kIntegerType, description);
}

// The original's buffer took whatever length the quotes held.
// deferred: writing the value to a save file, with CDemonActor::save
// nocedit 0x0040b5c0
void CActorArchive::archiveString(std::string &value, std::string_view description) {
    scanner_.skipWhitespace();
    if (!scanner_.expect('"')) {
        quitOnPropertyError(kStringType, description);
    }
    if (scanner_.expect('"')) {
        value.clear();
    } else {
        const std::optional<std::string_view> text = scanner_.scanUntil('"');
        if (!text || !scanner_.expect('"')) {
            quitOnPropertyError(kStringType, description);
        }
        value = *text;
    }
    archiveDescription(kStringType, description);
}

// The rest of the line; a last line without its newline is fatal, as the file's end was.
// deferred: writing the description as a comment, with CDemonActor::save
// nocedit 0x0040b290
void CActorArchive::archiveDescription(std::string_view type, std::string_view description) {
    static_cast<void>(scanner_.scanUntil('\n'));
    if (!scanner_.expect('\n')) {
        quitOnPropertyError(type, description);
    }
}

// A field with no description is "(unknown)". The original named no actor when none was being
// read, which an archive always is.
// deferred: "saving" in the message, with CDemonActor::save
// nocedit 0x0040b210
void CActorArchive::quitOnPropertyError(std::string_view type, std::string_view description) const {
    common::displayErrorAndQuit(
        std::format("Error loading actor property.\nActor name: {}\nActor type: {}\nProperty "
                    "description: {}\nProperty type: {}\n",
                    actor_.getActorName(), actor_.getActorClassName(),
                    description.empty() ? "(unknown)" : description, type));
}

} // namespace nocturne::core
