// Name: shape_superopt.cpp_FUN_005d3140
// Address: 005d3140
// Address Range: [[005d3140, 005d3241]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d3140()
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_realloc_FUN_00601df0
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d3140(undefined4 param_1, undefined4 param_2) */

undefined1 * shape_superopt_cpp_FUN_005d3140(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  
  if (*in_stack_00000004 <= in_stack_00000008) {
    return (undefined1 *)0x0;
  }
  uVar4 = *in_stack_00000004 - 1;
  *in_stack_00000004 = uVar4;
  if (in_stack_00000008 < uVar4) {
    crt_string_c_memmove_FUN_005fe5e0
              ((void *)(in_stack_00000004[1] + in_stack_00000008 * 0x38),
               (void *)((in_stack_00000008 + 1) * 0x38 + in_stack_00000004[1]),
               (uVar4 - in_stack_00000008) * 0x38);
  }
  if (*in_stack_00000004 != 0) {
    puVar1 = (undefined1 *)
             crt_memory_c_realloc_FUN_00601df0
                       ((void *)in_stack_00000004[1],*in_stack_00000004 * 0x38);
    if (puVar1 != (undefined1 *)0x0) {
      uVar4 = 0;
      in_stack_00000004[1] = (uint)puVar1;
      if (in_stack_00000004[2] != 0) {
        iVar3 = 0;
        do {
          iVar2 = in_stack_00000004[3] + iVar3;
          if (in_stack_00000008 < *(uint *)(iVar2 + 4)) {
            *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) - 1;
          }
          if (in_stack_00000008 < *(uint *)(iVar2 + 8)) {
            *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) - 1;
          }
          if (in_stack_00000008 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) - 1;
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x68;
        } while (uVar4 < in_stack_00000004[2]);
      }
      puVar1 = &DAT_00000001;
    }
    return puVar1;
  }
  crt_memory_c_free_FUN_00601cd0((void *)in_stack_00000004[1]);
  in_stack_00000004[1] = 0;
  return &DAT_00000001;
}


