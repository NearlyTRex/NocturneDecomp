#include "core/dmodel/keyframedmodel.h"

#include "common/error/error.h"
#include "engine/dosio/dosio.h"

#include <algorithm>
#include <format>
#include <optional>

namespace nocturne::core {

// nocedit 0x00476cf0
CKeyFramedModel::CKeyFramedModel(const engine::CDosIo &dosio) : dosio_(dosio) {}

// nocedit 0x00476d90
CKeyFramedModel::~CKeyFramedModel() = default;

// nocedit 0x00476db0
void CKeyFramedModel::load(std::string_view filename) {
    free();
    const std::optional<std::string> file = dosio_.readFile("models", filename);
    if (!file) {
        common::displayErrorAndQuit(std::format("Can't open keyframed model {}", filename));
    }
    if (file->starts_with('/')) {
        readTextModel(*file);
    } else {
        readBinaryModel(std::as_bytes(std::span(*file)));
    }
    calculateFrameBounds();
    calcNormals();
}

// The bounds are left as they were, as the original leaves them.
// nocedit 0x00477690
void CKeyFramedModel::free() {
    vertex_count_ = 0;
    frame_count_ = 0;
    vertices_.clear();
    vertex_normals_.clear();
    polygons_.clear();
    poly_texture_indices_.clear();
    env_map_opacities_.clear();
    textures_.clear();
    parts_.clear();
    frame_bounds_.clear();
    collision_triangles_.clear();
    collision_triangle_count_ = 0;
    transparent_pixel_flag_ = 0;
    disable_backface_culling_ = 0;
}

// A negative count asked the original for an impossible block, which was fatal. The original's
// fixed tables held 300 textures and 30 parts; these vectors take any number.
// nocedit 0x00477bf0
void CKeyFramedModel::allocate(int vertex_count, int poly_count, int texture_count, int part_count,
                               int frame_count) {
    free();
    if (std::min({vertex_count, poly_count, texture_count, part_count, frame_count}) < 0) {
        common::displayErrorAndQuit(
            std::format("Out of memory in CKeyFramedModel::allocate.  frameCount={}, "
                        "vertexCount={}, polyCount={}",
                        frame_count, vertex_count, poly_count));
    }
    vertex_count_ = vertex_count;
    frame_count_ = frame_count;
    vertices_.resize(static_cast<std::size_t>(vertex_count) *
                     static_cast<std::size_t>(frame_count));
    polygons_.resize(static_cast<std::size_t>(poly_count));
    poly_texture_indices_.resize(static_cast<std::size_t>(poly_count));
    textures_.resize(static_cast<std::size_t>(texture_count));
    parts_.resize(static_cast<std::size_t>(part_count));
    frame_bounds_.resize(static_cast<std::size_t>(frame_count));
    if (frame_count == 1) {
        vertex_normals_.resize(static_cast<std::size_t>(vertex_count));
    }
}

// nocedit 0x00477890
std::span<const common::CVector3i> CKeyFramedModel::getFrameVertices(int frame_index) const {
    if (frame_count_ == 0) {
        return {};
    }
    const auto frame = static_cast<std::size_t>(std::clamp(frame_index, 0, frame_count_ - 1));
    const auto count = static_cast<std::size_t>(vertex_count_);
    return std::span(vertices_).subspan(frame * count, count);
}

int CKeyFramedModel::getVertexCount() const {
    return vertex_count_;
}

int CKeyFramedModel::getFrameCount() const {
    return frame_count_;
}

std::span<const common::CVector3i> CKeyFramedModel::getVertexNormals() const {
    return vertex_normals_;
}

std::span<const platform::SMRGLPrimitiveQuad> CKeyFramedModel::getPolygons() const {
    return polygons_;
}

std::span<const int> CKeyFramedModel::getPolyTextureIndices() const {
    return poly_texture_indices_;
}

std::span<const std::uint8_t> CKeyFramedModel::getEnvMapOpacities() const {
    return env_map_opacities_;
}

std::span<const platform::SMRGLTextureBasic> CKeyFramedModel::getTextures() const {
    return textures_;
}

std::span<const CKeyFramedModel::SPart> CKeyFramedModel::getParts() const {
    return parts_;
}

const CBoundingBox3D &CKeyFramedModel::getBounds() const {
    return bounds_;
}

std::span<const CBoundingBox3D> CKeyFramedModel::getFrameBounds() const {
    return frame_bounds_;
}

std::span<const CDemonTriangle> CKeyFramedModel::getCollisionTriangles() const {
    return collision_triangles_;
}

int CKeyFramedModel::getCollisionTriangleCount() const {
    return collision_triangle_count_;
}

int CKeyFramedModel::getTransparentPixelFlag() const {
    return transparent_pixel_flag_;
}

int CKeyFramedModel::getDisableBackfaceCulling() const {
    return disable_backface_culling_;
}

} // namespace nocturne::core
