// Name: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
// Address: 005513d0
// Address Range: [[005513d0, 00551819]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod *this_ptr)

{
  CPodFile *pCVar3;
  bool bVar4;
  CPod *pCVar1;
  CPodFile *pCVar2;
  uint uVar3;
  int iVar6;
  int iVar4;
  CPod *pCVar7;
  int iVar5;
  int iVar8;
  CPodDependencyRecord *pCVar6;
  CPodDependencyRecord *pCVar9;
  char *pcVar7;
  char *pcVar10;
  byte bVar8;
  int local_ab0 [400];
  CPodDependencyRecord local_470;
  char local_368 [260];
  int local_264;
  CPodDependencyRecord local_260;
  char local_158 [256];
  int local_58;
  CPod *local_50;
  CPod *local_4c;
  int local_48;
  int local_44;
  int local_40;
  CPod *local_3c;
  CPodFile **local_38;
  int local_34;
  int local_30;
  CPodFile *local_2c;
  int local_28;
  int local_24;
  CPodFile **local_20;
  int local_1c;
  CPodFile *local_18;
  int local_14;
  
  bVar8 = 0;
  do {
    local_28 = 0;
    bVar4 = false;
    if (0 < this_ptr->pod_file_count) {
      local_3c = this_ptr;
      do {
        pCVar3 = local_3c->pod_files[0];
        for (iVar5 = 0; iVar5 < pCVar3->dependency_count; iVar5 = iVar5 + 1) {
          engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0(pCVar3,iVar5,&local_260);
          pCVar9 = &local_260;
          pcVar10 = local_368;
          for (iVar8 = 0x42; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(uint *)pcVar10 = *(uint *)pCVar9->filename;
            pCVar9 = (CPodDependencyRecord *)((int)pCVar9 + (uint)bVar8 * -8 + 4);
            pcVar10 = pcVar10 + (uint)bVar8 * -8 + 4;
          }
          if ((local_264 != 0) &&
             (iVar8 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(this_ptr,local_368),
             iVar8 < 0)) {
            engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,local_28);
            bVar4 = true;
            goto LAB_0055145b;
          }
        }
        local_28 = local_28 + 1;
        local_3c = (CPod *)local_3c->pod_files;
LAB_0055145b:
      } while (local_28 < this_ptr->pod_file_count);
    }
  } while (bVar4);
  iVar8 = this_ptr->pod_file_count;
  while (iVar8 = iVar8 + -1, 0 < iVar8) {
    iVar4 = 0;
    pCVar1 = this_ptr;
    if (0 < iVar8) {
      do {
        pCVar3 = pCVar1->pod_files[1];
        if (pCVar3->mount_priority < pCVar1->pod_files[0]->mount_priority) {
          pCVar1->pod_files[1] = pCVar1->pod_files[0];
          pCVar1->pod_files[0] = pCVar3;
        }
        iVar4 = iVar4 + 1;
        pCVar1 = (CPod *)pCVar1->pod_files;
      } while (iVar4 < iVar8);
    }
  }
  local_48 = 0;
  local_24 = 0;
  if (0 < this_ptr->pod_file_count) {
    local_4c = this_ptr;
    do {
      local_30 = 0;
      pCVar3 = local_4c->pod_files[0];
      iVar8 = local_24 << 3;
      while (local_30 < pCVar3->dependency_count) {
        engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0(pCVar3,local_30,&local_470);
        pCVar6 = &local_470;
        pcVar7 = local_158;
        for (iVar6 = 0x42; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
          pCVar6 = (CPodDependencyRecord *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
          *(uint *)pcVar7 = *(uint *)pCVar6->filename;
          pCVar6 = pCVar6;
          pcVar7 = pcVar7;
        }
        if ((local_58 == 0) ||
           (iVar6 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(this_ptr,local_158),
           iVar6 < 0)) {
          local_30 = local_30 + 1;
        }
        else {
          if (199 < local_24) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x572;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many POD dependency ordering rules");
          }
          if (local_58 < 0) {
            *(CPodFile **)((int)local_ab0 + iVar8) = pCVar3;
            pCVar2 = this_ptr->pod_files[iVar6];
          }
          else {
            *(CPodFile **)((int)local_ab0 + iVar8) = this_ptr->pod_files[iVar6];
            pCVar2 = pCVar3;
          }
          *(CPodFile **)((int)local_ab0 + iVar8 + 4) = pCVar2;
          local_24 = local_24 + 1;
          iVar8 = iVar8 + 8;
          local_30 = local_30 + 1;
        }
      }
      local_4c = (CPod *)local_4c->pod_files;
      local_48 = local_48 + 1;
    } while (local_48 < this_ptr->pod_file_count);
  }
  iVar8 = 0;
  if (0 < this_ptr->pod_file_count) {
    local_50 = this_ptr;
    do {
      local_34 = iVar8;
      if (iVar8 < this_ptr->pod_file_count) {
        local_38 = this_ptr->pod_files + iVar8 + -1;
        do {
          local_14 = 0;
          if (0 < local_24) {
            iVar6 = 0;
            do {
              pCVar3 = *(CPodFile **)((int)local_ab0 + iVar6 + 4);
              if (pCVar3 == local_38[1]) {
                uVar3 = (uint)pCVar3 ^ (uint)local_38[1];
                pCVar7 = this_ptr;
                if (0 < iVar8) {
                  do {
                    if (pCVar7->pod_files[0] == *(CPodFile **)((int)local_ab0 + iVar6)) break;
                    uVar3 = uVar3 + 1;
                    pCVar7 = (CPod *)pCVar7->pod_files;
                  } while ((int)uVar3 < iVar8);
                }
                if (iVar8 <= (int)uVar3) break;
              }
              local_14 = local_14 + 1;
              iVar6 = iVar6 + 8;
            } while (iVar6 < local_24 * 8);
          }
          if (local_24 <= local_14) break;
          local_38 = local_38 + 1;
          local_34 = local_34 + 1;
        } while (local_34 < this_ptr->pod_file_count);
      }
      if (this_ptr->pod_file_count <= local_34) {
        g_CurrentFilename = "..\\engine\\pod.cpp";
        g_CurrentLineNumber = 0x5c4;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Circular POD mount order dependency detected.");
      }
      pCVar3 = ((CPod *)(this_ptr->pod_files + local_34 + -1))->pod_files[0];
      pCVar7 = (CPod *)(this_ptr->pod_files + local_34 + -1);
      for (; iVar8 < local_34; local_34 = local_34 + -1) {
        pCVar7->pod_files[0] = (CPodFile *)pCVar7->pod_file_count;
        pCVar7 = (CPod *)((int)(pCVar7 + 0xffffffff) + 0x194);
      }
      local_50->pod_files[0] = pCVar3;
      local_50 = (CPod *)local_50->pod_files;
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_ptr->pod_file_count);
  }
  return;
}
