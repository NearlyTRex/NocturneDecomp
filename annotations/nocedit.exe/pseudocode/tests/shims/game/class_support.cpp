// =============================================================================
// CLASS SUPPORT — see class_support.h
// =============================================================================

#include "class_support.h"

#include "core/ascii_case.h"

#include <cstdio>

namespace class_support {

std::map<const void *, CDemonActorType *> types;

CDemonActorType *actor_type(CDemonActor *actor) {
    std::map<const void *, CDemonActorType *>::const_iterator it = types.find(actor);
    return (it != types.end()) ? it->second : nullptr;
}

CDemonActorType make(const char *name, uint hash, CDemonActorType *parent) {
    CDemonActorType type = CDemonActorType();
    std::snprintf(type.class_name, sizeof(type.class_name), "%s", name);
    type.name_hash = hash;
    type.parent_type = parent;
    return type;
}

} // namespace class_support

// isOfClassHash: the actor's own type, then each base in turn.
CDemonActor *__cdecl core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor_ptr,
                                                                 uint class_name_hash) {
    if (actor_ptr == nullptr)
        return nullptr;
    for (CDemonActorType *t = (*actor_ptr->vtable._ub->getActorType)(actor_ptr); t != nullptr;
         t = t->parent_type) {
        if (t->name_hash == class_name_hash)
            return actor_ptr;
    }
    return nullptr;
}

// The same walk by name, for a plain class name.
int __cdecl core_actor_cpp_isOfClass_FUN_0040c6d0(CDemonActor *actor_ptr, char *class_name) {
    if (actor_ptr == nullptr)
        return 0;
    for (CDemonActorType *t = (*actor_ptr->vtable._ub->getActorType)(actor_ptr); t != nullptr;
         t = t->parent_type) {
        if (nocturne_ascii_iequals(t->class_name, class_name))
            return 1;
    }
    return 0;
}
