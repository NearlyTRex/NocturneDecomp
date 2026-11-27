#include "common/error/error.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/polygonstate.h"
#include "engine/prim/prim.h"
#include "engine/texture/texture.h"
#include "platform/inputface.h"
#include "platform/mrglprimitivequad.h"
#include "platform/mrgltexturebasic.h"
#include "platform/rendervertex.h"
#include "platform/trianglepackedindices.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::engine {
namespace {

// The most triangles and textures a capture keeps.
constexpr std::size_t kMaxCapturedFaces = 5000;
constexpr std::size_t kMaxCapturedTextures = 101;
// A face's 0.16 texture coordinates from a polygon's 8.24.
constexpr int kToFaceCoordinate = 8;
// A corner past the view has its sign bit and a bit for each side it is past.
constexpr std::uint32_t kPastViewBit = 0x80000000U;
constexpr std::uint32_t kSideBits = 0xffU;

using platform::SInputFace;
using platform::SRenderVertex;

[[nodiscard]] std::uint16_t toFaceCoordinate(int coordinate) {
    return static_cast<std::uint16_t>(coordinate >> kToFaceCoordinate);
}

[[nodiscard]] std::array<std::uint16_t, 3> getCorners(const SInputFace &face) {
    return {face.vertex_indices.vertex_index_0, face.vertex_indices.vertex_index_1,
            face.vertex_indices.vertex_index_2};
}

} // namespace

// nocedit 0x0048da20
bool CDemonRenderer::isNearerCapturedFace(const SCapturedFace &first, const SCapturedFace &second) {
    return first.depth < second.depth;
}

// nocedit 0x0048da50
bool CDemonRenderer::isFartherCapturedFace(const SCapturedFace &first,
                                           const SCapturedFace &second) {
    return second.depth < first.depth;
}

// The original left the capture on in the shadow pass only to turn it off.
// nocedit 0x0048d6c0
void CDemonRenderer::setTextureCaptureMode(bool nearest_first) {
    if (shadow_pass_) {
        texture_capture_ = ETextureCapture::Off;
        return;
    }
    captured_faces_.clear();
    captured_textures_.clear();
    texture_capture_ =
        nearest_first ? ETextureCapture::NearestFirst : ETextureCapture::FarthestFirst;
}

// The original's compare sorted with the CRT's qsort, which leaves faces of one depth in no set
// order; here they keep the order they came in. A face kept before any texture is drawn with the
// texture current, where the original read in front of its textures' table after another.
// nocedit 0x0048da80
void CDemonRenderer::processCapturedFaces() {
    if (shadow_pass_) {
        return;
    }
    std::ranges::stable_sort(captured_faces_, texture_capture_ == ETextureCapture::FarthestFirst
                                                  ? isFartherCapturedFace
                                                  : isNearerCapturedFace);
    texture_capture_ = ETextureCapture::Off;
    if (face_capture_enabled_) {
        setRenderingState(true);
    }
    int current_texture = -1;
    for (const SCapturedFace &captured : captured_faces_) {
        if (captured.texture != current_texture && captured.texture >= 0) {
            captureTexture(*captured_textures_.at(static_cast<std::size_t>(captured.texture)));
            current_texture = captured.texture;
        }
        renderTexturedFace(captured.face, captured.render_flags);
    }
    setRenderingState(false);
}

// nocedit 0x0048d7a0
void CDemonRenderer::processQuadPrimitive(const platform::SMRGLPrimitiveQuad &poly,
                                          int render_flags) {
    if (!isFacing(poly.surface_normal)) {
        return;
    }
    const auto face = [&poly](std::size_t a, std::size_t b, std::size_t c) {
        const auto index = [&poly](std::size_t corner) {
            return static_cast<std::uint16_t>(poly.vertices[corner].vertex_index);
        };
        const auto u = [&poly](std::size_t corner) {
            return toFaceCoordinate(poly.vertices[corner].texture_u);
        };
        const auto v = [&poly](std::size_t corner) {
            return toFaceCoordinate(poly.vertices[corner].texture_v);
        };
        return SInputFace{.vertex_indices = {.vertex_index_0 = index(a),
                                             .vertex_index_1 = index(b),
                                             .vertex_index_2 = index(c)},
                          .u_coord_0 = u(a),
                          .u_coord_1 = u(b),
                          .u_coord_2 = u(c),
                          .v_coord_0 = v(a),
                          .v_coord_1 = v(b),
                          .v_coord_2 = v(c)};
    };
    captureFace(face(0, 1, 2), render_flags);
    constexpr std::size_t kQuadCorners = 4;
    if (poly.vertices.size() >= kQuadCorners) {
        captureFace(face(0, 2, 3), render_flags);
    }
}

