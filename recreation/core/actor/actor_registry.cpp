#include "common/error/error.h"
#include "core/actor/actor.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/hero/heroplaceholder.h"

#include <algorithm>
#include <array>
#include <format>
#include <memory>
#include <string_view>

namespace nocturne::core {

// Each class's file registered it as the game started; here the ported classes are listed in
// one place, and each port adds its own.
// nocedit 0x00408320
void CActor::registerActorClasses() {
    static constexpr std::array<const CDemonActorType *, 2> kTypes = {&CDemonActor::kType,
                                                                      &CHeroPlaceholder::kType};
    for (const CDemonActorType *type : kTypes) {
        registerActorClass(*type);
    }
}

// The hash is the record's own, worked out with its name.
// nocedit 0x0040c2e0
void CActor::registerActorClass(const CDemonActorType &type) {
    if (registrations_.size() >= kMaxActorTypes) {
        common::displayErrorAndQuit("Too many actor types!");
    }
    registrations_.push_back(&type);
}

// nocedit 0x0040c3c0
const CDemonActorType *CActor::getActorClassByName(std::string_view class_name) const {
    const std::uint32_t hash = hashClassName(class_name);
    const auto found = std::ranges::find(registrations_, hash, &CDemonActorType::name_hash);
    return found == registrations_.end() ? nullptr : *found;
}

// The original also quit when there was no memory for the actor.
// nocedit 0x0040c430
std::unique_ptr<CDemonActor> CActor::createActorByName(std::string_view class_name) const {
    const CDemonActorType *type = getActorClassByName(class_name);
    if (type == nullptr) {
        common::displayErrorAndQuit(
            std::format("Can't create actor of unknown class type: {}", class_name));
    }
    if (type->factory_func == nullptr) {
        common::displayErrorAndQuit(
            std::format("Can't create instance of abstract type {}", class_name));
    }
    return type->factory_func();
}

} // namespace nocturne::core
