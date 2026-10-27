#include "core/actor/actorarchive.h"

#include "common/error/error.h"
#include "common/math/vector3f.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorlookup.h"
#include "core/actor/demonactor.h"
#include "core/cloth/clothlist.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/location.h"
#include "core/motion/motioncontroller.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/partvisibility.h"

#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

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
                             const SActorArchiveOwners &owners)
    : scanner_(scanner), actor_(actor), owners_(owners) {}

common::CTextScanner &CActorArchive::getScanner() const {
    return scanner_;
}

const SActorArchiveOwners &CActorArchive::getOwners() const {
    return owners_;
}

int CActorArchive::getSavedVersion(const CDemonActorType &type) const {
    return owners_.actor_classes.getSavedVersion(type);
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

void CActorArchive::archiveFlag(bool &value, std::string_view description) {
    auto number = static_cast<int>(value);
    archiveInteger(number, description);
    value = number != 0;
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

// nocedit 0x0040b6e0
void CActorArchive::archiveLocalizedString(std::string &value, std::string_view description) {
    archiveString(value, std::string(description) + " !LOCALIZE!");
}

// deferred: writing the actor's name to a save file, with CDemonMission::saveActor
// nocedit 0x0040b870
void CActorArchive::archiveActor(CDemonActor *&actor, std::string_view description) {
    actor = owners_.actors.loadActor(scanner_, actor_, description);
}

// The original held ten names, which more overran.
// deferred: writing the list to a save file, with CDemonActor::save
// nocedit 0x0040be60
void CActorArchive::archiveClothList(CClothList &cloth_list, std::string_view description) {
    archiveDescription("Cloth list opening brace", description);
    int count = 0;
    if (const std::optional<int> read = scanner_.scanInteger()) {
        count = *read;
    } else {
        quitOnPropertyError("cloth count", description);
    }
    archiveDescription("clothCount", description);
    std::vector<std::string> filenames;
    for (int i = 0; i < count; ++i) {
        std::string filename;
        if (common::scanFormat(scanner_, " \"%[^\"]\"\n", filename) != 1) {
            quitOnPropertyError("cloth filename entry", description);
        }
        filenames.push_back(std::move(filename));
    }
    archiveDescription("Cloth list closing brace", description);
    cloth_list.setFilenames(std::move(filenames));
}

// deferred: writing the model's name to a save file, with CDemonActor::save
// nocedit 0x0040b8f0
void CActorArchive::archiveKeyframedModelInstance(CKeyFramedModelInstance &model,
                                                  std::string_view description) {
    std::string filename;
    archiveString(filename, description);
    model.setModelName(filename);
}

// deferred: writing the motion to a save file, with CMotionController::save
// nocedit 0x0040b9f0
void CActorArchive::archiveMotionState(CMotionController &motion, std::string_view description) {
    archiveDescription("motion state info opening brace", description);
    motion.load(scanner_);
    archiveDescription("motion state info closing brace", description);
}

// A part saved as any number but 0 is shown, which is all the original's readers asked of it. A
// bad entry names its field "description", as the original's did. The original took a count it
// couldn't read as whatever its stack held, and wrote a count past its parts beyond them.
// deferred: writing the parts to a save file, with CDemonActor::save
// nocedit 0x0040bae0
void CActorArchive::archivePartStatus(CDeformableModelInstance &model,
                                      std::string_view description) {
    archiveDescription("part status opening brace", description);
    const int count = scanner_.scanInteger().value_or(0);
    if (std::cmp_greater(count, CDeformableModelInstance::kMaxParts)) {
        common::displayErrorAndQuit(std::format(
            "CActorArchive::archivePartStatus - {} has {} parts", actor_.getActorName(), count));
    }
    const auto read_parts = [this, count](std::string_view type, auto set_part) {
        for (int i = 0; i < count; ++i) {
            const std::optional<int> value = scanner_.scanInteger();
            if (!value) {
                quitOnPropertyError(type, "description");
            }
            set_part(static_cast<std::size_t>(i), *value);
        }
        scanner_.skipWhitespace();
    };
    model.showAllParts();
    read_parts("part status entry", [&model](std::size_t part, int value) {
        model.setPartVisibility(part,
                                value == 0 ? EPartVisibility::kHidden : EPartVisibility::kShown);
    });
    model.clearAllTextureSetIndices();
    read_parts("part texture entry",
               [&model](std::size_t part, int value) { model.setPartTextureSet(part, value); });
    archiveDescription("part status info closing brace", description);
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
