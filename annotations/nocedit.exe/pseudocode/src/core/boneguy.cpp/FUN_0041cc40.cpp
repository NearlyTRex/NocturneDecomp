// Name: core_boneguy.cpp_FUN_0041cc40
// Address: 0041cc40
// Address Range: [[0041cc40, 0041ccd1] [0041ccf1, 0041d170]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041cc40()
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c8fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_can_t_pick_up_s_sombod_00616175
//   TerminatedCString s_s_can_t_pick_up_s_giving_006161a7
//   TerminatedCString s_s_beginning_to_pickup_s_006161cb
//   TerminatedCString s_CBodyPart_006161e6
//   TerminatedCString s_s_is_going_to_try_to_pic_006161f0
//   double DOUBLE_00616215 = 0.333333333333333
//   double DOUBLE_0061621d = 5
//   double DOUBLE_00616225 = 0.400000000000000
//   double DOUBLE_0061622d = 2
//   double DOUBLE_00616235 = 6
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_bodypart.cpp_FUN_0041b4e0
//   core_bodypart.cpp_FUN_0041b540
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041cc40(undefined4 param_1, undefined4
   param_2) */

undefined4 core_boneguy_cpp_FUN_0041cc40(void)

{
  CDemonActor *pCVar1;
  undefined4 uVar2;
  float fVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CBoundingBox3D *pCVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  undefined4 auStack_c0 [8];
  undefined1 auStack_a0 [20];
  float fStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  CVector3f aCStack_70 [2];
  CVector3f CStack_58;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  int local_20;
  float local_18;
  
  fVar3 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = fVar3;
  if (0.0 < fVar3) {
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) =
         *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) + 1;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = local_18;
  }
  if (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) <= 0.0) {
      iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
      if (iVar8 != 0) {
        iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x8c))();
        if (iVar8 != 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n",in_stack_00000004,
                     *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base_actor).create_event[0x2c] = '\0';
          (pCVar4->base_actor).create_event[0x2d] = '\0';
          (pCVar4->base_actor).create_event[0x2e] = '\0';
          (pCVar4->base_actor).create_event[0x2f] = '\0';
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base_actor).create_event[0x28] = '\0';
          (pCVar4->base_actor).create_event[0x29] = '\0';
          (pCVar4->base_actor).create_event[0x2a] = '\0';
          (pCVar4->base_actor).create_event[0x2b] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller);
          return 0;
        }
        iVar8 = -1;
        if (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) < 0.0) {
          iVar6 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c
                                                ) + 0x154) + 0x7c))();
          if (iVar6 == 3) {
            pCVar1 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x2c);
            (*pCVar1->vtable->getBoundingBox)(pCVar1,(CBoundingBox3D *)(auStack_a0 + 4));
            uStack_30 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            aCStack_70[0].z = fStack_8c + (float)DOUBLE_00616225;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar1,&CStack_58,aCStack_70);
            uStack_78 = 0;
            uStack_74 = 0;
            uStack_7c = 0x3fc00000;
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
          }
        }
        if (-1 < iVar8) {
          if (iVar8 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s beginning to pickup %s\n",in_stack_00000004,
                     *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n",in_stack_00000004,
                   *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).create_event[0x2c] = '\0';
        (pCVar4->base_actor).create_event[0x2d] = '\0';
        (pCVar4->base_actor).create_event[0x2e] = '\0';
        (pCVar4->base_actor).create_event[0x2f] = '\0';
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).create_event[0x28] = '\0';
        (pCVar4->base_actor).create_event[0x29] = '\0';
        (pCVar4->base_actor).create_event[0x2a] = -0x60;
        (pCVar4->base_actor).create_event[0x2b] = 'A';
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller);
        return 0;
      }
      iVar8 = 0;
      local_2c = 0.0;
      local_24 = 0.0;
      local_20 = 0;
      while( true ) {
        if ((int)g_CDemonSetPtr->actor_list_ptr <= (int)local_24) break;
        pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
        pCVar5 = (*pCVar1->vtable->getCarrier)(pCVar1);
        if (pCVar5 == (CDemonActor *)0x0) {
          iVar6 = (*pCVar1->vtable->canPickup)(pCVar1,&in_stack_00000004->base_actor);
          if (iVar6 == 3) {
            pCVar7 = (*pCVar1->vtable->getBoundingBox)(pCVar1,(CBoundingBox3D *)auStack_a0);
            CStack_58.z = (pCVar7->max).x - (pCVar7->min).x;
            fStack_4c = (pCVar7->max).y - (pCVar7->min).y;
            fStack_48 = (pCVar7->max).z - (pCVar7->min).z;
            if ((((CStack_58.z < 1.0) && (fStack_4c < 1.0)) && ((float)DOUBLE_0061622d < fStack_48))
               && ((double)fStack_48 < DOUBLE_00616235)) {
              iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,"CBodyPart");
              if (iVar6 == 0) {
                local_2c = (pCVar1->location).position.x -
                           (in_stack_00000004->base_actor).location.position.x;
                fStack_28 = (pCVar1->location).position.y -
                            (in_stack_00000004->base_actor).location.position.y;
                fStack_28 = fStack_28 * fStack_28;
                local_24 = (pCVar1->location).position.z -
                           (in_stack_00000004->base_actor).location.position.z;
                fStack_28 = fStack_28 * fStack_28;
                fVar3 = SQRT(local_24 * local_24 + local_2c * local_2c + fStack_28 * fStack_28);
                if (((float)DOUBLE_0061621d <= fVar3) && ((int)fVar3 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_c0 + iVar8) = pCVar1;
                  local_18 = (float)((int)local_18 + 1);
                  iVar8 = iVar8 + 4;
                  if (0x27 < iVar8) break;
                }
              }
            }
          }
        }
        local_24 = (float)((int)local_24 + 1);
        local_20 = local_20 + 4;
      }
      if (0 < (int)local_2c) {
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,(int)local_2c + -1);
        uVar2 = auStack_c0[iVar8 + -5];
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).create_event[0x28] = '\0';
        (pCVar4->base_actor).create_event[0x29] = '\0';
        (pCVar4->base_actor).create_event[0x2a] = ' ';
        (pCVar4->base_actor).create_event[0x2b] = -0x3e;
        iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
        *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x2c) = uVar2;
        *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) = iVar8 + 1;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s is going to try to pick up %s\n",in_stack_00000004,
                   *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
        return 1;
      }
    }
    else {
      in_stack_00000008 =
           *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) - in_stack_00000008;
      *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = in_stack_00000008;
      if (in_stack_00000008 < 0.0) {
        in_stack_00000004 = in_stack_00000004 + 1;
        (in_stack_00000004->base_actor).create_event[0x28] = '\0';
        (in_stack_00000004->base_actor).create_event[0x29] = '\0';
        (in_stack_00000004->base_actor).create_event[0x2a] = '\0';
        (in_stack_00000004->base_actor).create_event[0x2b] = '\0';
      }
    }
  }
  return 0;
}


