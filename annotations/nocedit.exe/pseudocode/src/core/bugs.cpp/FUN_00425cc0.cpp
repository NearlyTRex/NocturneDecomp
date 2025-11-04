// Name: core_bugs.cpp_FUN_00425cc0
// Address: 00425cc0
// Address Range: [[00425cc0, 00425fd8]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425cc0()
// Cross-references:
//   core_bugs.cpp_FUN_004250f0 (004250f0) at 00425130 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00616df3 = 2
//   float FLOAT_00616dfb = 0.5
//   undefined4 DAT_0065b5d4
// Function calls:
//   core_bugs.cpp_FUN_004257f0
//   core_bugs.cpp_FUN_00425fe0
//   core_bugs.cpp_FUN_00426420
//   core_bugs.cpp_FUN_004272f0
//   core_bugs.cpp_FUN_00427400
//   core_bugs.cpp_FUN_004276c0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00425cc0(undefined4 param_1, undefined4 param_2)
    */

void core_bugs_cpp_FUN_00425cc0(void)

{
  CLocation *dest_position;
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  CPathMap *this_ptr;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CMatrix3x3f CStack_a4;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (*(in_stack_00000004->base_actor).vtable[1].getAllowedMeleeAttackTypes)
            (&in_stack_00000004->base_actor);
  if ((in_stack_00000004[2].model.bone_world_matrices[0x42].m[1].z != 0.0) &&
     (iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18), iVar4 != 0)) {
    fStack_70 = (in_stack_00000004->base_actor).location.position.x - *(float *)(iVar4 + 0x20);
    fStack_6c = (in_stack_00000004->base_actor).location.position.y - *(float *)(iVar4 + 0x24);
    fStack_68 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar4 + 0x28);
    if ((ABS(fStack_6c) < (float)DOUBLE_00616df3) &&
       ((ABS(fStack_70) < (float)DOUBLE_00616df3 && (ABS(fStack_68) < (float)DOUBLE_00616df3)))) {
      core_bugs_cpp_FUN_004257f0();
      core_bugs_cpp_FUN_00427400();
      iVar4 = extraout_EDX;
      if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) == 1) {
        core_bugs_cpp_FUN_00425fe0();
        return;
      }
      goto LAB_00425d86;
    }
  }
  if ((in_stack_00000004[2].model.bone_world_matrices[0x42].m[1].y != 0.0) &&
     (iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18), iVar4 != 0)) {
    this_ptr = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xbc))();
    if (this_ptr == (CPathMap *)0x0) {
      this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
    }
    dest_position = &(in_stack_00000004->base_actor).location;
    iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (this_ptr,&dest_position->position,&CStack_4c,
                       (in_stack_00000004->base_actor).field7_0x6c);
    if (iVar4 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_a4,&CStack_4c);
      CStack_7c.z = _DAT_0065b5d4 * in_stack_00000008;
      CStack_7c.x = 0.0;
      CStack_7c.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_a4,&CStack_28,&CStack_7c);
      fStack_64 = (dest_position->position).x;
      pfVar1 = &(in_stack_00000004->base_actor).location.position.y;
      fStack_60 = *pfVar1;
      pfVar2 = &(in_stack_00000004->base_actor).location.position.z;
      fStack_5c = *pfVar2;
      core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
      fStack_34 = (dest_position->position).x;
      fStack_30 = *pfVar1;
      fStack_2c = *pfVar2;
      (dest_position->position).x = fStack_64;
      (in_stack_00000004->base_actor).location.position.y = fStack_60;
      (in_stack_00000004->base_actor).location.position.z = fStack_5c;
      fStack_40 = fStack_34 - (dest_position->position).x;
      fStack_38 = fStack_2c - (in_stack_00000004->base_actor).location.position.z;
      pfVar1 = &in_stack_00000004[2].model.bone_world_matrices[0x48].m[2].z;
      fStack_1c = *pfVar1 + in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].y;
      fStack_18 = in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].w +
                  in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].z;
      fStack_58 = fStack_1c * FLOAT_00616dfb;
      fStack_14 = in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].x +
                  in_stack_00000004[2].model.bone_world_matrices[0x49].m[1].w;
      fStack_54 = fStack_18 * FLOAT_00616dfb;
      fStack_50 = fStack_14 * FLOAT_00616dfb;
      fStack_3c = fStack_54;
      if ((((*pfVar1 <= fStack_40) &&
           (in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].w <= fStack_54)) &&
          (in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].x <= fStack_38)) &&
         (((fStack_40 <= in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].y &&
           (fStack_54 <= in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].z)) &&
          (fStack_38 <= in_stack_00000004[2].model.bone_world_matrices[0x49].m[1].w)))) {
        core_bugs_cpp_FUN_004276c0();
      }
    }
  }
  core_bugs_cpp_FUN_004257f0();
  iVar4 = extraout_EDX_00;
