delete
set pagination off

# Which buffer does the death banner land in: the full-resolution CPU image, or
# the 640x480 hold buffer the engine composites into above 480 lines?
#
# g_dev lives in an anonymous namespace in trigl_device.cpp and is not visible
# from a breakpoint in another translation unit, so its pointers are captured
# from a breakpoint inside that file and compared in the text one.
set $img = 0
set $img_end = 0
set $hold = 0
set $hold_end = 0
set $n = 0

break nocturne_trigl_device_lock_frame
commands
silent
set $img = (unsigned char *)g_dev.image
set $img_end = (unsigned char *)g_dev.image + g_dev.pitch * g_dev.height
set $hold = (unsigned char *)g_dev.hold
set $hold_end = (unsigned char *)g_dev.hold + g_dev.hold_pitch * 480
cont
end

break nocturne_ui_draw_text
commands
silent
if text[0] == 'Y'
  set $n = $n + 1
  if $n < 4 || $n % 60 == 0
    set $row = (unsigned char *)g_ScreenBufferArray[250]
    printf "[BUF #%d] row250=%p  image=%p..%p  hold=%p..%p\n", $n, $row, $img, $img_end, $hold, $hold_end
    if $row >= $hold && $row < $hold_end
      printf "          -> HOLD buffer\n"
    end
    if $row >= $img && $row < $img_end
      printf "          -> full-resolution IMAGE\n"
    end
  end
end
cont
end
