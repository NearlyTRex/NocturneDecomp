// Name: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00
// Address: 005a8d00
// Address Range: [[005a8d00, 005a8e86]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00(char * output_buffer, char * prefix_string, CSfxOptions * options, uint format_flags)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_formatSfxOptionsToString_FUN_005a8d00
          (char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

{
  int iVar1;
  
  if (prefix_string == (char *)0x0) {
    *output_buffer = '\0';
  }
  else {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer,"%s");
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 1) != 0) {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," channel=%d%s");
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 2) != 0) {
    if (options->position_format == 0) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                        (output_buffer," pos=%lg,%lg,%lg",*(uint *)&(options->position).x
                         ,*(uint *)((int)&(options->position).x + 4),
                         *(uint *)&(options->position).y,
                         *(uint *)((int)&(options->position).y + 4),
                         *(uint *)&(options->position).z);
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 1) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," posPtrFloat=%p");
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 2) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," posPtrDouble=%p");
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((format_flags & 4) != 0) {
    if (options->velocity_format == 0) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                        (output_buffer," vel=%lg,%lg,%lg",*(uint *)&(options->velocity).x
                         ,*(uint *)((int)&(options->velocity).x + 4),
                         *(uint *)&(options->velocity).y,
                         *(uint *)((int)&(options->velocity).y + 4),
                         *(uint *)&(options->velocity).z);
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 1) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," velPtrFloat=%p");
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 2) {
      iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(output_buffer," velPtrDouble=%p");
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((format_flags & 8) != 0) {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                      (output_buffer," vol=%g",(double)options->current_volume);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x10) != 0) {
    iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0
                      (output_buffer," freq=%g",(double)options->base_frequency);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x20) == 0) {
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (output_buffer," delay=%lg",*(uint *)&options->delay_remaining,
             *(uint *)((int)&options->delay_remaining + 4));
  return;
}
