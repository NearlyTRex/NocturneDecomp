# Mirror room + hardware acceleration: horizontal geometry displacement.
#
# Symptom: with the external renderer active, doors and walls on the LEFT and
# RIGHT of the screen sit away from where the pre-rendered backdrop paints them.
# Collision is unaffected, the mirror itself looks correct, and only mirror
# rooms are affected.
#
# A centre-pinned, edge-growing horizontal error is a projection-scale error,
# not a camera translation. The projection is baked into g_TransformMatrix by
# CDemonRenderer::setupCameraAndProjection, which recomputes it from whatever
# clip window and g_ProjectionScale are in force at the moment it runs:
#
#   projection_reciprocal = 0x100000000 / g_ProjectionScale            (x column)
#   aspect_ratio_fixed    = ((ClipRight-ClipLeft+1) << 16)
#                           / (ClipBottom-ClipTop+1) / g_ProjectionScale  (y column)
#
# CDemonSet::restoreCameraAfterMirror re-runs that bake (via setupSceneRendering)
# but restores neither g_Clip* nor g_Projection.*. So every mirror pass re-bakes
# the scene projection against the clip window current at that instant. This
# probe logs every bake with its caller so a re-bake under the wrong window is
# visible directly.
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/14-mirror_actor_reflections/mirror_accel_projection_probe.gdb
#   ... walk into the mirror room, let a few frames run ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(BAKE|SCN)'
#
# Run it twice: once with acceleration on, once off. The BAKE lines that differ
# between the two runs name the quantity that is wrong.

delete

set $tag = 0
set $bakes = 0
set $scn = 0
set $win = 0
set $winb = 0

# ---- provenance tags: who is about to trigger a projection bake -------------

break core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0
commands
silent
set $tag = 1
cont
end

break core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
commands
silent
set $tag = 2
cont
end

break core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
commands
silent
set $tag = 3
cont
end

break core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
commands
silent
set $tag = 4
cont
end

# ---- every projection bake, printed only when the state CHANGES ------------
# tag: 0 = other/scene setup, 1 = restoreCameraAfterMirror, 2 = beginBackground,
#      3 = endBackground, 4 = setupMirrorRendering
#
# A steady scene re-bakes the same numbers thousands of times per second, so an
# unconditional printf buries the signal. Only transitions matter here.
#
# Name the state variables with a prefix. On x86 `$bl`, `$bh`, `$bx`, `$bp`,
# `$sp`, `$si`, `$di`, `$ps` and friends are REGISTERS, not convenience
# variables: `set $bl = X` writes the inferior's BL register on every hit, so
# the comparison never holds and the program's registers are being corrupted
# while it runs.

set $p_left = -1
set $p_top = -1
set $p_right = -1
set $p_bot = -1
set $p_scale = -1

break engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
commands
silent
set $bakes = $bakes + 1
if $win == 1 && $winb < 80
  set $winb = $winb + 1
  printf "   [bake tag=%d ext=%d] pscale=%d -> col0=(%d,%d,%d)\n", $tag, g_UseExternalRenderer, g_ProjectionScale, g_TransformMatrix.m[0].x, g_TransformMatrix.m[1].x, g_TransformMatrix.m[2].x
end
if g_ClipLeft != $p_left || g_ClipTop != $p_top || g_ClipRight != $p_right || g_ClipBottom != $p_bot || g_ProjectionScale != $p_scale
  printf "[BAKE #%d tag=%d ext=%d] clip=(%d,%d,%d,%d) pscale=%d proj=(%d,%d,%d,%d)\n",  $bakes, $tag, g_UseExternalRenderer,  g_ClipLeft, g_ClipTop, g_ClipRight, g_ClipBottom,  g_ProjectionScale,  g_Projection.half_width_fixed, g_Projection.neg_half_height_fixed,  g_Projection.center_x_fixed, g_Projection.center_y_fixed
  set $p_left = g_ClipLeft
  set $p_top = g_ClipTop
  set $p_right = g_ClipRight
  set $p_bot = g_ClipBottom
  set $p_scale = g_ProjectionScale
end
set $tag = 0
cont
end

# ---- state actually in force when live geometry is submitted ---------------
# Gated on the projection quantities only; the camera itself moves every frame
# and would otherwise print continuously.

set $s_left = -1
set $s_right = -1
set $s_scale = -1
set $srecip = -1
set $saspect = -1

break engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
commands
silent
if g_ProjectionScale != $p_scale
  printf "[PSCALE] fov=%f  old_pscale=%d  (bake still holds recip=%d)\n", field_of_view, g_ProjectionScale, g_CDemonRendererPtr2->projection_reciprocal
end
cont
end

# The renderer's projection_reciprocal / aspect_ratio_fixed are scratch: written
# and read ONLY inside setupCameraAndProjection. The state that actually drives
# rendering is g_TransformMatrix, whose column 0 was scaled by the reciprocal and
# column 1 by the aspect at bake time. So dump the matrix itself.
#
# Burst-limited: the first 40 hits after arming, unconditionally, so the
# backdrop pass (ext=0) and the live pass (ext=1) can be compared frame by frame
# for one camera.

break core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
commands
silent
if g_CDemonSetPtr->mirror_glass_actor_count != 0
  set $scn = $scn + 1
end
if g_UseExternalRenderer == 0 && g_CDemonSetPtr->mirror_glass_actor_count != 0
  set $win = 1
  set $winb = 0
end
if g_UseExternalRenderer != 0
  set $win = 0
end
if $scn <= 40 && g_CDemonSetPtr->mirror_glass_actor_count != 0
  printf "[SCN #%d ext=%d] pscale=%d mirrors=%d rot=(%d,%d,%d) org=(%d,%d,%d) M0=(%d,%d,%d) M1=(%d,%d,%d) M2=(%d,%d,%d)\n",  $scn, g_UseExternalRenderer,  g_ProjectionScale,  g_CDemonSetPtr->mirror_glass_actor_count,  g_CameraRotationPitch, g_CameraRotationYaw, g_CameraRotationRoll,  g_CameraOriginX, g_CameraOriginY, g_CameraOriginZ,  g_TransformMatrix.m[0].x, g_TransformMatrix.m[0].y, g_TransformMatrix.m[0].z,  g_TransformMatrix.m[1].x, g_TransformMatrix.m[1].y, g_TransformMatrix.m[1].z,  g_TransformMatrix.m[2].x, g_TransformMatrix.m[2].y, g_TransformMatrix.m[2].z
end
cont
end

printf "mirror/accel projection probe armed\n"
