#include "core/actor/actor_functions.h"

#include "common/text/scan.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"

#include <algorithm>
#include <cstdint>
#include <optional>
#include <string_view>

namespace nocturne::core {
namespace {

void skipWhitespace(std::string_view &text) {
    text.remove_prefix(std::min(text.find_first_not_of(common::kWhitespace), text.size()));
}

// Takes c, and a second c after it if there is one.
void takeOperator(std::string_view &text, char c) {
    text.remove_prefix(1);
    if (text.starts_with(c)) {
        text.remove_prefix(1);
    }
}

// nocedit 0x0040c700
bool checkNameHash(const CDemonActorType *type_ptr, std::uint32_t name_hash) {
    for (; type_ptr != nullptr; type_ptr = type_ptr->parent_type) {
        if (type_ptr->name_hash == name_hash) {
            return true;
        }
    }
    return false;
}

std::optional<bool> matchClassExpression(const CDemonActorType &type, std::string_view &text);

// A name runs to the first character that isn't a letter or digit.
// nocedit 0x0040c4f0
std::optional<bool> matchClassTerm(const CDemonActorType &type, std::string_view &text) {
    skipWhitespace(text);
    if (text.starts_with('(')) {
        text.remove_prefix(1);
        const std::optional<bool> inner = matchClassExpression(type, text);
        if (!inner) {
            return std::nullopt;
        }
        skipWhitespace(text);
        if (!text.starts_with(')')) {
            return std::nullopt;
        }
        text.remove_prefix(1);
        return inner;
    }
    if (text.starts_with('!')) {
        text.remove_prefix(1);
        const std::optional<bool> negated = matchClassTerm(type, text);
        if (!negated) {
            return std::nullopt;
        }
        return !*negated;
    }
    if (text.empty() || !isClassNameCharacter(text.front())) {
        return std::nullopt;
    }
    std::uint32_t hash = 0;
    while (!text.empty() && isClassNameCharacter(text.front())) {
        hash = mixClassNameHash(hash, text.front());
        text.remove_prefix(1);
    }
    return checkNameHash(&type, hash);
}

// An '&' can only clear the result and an '|' or a bare term only set it. It stops before a ')'.
// nocedit 0x0040c610
std::optional<bool> matchClassExpression(const CDemonActorType &type, std::string_view &text) {
    bool result = false;
    while (true) {
        skipWhitespace(text);
        if (text.empty() || text.front() == ')') {
            return result;
        }
        const char op = text.front();
        if (op == '|' || op == '&') {
            takeOperator(text, op);
        }
        const std::optional<bool> term = matchClassTerm(type, text);
        if (!term) {
            return std::nullopt;
        }
        if (op == '&') {
            result = result && *term;
        } else {
            result = result || *term;
        }
    }
}

// nocedit 0x0040c740
bool matchesClassName(const CDemonActorType &type, std::string_view class_name) {
    return matchClassExpression(type, class_name).value_or(false);
}

} // namespace

// nocedit 0x0040c6d0
bool isOfClass(const CDemonActor *actor_ptr, std::string_view class_name) {
    return actor_ptr != nullptr && matchesClassName(actor_ptr->getActorType(), class_name);
}

// nocedit 0x0040c760
bool isOfClassHash(const CDemonActor *actor_ptr, std::uint32_t class_name_hash) {
    return actor_ptr != nullptr && checkNameHash(&actor_ptr->getActorType(), class_name_hash);
}

// nocedit 0x0040c790
CDemonActor *castToClassHash(CDemonActor *actor_ptr, std::uint32_t class_name_hash) {
    return isOfClassHash(actor_ptr, class_name_hash) ? actor_ptr : nullptr;
}

} // namespace nocturne::core
