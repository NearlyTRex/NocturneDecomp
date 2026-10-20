#include "core/colonel/colonel.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

constinit const CDemonActorType CColonel::kType =
    makeActorType("CColonel", &CHero::kType, &CColonel::create, kVersion);

// deferred: loading the model colonel.dfm, with CDeformableModelInstance::init
// deferred: the defaults the constructor gives the Colonel's own fields, with the steps that read
//   them
// nocedit 0x0043f7e0
CColonel::CColonel() = default;

// nocedit 0x00440670
CColonel::~CColonel() = default;

// nocedit 0x0043f7d0
const CDemonActorType &CColonel::getActorType() const {
    return kType;
}

// nocedit 0x0043f7a0
std::unique_ptr<CDemonActor> CColonel::create() {
    return std::make_unique<CColonel>();
}

} // namespace nocturne::core
