# What fraction of reflected primitives survive the mirror clipper?
#
# CMirror::reflectAndClipPrimitive clips a polygon against five planes in
# sequence and gives up as soon as fewer than three vertices survive, returning
# 1 only after the fifth. Counting its entry against the first statement of its
# accept branch gives the rate directly.
#
# Do not measure this by counting renderSolidColorDepthDirect against
# clipAndRenderReflectedPrimitive. That undercounts the offers, because
# clipAndRenderReflectedPrimitive is one of three CMirror entry points --
# renderMirroredPrimitive and renderReflectedPrimitive are the others -- and
# overcounts the draws, because renderSolidColorDepthDirect has callers outside
# the mirror path. It reports more primitives drawn than offered.
#
# A low rate is not by itself a fault: a mirror sees a narrow cone of the room,
# so most of the room is legitimately outside it.
#
# This runs from renderSceneGeometry, which is camera-setup work — so the
# numbers only move when the camera CHANGES. Walk to another camera and back.
set confirm off
delete
set confirm on

set $probe_offered = 0
set $probe_accepted = 0
set $probe_setcam = 0

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $probe_setcam = $probe_setcam + 1
printf "CAMERA-SWITCH #%d -> index %d | offered=%d accepted=%d\n", $probe_setcam, index, $probe_offered, $probe_accepted
cont
end

break core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
commands
silent
set $probe_offered = $probe_offered + 1
cont
end

# The first statement after the fifth plane succeeds.
break CMirror_reflectAndClipPrimitive_FUN_00522310.keep.cpp:51
commands
silent
set $probe_accepted = $probe_accepted + 1
cont
end

printf "armed: change camera and come back, then read the counts\n"
