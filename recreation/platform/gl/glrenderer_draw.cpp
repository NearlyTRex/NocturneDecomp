#include "common/render/polygonbatch.h"
#include "platform/gl/gldevice.h"
#include "platform/gl/glrenderer.h"
#include "platform/inputface.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <array>
#include <cstddef>

namespace nocturne::platform::gl {
namespace {

constexpr std::size_t kPaletteBytes = 768;

common::SVertexInput toVertexInput(const SRenderVertex &vertex) {
    return {.screen_x = vertex.projected_vertex.screen_x,
            .screen_y = vertex.projected_vertex.screen_y,
            .transformed_z = vertex.projected_vertex.transformed_z,
            .u = vertex.u,
            .v = vertex.v,
            .r = vertex.r,
            .g = vertex.g,
            .b = vertex.b,
            .a = vertex.a};
}

// A polygon carries its own texture coordinates, since one position appears in several
// polygons with different ones.
common::SVertexInput toVertexInput(const SRenderVertex &vertex, int u, int v) {
    common::SVertexInput input = toVertexInput(vertex);
    input.u = u;
    input.v = v;
    return input;
}

// 0.16 coordinates into the 8.24 the other draws carry.
int widenCoordinate(std::uint16_t coordinate) {
    constexpr int kWiden = 8;
    return static_cast<int>(coordinate) << kWiden;
}

template <typename T>
std::span<T *> polygonList(T **polygons, int polygon_count) {
    if (polygons == nullptr || polygon_count <= 0) {
        return {};
    }
    return {polygons, static_cast<std::size_t>(polygon_count)};
}

} // namespace

common::SRenderStateInput CGlRenderer::gatherState(int render_flags) const {
    // Premultiplied colour is an INI option the engine zeroes before reading.
    return {.render_flags = static_cast<std::uint32_t>(render_flags),
            .blend_mode = readBridge(&CExternalRendererBridge::blend_mode, 0),
            .texture_opacity_present = texture_opacity_ != nullptr,
            .premultiply = false,
            .bilinear = readBridge(&CExternalRendererBridge::system_initialized, 0) != 0,
            .mipmapped = readBridge(&CExternalRendererBridge::rendering_quality, 0) != 0};
}

common::SVertexContext CGlRenderer::gatherVertexContext(std::uint32_t effective_flags,
                                                        int rhw_scale) const {
    constexpr int kHoldHeight = CGlDevice::kHoldHeight;
    common::SVertexContext context;
    context.render_flags = effective_flags;
    context.rhw_scale = static_cast<float>(rhw_scale);
    // Above 480 lines the engine submits geometry in the hold buffer's space. It picks the
    // hold buffer by the height alone, so the height alone decides the scale too.
    const int width = device_->getWidth();
    const int height = device_->getHeight();
    if (height > kHoldHeight) {
        context.screen_scale_x = static_cast<float>(width) / CGlDevice::kHoldWidth;
        context.screen_scale_y = static_cast<float>(height) / kHoldHeight;
    }
    context.current_alpha = readBridge(&CExternalRendererBridge::current_alpha, 0xff);
    context.palette_index = readBridge(&CExternalRendererBridge::console_text_color, 0) & 0xff;
    if (color_palette_ != nullptr) {
        context.palette = std::span(color_palette_, kPaletteBytes);
    }
    context.blend_mode = readBridge(&CExternalRendererBridge::blend_mode, 0);
    context.light = common::getDrawLighting(
        effective_flags, readBridge(&CExternalRendererBridge::current_lighting, 0));
    // Depth is normalised against the engine's draw distance, on the curve its processor
    // setting selects.
    const int far_depth = readBridge(&CExternalRendererBridge::full_screen_quad_depth, 1);
    context.w_buffer = readBridge(&CExternalRendererBridge::processor_type, 1) == 0;
    if (far_depth > 0) {
        constexpr float kWBufferRange = 256.0F;
        context.lod_scale =
            (context.w_buffer ? kWBufferRange : 1.0F) / static_cast<float>(far_depth);
    }
    return context;
}

bool CGlRenderer::canDraw() const {
    return hasDevice() && device_->isInScene();
}

common::SVertexContext CGlRenderer::beginDraw(int render_flags, int rhw_scale) {
    const common::SRenderStateInput input = gatherState(render_flags);
    const common::SPipelineState state = common::getPipelineState(input);
    CGlPipeline &pipeline = device_->getPipeline();
    // The epoch counts too: presenting and uploading the frame draw with state of their own,
    // and a record that only matched the state would skip the bind that puts it back.
    const SDrawRecord record{.state = state,
                             .texture = state.texture_enabled ? texture_object_ : 0,
                             .epoch = pipeline.getEpoch()};
    if (record_ != record) {
        device_->flush();
        pipeline.apply(state);
        device_->bindTexture(record.texture);
        record_ = record;
    }
    return gatherVertexContext(common::effectiveRenderFlags(input), rhw_scale);
}

void CGlRenderer::submitPolygon(const common::SVertexContext &context,
                                std::span<const common::SVertexInput> vertices) {
    common::CPolygonBatch &batch = device_->getBatch();
    std::span<common::SScreenVertex> slots = batch.addPolygon(vertices.size());
    if (slots.empty()) {
        device_->flush();
        slots = batch.addPolygon(vertices.size());
        if (slots.empty()) {
            return;
        }
    }
    for (std::size_t i = 0; i < vertices.size(); ++i) {
        slots[i] = common::convertVertex(context, vertices[i]);
    }
    if (batch.shouldFlush()) {
        device_->flush();
    }
}

void CGlRenderer::drawGathered(int render_flags) {
    depths_.clear();
    for (const common::SVertexInput &vertex : polygon_) {
        depths_.push_back(vertex.transformed_z);
    }
    const common::SVertexContext context =
        beginDraw(render_flags, common::getFarthestDepth(depths_));
    submitPolygon(context, polygon_);
}

int CGlRenderer::drawPolygon(SRenderVertex *vertices, int vertex_count, int render_flags) {
    if (!canDraw() || vertices == nullptr || vertex_count <= 0) {
        return 0;
    }
    polygon_.clear();
    for (const SRenderVertex &vertex :
         std::span(vertices, static_cast<std::size_t>(vertex_count))) {
        polygon_.push_back(toVertexInput(vertex));
    }
    drawGathered(render_flags);
    return 1;
}

int CGlRenderer::drawPolygon2(SRenderVertex **vertex_array, int vertex_count, int render_flags) {
    if (!canDraw() || vertex_array == nullptr || vertex_count <= 0) {
        return 0;
    }
    polygon_.clear();
    for (const SRenderVertex *vertex :
         std::span(vertex_array, static_cast<std::size_t>(vertex_count))) {
        polygon_.push_back(toVertexInput(*vertex));
    }
    drawGathered(render_flags);
    return 1;
}

int CGlRenderer::drawPolyList(SRenderVertex *vertex_buffer, SMRGLPrimitiveQuad **polygons,
                              int polygon_count, int render_flags) {
    if (!canDraw() || vertex_buffer == nullptr) {
        return 0;
    }
    const common::SVertexContext context = beginDraw(render_flags, kListRhwScale);
    for (const SMRGLPrimitiveQuad *polygon : polygonList(polygons, polygon_count)) {
        if (polygon == nullptr || polygon->vertices.size() < 3) {
            continue;
        }
        polygon_.clear();
        for (const SMRGLVertex &corner : polygon->vertices) {
            polygon_.push_back(toVertexInput(vertex_buffer[corner.vertex_index], corner.texture_u,
                                             corner.texture_v));
        }
        submitPolygon(context, polygon_);
    }
    return 1;
}

int CGlRenderer::drawPolyList2(SRenderVertex *vertex_buffer, SInputFace **polygons,
                               int polygon_count, int render_flags) {
    if (!canDraw() || vertex_buffer == nullptr) {
        return 0;
    }
    const common::SVertexContext context = beginDraw(render_flags, kListRhwScale);
    for (const SInputFace *face : polygonList(polygons, polygon_count)) {
        if (face == nullptr) {
            continue;
        }
        const STrianglePackedIndices &indices = face->vertex_indices;
        const std::array<common::SVertexInput, 3> corners = {
            toVertexInput(vertex_buffer[indices.vertex_index_0], widenCoordinate(face->u_coord_0),
                          widenCoordinate(face->v_coord_0)),
            toVertexInput(vertex_buffer[indices.vertex_index_1], widenCoordinate(face->u_coord_1),
                          widenCoordinate(face->v_coord_1)),
            toVertexInput(vertex_buffer[indices.vertex_index_2], widenCoordinate(face->u_coord_2),
                          widenCoordinate(face->v_coord_2))};
        submitPolygon(context, corners);
    }
    device_->flush();
    return 1;
}

} // namespace nocturne::platform::gl
