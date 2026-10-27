#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

#include <memory>
#include <string>

namespace nocturne::core {

// The hero Moloch. The virtual functions not ported yet quit when called.
class CMoloch : public CHero {
public:
    static const CDemonActorType kType;

    CMoloch();
    ~CMoloch() override;
    CMoloch(const CMoloch &) = delete;
    CMoloch &operator=(const CMoloch &) = delete;
    CMoloch(CMoloch &&) = delete;
    CMoloch &operator=(CMoloch &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;

    // The conditions that turn Moloch into the demon and back into the human.
    [[nodiscard]] const std::string &getHumanToDemonCondition() const;
    [[nodiscard]] const std::string &getDemonToHumanCondition() const;
    [[nodiscard]] bool isInHumanForm() const;
    [[nodiscard]] bool isMorphing() const;
    [[nodiscard]] float getMorphTimer() const;

private:
    static std::unique_ptr<CDemonActor> create();

    std::string human_to_demon_condition_ = "molochToDemon";
    std::string demon_to_human_condition_ = "molochToHuman";
    bool in_human_form_ = true;
    bool morphing_ = false;
    float morph_timer_ = 0.0F;
};

} // namespace nocturne::core
