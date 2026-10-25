#pragma once

#include "common/error/fatalerror.h"
#include "core/script/script.h"
#include "tests/mocks/shape/edcontrolsfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>

namespace nocturne::core {

// A script over files the test places under world and sound. An error prompt waits for a key
// before it closes, so a test that expects prompts says how many keys they wait for.
class CScriptFixture : public shape::CEdControlsFixture {
protected:
    CScriptFixture() {
        EXPECT_CALL(raw_input_, getNextKeypress(::testing::_)).Times(0);
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

    CScript script_{{.dosio = dosio_, .editor_tools = editor_tools_}};
};

} // namespace nocturne::core
