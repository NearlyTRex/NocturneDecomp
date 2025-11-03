// Name: core_gabriela.cpp_FUN_004d5c60
// Address: 004d5c60
// Address Range: [[004d5c60, 004d5f63]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5c60()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4067 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062affd = 5
//   double DOUBLE_0062b005 = 3
//   double DOUBLE_0062b00d = 0.300000000000000
//   double DOUBLE_0062b015 = 0.5
//   double DOUBLE_0062b01d = 0.174532925194444
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CLadderClassInfo.name_hash
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d5c60(undefined4 param_1) */

undefined4
core_gabriela_cpp_FUN_004d5c60
          (undefined4 param_1,undefined4 param_2,CDemonActor *unaff_EBX,undefined4 param_4,
          CDemonActor *param_5)

{
  CLocation *input_world_point;
  CDemonActor *pCVar1;
  CDemonActor *this_ptr;
  CVector3f *pCVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int unaff_retaddr;
  float in_stack_ffffff78;
  float in_stack_ffffff80;
  float in_stack_ffffff84;
  float fStack_74;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f aCStack_4c [3];
  undefined1 local_24 [20];
  
  pCVar1 = param_5;
  iVar4 = 0;
  input_world_point = &param_5->location;
  local_24._8_4_ = 0.0;
  param_5[0x179].field19_0x114 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar4) {
      return 0;
    }
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_24._8_4_),
                          g_CLadderClassInfo.name_hash);
    local_24._4_4_ = this_ptr;
    if (this_ptr != (CDemonActor *)0x0) {
      local_5c = (input_world_point->position).x - (this_ptr->location).position.x;
      local_58 = (pCVar1->location).position.y - (this_ptr->location).position.y;
      local_54 = (pCVar1->location).position.z - (this_ptr->location).position.z;
      if ((ABS(local_58) <= (float)DOUBLE_0062affd) &&
         (local_58 = 0.0, SQRT(local_54 * local_54 + local_5c * local_5c) <= (float)DOUBLE_0062b005)
         ) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (param_5,(CVector3f *)&stack0xffffff74,&(this_ptr->location).position);
        if ((ABS(in_stack_ffffff78) <= (float)DOUBLE_0062b00d) &&
           (((float)DOUBLE_0062b015 <= in_stack_ffffff80 &&
            ((double)in_stack_ffffff80 <= DOUBLE_0062b005)))) {
          pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (aCStack_4c,(CVector3f *)&stack0xffffff78);
          fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar2->y);
          if (ABS(fVar3) <= (float)DOUBLE_0062b01d) {
            pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (this_ptr,(CVector3f *)auStack_68,&input_world_point->position);
            if ((CVector3f *)&stack0xffffff84 != pCVar2) {
              in_stack_ffffff84 = pCVar2->x;
              fStack_74 = pCVar2->z;
            }
            if (fStack_74 < 0.0) {
              fStack_74 = -fStack_74;
            }
            if (((ABS(in_stack_ffffff84) <= (float)DOUBLE_0062b00d) &&
                (in_stack_ffffff78 = (float)((ulonglong)(double)fStack_74 >> 0x20),
                (float)DOUBLE_0062b015 <= fStack_74)) && ((double)fStack_74 <= DOUBLE_0062b005)) {
              pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 ((CVector3f *)(local_24 + 8),(CVector3f *)&stack0xffffff84);
              param_5 = (CDemonActor *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar2->y);
              if (ABS((float)param_5) <= (float)DOUBLE_0062b01d) {
                param_5[0x179].field19_0x114 = (int)fVar3;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          ((CMotionController *)(param_5 + 1));
                param_5[0x8d].create_event[0x48] = '\0';
                param_5[0x8d].create_event[0x49] = '\0';
                param_5[0x8d].create_event[0x4a] = '\0';
                param_5[0x8d].create_event[0x4b] = '\0';
                auStack_68._4_4_ = 0.0;
                local_60 = 0.0;
                local_5c = 2.0;
                if (unaff_retaddr != 0) {
                  local_5c = -2.0;
                }
                pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   (unaff_EBX,aCStack_4c,(CVector3f *)(auStack_68 + 4));
                (param_5->location).position.x = pCVar2->x;
                (param_5->location).position.y = pCVar2->y;
                (param_5->location).position.z = pCVar2->z;
                local_24._0_4_ = *(float *)(unaff_retaddr + 0x20) - (param_5->location).position.x;
                local_24._4_4_ = *(float *)(unaff_retaddr + 0x24) - (param_5->location).position.y;
                local_24._8_4_ = *(float *)(unaff_retaddr + 0x28) - (param_5->location).position.z;
                pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                   ((CVector3f *)(local_24 + 0xc),(CVector3f *)local_24);
                (param_5->orient).bank = pCVar2->y;
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(param_5);
                return 1;
              }
            }
          }
        }
      }
    }
    local_24._8_4_ = local_24._8_4_ + 4;
    iVar4 = iVar4 + 1;
  } while( true );
}


