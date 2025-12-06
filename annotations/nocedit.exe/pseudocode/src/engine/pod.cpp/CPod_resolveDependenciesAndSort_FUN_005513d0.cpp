// Name: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
// Address: 005513d0
// Address Range: [[005513d0, 00551819]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod *this_ptr)

{
  CPod *pCVar1;
  CPodFile *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  CPodDependencyRecord *in_stack_fffff550;
  uint auStack_46c [65];
  uint local_368;
  CPodDependencyRecord CStack_364;
  uint auStack_25c [65];
  uint local_158;
  CPodDependencyRecord CStack_154;
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
    local_44 = 0;
    if (0 < this_ptr->pod_file_count) {
      local_3c = this_ptr;
      do {
        local_18 = local_3c->pod_files[0];
        local_40 = 0;
        for (iVar5 = 0; iVar5 < local_18->dependency_count; iVar5 = iVar5 + 1) {
          engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0(local_18,iVar5,in_stack_fffff550)
          ;
          puVar6 = auStack_25c;
          puVar7 = &local_368;
          for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          if (CStack_364.unknown != (char  [4])0x0) {
            in_stack_fffff550 = &CStack_364;
            iVar4 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820
                              (this_ptr,in_stack_fffff550->filename);
            if (iVar4 < 0) goto LAB_0055143e;
          }
        }
        if (local_40 == 0) {
          local_28 = local_28 + 1;
          local_3c = (CPod *)local_3c->pod_files;
        }
        else {
LAB_0055143e:
          engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,local_28);
          local_40 = 1;
        }
      } while (local_28 < this_ptr->pod_file_count);
    }
  } while (local_44 != 0);
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
  local_48 = 0;
  local_24 = 0;
  if (0 < this_ptr->pod_file_count) {
    local_4c = this_ptr;
    do {
      local_30 = 0;
      local_2c = local_4c->pod_files[0];
      iVar5 = local_24 << 3;
      while (local_30 < local_2c->dependency_count) {
        engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0
                  (local_2c,local_30,in_stack_fffff550);
        puVar6 = auStack_46c;
        puVar7 = &local_158;
        for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        if (CStack_154.has_dependencies == 0) {
LAB_00551547:
          local_30 = local_30 + 1;
        }
        else {
          in_stack_fffff550 = &CStack_154;
          iVar4 = engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820
                            (this_ptr,in_stack_fffff550->filename);
          if (iVar4 < 0) goto LAB_00551547;
          if (199 < local_1c) {
            g_CurrentFilename = "..\\engine\\pod.cpp";
            g_CurrentLineNumber = 0x572;
            in_stack_fffff550 = (CPodDependencyRecord *)0x5516e5;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many POD dependency ordering rules");
          }
          if ((int)CStack_154.filename._252_4_ < 0) {
            *(CPodFile **)(&stack0xfffff550 + iVar5) = local_2c;
            pCVar2 = this_ptr->pod_files[iVar4];
          }
          else {
            *(CPodFile **)(&stack0xfffff550 + iVar5) = this_ptr->pod_files[iVar4];
            pCVar2 = local_2c;
          }
          *(CPodFile **)(&stack0xfffff554 + iVar5) = pCVar2;
          iVar5 = iVar5 + 8;
          local_24 = local_24 + 1;
          local_30 = local_30 + 1;
        }
      }
      local_48 = local_48 + 1;
      local_4c = (CPod *)local_4c->pod_files;
    } while (local_48 < this_ptr->pod_file_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->pod_file_count) {
    CStack_154.unknown = (char  [4])this_ptr;
    do {
      local_34 = iVar5;
      if (iVar5 < this_ptr->pod_file_count) {
        local_38 = this_ptr->pod_files + iVar5 + -1;
        do {
          local_14 = 0;
          if (0 < local_24) {
            local_20 = local_38;
            iVar4 = 0;
            local_1c = local_24 * 8;
            do {
              if (*(CPodFile **)(&stack0xfffff554 + iVar4) == local_38[1]) {
                uVar3 = (uint)*(CPodFile **)(&stack0xfffff554 + iVar4) ^ (uint)local_38[1];
                pCVar1 = this_ptr;
                if (0 < iVar5) {
                  do {
                    if (pCVar1->pod_files[0] == *(CPodFile **)(&stack0xfffff550 + iVar4)) break;
                    uVar3 = uVar3 + 1;
                    pCVar1 = (CPod *)pCVar1->pod_files;
                  } while ((int)uVar3 < iVar5);
                }
                if (iVar5 <= (int)uVar3) break;
              }
              iVar4 = iVar4 + 8;
              local_14 = local_14 + 1;
            } while (iVar4 < local_24 * 8);
          }
          if (local_24 <= local_14) break;
          local_34 = local_34 + 1;
          local_38 = local_38 + 1;
        } while (local_34 < this_ptr->pod_file_count);
      }
      if (this_ptr->pod_file_count <= local_34) {
        g_CurrentFilename = "..\\engine\\pod.cpp";
        g_CurrentLineNumber = 0x5c4;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Circular POD mount order dependency detected.");
      }
      pCVar2 = ((CPod *)(this_ptr->pod_files + local_34 + -1))->pod_files[0];
      pCVar1 = (CPod *)(this_ptr->pod_files + local_34 + -1);
      for (; iVar5 < local_34; local_34 = local_34 + -1) {
        pCVar1->pod_files[0] = (CPodFile *)pCVar1->pod_file_count;
        pCVar1 = (CPod *)((int)(pCVar1 + 0xffffffff) + 0x194);
      }
      *(CPodFile **)((int)CStack_154.unknown + 4) = pCVar2;
      iVar5 = iVar5 + 1;
      CStack_154.unknown = (char  [4])((int)CStack_154.unknown + 4);
    } while (iVar5 < this_ptr->pod_file_count);
  }
  return;
}
