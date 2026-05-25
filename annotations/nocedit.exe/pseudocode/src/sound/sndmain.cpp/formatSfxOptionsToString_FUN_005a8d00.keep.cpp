// Name: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00
// Address: 005a8d00
// MANUAL RECONSTRUCTION
// Address Range: [[005a8d00, 005a8e86]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_005a8d00(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_005a8d00(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

{
  int iVar1;
  int iVar2;

  if (prefix_string == (char *)0x0) {
    *output_buffer = '\0';
  }
  else {
    iVar2 = _sprintf(output_buffer,"%s",prefix_string);
    output_buffer = output_buffer + iVar2;
  }
  if ((format_flags & 1) != 0) {
    iVar1 = _sprintf(output_buffer," channel=%d%s",options->channel_index,"");
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 2) != 0) {
    if (options->position_format == 0) {
      iVar2 = _sprintf(output_buffer," pos=%lg,%lg,%lg",
                        (options->position).x,(options->position).y,(options->position).z);
      output_buffer = output_buffer + iVar2;
    }
    if (options->position_format == 1) {
      iVar2 = _sprintf(output_buffer," posPtrFloat=%p",options->position_source_ptr);
      output_buffer = output_buffer + iVar2;
    }
    if (options->position_format == 2) {
      iVar2 = _sprintf(output_buffer," posPtrDouble=%p",options->position_source_ptr);
      output_buffer = output_buffer + iVar2;
    }
  }
  if ((format_flags & 4) != 0) {
    if (options->velocity_format == 0) {
      iVar2 = _sprintf(output_buffer," vel=%lg,%lg,%lg",
                        (options->velocity).x,(options->velocity).y,(options->velocity).z);
      output_buffer = output_buffer + iVar2;
    }
    if (options->velocity_format == 1) {
      iVar2 = _sprintf(output_buffer," velPtrFloat=%p",options->velocity_source_ptr);
      output_buffer = output_buffer + iVar2;
    }
    if (options->velocity_format == 2) {
      iVar2 = _sprintf(output_buffer," velPtrDouble=%p",options->velocity_source_ptr);
      output_buffer = output_buffer + iVar2;
    }
  }
  if ((format_flags & 8) != 0) {
    iVar2 = _sprintf
                      (output_buffer," vol=%g",(double)options->current_volume);
    output_buffer = output_buffer + iVar2;
  }
  if ((format_flags & 0x10) != 0) {
    iVar2 = _sprintf
                      (output_buffer," freq=%g",(double)options->base_frequency);
    output_buffer = output_buffer + iVar2;
  }
  if ((format_flags & 0x20) == 0) {
    return;
  }
  _sprintf(output_buffer," delay=%lg",options->delay_remaining);
  return;
}
