// Name: core_hero.cpp_FUN_004f2d70
// Address: 004f2d70
// Address Range: [[004f2d70, 004f2ec0]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2d70()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fdc6 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3fd9 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1253 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f85d6 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5bff [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d908e [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062ec26 = 5
//   double DOUBLE_0062ec2e = 4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CDoorClassInfo.name_hash
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_door.cpp_CDoor_getMoveType_FUN_00481070
//   core_door.cpp_FUN_0047fcf0
//   core_event.cpp_FUN_004b18e0

#include "nocturne.h"

int core_hero_cpp_FUN_004f2d70
              (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
              CDemonActor *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDoor *this_ptr;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  CVector3f CStack_20;
  int local_14;
  
  iVar6 = 0;
  local_14 = 0;
  param_5[0x179].field17_0x104 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) {
      return 0;
    }
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_14),
                                   g_CDoorClassInfo.name_hash);
    if ((this_ptr != (CDoor *)0x0) && (this_ptr->door_state == 0)) {
      fVar3 = (param_5->location).position.y - *(float *)(this_ptr->field17_0x9bc + 4);
      fVar1 = (param_5->location).position.z;
      fVar2 = *(float *)(this_ptr->field17_0x9bc + 8);
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (param_5,&CStack_20,&(this_ptr->base_actor).location.position);
      if ((0.0 < pCVar4->z) &&
         ((ABS(fVar1 - fVar2) <= (float)DOUBLE_0062ec26 &&
          (SQRT(CStack_20.x * CStack_20.x + fVar3 * fVar3) < (float)DOUBLE_0062ec2e)))) {
        iVar5 = core_event_cpp_FUN_004b18e0();
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = core_door_cpp_CDoor_getMoveType_FUN_00481070(this_ptr);
        if (iVar5 != 0) {
          if (iVar5 == 1) {
            core_door_cpp_FUN_0047fcf0();
            return unaff_EBX;
          }
          param_5[0x179].field17_0x104 = (int)this_ptr;
          return iVar5;
        }
      }
    }
    local_14 = local_14 + 4;
    iVar6 = iVar6 + 1;
  } while( true );
}


