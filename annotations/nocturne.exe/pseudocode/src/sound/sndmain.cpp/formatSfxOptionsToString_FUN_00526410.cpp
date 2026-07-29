// Name: sound_sndmain.cpp_formatSfxOptionsToString_FUN_00526410
// Address: 00526410
// Address Range: [[00526410, 00526596]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_00526410(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_00526410(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

{
  int iVar1;
  
  if (prefix_string == (char *)0x0) {
    *output_buffer = '\0';
  }
  else {
    iVar1 = _sprintf(output_buffer,"%s",prefix_string);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 1) != 0) {
    iVar1 = _sprintf(output_buffer," channel=%d%s",options->channel_index);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 2) != 0) {
    if (options->position_format == 0) {
      iVar1 = _sprintf(output_buffer," pos=%lg,%lg,%lg",*(uint *)&(options->position).x
                         ,*(uint *)((int)&(options->position).x + 4),
                         *(uint *)&(options->position).y,
                         *(uint *)((int)&(options->position).y + 4),
                         *(uint *)&(options->position).z,
                         *(uint *)((int)&(options->position).z + 4));
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 1) {
      iVar1 = _sprintf(output_buffer," posPtrFloat=%p",options->position_source_ptr);
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 2) {
      iVar1 = _sprintf(output_buffer," posPtrDouble=%p",options->position_source_ptr);
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((format_flags & 4) != 0) {
    if (options->velocity_format == 0) {
      iVar1 = _sprintf(output_buffer," vel=%lg,%lg,%lg",*(uint *)&(options->velocity).x
                         ,*(uint *)((int)&(options->velocity).x + 4),
                         *(uint *)&(options->velocity).y,
                         *(uint *)((int)&(options->velocity).y + 4),
                         *(uint *)&(options->velocity).z,
                         *(uint *)((int)&(options->velocity).z + 4));
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 1) {
      iVar1 = _sprintf(output_buffer," velPtrFloat=%p",options->velocity_source_ptr);
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 2) {
      iVar1 = _sprintf(output_buffer," velPtrDouble=%p",options->velocity_source_ptr);
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((format_flags & 8) != 0) {
    iVar1 = _sprintf(output_buffer," vol=%g",(double)options->current_volume);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x10) != 0) {
    iVar1 = _sprintf(output_buffer," freq=%g",(double)options->base_frequency);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x20) == 0) {
    return;
  }
  _sprintf(output_buffer," delay=%lg",*(uint *)&options->delay_remaining,
             *(uint *)((int)&options->delay_remaining + 4));
  return;
}
