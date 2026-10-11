#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "engine/pod/pod.h"

namespace nocturne::core {

// The game's pods: those pod.ini lists, in its order, or else every *.pod in the directory.
class CDemonPod : public engine::CPod {
public:
    CDemonPod(platform::IFileSystem &file_system, const engine::CDosIo &dosio);
    ~CDemonPod() override;
    CDemonPod(const CDemonPod &) = delete;
    CDemonPod &operator=(const CDemonPod &) = delete;

    void load() override;
};

} // namespace nocturne::core
