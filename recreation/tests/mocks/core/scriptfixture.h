#pragma once

#include "common/error/fatalerror.h"
#include "core/actor/demonactortype.h"
#include "core/charactr/character.h"
#include "core/door/door.h"
#include "core/enemy/enemy.h"
#include "core/event/eventlist.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/platfrm/platform.h"
#include "core/script/script.h"
#include "core/trigger/trigger.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/testactor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {

// Actors of each class a command can need, by the class records of test actors.
inline constexpr CDemonActorType kScriptCharacterType =
    makeActorType("CTestCharacter", &CCharacter::kType, nullptr, 1);
inline constexpr CDemonActorType kScriptHeroType =
    makeActorType("CTestScriptHero", &CHero::kType, nullptr, 1);
inline constexpr CDemonActorType kScriptEnemyType =
    makeActorType("CTestEnemy", &CEnemy::kType, nullptr, 1);
inline constexpr CDemonActorType kScriptDoorType =
    makeActorType("CTestDoor", &CDoor::kType, nullptr, 1);
inline constexpr CDemonActorType kScriptPlatformType =
    makeActorType("CTestPlatform", &CPlatform::kType, nullptr, 1);
inline constexpr CDemonActorType kScriptTriggerType =
    makeActorType("CTestTrigger", &CTrigger::kType, nullptr, 1);

// A script over the mission fixture, with files the test places under world and sound. An error
// prompt waits for a key before it closes, so a test that expects prompts says how many keys
// they wait for.
class CScriptFixture : public CMissionFixture {
protected:
    CScriptFixture() {
        EXPECT_CALL(raw_input_, getNextKeypress(::testing::_)).Times(0);
    }

    void addActor(std::string_view name, const CDemonActorType &type) {
        auto actor = std::make_unique<CTestActor>(type);
        actor->setActorName(name);
        mission_.addActorToList(std::move(actor));
    }

    // Gives the set every actor of the mission, as loading the set they are in does.
    void putActorsInSet() {
        std::vector<CDemonActor *> actors;
        for (const std::unique_ptr<CDemonActor> &actor : mission_.getActors()) {
            actors.push_back(actor.get());
        }
        set_.setActors(std::move(actors));
    }

    // The game's hero, as the mission makes it at the place for the first hero.
    void addHero() {
        auto placeholder = std::make_unique<CHeroPlaceholder>();
        placeholder->setIndex(0);
        mission_.addActorToList(std::move(placeholder));
        ASSERT_TRUE(mission_.createHeros(nullptr));
    }

    // Loads the text as world\m1.scr and checks its syntax.
    bool check(const std::string &text) {
        givenFile("world\\m1.scr", text);
        return script_.loadScript("m1.scr", false);
    }

    void expectPasses(const std::string &text) {
        EXPECT_NO_THROW(EXPECT_TRUE(check(text))) << text;
    }

    void expectSyntaxError(const std::string &text, int line_number, const std::string &message) {
        expectQuit(text,
                   std::format("m1.scr failed syntax check on line {}: {}", line_number, message));
    }

    void expectQuit(const std::string &text, const std::string &message) {
        EXPECT_THAT([&] { (void)check(text); },
                    ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(message)))
            << text;
    }

    // Loads the set. It has no geometry, which a prompt warns of.
    void givenSet(const SSetFile &file) {
        EXPECT_CALL(raw_input_, getNextKeypress(::testing::_)).WillOnce(::testing::Return('x'));
        givenFile("models\\test.set", file.text());
        set_.load("test.set");
    }

    CEventList events_{{.mission = mission_, .actor = actor_, .set = set_, .dosio = dosio_}};
    CScript script_{{.dosio = dosio_,
                     .editor_tools = editor_tools_,
                     .mission = mission_,
                     .events = events_,
                     .set = set_}};
};

} // namespace nocturne::core
