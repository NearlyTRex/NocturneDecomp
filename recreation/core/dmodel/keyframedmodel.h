#pragma once

#include "common/fwd.h"
#include "common/math/vector3i.h"
#include "core/box/boundingbox3d.h"
#include "core/dtri/demontriangle.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/mrglprimitivequad.h"
#include "platform/mrgltexturebasic.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// A mesh with a set of vertex positions per frame; the polygons, textures and parts are shared by
// every frame. Positions are 24.8.
class CKeyFramedModel {
public:
    // A run of the model's vertices and polygons, taken in order.
    struct SPart {
        int vertex_count = 0;
        int poly_count = 0;
    };

    explicit CKeyFramedModel(const engine::CDosIo &dosio);
    ~CKeyFramedModel();

    // models/<filename>, as text when it starts with '/' and binary otherwise. Fatal when it can't
    // be opened or read.
    void load(std::string_view filename);
    void free();
    // Puts the frame's vertices on the screen, lights them and draws the polygons, a run of them
    // to each texture, culled by winding unless the model asks for none.
    void prepareForRender(int frame_index, int render_flags, engine::CDemonRenderer &renderer,
                          CDemonSet &set);
    // Out-of-range frames clamp to the first or last.
    [[nodiscard]] std::span<const common::CVector3i> getFrameVertices(int frame_index) const;
    // Each texture captured by the renderer, loading it.
    void captureTextures(engine::CDemonRenderer &renderer);
    // The name it was last loaded from; empty before.
    [[nodiscard]] const std::string &getModelFilename() const;
    float intersectRay(int frame_index, common::CVector3f *ray_origin,
                       common::CVector3f *ray_direction, common::CVector3f *output_normal);
    void intersectCylinder(int frame_index, SIntersectXZCylinder *cylinder,
                           common::CVector3f *transform_vector);
    int getFloorHeight(int frame_index, common::CVector3f *position, float search_radius,
                       float *out_height, common::CVector3f *transform_vector);

    [[nodiscard]] int getVertexCount() const;
    [[nodiscard]] int getFrameCount() const;
    // Unit normals scaled to 65535, for a single-frame model only.
    [[nodiscard]] std::span<const common::CVector3i> getVertexNormals() const;
    [[nodiscard]] std::span<const platform::SMRGLPrimitiveQuad> getPolygons() const;
    [[nodiscard]] std::span<const int> getPolyTextureIndices() const;
    // Per polygon, when the model has them.
    [[nodiscard]] std::span<const std::uint8_t> getEnvMapOpacities() const;
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getTextures() const;
    [[nodiscard]] std::span<const SPart> getParts() const;
    // In world units: every frame's box, and each frame's own.
    [[nodiscard]] const CBoundingBox3D &getBounds() const;
    [[nodiscard]] std::span<const CBoundingBox3D> getFrameBounds() const;
    // Frame after frame, getCollisionTriangleCount to a frame.
    [[nodiscard]] std::span<const CDemonTriangle> getCollisionTriangles() const;
    [[nodiscard]] int getCollisionTriangleCount() const;
    [[nodiscard]] int getTransparentPixelFlag() const;
    [[nodiscard]] int getDisableBackfaceCulling() const;

private:
    void readBinaryModel(std::span<const std::byte> data);
    void readTextModel(std::string_view text);
    void allocate(int vertex_count, int poly_count, int texture_count, int part_count,
                  int frame_count);
    void calcNormals();
    void calculateFrameBounds();
    void buildCollisionTriList();
    void populateCollisionList(const common::CVector3f &transform_vector);
    void rotateAndLightVertices(int frame_index, CDemonSet &set) const;
    void submitToRenderer(int render_flags, engine::CDemonRenderer &renderer, CDemonSet &set);
    // The polygons first to end in runs of one texture, each made current before its run.
    void submitTextureRuns(std::size_t first, std::size_t end, int render_flags,
                           int &current_texture, engine::CDemonRenderer &renderer, CDemonSet &set);

    const engine::CDosIo &dosio_;
    std::string model_filename_;
    int vertex_count_ = 0;
    int frame_count_ = 0;
    std::vector<common::CVector3i> vertices_;
    std::vector<common::CVector3i> vertex_normals_;
    std::vector<platform::SMRGLPrimitiveQuad> polygons_;
    std::vector<int> poly_texture_indices_;
    std::vector<std::uint8_t> env_map_opacities_;
    std::vector<platform::SMRGLTextureBasic> textures_;
    std::vector<SPart> parts_;
    CBoundingBox3D bounds_;
    std::vector<CBoundingBox3D> frame_bounds_;
    std::vector<CDemonTriangle> collision_triangles_;
    int collision_triangle_count_ = 0;
    int transparent_pixel_flag_ = 0;
    int disable_backface_culling_ = 0;
};

} // namespace nocturne::core
