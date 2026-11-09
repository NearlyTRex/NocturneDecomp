// Name: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_00514d00
// Address: 00514d00
// Address Range: [[00514d00, 00515149]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_00514d00(CPod *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_00514d00(CPod *this_ptr)

{
  int iVar1;
  uint uVar2;
  CPod *pCVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  int aiStack_ab0 [398];
  uint auStack_478 [66];
  char acStack_370 [8];
  uint auStack_368 [63];
  int iStack_26c;
  uint auStack_268 [66];
  char acStack_160 [8];
  uint auStack_158 [62];
  int iStack_60;
  int iStack_58;
  CPod *pCStack_50;
  CPod *pCStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  CPod *pCStack_3c;
  byte *puStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  byte *puStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar9 = 0;
  do {
    iStack_28 = 0;
    iStack_44 = 0;
    if (0 < *(int *)this_ptr) {
      pCStack_3c = this_ptr;
      do {
        iStack_18 = *(int *)&pCStack_3c->field_0x4;
        iStack_40 = 0;
        for (iVar6 = 0; iVar6 < *(int *)(iStack_18 + 0x424); iVar6 = iVar6 + 1) {
          engine_pod_cpp_FUN_00514110(iStack_18,iVar6);
          puVar7 = auStack_268;
          puVar8 = auStack_368;
          for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          if ((iStack_26c != 0) &&
             (iVar5 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00515150(this_ptr,acStack_370),
             iVar5 < 0)) goto LAB_00514d6e;
        }
        if (iStack_40 == 0) {
          iStack_28 = iStack_28 + 1;
          pCStack_3c = (CPod *)&pCStack_3c->field_0x4;
        }
        else {
LAB_00514d6e:
          engine_pod_cpp_CPod_dismountPod_FUN_005151f0(this_ptr,iStack_28);
          iStack_44 = 1;
        }
      } while (iStack_28 < *(int *)this_ptr);
    }
  } while (iStack_44 != 0);
  iVar6 = *(int *)this_ptr;
  while (iVar6 = iVar6 + -1, 0 < iVar6) {
    iVar5 = 0;
    pCVar3 = this_ptr;
    if (0 < iVar6) {
      do {
        iVar1 = *(int *)&pCVar3->field_0x8;
        if (*(int *)(iVar1 + 0x408) < *(int *)(*(int *)&pCVar3->field_0x4 + 0x408)) {
          *(int *)&pCVar3->field_0x8 = *(int *)&pCVar3->field_0x4;
          *(int *)&pCVar3->field_0x4 = iVar1;
        }
        iVar5 = iVar5 + 1;
        pCVar3 = (CPod *)&pCVar3->field_0x4;
      } while (iVar5 < iVar6);
    }
  }
  iStack_48 = 0;
  iStack_24 = 0;
  if (0 < *(int *)this_ptr) {
    pCStack_4c = this_ptr;
    do {
      iStack_30 = 0;
      iStack_2c = *(int *)&pCStack_4c->field_0x4;
      iVar6 = iStack_24 << 3;
      while (iStack_30 < *(int *)(iStack_2c + 0x424)) {
        engine_pod_cpp_FUN_00514110(iStack_2c,iStack_30);
        puVar7 = auStack_478;
        puVar8 = auStack_158;
        for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        if ((iStack_60 == 0) ||
           (iVar5 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00515150(this_ptr,acStack_160),
           iVar5 < 0)) {
          iStack_30 = iStack_30 + 1;
        }
        else {
          if (199 < iStack_24) {
            _DAT_01d71de0 = "..\\engine\\pod.cpp";
            _DAT_01d71de4 = 0x633;
            core_main_c_FUN_004e4330("Too many POD dependency ordering rules");
          }
          if (iStack_58 < 0) {
            *(int *)((int)aiStack_ab0 + iVar6) = iStack_2c;
            iVar5 = *(int *)(&this_ptr->field_0x4 + iVar5 * 4);
          }
          else {
            *(uint *)((int)aiStack_ab0 + iVar6) =
                 *(uint *)(&this_ptr->field_0x4 + iVar5 * 4);
            iVar5 = iStack_2c;
          }
          *(int *)((int)aiStack_ab0 + iVar6 + 4) = iVar5;
          iVar6 = iVar6 + 8;
          iStack_24 = iStack_24 + 1;
          iStack_30 = iStack_30 + 1;
        }
      }
      iStack_48 = iStack_48 + 1;
      pCStack_4c = (CPod *)&pCStack_4c->field_0x4;
    } while (iStack_48 < *(int *)this_ptr);
  }
  iVar6 = 0;
  if (0 < *(int *)this_ptr) {
    pCStack_50 = this_ptr;
    do {
      iStack_34 = iVar6;
      if (iVar6 < *(int *)this_ptr) {
        puStack_38 = &this_ptr->field_0x0 + iVar6 * 4;
        do {
          iStack_14 = 0;
          if (0 < iStack_24) {
            puStack_20 = puStack_38;
            iVar5 = 0;
            iStack_1c = iStack_24 * 8;
            do {
              uVar4 = *(uint *)((int)aiStack_ab0 + iVar5 + 4);
              if (uVar4 == *(uint *)(puStack_38 + 4)) {
                uVar4 = uVar4 ^ *(uint *)(puStack_38 + 4);
                pCVar3 = this_ptr;
                if (0 < iVar6) {
                  do {
                    if (*(int *)&pCVar3->field_0x4 == *(int *)((int)aiStack_ab0 + iVar5)) break;
                    uVar4 = uVar4 + 1;
                    pCVar3 = (CPod *)&pCVar3->field_0x4;
                  } while ((int)uVar4 < iVar6);
                }
                if (iVar6 <= (int)uVar4) break;
              }
              iVar5 = iVar5 + 8;
              iStack_14 = iStack_14 + 1;
            } while (iVar5 < iStack_24 * 8);
          }
          if (iStack_24 <= iStack_14) break;
          iStack_34 = iStack_34 + 1;
          puStack_38 = puStack_38 + 4;
        } while (iStack_34 < *(int *)this_ptr);
      }
      if (*(int *)this_ptr <= iStack_34) {
        _DAT_01d71de0 = "..\\engine\\pod.cpp";
        _DAT_01d71de4 = 0x685;
        core_main_c_FUN_004e4330("Circular POD mount order dependency detected.");
      }
      uVar2 = *(uint *)((int)(&this_ptr->field_0x0 + iStack_34 * 4) + 4);
      puVar7 = (uint *)(&this_ptr->field_0x0 + iStack_34 * 4);
      for (; iVar6 < iStack_34; iStack_34 = iStack_34 + -1) {
        puVar7[1] = *puVar7;
        puVar7 = puVar7 + -1;
      }
      *(uint *)&pCStack_50->field_0x4 = uVar2;
      iVar6 = iVar6 + 1;
      pCStack_50 = (CPod *)&pCStack_50->field_0x4;
    } while (iVar6 < *(int *)this_ptr);
  }
  return;
}
