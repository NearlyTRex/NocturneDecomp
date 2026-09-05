# Svetlana's blades — is it the overlay's DRAWING, or the texture SELECTION?
#
# The first bisect returned from renderEnvMapTriangles at function entry and the
# artefact vanished, which was read as "the overlay draws it". But entry is
# BEFORE the first statement:
#
#     captureTexture(g_CDemonRendererPtr2, &g_EnvMapTexture);
#
# and captureTexture is ensureTextureLoaded plus capture-list bookkeeping — a
# texture SELECTION with renderer-state side effects, not a framebuffer grab.
# Returning at entry therefore suppressed two different things at once: the
# selection of BACKGND.RAW as the current texture, and every polygon the
# function emits.
#
# Forcing every emitted vertex onto a single texel left the artefact unchanged,
# so the sphere-map sampling is innocent. That points at the other half.
#
# This probe keeps captureTexture and skips only the drawing, by returning at
# line 37 — after the texture selection and the blend/alpha setup, before the
# per-face loop.
#
#   garbage GONE     -> the emitted polygons are the source after all: geometry,
#                       depth or blend of the second draw
#   garbage REMAINS  -> selecting BACKGND.RAW as the current texture is what
#                       breaks the following draws; the overlay itself is
#                       incidental and the real defect is state restoration
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete
set confirm off

set $tb_n = 0

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:37
commands
silent
set $tb_n = $tb_n + 1
return
cont
end

printf "texture-bind probe armed — captureTexture still runs, no polygons emitted\n"
