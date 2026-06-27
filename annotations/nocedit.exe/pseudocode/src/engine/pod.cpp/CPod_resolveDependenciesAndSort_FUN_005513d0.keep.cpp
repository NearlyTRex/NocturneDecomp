// Name: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
// Address: 005513d0
// MANUAL RECONSTRUCTION
// Address Range: [[005513d0, 00551819]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod *this_ptr)

{
  CPodFile *pCVar3;
  bool bVar4;
  CPodFile *pCVar2;
  uint uVar3;
  int iVar6;
  int iVar4;
  int iVar5;
  int iVar8;
  CPodFile *local_ab0 [400];
  CPodDependencyRecord local_470;
  CPodDependencyRecord local_260;
  CPodFile **local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_48;
  int local_14;

  do {
    local_28 = 0;
    bVar4 = false;
    if (0 < this_ptr->pod_file_count) {
      do {
        pCVar3 = this_ptr->pod_files[local_28];
        for (iVar5 = 0; iVar5 < pCVar3->dependency_count; iVar5 = iVar5 + 1) {
          engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0(pCVar3,iVar5,&local_260);
          if ((local_260.is_required != 0) &&
             (iVar8 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820
                                (this_ptr,local_260.filename), iVar8 < 0)) {
            engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,local_28);
            bVar4 = true;
            goto LAB_0055145b;
          }
        }
        local_28 = local_28 + 1;
LAB_0055145b:
      } while (local_28 < this_ptr->pod_file_count);
    }
  } while (bVar4);
  iVar8 = this_ptr->pod_file_count;
  while (iVar8 = iVar8 + -1, 0 < iVar8) {
    iVar4 = 0;
    if (0 < iVar8) {
      do {
        pCVar3 = this_ptr->pod_files[iVar4 + 1];
        if (pCVar3->mount_priority < this_ptr->pod_files[iVar4]->mount_priority) {
          this_ptr->pod_files[iVar4 + 1] = this_ptr->pod_files[iVar4];
          this_ptr->pod_files[iVar4] = pCVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar8);
    }
  }
  local_48 = 0;
  local_24 = 0;
  if (0 < this_ptr->pod_file_count) {
    do {
      local_30 = 0;
      pCVar3 = this_ptr->pod_files[local_48];
      while (local_30 < pCVar3->dependency_count) {
        engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0(pCVar3,local_30,&local_470);
        if ((local_470.is_required == 0) ||
           (iVar6 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820
                              (this_ptr,local_470.filename), iVar6 < 0)) {
          local_30 = local_30 + 1;
        }
        else {
          if (199 < local_24) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x572;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many POD dependency ordering rules");
          }
          if (local_470.is_required < 0) {
            local_ab0[local_24 * 2] = pCVar3;
            pCVar2 = this_ptr->pod_files[iVar6];
          }
          else {
            local_ab0[local_24 * 2] = this_ptr->pod_files[iVar6];
            pCVar2 = pCVar3;
          }
          local_ab0[local_24 * 2 + 1] = pCVar2;
          local_24 = local_24 + 1;
          local_30 = local_30 + 1;
        }
      }
      local_48 = local_48 + 1;
    } while (local_48 < this_ptr->pod_file_count);
  }
  iVar8 = 0;
  if (0 < this_ptr->pod_file_count) {
    do {
      local_34 = iVar8;
      if (iVar8 < this_ptr->pod_file_count) {
        local_38 = this_ptr->pod_files + iVar8 + -1;
        do {
          local_14 = 0;
          if (0 < local_24) {
            do {
              pCVar3 = local_ab0[local_14 * 2 + 1];
              if (pCVar3 == local_38[1]) {
                uVar3 = 0;
                if (0 < iVar8) {
                  do {
                    if (this_ptr->pod_files[uVar3] == local_ab0[local_14 * 2]) break;
                    uVar3 = uVar3 + 1;
                  } while ((int)uVar3 < iVar8);
                }
                if (iVar8 <= (int)uVar3) break;
              }
              local_14 = local_14 + 1;
            } while (local_14 < local_24);
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
      pCVar3 = this_ptr->pod_files[local_34];
      for (; iVar8 < local_34; local_34 = local_34 + -1) {
        this_ptr->pod_files[local_34] = this_ptr->pod_files[local_34 + -1];
      }
      this_ptr->pod_files[iVar8] = pCVar3;
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_ptr->pod_file_count);
  }
  return;
}
