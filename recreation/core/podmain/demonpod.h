#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "engine/pod/pod.h"

namespace nocturne::core {

class CDemonPod : public engine::CPod {
public:
    CDemonPod();
    ~CDemonPod() override;

    void load() override;
};

} // namespace nocturne::core
