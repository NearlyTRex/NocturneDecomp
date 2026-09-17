# Decode an MP3 through the game's own decoder, without playing the game.
#
# CMP3Decoder has a small surface -- ctor, openFile, read -- and none of it
# touches the mixer, DirectSound or the frame loop, so the decoder can be driven
# straight from the debugger and its PCM written out for comparison against a
# reference decode of the same file. That removes the need to reach a point in
# the game where the sample plays, and makes the result repeatable.
#
# openFile calls displayErrorAndQuit when the file is missing, which would take
# the process with it, so the size is checked first and the decode is skipped if
# the lookup fails. Files resolve through the dosio search handlers as
# "sound\<name>", which finds a loose sound/<name> as readily as a POD entry --
# so extracting the asset beside the executable avoids depending on which act's
# POD is currently mounted.
#
# Set $mp3_name and $mp3_out before sourcing:
#
#   (gdb) set $mp3_name = "LOUNGE-SONG.MP3"
#   (gdb) set $mp3_out  = "/tmp/lounge_game.raw"
#
# Output is raw 16-bit signed PCM at the file's own sample rate, mono or stereo
# as the file dictates -- the same shape ffmpeg writes with
# `-f s16le`, so the two decode to directly comparable buffers.
set confirm off
set pagination off

set $mp3_size = (int)engine_dosio_cpp_getFileSize_FUN_00481880("sound", $mp3_name)
printf "file %s -> %d bytes\n", $mp3_name, $mp3_size

if $mp3_size <= 0
  printf "NOT FOUND -- extract it to sound/ beside the executable, or load the act that carries it\n"
else
  # Typed, not void * — gdb resolves the call by argument type and will not
  # match a void * against CMP3Decoder *.
  set $mp3_dec = (CMP3Decoder *)malloc(0x8630)
  call sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0($mp3_dec)
  call sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550($mp3_dec, $mp3_name)

  # 16 MB of PCM is ~3 minutes of 44.1 kHz mono, longer than any asset here.
  set $mp3_cap = 16777216
  set $mp3_buf = (char *)malloc($mp3_cap)
  set $mp3_off = 0
  set $mp3_calls = 0
  set $mp3_run = 1

  # read() takes a sample count and returns samples produced; one MPEG1 granule
  # pair is 1152, so a batch of 4608 is a few frames per call.
  while $mp3_run
    set $mp3_got = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60($mp3_dec, (short *)($mp3_buf + $mp3_off), 4608)
    set $mp3_calls = $mp3_calls + 1
    if $mp3_got > 0
      set $mp3_off = $mp3_off + $mp3_got * 2
      if $mp3_off + 16384 > $mp3_cap
        set $mp3_run = 0
        printf "buffer full, stopping early\n"
      end
    else
      set $mp3_run = 0
    end
  end

  printf "decoded %d bytes (%d samples) in %d calls\n", $mp3_off, $mp3_off / 2, $mp3_calls
  eval "dump binary memory %s $mp3_buf $mp3_buf + $mp3_off", $mp3_out
  printf "wrote %s\n", $mp3_out

  call sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0($mp3_dec)
  call (void)free($mp3_buf)
  call (void)free((void *)$mp3_dec)
end
