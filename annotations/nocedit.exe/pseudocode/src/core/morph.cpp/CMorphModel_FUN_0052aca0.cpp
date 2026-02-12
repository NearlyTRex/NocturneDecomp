// Name: core_morph.cpp_CMorphModel_FUN_0052aca0
// Address: 0052aca0
// Address Range: [[0052aca0, 0052ae5e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_FUN_0052aca0(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052aca0(CMorphModel *this_ptr)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000008;
  ushort *in_stack_0000000c;
  int in_stack_00000010;
  int *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  ushort *local_24;
  int *local_20;
  int local_1c;
  int local_14;
  
  if ((in_stack_00000008 < 0) || (this_ptr->part_count <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x191;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar2 = this_ptr->parts[in_stack_00000008].start_face;
  iVar5 = in_stack_00000018 + iVar2;
  if (iVar2 + this_ptr->parts[in_stack_00000008].face_count < in_stack_0000001c + iVar5) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x198;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  local_1c = 0;
  local_24 = in_stack_0000000c;
  if (0 < in_stack_0000001c) {
    local_20 = in_stack_00000014;
    local_14 = iVar5 * 0x3c;
    do {
      iVar2 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,(char *)(*local_20 * 0x48 + in_stack_00000010 + 8));
      iVar5 = 0;
      *(uint *)((int)this_ptr->faces + local_14 + 4) = 3;
      puVar3 = local_24;
      do {
        iVar4 = iVar5;
        if (DAT_02f43974 != 0) {
          iVar4 = 2 - iVar5;
        }
        iVar4 = iVar4 * 0xc;
        *(uint *)((int)this_ptr->faces + iVar4 + 0x18 + local_14) = (uint)*puVar3;
        iVar5 = iVar5 + 1;
        *(uint *)((int)this_ptr->faces + iVar4 + 0x1c + local_14) = (uint)puVar3[3] << 8;
        *(uint *)((int)this_ptr->faces + iVar4 + local_14 + 0x20) = (uint)puVar3[6] << 8;
        puVar3 = puVar3 + 1;
      } while (iVar5 < 3);
      *(int *)(local_14 + (int)this_ptr->faces) = iVar2;
      piVar1 = (int *)(local_14 + 0x18 + (int)this_ptr->faces);
      *piVar1 = *piVar1 + this_ptr->parts[in_stack_00000008].start_vertex;
      *(int *)(local_14 + 0x24 + (int)this_ptr->faces) =
           *(int *)(local_14 + 0x24 + (int)this_ptr->faces) +
           this_ptr->parts[in_stack_00000008].start_vertex;
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      *(int *)((int)this_ptr->faces + local_14 + 0x30) =
           *(int *)((int)this_ptr->faces + local_14 + 0x30) +
           this_ptr->parts[in_stack_00000008].start_vertex;
      local_24 = local_24 + 9;
      local_14 = local_14 + 0x3c;
    } while (local_1c < in_stack_0000001c);
  }
  return;
}
