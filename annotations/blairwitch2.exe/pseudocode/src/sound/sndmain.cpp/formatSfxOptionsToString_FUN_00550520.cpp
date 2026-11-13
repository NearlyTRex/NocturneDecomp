// Name: sound_sndmain.cpp_formatSfxOptionsToString_FUN_00550520
// Address: 00550520
// Address Range: [[00550520, 005506aa]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_00550520(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_00550520(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)

{
  int iVar1;
  
  if (prefix_string == (char *)0x0) {
    *output_buffer = '\0';
  }
  else {
    iVar1 = _sprintf(output_buffer,(char *)0x5e8c84);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 1) != 0) {
    iVar1 = _sprintf(output_buffer," channel=%d%s");
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 2) != 0) {
    if (options->position_format == 0) {
      iVar1 = _sprintf(output_buffer,(char *)0x5e8c95);
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
      iVar1 = _sprintf(output_buffer,(char *)0x5e8cc7);
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
    iVar1 = _sprintf(output_buffer,(char *)0x5e8cf9);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x10) != 0) {
    iVar1 = _sprintf(output_buffer,(char *)0x5e8d01);
    output_buffer = output_buffer + iVar1;
  }
  if ((format_flags & 0x20) == 0) {
    return;
  }
  _sprintf(output_buffer," delay=%lg");
  return;
}
