#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {

// What an archive finds each class's saved version in, makes and finds the actors fields name
// with, and draws the C library's random numbers from.
struct SActorArchiveOwners {
    const CActor &actor_classes;
    IActorLookup &actors;
    common::CWatcomRandom &crt_random;
};

// What an actor's archive() reads its fields from: the mission or save file it is loaded from,
// which the original kept in actor.cpp's globals while an actor was read. Each field is a value
// and its description, which runs to the end of the line; a field that can't be read is fatal.
class CActorArchive {
public:
    CActorArchive(common::CTextScanner &scanner, const CDemonActor &actor,
                  const SActorArchiveOwners &owners);

    [[nodiscard]] common::CTextScanner &getScanner() const;
    // For fields that read actors of their own.
    [[nodiscard]] const SActorArchiveOwners &getOwners() const;
    // The version the file saved the class's fields in.
    [[nodiscard]] int getSavedVersion(const CDemonActorType &type) const;

    // "%d,%f,%f,%f": the area, then the point.
    void archiveLocation(CLocation &location, std::string_view description);
    // "%f,%f,%f": pitch, heading and bank, into x, z and y.
    void archiveOrientation(common::CVector3f &orientation, std::string_view description);
    void archiveVector(common::CVector3f &vector, std::string_view description);
    void archiveFloat(float &value, std::string_view description);
    void archiveInteger(int &value, std::string_view description);
    // An integer that is any number but 0 for true.
    void archiveFlag(bool &value, std::string_view description);
    // An integer that is the enumeration's value.
    template <typename TEnum>
        requires std::is_enum_v<TEnum>
    void archiveEnum(TEnum &value, std::string_view description) {
        auto number = static_cast<int>(value);
        archiveInteger(number, description);
        value = static_cast<TEnum>(number);
    }
    // Quoted, after any whitespace; the quotes may hold nothing.
    void archiveString(std::string &value, std::string_view description);
    // A string marked for translation, which its description says.
    void archiveLocalizedString(std::string &value, std::string_view description);
    // Quoted by name, or "(none)" for no actor.
    void archiveActor(CDemonActor *&actor, std::string_view description);
    // A line, the count, then each file name quoted on its own line, and a closing line.
    void archiveClothList(CClothList &cloth_list, std::string_view description);
    // The model's file name, quoted.
    void archiveKeyframedModelInstance(CKeyFramedModelInstance &model,
                                       std::string_view description);
    // A line, the motion and frame, and a closing line.
    void archiveMotionState(CMotionController &motion, std::string_view description);
    // A line, the count of parts, each part's visibility, then each one's texture set, and a
    // closing line. Every part is shown, with its first texture set, until the file says.
    void archivePartStatus(CDeformableModelInstance &model, std::string_view description);

private:
    // The rest of the line; the end of the file before its newline is fatal.
    void archiveDescription(std::string_view type, std::string_view description);
    [[noreturn]] void quitOnPropertyError(std::string_view type,
                                          std::string_view description) const;

    common::CTextScanner &scanner_;
    const CDemonActor &actor_;
    SActorArchiveOwners owners_;
};

} // namespace nocturne::core
