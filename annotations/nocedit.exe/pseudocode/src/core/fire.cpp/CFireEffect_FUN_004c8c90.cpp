// Name: core_fire.cpp_CFireEffect_FUN_004c8c90
// Address: 004c8c90
// Address Range: [[004c8c90, 004c8dc9]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c8c90(CFireEffect * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bbc8 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dfe7d [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062a0a3 = 0.5
//   float FLOAT_0062a0ab = 40
//   CExplosion[10] g_CFireEffectExplosions
//   undefined4 DAT_02d677b8
//   undefined4 DAT_02d677bc
//   undefined4 DAT_02d677c0
//   undefined4 DAT_02d677c4
//   undefined4 DAT_02d677c8
//   undefined4 DAT_02d677d0
//   undefined4 DAT_02d677d4
//   undefined4 DAT_02d677d8
//   undefined4 DAT_02d677dc
//   undefined4 DAT_02d677e0
//   undefined4 DAT_02d677e4

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c8c90(CFireEffect *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CExplosion *pCVar5;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  undefined4 *in_stack_00000014;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [6];
  float local_24 [5];
  
  pCVar5 = g_CFireEffectExplosions;
  iVar4 = 0;
  do {
    if ((float)DOUBLE_0062a0a3 < *(float *)(pCVar5->field0_0x0 + 0xc)) {
      if (&local_48 != local_24) {
        local_48 = *in_stack_00000008 - *(float *)pCVar5->field0_0x0;
        local_44 = in_stack_00000008[1] - *(float *)(pCVar5->field0_0x0 + 4);
        local_40 = in_stack_00000008[2] - *(float *)(pCVar5->field0_0x0 + 8);
      }
      fVar1 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
      if (fVar1 < *(float *)(pCVar5->field0_0x0 + 0x10) * (float)DOUBLE_0062a0a3 + in_stack_0000000c
         ) {
        if (in_stack_00000010 != (float *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_44 * fVar1 * FLOAT_0062a0ab;
          fVar3 = local_40 * fVar1 * FLOAT_0062a0ab;
          if (local_3c != in_stack_00000010) {
            *in_stack_00000010 = local_48 * fVar1 * FLOAT_0062a0ab;
            in_stack_00000010[1] = fVar2;
            in_stack_00000010[2] = fVar3;
          }
        }
        if (in_stack_00000014 != (undefined4 *)0x0) {
          *in_stack_00000014 = *(undefined4 *)(pCVar5->field0_0x0 + 0x14);
        }
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pCVar5 = pCVar5 + 1;
    if (9 < iVar4) {
      return 0;
    }
  } while( true );
}


// Assembly code:
// 004c8c90: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c8c90
// 004c8c91: PUSH ESI
// 004c8c92: PUSH EDI
// 004c8c93: PUSH EBP
// 004c8c94: MOV EBP,ESP
// 004c8c96: SUB ESP,0x3c
// 004c8c99: AND ESP,0xfffffff8
// 004c8c9c: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c8c9f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c8ca2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004c8ca6: MOV EDX,0x2d677b4
//   XREF to: 02d677b4 (DATA)
// 004c8cab: XOR ECX,ECX
// 004c8cad: FLD float ptr [EDX + 0xc]
//   Label: LAB_004c8cad
//   XREF to: 02d677c0 (READ)
//   XREF to: 02d677dc (READ)
// 004c8cb0: MOV ESI,EDX
// 004c8cb2: FCOMP double ptr [0x0062a0a3]
//   XREF to: 0062a0a3 (READ)
// 004c8cb8: FNSTSW AX
// 004c8cba: SAHF
// 004c8cbb: JA 0x004c8ccf
//   XREF to: 004c8ccf (CONDITIONAL_JUMP)
// 004c8cbd: INC ECX
//   Label: LAB_004c8cbd
// 004c8cbe: ADD EDX,0x1c
// 004c8cc1: CMP ECX,0xa
// 004c8cc4: JL 0x004c8cad
//   XREF to: 004c8cad (CONDITIONAL_JUMP)
// 004c8cc6: XOR EAX,EAX
// 004c8cc8: MOV ESP,EBP
// 004c8cca: POP EBP
// 004c8ccb: POP EDI
// 004c8ccc: POP ESI
// 004c8ccd: POP EBX
// 004c8cce: RET
// 004c8ccf: FLD float ptr [EBX]
//   Label: LAB_004c8ccf
// 004c8cd1: FSUB float ptr [EDX]
//   XREF to: 02d677b4 (READ)
//   XREF to: 02d677d0 (READ)
// 004c8cd3: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (WRITE)
// 004c8cd7: FLD float ptr [EBX + 0x4]
// 004c8cda: FSUB float ptr [EDX + 0x4]
//   XREF to: 02d677b8 (READ)
//   XREF to: 02d677d4 (READ)
// 004c8cdd: LEA EDI,[ESP + 0x2c]
//   XREF to: Stack[-0x24] (DATA)
// 004c8ce1: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (WRITE)
// 004c8ce5: FLD float ptr [EBX + 0x8]
// 004c8ce8: FSUB float ptr [EDX + 0x8]
//   XREF to: 02d677bc (READ)
//   XREF to: 02d677d8 (READ)
// 004c8ceb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 004c8cef: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (WRITE)
// 004c8cf3: CMP EAX,EDI
// 004c8cf5: JZ 0x004c8d0f
//   XREF to: 004c8d0f (CONDITIONAL_JUMP)
// 004c8cf7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 004c8cfb: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004c8cff: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 004c8d03: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004c8d07: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 004c8d0b: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004c8d0f: FLD float ptr [ESP + 0xc]
//   Label: LAB_004c8d0f
//   XREF to: Stack[-0x44] (READ)
// 004c8d13: FMUL ST0
// 004c8d15: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 004c8d19: FMUL ST0
// 004c8d1b: FADDP
// 004c8d1d: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (READ)
// 004c8d21: FMUL ST0
// 004c8d23: FADDP
// 004c8d25: FSQRT
// 004c8d27: FLD float ptr [ESI + 0x10]
//   XREF to: 02d677c4 (READ)
//   XREF to: 02d677e0 (READ)
// 004c8d2a: FMUL double ptr [0x0062a0a3]
//   XREF to: 0062a0a3 (READ)
// 004c8d30: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 004c8d34: FXCH
// 004c8d36: FST float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 004c8d39: FCOMPP
// 004c8d3b: FNSTSW AX
// 004c8d3d: SAHF
// 004c8d3e: JNC 0x004c8cbd
//   XREF to: 004c8cbd (CONDITIONAL_JUMP)
// 004c8d44: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c8d47: TEST EDX,EDX
// 004c8d49: JZ 0x004c8db2
//   XREF to: 004c8db2 (CONDITIONAL_JUMP)
// 004c8d4b: FLD1
// 004c8d4d: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 004c8d51: FXCH
// 004c8d53: FDIV float ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 004c8d56: FXCH
// 004c8d58: FMUL ST1
// 004c8d5a: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (READ)
// 004c8d5e: FMUL ST2
// 004c8d60: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (READ)
// 004c8d64: FMULP ST3
// 004c8d66: FXCH
// 004c8d68: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 004c8d6c: FLD float ptr [0x0062a0ab]
//   XREF to: 0062a0ab (READ)
// 004c8d72: FXCH
// 004c8d74: FMUL ST1
// 004c8d76: FXCH ST2
// 004c8d78: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (WRITE)
// 004c8d7c: FMUL ST1
// 004c8d7e: FXCH ST3
// 004c8d80: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (WRITE)
// 004c8d84: FMULP
// 004c8d86: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 004c8d8a: FXCH
// 004c8d8c: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 004c8d90: FXCH
// 004c8d92: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (WRITE)
// 004c8d96: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (WRITE)
// 004c8d9a: CMP EAX,EDX
// 004c8d9c: JZ 0x004c8db2
//   XREF to: 004c8db2 (CONDITIONAL_JUMP)
// 004c8d9e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 004c8da2: MOV dword ptr [EDX],EAX
// 004c8da4: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 004c8da8: MOV dword ptr [EDX + 0x4],EAX
// 004c8dab: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 004c8daf: MOV dword ptr [EDX + 0x8],EAX
// 004c8db2: MOV EBX,dword ptr [EBP + 0x24]
//   Label: LAB_004c8db2
//   XREF to: Stack[0x14] (READ)
// 004c8db5: TEST EBX,EBX
// 004c8db7: JZ 0x004c8dbe
//   XREF to: 004c8dbe (CONDITIONAL_JUMP)
// 004c8db9: MOV EAX,dword ptr [ESI + 0x14]
//   XREF to: 02d677c8 (READ)
//   XREF to: 02d677e4 (READ)
// 004c8dbc: MOV dword ptr [EBX],EAX
// 004c8dbe: MOV EAX,0x1
//   Label: LAB_004c8dbe
// 004c8dc3: MOV ESP,EBP
// 004c8dc5: POP EBP
// 004c8dc6: POP EDI
// 004c8dc7: POP ESI
// 004c8dc8: POP EBX
// 004c8dc9: RET
