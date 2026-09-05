# Did leaving client arrays change any pixels? One scene, captured both ways.
#
# The draw path now submits vertices through a buffer object with named
# attributes (a_pos pinned to location 0) and its own u_projection, instead of
# gl_Vertex / gl_Color / gl_MultiTexCoord0 and ftransform() — which were only the
# compatibility profile's names for the client arrays the shader was supposed to
# be replacing.
#
# That is meant to be a PURE REFACTOR: same geometry, same pixels, different
# submission. Comparing an accelerated capture against a software one cannot show
# that, because the two rasterizers differ anyway and the scenes were different;
# the honest test is the same scene through both vertex stages.
#
#   /tmp/vpath_0.ppm   buffer objects + generic attributes  (the new path)
#   /tmp/vpath_1.ppm   compatibility client arrays          (the old path)
#
# EXIT CRITERION: these two agree to the animation noise floor, which the three
# captures of software_reference_capture.gdb put at mean|d| ~0.6. Anything
# systematically larger means the refactor moved pixels and is not a refactor.
#
# Two failure modes this path already hit, both silent, worth knowing about:
#   - generic attribute 0 aliases gl_Vertex in a compatibility context, so if
#     a_pos does not land on location 0 and no client array is enabled, the draw
#     renders NOTHING with no GL error. Hence glBindAttribLocation before link.
#   - glUniform* writes to the CURRENTLY BOUND program. Setting u_projection
#     before glUseProgram left it zero, collapsing every vertex to the origin —
#     again with an empty screen and a clean log.
#
# Usage — accel + the OpenGL renderer, at a scene, holding still:
#   rm -f /tmp/vpath_*.ppm
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/vertex_path_ab.gdb
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $vp_tick = 0
set $vp_shot = 0

# SDL_GL_SwapWindow, per research/13: capturing from an arbitrary mid-frame pause
# returned three different images from four dumps of an unchanged scene.
break SDL_GL_SwapWindow
commands
silent
set $vp_tick = $vp_tick + 1
# Switch the vertex stage, then give the rebuild a frame to happen before
# capturing: the program is dropped here and recompiled on the next draw.
if $vp_tick % 16 == 0 && $vp_shot < 2
  set nocturne_gl_shader_force_compat = $vp_shot
  call (void)nocturne_gl_shader_rebuild()
end
if $vp_tick % 16 == 10 && $vp_shot < 2
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/vpath_%d.ppm\")", $vp_shot
  printf "[vertex path %d captured @tick %d]\n", $vp_shot, $vp_tick
  set $vp_shot = $vp_shot + 1
end
# Leave the build on the modern path however the run ends.
if $vp_shot == 2
  set nocturne_gl_shader_force_compat = 0
end
cont
end

printf "vertex path A/B armed — hold still for ~32 frames\n"
printf "  /tmp/vpath_0.ppm buffer objects   /tmp/vpath_1.ppm client arrays\n"
