# Is the mirror camera built with the scene camera's field of view?
#
# CDemonSet::setupMirrorRendering samples the camera three ways and hands them
# to setupMirrorReflection, which stores the third as CMirrorReflection::
# projection_scale and calls setupMirrorCamera with it. That third value comes
# from calculateProjectionFactor, which computes 18 * 65536 / g_ProjectionScale.
#
# CDemonRenderer::pushViewport stacks g_ProjectionScale and resets the live
# global to 0x10000 without rebaking g_TransformMatrix, and
# CDemonCamera::beginBackgroundScene opens exactly such a window around the pass
# that renders the mirror. Sampled inside it, calculateProjectionFactor returns
# 18 * 65536 / 0x10000 = 18 -- the default field of view rather than the
# camera's. See shims/game/mirror_projection.h, which documents the same window
# on the restore side.
#
# A mirror camera built at the wrong field of view cannot agree with the scene
# camera on the glass plane, so the reflection no longer registers with the
# quad: it spills past one edge and falls short of the other, leaving part of
# the punched depth window uncovered.
#
# renderSceneGeometry is the only caller passing enable_flag = 1, so filtering
# on it isolates the scene-geometry mirror setup from the four per-actor loops
# that run hundreds of times a frame.
#
# Expected if the camera is sound:  factor == 18 * 65536 / scale_before
# Expected if the window is open:   scale_before == 0x10000 and factor == 18,
#                                   while the scene camera is at some other fov
set confirm off
delete
set confirm on

set $mf_hits = 0
set $mf_cap = 8

break core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
commands
silent
if (enable_flag == 1) && ($mf_hits < $mf_cap)
  set $mf_hits = $mf_hits + 1
  printf "MIRRORCAM #%d g_ProjectionScale=%d (0x%x)  implied_fov=%f\n", $mf_hits, g_ProjectionScale, g_ProjectionScale, 18.0 * 65536.0 / g_ProjectionScale
end
cont
end

# After setupMirrorReflection has stored it, so the value the mirror camera was
# actually built from can be read back rather than inferred.
break core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480
commands
silent
if $mf_hits > 0
  printf "   -> reflection.projection_scale=%f  g_ProjectionScale now=%d\n", this_ptr->projection_scale, g_ProjectionScale
end
cont
end
