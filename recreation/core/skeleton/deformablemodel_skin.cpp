#include "common/math/matrix3x4f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/skeleton/deformablemodel.h"
#include "core/xform/xform.h"

#include <cstddef>
#include <span>

namespace nocturne::core {

// Each weighed point is stored as a float before it is added. The original also took the parts'
// visibility, which it didn't read.
// nocedit 0x0059a880
void CDeformableModel::skinVertices(std::size_t lod_index,
                                    std::span<const common::CMatrix3x4f> bone_matrices,
                                    std::span<common::CVector3i> output) const {
    if (lod_index >= meshes_.size()) {
        return;
    }
    const std::vector<SVert> &vertices = meshes_[lod_index].vertices;
    for (std::size_t i = 0; i < vertices.size(); ++i) {
        const SVert &vertex = vertices[i];
        common::CVector3f skinned;
        if (vertex.num_bone_influences == 1) {
            skinned =
                transformVector3x4(vertex.bone_offsets[0], bone_matrices[vertex.bone_indices[0]]);
        } else {
            for (std::size_t bone = 0; bone < vertex.num_bone_influences; ++bone) {
                const common::CVector3f moved = transformVector3x4(
                    vertex.bone_offsets.at(bone), bone_matrices[vertex.bone_indices.at(bone)]);
                const float weight = vertex.bone_weights.at(bone);
                skinned.x += moved.x * weight;
                skinned.y += moved.y * weight;
                skinned.z += moved.z * weight;
            }
        }
        output[i] = skinned.toFixed8();
    }
}

} // namespace nocturne::core