// Assembly code:
// 005d3140: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d3140
// 005d3141: PUSH ESI
// 005d3142: PUSH EBP
// 005d3143: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d3147: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d314b: MOV EDX,dword ptr [ESI]
// 005d314d: CMP EBX,EDX
// 005d314f: JNC 0x005d31d9
//   XREF to: 005d31d9 (CONDITIONAL_JUMP)
// 005d3155: LEA ECX,[EDX + -0x1]
// 005d3158: MOV dword ptr [ESI],ECX
// 005d315a: CMP EBX,ECX
// 005d315c: JC 0x005d31df
//   XREF to: 005d31df (CONDITIONAL_JUMP)
// 005d3162: MOV EBP,dword ptr [ESI]
//   Label: LAB_005d3162
// 005d3164: TEST EBP,EBP
// 005d3166: JZ 0x005d321f
//   XREF to: 005d321f (CONDITIONAL_JUMP)
// 005d316c: LEA EAX,[EBP*0x8 + 0x0]
// 005d3173: MOV EDX,EAX
// 005d3175: SHL EAX,0x3
// 005d3178: SUB EAX,EDX
// 005d317a: PUSH EAX
// 005d317b: MOV EDX,dword ptr [ESI + 0x4]
// 005d317e: PUSH EDX
// 005d317f: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005d3184: ADD ESP,0x8
// 005d3187: TEST EAX,EAX
// 005d3189: JZ 0x005d31d5
//   XREF to: 005d31d5 (CONDITIONAL_JUMP)
// 005d318b: PUSH EDI
// 005d318c: MOV ECX,dword ptr [ESI + 0x8]
// 005d318f: XOR EDX,EDX
// 005d3191: MOV dword ptr [ESI + 0x4],EAX
// 005d3194: TEST ECX,ECX
// 005d3196: JBE 0x005d31cf
//   XREF to: 005d31cf (CONDITIONAL_JUMP)
// 005d3198: XOR ECX,ECX
// 005d319a: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_005d319a
// 005d319d: ADD EAX,ECX
// 005d319f: MOV EBP,dword ptr [EAX + 0x4]
// 005d31a2: CMP EBX,EBP
// 005d31a4: JC 0x005d3237
//   XREF to: 005d3237 (CONDITIONAL_JUMP)
// 005d31aa: MOV EBP,dword ptr [EAX + 0x8]
//   Label: LAB_005d31aa
// 005d31ad: CMP EBX,EBP
// 005d31af: JNC 0x005d31b7
//   XREF to: 005d31b7 (CONDITIONAL_JUMP)
// 005d31b1: LEA EDI,[EBP + -0x1]
// 005d31b4: MOV dword ptr [EAX + 0x8],EDI
// 005d31b7: MOV EBP,dword ptr [EAX + 0xc]
//   Label: LAB_005d31b7
// 005d31ba: CMP EBX,EBP
// 005d31bc: JNC 0x005d31c4
//   XREF to: 005d31c4 (CONDITIONAL_JUMP)
// 005d31be: LEA EDI,[EBP + -0x1]
// 005d31c1: MOV dword ptr [EAX + 0xc],EDI
// 005d31c4: INC EDX
//   Label: LAB_005d31c4
// 005d31c5: MOV EDI,dword ptr [ESI + 0x8]
// 005d31c8: ADD ECX,0x68
// 005d31cb: CMP EDX,EDI
// 005d31cd: JC 0x005d319a
//   XREF to: 005d319a (CONDITIONAL_JUMP)
// 005d31cf: MOV EAX,0x1
//   Label: LAB_005d31cf
// 005d31d4: POP EDI
// 005d31d5: POP EBP
//   Label: LAB_005d31d5
// 005d31d6: POP ESI
// 005d31d7: POP EBX
// 005d31d8: RET
// 005d31d9: XOR EAX,EAX
//   Label: LAB_005d31d9
// 005d31db: POP EBP
// 005d31dc: POP ESI
// 005d31dd: POP EBX
// 005d31de: RET
// 005d31df: MOV EAX,ECX
//   Label: LAB_005d31df
// 005d31e1: SUB EAX,EBX
// 005d31e3: SHL EAX,0x3
// 005d31e6: MOV EDX,EAX
// 005d31e8: SHL EAX,0x3
// 005d31eb: SUB EAX,EDX
// 005d31ed: PUSH EAX
// 005d31ee: LEA EAX,[EBX + 0x1]
// 005d31f1: SHL EAX,0x3
// 005d31f4: MOV EDX,EAX
// 005d31f6: SHL EAX,0x3
// 005d31f9: MOV ECX,dword ptr [ESI + 0x4]
// 005d31fc: SUB EAX,EDX
// 005d31fe: ADD EAX,ECX
// 005d3200: PUSH EAX
// 005d3201: LEA EAX,[EBX*0x8 + 0x0]
// 005d3208: MOV EDX,EAX
// 005d320a: SHL EAX,0x3
// 005d320d: SUB EAX,EDX
// 005d320f: ADD ECX,EAX
// 005d3211: PUSH ECX
// 005d3212: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005d3217: ADD ESP,0xc
// 005d321a: JMP 0x005d3162
//   XREF to: 005d3162 (UNCONDITIONAL_JUMP)
// 005d321f: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_005d321f
// 005d3222: PUSH EAX
// 005d3223: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005d3228: MOV EAX,0x1
// 005d322d: ADD ESP,0x4
// 005d3230: MOV dword ptr [ESI + 0x4],EBP
// 005d3233: POP EBP
// 005d3234: POP ESI
// 005d3235: POP EBX
// 005d3236: RET
// 005d3237: LEA EDI,[EBP + -0x1]
//   Label: LAB_005d3237
// 005d323a: MOV dword ptr [EAX + 0x4],EDI
// 005d323d: JMP 0x005d31aa
//   XREF to: 005d31aa (UNCONDITIONAL_JUMP)
