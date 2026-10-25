#pragma once

#include "common/math/vector3i.h"
#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

int qsortByDisplayListEntry(SDisplayListSortEntry *a, SDisplayListSortEntry *b);
// Takes a point in camera space back to the world through the camera's inverse and origin.
[[nodiscard]] common::CVector3i transformToWorldSpace(const common::CVector3i &input,
                                                      const engine::CMatrix &matrix);

} // namespace nocturne::core
