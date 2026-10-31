#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/box/boundingbox3d.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/inputface.h"
#include "platform/mrgltexturebasic.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What a deformable model reads its file with, finds its skeleton in, and captures its textures
// through.
struct SDeformableModelOwners {
    const engine::CDosIo &dosio;
    CDeformableModelManager &models;
    engine::CDemonRenderer &renderer;
};

// A level of detail: the height in pixels it is drawn at down to, and whether it only casts the
// shadow.
struct SLod {
    int pixel_height = 0;
    bool shadow_only_flag = false;
};

// A vertex, as up to three bones' weights and where it sits in each of those bones' space.
struct SVert {
    // The most bones a vertex follows.
    static constexpr std::size_t kMaxBones = 3;

    std::uint8_t num_bone_influences = 0;
    std::array<std::uint8_t, kMaxBones> bone_indices{};
    std::array<float, kMaxBones> bone_weights{};
    std::array<common::CVector3f, kMaxBones> bone_offsets{};
};

// A level of detail's mesh: its vertices, then its triangles and after them the triangles that
// cap a cut part, each triangle's texture, and each cap's part.
struct SLodMesh {
    std::vector<SVert> vertices;
    int tri_count = 0;
    int cap_tri_count = 0;
    std::vector<platform::SInputFace> faces;
    std::vector<int> face_textures;
    std::vector<int> cap_parts;
};

// A part a blow can take off, with the parts it joins, and each level of detail's triangle and cap
// counts.
struct SPart {
    std::string part_name;
    std::vector<int> tri_counts;
    std::vector<int> cap_tri_counts;
    std::vector<int> adj_part_list;
    int dominant_bone = 0;
};

// A skinned model as a models\*.DFM file holds it, bound to the skeleton the file names.
class CDeformableModel {
public:
    using MotionBlendWeightFunc = float(int, int, float, int, CDeformableModelInstance *);

    static constexpr int kLatestVersion = 7;
    static constexpr int kMaxLods = 5;
    static constexpr int kMaxTextureSets = 5;
    static constexpr int kMaxTextures = 80;
    static constexpr int kMaxParts = 30;
    // What each bone's tables hold.
    static constexpr int kMaxBones = 100;

    explicit CDeformableModel(const SDeformableModelOwners &owners);
    ~CDeformableModel();
    CDeformableModel(const CDeformableModel &) = delete;
    CDeformableModel &operator=(const CDeformableModel &) = delete;
    CDeformableModel(CDeformableModel &&) = delete;
    CDeformableModel &operator=(CDeformableModel &&) = delete;

    void free();
    // Loads the skeleton the file names, binds to it, and captures every texture of every set.
    void captureTextures();
    // Fatal before captureTextures binds the skeleton.
    CSkeleton *getSkeletonPtr();
    // The bone's origin.
    common::CVector3f *getVertexPoolPtr(int index);
    // Each of the level's vertices moved by the bones it follows, weighed, in 24.8 fixed point.
    // A level the model hasn't got has no vertices.
    void skinVertices(std::size_t lod_index, std::span<const common::CMatrix3x4f> bone_matrices,
                      std::span<common::CVector3i> output) const;
    common::CVector3f *skinSingleVertex(common::CVector3f *output_pos, int lod_index,
                                        int vertex_index, common::CMatrix3x4f *bone_matrices);
    void rotateVertices(int lod_index, int *input_vertices);
    void lightVertices(int lod_index, common::CVector3i *skinned_vertices);
    void initVertexWRecip(int lod_index, common::CVector3i *lod_vertices);
    void renderParts(int lod_index, int *part_visibility_flags, int *texture_set_indices,
                     int render_flags, int skip_texture_capture);
    void renderWireframe(int lod_level);
    void renderSkeleton(int color, common::CMatrix3x4f *bone_matrices, int render_flags);
    void renderBones(common::CMatrix3x4f *bone_matrices);
    // models\<filename>; a file that won't open, is too new or doesn't parse is fatal.
    void load(std::string_view filename);
    SPart *getPartPtr(int part_index);
    int findPartByName(char *part_name, int error_if_not_found);
    int getBonePart(int bone_index);
    void dismember(int lod_index, CBodyPart *body_part_ptr, int part_index,
                   common::CVector3i *skinned_vertices, int texture_set_index);
    float exactRayTrace(int lod_index, common::CVector3f *ray_origin,
                        common::CVector3f *ray_direction, common::CVector3i *skinned_vertices,
                        std::uint8_t *part_visibility_flags);
    int selectLOD(CBoundingBox3D *bounding_box);
    void shatter(common::CVector3f *center_position, common::CVector3f *orientation_vector,
                 int lod_index, common::CVector3i *skinned_vertices, int *part_visibility_flags,
                 int *texture_set_indices);
    int findMaxWeightBone(int lod_level, int triangle_index);
    int calculateMemorySize();

