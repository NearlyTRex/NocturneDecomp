// Name: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
// Address: 0047aa30
// Address Range: [[0047aa30, 0047ad95]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel *this_ptr)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  void *unaff_EBP;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int *unaff_EDI;
  int iVar10;
  CKeyFramedModel *pCVar11;
  byte bVar12;
  CKeyFramedModel *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  CKeyFramedModel *in_stack_0000001c;
  int *local_10;
  
  bVar12 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Removing unused vertices...");
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  if ((0 < *(int *)(in_stack_0000000c + 0x104)) && (0 < *(int *)(in_stack_0000000c + 0x100))) {
    pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (*(int *)(in_stack_0000000c + 0x104) * 4,"..\\core\\dmodel.cpp",0x868);
    if (pvVar1 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x869;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CKeyFramedModel::removeUnusedVertices out of memory for auxArray, vertexCount = %d",*(uint *)(in_stack_00000010 + 0x104));
    }
    crt_memory_c_memset_FUN_005fde40(unaff_EBP,0,*(int *)(in_stack_00000014 + 0x104) << 2);
    iVar6 = 0;
    if (0 < *(int *)(in_stack_00000018 + 0x110)) {
      iVar10 = 0;
      do {
        iVar8 = *(int *)(in_stack_00000018 + 0x114) + iVar10;
        iVar2 = 0;
        iVar4 = iVar8;
        if (0 < *(int *)(iVar8 + 4)) {
          do {
            unaff_EDI[*(int *)(iVar4 + 0x18)] = 1;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0xc;
          } while (iVar2 < *(int *)(iVar8 + 4));
        }
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 0x48;
      } while (iVar6 < *(int *)(in_stack_00000018 + 0x110));
    }
    iVar10 = 0;
    iVar6 = 0;
    piVar3 = unaff_EDI;
    if (0 < *(int *)(in_stack_00000018 + 0x104)) {
      do {
        if (*piVar3 == 0) {
          *piVar3 = -1;
        }
        else {
          *piVar3 = iVar6;
          iVar6 = iVar6 + 1;
        }
        iVar10 = iVar10 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar10 < *(int *)(in_stack_00000018 + 0x104));
    }
    if (iVar6 < *(int *)(in_stack_00000018 + 0x104)) {
      iVar10 = 0;
      if (0 < *(int *)(in_stack_00000018 + 0x110)) {
        iVar4 = 0;
        do {
          iVar9 = *(int *)(in_stack_00000018 + 0x114) + iVar4;
          iVar8 = 0;
          iVar2 = iVar9;
          if (0 < *(int *)(iVar9 + 4)) {
            do {
              *(int *)(iVar2 + 0x18) = unaff_EDI[*(int *)(iVar2 + 0x18)];
              iVar8 = iVar8 + 1;
              iVar2 = iVar2 + 0xc;
            } while (iVar8 < *(int *)(iVar9 + 4));
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + 0x48;
        } while (iVar10 < *(int *)(in_stack_00000018 + 0x110));
      }
      iVar10 = 0;
      puVar5 = *(uint **)(in_stack_00000018 + 0x10c);
      puVar7 = puVar5;
      if (0 < *(int *)(in_stack_00000018 + 0x100)) {
        do {
          iVar4 = 0;
          piVar3 = unaff_EDI;
          if (0 < *(int *)(in_stack_00000018 + 0x104)) {
            do {
              if (-1 < *piVar3) {
                if (puVar7 < puVar5) {
                  *puVar7 = *puVar5;
                  puVar7[(uint)bVar12 * -2 + 1] = puVar5[(uint)bVar12 * -2 + 1];
                  (puVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                       (puVar5 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
                }
                puVar7 = puVar7 + 3;
              }
              puVar5 = puVar5 + 3;
              iVar4 = iVar4 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar4 < *(int *)(in_stack_00000018 + 0x104));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(in_stack_00000018 + 0x100));
      }
      *(int *)(in_stack_00000018 + 0x104) = iVar6;
      iVar6 = 0;
      this_ptr = *(CKeyFramedModel **)(in_stack_00000018 + 0x114);
      if (0 < *(int *)(in_stack_00000018 + 0x5584)) {
        local_10 = (int *)(in_stack_00000018 + 0x5588);
        iVar10 = 0;
        do {
          iVar4 = -1;
          iVar2 = 0;
          if (0 < local_10[1]) {
            do {
              iVar8 = 0;
              pCVar11 = this_ptr;
              if (0 < *(int *)(this_ptr->model_filename + 4)) {
                do {
                  iVar9 = *(int *)(pCVar11->model_filename + 0x18);
                  if (iVar9 < iVar10) {
                    g_CurrentFilename = "..\\core\\dmodel.cpp";
                    g_CurrentLineNumber = 0x8ae;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("Part vertex overlap detected!");
                  }
                  if (iVar4 <= iVar9) {
                    iVar4 = iVar9 + 1;
                  }
                  iVar8 = iVar8 + 1;
                  pCVar11 = (CKeyFramedModel *)(pCVar11->model_filename + 0xc);
                } while (iVar8 < *(int *)(this_ptr->model_filename + 4));
              }
              this_ptr = (CKeyFramedModel *)(this_ptr->model_filename + 0x48);
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_10[1]);
          }
          *local_10 = iVar4 - iVar10;
          local_10 = local_10 + 2;
          iVar6 = iVar6 + 1;
          iVar10 = iVar4;
        } while (iVar6 < *(int *)(in_stack_00000018 + 0x5584));
      }
    }
    g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
    g_CurrentDebugLine = 0x8bc;
    crt_memory_c_free_FUN_005fe659(unaff_EDI);
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_0000001c);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(in_stack_0000001c);
    return;
  }
  return;
}
