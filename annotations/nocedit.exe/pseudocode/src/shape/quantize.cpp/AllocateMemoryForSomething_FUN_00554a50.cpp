// Name: shape_quantize.cpp_AllocateMemoryForSomething_FUN_00554a50
// Address: 00554a50
// Address Range: [[00554a50, 00554cb0]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_AllocateMemoryForSomething_FUN_00554a50()
// Cross-references:
//   shape_quantize.cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0 (005563d0) at 0055643e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640a73
//   TerminatedCString s_shape_quantize_cpp_00640a9f
//   TerminatedCString s_Unable_to_allocate_memor_00640b39
//   TerminatedCString s_Unable_to_allocate_memor_00640b62
//   TerminatedCString s_Phase_1_00640b90
//   double DOUBLE_00640b9b = 0.577350270000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 shape_quantize.cpp_AllocateMemoryForSomething(undefined4 param_1,
   undefined4 param_2) */

undefined4 shape_quantize_cpp_AllocateMemoryForSomething_FUN_00554a50(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  undefined2 extraout_CX;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  byte bVar13;
  float10 fVar14;
  double dVar15;
  int *in_stack_00000004;
  int in_stack_00000008;
  int local_30;
  int local_2c;
  undefined1 local_28;
  
  bVar13 = 0;
  uVar2 = *(ushort *)(in_stack_00000008 + 0x14);
  uVar3 = *(ushort *)(in_stack_00000008 + 0x16);
  uVar4 = *(ushort *)(in_stack_00000008 + 0x18);
  if (*(char *)(in_stack_00000008 + 0x1a) != '\x18') {
    return 0;
  }
  iVar11 = (uint)uVar3 * (uint)uVar2 * 4;
  pvVar5 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     ((void *)in_stack_00000004[1],in_stack_00000004[0x12ce] + iVar11,
                      "..\\shape\\quantize.cpp",0x73);
  if (pvVar5 != (void *)0x0) {
    in_stack_00000004[1] = (int)pvVar5;
    in_stack_00000004[0x12ce] = in_stack_00000004[0x12ce] + iVar11;
    pvVar5 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       ((void *)in_stack_00000004[3],(uint)uVar4,"..\\shape\\quantize.cpp",0x73)
    ;
    if (pvVar5 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x61;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for scanline array.");
      return 0;
    }
    in_stack_00000004[3] = (int)pvVar5;
    local_30 = 0;
    local_2c = 0;
    do {
      if ((int)(uint)uVar3 <= local_30) {
        in_stack_00000004[0x814] = 0;
        in_stack_00000004[0x815] = in_stack_00000004[0x12cf];
        return 1;
      }
      iVar11 = 0;
      puVar9 = *(undefined4 **)(*(int *)(in_stack_00000008 + 0x20) + local_2c);
      puVar12 = (undefined4 *)in_stack_00000004[3];
      for (uVar8 = (uint)(uVar4 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
        puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
      }
      for (uVar8 = (byte)uVar4 & 0xffffff03; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar13 * -2 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + (uint)bVar13 * -2 + 1);
      }
      for (iVar10 = 0; iVar10 < (int)(uint)uVar2; iVar10 = iVar10 + 1) {
        iVar7 = in_stack_00000004[3];
        bVar1 = *(byte *)(iVar11 + iVar7);
        uVar8 = (uint)*(byte *)(iVar11 + 1 + iVar7);
        uVar6 = (uint)*(byte *)(iVar11 + 2 + iVar7);
        iVar7 = uVar6 * uVar6 + uVar8 * uVar8 + (uint)bVar1 * (uint)bVar1;
        fVar14 = SQRT((float10)iVar7) * (float10)DOUBLE_00640b9b;
        dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar11,iVar7));
        local_28 = (undefined1)(int)ROUND(fVar14);
        *(byte *)(in_stack_00000004[1] + in_stack_00000004[0x12cf] * 4) = bVar1;
        *(char *)(in_stack_00000004[1] + 1 + in_stack_00000004[0x12cf] * 4) =
             (char)((ushort)extraout_CX >> 8);
        *(char *)(in_stack_00000004[1] + 2 + in_stack_00000004[0x12cf] * 4) = (char)extraout_CX;
        *(undefined1 *)(in_stack_00000004[1] + 3 + in_stack_00000004[0x12cf] * 4) = local_28;
        iVar11 = (int)((ulonglong)dVar15 >> 0x20) + 3;
        in_stack_00000004[0x12cf] = in_stack_00000004[0x12cf] + 1;
      }
      if (*in_stack_00000004 != 0) {
        iVar11 = (*(code *)*in_stack_00000004)();
        if (iVar11 != 0) {
          return 0;
        }
      }
      local_30 = local_30 + 1;
      local_2c = local_2c + 4;
    } while( true );
  }
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 0x61;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for Pix array.");
  return 0;
}


