#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <memory>

namespace nocturne::core {

// Where a mission puts a hero: the hero is created in its place when the mission starts.
class CHeroPlaceholder : public CDemonActor {
public:
    static const CDemonActorType kType;

    CHeroPlaceholder();
    ~CHeroPlaceholder() override;
    CHeroPlaceholder(const CHeroPlaceholder &) = delete;
    CHeroPlaceholder &operator=(const CHeroPlaceholder &) = delete;
    CHeroPlaceholder(CHeroPlaceholder &&) = delete;
    CHeroPlaceholder &operator=(CHeroPlaceholder &&) = delete;

    [[nodiscard]] const CDemonActorType &getActorType() const override;

    CHero *createHero(EHeroType hero_type);

    // Which of the mission's heroes this place is for, the first being 0.
    [[nodiscard]] int getIndex() const;
    void setIndex(int index);

private:
    static std::unique_ptr<CDemonActor> create();

    int index_ = 0;
};

} // namespace nocturne::core
