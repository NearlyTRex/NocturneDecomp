#pragma once

#include "core/script/script.h"

#include <cstddef>
#include <optional>
#include <string_view>

namespace nocturne::core {

using ScriptCheckResult = CScript::CommandResult;

// Moves the statement past what a format took, or fails with the command's message.
ScriptCheckResult consumeScanned(SScriptStatement &statement, std::optional<std::size_t> taken,
                                 std::string_view error);

// The checks of the commands that name actors, which the command table lists.
ScriptCheckResult checkAddItemToInventory(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkAttachActorToPlatform(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkCancelWalkTo(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkEnableHealthBar(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkDismember(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkGesture(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkGetTriggerActor(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkHolsterWeapon(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkLookAt(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkMovePlatform(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkOpenDoor(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkPressButton(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkReleaseButton(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkRemoveAllItemsFromInventory(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkRemoveItemFromInventory(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSelectWeapon(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSetActorVariable(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSetCharacterHealth(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSetFocusActor(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSetHeroTask(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSetSpeaker(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSetVictim(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkSnapToFace(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkTurnToFace(CScript &script, SScriptStatement &statement);
ScriptCheckResult checkWalkTo(CScript &script, SScriptStatement &statement);

} // namespace nocturne::core
