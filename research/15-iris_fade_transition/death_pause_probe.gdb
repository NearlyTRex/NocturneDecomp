delete
set pagination off

# Which way out does the death sequence take, and in what iris state?
#
# CGame::runGameSession's death block has three exits and two of them abandon
# the fade: RETURN pressed, and fadeIn() reporting done -- which it does for
# iris type 0 as well as type 5. The block also only runs while getDeathState
# still reports DEAD, so losing that mid-fade strands the iris with nothing
# left to complete it.
#
# The whole block sits outside the pause gate; only CGame::process, which owns
# updateFadeTransition, is gated. Line numbers are against
# CGame_runGameSession_FUN_004daf80.keep.cpp.
set $started = 0
set $dead_seen = 0

# Catch the close wherever it is triggered from, not just the death call site --
# CScript::step has a beginFadeOut opcode of its own.
break core_game_cpp_CGame_beginFadeOut_FUN_004e0960
commands
silent
set $started = 1
printf "[FADE-OUT begins] paused=%d type=%d radius=%g\n", g_CGamePtr->is_paused, g_IrisFadeType, g_IrisFadeRadius
where 3
cont
end

# Is the death block being entered at all? Reports once per second of frames.
break core/game.cpp/CGame_runGameSession_FUN_004daf80.keep.cpp:464
commands
silent
set $dead_seen = $dead_seen + 1
if $dead_seen == 1 || $dead_seen % 60 == 0
  printf "[DEAD block #%d] paused=%d local_14=%g type=%d radius=%g\n", $dead_seen, g_CGamePtr->is_paused, local_14, g_IrisFadeType, g_IrisFadeRadius
end
cont
end

break core/game.cpp/CGame_runGameSession_FUN_004daf80.keep.cpp:465
commands
silent
if iVar5 != 0
  printf "[EXIT: RETURN] paused=%d type=%d radius=%g  -- fade abandoned\n", g_CGamePtr->is_paused, g_IrisFadeType, g_IrisFadeRadius
end
cont
end

break core/game.cpp/CGame_runGameSession_FUN_004daf80.keep.cpp:468
commands
silent
if uVar9 != 0
  printf "[EXIT: fade reports done] paused=%d type=%d radius=%g  (0 = idle, 5 = black)\n", g_CGamePtr->is_paused, g_IrisFadeType, g_IrisFadeRadius
end
cont
end

# Does the state machine keep being driven once the close has started?
break core_game_cpp_CGame_updateFadeTransition_FUN_004e09c0
commands
silent
if $started && g_IrisFadeType != 0
  printf "  [update] type=%d radius=%g dt_int=%d\n", g_IrisFadeType, g_IrisFadeRadius, this_ptr->delta_time_int
end
cont
end
