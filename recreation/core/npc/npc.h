#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

#include <memory>

namespace nocturne::core {

// A character the heroes don't fight: one that stands, walks and talks. The virtual functions not
// ported yet quit when called.
class CNPC : public CCharacter {
public:
    static const CDemonActorType kType;

    CNPC();
    ~CNPC() override;
    CNPC(const CNPC &) = delete;
    CNPC &operator=(const CNPC &) = delete;
    CNPC(CNPC &&) = delete;
    CNPC &operator=(CNPC &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    void renderBackground(int layer_flag) override;
    CPathMap *getPathMap() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    // Unless it is one the heroes may shoot.
    int isInvulnerable() override;
    void processDamage(SDamageInfo *damage_info) override;

    // Whether the heroes may shoot it.
    [[nodiscard]] bool isShootable() const;
    // Whether, once dead, it has left its pool of blood.
    [[nodiscard]] bool hasLeftBloodPool() const;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    bool shootable_ = false;
    bool left_blood_pool_ = false;
};

} // namespace nocturne::core