// The original kept the faces, and the textures as copies of their names, in fixed tables.
// nocedit 0x0048d8a0
void CDemonRenderer::captureFace(const SInputFace &face, int render_flags) {
    const std::array<std::uint16_t, 3> corners = getCorners(face);
    const auto vertex = [this](std::uint16_t index) -> const SRenderVertex & {
        return vertex_buffer_[index];
    };
    if (!face_capture_enabled_) {
        if (!getTriangleWindingFromPackedIndices(vertex_buffer_, face.vertex_indices,
                                                 three_d_.getCullingMode())) {
            return;
        }
    } else {
        std::uint32_t past = ~0U;
        for (const std::uint16_t corner : corners) {
            past &= static_cast<std::uint32_t>(vertex(corner).projected_vertex.screen_x);
        }
        if ((past & kPastViewBit) != 0 && (past & kSideBits) != 0) {
            return;
        }
    }
    if (captured_faces_.size() >= kMaxCapturedFaces) {
        common::displayErrorAndQuit("CDR::captureFace - too many faces captured");
    }
    int depth = vertex(corners[0]).projected_vertex.transformed_z;
    for (const std::uint16_t corner : std::span(corners).subspan(1)) {
        depth = std::min(depth, vertex(corner).projected_vertex.transformed_z);
    }
    captured_faces_.push_back({.face = face,
                               .texture = static_cast<int>(captured_textures_.size()) - 1,
                               .render_flags = render_flags,
                               .depth = depth});
}

// nocedit 0x0048db80
void CDemonRenderer::captureTexture(platform::SMRGLTextureBasic &texture) {
    textures_.ensureTextureLoaded(texture);
    if (texture_capture_ == ETextureCapture::Off) {
        return;
    }
    captured_textures_.push_back(&texture);
    if (captured_textures_.size() > kMaxCapturedTextures) {
        common::displayErrorAndQuit("CDR::texture - Too many captured textures");
    }
}

// In the shadow pass only the depth is drawn, into the light's map, and the corners keep their
// texture coordinates.
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// nocedit 0x0048b030
void CDemonRenderer::renderTexturedFace(const SInputFace &face, int render_flags) {
    const int flags = render_flags == -1 ? kDefaultTexturedFlags : render_flags;
    if (texture_capture_ != ETextureCapture::Off) {
        captureFace(face, flags);
        return;
    }
    const std::array<std::uint16_t, 3> corners = getCorners(face);
    const std::array<int, 3> vertex_indices{corners[0], corners[1], corners[2]};
    if (shadow_pass_) {
        clipAndFillPoly(vertex_indices, getShadowState());
        return;
    }
    const std::array<std::uint16_t, 3> u{face.u_coord_0, face.u_coord_1, face.u_coord_2};
    const std::array<std::uint16_t, 3> v{face.v_coord_0, face.v_coord_1, face.v_coord_2};
    for (std::size_t i = 0; i < corners.size(); ++i) {
        SRenderVertex &corner = vertex_buffer_[corners.at(i)];
        corner.u = static_cast<int>(u.at(i)) << kToFaceCoordinate;
        corner.v = static_cast<int>(v.at(i)) << kToFaceCoordinate;
    }
    clipAndFillPoly(vertex_indices, getPerspectiveState(static_cast<std::uint32_t>(flags)));
}

} // namespace nocturne::engine
