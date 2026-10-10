#pragma once

#include "core/boxactor/boxactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CLightActor : public CBoxActor {
public:
    CLightActor();
    ~CLightActor() override;

    void setup() override;
    void process(float delta_time) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
