// Name: core_script.cpp_CScript_FUN_00565e70
// Address: 00565e70
// Address Range: [[00565e70, 00565f60]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00565e70(CScript *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00565e70(CScript *this_ptr,int param_2,int param_3)

{
  CBitFont *font_ptr;
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int extraout_EAX;
  char *pcVar5;
  byte *puVar6;
  byte *puVar7;
  byte *puVar8;
  byte *puVar9;
  void **ppvVar10;
  CCmdParse *pCVar11;
  CCmdParse local_2a38 [2122];
  byte local_910 [808];
  byte local_5e8 [500];
  byte local_3f4 [500];
  byte local_200 [500];
  
  if (-1 < param_3) {
    font_ptr = (CBitFont *)(this_ptr->unk4 + 0x20);
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
    if (param_3 < iVar2) {
      iVar3 = core_script_cpp_CScript_FUN_00566a90(this_ptr,param_3,param_2);
      pCVar11 = local_2a38;
      puVar9 = local_910;
      puVar8 = local_5e8;
      puVar7 = local_3f4;
      puVar6 = local_200;
      iVar2 = iVar3;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,param_3);
      core_script_cpp_FUN_00561c70
                ((int)pcVar4,(int)puVar6,(int)puVar7,(int)puVar8,iVar2,(int)puVar9,(int)pCVar11);
      if (extraout_EAX < 1) {
        iVar2 = 0x78;
        ppvVar10 = &PTR_s_label_006441c0_00680e28;
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,param_3);
        iVar2 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                          (local_2a38,(int)pcVar4,iVar3,(int *)ppvVar10,iVar2);
        if (iVar2 < 1) {
          pcVar4 = "Not enough context to show usage.  (Try putting the cursor over the first parm...)";
          pcVar5 = &DAT_0310fdc0;
          do {
            cVar1 = *pcVar4;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') {
              return;
            }
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          return;
        }
      }
      core_script_cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0();
      return;
    }
  }
  return;
}
