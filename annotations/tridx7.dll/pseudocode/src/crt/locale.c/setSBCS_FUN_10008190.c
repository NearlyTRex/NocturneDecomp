// Name: crt_locale.c_setSBCS_FUN_10008190
// Address: 10008190
// Address Range: [[10008190, 100081bb]]
// Convention: __cdecl
// Signature: void __cdecl crt_locale_c_setSBCS_FUN_10008190(void)

#include "nocturne.h"

void __cdecl setSBCS(void)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = &DAT_10016dd8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(byte *)puVar2 = 0;
  DAT_10016ee8 = 0;
  DAT_10016edc = 0;
  DAT_10016ee0 = 0;
  DAT_10016eec = 0;
  DAT_10016ef0 = 0;
  return;
}
