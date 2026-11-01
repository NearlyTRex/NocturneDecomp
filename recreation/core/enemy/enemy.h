#pragma once

#include "common/fwd.h"
#include "core/charactr/character.h"
#include "core/fwd.h"

#include <string>

namespace nocturne::core {

// A character that hunts the heroes: one it has as its victim, else one it can see or reach, and
// a patrol or a post to guard between. The virtual functions not ported yet quit when called.
class CEnemy : public CCharacter {
public:
    // Abstract: missions can't hold one.
    static const CDemonActorType kType;

    // Its speed and size are a little different from every other enemy's, drawn from the
    // classes' random numbers.
    explicit CEnemy(CActor &classes);
    ~CEnemy() override;
    CEnemy(const CEnemy &) = delete;
    CEnemy &operator=(const CEnemy &) = delete;
    CEnemy(CEnemy &&) = delete;
    CEnemy &operator=(CEnemy &&) = delete;

    void setup() override;
    void renderBackground(int layer_flag) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    void archive(CActorArchive &actor_archive) override;
    void releaseVictim() override;
    void onVictimLost(CDemonActor *lost_actor) override;
    void processDamage(SDamageInfo *damage_info) override;
    virtual common::CVector3f *getTargetPoint(common::CVector3f *out_point);
    virtual void updateVictim(float delta_time);

    int testAttackRadius(common::CVector3f *point, float radius, SDamageInfo *damage_info);
    int testAttackLine(common::CVector3f *start, common::CVector3f *end, SDamageInfo *damage_info);
    int canSeeTarget(CDemonActor *target);
    void setVictim(CDemonActor *victim);
    int updatePatrol(float delta_time);

    // How fast it moves, as a multiple of its kind's.
    [[nodiscard]] float getSpeed() const;
    // Whether, once dead, it has left its pool of blood.
    [[nodiscard]] bool hasLeftBloodPool() const;
    // Whether the editor's randomizer may swap it for another enemy.
    [[nodiscard]] bool isRandomizable() const;
    // The victim a script gave it, if any.
    [[nodiscard]] CDemonActor *getScriptVictim() const;
    // The waypoints it patrols, by name.
    [[nodiscard]] const std::string &getPatrolNamePattern() const;
    // How far from where it stands it will chase.
    [[nodiscard]] float getGuardDistance() const;
    // How far above or below it a victim may be.
    [[nodiscard]] float getVictimHeight() const;
    [[nodiscard]] CDemonActor *getVictim() const;

protected:
    // For a derived class that saved these again with its own fields.
    void archiveSpeed(CActorArchive &actor_archive);
    void archiveGuardDistance(CActorArchive &actor_archive);
    void setVictimHeight(float victim_height);

private:
    static constexpr float kDefaultGuardDistance = 100.0F;
    static constexpr float kDefaultVictimHeight = 6.0F;

    float speed_ = 1.0F;
    bool left_blood_pool_ = false;
    bool randomizable_ = true;
    CDemonActor *script_victim_ = nullptr;
    std::string patrol_name_pattern_;
    float guard_distance_ = kDefaultGuardDistance;
    float victim_height_ = kDefaultVictimHeight;
    CDemonActor *victim_ = nullptr;
};

} // namespace nocturne::core
