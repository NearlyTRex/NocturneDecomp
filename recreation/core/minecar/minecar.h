#pragma once

#include "core/fwd.h"
#include "core/platfrm/platform.h"

namespace nocturne::core {

class CMineCar : public CPlatform {
public:
    static const CDemonActorType kType;

    CMineCar();
    ~CMineCar() override;

    void setup() override;
    void process(float delta_time) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
};

} // namespace nocturne::core
