// Name: core_werewolf.cpp_FUN_005f1e40
// Address: 005f1e40
// Address Range: [[005f1e40, 005f2003]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f1e40()
// Cross-references:
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f01e8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Chain_stretched_to_f_00657e6c
//   undefined4 DAT_00657e84
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_werewolf.cpp_FUN_005f1e40(undefined4 param_1) */

void core_werewolf_cpp_FUN_005f1e40(void)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  double dVar3;
  float fVar4;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  double local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c) != 0) &&
     (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0)) {
    local_50.x = 0.0;
    local_50.y = -0.3;
    local_50.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (&local_5c,&local_50,
               (in_stack_00000004->model).bone_transform.bone_world_matrices +
               *(int *)(in_stack_00000004[1].base_actor.create_event + 0x34));
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (&in_stack_00000004->base_actor,&local_68,
               (CVector3f *)(*(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c) + 0x20));
    if (local_68.y < (float)_DAT_00657e84) {
      local_44 = local_68.x;
      local_3c = local_68.z;
      local_40 = 0;
      core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
      return;
    }
    fVar2 = local_68.z - local_5c.z;
    local_1c = SQRT(fVar2 * fVar2 +
                    (local_68.x - local_5c.x) * (local_68.x - local_5c.x) +
                    (local_68.y - local_5c.y) * (local_68.y - local_5c.y));
    dVar3 = (double)local_1c;
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Chain stretched to %f\n");
    if ((*(float *)(in_stack_00000004[1].base_actor.create_event + 0x50) < local_1c) &&
       (fVar1 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x50),
       fVar4 = (float)((ulonglong)dVar3 >> 0x20), local_20 = fVar1 * fVar1 - fVar4 * fVar4,
       local_2c = (double)local_20, 0.0 <= local_2c)) {
      local_20 = SQRT(local_20);
      local_38 = SUB84(dVar3,0);
      local_14 = SQRT(fVar2 * fVar2 + local_38 * local_38);
      if ((0.0 < local_14) && (local_18 = local_14 - local_20, 0.0 < local_18)) {
        local_24 = local_18 / local_14;
        local_38 = local_38 * local_24;
        local_34 = local_24 * 0.0;
        local_30 = fVar2 * local_24;
        core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 005f1e40: PUSH EBX
//   Label: core_werewolf.cpp_FUN_005f1e40
// 005f1e41: PUSH ESI
// 005f1e42: PUSH EDI
// 005f1e43: PUSH EBP
// 005f1e44: MOV EBP,ESP
// 005f1e46: SUB ESP,0x64
// 005f1e49: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f1e4c: CMP dword ptr [EBX + 0xbee8],0x0
// 005f1e53: JZ 0x005f1e5e
//   XREF to: 005f1e5e (CONDITIONAL_JUMP)
// 005f1e55: CMP dword ptr [EBX + 0xbe3c],0x0
// 005f1e5c: JNZ 0x005f1e65
//   XREF to: 005f1e65 (CONDITIONAL_JUMP)
// 005f1e5e: MOV ESP,EBP
//   Label: LAB_005f1e5e
// 005f1e60: POP EBP
// 005f1e61: POP EDI
// 005f1e62: POP ESI
// 005f1e63: POP EBX
// 005f1e64: RET
// 005f1e65: MOV EDX,dword ptr [EBX + 0xbed0]
//   Label: LAB_005f1e65
// 005f1e6b: LEA EAX,[EDX*0x4 + 0x0]
// 005f1e72: SUB EAX,EDX
// 005f1e74: SHL EAX,0x4
// 005f1e77: LEA EDX,[EBX + 0xfd8]
// 005f1e7d: ADD EAX,EDX
// 005f1e7f: MOV EDI,0xbe99999a
// 005f1e84: PUSH EAX
// 005f1e85: LEA EAX,[EBP + -0x40]
//   XREF to: Stack[-0x50] (DATA)
// 005f1e88: XOR ESI,ESI
// 005f1e8a: PUSH EAX
// 005f1e8b: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 005f1e8e: MOV dword ptr [EBP + -0x40],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 005f1e91: PUSH EAX
// 005f1e92: MOV dword ptr [EBP + -0x3c],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 005f1e95: MOV dword ptr [EBP + -0x38],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 005f1e98: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005f1e9d: MOV EAX,dword ptr [EBX + 0xbee8]
// 005f1ea3: ADD ESP,0xc
// 005f1ea6: ADD EAX,0x20
// 005f1ea9: PUSH EAX
// 005f1eaa: LEA EAX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 005f1ead: PUSH EAX
// 005f1eae: PUSH EBX
// 005f1eaf: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005f1eb4: FLD float ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 005f1eb7: ADD ESP,0xc
// 005f1eba: FCOMP double ptr [0x00657e84]
//   XREF to: 00657e84 (READ)
// 005f1ec0: FNSTSW AX
// 005f1ec2: SAHF
// 005f1ec3: JC 0x005f1fdb
//   XREF to: 005f1fdb (CONDITIONAL_JUMP)
// 005f1ec9: FLD float ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 005f1ecc: FLD float ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 005f1ecf: FSUB float ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 005f1ed2: FXCH
// 005f1ed4: FSUB float ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 005f1ed7: FXCH
// 005f1ed9: FST float ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (WRITE)
// 005f1edc: FMUL float ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 005f1edf: FXCH
// 005f1ee1: FST float ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (WRITE)
// 005f1ee4: FMUL float ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 005f1ee7: FLD float ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 005f1eea: FSUB float ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 005f1eed: FXCH
// 005f1eef: FADDP ST2,ST0
// 005f1ef1: FST float ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 005f1ef4: FMUL float ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 005f1ef7: FADDP
// 005f1ef9: FSQRT
// 005f1efb: SUB ESP,0x8
// 005f1efe: FST float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f1f01: FSTP double ptr [ESP]
//   XREF to: Stack[-0x7c] (DATA)
// 005f1f04: PUSH 0x657e6c
//   XREF to: 00657e6c (DATA)
// 005f1f09: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005f1f0f: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005f1f10: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005f1f15: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005f1f18: ADD ESP,0x10
// 005f1f1b: FCOMP float ptr [EBX + 0xbeec]
// 005f1f21: FNSTSW AX
// 005f1f23: SAHF
// 005f1f24: JBE 0x005f1e5e
//   XREF to: 005f1e5e (CONDITIONAL_JUMP)
// 005f1f2a: FLD float ptr [EBX + 0xbeec]
// 005f1f30: FMUL ST0
// 005f1f32: FLD float ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 005f1f35: FMUL ST0
// 005f1f37: FSUBP
// 005f1f39: FLDZ
// 005f1f3b: FXCH
// 005f1f3d: FSTP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005f1f40: FCOMP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 005f1f43: FNSTSW AX
// 005f1f45: SAHF
// 005f1f46: JA 0x005f1e5e
//   XREF to: 005f1e5e (CONDITIONAL_JUMP)
// 005f1f4c: FLD double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 005f1f4f: FSQRT
// 005f1f51: MOV EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 005f1f54: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005f1f57: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 005f1f5a: MOV EAX,dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 005f1f5d: FMUL float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 005f1f60: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005f1f63: MOV EAX,dword ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 005f1f66: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005f1f69: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 005f1f6c: FMUL ST0
// 005f1f6e: FADDP
// 005f1f70: FSQRT
// 005f1f72: FXCH
// 005f1f74: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 005f1f77: MOV dword ptr [EBP + -0x24],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 005f1f7a: FST float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 005f1f7d: FLDZ
// 005f1f7f: FCOMPP
// 005f1f81: FNSTSW AX
// 005f1f83: SAHF
// 005f1f84: JNC 0x005f1e5e
//   XREF to: 005f1e5e (CONDITIONAL_JUMP)
// 005f1f8a: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005f1f8d: FSUB float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005f1f90: FST float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005f1f93: FLDZ
// 005f1f95: FCOMPP
// 005f1f97: FNSTSW AX
// 005f1f99: SAHF
// 005f1f9a: JNC 0x005f1e5e
//   XREF to: 005f1e5e (CONDITIONAL_JUMP)
// 005f1fa0: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005f1fa3: FDIV float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005f1fa6: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 005f1fa9: FXCH
// 005f1fab: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 005f1fae: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 005f1fb1: FLDZ
// 005f1fb3: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 005f1fb6: LEA EAX,[EBP + -0x28]
//   XREF to: Stack[-0x38] (DATA)
// 005f1fb9: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 005f1fbc: PUSH EAX
// 005f1fbd: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 005f1fc0: PUSH EBX
// 005f1fc1: FXCH ST2
// 005f1fc3: FSTP float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 005f1fc6: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005f1fc9: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 005f1fcc: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005f1fd1: ADD ESP,0x8
// 005f1fd4: MOV ESP,EBP
// 005f1fd6: POP EBP
// 005f1fd7: POP EDI
// 005f1fd8: POP ESI
// 005f1fd9: POP EBX
// 005f1fda: RET
// 005f1fdb: MOV EAX,dword ptr [EBP + -0x58]
//   Label: LAB_005f1fdb
//   XREF to: Stack[-0x68] (READ)
// 005f1fde: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005f1fe1: MOV EAX,dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 005f1fe4: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005f1fe7: MOV EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 005f1fea: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005f1fed: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 005f1ff0: PUSH EAX
// 005f1ff1: PUSH EBX
// 005f1ff2: MOV dword ptr [EBP + -0x30],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 005f1ff5: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005f1ffa: ADD ESP,0x8
// 005f1ffd: MOV ESP,EBP
// 005f1fff: POP EBP
// 005f2000: POP EDI
// 005f2001: POP ESI
// 005f2002: POP EBX
// 005f2003: RET
