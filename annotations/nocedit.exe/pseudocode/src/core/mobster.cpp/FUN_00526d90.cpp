// Name: core_mobster.cpp_FUN_00526d90
// Address: 00526d90
// Address Range: [[00526d90, 00526e9b] [00526ebb, 005271b7]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00526d90()
// Cross-references:
//   core_mobster.cpp_FUN_00525840 (00525840) at 0052649a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_CTommyGun_00639906
//   undefined4 DAT_00639916
//   undefined4 DAT_0063991e
//   undefined4 DAT_00639926
//   CDemonSet* g_CDemonSetPtr = 03114278
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

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00526d90(undefined4 param_1, undefined4
   param_2) */

undefined4 core_mobster_cpp_FUN_00526d90(void)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fVar9;
  float afStack_a8 [8];
  CBoundingBox3D CStack_88;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f aCStack_44 [2];
  undefined4 uStack_28;
  int local_24;
  CLocation *local_20;
  float *local_1c;
  int iStack_18;
  float local_14;
  
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) == 0) {
    fVar9 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) - in_stack_00000008;
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = fVar9;
    if (0.0 < fVar9) {
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) =
           *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) + 1;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = local_14;
    }
    if (((in_stack_00000004->model).part_visibility_flags
         [*(int *)(in_stack_00000004->carry_hands[1].field0_0x0 + 4)] != 0) &&
       (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      if (0.0 < *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28)) {
        in_stack_00000008 =
             *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) - in_stack_00000008;
        *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = in_stack_00000008;
        if (in_stack_00000008 < 0.0) {
          in_stack_00000004 = in_stack_00000004 + 1;
          (in_stack_00000004->base_actor).create_event[0x28] = '\0';
          (in_stack_00000004->base_actor).create_event[0x29] = '\0';
          (in_stack_00000004->base_actor).create_event[0x2a] = '\0';
          (in_stack_00000004->base_actor).create_event[0x2b] = '\0';
          return 0;
        }
      }
      else {
        iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
        pCVar1 = &(in_stack_00000004->base_actor).location;
        if (iVar8 == 0) {
          iVar7 = 0;
          iVar8 = 0;
          local_24 = 0;
          local_1c = (float *)0x0;
          local_20 = pCVar1;
          while ((int)local_1c < (int)g_CDemonSetPtr->actor_list_ptr) {
            pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar8);
            pCVar5 = (*pCVar2->vtable->getCarrier)(pCVar2);
            if ((pCVar5 == (CDemonActor *)0x0) &&
               (iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"@CTommyGun" + 1),
               iVar6 != 0)) {
              fStack_58 = (pCVar2->location).position.x - *local_1c;
              fStack_54 = (pCVar2->location).position.y - local_1c[1];
              fStack_54 = fStack_54 * fStack_54;
              CStack_50.x = (pCVar2->location).position.z - local_1c[2];
              fStack_54 = fStack_54 * fStack_54;
              afStack_a8[0] =
                   SQRT(CStack_50.x * CStack_50.x + fStack_58 * fStack_58 + fStack_54 * fStack_54);
              if (((float)_DAT_0063991e <= afStack_a8[0]) && ((int)afStack_a8[0] < 0x41700001)) {
                *(CDemonActor **)((int)afStack_a8 + iVar7 + 4) = pCVar2;
                local_20 = (CLocation *)((int)&(local_20->position).x + 1);
                iVar7 = iVar7 + 4;
                if (0x27 < iVar7) break;
              }
            }
            iStack_18 = iStack_18 + 1;
            iVar8 = iVar8 + 4;
          }
          if (0 < local_24) {
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
            fVar9 = afStack_a8[iVar8];
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base_actor).create_event[0x28] = '\0';
            (pCVar4->base_actor).create_event[0x29] = '\0';
            (pCVar4->base_actor).create_event[0x2a] = ' ';
            (pCVar4->base_actor).create_event[0x2b] = -0x3e;
            iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
            *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) = fVar9;
            *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) = iVar8 + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller);
            return 1;
          }
        }
        else {
          iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x8c))();
          if (iVar8 != 0) {
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
          iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
          fVar9 = (pCVar1->position).x - *(float *)(iVar8 + 0x20);
          fVar3 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar8 + 0x28);
          fVar9 = (float)_DAT_0063991e - SQRT(fVar3 * fVar3 + fVar9 * fVar9) * (float)_DAT_00639916;
          if (fVar9 < 1.0) {
            fVar9 = 1.0;
          }
          fVar9 = in_stack_00000008 * fVar9 +
                  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28);
          iVar8 = -1;
          *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = fVar9;
          if ((fVar9 < 0.0) &&
             (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.create_event +
                                                    0x2c) + 0x154) + 0x7c))(), iVar7 == 3)) {
            pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x2c);
            (*pCVar2->vtable->getBoundingBox)(pCVar2,&CStack_88);
            uStack_28 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            aCStack_44[0].z = CStack_88.max.y + (float)_DAT_00639926;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,aCStack_44);
            uStack_68 = 0x3fc00000;
            uStack_64 = 0;
            uStack_60 = 0;
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
          }
          if (-1 < iVar8) {
            if (iVar8 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller);
            return 1;
          }
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
        }
      }
    }
  }
  return 0;
}