// Assembly code:
// 004d5c60: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d5c60
// 004d5c61: PUSH ESI
// 004d5c62: PUSH EDI
// 004d5c63: PUSH EBP
// 004d5c64: MOV EBP,ESP
// 004d5c66: SUB ESP,0x8c
// 004d5c6c: AND ESP,0xfffffff8
// 004d5c6f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d5c72: XOR EDI,EDI
// 004d5c74: LEA ESI,[EAX + 0x20]
// 004d5c77: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004d5c7e: MOV dword ptr [EAX + 0x1fbac],0x0
// 004d5c88: MOV EAX,[0x006810c8]
//   Label: LAB_004d5c88
//   XREF to: 006810c8 (READ)
// 004d5c8d: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004d5c93: JL 0x004d5cb2
//   XREF to: 004d5cb2 (CONDITIONAL_JUMP)
// 004d5c95: XOR EAX,EAX
// 004d5c97: MOV ESP,EBP
// 004d5c99: POP EBP
// 004d5c9a: POP EDI
// 004d5c9b: POP ESI
// 004d5c9c: POP EBX
// 004d5c9d: RET
// 004d5c9e: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_004d5c9e
//   XREF to: Stack[-0x1c] (READ)
// 004d5ca5: ADD EAX,0x4
// 004d5ca8: INC EDI
// 004d5ca9: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d5cb0: JMP 0x004d5c88
//   XREF to: 004d5c88 (UNCONDITIONAL_JUMP)
// 004d5cb2: MOV EBX,dword ptr [ESP + 0x84]
//   Label: LAB_004d5cb2
//   XREF to: Stack[-0x1c] (READ)
// 004d5cb9: MOV EDX,dword ptr [0x02dcd810]
//   XREF to: 02dcd810 (READ)
// 004d5cbf: ADD EAX,EBX
// 004d5cc1: PUSH EDX
// 004d5cc2: MOV EAX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
// 004d5cc8: PUSH EAX
// 004d5cc9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d5cce: ADD ESP,0x8
// 004d5cd1: MOV EBX,EAX
// 004d5cd3: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004d5cd7: TEST EAX,EAX
// 004d5cd9: JZ 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5cdb: LEA EDX,[EAX + 0x20]
// 004d5cde: FLD float ptr [ESI]
// 004d5ce0: FSUB float ptr [EDX]
// 004d5ce2: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (WRITE)
// 004d5ce6: FLD float ptr [ESI + 0x4]
// 004d5ce9: FSUB float ptr [EDX + 0x4]
// 004d5cec: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (WRITE)
// 004d5cf0: FABS
// 004d5cf2: FLD float ptr [ESI + 0x8]
// 004d5cf5: FSUB float ptr [EDX + 0x8]
// 004d5cf8: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (WRITE)
// 004d5cfc: FCOMP double ptr [0x0062affd]
//   XREF to: 0062affd (READ)
// 004d5d02: FNSTSW AX
// 004d5d04: SAHF
// 004d5d05: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5d07: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (READ)
// 004d5d0b: FMUL ST0
// 004d5d0d: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 004d5d11: FMUL ST0
// 004d5d13: FADDP
// 004d5d15: FSQRT
// 004d5d17: XOR ECX,ECX
// 004d5d19: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 004d5d1d: FCOMP double ptr [0x0062b005]
//   XREF to: 0062b005 (READ)
// 004d5d23: FNSTSW AX
// 004d5d25: SAHF
// 004d5d26: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5d2c: PUSH EDX
// 004d5d2d: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x90] (DATA)
// 004d5d31: PUSH EAX
// 004d5d32: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d5d35: PUSH EAX
// 004d5d36: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d5d3b: ADD ESP,0xc
// 004d5d3e: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (READ)
// 004d5d42: FABS
// 004d5d44: FCOMP double ptr [0x0062b00d]
//   XREF to: 0062b00d (READ)
// 004d5d4a: FNSTSW AX
// 004d5d4c: SAHF
// 004d5d4d: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5d53: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x88] (READ)
// 004d5d57: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (WRITE)
// 004d5d5b: FCOMP double ptr [0x0062b015]
//   XREF to: 0062b015 (READ)
// 004d5d61: FNSTSW AX
// 004d5d63: SAHF
// 004d5d64: JC 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5d6a: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x98] (READ)
// 004d5d6e: FCOMP double ptr [0x0062b005]
//   XREF to: 0062b005 (READ)
// 004d5d74: FNSTSW AX
// 004d5d76: SAHF
// 004d5d77: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5d7d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x90] (DATA)
// 004d5d81: PUSH EAX
// 004d5d82: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x54] (DATA)
// 004d5d86: PUSH EAX
// 004d5d87: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d5d8c: ADD ESP,0x8
// 004d5d8f: PUSH dword ptr [EAX + 0x4]
// 004d5d92: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d5d97: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d5d9e: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x18] (READ)
// 004d5da5: FABS
// 004d5da7: ADD ESP,0x4
// 004d5daa: FCOMP double ptr [0x0062b01d]
//   XREF to: 0062b01d (READ)
// 004d5db0: FNSTSW AX
// 004d5db2: SAHF
// 004d5db3: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5db9: PUSH ESI
// 004d5dba: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x78] (DATA)
// 004d5dbe: PUSH EAX
// 004d5dbf: XOR EDX,EDX
// 004d5dc1: PUSH EBX
// 004d5dc2: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004d5dc9: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d5dce: MOV EDX,EAX
// 004d5dd0: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x90] (DATA)
// 004d5dd4: ADD ESP,0xc
// 004d5dd7: CMP EAX,EDX
// 004d5dd9: JZ 0x004d5def
//   XREF to: 004d5def (CONDITIONAL_JUMP)
// 004d5ddb: MOV EAX,dword ptr [EDX]
// 004d5ddd: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004d5de1: MOV EAX,dword ptr [EDX + 0x4]
// 004d5de4: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 004d5de8: MOV EAX,dword ptr [EDX + 0x8]
// 004d5deb: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 004d5def: FLD float ptr [ESP + 0x18]
//   Label: LAB_004d5def
//   XREF to: Stack[-0x88] (READ)
// 004d5df3: FLDZ
// 004d5df5: FCOMPP
// 004d5df7: FNSTSW AX
// 004d5df9: SAHF
// 004d5dfa: JBE 0x004d5e13
//   XREF to: 004d5e13 (CONDITIONAL_JUMP)
// 004d5dfc: MOV AH,byte ptr [ESP + 0x1b]
//   XREF to: Stack[-0x85] (READ)
// 004d5e00: MOV ECX,0x1
// 004d5e05: XOR AH,0x80
// 004d5e08: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004d5e0f: MOV byte ptr [ESP + 0x1b],AH
//   XREF to: Stack[-0x85] (WRITE)
// 004d5e13: FLD float ptr [ESP + 0x10]
//   Label: LAB_004d5e13
//   XREF to: Stack[-0x90] (READ)
// 004d5e17: FABS
// 004d5e19: FCOMP double ptr [0x0062b00d]
//   XREF to: 0062b00d (READ)
// 004d5e1f: FNSTSW AX
// 004d5e21: SAHF
// 004d5e22: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5e28: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x88] (READ)
// 004d5e2c: FST double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 004d5e2f: FCOMP double ptr [0x0062b015]
//   XREF to: 0062b015 (READ)
// 004d5e35: FNSTSW AX
// 004d5e37: SAHF
// 004d5e38: JC 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5e3e: FLD double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 004d5e41: FCOMP double ptr [0x0062b005]
//   XREF to: 0062b005 (READ)
// 004d5e47: FNSTSW AX
// 004d5e49: SAHF
// 004d5e4a: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5e50: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x90] (DATA)
// 004d5e54: PUSH EAX
// 004d5e55: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x30] (DATA)
// 004d5e59: PUSH EAX
// 004d5e5a: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d5e5f: ADD ESP,0x8
// 004d5e62: PUSH dword ptr [EAX + 0x4]
// 004d5e65: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d5e6a: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d5e71: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x18] (READ)
// 004d5e78: FABS
// 004d5e7a: ADD ESP,0x4
// 004d5e7d: FCOMP double ptr [0x0062b01d]
//   XREF to: 0062b01d (READ)
// 004d5e83: FNSTSW AX
// 004d5e85: SAHF
// 004d5e86: JA 0x004d5c9e
//   XREF to: 004d5c9e (CONDITIONAL_JUMP)
// 004d5e8c: PUSH 0x1
// 004d5e8e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d5e91: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x24] (READ)
// 004d5e98: PUSH 0x16
// 004d5e9a: MOV dword ptr [EDX + 0x1fbac],EAX
// 004d5ea0: LEA EAX,[EDX + 0x158]
// 004d5ea6: PUSH EAX
// 004d5ea7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d5eac: ADD ESP,0xc
// 004d5eaf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d5eb2: MOV EDI,0x40000000
// 004d5eb7: XOR EBX,EBX
// 004d5eb9: MOV dword ptr [EAX + 0xbe38],0x0
// 004d5ec3: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 004d5eca: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x84] (WRITE)
// 004d5ece: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x80] (WRITE)
// 004d5ed2: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 004d5ed6: TEST EAX,EAX
// 004d5ed8: JZ 0x004d5ee2
//   XREF to: 004d5ee2 (CONDITIONAL_JUMP)
// 004d5eda: MOV dword ptr [ESP + 0x24],0xc0000000
//   XREF to: Stack[-0x7c] (WRITE)
// 004d5ee2: LEA EAX,[ESP + 0x1c]
//   Label: LAB_004d5ee2
//   XREF to: Stack[-0x84] (DATA)
// 004d5ee6: PUSH EAX
// 004d5ee7: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x6c] (DATA)
// 004d5eeb: PUSH EAX
// 004d5eec: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x24] (READ)
// 004d5ef3: PUSH ECX
// 004d5ef4: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d5ef9: ADD ESP,0xc
// 004d5efc: MOV EDX,EAX
// 004d5efe: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d5f01: MOV ECX,dword ptr [EDX]
// 004d5f03: MOV dword ptr [EAX + 0x20],ECX
// 004d5f06: MOV ECX,dword ptr [EDX + 0x4]
// 004d5f09: MOV dword ptr [EAX + 0x24],ECX
// 004d5f0c: FLD float ptr [EDX + 0x8]
// 004d5f0f: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 004d5f13: FSTP float ptr [EAX + 0x28]
// 004d5f16: FLD float ptr [EDX + 0x20]
// 004d5f19: FSUB float ptr [EAX + 0x20]
// 004d5f1c: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x48] (WRITE)
// 004d5f20: FLD float ptr [EDX + 0x24]
// 004d5f23: FSUB float ptr [EAX + 0x24]
// 004d5f26: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x44] (WRITE)
// 004d5f2a: FLD float ptr [EDX + 0x28]
// 004d5f2d: FSUB float ptr [EAX + 0x28]
// 004d5f30: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x48] (DATA)
// 004d5f34: PUSH EAX
// 004d5f35: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x3c] (DATA)
// 004d5f39: PUSH EAX
// 004d5f3a: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x40] (WRITE)
// 004d5f3e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d5f43: ADD ESP,0x8
// 004d5f46: FLD float ptr [EAX + 0x4]
// 004d5f49: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d5f4c: PUSH EAX
// 004d5f4d: FSTP float ptr [EAX + 0x34]
// 004d5f50: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004d5f55: MOV EAX,0x1
// 004d5f5a: ADD ESP,0x4
// 004d5f5d: MOV ESP,EBP
// 004d5f5f: POP EBP
// 004d5f60: POP EDI
// 004d5f61: POP ESI
// 004d5f62: POP EBX
// 004d5f63: RET
