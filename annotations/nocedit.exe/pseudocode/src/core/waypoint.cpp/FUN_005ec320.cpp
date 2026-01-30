// Name: core_waypoint.cpp_FUN_005ec320
// Address: 005ec320
// Address Range: [[005ec320, 005ec4c1]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_FUN_005ec320(void)

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_FUN_005ec320(uint param_1, uint
   param_2) */

int __cdecl core_waypoint_cpp_FUN_005ec320(void)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  undefined3 extraout_var_00;
  int iVar6;
  SIZE_T n;
  SIZE_T SVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000008;
  float local_18;
  int local_c;
  
  if (in_stack_00000008 != 0) {
    bVar3 = core_waypoint_cpp_FUN_005ebd40();
    if (CONCAT31(extraout_var,bVar3) != 0) {
      return in_stack_00000008;
    }
    if (0 < *(int *)(in_stack_00000008 + 0x370)) {
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < *(int *)(g_CDemonSetPtr->unk4 + 0x5dc4); iVar8 = iVar8 + 1) {
        iVar9 = iVar4 + 0x5dc8;
        iVar4 = iVar4 + 4;
        *(uint *)(*(int *)(g_CDemonSetPtr->unk4 + iVar9) + 0x554) = 0x7149f2ca;
      }
      iVar4 = 1;
      DAT_03f939a4 = in_stack_00000008;
      *(uint *)(in_stack_00000008 + 0x554) = 0;
      do {
        iVar8 = DAT_03f939a4;
        iVar4 = iVar4 + -1;
        n = iVar4 * 4;
        memmove(&DAT_03f939a4,&DAT_03f939a8,n);
        local_c = 0;
        iVar9 = iVar8;
        if (0 < *(int *)(iVar8 + 0x370)) {
          do {
            fVar2 = *(float *)(iVar8 + 0x554) + *(float *)(iVar9 + 0x378);
            iVar1 = *(int *)(iVar9 + 0x374);
            SVar7 = n;
            if (fVar2 < *(float *)(iVar1 + 0x554)) {
              iVar6 = 0;
              *(float *)(iVar1 + 0x554) = fVar2;
              if (0 < iVar4) {
                iVar5 = 0;
                do {
                  if (iVar1 == *(int *)((int)&DAT_03f939a4 + iVar5)) break;
                  iVar5 = iVar5 + 4;
                  iVar6 = iVar6 + 1;
                } while (iVar5 < iVar4 * 4);
              }
              if (iVar6 == iVar4) {
                SVar7 = n + 4;
                iVar4 = iVar4 + 1;
                *(int *)((int)&DAT_03f939a4 + n) = iVar1;
              }
            }
            local_c = local_c + 1;
            n = SVar7;
            iVar9 = iVar9 + 8;
          } while (local_c < *(int *)(iVar8 + 0x370));
        }
        if (iVar4 < 1) {
          iVar4 = 0;
          local_18 = 1e+29;
          iVar8 = 0;
          for (iVar9 = 0; iVar9 < *(int *)(g_CDemonSetPtr->unk4 + 0x5dc4); iVar9 = iVar9 + 1) {
            iVar1 = *(int *)(g_CDemonSetPtr->unk4 + iVar8 + 0x5dc8);
            if ((*(float *)(iVar1 + 0x554) < local_18) &&
               (bVar3 = core_waypoint_cpp_FUN_005ebd40(), CONCAT31(extraout_var_00,bVar3) != 0)) {
              local_18 = *(float *)(iVar1 + 0x554);
              iVar4 = iVar1;
            }
            iVar8 = iVar8 + 4;
          }
          return iVar4;
        }
      } while( true );
    }
  }
  return 0;
}
