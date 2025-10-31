// Name: core_skeledit.cpp_FUN_0058de70
// Address: 0058de70
// Address Range: [[0058de70, 0058e0aa]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058de70()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c512 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   shape_design.c_cramTextureList_FUN_0046bb80
//   shape_design.c_cramTextures_FUN_0046a970
//   shape_design.c_initializeCramConfig_FUN_0046b6e0
//   shape_design.c_initializeTextureManager_FUN_0046a880
//   shape_design.c_setTextureQualityParameter_FUN_0046a8e0

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058de70(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int in_stack_00000014;
  char *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  SCramConfig SStack_84;
  int iStack_10;
  int iStack_c;
  int iVar9;
  int iVar10;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xb0);
  shape_design_c_initializeTextureManager_FUN_0046a880(1);
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
  iStack_10 = 0;
  if (0 < *(int *)(in_stack_00000014 + 0xbc)) {
    SStack_84.final_mode = in_stack_00000014 + in_stack_00000024 * 0x1680 + 200;
    do {
      uVar2 = 0x7fffffff;
      uVar3 = 0x80000001;
      uVar6 = 0x7fffffff;
      uVar7 = 0x80000001;
      iVar10 = 0;
      iVar9 = 0;
      for (iStack_c = 0;
          iStack_c < *(int *)(in_stack_00000014 + 0x54) + *(int *)(in_stack_00000014 + 0x68);
          iStack_c = iStack_c + 1) {
        iVar4 = *(int *)(in_stack_00000014 + 0x7c) + iVar9;
        if (iStack_10 == *(int *)(*(int *)(in_stack_00000014 + 0x90) + iVar10)) {
          iVar5 = iVar4 + 6;
          do {
            if (*(ushort *)(iVar4 + 6) < uVar2) {
              uVar2 = (uint)*(ushort *)(iVar4 + 6);
            }
            if ((int)uVar3 < (int)(uint)*(ushort *)(iVar4 + 6)) {
              uVar3 = (uint)*(ushort *)(iVar4 + 6);
            }
            if (*(ushort *)(iVar4 + 0xc) < uVar6) {
              uVar6 = (uint)*(ushort *)(iVar4 + 0xc);
            }
            if ((int)uVar7 < (int)(uint)*(ushort *)(iVar4 + 0xc)) {
              uVar7 = (uint)*(ushort *)(iVar4 + 0xc);
            }
            iVar4 = iVar4 + 2;
          } while (iVar4 != iVar5);
        }
        iVar9 = iVar9 + 0x12;
        iVar10 = iVar10 + 4;
      }
      if ((int)uVar2 <= (int)uVar3) {
        shape_design_c_cramTextures_FUN_0046a970
                  ((char *)SStack_84.final_mode,uVar2 << 8,uVar6 << 8,uVar3 << 8,uVar7 << 8);
      }
      SStack_84.final_mode = SStack_84.final_mode + 0x48;
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < *(int *)(in_stack_00000014 + 0xbc));
  }
  pcVar8 = &stack0xffffff78;
  shape_design_c_initializeCramConfig_FUN_0046b6e0((SCramConfig *)&stack0xffffff78);
  do {
    cVar1 = *in_stack_0000001c;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000001c[1];
    in_stack_0000001c = in_stack_0000001c + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  SStack_84.coverage_threshold = 0x5f;
  SStack_84.initial_value = in_stack_00000024;
  SStack_84.enable_optimization = 1;
  SStack_84.enable_gap_filling = in_stack_00000020;
  SStack_84.enable_scaling = 1;
  SStack_84.final_mode = in_stack_0000002c;
  SStack_84.enable_rotation = 1;
  SStack_84.enable_flipping = 1;
  SStack_84.algorithm_mode = 2;
  shape_design_c_cramTextureList_FUN_0046bb80(&SStack_84);
  SStack_84.filename[8] = -0x60;
  SStack_84.filename[9] = -0x20;
  SStack_84.filename[10] = 'X';
  SStack_84.filename[0xb] = '\0';
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}


