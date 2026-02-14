// Name: core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0
// Address: 0052aac0
// Address Range: [[0052aac0, 0052ac97]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel *this_ptr,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel *this_ptr,int part_index)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar11 = 0;
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x152;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar4 = this_ptr->parts[part_index].start_face;
  local_18 = in_stack_0000001c + iVar4;
  if (iVar4 + this_ptr->parts[part_index].face_count < in_stack_00000020 + local_18) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x159;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < in_stack_00000020) {
    local_24 = in_stack_00000018;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,(char *)(*local_24 * 0x48 + in_stack_00000014 + 8));
      iVar6 = 2;
      if (2 < *(int *)(in_stack_0000000c + 4)) {
        iVar7 = in_stack_0000000c + 0x18;
        iVar5 = local_18 * 0x3c;
        do {
          iVar3 = DAT_02f43974;
          *(uint *)((int)this_ptr->faces + iVar5 + 4) = 3;
          if (iVar3 == 0) {
            puVar9 = (uint *)((int)this_ptr->faces + iVar5 + 0x18);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(in_stack_0000000c + 0x1c + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(in_stack_0000000c + 0x18);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            puVar9 = (uint *)((int)this_ptr->faces + iVar5 + 0x24);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            pvVar2 = this_ptr->faces;
            iVar3 = iVar7;
          }
          else {
            puVar9 = (uint *)((int)this_ptr->faces + iVar5 + 0x18);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x1c + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0x18);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            puVar9 = (uint *)((int)this_ptr->faces + iVar5 + 0x24);
            puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar8 = (uint *)(iVar7 + 0x10 + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(iVar7 + 0xc);
            *puVar10 = *puVar8;
            puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
            pvVar2 = this_ptr->faces;
            iVar3 = in_stack_0000000c;
          }
          puVar8 = (uint *)((int)pvVar2 + iVar5 + 0x30);
          puVar10 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar9 = (uint *)(iVar3 + 0x1c + (uint)bVar11 * -8);
          *puVar8 = *(uint *)(iVar3 + 0x18);
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          *(int *)((int)this_ptr->faces + iVar5) = iVar4;
          piVar1 = (int *)((int)this_ptr->faces + iVar5 + 0x18);
          *piVar1 = *piVar1 + this_ptr->parts[part_index].start_vertex;
          piVar1 = (int *)((int)this_ptr->faces + iVar5 + 0x24);
          *piVar1 = *piVar1 + this_ptr->parts[part_index].start_vertex;
          iVar7 = iVar7 + 0xc;
          iVar6 = iVar6 + 1;
          piVar1 = (int *)((int)this_ptr->faces + iVar5 + 0x30);
          *piVar1 = *piVar1 + this_ptr->parts[part_index].start_vertex;
          iVar5 = iVar5 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar6 < *(int *)(in_stack_0000000c + 4));
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      in_stack_0000000c = in_stack_0000000c + in_stack_00000010;
    } while (local_20 < in_stack_00000020);
  }
  return;
}
