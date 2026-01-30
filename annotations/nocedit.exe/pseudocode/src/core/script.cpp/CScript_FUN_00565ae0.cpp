// Name: core_script.cpp_CScript_FUN_00565ae0
// Address: 00565ae0
// Address Range: [[00565ae0, 00565c6c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00565ae0(CScript *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00565ae0(CScript *this_ptr,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int extraout_EAX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  byte *puVar10;
  byte *puVar11;
  byte auStack_2a38 [8488];
  byte local_910 [808];
  char local_5e8 [500];
  char local_3f4 [500];
  char local_200 [500];
  
  bVar9 = 0;
  if (-1 < param_3) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
    if (param_3 < iVar2) {
      iVar2 = core_script_cpp_CScript_FUN_00566a90(this_ptr,param_3,param_2);
      puVar11 = auStack_2a38;
      puVar10 = local_910;
      pcVar6 = local_5e8;
      pcVar7 = local_3f4;
      pcVar8 = local_200;
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(this_ptr->unk4 + 0x20),param_3);
      core_script_cpp_FUN_00561c70
                ((int)pcVar3,(int)pcVar8,(int)pcVar7,(int)pcVar6,iVar2,(int)puVar10,(int)puVar11);
      if (0 < extraout_EAX) {
        iVar2 = core_script_cpp_FUN_00562920(local_3f4,extraout_EAX,(int)local_910);
        if (iVar2 != 0) {
          pcVar6 = local_200;
          pcVar7 = &DAT_031101c0;
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar6 = local_3f4;
          iVar2 = -1;
          pcVar7 = &DAT_031101c0;
          do {
            pcVar8 = pcVar7;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          pcVar8 = pcVar8 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          pcVar6 = local_5e8;
          iVar2 = -1;
          pcVar7 = &DAT_031101c0;
          do {
            pcVar8 = pcVar7;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          pcVar8 = pcVar8 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,param_3);
          DAT_0310fd48 = param_3;
          uVar4 = 0xffffffff;
          pcVar6 = local_200;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          uVar5 = 0xffffffff;
          pcVar6 = local_3f4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30
                                   (this_ptr,param_3,~uVar5 + (~uVar4 - 2));
          core_script_cpp_FUN_005644e0();
          core_script_cpp_CScript_FUN_00566910(this_ptr);
          core_script_cpp_CScript_FUN_005669a0(this_ptr);
          return;
        }
      }
    }
  }
  return;
}
