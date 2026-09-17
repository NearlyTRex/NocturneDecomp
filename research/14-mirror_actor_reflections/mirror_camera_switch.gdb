# Does the mirror's depth pass run, and when?
#
# CDemonSet::renderSceneGeometry lays down the mirror quad's depth and renders
# the reflected static geometry, but it runs from setCameraView — once per
# camera angle, not per frame. Counters armed during steady-state frames
# therefore never see it, which is exactly how a "never called" reading happens.
# Logging on each setCameraView gives per-switch deltas.
#
# Deliberately cheap: these fire once or twice per camera change, not per
# primitive, so the game stays playable while armed.
set confirm off
delete
set confirm on

set $probe_setcam = 0
set $probe_quaddepth = 0
set $probe_quad = 0
set $probe_setupmirror = 0

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $probe_setcam = $probe_setcam + 1
printf "CAMERA-SWITCH #%d -> index %d | quad_depth=%d quad=%d setup_mirror=%d\n", $probe_setcam, index, $probe_quaddepth, $probe_quad, $probe_setupmirror
cont
end

break core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
commands
silent
set $probe_quaddepth = $probe_quaddepth + 1
cont
end

break core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00522670
commands
silent
set $probe_quad = $probe_quad + 1
cont
end

break core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
commands
silent
set $probe_setupmirror = $probe_setupmirror + 1
cont
end

printf "armed: counts print on each camera switch (deltas are that camera's work)\n"
