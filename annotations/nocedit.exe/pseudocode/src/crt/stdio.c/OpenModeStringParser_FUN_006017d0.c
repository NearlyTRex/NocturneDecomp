// Name: crt_stdio.c_OpenModeStringParser_FUN_006017d0
// Address: 006017d0
// Address Range: [[006017d0, 0060190b]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_OpenModeStringParser_FUN_006017d0(char *mode_string,char *output_flags)

#include "nocturne.h"

int __cdecl OpenModeStringParser(char *mode_string,char *output_flags)

{
  byte bVar6;
  uint uVar6;
  byte bVar1;
  bool bVar5;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar2 = true;
  bVar4 = false;
  bVar5 = false;
  bVar3 = false;
  if (output_flags != (char *)0x0) {
    if (INT_00685280 == 1) {
      output_flags[0] = '\x01';
      output_flags[1] = '\0';
      output_flags[2] = '\0';
      output_flags[3] = '\0';
    }
    else {
      output_flags[0] = '\0';
      output_flags[1] = '\0';
      output_flags[2] = '\0';
      output_flags[3] = '\0';
    }
  }
  bVar1 = *mode_string;
  if (bVar1 < 0x72) {
    if (bVar1 != 0x61) {
LAB_00601822:
      setErrno(SYSTEM_BAD_FILE_DESCRIPTOR);
      return 0;
    }
    uVar6 = 0x82;
  }
  else if (bVar1 < 0x73) {
    uVar6 = 1;
  }
  else {
    if (bVar1 != 0x77) goto LAB_00601822;
    uVar6 = 2;
  }
  bVar6 = mode_string[1];
  while ((bVar6 != 0 && (bVar2))) {
    bVar6 = ((byte *)mode_string)[1];
    if (bVar6 < 99) {
      if (0x2a < bVar6) {
        if (bVar6 < 0x2c) {
          if (bVar3) {
            bVar2 = false;
          }
          else {
            uVar6 = uVar6 | 3;
            bVar3 = true;
          }
        }
        else if (bVar6 == 0x62) {
          if (bVar4) {
            bVar2 = false;
          }
          else {
            bVar4 = true;
            uVar6 = uVar6 | 0x40;
          }
        }
      }
    }
    else if (bVar6 < 100) {
      if (bVar5) {
        bVar2 = false;
      }
      else {
        bVar5 = true;
        *output_flags = *output_flags | 1;
      }
    }
    else if (0x6d < bVar6) {
      if (bVar6 < 0x6f) {
        if (bVar5) {
          bVar2 = false;
        }
        else {
          bVar5 = true;
          *output_flags = *output_flags & 0xfe;
        }
      }
      else if (bVar6 == 0x74) {
        if (bVar4) {
          bVar2 = false;
        }
        else {
          bVar4 = true;
        }
      }
    }
    bVar6 = ((byte *)mode_string)[2];
    mode_string = (char *)((byte *)mode_string + 1);
  }
  if ((!bVar4) && (INT_00684ed0 == 0x200)) {
    uVar6 = uVar6 | 0x40;
  }
  return uVar6;
}
