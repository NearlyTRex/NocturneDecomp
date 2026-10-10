#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CKeyFramedModelInstance {
public:
    CKeyFramedModelInstance();

    void prepareForRendering(float animation_frame, int render_flags);
    CKeyFramedModel *preCache();
    CKeyFramedModel *getModelPtr();
    void setModelName(char *filename);
};

} // namespace nocturne::core
