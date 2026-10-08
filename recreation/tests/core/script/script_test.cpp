#include "core/script/script.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CScript, IsConcrete) {
    static_assert(!std::is_abstract_v<CScript>);
}

TEST(CScript, Constructors) {
    static_assert(std::is_constructible_v<CScript>);
}

TEST(CScript, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CScript::clear), void (CScript::*)()>);
    static_assert(std::is_same_v<decltype(&CScript::process), void (CScript::*)()>);
    static_assert(std::is_same_v<decltype(&CScript::getLetterboxHeight), int (CScript::*)()>);
    static_assert(std::is_same_v<decltype(&CScript::renderSubtitles), void (CScript::*)()>);
    static_assert(
        std::is_same_v<decltype(&CScript::renderEditor), void (CScript::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CScript::loadScript), int (CScript::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CScript::initRuntime), void (CScript::*)()>);
    static_assert(std::is_same_v<decltype(&CScript::executeInitSection), void (CScript::*)()>);
    static_assert(std::is_same_v<decltype(&CScript::setSpeaker), void (CScript::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CScript::resetDialogState), void (CScript::*)()>);
    static_assert(std::is_same_v<decltype(&CScript::skipCinematic), int (CScript::*)()>);
    static_assert(std::is_same_v<decltype(&CScript::loadState), void (CScript::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CScript::saveState), void (CScript::*)(std::FILE *)>);
}

} // namespace
} // namespace nocturne::core
