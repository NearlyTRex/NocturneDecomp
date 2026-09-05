# Svetlana's blades — what does the env-map overlay actually PUT on screen?
#
# Established so far:
#   - Suppressing renderEnvMapTriangles removes the artefact entirely, so the
#     sphere-mapped overlay is the source.
#   - The env map is g_EnvMapTexture = BACKGND.RAW, the room's backdrop art.
#   - The emitted UVs are now fully inside 0..0xFFFF (0.00 % out of range, from
#     97 % as shipped) and the artefact is UNCHANGED. So out-of-range sampling
#     was real but is not what is visible.
#
# Stop reasoning about the function and photograph its contribution: alternate
# frames with the overlay drawn and suppressed, capturing each, so a pixel diff
# of a consecutive pair isolates exactly what the overlay adds. The shape of
# that contribution says which mechanism it is:
#
#   speckled / per-pixel noise   -> depth fighting between the two blade draws
#   smeared bands following the
#     blade's curvature          -> sphere-map sampling
#   a flat dark wash             -> the overlay is working, but sampling a dark
#                                   region of the backdrop, or blended too hard
#
# Captures land in /tmp/env_NN.ppm: ODD numbers have the overlay, EVEN numbers
# have it suppressed.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete
set confirm off

set $ov_off = 0
set $ov_tick = 0
set $ov_shot = 0

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
if $ov_off != 0
  return
end
cont
end

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
set $ov_tick = $ov_tick + 1
if $ov_tick % 2 == 0 && $ov_shot < 12
  set $ov_shot = $ov_shot + 1
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/env_%02d.ppm\")", $ov_shot
  printf "[SHOT %02d] overlay=%s\n", $ov_shot, $ov_off == 0 ? "ON" : "off"
  if $ov_off == 0
    set $ov_off = 1
  else
    set $ov_off = 0
  end
end
cont
end

printf "overlay diff probe armed — odd shots have the overlay, even shots do not\n"
