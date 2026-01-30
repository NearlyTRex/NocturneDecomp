// Name: core_script.cpp_CScript_FUN_00565f70
// Address: 00565f70
// Address Range: [[00565f70, 0056607b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00565f70(CScript *this_ptr,char *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00565f70(CScript *this_ptr,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  void **ppvVar5;
  int iVar6;
  
  if (-1 < DAT_0310fd48) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
    if (DAT_0310fd48 < iVar2) {
      iVar2 = core_script_cpp_CScript_FUN_00566a90(this_ptr,DAT_0310fd48,DAT_0310fd44);
      iVar6 = 0x78;
      ppvVar5 = &PTR_s_label_006441c0_00680e28;
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(this_ptr->unk4 + 0x20),DAT_0310fd48);
      iVar2 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                        ((CCmdParse *)&DAT_0310cb74,(int)pcVar3,iVar2,(int *)ppvVar5,iVar6);
      if (iVar2 < 0) {
        core_script_cpp_CScript_FUN_00566390(this_ptr,param_2,1);
        return;
      }
      pcVar3 = &DAT_0310cca8 + iVar2 * 0x328;
      do {
        cVar1 = *param_2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      core_script_cpp_FUN_005624f0(0x310cb74,&DAT_031101c0);
      core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,DAT_0310fd48);
      uVar4 = core_script_cpp_FUN_00562760(0x310cb74,iVar2);
      DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30(this_ptr,DAT_0310fd48,uVar4);
      core_script_cpp_FUN_005644e0();
      core_script_cpp_CScript_FUN_00566910(this_ptr);
      core_script_cpp_CScript_FUN_005669a0(this_ptr);
      return;
    }
  }
  return;
}
