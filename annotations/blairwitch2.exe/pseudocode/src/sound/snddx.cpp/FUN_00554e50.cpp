// Name: sound_snddx.cpp_FUN_00554e50
// Address: 00554e50
// Address Range: [[00554e50, 00554f7e]]
// Convention: unknown
// Signature: bool sound_snddx_cpp_FUN_00554e50(int param_1)

#include "nocturne.h"

bool sound_snddx_cpp_FUN_00554e50(int param_1)

{
  int *piVar1;
  uint error_code;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  int unaff_retaddr;
  int *apiStack_1a4 [101];
  
  param_1 = param_1 * 0x24;
  piVar4 = (int *)(param_1 + 0x264ac10);
  apiStack_1a4[0] = (int *)*piVar4;
  bVar5 = true;
  if (apiStack_1a4[0] != (int *)0x0) {
    error_code = (**(code **)(*apiStack_1a4[0] + 0x48))();
    if (error_code != 0) {
      pcVar3 = sound_snddx_cpp_FUN_00554ad0(error_code);
      FUN_005b7790
                (apiStack_1a4,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer"
                 ,pcVar3);
      sound_sndmain_cpp_FUN_005549c0(apiStack_1a4);
    }
    bVar5 = error_code == 0;
    piVar1 = *(int **)(param_1 + 0x264ac14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(param_1 + 0x264ac14) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x264ac18) * 0x18;
    if (*(int *)(param_1 + 0x264ac20) != 0) {
      *(uint *)(*(int *)(param_1 + 0x264ac20) * 0x24 + 0x264ac1c) =
           *(uint *)(param_1 + 0x264ac1c);
    }
    if (unaff_retaddr == *(int *)(iVar2 + 0x264a5f8)) {
      *(uint *)(iVar2 + 0x264a5f8) = *(uint *)(param_1 + 0x264ac20);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x264ac1c) * 0x24 + 0x264ac20) =
           *(uint *)(param_1 + 0x264ac20);
    }
    piVar1 = (int *)*piVar4;
    if ((piVar1 != *(int **)(iVar2 + 0x264a5f4)) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
  }
  *piVar4 = 0;
  *(uint *)(param_1 + 0x264ac20) = 0;
  *(uint *)(param_1 + 0x264ac1c) = 0;
  *(uint *)(param_1 + 0x264ac18) = 0;
  return bVar5;
}
