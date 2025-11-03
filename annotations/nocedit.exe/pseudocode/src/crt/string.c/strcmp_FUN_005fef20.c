// Name: crt_string.c_strcmp_FUN_005fef20
// Address: 005fef20
// Address Range: [[005fef20, 005fefcb]]
// Convention: __watcallStack
// Signature: int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
// Cross-references:
//   core_ammo.cpp_CAmmo_FUN_00410fd0 (00410fd0) at 00411087 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0 (004113e0) at 00411422 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 (0043e0d0) at 0043e0f0 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044a920 (0044a920) at 0044a990 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f5ec [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 (0044de10) at 0044de3a [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0 (004701a0) at 004701b9 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 (00470060) at 00470079 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 (004825c0) at 004826cd [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8094 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004ae611 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa320 (004aa320) at 004aa32b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e40d1 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe789 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 (004fed10) at 004fedb1 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 0054073a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 (00542470) at 005429a7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a610 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eefc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b500 (0057b500) at 0057b557 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ResolveMasterLights_FUN_0057c550 (0057c550) at 0057c57c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592520 (00592520) at 00592556 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0 (005dc5e0) at 005dc5ff [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc544 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0 (005dc6c0) at 005dc6eb [UNCONDITIONAL_CALL]
//   crt_io.c_analyze_file_type_FUN_00607d50 (00607d50) at 00607e3c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640 (004b5640) at 004b571d [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470 (004fb470) at 004fb623 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_getProfileString_FUN_004fb250 (004fb250) at 004fb3c6 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb8ac [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0 (00544fc0) at 00544fdd [UNCONDITIONAL_CALL]
//   engine_pod.cpp_findFilesByExtension_FUN_00550ce0 (00550ce0) at 00550e0e [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180 (005dd180) at 005dd1e0 [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440 (005f2440) at 005f2654 [UNCONDITIONAL_CALL]
//   shape_design.c_FUN_0045a320 (0045a320) at 0045a4bb [UNCONDITIONAL_CALL]
//   shape_design.c_combineTextureMaps_FUN_00469ee0 (00469ee0) at 0046a048 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 0046572d [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 00461854 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045b2ca [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458bec [UNCONDITIONAL_CALL]
//   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 (00465b40) at 00465c01 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464aa1 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465a48 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 00464ca8 [UNCONDITIONAL_CALL]
//   shape_design.c_selectModelPart_FUN_0045de80 (0045de80) at 0045deea [UNCONDITIONAL_CALL]
//   shape_design.c_validateModelTextures_FUN_00459a20 (00459a20) at 00459c67 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f62c [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_findLocalizedString_FUN_00544170 (00544170) at 005441a7 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0 (005441f0) at 00544234 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00543fdf [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0 (005b7fe0) at 005b80ac [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __watcallStack crt_string_c_strcmp_FUN_005fef20(char *str1,char *str2)

{
  byte bVar1;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  uint uVar2;
  
  if (str1 != str2) {
    do {
      uVar2 = *(uint *)str1;
      uVar4 = *(uint *)str2;
      if (uVar4 != uVar2) {
LAB_005fefa3:
        bVar1 = (byte)uVar2;
        bVar5 = bVar1 < (byte)uVar4;
        if (bVar1 == (byte)uVar4) {
          if (bVar1 == 0) {
            return 0;
          }
          bVar1 = (byte)(uVar2 >> 8);
          bVar3 = (byte)(uVar4 >> 8);
          bVar5 = bVar1 < bVar3;
          if (bVar1 == bVar3) {
            if (bVar1 == 0) {
              return 0;
            }
            bVar1 = (byte)(uVar2 >> 0x10);
            bVar3 = (byte)(uVar4 >> 0x10);
            bVar5 = bVar1 < bVar3;
            if (bVar1 == bVar3) {
              if (bVar1 == 0) {
                return 0;
              }
              bVar5 = (byte)(uVar2 >> 0x18) < (byte)(uVar4 >> 0x18);
            }
          }
        }
        return -(uint)bVar5 | 1;
      }
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)str1 + 4);
      uVar4 = *(uint *)((int)str2 + 4);
      if (uVar4 != uVar2) goto LAB_005fefa3;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)str1 + 8);
      uVar4 = *(uint *)((int)str2 + 8);
      if (uVar4 != uVar2) goto LAB_005fefa3;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)str1 + 0xc);
      uVar4 = *(uint *)((int)str2 + 0xc);
      if (uVar4 != uVar2) goto LAB_005fefa3;
      str1 = (char *)((int)str1 + 0x10);
      str2 = (char *)((int)str2 + 0x10);
    } while ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) == 0);
  }
  return 0;
}


