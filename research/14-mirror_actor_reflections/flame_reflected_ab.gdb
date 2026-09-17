# A/B for the reflected transparent pass.
#
# CDemonSet::renderTransparentActors draws each transparent actor, then repeats
# it once per mirror, gating that sub-loop on mirror_glass_actor_count. Zeroing
# the count on entry skips the reflected repeats for the rest of the frame;
# buildMirrorList rebuilds it next frame, so this is per-frame and reversible by
# deleting the breakpoint.
#
# The question it answers: FlameCandle3's reflected quad projects to x = -32768
# on the fixed-point rail, and the very next primitive every frame is
# FlameCandle5's main draw, which does not appear. If suppressing the reflected
# repeats brings that flame back, the degenerate primitive is taking the next
# one down with it.
#
# Caveat worth knowing when reading the result: the count stays zero for the
# remainder of the frame, so any reflected pass that runs after
# renderTransparentActors is suppressed too.

break core_set_cpp_CDemonSet_renderTransparentActors_FUN_0056cf00
commands
silent
set var g_CDemonSetInstance.mirror_glass_actor_count = 0
cont
end

printf "reflected transparent repeats suppressed from the next frame\n"