// Assembly code:
// 00526d90: PUSH EBX
//   Label: core_mobster.cpp_FUN_00526d90
// 00526d91: PUSH ESI
// 00526d92: PUSH EDI
// 00526d93: PUSH EBP
// 00526d94: MOV EBP,ESP
// 00526d96: SUB ESP,0xa0
// 00526d9c: AND ESP,0xfffffff8
// 00526d9f: MOV EAX,dword ptr [EBP + 0x14]
// 00526da2: CMP dword ptr [EAX + 0xbe30],0x0
// 00526da9: JNZ 0x00527091
//   XREF to: 00527091 (CONDITIONAL_JUMP)
// 00526daf: FLD float ptr [EAX + 0xbec0]
// 00526db5: FSUB float ptr [EBP + 0x18]
// 00526db8: FST float ptr [EAX + 0xbec0]
// 00526dbe: FLDZ
// 00526dc0: FCOMPP
// 00526dc2: FNSTSW AX
// 00526dc4: SAHF
// 00526dc5: JC 0x00526e7d
//   XREF to: 00526e7d (CONDITIONAL_JUMP)
// 00526dcb: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00526dcb
// 00526dce: MOV EAX,dword ptr [EAX + 0x24f4]
// 00526dd4: MOV EBX,dword ptr [EBP + 0x14]
// 00526dd7: SHL EAX,0x2
// 00526dda: ADD EAX,EBX
// 00526ddc: CMP dword ptr [EAX + 0x2298],0x0
// 00526de3: JZ 0x00527091
//   XREF to: 00527091 (CONDITIONAL_JUMP)
// 00526de9: MOV EDI,dword ptr [EBX + 0x24f8]
// 00526def: TEST EDI,EDI
// 00526df1: JNZ 0x00527091
//   XREF to: 00527091 (CONDITIONAL_JUMP)
// 00526df7: FLD float ptr [EBX + 0xbec4]
// 00526dfd: FLDZ
// 00526dff: FCOMPP
// 00526e01: FNSTSW AX
// 00526e03: SAHF
// 00526e04: JC 0x00526ebb
//   XREF to: 00526ebb (CONDITIONAL_JUMP)
// 00526e0a: MOV EDX,dword ptr [EBX + 0xbec8]
// 00526e10: LEA ESI,[EBX + 0x20]
// 00526e13: TEST EDX,EDX
// 00526e15: JNZ 0x00526ee6
//   XREF to: 00526ee6 (CONDITIONAL_JUMP)
// 00526e1b: MOV dword ptr [ESP + 0x8c],EDI
// 00526e22: MOV dword ptr [ESP + 0x94],EDI
// 00526e29: MOV dword ptr [ESP + 0x90],ESI
// 00526e30: XOR ESI,ESI
// 00526e32: MOV EAX,[0x006810c8]
//   Label: LAB_00526e32
//   XREF to: 006810c8 (READ)
// 00526e37: MOV EBX,dword ptr [ESP + 0x94]
// 00526e3e: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 00526e44: JGE 0x00527157
//   XREF to: 00527157 (CONDITIONAL_JUMP)
// 00526e4a: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 00526e51: PUSH EBX
// 00526e52: MOV EAX,dword ptr [EBX + 0x154]
// 00526e58: CALL dword ptr [EAX + 0x8c]
// 00526e5e: ADD ESP,0x4
// 00526e61: TEST EAX,EAX
// 00526e63: JZ 0x005270b3
//   XREF to: 005270b3 (CONDITIONAL_JUMP)
// 00526e69: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_00526e69
// 00526e70: INC EAX
// 00526e71: ADD EDI,0x4
// 00526e74: MOV dword ptr [ESP + 0x94],EAX
// 00526e7b: JMP 0x00526e32
//   XREF to: 00526e32 (UNCONDITIONAL_JUMP)
// 00526e7d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00526e7d
// 00526e80: MOV ECX,dword ptr [EAX + 0xbebc]
// 00526e86: PUSH 0x41200000
// 00526e8b: INC ECX
// 00526e8c: PUSH 0x40a00000
// 00526e91: MOV dword ptr [EAX + 0xbebc],ECX
// 00526e97: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00526ebb: FLD float ptr [EBX + 0xbec4]
//   Label: LAB_00526ebb
// 00526ec1: FSUB float ptr [EBP + 0x18]
// 00526ec4: FST float ptr [EBX + 0xbec4]
// 00526eca: FLDZ
// 00526ecc: FCOMPP
// 00526ece: FNSTSW AX
// 00526ed0: SAHF
// 00526ed1: JBE 0x00527091
//   XREF to: 00527091 (CONDITIONAL_JUMP)
// 00526ed7: MOV dword ptr [EBX + 0xbec4],EDI
// 00526edd: XOR EAX,EAX
// 00526edf: MOV ESP,EBP
// 00526ee1: POP EBP
// 00526ee2: POP EDI
// 00526ee3: POP ESI
// 00526ee4: POP EBX
// 00526ee5: RET
// 00526ee6: PUSH EDX
//   Label: LAB_00526ee6
// 00526ee7: MOV EBX,dword ptr [EDX + 0x154]
// 00526eed: CALL dword ptr [EBX + 0x8c]
// 00526ef3: ADD ESP,0x4
// 00526ef6: TEST EAX,EAX
// 00526ef8: JNZ 0x00527043
//   XREF to: 00527043 (CONDITIONAL_JUMP)
// 00526efe: MOV EAX,dword ptr [EBP + 0x14]
// 00526f01: MOV EAX,dword ptr [EAX + 0xbec8]
// 00526f07: FLD float ptr [ESI]
// 00526f09: FSUB float ptr [EAX + 0x20]
// 00526f0c: FMUL ST0
// 00526f0e: FLD float ptr [ESI + 0x8]
// 00526f11: FSUB float ptr [EAX + 0x28]
// 00526f14: FMUL ST0
// 00526f16: FADDP
// 00526f18: FSQRT
// 00526f1a: FMUL double ptr [0x00639916]
//   XREF to: 00639916 (READ)
// 00526f20: FSUBR double ptr [0x0063991e]
//   XREF to: 0063991e (READ)
// 00526f26: FST float ptr [ESP]
// 00526f29: FLD1
// 00526f2b: FCOMPP
// 00526f2d: FNSTSW AX
// 00526f2f: SAHF
// 00526f30: JBE 0x00526f39
//   XREF to: 00526f39 (CONDITIONAL_JUMP)
// 00526f32: MOV dword ptr [ESP],0x3f800000
// 00526f39: FLD float ptr [EBP + 0x18]
//   Label: LAB_00526f39
// 00526f3c: FMUL float ptr [ESP]
// 00526f3f: MOV EAX,dword ptr [EBP + 0x14]
// 00526f42: FADD float ptr [EAX + 0xbec4]
// 00526f48: MOV EBX,0xffffffff
// 00526f4d: FST float ptr [EAX + 0xbec4]
// 00526f53: FLDZ
// 00526f55: FCOMPP
// 00526f57: FNSTSW AX
// 00526f59: SAHF
// 00526f5a: JBE 0x0052702e
//   XREF to: 0052702e (CONDITIONAL_JUMP)
// 00526f60: MOV EDI,dword ptr [EBP + 0x14]
// 00526f63: MOV EAX,dword ptr [EBP + 0x14]
// 00526f66: PUSH EDI
// 00526f67: MOV EAX,dword ptr [EAX + 0xbec8]
// 00526f6d: PUSH EAX
// 00526f6e: MOV ESI,dword ptr [EAX + 0x154]
// 00526f74: CALL dword ptr [ESI + 0x7c]
// 00526f77: ADD ESP,0x8
// 00526f7a: CMP EAX,0x3
// 00526f7d: JNZ 0x0052702e
//   XREF to: 0052702e (CONDITIONAL_JUMP)
// 00526f83: LEA ESI,[ESP + 0x30]
// 00526f87: MOV EBX,dword ptr [EDI + 0xbec8]
// 00526f8d: PUSH ESI
// 00526f8e: MOV EAX,dword ptr [EBX + 0x154]
// 00526f94: PUSH EBX
// 00526f95: CALL dword ptr [EAX + 0x14]
// 00526f98: MOV EAX,0x3f000000
// 00526f9d: ADD ESP,0x8
// 00526fa0: MOV dword ptr [ESP + 0x88],EAX
// 00526fa7: LEA EAX,[ESP + 0x88]
// 00526fae: PUSH EAX
// 00526faf: LEA EAX,[ESP + 0x70]
// 00526fb3: PUSH EAX
// 00526fb4: LEA EAX,[ESP + 0x44]
// 00526fb8: PUSH EAX
// 00526fb9: LEA EAX,[ESP + 0x84]
// 00526fc0: PUSH EAX
// 00526fc1: LEA EAX,[ESP + 0x40]
// 00526fc5: PUSH EAX
// 00526fc6: CALL core_bodypart.cpp_FUN_0041b540
//   XREF to: 0041b540 (UNCONDITIONAL_CALL)
// 00526fcb: ADD ESP,0xc
// 00526fce: PUSH EAX
// 00526fcf: CALL core_bodypart.cpp_FUN_0041b4e0
//   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)
// 00526fd4: ADD ESP,0xc
// 00526fd7: LEA EAX,[ESP + 0x6c]
// 00526fdb: PUSH EAX
// 00526fdc: LEA EAX,[ESP + 0x64]
// 00526fe0: FLD float ptr [ESP + 0x3c]
// 00526fe4: PUSH EAX
// 00526fe5: FADD double ptr [0x00639926]
//   XREF to: 00639926 (READ)
// 00526feb: PUSH EBX
// 00526fec: FSTP float ptr [ESP + 0x80]
// 00526ff3: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00526ff8: ADD ESP,0xc
// 00526ffb: PUSH 0x3d0efa35
// 00527000: LEA EAX,[ESP + 0x4c]
// 00527004: PUSH 0x3e99999a
// 00527009: PUSH EAX
// 0052700a: XOR ECX,ECX
// 0052700c: PUSH ECX
// 0052700d: LEA EAX,[ESP + 0x70]
// 00527011: MOV EDX,0x3fc00000
// 00527016: PUSH EAX
// 00527017: MOV dword ptr [ESP + 0x5c],EDX
// 0052701b: PUSH EDI
// 0052701c: MOV dword ptr [ESP + 0x64],ECX
// 00527020: MOV dword ptr [ESP + 0x68],ECX
// 00527024: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00527029: ADD ESP,0x18
// 0052702c: MOV EBX,EAX
// 0052702e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0052702e
// 00527031: ADD EAX,0x158
// 00527036: TEST EBX,EBX
// 00527038: JL 0x0052706d
//   XREF to: 0052706d (CONDITIONAL_JUMP)
// 0052703a: JG 0x0052709a
//   XREF to: 0052709a (CONDITIONAL_JUMP)
// 0052703c: MOV EAX,0x1
// 00527041: JMP 0x00527093
//   XREF to: 00527093 (UNCONDITIONAL_JUMP)
// 00527043: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00527043
// 00527046: PUSH 0x1
// 00527048: ADD EAX,0x158
// 0052704d: PUSH 0x1
// 0052704f: MOV dword ptr [EAX + 0xbd70],EDI
// 00527055: PUSH EAX
// 00527056: MOV dword ptr [EAX + 0xbd6c],EDI
// 0052705c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00527061: ADD ESP,0xc
// 00527064: XOR EAX,EAX
// 00527066: MOV ESP,EBP
// 00527068: POP EBP
// 00527069: POP EDI
// 0052706a: POP ESI
// 0052706b: POP EBX
// 0052706c: RET
// 0052706d: PUSH 0x1
//   Label: LAB_0052706d
// 0052706f: MOV EDX,dword ptr [EBP + 0x14]
// 00527072: PUSH 0x1
// 00527074: MOV dword ptr [EDX + 0xbec8],0x0
// 0052707e: PUSH EAX
// 0052707f: MOV dword ptr [EDX + 0xbec4],0x41a00000
// 00527089: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052708e: ADD ESP,0xc
// 00527091: XOR EAX,EAX
//   Label: LAB_00527091
// 00527093: MOV ESP,EBP
//   Label: LAB_00527093
// 00527095: POP EBP
// 00527096: POP EDI
// 00527097: POP ESI
// 00527098: POP EBX
// 00527099: RET
// 0052709a: PUSH 0x1
//   Label: LAB_0052709a
// 0052709c: PUSH 0x7
// 0052709e: PUSH EAX
// 0052709f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005270a4: MOV EAX,0x1
// 005270a9: ADD ESP,0xc
// 005270ac: MOV ESP,EBP
// 005270ae: POP EBP
// 005270af: POP EDI
// 005270b0: POP ESI
// 005270b1: POP EBX
// 005270b2: RET
// 005270b3: PUSH 0x639906
//   Label: LAB_005270b3
//   XREF to: 00639906 (DATA)
// 005270b8: PUSH EBX
// 005270b9: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005270be: ADD ESP,0x8
// 005270c1: TEST EAX,EAX
// 005270c3: JZ 0x00526e69
//   XREF to: 00526e69 (CONDITIONAL_JUMP)
// 005270c9: LEA EAX,[EBX + 0x20]
// 005270cc: MOV EDX,dword ptr [ESP + 0x90]
// 005270d3: FLD float ptr [EAX]
// 005270d5: FSUB float ptr [EDX]
// 005270d7: FSTP float ptr [ESP + 0x54]
// 005270db: FLD float ptr [EAX + 0x4]
// 005270de: FSUB float ptr [EDX + 0x4]
// 005270e1: FST float ptr [ESP + 0x58]
// 005270e5: FMUL float ptr [ESP + 0x58]
// 005270e9: FLD float ptr [EAX + 0x8]
// 005270ec: FSUB float ptr [EDX + 0x8]
// 005270ef: FXCH
// 005270f1: FST float ptr [ESP + 0x58]
// 005270f5: FMUL float ptr [ESP + 0x58]
// 005270f9: FST float ptr [ESP + 0x58]
// 005270fd: FMUL float ptr [ESP + 0x58]
// 00527101: FLD float ptr [ESP + 0x54]
// 00527105: FMUL ST0
// 00527107: FADDP
// 00527109: FXCH
// 0052710b: FST float ptr [ESP + 0x5c]
// 0052710f: FMUL float ptr [ESP + 0x5c]
// 00527113: FADDP
// 00527115: FSQRT
// 00527117: FST float ptr [ESP + 0x4]
// 0052711b: FCOMP double ptr [0x0063991e]
//   XREF to: 0063991e (READ)
// 00527121: FNSTSW AX
// 00527123: SAHF
// 00527124: JC 0x00526e69
//   XREF to: 00526e69 (CONDITIONAL_JUMP)
// 0052712a: CMP dword ptr [ESP + 0x4],0x41700000
// 00527132: JG 0x00526e69
//   XREF to: 00526e69 (CONDITIONAL_JUMP)
// 00527138: MOV dword ptr [ESP + ESI*0x1 + 0x8],EBX
// 0052713c: MOV EBX,dword ptr [ESP + 0x8c]
// 00527143: INC EBX
// 00527144: ADD ESI,0x4
// 00527147: MOV dword ptr [ESP + 0x8c],EBX
// 0052714e: CMP ESI,0x28
// 00527151: JL 0x00526e69
//   XREF to: 00526e69 (CONDITIONAL_JUMP)
// 00527157: MOV ESI,dword ptr [ESP + 0x8c]
//   Label: LAB_00527157
// 0052715e: CMP ESI,0x1
// 00527161: JL 0x00527091
//   XREF to: 00527091 (CONDITIONAL_JUMP)
// 00527167: LEA EAX,[ESI + -0x1]
// 0052716a: PUSH EAX
// 0052716b: PUSH 0x0
// 0052716d: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00527172: ADD ESP,0x8
// 00527175: MOV EDX,dword ptr [EBP + 0x14]
// 00527178: PUSH 0x1
// 0052717a: MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc]
// 0052717e: MOV dword ptr [EDX + 0xbec4],0xc2200000
// 00527188: PUSH 0x1
// 0052718a: MOV EDI,dword ptr [EDX + 0xbebc]
// 00527190: MOV dword ptr [EDX + 0xbec8],EAX
// 00527196: LEA EAX,[EDX + 0x158]
// 0052719c: INC EDI
// 0052719d: PUSH EAX
// 0052719e: MOV dword ptr [EDX + 0xbebc],EDI
// 005271a4: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005271a9: MOV EAX,0x1
// 005271ae: ADD ESP,0xc
// 005271b1: MOV ESP,EBP
// 005271b3: POP EBP
// 005271b4: POP EDI
// 005271b5: POP ESI
// 005271b6: POP EBX
// 005271b7: RET