    [[nodiscard]] const std::string &getModelFilename() const;
    // The skeleton file the model is skinned to.
    [[nodiscard]] const std::string &getModelName() const;
    [[nodiscard]] std::span<const SLod> getLods() const;
    [[nodiscard]] std::span<const SLodMesh> getLodMeshes() const;
    [[nodiscard]] std::span<const SPart> getParts() const;
    // Set by set, each set's textures in order.
    [[nodiscard]] std::span<const std::vector<platform::SMRGLTextureBasic>> getTextureSets() const;
    // rootOffsetScale.
    [[nodiscard]] const common::CVector3f &getModelScale() const;
    // biasUsed.
    [[nodiscard]] const common::CVector3f &getBias() const;
    // Each bone's box in its own space, around the vertices that follow it.
    [[nodiscard]] std::span<const CBoundingBox3D> getBoneBounds() const;
    // 0 for a bone no vertex follows, 1 for one that some do, 2 for one that ends a chain of them.
    [[nodiscard]] std::span<const int> getBoneFlags() const;
    [[nodiscard]] std::span<const int> getBoneToPartMap() const;
    // The child whose origin is farthest from the bone's, or -1.
    [[nodiscard]] std::span<const int> getFarthestChildBones() const;

private:
    void loadStream(common::CTextScanner &scanner);
    void loadCounts(common::CTextScanner &scanner, int version, int &bone_count);
    void loadParts(common::CTextScanner &scanner, int version);
    void loadMeshes(common::CTextScanner &scanner);
    static void loadVertex(common::CTextScanner &scanner, SVert &vertex);
    static void loadFaces(common::CTextScanner &scanner, SLodMesh &mesh);
    void loadTail(common::CTextScanner &scanner, int version, int bone_count);
    void allocMemory(int num_lods, int num_texture_sets, int num_textures, int num_parts);
    void allocLOD(int lod_index, int vertex_count, int tri_count, int cap_tri_count);
    void bindSkeleton(CSkeleton &skeleton);
    void computeBoneBoundsAndFlags();
    // Whether the bone's two nearest ancestors that some vertices follow leave it to end a chain.
    [[nodiscard]] bool endsChain(const CSkeleton &skeleton, int bone_index) const;
    void computeFarthestChildBones();
    void computePartDominantBones();
    int computeBoneDominantPart(int bone_index);

    SDeformableModelOwners owners_;
    std::string model_filename_;
    std::string model_name_;
    std::vector<SLod> lods_;
    std::vector<SLodMesh> meshes_;
    int num_textures_ = 0;
    std::vector<std::vector<platform::SMRGLTextureBasic>> texture_sets_;
    std::vector<SPart> parts_;
    common::CVector3f model_scale_{.x = 1.0F, .y = 1.0F, .z = 1.0F};
    common::CVector3f bias_;
    std::vector<common::CVector3f> bone_origins_ = std::vector<common::CVector3f>(kMaxBones);
    std::vector<CBoundingBox3D> bone_bounds_ = std::vector<CBoundingBox3D>(kMaxBones);
    std::vector<int> bone_flags_ = std::vector<int>(kMaxBones);
    std::vector<int> bone_to_part_map_ = std::vector<int>(kMaxBones);
    std::vector<int> farthest_child_bone_ = std::vector<int>(kMaxBones);
    CSkeleton *skeleton_ptr_ = nullptr;
};

} // namespace nocturne::core
