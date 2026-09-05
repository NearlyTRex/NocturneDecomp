# Iris fade — when does the centre snap onto the character, and how far?
#
# renderIrisFade re-runs calculateIrisFadeCenter every frame while the iris is
# open (0x4e0add, verified in asm). calculateIrisFadeCenter only writes the
# centre when worldToScreenWithFrustumCull reports the focus actor visible, so
# while the hero is still off screen the centre stays at the beginFadeIn fallback
# of (WindowWidth/2, WindowHeight/2). When he walks into view it snaps.
#
# What matters is the RADIUS at the moment of the snap relative to the window
# width the fade runs to: a snap while the disc is small is a visible teleport.
#
# Baseline on the reproducing mission, before the fix: centre held at (320,240)
# until radius 295.79 (46 % of the fade) then jumped to (400,477) — roughly a
# 250 px move while the disc radius was only ~296.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name.
# $cx is the CX register, exactly like $bl is BL — using either makes the gate
# never hold and writes to the inferior's registers. Safe names are prefixed.

delete

set $ic_x = -99999
set $ic_y = -99999

break core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0
commands
silent
if g_IrisFadeCenterX != $ic_x || g_IrisFadeCenterY != $ic_y
  printf "[CENTRE] type=%d radius=%8.2f  (%d,%d) -> (%d,%d)  width=%d  pct=%.0f%%\n", g_IrisFadeType, g_IrisFadeRadius, $ic_x, $ic_y, g_IrisFadeCenterX, g_IrisFadeCenterY, g_WindowWidth, 100.0 * g_IrisFadeRadius / g_WindowWidth
  set $ic_x = g_IrisFadeCenterX
  set $ic_y = g_IrisFadeCenterY
end
cont
end

break core_game_cpp_CGame_beginFadeIn_FUN_004e0920
commands
silent
printf "=== [FADE-IN] begins\n"
set $ic_x = -99999
set $ic_y = -99999
cont
end

printf "iris jump probe armed\n"
