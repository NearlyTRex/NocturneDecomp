// Name: core_waypoint.cpp_FUN_005ec320
// Address: 005ec320
// Address Range: [[005ec320, 005ec4c1]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ec320()

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_FUN_005ec320(uint param_1, uint
   param_2) */

int core_waypoint_cpp_FUN_005ec320(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SIZE_T n;
  SIZE_T SVar6;
  int iVar7;
  int in_stack_00000008;
  float local_14;
  int local_c;
  int iVar8;
  
  if (in_stack_00000008 != 0) {
    iVar3 = core_waypoint_cpp_FUN_005ebd40();
    if (iVar3 != 0) {
      return in_stack_00000008;
    }
    if (0 < *(int *)(in_stack_00000008 + 0x370)) {
      iVar3 = 0;
      for (iVar7 = 0; iVar7 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4); iVar7 = iVar7 + 1
          ) {
        iVar8 = iVar3 + 0x5dc8;
        iVar3 = iVar3 + 4;
        *(uint *)(*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar8) + 0x554) = 0x7149f2ca;
      }
      iVar3 = 1;
      DAT_03f939a4 = in_stack_00000008;
      *(uint *)(in_stack_00000008 + 0x554) = 0;
      do {
        iVar3 = iVar3 + -1;
        n = iVar3 * 4;
        crt_string_c_memmove_FUN_005fe5e0(&DAT_03f939a4,&DAT_03f939a8,n);
        iVar8 = 0;
        iVar7 = local_c;
        if (0 < *(int *)(local_c + 0x370)) {
          do {
            fVar2 = *(float *)(local_c + 0x554) + *(float *)(iVar7 + 0x378);
            iVar1 = *(int *)(iVar7 + 0x374);
            SVar6 = n;
            if (fVar2 < *(float *)(iVar1 + 0x554)) {
              iVar5 = 0;
              *(float *)(iVar1 + 0x554) = fVar2;
              if (0 < iVar3) {
                iVar4 = 0;
                do {
                  if (iVar1 == *(int *)((int)&DAT_03f939a4 + iVar4)) break;
                  iVar4 = iVar4 + 4;
                  iVar5 = iVar5 + 1;
                } while (iVar4 < iVar3 * 4);
              }
              if (iVar5 == iVar3) {
                SVar6 = n + 4;
                iVar3 = iVar3 + 1;
                *(int *)((int)&DAT_03f939a4 + n) = iVar1;
              }
            }
            iVar8 = iVar8 + 1;
            n = SVar6;
            iVar7 = iVar7 + 8;
          } while (iVar8 < *(int *)(local_c + 0x370));
        }
        if (iVar3 < 1) {
          iVar3 = 0;
          iVar7 = 0;
          for (iVar8 = 0; iVar8 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4);
              iVar8 = iVar8 + 1) {
            iVar1 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar7 + 0x5dc8);
            if ((*(float *)(iVar1 + 0x554) < local_14) &&
               (iVar5 = core_waypoint_cpp_FUN_005ebd40(), iVar5 != 0)) {
              iVar3 = iVar1;
            }
            iVar7 = iVar7 + 4;
          }
          return iVar3;
        }
      } while( true );
    }
  }
  return 0;
}