// Assembly code:
// 004f2d70: PUSH EBX
//   Label: core_hero.cpp_FUN_004f2d70
// 004f2d71: PUSH ESI
// 004f2d72: PUSH EDI
// 004f2d73: PUSH EBP
// 004f2d74: MOV EBP,ESP
// 004f2d76: SUB ESP,0x20
// 004f2d79: AND ESP,0xfffffff8
// 004f2d7c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2d7f: XOR ESI,ESI
// 004f2d81: LEA EDI,[EAX + 0x20]
// 004f2d84: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004f2d88: MOV dword ptr [EAX + 0x1fb9c],0x0
// 004f2d92: MOV EAX,[0x006810c8]
//   Label: LAB_004f2d92
//   XREF to: 006810c8 (READ)
// 004f2d97: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f2d9d: JL 0x004f2db6
//   XREF to: 004f2db6 (CONDITIONAL_JUMP)
// 004f2d9f: XOR EAX,EAX
// 004f2da1: MOV ESP,EBP
// 004f2da3: POP EBP
// 004f2da4: POP EDI
// 004f2da5: POP ESI
// 004f2da6: POP EBX
// 004f2da7: RET
// 004f2da8: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_004f2da8
//   XREF to: Stack[-0x14] (READ)
// 004f2dac: ADD EDX,0x4
// 004f2daf: INC ESI
// 004f2db0: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004f2db4: JMP 0x004f2d92
//   XREF to: 004f2d92 (UNCONDITIONAL_JUMP)
// 004f2db6: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_004f2db6
//   XREF to: Stack[-0x14] (READ)
// 004f2dba: MOV EBX,dword ptr [0x02c14d14]
//   XREF to: 02c14d14 (READ)
// 004f2dc0: ADD EAX,EDX
// 004f2dc2: PUSH EBX
// 004f2dc3: MOV ECX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
// 004f2dc9: PUSH ECX
// 004f2dca: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f2dcf: MOV EBX,EAX
// 004f2dd1: ADD ESP,0x8
// 004f2dd4: TEST EAX,EAX
// 004f2dd6: JZ 0x004f2da8
//   XREF to: 004f2da8 (CONDITIONAL_JUMP)
// 004f2dd8: CMP dword ptr [EAX + 0x2e0],0x0
// 004f2ddf: JNZ 0x004f2da8
//   XREF to: 004f2da8 (CONDITIONAL_JUMP)
// 004f2de1: LEA EAX,[EBX + 0x9bc]
// 004f2de7: FLD float ptr [EDI]
// 004f2de9: FSUB float ptr [EAX]
// 004f2deb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 004f2dee: FLD float ptr [EDI + 0x4]
// 004f2df1: FSUB float ptr [EAX + 0x4]
// 004f2df4: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 004f2df8: FLD float ptr [EDI + 0x8]
// 004f2dfb: FSUB float ptr [EAX + 0x8]
// 004f2dfe: LEA EAX,[EBX + 0x20]
// 004f2e01: PUSH EAX
// 004f2e02: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x24] (DATA)
// 004f2e06: PUSH EAX
// 004f2e07: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2e0a: PUSH EDX
// 004f2e0b: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (WRITE)
// 004f2e0f: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f2e14: FLD float ptr [EAX + 0x8]
// 004f2e17: FLDZ
// 004f2e19: ADD ESP,0xc
// 004f2e1c: FCOMPP
// 004f2e1e: FNSTSW AX
// 004f2e20: SAHF
// 004f2e21: JNC 0x004f2da8
//   XREF to: 004f2da8 (CONDITIONAL_JUMP)
// 004f2e23: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 004f2e27: FABS
// 004f2e29: FCOMP double ptr [0x0062ec26]
//   XREF to: 0062ec26 (READ)
// 004f2e2f: FNSTSW AX
// 004f2e31: SAHF
// 004f2e32: JA 0x004f2da8
//   XREF to: 004f2da8 (CONDITIONAL_JUMP)
// 004f2e38: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 004f2e3b: FMUL ST0
// 004f2e3d: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 004f2e41: FMUL ST0
// 004f2e43: FADDP
// 004f2e45: FSQRT
// 004f2e47: XOR ECX,ECX
// 004f2e49: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004f2e4d: FCOMP double ptr [0x0062ec2e]
//   XREF to: 0062ec2e (READ)
// 004f2e53: FNSTSW AX
// 004f2e55: SAHF
// 004f2e56: JNC 0x004f2da8
//   XREF to: 004f2da8 (CONDITIONAL_JUMP)
// 004f2e5c: LEA EAX,[EBX + 0x478]
// 004f2e62: PUSH EAX
// 004f2e63: CALL core_event.cpp_FUN_004b18e0
//   XREF to: 004b18e0 (UNCONDITIONAL_CALL)
// 004f2e68: ADD ESP,0x4
// 004f2e6b: TEST EAX,EAX
// 004f2e6d: JZ 0x004f2e7b
//   XREF to: 004f2e7b (CONDITIONAL_JUMP)
// 004f2e6f: MOV EAX,0x1
// 004f2e74: MOV ESP,EBP
// 004f2e76: POP EBP
// 004f2e77: POP EDI
// 004f2e78: POP ESI
// 004f2e79: POP EBX
// 004f2e7a: RET
// 004f2e7b: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004f2e7b
//   XREF to: Stack[0x4] (READ)
// 004f2e7e: PUSH EAX
// 004f2e7f: PUSH EBX
// 004f2e80: CALL core_door.cpp_CDoor_getMoveType_FUN_00481070
//   XREF to: 00481070 (UNCONDITIONAL_CALL)
// 004f2e85: ADD ESP,0x8
// 004f2e88: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f2e8c: TEST EAX,EAX
// 004f2e8e: JZ 0x004f2da8
//   XREF to: 004f2da8 (CONDITIONAL_JUMP)
// 004f2e94: CMP EAX,0x1
// 004f2e97: JNZ 0x004f2ead
//   XREF to: 004f2ead (CONDITIONAL_JUMP)
// 004f2e99: PUSH EBX
// 004f2e9a: CALL core_door.cpp_FUN_0047fcf0
//   XREF to: 0047fcf0 (UNCONDITIONAL_CALL)
// 004f2e9f: ADD ESP,0x4
// 004f2ea2: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 004f2ea6: MOV ESP,EBP
// 004f2ea8: POP EBP
// 004f2ea9: POP EDI
// 004f2eaa: POP ESI
// 004f2eab: POP EBX
// 004f2eac: RET
// 004f2ead: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004f2ead
//   XREF to: Stack[0x4] (READ)
// 004f2eb0: MOV dword ptr [EAX + 0x1fb9c],EBX
// 004f2eb6: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 004f2eba: MOV ESP,EBP
// 004f2ebc: POP EBP
// 004f2ebd: POP EDI
// 004f2ebe: POP ESI
// 004f2ebf: POP EBX
// 004f2ec0: RET
