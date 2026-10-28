#include "core/health/healthitem.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/dmodel/keyframedmodelinstance.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;
// The version that held a shown name.
constexpr int kNamedVersion = 2;

} // namespace

// nocedit 0x004f1d60
constinit const CDemonActorType CHealthItem::kType =
    makeActorType("CHealthItem", &CDemonActor::kType, &CHealthItem::create, kVersion);

// nocedit 0x004f1dd0
CHealthItem::CHealthItem() {
    model_.setModelName("bullet.kfm");
}

// nocedit 0x004f20d0
CHealthItem::~CHealthItem() = default;

// nocedit 0x004f1dc0
const CDemonActorType &CHealthItem::getActorType() const {
    return kType;
}

// nocedit 0x004f1d90
std::unique_ptr<CDemonActor> CHealthItem::create() {
    return std::make_unique<CHealthItem>();
}

// Version 2 held a shown name, which is read and dropped.
// nocedit 0x004f1f20
void CHealthItem::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    actor_archive.archiveInteger(use_count_, "useCount");
    actor_archive.archiveFloat(hp_restored_, "hpRestored");
    if (actor_archive.getSavedVersion(kType) == kNamedVersion) {
        std::string descriptive_name;
        actor_archive.archiveLocalizedString(descriptive_name, "descriptiveName");
    }
}

// nocedit 0x004f1e50
void CHealthItem::process(float /*delta_time*/) {}

const CKeyFramedModelInstance &CHealthItem::getModel() const {
    return model_;
}

int CHealthItem::getUseCount() const {
    return use_count_;
}

float CHealthItem::getHpRestored() const {
    return hp_restored_;
}

} // namespace nocturne::core
