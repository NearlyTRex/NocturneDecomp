#include "core/event/eventlist.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CEventList, IsConcrete) {
    static_assert(!std::is_abstract_v<CEventList>);
}

TEST(CEventList, Constructors) {
    static_assert(std::is_constructible_v<CEventList>);
}

TEST(CEventList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEventList::reset), void (CEventList::*)()>);
    static_assert(std::is_same_v<decltype(&CEventList::process), void (CEventList::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEventList::executeCommands), int (CEventList::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CEventList::evaluateCondition), int (CEventList::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CEventList::validateCondition), char *(CEventList::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CEventList::validateCommands), char *(CEventList::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CEventList::render), void (CEventList::*)()>);
    static_assert(std::is_same_v<decltype(&CEventList::addOrRemovePersistentEvent),
                                 void (CEventList::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CEventList::resetGameFlags), void (CEventList::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEventList::setCounter), void (CEventList::*)(char *, int)>);
    static_assert(
        std::is_same_v<decltype(&CEventList::getCounterValue), int (CEventList::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CEventList::setActorVariable),
                                 void (CEventList::*)(char *, CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CEventList::getActorByVarName),
                                 CDemonActor *(CEventList::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CEventList::restartSfxEntries), void (CEventList::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEventList::loadState), int (CEventList::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CEventList::saveState), int (CEventList::*)(std::FILE *)>);
}

} // namespace
} // namespace nocturne::core
