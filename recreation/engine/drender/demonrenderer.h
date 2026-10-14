#pragma once

#include "common/fwd.h"
#include "engine/drender/drender.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

namespace nocturne::engine {

// The camera and model transforms in world units, and the polygon entry points, over the
// software renderer's fixed-point state.
class CDemonRenderer {
public:
    CDemonRenderer(CMatrix &matrix, const C2d &two_d, C3d &three_d);

    void renderSolidColorDepthDirect(platform::SMRGLHeaderPrimitive *prim);
    void renderSolidColorPoly(SMRGLPrimitivePoly *poly);
    void renderZPrepassPoly(SMRGLPrimitivePoly *poly);
    int renderDepthProfiledDirect(platform::SMRGLHeaderPrimitive *prim);
    void renderTexturedDirect(platform::SMRGLHeaderPrimitive *prim, int render_flags);
    void renderTexturedPoly(SMRGLPrimitivePoly *poly, int render_flags);
    void renderAlphaBlendedPoly(SMRGLPrimitivePoly *poly);
    void renderDecalPoly(SMRGLPrimitivePoly *poly);
    void renderSolidTexturedPoly(SMRGLPrimitivePoly *poly);
    void renderDestReadBlendPoly(SMRGLPrimitivePoly *poly);
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
    void pushViewport(int x, int y, int width, int height);
    void popViewport();
    void renderCustomScanline(platform::SMRGLHeaderPrimitive *prim,
                              CustomScanlineFunc *scanline_renderer);
    void setCurrentPolygonColor(int color);
    void setRGBAColor(int red_component, int green_component, int blue_component);
    void setPlaneCullingEnabled(int enabled);
    void setRenderingState(int state_flag);
    void setBlendMode(int blend_mode);
    int setRenderAlpha(int render_alpha);
    void setRenderAlphaNormalized(float render_alpha);
    void enableFaceCapture(int enabled);
    void setShadowPass(int value);
    int isShadowPass();
    void clipAndDrawLine3D(int vertex_index1, int vertex_index2);
    void setAlphaMask(int alpha_mask);
    int getAlphaMask();
    void enableAdvancedCulling(int enabled);
    void renderTriangleBatch(SMRGLPrimitiveTriangle *primitive_array, int primitive_count,
                             int render_flags);
    void renderQuadBatch(platform::SMRGLPrimitiveQuad *primitive_array, int primitive_count,
                         int render_flags);
    void renderFaceList(platform::SInputFace *face_array, int face_count, int render_flags);
    void setTextureCaptureMode(int enable_advanced_mode);
    void processCapturedFaces();
    void captureTexture(platform::SMRGLTextureBasic *texture);
    void updateTexture(platform::SMRGLTextureBasic *texture, SRGBColorPalette *palette);
    int depthTest(platform::SRenderVertex *vertex_ptr);

private:
    CMatrix &matrix_;
    const C2d &two_d_;
    C3d &three_d_;
};

} // namespace nocturne::engine
