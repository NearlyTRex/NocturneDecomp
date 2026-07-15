// Name: crt_locale.c_getSystemCP_FUN_100080e0
// Address: 100080e0
// Address Range: [[100080e0, 1000812c]]
// Convention: __cdecl
// Signature: uint __cdecl crt_locale_c_getSystemCP_FUN_100080e0(void)

#include "nocturne.h"

uint __cdecl getSystemCP(void)

{
  uint uVar1;
  bool bVar2;
  uint in_stack_00000004;
  
  if (in_stack_00000004 == 0xfffffffe) {
    DAT_10016ef4 = 1;
                    /* WARNING: Could not recover jumptable at 0x100080fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = GetOEMCP();
    return uVar1;
  }
  if (in_stack_00000004 == 0xfffffffd) {
    DAT_10016ef4 = 1;
                    /* WARNING: Could not recover jumptable at 0x10008112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = GetACP();
    return uVar1;
  }
  bVar2 = in_stack_00000004 == 0xfffffffc;
  if (bVar2) {
    in_stack_00000004 = DAT_10017770;
  }
  DAT_10016ef4 = (uint)bVar2;
  return in_stack_00000004;
}
