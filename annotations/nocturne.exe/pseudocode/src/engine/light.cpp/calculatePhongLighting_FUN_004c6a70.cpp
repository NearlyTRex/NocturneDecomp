// Name: engine_light.cpp_calculatePhongLighting_FUN_004c6a70
// Address: 004c6a70
// Address Range: [[004c6a70, 004c6cb0]]
// Convention: __cdecl
// Signature: int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004c6a70(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004c6a70(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int aiStackY_100c [1017];
  int local_24;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar3 = ((uint)((longlong)param_1 * (longlong)_DAT_01c039dc) >> 0x10 |
          (int)((ulonglong)((longlong)param_1 * (longlong)_DAT_01c039dc) >> 0x20) << 0x10) +
          ((uint)((longlong)param_2 * (longlong)_DAT_01c039e0) >> 0x10 |
          (int)((ulonglong)((longlong)param_2 * (longlong)_DAT_01c039e0) >> 0x20) << 0x10) +
          ((uint)((longlong)param_3 * (longlong)_DAT_01c039e4) >> 0x10 |
          (int)((ulonglong)((longlong)param_3 * (longlong)_DAT_01c039e4) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar3 != -0xffff && 0xfffe < iVar4) {
    iVar4 = 0xffff;
  }
  lVar1 = (longlong)iVar4 * (longlong)(0xffff - DAT_005bacd0);
  uVar5 = DAT_005bacd0 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  if (0x00000001 == 0) {
    uVar5 = (uint)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x10 |
            (int)((ulonglong)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x20) << 0x10;
    goto LAB_004c6c38;
  }
  iVar4 = ((uint)((longlong)param_1 * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)param_1 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
          _DAT_01c039dc;
  local_18 = ((uint)((longlong)param_2 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_2 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             _DAT_01c039e0;
  local_14 = ((uint)((longlong)param_3 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_3 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             _DAT_01c039e4;
  if (((_DAT_01cc3670 != _DAT_01c039b8) || (_DAT_01cc3674 != _DAT_01c039bc)) ||
     (_DAT_01cc3678 != _DAT_01c039c0)) {
    _DAT_01cc3670 = _DAT_01c039b8;
    _DAT_01cc3674 = _DAT_01c039bc;
    _DAT_01cc3678 = _DAT_01c039c0;
    engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(&DAT_01cc3670);
    _DAT_01cc367c = local_24;
    *(uint *)(&DAT_01cc3680 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
    *(uint *)(&DAT_01cc3684 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  }
  lVar1 = (longlong)iVar4 * (longlong)_DAT_01cc367c;
  iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
          ((uint)((longlong)local_18 * (longlong)_DAT_01cc3680) >> 0x10 |
          (int)((ulonglong)((longlong)local_18 * (longlong)_DAT_01cc3680) >> 0x20) << 0x10) +
          ((uint)((longlong)local_14 * (longlong)_DAT_01cc3684) >> 0x10 |
          (int)((ulonglong)((longlong)local_14 * (longlong)_DAT_01cc3684) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) goto LAB_004c6c38;
  if (iVar3 == -0xffff || iVar4 < 0xffff) {
    if (iVar3 != -48000 && 47999 < iVar4) goto LAB_004c6bed;
    uVar2 = 0;
  }
  else {
    iVar4 = 0xffff;
LAB_004c6bed:
    uVar2 = (uint)((longlong)iVar4 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  uVar5 = ((uint)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x10 |
          (int)((ulonglong)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x20) << 0x10) +
          ((uint)((longlong)0x00010000 * (longlong)(int)uVar2) >> 0x10 |
          (int)((ulonglong)((longlong)0x00010000 * (longlong)(int)uVar2) >> 0x20) << 0x10);
LAB_004c6c38:
  return ((int)((uVar5 + ((int)uVar5 >> 0x1f) * -0x10) - (uint)(((int)uVar5 >> 0x1f) << 3 < 0)) >> 4
         ) + 0x100;
}
