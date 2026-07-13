// Name: getSystemCP
// Address: 100080e0
// Address Range: [[100080e0, 1000812c]]
// Convention: __cdecl
// Signature: int __cdecl getSystemCP(int param_1)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl getSystemCP(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10016ef4 = 1;
                    /* WARNING: Could not recover jumptable at 0x100080fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10016ef4 = 1;
                    /* WARNING: Could not recover jumptable at 0x10008112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10017770;
  }
  DAT_10016ef4 = (uint)bVar2;
  return param_1;
}
