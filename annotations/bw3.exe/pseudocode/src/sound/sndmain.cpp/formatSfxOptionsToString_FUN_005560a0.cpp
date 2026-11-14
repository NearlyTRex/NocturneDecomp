// Name: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005560a0
// Address: 005560a0
// Address Range: [[005560a0, 0055622a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_005560a0(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_005560a0(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

{
  int iVar1;
  
  if (prefix_string == (char *)0x0) {
    *output_buffer = '\0';
  }
  else {
    iVar1 = _sprintf(output_buffer,(char *)0x5d3768);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 1) != 0) {
    iVar1 = _sprintf(output_buffer," channel=%d%s");
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 2) != 0) {
    if (options->position_format == 0) {
      iVar1 = _sprintf(output_buffer,(char *)0x5d3779);
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 1) {
      iVar1 = _sprintf(output_buffer," posPtrFloat=%p");
      output_buffer = output_buffer + iVar1;
    }
    if (options->position_format == 2) {
      iVar1 = _sprintf(output_buffer," posPtrDouble=%p");
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((format_flags & 4) != 0) {
    if (options->velocity_format == 0) {
      iVar1 = _sprintf(output_buffer,(char *)0x5d37ab);
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 1) {
      iVar1 = _sprintf(output_buffer," velPtrFloat=%p");
      output_buffer = output_buffer + iVar1;
    }
    if (options->velocity_format == 2) {
      iVar1 = _sprintf(output_buffer," velPtrDouble=%p");
      output_buffer = output_buffer + iVar1;
    }
  }
  if ((format_flags & 8) != 0) {
    iVar1 = _sprintf(output_buffer,(char *)0x5d37dd);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x10) != 0) {
    iVar1 = _sprintf(output_buffer,(char *)0x5d37e5);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x20) == 0) {
    return;
  }
  _sprintf(output_buffer," delay=%lg");
  return;
}
