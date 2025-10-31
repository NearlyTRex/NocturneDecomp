// Name: engine_model.c_loadMRGLTextures_FUN_00528870
// Address: 00528870
// Address Range: [[00528870, 00528931]]
// Convention: __cdecl
// Signature: void engine_model.c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended * block)
// Cross-references:
//   engine_model.c_initializeMRGLModel_FUN_00528940 (00528940) at 00528957 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_boss.c_modelStructNotSupported_FUN_0041dc20
//   engine_model.c_getMRGLSize_FUN_00528700
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800

#include "nocturne.h"

void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *block)

{
  char cVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  int iVar4;
  int *piVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int *piVar6;
  char *pcVar7;
  SMRGLTextureBasic SStack_30;
  SMRGLTextureBasic *local_18;
  SMRGLTextureBasic *local_14;
  
  iVar4 = (block->base).type;
  local_18 = (SMRGLTextureBasic *)block;
  if (iVar4 == 0x26) {
    engine_boss_c_modelStructNotSupported_FUN_0041dc20(block);
  }
  else {
    while (iVar4 != 0) {
      iVar4 = (((SMRGLTextureBasic *)block)->base).type;
      if ((iVar4 == 0xd) || (iVar4 == 0x40)) {
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(local_18);
      }
      else if ((iVar4 == 0x1d) &&
              (iVar4 = 0, local_14 = local_18, 0 < *(int *)local_18->texture_name)) {
        piVar5 = &local_18[1].base.count;
        do {
          SStack_30.base.count = 0;
          pcVar7 = SStack_30.texture_name;
          piVar6 = piVar5;
          do {
            iVar2 = *piVar6;
            *pcVar7 = (char)iVar2;
            if ((char)iVar2 == '\0') break;
            cVar1 = *(char *)((int)piVar6 + 1);
            piVar6 = (int *)((int)piVar6 + 2);
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SStack_30);
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 8;
        } while (iVar4 < *(int *)(unaff_EBP + 8));
      }
      pSVar3 = local_18;
      iVar4 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)local_18);
      block = (SMRGLHeaderExtended *)(pSVar3->texture_name + iVar4 + -8);
      local_14 = (SMRGLTextureBasic *)block;
      iVar4 = (((SMRGLTextureBasic *)block)->base).type;
    }
  }
  return;
}


// Assembly code:
// 00528870: PUSH EBX
//   Label: engine_model.c_loadMRGLTextures_FUN_00528870
// 00528871: PUSH ESI
// 00528872: PUSH EDI
// 00528873: PUSH EBP
// 00528874: SUB ESP,0x20
// 00528877: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0052887b: MOV EDX,dword ptr [EBX]
// 0052887d: CMP EDX,0x26
// 00528880: JZ 0x005288c9
//   XREF to: 005288c9 (CONDITIONAL_JUMP)
// 00528882: MOV EAX,EBX
// 00528884: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00528888: TEST EDX,EDX
// 0052888a: JZ 0x005288c1
//   XREF to: 005288c1 (CONDITIONAL_JUMP)
// 0052888c: MOV EBP,dword ptr [EAX]
//   Label: LAB_0052888c
// 0052888e: CMP EBP,0xd
// 00528891: JZ 0x00528898
//   XREF to: 00528898 (CONDITIONAL_JUMP)
// 00528893: CMP EBP,0x40
// 00528896: JNZ 0x005288d4
//   XREF to: 005288d4 (CONDITIONAL_JUMP)
// 00528898: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_00528898
//   XREF to: Stack[-0x18] (READ)
// 0052889c: PUSH ESI
// 0052889d: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 005288a2: ADD ESP,0x4
// 005288a5: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_005288a5
//   XREF to: Stack[-0x18] (READ)
// 005288a9: PUSH EBX
// 005288aa: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 005288af: ADD ESP,0x4
// 005288b2: LEA ESI,[EBX + EAX*0x1]
// 005288b5: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005288b9: MOV EDI,dword ptr [ESI]
// 005288bb: MOV EAX,ESI
// 005288bd: TEST EDI,EDI
// 005288bf: JNZ 0x0052888c
//   XREF to: 0052888c (CONDITIONAL_JUMP)
// 005288c1: ADD ESP,0x20
//   Label: LAB_005288c1
// 005288c4: POP EBP
// 005288c5: POP EDI
// 005288c6: POP ESI
// 005288c7: POP EBX
// 005288c8: RET
// 005288c9: PUSH EBX
//   Label: LAB_005288c9
// 005288ca: CALL engine_boss.c_modelStructNotSupported_FUN_0041dc20
//   XREF to: 0041dc20 (UNCONDITIONAL_CALL)
// 005288cf: ADD ESP,0x4
// 005288d2: JMP 0x005288c1
//   XREF to: 005288c1 (UNCONDITIONAL_JUMP)
// 005288d4: CMP EBP,0x1d
//   Label: LAB_005288d4
// 005288d7: JNZ 0x005288a5
//   XREF to: 005288a5 (CONDITIONAL_JUMP)
// 005288d9: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005288dd: XOR EBP,EBP
// 005288df: MOV EBX,dword ptr [EAX + 0x8]
// 005288e2: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005288e6: TEST EBX,EBX
// 005288e8: JLE 0x005288a5
//   XREF to: 005288a5 (CONDITIONAL_JUMP)
// 005288ea: LEA EBX,[EAX + 0x1c]
// 005288ed: XOR EDI,EDI
//   Label: LAB_005288ed
// 005288ef: MOV ESI,EBX
// 005288f1: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 005288f5: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x28] (DATA)
// 005288f9: PUSH EDI
// 005288fa: MOV AL,byte ptr [ESI]
//   Label: LAB_005288fa
// 005288fc: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x28] (DATA)
// 005288fe: CMP AL,0x0
// 00528900: JZ 0x00528912
//   XREF to: 00528912 (CONDITIONAL_JUMP)
// 00528902: MOV AL,byte ptr [ESI + 0x1]
// 00528905: ADD ESI,0x2
// 00528908: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x27] (WRITE)
// 0052890b: ADD EDI,0x2
// 0052890e: CMP AL,0x0
// 00528910: JNZ 0x005288fa
//   XREF to: 005288fa (CONDITIONAL_JUMP)
// 00528912: POP EDI
//   Label: LAB_00528912
// 00528913: MOV EDI,ESP
// 00528915: PUSH EDI
// 00528916: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 0052891b: ADD ESP,0x4
// 0052891e: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00528922: INC EBP
// 00528923: MOV EDX,dword ptr [EAX + 0x8]
// 00528926: ADD EBX,0x20
// 00528929: CMP EBP,EDX
// 0052892b: JL 0x005288ed
//   XREF to: 005288ed (CONDITIONAL_JUMP)
// 0052892d: JMP 0x005288a5
//   XREF to: 005288a5 (UNCONDITIONAL_JUMP)
