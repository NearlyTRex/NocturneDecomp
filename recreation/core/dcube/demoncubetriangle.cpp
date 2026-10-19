#include "core/dcube/demoncubetriangle.h"

#include "common/serial/binaryreader.h"

#include <array>
#include <cstdint>

namespace nocturne::core {

// The original kept pointers into the cube's vertices; these are the indices it built them from.
// nocedit 0x004551d0
void CDemonCubeTriangle::readFromFile(common::CBinaryReader &reader) {
    for (int &index : vertex_indices_) {
        index = reader.read<std::int32_t>();
    }
    normal_.x = reader.read<float>();
    normal_.y = reader.read<float>();
    normal_.z = reader.read<float>();
    plane_distance_ = reader.read<float>();
    dominant_axis_ = reader.read<std::uint32_t>();
}

const std::array<int, 3> &CDemonCubeTriangle::getVertexIndices() const {
    return vertex_indices_;
}

const common::CVector3f &CDemonCubeTriangle::getNormal() const {
    return normal_;
}

float CDemonCubeTriangle::getPlaneDistance() const {
    return plane_distance_;
}

std::uint32_t CDemonCubeTriangle::getDominantAxis() const {
    return dominant_axis_;
}

} // namespace nocturne::core
