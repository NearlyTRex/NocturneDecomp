#pragma once

#include "core/fwd.h"
#include "engine/drender/drender.h"
#include "engine/fwd.h"

namespace nocturne::engine {

class CDemonRenderer {
public:
    CDemonRenderer();

    void renderSolidColorDepthDirect(SMRGLHeaderPrimitive *prim);
    void renderSolidColorPoly(SMRGLPrimitivePoly *poly);
    void renderZPrepassPoly(SMRGLPrimitivePoly *poly);
    int renderDepthProfiledDirect(SMRGLHeaderPrimitive *prim);
    void renderTexturedDirect(SMRGLHeaderPrimitive *prim, int render_flags);
    void renderTexturedPoly(SMRGLPrimitivePoly *poly, int render_flags);
    void renderAlphaBlendedPoly(SMRGLPrimitivePoly *poly);
    void renderDecalPoly(SMRGLPrimitivePoly *poly);
    void renderSolidTexturedPoly(SMRGLPrimitivePoly *poly);
    void renderDestReadBlendPoly(SMRGLPrimitivePoly *poly);
    void renderVertexAlphaDirect(SMRGLHeaderPrimitive *prim);
    void renderVertexAlphaPoly(SMRGLPrimitivePoly *poly);
    void renderBlendedDirect(SMRGLHeaderPrimitive *prim);
    void renderBlendedPoly(SMRGLPrimitivePoly *poly);
    void renderOverlayDirect(SMRGLHeaderPrimitive *prim);
    void setCameraOrigin(core::CVector3i *origin);
    void setCameraOriginFromScaledPoint(core::CVector3f *point_ptr);
    void setupSceneRendering(core::CVector3f *euler_angles);
    void setupCameraAndProjection(core::CMatrix3x3f *transform_matrix);
    void copyAndTransform3DPoint(core::CVector3f *input_point);
    void processCameraRelativeVertex(core::CVector3f *world_position);
    void applyDirectTransform(core::CVector3i *position, core::CVector3i *rotation);
    void applyScaledTransform(core::CVector3f *euler_angles, core::CVector3f *translation);
    void matrixPush();
    void matrixPop();
    void setProjectionScale(float field_of_view);
    void setLightIntensity(float intensity);
    void setLightDirection(core::CVector3i *direction);
    core::CVector3i *getCameraOriginFixed(core::CVector3i *output);
    core::CVector3f *getCameraOriginWorld(core::CVector3f *output);
    core::CVector3i *getCameraRotationFixed(core::CVector3i *output);
    core::CVector3f *getCameraRotationRadians(core::CVector3f *output);
    float calculateProjectionFactor();
    void pushViewport(int x, int y, int width, int height);
    void popViewport();
    void renderCustomScanline(SMRGLHeaderPrimitive *prim, CustomScanlineFunc *scanline_renderer);
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
    void renderQuadBatch(SMRGLPrimitiveQuad *primitive_array, int primitive_count,
                         int render_flags);
    void renderFaceList(SInputFace *face_array, int face_count, int render_flags);
    void setTextureCaptureMode(int enable_advanced_mode);
    void processCapturedFaces();
    void captureTexture(core::SMRGLTextureBasic *texture);
    void updateTexture(core::SMRGLTextureBasic *texture, SRGBColorPalette *palette);
    int depthTest(SRenderVertex *vertex_ptr);
};

} // namespace nocturne::engine
