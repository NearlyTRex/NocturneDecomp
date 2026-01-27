// Name: core_morph.cpp_CMorphModel_FUN_0052aca0
// Address: 0052aca0
// Address Range: [[0052aca0, 0052ae5e]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_FUN_0052aca0(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052aca0(CMorphModel *this_ptr)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
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
  
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr->unk1 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x191;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar5 = in_stack_00000018 + *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0x10);
  if (*(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0x10) +
      *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 8) < in_stack_0000001c + iVar5) {
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
      iVar5 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,(char *)(*local_20 * 0x48 + in_stack_00000010 + 8));
      iVar4 = 0;
      *(uint *)(*(int *)(this_ptr->unk2 + 8) + local_14 + 4) = 3;
      puVar2 = local_24;
      do {
        iVar3 = iVar4;
        if (DAT_02f43974 != 0) {
          iVar3 = 2 - iVar4;
        }
        iVar3 = iVar3 * 0xc;
        *(uint *)(iVar3 + 0x18 + *(int *)(this_ptr->unk2 + 8) + local_14) = (uint)*puVar2;
        iVar4 = iVar4 + 1;
        *(uint *)(iVar3 + 0x1c + *(int *)(this_ptr->unk2 + 8) + local_14) = (uint)puVar2[3] << 8;
        *(uint *)(iVar3 + *(int *)(this_ptr->unk2 + 8) + local_14 + 0x20) = (uint)puVar2[6] << 8;
        puVar2 = puVar2 + 1;
      } while (iVar4 < 3);
      *(int *)(local_14 + *(int *)(this_ptr->unk2 + 8)) = iVar5;
      piVar1 = (int *)(local_14 + 0x18 + *(int *)(this_ptr->unk2 + 8));
      *piVar1 = *piVar1 + *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0xc);
      *(int *)(local_14 + 0x24 + *(int *)(this_ptr->unk2 + 8)) =
           *(int *)(local_14 + 0x24 + *(int *)(this_ptr->unk2 + 8)) +
           *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0xc);
      local_20 = local_20 + 1;
      iVar5 = local_14 + *(int *)(this_ptr->unk2 + 8);
      local_1c = local_1c + 1;
      *(int *)(iVar5 + 0x30) =
           *(int *)(iVar5 + 0x30) + *(int *)(this_ptr->unk1 + in_stack_00000008 * 0x10 + 0xc);
      local_24 = local_24 + 9;
      local_14 = local_14 + 0x3c;
    } while (local_1c < in_stack_0000001c);
  }
  return;
}