LAB_00425d86:
  iVar3 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = iVar5 + 1;
      iVar3 = core_bugs_cpp_FUN_00426420();
      iVar4 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
    } while (iVar5 < iVar4);
  }
  core_bugs_cpp_FUN_004272f0(iVar3,iVar4);
  return;
}


// Assembly code:
// 00425cc0: PUSH EBX
//   Label: core_bugs.cpp_FUN_00425cc0
// 00425cc1: PUSH ESI
// 00425cc2: PUSH EDI
// 00425cc3: PUSH EBP
// 00425cc4: MOV EBP,ESP
// 00425cc6: SUB ESP,0x98
// 00425ccc: AND ESP,0xfffffff8
// 00425ccf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00425cd2: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00425cd5: MOV EAX,dword ptr [EBX + 0x154]
// 00425cdb: PUSH EBX
// 00425cdc: XOR EDI,EDI
// 00425cde: CALL dword ptr [EAX + 0x158]
// 00425ce4: MOV EDX,dword ptr [EBX + 0x1989c]
// 00425cea: ADD ESP,0x8
// 00425ced: TEST EDX,EDX
// 00425cef: JZ 0x00425dd0
//   XREF to: 00425dd0 (CONDITIONAL_JUMP)
// 00425cf5: MOV ECX,dword ptr [EBX + 0xbe3c]
// 00425cfb: TEST ECX,ECX
// 00425cfd: JZ 0x00425dd0
//   XREF to: 00425dd0 (CONDITIONAL_JUMP)
// 00425d03: LEA ESI,[EBX + 0x20]
// 00425d06: FLD float ptr [ESI]
// 00425d08: FSUB float ptr [ECX + 0x20]
// 00425d0b: FSTP float ptr [ESP + 0x34]
// 00425d0f: FLD float ptr [ESI + 0x4]
// 00425d12: FSUB float ptr [ECX + 0x24]
// 00425d15: FST float ptr [ESP + 0x38]
// 00425d19: FABS
// 00425d1b: FLD float ptr [ESI + 0x8]
// 00425d1e: FSUB float ptr [ECX + 0x28]
// 00425d21: FSTP float ptr [ESP + 0x3c]
// 00425d25: FCOMP double ptr [0x00616df3]
//   XREF to: 00616df3 (READ)
// 00425d2b: FNSTSW AX
// 00425d2d: SAHF
// 00425d2e: JNC 0x00425dd0
//   XREF to: 00425dd0 (CONDITIONAL_JUMP)
// 00425d34: FLD float ptr [ESP + 0x34]
// 00425d38: FABS
// 00425d3a: FCOMP double ptr [0x00616df3]
//   XREF to: 00616df3 (READ)
// 00425d40: FNSTSW AX
// 00425d42: SAHF
// 00425d43: JNC 0x00425dd0
//   XREF to: 00425dd0 (CONDITIONAL_JUMP)
// 00425d49: FLD float ptr [ESP + 0x3c]
// 00425d4d: FABS
// 00425d4f: FCOMP double ptr [0x00616df3]
//   XREF to: 00616df3 (READ)
// 00425d55: FNSTSW AX
// 00425d57: SAHF
// 00425d58: JNC 0x00425dd0
//   XREF to: 00425dd0 (CONDITIONAL_JUMP)
// 00425d5e: PUSH EBX
//   Label: LAB_00425d5e
// 00425d5f: CALL core_bugs.cpp_FUN_004257f0
//   XREF to: 004257f0 (UNCONDITIONAL_CALL)
// 00425d64: ADD ESP,0x4
// 00425d67: MOV ESI,dword ptr [EBX + 0xbe3c]
// 00425d6d: PUSH ESI
// 00425d6e: PUSH EBX
// 00425d6f: CALL core_bugs.cpp_FUN_00427400
//   XREF to: 00427400 (UNCONDITIONAL_CALL)
// 00425d74: MOV EDI,dword ptr [EBX + 0xbebc]
// 00425d7a: ADD ESP,0x8
// 00425d7d: CMP EDI,0x1
// 00425d80: JZ 0x00425fc6
//   XREF to: 00425fc6 (CONDITIONAL_JUMP)
// 00425d86: MOV EAX,dword ptr [EBX + 0xbec0]
//   Label: LAB_00425d86
// 00425d8c: XOR ESI,ESI
// 00425d8e: TEST EAX,EAX
// 00425d90: JLE 0x00425dc0
//   XREF to: 00425dc0 (CONDITIONAL_JUMP)
// 00425d92: LEA EDI,[EBX + 0xbec4]
// 00425d98: PUSH 0x0
//   Label: LAB_00425d98
// 00425d9a: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00425d9d: PUSH EDI
// 00425d9e: PUSH EBX
// 00425d9f: INC ESI
// 00425da0: CALL core_bugs.cpp_FUN_00426420
//   XREF to: 00426420 (UNCONDITIONAL_CALL)
// 00425da5: ADD EDI,0x40
// 00425da8: MOV EDX,dword ptr [EBX + 0xbec0]
// 00425dae: ADD ESP,0x10
// 00425db1: CMP ESI,EDX
// 00425db3: JL 0x00425d98
//   XREF to: 00425d98 (CONDITIONAL_JUMP)
// 00425db5: LEA EAX,[EAX]
// 00425dbb: LEA EDX,[EDX]
// 00425dbe: MOV EBX,EBX
// 00425dc0: PUSH EBX
//   Label: LAB_00425dc0
// 00425dc1: CALL core_bugs.cpp_FUN_004272f0
//   XREF to: 004272f0 (UNCONDITIONAL_CALL)
// 00425dc6: ADD ESP,0x4
// 00425dc9: MOV ESP,EBP
// 00425dcb: POP EBP
// 00425dcc: POP EDI
// 00425dcd: POP ESI
// 00425dce: POP EBX
// 00425dcf: RET
// 00425dd0: TEST EDI,EDI
//   Label: LAB_00425dd0
// 00425dd2: JNZ 0x00425d5e
//   XREF to: 00425d5e (CONDITIONAL_JUMP)
// 00425dd4: CMP dword ptr [EBX + 0x19898],0x0
// 00425ddb: JZ 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425de1: MOV EDI,dword ptr [EBX + 0xbe3c]
// 00425de7: TEST EDI,EDI
// 00425de9: JZ 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425def: PUSH EDI
// 00425df0: MOV ESI,dword ptr [EDI + 0x154]
// 00425df6: CALL dword ptr [ESI + 0xbc]
// 00425dfc: ADD ESP,0x4
// 00425dff: MOV EDI,EAX
// 00425e01: TEST EAX,EAX
// 00425e03: JNZ 0x00425e19
//   XREF to: 00425e19 (CONDITIONAL_JUMP)
// 00425e05: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00425e0b: ADD EAX,0x20
// 00425e0e: PUSH EAX
// 00425e0f: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 00425e14: ADD ESP,0x4
// 00425e17: MOV EDI,EAX
// 00425e19: MOV EAX,dword ptr [EBX + 0x6c]
//   Label: LAB_00425e19
// 00425e1c: PUSH EAX
// 00425e1d: LEA EAX,[ESP + 0x5c]
// 00425e21: PUSH EAX
// 00425e22: LEA ESI,[EBX + 0x20]
// 00425e25: PUSH ESI
// 00425e26: PUSH EDI
// 00425e27: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 00425e2c: ADD ESP,0x10
// 00425e2f: TEST EAX,EAX
// 00425e31: JZ 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425e37: LEA EAX,[ESP + 0x58]
// 00425e3b: PUSH EAX
// 00425e3c: LEA EAX,[ESP + 0x4]
// 00425e40: PUSH EAX
// 00425e41: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00425e46: ADD ESP,0x8
// 00425e49: FLD float ptr [0x0065b5d4]
//   XREF to: 0065b5d4 (READ)
// 00425e4f: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00425e52: FSTP float ptr [ESP + 0x94]
// 00425e59: MOV EAX,dword ptr [ESP + 0x94]
// 00425e60: MOV dword ptr [ESP + 0x30],EAX
// 00425e64: LEA EAX,[ESP + 0x28]
// 00425e68: PUSH EAX
// 00425e69: LEA EAX,[ESP + 0x80]
// 00425e70: PUSH EAX
// 00425e71: LEA EAX,[ESP + 0x8]
// 00425e75: XOR EDX,EDX
// 00425e77: PUSH EAX
// 00425e78: MOV dword ptr [ESP + 0x34],EDX
// 00425e7c: MOV dword ptr [ESP + 0x38],EDX
// 00425e80: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00425e85: ADD ESP,0xc
// 00425e88: MOV EAX,dword ptr [ESI]
// 00425e8a: LEA EDI,[ESI + 0x4]
// 00425e8d: MOV dword ptr [ESP + 0x40],EAX
// 00425e91: MOV EAX,dword ptr [EDI]
// 00425e93: MOV dword ptr [ESP + 0x44],EAX
// 00425e97: LEA EAX,[ESI + 0x8]
// 00425e9a: MOV dword ptr [ESP + 0x94],EAX
// 00425ea1: MOV EAX,dword ptr [EAX]
// 00425ea3: MOV dword ptr [ESP + 0x48],EAX
// 00425ea7: LEA EAX,[ESP + 0x7c]
// 00425eab: PUSH EAX
// 00425eac: PUSH EBX
// 00425ead: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00425eb2: ADD ESP,0x8
// 00425eb5: MOV EAX,dword ptr [ESI]
// 00425eb7: MOV dword ptr [ESP + 0x70],EAX
// 00425ebb: MOV EAX,dword ptr [EDI]
// 00425ebd: MOV dword ptr [ESP + 0x74],EAX
// 00425ec1: MOV EAX,dword ptr [ESP + 0x94]
// 00425ec8: MOV EAX,dword ptr [EAX]
// 00425eca: MOV dword ptr [ESP + 0x78],EAX
// 00425ece: MOV EAX,dword ptr [ESP + 0x40]
// 00425ed2: MOV dword ptr [ESI],EAX
// 00425ed4: MOV EAX,dword ptr [ESP + 0x44]
// 00425ed8: MOV dword ptr [ESI + 0x4],EAX
// 00425edb: MOV EAX,dword ptr [ESP + 0x48]
// 00425edf: MOV dword ptr [ESI + 0x8],EAX
// 00425ee2: FLD float ptr [ESP + 0x70]
// 00425ee6: FSUB float ptr [ESI]
// 00425ee8: FLD float ptr [ESP + 0x74]
// 00425eec: FXCH
// 00425eee: FSTP float ptr [ESP + 0x64]
// 00425ef2: FSUB float ptr [ESI + 0x4]
// 00425ef5: FLD float ptr [ESP + 0x78]
// 00425ef9: FXCH
// 00425efb: FSTP float ptr [ESP + 0x68]
// 00425eff: FSUB float ptr [ESI + 0x8]
// 00425f02: LEA ESI,[EBX + 0x199cc]
// 00425f08: FSTP float ptr [ESP + 0x6c]
// 00425f0c: LEA EAX,[EBX + 0x199d8]
// 00425f12: FLD float ptr [ESI]
// 00425f14: FADD float ptr [EAX]
// 00425f16: FST float ptr [ESP + 0x88]
// 00425f1d: FLD float ptr [ESI + 0x4]
// 00425f20: FADD float ptr [EAX + 0x4]
// 00425f23: FXCH
// 00425f25: FLD float ptr [0x00616dfb]
//   XREF to: 00616dfb (READ)
// 00425f2b: FXCH
// 00425f2d: FMUL ST1
// 00425f2f: FXCH ST2
// 00425f31: FST float ptr [ESP + 0x8c]
// 00425f38: FLD float ptr [ESI + 0x8]
// 00425f3b: FADD float ptr [EAX + 0x8]
// 00425f3e: FXCH
// 00425f40: FMUL ST2
// 00425f42: FXCH
// 00425f44: FST float ptr [ESP + 0x90]
// 00425f4b: FMULP ST2
// 00425f4d: FSTP float ptr [ESP + 0x50]
// 00425f51: MOV EAX,dword ptr [ESP + 0x50]
// 00425f55: FXCH
// 00425f57: FSTP float ptr [ESP + 0x4c]
// 00425f5b: MOV dword ptr [ESP + 0x68],EAX
// 00425f5f: FSTP float ptr [ESP + 0x54]
// 00425f63: FLD float ptr [ESI]
// 00425f65: FCOMP float ptr [ESP + 0x64]
// 00425f69: FNSTSW AX
// 00425f6b: SAHF
// 00425f6c: JA 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425f6e: FLD float ptr [ESI + 0x4]
// 00425f71: FCOMP float ptr [ESP + 0x50]
// 00425f75: FNSTSW AX
// 00425f77: SAHF
// 00425f78: JA 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425f7a: FLD float ptr [ESI + 0x8]
// 00425f7d: FCOMP float ptr [ESP + 0x6c]
// 00425f81: FNSTSW AX
// 00425f83: SAHF
// 00425f84: JA 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425f86: FLD float ptr [ESI + 0xc]
// 00425f89: FCOMP float ptr [ESP + 0x64]
// 00425f8d: FNSTSW AX
// 00425f8f: SAHF
// 00425f90: JC 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425f92: FLD float ptr [ESI + 0x10]
// 00425f95: FCOMP float ptr [ESP + 0x50]
// 00425f99: FNSTSW AX
// 00425f9b: SAHF
// 00425f9c: JC 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425f9e: FLD float ptr [ESI + 0x14]
// 00425fa1: FCOMP float ptr [ESP + 0x6c]
// 00425fa5: FNSTSW AX
// 00425fa7: SAHF
// 00425fa8: JC 0x00425fb8
//   XREF to: 00425fb8 (CONDITIONAL_JUMP)
// 00425faa: LEA EAX,[ESP + 0x70]
// 00425fae: PUSH EAX
// 00425faf: PUSH EBX
// 00425fb0: CALL core_bugs.cpp_FUN_004276c0
//   XREF to: 004276c0 (UNCONDITIONAL_CALL)
// 00425fb5: ADD ESP,0x8
// 00425fb8: PUSH EBX
//   Label: LAB_00425fb8
// 00425fb9: CALL core_bugs.cpp_FUN_004257f0
//   XREF to: 004257f0 (UNCONDITIONAL_CALL)
// 00425fbe: ADD ESP,0x4
// 00425fc1: JMP 0x00425d86
//   XREF to: 00425d86 (UNCONDITIONAL_JUMP)
// 00425fc6: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_00425fc6
//   XREF to: Stack[0x8] (READ)
// 00425fc9: PUSH EBX
// 00425fca: CALL core_bugs.cpp_FUN_00425fe0
//   XREF to: 00425fe0 (UNCONDITIONAL_CALL)
// 00425fcf: ADD ESP,0x8
// 00425fd2: MOV ESP,EBP
// 00425fd4: POP EBP
// 00425fd5: POP EDI
// 00425fd6: POP ESI
// 00425fd7: POP EBX
// 00425fd8: RET
