#pragma once

#include "core/boxactor/boxactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CLightActor : public CBoxActor {
public:
    static const CDemonActorType kType;

    CLightActor();
    ~CLightActor() override;

    void setup() override;
    void process(float delta_time) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
};

} // namespace nocturne::core
