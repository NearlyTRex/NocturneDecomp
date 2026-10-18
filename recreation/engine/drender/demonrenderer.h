#pragma once

#include "common/fwd.h"
#include "engine/drender/drender.h"
#include "engine/fwd.h"
#include "engine/polygonstate.h"
#include "platform/fwd.h"

#include <cstdint>
#include <functional>
#include <span>
#include <vector>

namespace nocturne::engine {

// core/xform's clip of the indexed polygon to the view's sides, which the renderer below it
// reaches through this.
using GeometryClipper = std::function<void(
    std::span<const platform::SRenderVertex> vertices, std::span<const int> vertex_indices,
    std::uint32_t render_flags, std::vector<platform::SRenderVertex> &clipped)>;

// The camera and model transforms in world units, and the polygon entry points, over the
// software renderer's fixed-point state.
class CDemonRenderer {
public:
    // The flags renderTexturedPoly takes for -1: textured, smooth, solid alpha, depth tested and
    // written, and vertex colour.
    static constexpr int kDefaultTexturedFlags = 0x2cd;

    // The polygons are drawn from vertex_buffer's corners.
    CDemonRenderer(CMatrix &matrix, const C2d &two_d, C3d &three_d,
                   std::span<platform::SRenderVertex> vertex_buffer, CSpecial &special, CPrim &prim,
                   CZRaster &zraster, const SCurrentTexture &texture, CTexture &textures,
                   const IScreenDevice &screen, GeometryClipper clip_geometry);

    // The buffer the polygons' corners index.
    [[nodiscard]] std::span<platform::SRenderVertex> getVertexBuffer() const;

