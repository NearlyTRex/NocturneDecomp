# Render ONLY the env-map pass in software, inside the live accelerated session.
#
# The research README claims "software renders plain grey, the remainder is
# accel-only". That claim is inconsistent with the measured inputs: BACKGND.RAW
# is 92% luma<32 and the software scanline's Loop A samples it with the same
# colorkey, the same 187/255 alpha and the same src*a + dst*(1-a) blend the
# accelerated path uses. Both should show a dark reflection.
#
# No relaunch is needed to test that: CDemonCamera::beginBackgroundScene already
# sets g_UseExternalRenderer = 0 mid-frame and endBackgroundScene restores it, so
# the engine is built to run individual draws through the software rasteriser
# while the accelerated surfaces stay live. Do the same for just this function.
#
# Result to look for on screen:
#   dark reflection, same as accel -> the paths agree; the README's "software is
#                                     clean" row is wrong and there is no
#                                     divergence left to chase
#   plain grey                     -> the divergence is real and lives in the
#                                     software rasteriser / its texture binding

delete

set $q_saved = -1
set $q_calls = 0

# line 24 is the captureTexture call -- the first statement, so the whole
# function body including the texture bind runs software-side.
break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_saved = g_UseExternalRenderer
set g_UseExternalRenderer = 0
set $q_calls = $q_calls + 1
cont
end

# line 154 is the function's `return;` -- restore before anything else draws.
break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:154
commands
silent
if $q_saved != -1
  set g_UseExternalRenderer = $q_saved
end
cont
end

printf "env pass forced to software; $q_calls counts the draws\n"