// Assembly code:
// 005fef20: PUSH EDX
//   Label: crt_string.c_strcmp_FUN_005fef20
// 005fef21: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fef25: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fef29: PUSH EBX
// 005fef2a: PUSH ECX
// 005fef2b: MOV EBX,EAX
// 005fef2d: CMP EAX,EDX
// 005fef2f: JZ 0x005fef9d
//   XREF to: 005fef9d (CONDITIONAL_JUMP)
// 005fef31: MOV EAX,dword ptr [EBX]
//   Label: LAB_005fef31
// 005fef33: MOV ECX,dword ptr [EDX]
// 005fef35: CMP ECX,EAX
// 005fef37: JNZ 0x005fefa3
//   XREF to: 005fefa3 (CONDITIONAL_JUMP)
// 005fef39: NOT ECX
// 005fef3b: ADD EAX,0xfefefeff
// 005fef40: AND EAX,ECX
// 005fef42: AND EAX,0x80808080
// 005fef47: JNZ 0x005fef9d
//   XREF to: 005fef9d (CONDITIONAL_JUMP)
// 005fef49: MOV EAX,dword ptr [EBX + 0x4]
// 005fef4c: MOV ECX,dword ptr [EDX + 0x4]
// 005fef4f: CMP ECX,EAX
// 005fef51: JNZ 0x005fefa3
//   XREF to: 005fefa3 (CONDITIONAL_JUMP)
// 005fef53: NOT ECX
// 005fef55: ADD EAX,0xfefefeff
// 005fef5a: AND EAX,ECX
// 005fef5c: AND EAX,0x80808080
// 005fef61: JNZ 0x005fef9d
//   XREF to: 005fef9d (CONDITIONAL_JUMP)
// 005fef63: MOV EAX,dword ptr [EBX + 0x8]
// 005fef66: MOV ECX,dword ptr [EDX + 0x8]
// 005fef69: CMP ECX,EAX
// 005fef6b: JNZ 0x005fefa3
//   XREF to: 005fefa3 (CONDITIONAL_JUMP)
// 005fef6d: NOT ECX
// 005fef6f: ADD EAX,0xfefefeff
// 005fef74: AND EAX,ECX
// 005fef76: AND EAX,0x80808080
// 005fef7b: JNZ 0x005fef9d
//   XREF to: 005fef9d (CONDITIONAL_JUMP)
// 005fef7d: MOV EAX,dword ptr [EBX + 0xc]
// 005fef80: MOV ECX,dword ptr [EDX + 0xc]
// 005fef83: CMP ECX,EAX
// 005fef85: JNZ 0x005fefa3
//   XREF to: 005fefa3 (CONDITIONAL_JUMP)
// 005fef87: ADD EBX,0x10
// 005fef8a: ADD EDX,0x10
// 005fef8d: NOT ECX
// 005fef8f: ADD EAX,0xfefefeff
// 005fef94: AND EAX,ECX
// 005fef96: AND EAX,0x80808080
// 005fef9b: JZ 0x005fef31
//   XREF to: 005fef31 (CONDITIONAL_JUMP)
// 005fef9d: SUB EAX,EAX
//   Label: LAB_005fef9d
// 005fef9f: POP ECX
// 005fefa0: POP EBX
// 005fefa1: POP EDX
// 005fefa2: RET
// 005fefa3: CMP AL,CL
//   Label: LAB_005fefa3
// 005fefa5: JNZ 0x005fefc4
//   XREF to: 005fefc4 (CONDITIONAL_JUMP)
// 005fefa7: CMP AL,0x0
// 005fefa9: JZ 0x005fef9d
//   XREF to: 005fef9d (CONDITIONAL_JUMP)
// 005fefab: CMP AH,CH
// 005fefad: JNZ 0x005fefc4
//   XREF to: 005fefc4 (CONDITIONAL_JUMP)
// 005fefaf: CMP AH,0x0
// 005fefb2: JZ 0x005fef9d
//   XREF to: 005fef9d (CONDITIONAL_JUMP)
// 005fefb4: SHR EAX,0x10
// 005fefb7: SHR ECX,0x10
// 005fefba: CMP AL,CL
// 005fefbc: JNZ 0x005fefc4
//   XREF to: 005fefc4 (CONDITIONAL_JUMP)
// 005fefbe: CMP AL,0x0
// 005fefc0: JZ 0x005fef9d
//   XREF to: 005fef9d (CONDITIONAL_JUMP)
// 005fefc2: CMP AH,CH
// 005fefc4: SBB EAX,EAX
//   Label: LAB_005fefc4
// 005fefc6: OR AL,0x1
// 005fefc8: POP ECX
// 005fefc9: POP EBX
// 005fefca: POP EDX
// 005fefcb: RET