    void renderSolidColorDepthDirect(platform::SMRGLHeaderPrimitive *prim);
    void renderSolidColorPoly(SMRGLPrimitivePoly *poly);
    void renderZPrepassPoly(SMRGLPrimitivePoly *poly);
    int renderDepthProfiledDirect(platform::SMRGLHeaderPrimitive *prim);
    // Skips a polygon facing away while plane culling is on, and draws the buffer's corners
    // through the perspective scanline; -1 takes kDefaultTexturedFlags.
    void renderTexturedDirect(const platform::SMRGLHeaderPrimitive &prim, int render_flags);
    // These three skip a polygon facing away while plane culling is on, and give each corner the
    // polygon's texture coordinates before drawing it through the perspective scanline.
    void renderTexturedPoly(const platform::SMRGLPrimitiveQuad &poly, int render_flags);
    void renderAlphaBlendedPoly(const platform::SMRGLPrimitiveQuad &poly);
    void renderDecalPoly(SMRGLPrimitivePoly *poly);
    void renderSolidTexturedPoly(SMRGLPrimitivePoly *poly);
    // Blends against the screen, and skips a polygon wholly past a side of the view.
    void renderDestReadBlendPoly(const platform::SMRGLPrimitiveQuad &poly);
    void renderVertexAlphaDirect(platform::SMRGLHeaderPrimitive *prim);
    void renderVertexAlphaPoly(SMRGLPrimitivePoly *poly);
    void renderBlendedDirect(platform::SMRGLHeaderPrimitive *prim);
    void renderBlendedPoly(SMRGLPrimitivePoly *poly);
    void renderOverlayDirect(platform::SMRGLHeaderPrimitive *prim);
    void setCameraOrigin(common::CVector3i *origin);
    void setCameraOriginFromScaledPoint(const common::CVector3f &point);
    // Builds the camera's rotation from angles in radians, as setupCameraAndProjection takes it.
    void setupSceneRendering(const common::CVector3f &euler_angles);
    // Takes the camera's rotation, and bakes the projection scale and the clip rectangle's
    // aspect into the transform, so a transformed point's x and y divide by z to the screen.
    void setupCameraAndProjection(const common::CMatrix3x3f &transform_matrix);
    void copyAndTransform3DPoint(common::CVector3i *input_point);
    void processCameraRelativeVertex(const common::CVector3f &world_position);
    void applyDirectTransform(common::CVector3i *position, common::CVector3i *rotation);
    // Pushes a turn by the angles in radians, then a move by the translation if there is one.
    void applyScaledTransform(const common::CVector3f &euler_angles,
                              const common::CVector3f *translation);
    void matrixPush();
    void matrixPop();
    // The field of view in the original's units, 18 being the unit projection scale.
    void setProjectionScale(float field_of_view);
    void setLightIntensity(float intensity);
    void setLightDirection(common::CVector3i *direction);
    [[nodiscard]] common::CVector3i getCameraOriginFixed() const;
    common::CVector3f *getCameraOriginWorld(common::CVector3f *output);
    common::CVector3i *getCameraRotationFixed(common::CVector3i *output);
    common::CVector3f *getCameraRotationRadians(common::CVector3f *output);
    float calculateProjectionFactor();
    // Draws into the rectangle as its own 3D window until the matching pop.
    void pushViewport(int x, int y, int width, int height);
    void popViewport();
    void renderCustomScanline(platform::SMRGLHeaderPrimitive *prim,
                              CustomScanlineFunc *scanline_renderer);
    void setCurrentPolygonColor(int color);
    void setRGBAColor(int red_component, int green_component, int blue_component);
    void setPlaneCullingEnabled(bool enabled);
    // Culling on tests each polygon's winding instead of its plane, keeping clockwise faces.
    void setRenderingState(bool culling);
    void setBlendMode(int blend_mode);
    int setRenderAlpha(int render_alpha);
    void setRenderAlphaNormalized(float render_alpha);
    // On, polygons may hold corners still in eye space and are clipped to the view; off, every
    // corner is on the screen and drawn as it is.
    void enableFaceCapture(bool enabled);
    void setShadowPass(int value);
    int isShadowPass();
    void clipAndDrawLine3D(int vertex_index1, int vertex_index2);
    void setAlphaMask(int alpha_mask);
    int getAlphaMask();
    void enableAdvancedCulling(int enabled);
    void renderTriangleBatch(SMRGLPrimitiveTriangle *primitive_array, int primitive_count,
                             int render_flags);
    // Draws each as renderTexturedPoly would, -1 taking the same default. With culling on and
    // plane culling and face capture off, the corners go straight to the triangle rasteriser, or
    // the polygons facing the camera to the hardware renderer as one list.
    void renderQuadBatch(std::span<const platform::SMRGLPrimitiveQuad> primitives,
                         int render_flags);
    void renderFaceList(platform::SInputFace *face_array, int face_count, int render_flags);
    void setTextureCaptureMode(int enable_advanced_mode);
    void processCapturedFaces();
    // Makes the texture current for the polygons that follow.
    void captureTexture(platform::SMRGLTextureBasic &texture);
    void updateTexture(platform::SMRGLTextureBasic *texture, SRGBColorPalette *palette);
    int depthTest(platform::SRenderVertex *vertex_ptr);

private:
    [[nodiscard]] bool isFacing(const platform::SClipPlane &surface_normal) const;
    // The polygon's corner indices, each corner given the polygon's texture coordinates.
    std::vector<int> takeCorners(const platform::SMRGLPrimitiveQuad &poly);
    [[nodiscard]] SPolygonState getPerspectiveState(std::uint32_t render_flags) const;
    void clipAndFillPoly(std::span<const int> vertex_indices, const SPolygonState &state);
    void renderFacetList(std::span<const platform::SMRGLPrimitiveQuad> primitives,
                         int render_flags);

    CMatrix &matrix_;
    const C2d &two_d_;
    C3d &three_d_;
    std::span<platform::SRenderVertex> vertex_buffer_;
    CSpecial &special_;
    CPrim &prim_;
    CZRaster &zraster_;
    const SCurrentTexture &texture_;
    CTexture &textures_;
    const IScreenDevice &screen_;
    GeometryClipper clip_geometry_;
    bool plane_culling_enabled_ = true;
    // Ghidra's name; whether corners may come in eye space, as the vertex processing flag says.
    bool face_capture_enabled_ = true;
};

} // namespace nocturne::engine