// Assembly code:
// 0058de70: PUSH 0xb0
//   Label: core_skeledit.cpp_FUN_0058de70
// 0058de75: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058de7a: PUSH EBX
// 0058de7b: PUSH ESI
// 0058de7c: PUSH EDI
// 0058de7d: PUSH EBP
// 0058de7e: SUB ESP,0x88
// 0058de84: PUSH 0x1
// 0058de86: CALL shape_design.c_initializeTextureManager_FUN_0046a880
//   XREF to: 0046a880 (UNCONDITIONAL_CALL)
// 0058de8b: ADD ESP,0x4
// 0058de8e: PUSH 0x40
// 0058de90: CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0
//   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)
// 0058de95: ADD ESP,0x4
// 0058de98: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 0058de9f: XOR EDX,EDX
// 0058dea1: MOV ECX,dword ptr [EAX + 0xbc]
// 0058dea7: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0058deab: TEST ECX,ECX
// 0058dead: JLE 0x0058e018
//   XREF to: 0058e018 (CONDITIONAL_JUMP)
// 0058deb3: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x14] (READ)
// 0058deba: LEA EAX,[EDX*0x4 + 0x0]
// 0058dec1: SUB EAX,EDX
// 0058dec3: SHL EAX,0x7
// 0058dec6: MOV EDX,EAX
// 0058dec8: SHL EAX,0x4
// 0058decb: SUB EAX,EDX
// 0058decd: MOV EDX,EAX
// 0058decf: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 0058ded6: ADD EAX,0xc0
// 0058dedb: ADD EAX,EDX
// 0058dedd: ADD EAX,0x8
// 0058dee0: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0058dee4: MOV ECX,0x7fffffff
//   Label: LAB_0058dee4
// 0058dee9: MOV EBX,0x80000001
// 0058deee: XOR EBP,EBP
// 0058def0: MOV ESI,ECX
// 0058def2: MOV EDI,EBX
// 0058def4: MOV dword ptr [ESP + 0x7c],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0058def8: MOV dword ptr [ESP + 0x84],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0058deff: MOV dword ptr [ESP + 0x80],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0058df06: MOV EDX,dword ptr [ESP + 0x9c]
//   Label: LAB_0058df06
//   XREF to: Stack[0x4] (READ)
// 0058df0d: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 0058df14: MOV EBP,dword ptr [EDX + 0x68]
// 0058df17: MOV EAX,dword ptr [EAX + 0x54]
// 0058df1a: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 0058df1e: ADD EAX,EBP
// 0058df20: CMP EAX,EDX
// 0058df22: JLE 0x0058dfcb
//   XREF to: 0058dfcb (CONDITIONAL_JUMP)
// 0058df28: MOV EBP,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 0058df2f: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 0058df36: MOV EBP,dword ptr [EBP + 0x7c]
// 0058df39: ADD EBP,EAX
// 0058df3b: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 0058df42: MOV EDX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 0058df49: MOV EAX,dword ptr [EAX + 0x90]
// 0058df4f: ADD EAX,EDX
// 0058df51: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 0058df55: CMP EDX,dword ptr [EAX]
// 0058df57: JZ 0x0058df8d
//   XREF to: 0058df8d (CONDITIONAL_JUMP)
// 0058df5d: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_0058df5d
//   XREF to: Stack[-0x18] (READ)
// 0058df64: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 0058df68: MOV EBP,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 0058df6f: ADD EAX,0x12
// 0058df72: INC EDX
// 0058df73: ADD EBP,0x4
// 0058df76: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058df7d: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058df81: MOV dword ptr [ESP + 0x84],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0058df88: JMP 0x0058df06
//   XREF to: 0058df06 (UNCONDITIONAL_JUMP)
// 0058df8d: MOV EAX,EBP
//   Label: LAB_0058df8d
// 0058df8f: ADD EBP,0x6
// 0058df92: XOR EDX,EDX
//   Label: LAB_0058df92
// 0058df94: MOV DX,word ptr [EAX + 0x6]
// 0058df98: CMP EDX,ECX
// 0058df9a: JGE 0x0058df9e
//   XREF to: 0058df9e (CONDITIONAL_JUMP)
// 0058df9c: MOV ECX,EDX
// 0058df9e: XOR EDX,EDX
//   Label: LAB_0058df9e
// 0058dfa0: MOV DX,word ptr [EAX + 0x6]
// 0058dfa4: CMP EDX,EBX
// 0058dfa6: JLE 0x0058dfaa
//   XREF to: 0058dfaa (CONDITIONAL_JUMP)
// 0058dfa8: MOV EBX,EDX
// 0058dfaa: XOR EDX,EDX
//   Label: LAB_0058dfaa
// 0058dfac: MOV DX,word ptr [EAX + 0xc]
// 0058dfb0: CMP EDX,ESI
// 0058dfb2: JGE 0x0058dfb6
//   XREF to: 0058dfb6 (CONDITIONAL_JUMP)
// 0058dfb4: MOV ESI,EDX
// 0058dfb6: XOR EDX,EDX
//   Label: LAB_0058dfb6
// 0058dfb8: MOV DX,word ptr [EAX + 0xc]
// 0058dfbc: CMP EDX,EDI
// 0058dfbe: JLE 0x0058dfc2
//   XREF to: 0058dfc2 (CONDITIONAL_JUMP)
// 0058dfc0: MOV EDI,EDX
// 0058dfc2: ADD EAX,0x2
//   Label: LAB_0058dfc2
// 0058dfc5: CMP EAX,EBP
// 0058dfc7: JZ 0x0058df5d
//   XREF to: 0058df5d (CONDITIONAL_JUMP)
// 0058dfc9: JMP 0x0058df92
//   XREF to: 0058df92 (UNCONDITIONAL_JUMP)
// 0058dfcb: CMP ECX,EBX
//   Label: LAB_0058dfcb
// 0058dfcd: JG 0x0058dfef
//   XREF to: 0058dfef (CONDITIONAL_JUMP)
// 0058dfcf: SHL EDI,0x8
// 0058dfd2: PUSH EDI
// 0058dfd3: SHL EBX,0x8
// 0058dfd6: PUSH EBX
// 0058dfd7: SHL ESI,0x8
// 0058dfda: PUSH ESI
// 0058dfdb: SHL ECX,0x8
// 0058dfde: PUSH ECX
// 0058dfdf: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x24] (READ)
// 0058dfe6: PUSH ECX
// 0058dfe7: CALL shape_design.c_cramTextures_FUN_0046a970
//   XREF to: 0046a970 (UNCONDITIONAL_CALL)
// 0058dfec: ADD ESP,0x14
// 0058dfef: MOV EBX,dword ptr [ESP + 0x74]
//   Label: LAB_0058dfef
//   XREF to: Stack[-0x24] (READ)
// 0058dff3: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 0058dff7: MOV EDX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 0058dffe: ADD EBX,0x48
// 0058e001: INC ESI
// 0058e002: MOV EDI,dword ptr [EDX + 0xbc]
// 0058e008: MOV dword ptr [ESP + 0x74],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0058e00c: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0058e010: CMP ESI,EDI
// 0058e012: JL 0x0058dee4
//   XREF to: 0058dee4 (CONDITIONAL_JUMP)
// 0058e018: MOV EAX,ESP
//   Label: LAB_0058e018
// 0058e01a: PUSH EAX
// 0058e01b: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x98] (DATA)
// 0058e01f: CALL shape_design.c_initializeCramConfig_FUN_0046b6e0
//   XREF to: 0046b6e0 (UNCONDITIONAL_CALL)
// 0058e024: ADD ESP,0x4
// 0058e027: MOV EBX,0x1
// 0058e02c: MOV ESI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0x8] (READ)
// 0058e033: MOV ECX,0x5f
// 0058e038: PUSH EDI
// 0058e039: MOV AL,byte ptr [ESI]
//   Label: LAB_0058e039
// 0058e03b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x98] (DATA)
// 0058e03d: CMP AL,0x0
// 0058e03f: JZ 0x0058e051
//   XREF to: 0058e051 (CONDITIONAL_JUMP)
// 0058e041: MOV AL,byte ptr [ESI + 0x1]
// 0058e044: ADD ESI,0x2
// 0058e047: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x97] (WRITE)
// 0058e04a: ADD EDI,0x2
// 0058e04d: CMP AL,0x0
// 0058e04f: JNZ 0x0058e039
//   XREF to: 0058e039 (CONDITIONAL_JUMP)
// 0058e051: POP EDI
//   Label: LAB_0058e051
// 0058e052: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x10] (READ)
// 0058e059: MOV ESI,0x2
// 0058e05e: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 0058e062: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0058e066: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0xc] (READ)
// 0058e06d: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058e071: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0058e075: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x18] (READ)
// 0058e07c: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058e080: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058e084: MOV EAX,ESP
// 0058e086: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0058e08a: PUSH EAX
// 0058e08b: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0058e08f: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 0058e093: CALL shape_design.c_cramTextureList_FUN_0046bb80
//   XREF to: 0046bb80 (UNCONDITIONAL_CALL)
// 0058e098: ADD ESP,0x4
// 0058e09b: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 0058e0a0: ADD ESP,0x88
// 0058e0a6: POP EBP
// 0058e0a7: POP EDI
// 0058e0a8: POP ESI
// 0058e0a9: POP EBX
// 0058e0aa: RET