// Assembly code:
// 0041cc40: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041cc40
// 0041cc41: PUSH ESI
// 0041cc42: PUSH EDI
// 0041cc43: PUSH EBP
// 0041cc44: MOV EBP,ESP
// 0041cc46: SUB ESP,0xcc
// 0041cc4c: AND ESP,0xfffffff8
// 0041cc4f: MOV EAX,dword ptr [EBP + 0x14]
// 0041cc52: FLD float ptr [EAX + 0xbec0]
// 0041cc58: FSUB float ptr [EBP + 0x18]
// 0041cc5b: FST float ptr [EAX + 0xbec0]
// 0041cc61: FLDZ
// 0041cc63: FCOMPP
// 0041cc65: FNSTSW AX
// 0041cc67: SAHF
// 0041cc68: JC 0x0041ccb3
//   XREF to: 0041ccb3 (CONDITIONAL_JUMP)
// 0041cc6a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0041cc6a
// 0041cc6d: MOV ECX,dword ptr [EAX + 0x24f8]
// 0041cc73: TEST ECX,ECX
// 0041cc75: JNZ 0x0041ccaa
//   XREF to: 0041ccaa (CONDITIONAL_JUMP)
// 0041cc77: FLD float ptr [EAX + 0xbec4]
// 0041cc7d: FLDZ
// 0041cc7f: FCOMPP
// 0041cc81: FNSTSW AX
// 0041cc83: SAHF
// 0041cc84: JNC 0x0041ccf1
//   XREF to: 0041ccf1 (CONDITIONAL_JUMP)
// 0041cc86: MOV EAX,dword ptr [EBP + 0x14]
// 0041cc89: FLD float ptr [EAX + 0xbec4]
// 0041cc8f: FSUB float ptr [EBP + 0x18]
// 0041cc92: FST float ptr [EAX + 0xbec4]
// 0041cc98: FLDZ
// 0041cc9a: FCOMPP
// 0041cc9c: FNSTSW AX
// 0041cc9e: SAHF
// 0041cc9f: JBE 0x0041ccaa
//   XREF to: 0041ccaa (CONDITIONAL_JUMP)
// 0041cca1: MOV EAX,dword ptr [EBP + 0x14]
// 0041cca4: MOV dword ptr [EAX + 0xbec4],ECX
// 0041ccaa: XOR EAX,EAX
//   Label: LAB_0041ccaa
// 0041ccac: MOV ESP,EBP
// 0041ccae: POP EBP
// 0041ccaf: POP EDI
// 0041ccb0: POP ESI
// 0041ccb1: POP EBX
// 0041ccb2: RET
// 0041ccb3: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0041ccb3
// 0041ccb6: MOV EDX,dword ptr [EAX + 0xbebc]
// 0041ccbc: PUSH 0x41200000
// 0041ccc1: INC EDX
// 0041ccc2: PUSH 0x40a00000
// 0041ccc7: MOV dword ptr [EAX + 0xbebc],EDX
// 0041cccd: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041ccf1: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0041ccf1
// 0041ccf4: MOV EDI,dword ptr [EBP + 0x14]
// 0041ccf7: MOV EBX,dword ptr [EAX + 0xbec8]
// 0041ccfd: ADD EDI,0x20
// 0041cd00: TEST EBX,EBX
// 0041cd02: JNZ 0x0041cd7a
//   XREF to: 0041cd7a (CONDITIONAL_JUMP)
// 0041cd04: MOV dword ptr [ESP + 0xb4],ECX
// 0041cd0b: MOV dword ptr [ESP + 0xbc],ECX
// 0041cd12: MOV dword ptr [ESP + 0xc0],ECX
// 0041cd19: XOR ESI,ESI
// 0041cd1b: MOV EAX,[0x006810c8]
//   Label: LAB_0041cd1b
//   XREF to: 006810c8 (READ)
// 0041cd20: MOV EDX,dword ptr [ESP + 0xbc]
// 0041cd27: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0041cd2d: JGE 0x0041d105
//   XREF to: 0041d105 (CONDITIONAL_JUMP)
// 0041cd33: ADD EAX,dword ptr [ESP + 0xc0]
// 0041cd3a: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 0041cd40: PUSH EBX
// 0041cd41: MOV EAX,dword ptr [EBX + 0x154]
// 0041cd47: CALL dword ptr [EAX + 0x8c]
// 0041cd4d: ADD ESP,0x4
// 0041cd50: TEST EAX,EAX
// 0041cd52: JZ 0x0041cfa5
//   XREF to: 0041cfa5 (CONDITIONAL_JUMP)
// 0041cd58: MOV EDX,dword ptr [ESP + 0xbc]
//   Label: LAB_0041cd58
// 0041cd5f: MOV EAX,dword ptr [ESP + 0xc0]
// 0041cd66: INC EDX
// 0041cd67: ADD EAX,0x4
// 0041cd6a: MOV dword ptr [ESP + 0xbc],EDX
// 0041cd71: MOV dword ptr [ESP + 0xc0],EAX
// 0041cd78: JMP 0x0041cd1b
//   XREF to: 0041cd1b (UNCONDITIONAL_JUMP)
// 0041cd7a: PUSH EBX
//   Label: LAB_0041cd7a
// 0041cd7b: MOV EDX,dword ptr [EBX + 0x154]
// 0041cd81: CALL dword ptr [EDX + 0x8c]
// 0041cd87: ADD ESP,0x4
// 0041cd8a: TEST EAX,EAX
// 0041cd8c: JNZ 0x0041ced1
//   XREF to: 0041ced1 (CONDITIONAL_JUMP)
// 0041cd92: MOV EAX,dword ptr [EBP + 0x14]
// 0041cd95: MOV EAX,dword ptr [EAX + 0xbec8]
// 0041cd9b: FLD float ptr [EDI]
// 0041cd9d: FSUB float ptr [EAX + 0x20]
// 0041cda0: FMUL ST0
// 0041cda2: FLD float ptr [EDI + 0x8]
// 0041cda5: FSUB float ptr [EAX + 0x28]
// 0041cda8: FMUL ST0
// 0041cdaa: FADDP
// 0041cdac: FSQRT
// 0041cdae: FMUL double ptr [0x00616215]
//   XREF to: 00616215 (READ)
// 0041cdb4: FSUBR double ptr [0x0061621d]
//   XREF to: 0061621d (READ)
// 0041cdba: FLD1
// 0041cdbc: FCOMPP
// 0041cdbe: FNSTSW AX
// 0041cdc0: SAHF
// 0041cdc1: MOV EAX,dword ptr [EBP + 0x14]
// 0041cdc4: MOV EBX,0xffffffff
// 0041cdc9: FLD float ptr [EAX + 0xbec4]
// 0041cdcf: FLDZ
// 0041cdd1: FCOMPP
// 0041cdd3: FNSTSW AX
// 0041cdd5: SAHF
// 0041cdd6: JBE 0x0041ceb2
//   XREF to: 0041ceb2 (CONDITIONAL_JUMP)
// 0041cddc: MOV ECX,dword ptr [EBP + 0x14]
// 0041cddf: MOV EAX,dword ptr [EBP + 0x14]
// 0041cde2: PUSH ECX
// 0041cde3: MOV EAX,dword ptr [EAX + 0xbec8]
// 0041cde9: PUSH EAX
// 0041cdea: MOV EDX,dword ptr [EAX + 0x154]
// 0041cdf0: CALL dword ptr [EDX + 0x7c]
// 0041cdf3: ADD ESP,0x8
// 0041cdf6: CMP EAX,0x3
// 0041cdf9: JNZ 0x0041ceb2
//   XREF to: 0041ceb2 (CONDITIONAL_JUMP)
// 0041cdff: LEA EDX,[ESP + 0x4c]
// 0041ce03: MOV EBX,dword ptr [EBP + 0x14]
// 0041ce06: PUSH EDX
// 0041ce07: MOV EBX,dword ptr [EBX + 0xbec8]
// 0041ce0d: PUSH EBX
// 0041ce0e: MOV EAX,dword ptr [EBX + 0x154]
// 0041ce14: CALL dword ptr [EAX + 0x14]
// 0041ce17: ADD ESP,0x8
// 0041ce1a: LEA EAX,[ESP + 0xb0]
// 0041ce21: PUSH EAX
// 0041ce22: LEA EAX,[ESP + 0x74]
// 0041ce26: PUSH EAX
// 0041ce27: LEA EAX,[ESP + 0x60]
// 0041ce2b: PUSH EAX
// 0041ce2c: LEA EAX,[ESP + 0xa0]
// 0041ce33: PUSH EAX
// 0041ce34: LEA EAX,[ESP + 0x5c]
// 0041ce38: MOV ESI,0x3f000000
// 0041ce3d: PUSH EAX
// 0041ce3e: MOV dword ptr [ESP + 0xc4],ESI
// 0041ce45: CALL core_bodypart.cpp_FUN_0041b540
//   XREF to: 0041b540 (UNCONDITIONAL_CALL)
// 0041ce4a: ADD ESP,0xc
// 0041ce4d: PUSH EAX
// 0041ce4e: CALL core_bodypart.cpp_FUN_0041b4e0
//   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)
// 0041ce53: ADD ESP,0xc
// 0041ce56: LEA EAX,[ESP + 0x70]
// 0041ce5a: PUSH EAX
// 0041ce5b: LEA EAX,[ESP + 0x8c]
// 0041ce62: FLD float ptr [ESP + 0x58]
// 0041ce66: PUSH EAX
// 0041ce67: FADD double ptr [0x00616225]
//   XREF to: 00616225 (READ)
// 0041ce6d: PUSH EBX
// 0041ce6e: FSTP float ptr [ESP + 0x84]
// 0041ce75: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041ce7a: ADD ESP,0xc
// 0041ce7d: XOR EAX,EAX
// 0041ce7f: PUSH 0x0
// 0041ce81: MOV dword ptr [ESP + 0x6c],EAX
// 0041ce85: MOV dword ptr [ESP + 0x70],EAX
// 0041ce89: LEA EAX,[ESP + 0x68]
// 0041ce8d: PUSH 0x0
// 0041ce8f: PUSH EAX
// 0041ce90: XOR EDX,EDX
// 0041ce92: PUSH EDX
// 0041ce93: LEA EAX,[ESP + 0x98]
// 0041ce9a: PUSH EAX
// 0041ce9b: MOV ECX,dword ptr [EBP + 0x14]
// 0041ce9e: MOV EDI,0x3fc00000
// 0041cea3: PUSH ECX
// 0041cea4: MOV dword ptr [ESP + 0x7c],EDI
// 0041cea8: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0041cead: ADD ESP,0x18
// 0041ceb0: MOV EBX,EAX
// 0041ceb2: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_0041ceb2
// 0041ceb5: ADD ESI,0x158
// 0041cebb: TEST EBX,EBX
// 0041cebd: JL 0x0041cf22
//   XREF to: 0041cf22 (CONDITIONAL_JUMP)
// 0041cebf: JG 0x0041cf6e
//   XREF to: 0041cf6e (CONDITIONAL_JUMP)
// 0041cec5: MOV EAX,0x1
// 0041ceca: MOV ESP,EBP
// 0041cecc: POP EBP
// 0041cecd: POP EDI
// 0041cece: POP ESI
// 0041cecf: POP EBX
// 0041ced0: RET
// 0041ced1: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0041ced1
// 0041ced4: MOV ESI,dword ptr [EAX + 0xbec8]
// 0041ceda: PUSH ESI
// 0041cedb: PUSH EAX
// 0041cedc: PUSH 0x616175
//   XREF to: 00616175 (DATA)
// 0041cee1: MOV EDI,EAX
// 0041cee3: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0041cee8: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 0041cee9: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0041ceee: ADD ESP,0x10
// 0041cef1: MOV EAX,EDI
// 0041cef3: PUSH 0x1
// 0041cef5: ADD EAX,0x158
// 0041cefa: PUSH 0x1
// 0041cefc: MOV dword ptr [EAX + 0xbd70],0x0
// 0041cf06: PUSH EAX
// 0041cf07: MOV dword ptr [EAX + 0xbd6c],0x0
// 0041cf11: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041cf16: ADD ESP,0xc
// 0041cf19: XOR EAX,EAX
// 0041cf1b: MOV ESP,EBP
// 0041cf1d: POP EBP
// 0041cf1e: POP EDI
// 0041cf1f: POP ESI
// 0041cf20: POP EBX
// 0041cf21: RET
// 0041cf22: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0041cf22
// 0041cf25: MOV EDX,dword ptr [EAX + 0xbec8]
// 0041cf2b: PUSH EDX
// 0041cf2c: PUSH EAX
// 0041cf2d: PUSH 0x6161a7
//   XREF to: 006161a7 (DATA)
// 0041cf32: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
//   XREF to: 0083b1a4 (PARAM)
// 0041cf38: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 0041cf39: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0041cf3e: ADD ESP,0x10
// 0041cf41: PUSH 0x1
// 0041cf43: MOV EAX,dword ptr [EBP + 0x14]
// 0041cf46: PUSH 0x1
// 0041cf48: MOV dword ptr [EAX + 0xbec8],0x0
// 0041cf52: PUSH ESI
// 0041cf53: MOV dword ptr [EAX + 0xbec4],0x41a00000
// 0041cf5d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041cf62: ADD ESP,0xc
// 0041cf65: XOR EAX,EAX
// 0041cf67: MOV ESP,EBP
// 0041cf69: POP EBP
// 0041cf6a: POP EDI
// 0041cf6b: POP ESI
// 0041cf6c: POP EBX
// 0041cf6d: RET
// 0041cf6e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0041cf6e
// 0041cf71: MOV EBX,dword ptr [EAX + 0xbec8]
// 0041cf77: PUSH EBX
// 0041cf78: PUSH EAX
// 0041cf79: PUSH 0x6161cb
//   XREF to: 006161cb (DATA)
// 0041cf7e: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0041cf83: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 0041cf84: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0041cf89: ADD ESP,0x10
// 0041cf8c: PUSH 0x1
// 0041cf8e: PUSH 0x7
// 0041cf90: PUSH ESI
// 0041cf91: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041cf96: MOV EAX,0x1
// 0041cf9b: ADD ESP,0xc
// 0041cf9e: MOV ESP,EBP
// 0041cfa0: POP EBP
// 0041cfa1: POP EDI
// 0041cfa2: POP ESI
// 0041cfa3: POP EBX
// 0041cfa4: RET
// 0041cfa5: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0041cfa5
// 0041cfa8: PUSH EDX
// 0041cfa9: MOV EAX,dword ptr [EBX + 0x154]
// 0041cfaf: PUSH EBX
// 0041cfb0: CALL dword ptr [EAX + 0x7c]
// 0041cfb3: ADD ESP,0x8
// 0041cfb6: CMP EAX,0x3
// 0041cfb9: JNZ 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041cfbf: LEA EAX,[ESP + 0x34]
// 0041cfc3: PUSH EAX
// 0041cfc4: MOV EDX,dword ptr [EBX + 0x154]
// 0041cfca: PUSH EBX
// 0041cfcb: CALL dword ptr [EDX + 0x14]
// 0041cfce: LEA EDX,[EAX + 0xc]
// 0041cfd1: FLD float ptr [EDX]
// 0041cfd3: FSUB float ptr [EAX]
// 0041cfd5: ADD ESP,0x8
// 0041cfd8: FSTP float ptr [ESP + 0x7c]
// 0041cfdc: FLD float ptr [EDX + 0x4]
// 0041cfdf: FSUB float ptr [EAX + 0x4]
// 0041cfe2: FLD float ptr [ESP + 0x7c]
// 0041cfe6: FXCH
// 0041cfe8: FSTP float ptr [ESP + 0x80]
// 0041cfef: FLD float ptr [EDX + 0x8]
// 0041cff2: FSUB float ptr [EAX + 0x8]
// 0041cff5: FLD1
// 0041cff7: FXCH
// 0041cff9: FSTP float ptr [ESP + 0x84]
// 0041d000: FCOMPP
// 0041d002: FNSTSW AX
// 0041d004: SAHF
// 0041d005: JBE 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d00b: FLD float ptr [ESP + 0x80]
// 0041d012: FLD1
// 0041d014: FCOMPP
// 0041d016: FNSTSW AX
// 0041d018: SAHF
// 0041d019: JBE 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d01f: FLD float ptr [ESP + 0x84]
// 0041d026: FST double ptr [ESP]
// 0041d029: FCOMP double ptr [0x0061622d]
//   XREF to: 0061622d (READ)
// 0041d02f: FNSTSW AX
// 0041d031: SAHF
// 0041d032: JBE 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d038: FLD double ptr [ESP]
// 0041d03b: FCOMP double ptr [0x00616235]
//   XREF to: 00616235 (READ)
// 0041d041: FNSTSW AX
// 0041d043: SAHF
// 0041d044: JNC 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d04a: PUSH 0x6161e6
//   XREF to: 006161e6 (DATA)
// 0041d04f: PUSH EBX
// 0041d050: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0041d055: ADD ESP,0x8
// 0041d058: TEST EAX,EAX
// 0041d05a: JNZ 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d060: LEA EAX,[EBX + 0x20]
// 0041d063: FLD float ptr [EAX]
// 0041d065: FSUB float ptr [EDI]
// 0041d067: FSTP float ptr [ESP + 0xa0]
// 0041d06e: FLD float ptr [EAX + 0x4]
// 0041d071: FSUB float ptr [EDI + 0x4]
// 0041d074: FST float ptr [ESP + 0xa4]
// 0041d07b: FMUL float ptr [ESP + 0xa4]
// 0041d082: FLD float ptr [EAX + 0x8]
// 0041d085: FSUB float ptr [EDI + 0x8]
// 0041d088: FXCH
// 0041d08a: FST float ptr [ESP + 0xa4]
// 0041d091: FMUL float ptr [ESP + 0xa4]
// 0041d098: FST float ptr [ESP + 0xa4]
// 0041d09f: FMUL float ptr [ESP + 0xa4]
// 0041d0a6: FLD float ptr [ESP + 0xa0]
// 0041d0ad: FMUL ST0
// 0041d0af: FADDP
// 0041d0b1: FXCH
// 0041d0b3: FST float ptr [ESP + 0xa8]
// 0041d0ba: FMUL float ptr [ESP + 0xa8]
// 0041d0c1: FADDP
// 0041d0c3: FSQRT
// 0041d0c5: FST float ptr [ESP + 0x8]
// 0041d0c9: FCOMP double ptr [0x0061621d]
//   XREF to: 0061621d (READ)
// 0041d0cf: FNSTSW AX
// 0041d0d1: SAHF
// 0041d0d2: JC 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d0d8: CMP dword ptr [ESP + 0x8],0x41700000
// 0041d0e0: JG 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d0e6: MOV dword ptr [ESP + ESI*0x1 + 0xc],EBX
// 0041d0ea: MOV EBX,dword ptr [ESP + 0xb4]
// 0041d0f1: INC EBX
// 0041d0f2: ADD ESI,0x4
// 0041d0f5: MOV dword ptr [ESP + 0xb4],EBX
// 0041d0fc: CMP ESI,0x28
// 0041d0ff: JL 0x0041cd58
//   XREF to: 0041cd58 (CONDITIONAL_JUMP)
// 0041d105: MOV ESI,dword ptr [ESP + 0xb4]
//   Label: LAB_0041d105
// 0041d10c: CMP ESI,0x1
// 0041d10f: JL 0x0041ccaa
//   XREF to: 0041ccaa (CONDITIONAL_JUMP)
// 0041d115: LEA EAX,[ESI + -0x1]
// 0041d118: PUSH EAX
// 0041d119: PUSH 0x0
// 0041d11b: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 0041d120: ADD ESP,0x8
// 0041d123: MOV EDX,dword ptr [EBP + 0x14]
// 0041d126: MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc]
// 0041d12a: MOV dword ptr [EDX + 0xbec4],0xc2200000
// 0041d134: MOV EDI,dword ptr [EDX + 0xbebc]
// 0041d13a: MOV dword ptr [EDX + 0xbec8],EAX
// 0041d140: INC EDI
// 0041d141: MOV dword ptr [EDX + 0xbebc],EDI
// 0041d147: MOV ECX,EDX
// 0041d149: MOV EDX,dword ptr [EDX + 0xbec8]
// 0041d14f: PUSH EDX
// 0041d150: PUSH ECX
// 0041d151: PUSH 0x6161f0
//   XREF to: 006161f0 (DATA)
// 0041d156: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0041d15c: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 0041d15d: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0041d162: MOV EAX,0x1
// 0041d167: ADD ESP,0x10
// 0041d16a: MOV ESP,EBP
// 0041d16c: POP EBP
// 0041d16d: POP EDI
// 0041d16e: POP ESI
// 0041d16f: POP EBX
// 0041d170: RET
