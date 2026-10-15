#include "common/math/vector3f.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/set/demonset.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglprimitivequad.h"

#include <cstddef>
#include <span>

namespace nocturne::core {

// nocedit 0x004778d0
void CKeyFramedModel::rotateAndLightVertices(int frame_index, CDemonSet &set) const {
    set.rotateVerticies(getFrameVertices(frame_index));
    set.lightVerticies(vertex_count_, polygons_, vertex_normals_);
}

// The original skipped the parts an instance hid, which arrives with CKeyFramedModelInstance; in
// the shadow pass it batched each part whole without a texture, which arrives with
// setShadowPass's callers. It read the first texture of a model that has none, and culled a model
// with no frames by winding when its box's diagonal passed 250, which a box with no frames can't.
// nocedit 0x00477980
void CKeyFramedModel::submitToRenderer(int render_flags, engine::CDemonRenderer &renderer,
                                       CDemonSet &set) {
    if (disable_backface_culling_ != 0) {
        renderer.setRenderingState(false);
        renderer.setPlaneCullingEnabled(false);
    } else if (frame_count_ > 0) {
        renderer.setRenderingState(true);
    }
    int current_texture = -1;
    std::size_t first = 0;
    for (const SPart &part : parts_) {
        const std::size_t end = first + static_cast<std::size_t>(part.poly_count);
        if (textures_.size() < 2) {
            if (!textures_.empty()) {
                renderer.captureTexture(textures_.front());
            }
            set.renderPrimitiveBatch(std::span(polygons_).subspan(first, end - first),
                                     render_flags);
        } else {
            submitTextureRuns(first, end, render_flags, current_texture, renderer, set);
        }
        first = end;
    }
    renderer.setRenderingState(false);
    renderer.enableFaceCapture(true);
}

// The current texture carries over from one part to the next.
void CKeyFramedModel::submitTextureRuns(std::size_t first, std::size_t end, int render_flags,
                                        int &current_texture, engine::CDemonRenderer &renderer,
                                        CDemonSet &set) {
    while (first < end) {
        const int texture = poly_texture_indices_[first];
        if (texture != current_texture) {
            renderer.captureTexture(textures_[static_cast<std::size_t>(texture)]);
            current_texture = texture;
        }
        std::size_t run_end = first + 1;
        while (run_end < end && poly_texture_indices_[run_end] == current_texture) {
            ++run_end;
        }
        set.renderPrimitiveBatch(std::span(polygons_).subspan(first, run_end - first),
                                 render_flags);
        first = run_end;
    }
}

// The original took an instance to hide parts by, which arrives with CKeyFramedModelInstance,
// and its two helpers each checked for polygons again.
// nocedit 0x00477850
void CKeyFramedModel::prepareForRender(int frame_index, int render_flags,
                                       engine::CDemonRenderer &renderer, CDemonSet &set) {
    if (polygons_.empty()) {
        return;
    }
    rotateAndLightVertices(frame_index, set);
    submitToRenderer(render_flags, renderer, set);
}

} // namespace nocturne::core
