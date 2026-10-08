#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBodyPart : public CCharacter {
public:
    CBodyPart();
    ~CBodyPart() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getAllowedMeleeAttackTypes() override;
    void fillAttackDamageInfo(int attack_flags, SDamageInfo *out_damage_info,
                              CDemonActor *victim) override;
    int canPickup(CDemonActor *picker) override;
    void pickup(CDemonActor *carrier) override;
    void onDropped(CVector3f *drop_position) override;
    CDemonActor *getCarrier() override;
    CDemonActorType *getActorType() override;
    void archive() override;

    void setCounts(int vertex_count, int tri_count);
    void finalizeGeometry();
    void addAttachedModel(char *model_name, CVector3f *position_offset, CVector3f *euler_angles);
    void addFire(CVector3f *position);
    int addTexture(char *texture_name);
};

} // namespace nocturne::core
