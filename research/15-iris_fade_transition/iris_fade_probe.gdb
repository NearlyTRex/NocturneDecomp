# Iris/black-hole transition re-triggering after a room load.
#
# Symptom: the circle that grows as a room loads runs a second time — the scene
# finishes loading, then as the main character walks in the transition starts
# again centred on him. Reproduces 100% in one mission.
#
# State machine (verified faithful against the asm at 0x4e09c0, no decomp bug):
#   g_IrisFadeType  0 idle | 1 fade-in start -> 2 | 2 growing, radius > width -> 0
#                   3 shrinking, radius < 0 -> radius 0, type 4 | 4 -> 5 | 5 terminal
#   CGame::renderIrisFade re-centres on g_CScriptPtr->focus_actor EVERY FRAME while
#   type is 2 or 3, and paints the whole screen black for type 1 and type >= 4.
#
# Triggers, all of them:
#   CGame::runGameSession           -> beginFadeIn   (once, at session start)
#   CGame::runGameSession           -> beginFadeOut  (mission end path)
#   CScript::step "beginFadeIn"     -> beginFadeIn   (script opcode)
#   CScript::step "beginFadeOut"    -> beginFadeOut  (script opcode)
#
# So a second transition is either a real second trigger (most likely the script
# opcode) or the centre snapping onto the character once he becomes visible —
# calculateIrisFadeCenter only updates the centre when worldToScreenWithFrustumCull
# reports the actor visible, so before that the centre stays wherever it was.
# The backtrace distinguishes those two immediately.
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe <this file>
#   ... load the mission that reproduces, let the character walk in ...
#   scripts/Bash/dbg.sh log-full | grep -E '^(===|\[TYPE)'
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $n = 0
set $lasttype = -1

break core_game_cpp_CGame_beginFadeIn_FUN_004e0920
commands
silent
set $n = $n + 1
printf "=== [FADE-IN #%d] entering with type=%d radius=%g centre=(%d,%d) focus=%p\n", $n, g_IrisFadeType, g_IrisFadeRadius, g_IrisFadeCenterX, g_IrisFadeCenterY, g_CScriptPtr->focus_actor
where 4
cont
end

break core_game_cpp_CGame_beginFadeOut_FUN_004e0960
commands
silent
set $n = $n + 1
printf "=== [FADE-OUT #%d] entering with type=%d radius=%g centre=(%d,%d) focus=%p\n", $n, g_IrisFadeType, g_IrisFadeRadius, g_IrisFadeCenterX, g_IrisFadeCenterY, g_CScriptPtr->focus_actor
where 4
cont
end

# ---- every state transition, plus the centre it is drawing around ----------

break core_game_cpp_CGame_updateFadeTransition_FUN_004e09c0
commands
silent
if g_IrisFadeType != $lasttype
  printf "[TYPE %d -> %d] radius=%g centre=(%d,%d)\n", $lasttype, g_IrisFadeType, g_IrisFadeRadius, g_IrisFadeCenterX, g_IrisFadeCenterY
  set $lasttype = g_IrisFadeType
end
cont
end

printf "iris fade probe armed\n"
