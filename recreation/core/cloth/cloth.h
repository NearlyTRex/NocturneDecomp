#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x3f.h"
#include "common/math/matrix3x4f.h"
#include "common/math/vector3f.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/fwd.h"
#include "engine/fwd.h"

#include <array>
#include <cstddef>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// A point of the cloth: where it is, how it moves, the points above it it is tied to and how far
// apart they rest, and for a pinned point the model's bones it follows.
struct SClothVertex {
    // The most points one is tied to.
    static constexpr std::size_t kMaxConnections = 15;
    // The most bones a pinned point follows.
    static constexpr std::size_t kMaxBones = 3;

    common::CVector3f position;
    common::CVector3f force;
    common::CVector3f velocity;
    common::CVector3f secondary_velocity;
    std::vector<int> connected_indices;
    std::vector<float> rest_lengths;
    bool locked = false;
    bool body_collision = false;
    bool floor_collision = false;
    // Where the cloth's model has it, in world units.
    common::CVector3f offset_pos;
    int bone_influence_count = 0;
    std::array<int, kMaxBones> bone_index{};
    std::array<common::CVector3f, kMaxBones> bone_positions{};
    std::array<float, kMaxBones> bone_weights{};
};

// A bone of the character the cloth can't pass through: an elliptic cylinder of the two radii
// along the bone, as long as its longest child is or as the file says.
struct SClothBone {
    std::string name;
    float radius1 = 0.0F;
    float radius2 = 0.0F;
    common::CVector3f euler1;
    common::CVector3f euler2;
    float length = 0.0F;
    float inv_radius1 = 0.0F;
    float inv_radius2 = 0.0F;
    int parent_bone_index = 0;
    float child_distance = 0.0F;
    common::CMatrix3x4f world_matrix;
    common::CMatrix3x3f local_matrix;
    common::CVector3f position_offset;
};

// A piece of cloth a character wears, as a models\*.cth file holds it: a keyframed model whose
// points swing on their ties, the pinned ones following the character's bones.
class CCloth {
public:
    // The newest version of the file it reads.
    static constexpr int kLatestVersion = 3;

    // Its model is loaded from disk, its textures captured by the models.
    CCloth(const engine::CDosIo &dosio, IKeyFramedModels &models);
    ~CCloth();
    CCloth(const CCloth &) = delete;
    CCloth &operator=(const CCloth &) = delete;
    CCloth(CCloth &&) = delete;
    CCloth &operator=(CCloth &&) = delete;

    // Fatal when it can't be opened or is too new.
    void load(std::string_view filename);
    // The cloth at rest as its model has it, at the character's place and turn; with a model, the
    // pinned points take the bones of the nearest of the model's vertices.
    void setup(const common::CVector3f &position, const common::CVector3f &euler,
               CDeformableModelInstance *model_ptr);
    // The cloth moved on by the time, the character's movement and turn swinging it, the wind
    // blowing it and the floor and the character's bones stopping it.
    void process(const common::CVector3f &position, const common::CVector3f &euler,
                 float delta_time, float floor_y, CDeformableModelInstance *model_ptr,
                 const common::CVector3f &wind);
    int saveJoinedLight(CDeformableModelInstance *model_ptr);
    void render(CDeformableModelInstance *deformable_model);
    void grabCloth(char *bone_name, int vertex_index);
    void resetState(int vertex_index);
    void applyRotation(common::CVector3f *euler);

    [[nodiscard]] const CKeyFramedModel &getModel() const;
    [[nodiscard]] std::span<const SClothVertex> getVertices() const;
    [[nodiscard]] std::span<const SClothBone> getCollideBones() const;
    [[nodiscard]] std::span<const int> getLockedVertexIndices() const;
    // The points from the highest down, the nearer the middle first where they are as high.
    [[nodiscard]] std::span<const int> getVertexOrder() const;
    [[nodiscard]] int getVersion() const;
    [[nodiscard]] float getWeight() const;
    [[nodiscard]] float getGravity() const;
    [[nodiscard]] float getDampen() const;
    [[nodiscard]] float getSpring() const;
    [[nodiscard]] float getBodyFriction() const;
    [[nodiscard]] float getFloorFriction() const;
    [[nodiscard]] float getWindArea() const;
    [[nodiscard]] float getMomentOfInertia() const;
    [[nodiscard]] float getTransparency() const;
    [[nodiscard]] bool isDoubleSided() const;

private:
    void allocMemory();
    void initializeConnections();
    void tie(SClothVertex &vertex, int other);
    // The points from the highest down, the nearer the middle first where they are as high.
    void orderFromTheTop();
    // Each pin takes the bones of the nearest of the model's vertices at rest.
    void pinToModel(CDeformableModelInstance &model);
    // The pins where their bones now have them, and the bones the points can't pass through.
    void followBones(const CDeformableModelInstance &model);
    void applyFriction();
    void applyConstraints(SClothVertex &vertex);
    void step(const common::CVector3f &position, const common::CVector3f &euler, float delta_time,
              float floor_y, CDeformableModelInstance *model_ptr, const common::CVector3f &wind);

    const engine::CDosIo &dosio_;
    IKeyFramedModels &models_;
    CKeyFramedModel model_;
    std::vector<SClothVertex> vertices_;
    float weight_ = 0.0F;
    float gravity_ = 0.0F;
    float dampen_ = 0.0F;
    float spring_ = 0.0F;
    float body_friction_ = 0.0F;
    float floor_friction_ = 0.0F;
    float wind_area_ = 0.0F;
    float mom_inert_ = 0.0F;
    bool double_sided_ = false;
    float transparency_ = 0.0F;
    std::vector<SClothBone> collide_bones_;
    std::vector<int> locked_vertex_indices_;
    std::vector<int> vertex_order_;
    float inv_delta_time_ = 0.0F;
    float floor_y_ = 0.0F;
    common::CVector3f last_position_;
    common::CVector3f last_euler_;
    int version_ = 0;
};

} // namespace nocturne::core