// Assembly code:
// 00554a50: PUSH EBX
//   Label: shape_quantize.cpp_AllocateMemoryForSomething_FUN_00554a50
// 00554a51: PUSH ESI
// 00554a52: PUSH EDI
// 00554a53: PUSH EBP
// 00554a54: SUB ESP,0x20
// 00554a57: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00554a5b: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00554a5f: MOV AX,word ptr [EBP + 0x14]
// 00554a63: MOV DX,word ptr [EBP + 0x16]
// 00554a67: MOV SI,word ptr [EBP + 0x18]
// 00554a6b: MOV CL,byte ptr [EBP + 0x1a]
// 00554a6e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00554a72: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00554a76: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00554a7a: CMP CL,0x18
// 00554a7d: JZ 0x00554a8b
//   XREF to: 00554a8b (CONDITIONAL_JUMP)
// 00554a7f: XOR EDI,EDI
// 00554a81: MOV EAX,EDI
// 00554a83: ADD ESP,0x20
// 00554a86: POP EBP
// 00554a87: POP EDI
// 00554a88: POP ESI
// 00554a89: POP EBX
// 00554a8a: RET
// 00554a8b: XOR EDI,EDI
//   Label: LAB_00554a8b
// 00554a8d: AND EAX,0xffff
// 00554a92: MOV DI,DX
// 00554a95: IMUL EDI,EAX
// 00554a98: PUSH 0x73
// 00554a9a: SHL EDI,0x2
// 00554a9d: MOV EAX,dword ptr [EBX + 0x4b38]
// 00554aa3: PUSH 0x640a9f
//   XREF to: 00640a9f (DATA)
// 00554aa8: ADD EAX,EDI
// 00554aaa: PUSH EAX
// 00554aab: MOV EDX,dword ptr [EBX + 0x4]
// 00554aae: PUSH EDX
// 00554aaf: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00554ab4: ADD ESP,0x10
// 00554ab7: TEST EAX,EAX
// 00554ab9: JZ 0x00554b2c
//   XREF to: 00554b2c (CONDITIONAL_JUMP)
// 00554abb: MOV dword ptr [EBX + 0x4],EAX
// 00554abe: MOV EAX,dword ptr [EBX + 0x4b38]
// 00554ac4: ADD EAX,EDI
// 00554ac6: PUSH 0x73
// 00554ac8: MOV dword ptr [EBX + 0x4b38],EAX
// 00554ace: XOR EAX,EAX
// 00554ad0: PUSH 0x640a9f
//   XREF to: 00640a9f (DATA)
// 00554ad5: MOV AX,SI
// 00554ad8: PUSH EAX
// 00554ad9: MOV EDX,dword ptr [EBX + 0xc]
// 00554adc: PUSH EDX
// 00554add: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 00554ae2: ADD ESP,0x10
// 00554ae5: TEST EAX,EAX
// 00554ae7: JZ 0x00554b5b
//   XREF to: 00554b5b (CONDITIONAL_JUMP)
// 00554ae9: XOR ESI,ESI
// 00554aeb: MOV dword ptr [EBX + 0xc],EAX
// 00554aee: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x30] (DATA)
// 00554af1: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00554af5: XOR EAX,EAX
//   Label: LAB_00554af5
// 00554af7: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00554afa: MOV AX,word ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 00554aff: CMP EAX,EDX
// 00554b01: JG 0x00554ba1
//   XREF to: 00554ba1 (CONDITIONAL_JUMP)
// 00554b07: MOV EAX,dword ptr [EBX + 0x4b3c]
// 00554b0d: MOV dword ptr [EBX + 0x2050],0x0
// 00554b17: MOV EDI,0x1
// 00554b1c: MOV dword ptr [EBX + 0x2054],EAX
// 00554b22: MOV EAX,EDI
// 00554b24: ADD ESP,0x20
// 00554b27: POP EBP
// 00554b28: POP EDI
// 00554b29: POP ESI
// 00554b2a: POP EBX
// 00554b2b: RET
// 00554b2c: MOV EDX,0x640a73
//   Label: LAB_00554b2c
//   XREF to: 00640a73 (PARAM)
// 00554b31: MOV ECX,0x61
// 00554b36: PUSH 0x640b39
//   XREF to: 00640b39 (DATA)
// 00554b3b: XOR EDI,EDI
// 00554b3d: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00554b43: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00554b49: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00554b4e: ADD ESP,0x4
// 00554b51: MOV EAX,EDI
// 00554b53: ADD ESP,0x20
// 00554b56: POP EBP
// 00554b57: POP EDI
// 00554b58: POP ESI
// 00554b59: POP EBX
// 00554b5a: RET
// 00554b5b: MOV EDX,0x640a73
//   Label: LAB_00554b5b
//   XREF to: 00640a73 (PARAM)
// 00554b60: MOV ECX,0x61
// 00554b65: PUSH 0x640b62
//   XREF to: 00640b62 (DATA)
// 00554b6a: XOR EDI,EDI
// 00554b6c: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00554b72: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00554b78: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00554b7d: ADD ESP,0x4
// 00554b80: MOV EAX,EDI
// 00554b82: ADD ESP,0x20
// 00554b85: POP EBP
// 00554b86: POP EDI
// 00554b87: POP ESI
// 00554b88: POP EBX
// 00554b89: RET
// 00554b8a: MOV ESI,dword ptr [ESP]
//   Label: LAB_00554b8a
//   XREF to: Stack[-0x30] (DATA)
// 00554b8d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00554b91: INC ESI
// 00554b92: ADD ECX,0x4
// 00554b95: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x30] (DATA)
// 00554b98: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00554b9c: JMP 0x00554af5
//   XREF to: 00554af5 (UNCONDITIONAL_JUMP)
// 00554ba1: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_00554ba1
//   XREF to: Stack[-0x2c] (READ)
// 00554ba5: MOV ESI,dword ptr [EBP + 0x20]
// 00554ba8: XOR ECX,ECX
// 00554baa: ADD ESI,EDI
// 00554bac: MOV CX,word ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00554bb1: MOV ESI,dword ptr [ESI]
// 00554bb3: MOV EDI,dword ptr [EBX + 0xc]
// 00554bb6: XOR EDX,EDX
// 00554bb8: PUSH EDI
// 00554bb9: MOV EAX,ECX
// 00554bbb: SHR ECX,0x2
// 00554bbe: MOVSD.REP ES:EDI,ESI
// 00554bc0: MOV CL,AL
// 00554bc2: AND CL,0x3
// 00554bc5: MOVSB.REP ES:EDI,ESI
// 00554bc7: POP EDI
// 00554bc8: XOR ESI,ESI
// 00554bca: XOR EAX,EAX
//   Label: LAB_00554bca
// 00554bcc: MOV AX,word ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00554bd1: CMP ESI,EAX
// 00554bd3: JGE 0x00554c7e
//   XREF to: 00554c7e (CONDITIONAL_JUMP)
// 00554bd9: MOV EAX,dword ptr [EBX + 0xc]
// 00554bdc: MOV CL,byte ptr [EDX + EAX*0x1]
// 00554bdf: MOV byte ptr [ESP + 0x1c],CL
//   XREF to: Stack[-0x14] (WRITE)
// 00554be3: MOV CH,byte ptr [EDX + EAX*0x1 + 0x1]
// 00554be7: MOV CL,byte ptr [EDX + EAX*0x1 + 0x2]
// 00554beb: XOR EAX,EAX
// 00554bed: MOV AL,CH
// 00554bef: MOV EDI,EAX
// 00554bf1: IMUL EDI,EAX
// 00554bf4: XOR EAX,EAX
// 00554bf6: MOV AL,byte ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00554bfa: IMUL EAX,EAX
// 00554bfd: ADD EDI,EAX
// 00554bff: XOR EAX,EAX
// 00554c01: MOV AL,CL
// 00554c03: IMUL EAX,EAX
// 00554c06: ADD EAX,EDI
// 00554c08: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00554c0c: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00554c10: FSQRT
// 00554c12: FMUL double ptr [0x00640b9b]
//   XREF to: 00640b9b (READ)
// 00554c18: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00554c1d: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 00554c21: MOV AL,byte ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00554c25: MOV byte ptr [ESP + 0x18],AL
//   XREF to: Stack[-0x18] (WRITE)
// 00554c29: MOV EAX,dword ptr [EBX + 0x4b3c]
// 00554c2f: MOV EDI,dword ptr [EBX + 0x4]
// 00554c32: SHL EAX,0x2
// 00554c35: ADD EDI,EAX
// 00554c37: MOV AL,byte ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00554c3b: MOV byte ptr [EDI],AL
// 00554c3d: MOV EAX,dword ptr [EBX + 0x4b3c]
// 00554c43: MOV EDI,dword ptr [EBX + 0x4]
// 00554c46: MOV byte ptr [EDI + EAX*0x4 + 0x1],CH
// 00554c4a: MOV EAX,dword ptr [EBX + 0x4b3c]
// 00554c50: MOV EDI,dword ptr [EBX + 0x4]
// 00554c53: MOV byte ptr [EDI + EAX*0x4 + 0x2],CL
// 00554c57: MOV EAX,dword ptr [EBX + 0x4b3c]
// 00554c5d: MOV EDI,dword ptr [EBX + 0x4]
// 00554c60: MOV CL,byte ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00554c64: MOV byte ptr [EDI + EAX*0x4 + 0x3],CL
// 00554c68: MOV EDI,dword ptr [EBX + 0x4b3c]
// 00554c6e: ADD EDX,0x3
// 00554c71: INC EDI
// 00554c72: INC ESI
// 00554c73: MOV dword ptr [EBX + 0x4b3c],EDI
// 00554c79: JMP 0x00554bca
//   XREF to: 00554bca (UNCONDITIONAL_JUMP)
// 00554c7e: CMP dword ptr [EBX],0x0
//   Label: LAB_00554c7e
// 00554c81: JZ 0x00554b8a
//   XREF to: 00554b8a (CONDITIONAL_JUMP)
// 00554c87: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00554c8a: XOR EAX,EAX
// 00554c8c: PUSH EDX
// 00554c8d: MOV AX,word ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 00554c92: PUSH EAX
// 00554c93: PUSH 0x640b90
//   XREF to: 00640b90 (DATA)
// 00554c98: CALL dword ptr [EBX]
// 00554c9a: ADD ESP,0xc
// 00554c9d: TEST EAX,EAX
// 00554c9f: JZ 0x00554b8a
//   XREF to: 00554b8a (CONDITIONAL_JUMP)
// 00554ca5: XOR EDI,EDI
// 00554ca7: MOV EAX,EDI
// 00554ca9: ADD ESP,0x20
// 00554cac: POP EBP
// 00554cad: POP EDI
// 00554cae: POP ESI
// 00554caf: POP EBX
// 00554cb0: RET
