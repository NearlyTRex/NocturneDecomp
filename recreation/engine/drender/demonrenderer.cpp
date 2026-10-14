#include "engine/drender/demonrenderer.h"

namespace nocturne::engine {

CDemonRenderer::CDemonRenderer(CMatrix &matrix, const C2d &two_d, C3d &three_d)
    : matrix_(matrix), two_d_(two_d), three_d_(three_d) {}

} // namespace nocturne::engine
