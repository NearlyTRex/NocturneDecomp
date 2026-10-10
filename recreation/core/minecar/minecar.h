#pragma once

#include "core/fwd.h"
#include "core/platfrm/platform.h"

namespace nocturne::core {

class CMineCar : public CPlatform {
public:
    CMineCar();
    ~CMineCar() override;

    void setup() override;
    void process(float delta_time) override;
    CDemonActorType *getActorType() override;
};

} // namespace nocturne::core
