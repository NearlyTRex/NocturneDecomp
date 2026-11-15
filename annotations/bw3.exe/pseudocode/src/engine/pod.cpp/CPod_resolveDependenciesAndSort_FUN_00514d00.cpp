// Name: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_00514d00
// Address: 00514d00
// Address Range: [[00514d00, 00515149]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_00514d00(CPod *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_00514d00(CPod *this_ptr)

{
  CPod *pCVar1;
  CPodFile *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CPodDependencyRecord *pCVar6;
  char *pcVar7;
  byte bVar8;
  int iStack_ab0;
  CPodDependencyRecord CStack_470;
  char acStack_368 [260];
  int iStack_264;
  CPodDependencyRecord CStack_260;
  char acStack_158 [256];
  int iStack_58;
  CPod *pCStack_50;
  CPod *pCStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  CPod *pCStack_3c;
  CPodFile **ppCStack_38;
  int iStack_34;
  int iStack_30;
  CPodFile *pCStack_2c;
  int iStack_28;
  CPodFile *pCStack_24;
  CPodFile **ppCStack_20;
  int iStack_1c;
  CPodFile *pCStack_18;
  int iStack_14;
  
  bVar8 = 0;
  do {
    iStack_28 = 0;
    iStack_44 = 0;
    if (0 < this_ptr->pod_file_count) {
      pCStack_3c = this_ptr;
      do {
        pCStack_18 = pCStack_3c->pod_files[0];
        iStack_40 = 0;
        for (iVar5 = 0; iVar5 < pCStack_18->dependency_count; iVar5 = iVar5 + 1) {
          engine_pod_cpp_CPodFile_getDependencyRecord_FUN_00514110(pCStack_18,iVar5,&CStack_260);
          pCVar6 = &CStack_260;
          pcVar7 = acStack_368;
          for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(uint *)pcVar7 = *(uint *)pCVar6->filename;
            pCVar6 = (CPodDependencyRecord *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
            pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
          }
          if ((iStack_264 != 0) &&
             (iVar4 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00515150(this_ptr,acStack_368),
             iVar4 < 0)) goto LAB_00514d6e;
        }
        if (iStack_40 == 0) {
          iStack_28 = iStack_28 + 1;
          pCStack_3c = (CPod *)pCStack_3c->pod_files;
        }
        else {
LAB_00514d6e:
          engine_pod_cpp_CPod_dismountPod_FUN_005151f0(this_ptr,iStack_28);
          iStack_44 = 1;
        }
      } while (iStack_28 < this_ptr->pod_file_count);
    }
  } while (iStack_44 != 0);
  iVar5 = this_ptr->pod_file_count;
  while (iVar5 = iVar5 + -1, 0 < iVar5) {
    iVar4 = 0;
    pCVar1 = this_ptr;
    if (0 < iVar5) {
      do {
        pCVar2 = pCVar1->pod_files[1];
        if (pCVar2->mount_priority < pCVar1->pod_files[0]->mount_priority) {
          pCVar1->pod_files[1] = pCVar1->pod_files[0];
          pCVar1->pod_files[0] = pCVar2;
        }
        iVar4 = iVar4 + 1;
        pCVar1 = (CPod *)pCVar1->pod_files;
      } while (iVar4 < iVar5);
    }
  }
  iStack_48 = 0;
  pCStack_24 = (CPodFile *)0x0;
  if (0 < this_ptr->pod_file_count) {
    pCStack_4c = this_ptr;
    do {
      iStack_30 = 0;
      pCStack_2c = pCStack_4c->pod_files[0];
      iVar5 = (int)pCStack_24 << 3;
      while (iStack_30 < pCStack_2c->dependency_count) {
        engine_pod_cpp_CPodFile_getDependencyRecord_FUN_00514110(pCStack_2c,iStack_30,&CStack_470);
        pCVar6 = &CStack_470;
        pcVar7 = acStack_158;
        for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(uint *)pcVar7 = *(uint *)pCVar6->filename;
          pCVar6 = (CPodDependencyRecord *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
          pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
        }
        if ((iStack_58 == 0) ||
           (iVar4 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00515150(this_ptr,acStack_158),
           iVar4 < 0)) {
          iStack_30 = iStack_30 + 1;
        }
        else {
          if (199 < iStack_1c) {
            _DAT_01d71de0 = "..\\engine\\pod.cpp";
            _DAT_01d71de4 = 0x633;
            iStack_ab0 = 0x515015;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Too many POD dependency ordering rules");
          }
          if ((int)pCStack_50 < 0) {
            *(CPodFile **)((int)&iStack_ab0 + iVar5) = pCStack_24;
            pCVar2 = this_ptr->pod_files[iVar4];
          }
          else {
            *(CPodFile **)((int)&iStack_ab0 + iVar5) = this_ptr->pod_files[iVar4];
            pCVar2 = pCStack_24;
          }
          *(CPodFile **)(&stack0xfffff55c + iVar5) = pCVar2;
          iStack_1c = iStack_1c + 1;
          iVar5 = iVar5 + 8;
          iStack_28 = iStack_28 + 1;
        }
      }
      iStack_48 = iStack_48 + 1;
      pCStack_4c = (CPod *)pCStack_4c->pod_files;
    } while (iStack_48 < this_ptr->pod_file_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->pod_file_count) {
    pCStack_50 = this_ptr;
    do {
      iStack_34 = iVar5;
      if (iVar5 < this_ptr->pod_file_count) {
        ppCStack_38 = this_ptr->pod_files + iVar5 + -1;
        do {
          iStack_14 = 0;
          if (0 < (int)pCStack_24) {
            ppCStack_20 = ppCStack_38;
            iVar4 = 0;
            iStack_1c = (int)pCStack_24 * 8;
            do {
              if (*(CPodFile **)(&stack0xfffff554 + iVar4) == ppCStack_38[1]) {
                uVar3 = (uint)*(CPodFile **)(&stack0xfffff554 + iVar4) ^ (uint)ppCStack_38[1];
                pCVar1 = this_ptr;
                if (0 < iVar5) {
                  do {
                    if (pCVar1->pod_files[0] == *(CPodFile **)((int)&iStack_ab0 + iVar4)) break;
                    uVar3 = uVar3 + 1;
                    pCVar1 = (CPod *)pCVar1->pod_files;
                  } while ((int)uVar3 < iVar5);
                }
                if (iVar5 <= (int)uVar3) break;
              }
              iVar4 = iVar4 + 8;
              iStack_14 = iStack_14 + 1;
            } while (iVar4 < (int)pCStack_24 * 8);
          }
          if ((int)pCStack_24 <= iStack_14) break;
          iStack_34 = iStack_34 + 1;
          ppCStack_38 = ppCStack_38 + 1;
        } while (iStack_34 < this_ptr->pod_file_count);
      }
      if (this_ptr->pod_file_count <= iStack_34) {
        _DAT_01d71de0 = "..\\engine\\pod.cpp";
        _DAT_01d71de4 = 0x685;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Circular POD mount order dependency detected.");
      }
      pCVar2 = ((CPod *)(this_ptr->pod_files + iStack_34 + -1))->pod_files[0];
      pCVar1 = (CPod *)(this_ptr->pod_files + iStack_34 + -1);
      for (; iVar5 < iStack_34; iStack_34 = iStack_34 + -1) {
        pCVar1->pod_files[0] = (CPodFile *)pCVar1->pod_file_count;
        pCVar1 = (CPod *)((int)(pCVar1 + 0xffffffff) + 0x194);
      }
      pCStack_50->pod_files[0] = pCVar2;
      iVar5 = iVar5 + 1;
      pCStack_50 = (CPod *)pCStack_50->pod_files;
    } while (iVar5 < this_ptr->pod_file_count);
  }
  return;
}
