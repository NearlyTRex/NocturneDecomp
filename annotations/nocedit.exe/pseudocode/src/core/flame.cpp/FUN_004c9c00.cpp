// Name: core_flame.cpp_FUN_004c9c00
// Address: 004c9c00
// Address Range: [[004c9c00, 004c9f1a] [004c9f98, 004ca104]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004c9c00()
// Cross-references:
//   core_bodypart.cpp_FUN_00419e10 (00419e10) at 00419efd [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_process_FUN_00448d30 (00448d30) at 00448dc0 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb390 (004cb390) at 004cb3e2 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 (005e91a0) at 005e94a3 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062a0fe = 0.5
//   double DOUBLE_0062a106 = 16
//   float FLOAT_0062a10e = -8
//   double DOUBLE_0062a116 = -0.5
//   double DOUBLE_0062a11e = 0.25
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CEventList g_CEventListInstance
//   CFireEffect g_CFireEffectInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_flamecan.cpp_FUN_004cad90
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   core_sound.cpp_CSound_FUN_005b3b80
//   core_sound.cpp_CSound_FUN_005b3b90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004c9c00(undefined4 param_1, undefined4 param_2)
    */

void core_flame_cpp_FUN_004c9c00(void)

{
  CLocation *pCVar1;
  CHero *this_ptr;
  CCharacter *this_ptr_00;
  float fVar2;
  int iVar3;
  int extraout_EAX;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  float10 fVar6;
  int in_stack_00000004;
  float in_stack_00000008;
  double local_f8 [12];
  SCollisionInfo local_94;
  SCollisionInfo SStack_6c;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  int iStack_18;
  float local_14;
  
  if (((*(char *)(in_stack_00000004 + 0x1b8) != '\0') && (*(int *)(in_stack_00000004 + 0x1b4) == 0))
     && (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,(char *)(in_stack_00000004 + 0x1b8)), iVar3 != 0)) {
    if ((*(int *)(in_stack_00000004 + 0x1a8) != 1) && (*(int *)(in_stack_00000004 + 0x1a8) != 3)) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      } while (iVar3 < 10);
    }
    *(undefined4 *)(in_stack_00000004 + 0x290) = 1;
    *(undefined4 *)(in_stack_00000004 + 0x1b4) = 1;
  }
  if (((*(char *)(in_stack_00000004 + 0x21c) != '\0') && (*(int *)(in_stack_00000004 + 0x1b4) != 0))
     && ((iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                            (g_CEventListPtr,(char *)(in_stack_00000004 + 0x21c)), iVar3 != 0 &&
         (*(undefined4 *)(in_stack_00000004 + 0x1b4) = 0, *(int *)(in_stack_00000004 + 0x1a8) != 3))
        )) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
              (g_CFireEffectPtr,(CVector3f *)(in_stack_00000004 + 0x20),
               *(float *)(in_stack_00000004 + 0x15c) * (float)DOUBLE_0062a0fe,(CVector3f *)0x0,
               0xffff);
  }
  if (*(int *)(in_stack_00000004 + 0x1b4) != 0) {
    *(float *)(in_stack_00000004 + 0x164) =
         in_stack_00000008 * (float)DOUBLE_0062a106 + *(float *)(in_stack_00000004 + 0x164);
    if (0x40ffffff < *(int *)(in_stack_00000004 + 0x164)) {
      *(float *)(in_stack_00000004 + 0x164) = *(float *)(in_stack_00000004 + 0x164) + FLOAT_0062a10e
      ;
    }
    *(undefined4 *)(in_stack_00000004 + 0x30) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x34) = 0;
    core_flamecan_cpp_FUN_004cad90();
    if (*(int *)(in_stack_00000004 + 0x2a0) == 0) {
      if (*(int *)(in_stack_00000004 + 0x1b0) != 0) {
        core_sound_cpp_CSound_FUN_005b3b90(g_CSoundPtr);
        *(undefined4 *)(in_stack_00000004 + 0x1b0) = 0;
      }
    }
    else {
      core_sound_cpp_CSound_FUN_005b3b80(g_CSoundPtr);
      if (extraout_EAX == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.95,1.05);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  ((char *)local_f8,"torch.wav * %f",SUB84((double)local_14,0),
                   (int)((ulonglong)(double)local_14 >> 0x20));
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        sound_sndmain_cpp_FUN_005a8be0();
        uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(undefined4 *)(in_stack_00000004 + 0x1b0) = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    if (*(int *)(in_stack_00000004 + 0x288) != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_94);
      iVar3 = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94);
      if (iVar3 == 2) {
        this_ptr = g_HeroActors[g_LocalHeroIndex];
        pCVar1 = &(this_ptr->base_character).base_actor.location;
        fStack_3c = (pCVar1->position).x - *(float *)(in_stack_00000004 + 0x20);
        fStack_38 = (this_ptr->base_character).base_actor.location.position.y -
                    *(float *)(in_stack_00000004 + 0x24);
        fStack_34 = (this_ptr->base_character).base_actor.location.position.z -
                    *(float *)(in_stack_00000004 + 0x28);
        if (((float)DOUBLE_0062a116 < fStack_38) && (fStack_38 < (float)local_94.result_ptr)) {
          fVar5 = ((float10)*(float *)(in_stack_00000004 + 0x158) +
                  (float10)*(float *)(in_stack_00000004 + 0x160)) * (float10)DOUBLE_0062a11e;
          crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(extraout_EDX,
                                      CONCAT22((short)((uint)pCVar1 >> 0x10),
                                               (ushort)(fStack_38 < (float)local_94.result_ptr) << 8
                                               | (ushort)(NAN(fStack_38) ||
                                                         NAN((float)local_94.result_ptr)) << 10 |
                                               (ushort)(fStack_38 == (float)local_94.result_ptr) <<
                                               0xe)));
          local_14 = (float)(int)ROUND(fVar5);
          if ((ABS(fStack_3c) < (float)local_94.field9_0x24 + local_14) &&
             (ABS(fStack_34) < (float)local_94.field9_0x24 + local_14)) {
            core_charactr_cpp_CCharacter_FUN_0042b5b0(&this_ptr->base_character);
          }
        }
      }
    }
    if (*(int *)(in_stack_00000004 + 0x28c) != 0) {
      if (*(int *)(in_stack_00000004 + 0x29c) < 0) {
        *(undefined4 *)(in_stack_00000004 + 0x29c) = 0;
      }
      if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) <= *(int *)(in_stack_00000004 + 0x29c)
         ) {
        *(undefined4 *)(in_stack_00000004 + 0x29c) = 0;
      }
      if (0 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)) {
        this_ptr_00 = *(CCharacter **)
                       (g_CDemonSetPtr->field19_0x14f0a0 +
                       *(int *)(in_stack_00000004 + 0x29c) * 4 + 8000);
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_6c);
        iVar3 = (*((this_ptr_00->base_actor).vtable)->hasCollision)
                          (&this_ptr_00->base_actor,&SStack_6c);
        if (iVar3 == 2) {
          pCVar1 = &(this_ptr_00->base_actor).location;
          fStack_30 = (pCVar1->position).x - *(float *)(in_stack_00000004 + 0x20);
          fStack_2c = (this_ptr_00->base_actor).location.position.y -
                      *(float *)(in_stack_00000004 + 0x24);
          fStack_28 = (this_ptr_00->base_actor).location.position.z -
                      *(float *)(in_stack_00000004 + 0x28);
          fVar6 = ((float10)*(float *)(in_stack_00000004 + 0x158) +
                  (float10)*(float *)(in_stack_00000004 + 0x160)) * (float10)DOUBLE_0062a11e;
          fVar5 = (float10)fStack_2c;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,pCVar1));
          iStack_18 = (int)ROUND(fVar6);
          if (((float10)DOUBLE_0062a116 < fVar5) && (fStack_2c < (float)SStack_6c.result_ptr)) {
            fStack_1c = (float)iStack_18;
            fVar2 = (float)SStack_6c.field9_0x24 + fStack_1c;
            local_f8[0] = (double)fVar2;
            if ((ABS(fStack_30) < fVar2) && (ABS(fStack_28) < fVar2)) {
              core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr_00);
            }
          }
        }
        *(int *)(in_stack_00000004 + 0x29c) = *(int *)(in_stack_00000004 + 0x29c) + 1;
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004c9c00: PUSH EBX
//   Label: core_flame.cpp_FUN_004c9c00
// 004c9c01: PUSH ESI
// 004c9c02: PUSH EDI
// 004c9c03: PUSH EBP
// 004c9c04: MOV EBP,ESP
// 004c9c06: SUB ESP,0xf8
// 004c9c0c: AND ESP,0xfffffff8
// 004c9c0f: MOV ESI,dword ptr [EBP + 0x14]
// 004c9c12: CMP byte ptr [ESI + 0x1b8],0x0
// 004c9c19: JZ 0x004c9ca4
//   XREF to: 004c9ca4 (CONDITIONAL_JUMP)
// 004c9c1f: CMP dword ptr [ESI + 0x1b4],0x0
// 004c9c26: JNZ 0x004c9ca4
//   XREF to: 004c9ca4 (CONDITIONAL_JUMP)
// 004c9c2c: LEA EAX,[ESI + 0x1b8]
// 004c9c32: PUSH EAX
// 004c9c33: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004c9c39: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004c9c3a: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004c9c3f: ADD ESP,0x8
// 004c9c42: TEST EAX,EAX
// 004c9c44: JZ 0x004c9ca4
//   XREF to: 004c9ca4 (CONDITIONAL_JUMP)
// 004c9c46: MOV EBX,dword ptr [ESI + 0x1a8]
// 004c9c4c: CMP EBX,0x1
// 004c9c4f: JZ 0x004c9c90
//   XREF to: 004c9c90 (CONDITIONAL_JUMP)
// 004c9c51: CMP EBX,0x3
// 004c9c54: JZ 0x004c9c90
//   XREF to: 004c9c90 (CONDITIONAL_JUMP)
// 004c9c56: LEA EDI,[ESI + 0x20]
// 004c9c59: XOR EBX,EBX
// 004c9c5b: PUSH 0xffff
//   Label: LAB_004c9c5b
// 004c9c60: PUSH 0x1
// 004c9c62: PUSH 0x10000
// 004c9c67: PUSH 0x4000
// 004c9c6c: PUSH 0x0
// 004c9c6e: PUSH EDI
// 004c9c6f: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004c9c74: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004c9c75: INC EBX
// 004c9c76: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c9c7b: ADD ESP,0x1c
// 004c9c7e: CMP EBX,0xa
// 004c9c81: JL 0x004c9c5b
//   XREF to: 004c9c5b (CONDITIONAL_JUMP)
// 004c9c83: LEA EAX,[EAX]
// 004c9c89: LEA EDX,[EDX]
// 004c9c8f: NOP
// 004c9c90: MOV dword ptr [ESI + 0x290],0x1
//   Label: LAB_004c9c90
// 004c9c9a: MOV dword ptr [ESI + 0x1b4],0x1
// 004c9ca4: CMP byte ptr [ESI + 0x21c],0x0
//   Label: LAB_004c9ca4
// 004c9cab: JZ 0x004c9d11
//   XREF to: 004c9d11 (CONDITIONAL_JUMP)
// 004c9cad: CMP dword ptr [ESI + 0x1b4],0x0
// 004c9cb4: JZ 0x004c9d11
//   XREF to: 004c9d11 (CONDITIONAL_JUMP)
// 004c9cb6: LEA EAX,[ESI + 0x21c]
// 004c9cbc: PUSH EAX
// 004c9cbd: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004c9cc3: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004c9cc4: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004c9cc9: ADD ESP,0x8
// 004c9ccc: TEST EAX,EAX
// 004c9cce: JZ 0x004c9d11
//   XREF to: 004c9d11 (CONDITIONAL_JUMP)
// 004c9cd0: MOV EBX,dword ptr [ESI + 0x1a8]
// 004c9cd6: MOV dword ptr [ESI + 0x1b4],0x0
// 004c9ce0: CMP EBX,0x3
// 004c9ce3: JZ 0x004c9d11
//   XREF to: 004c9d11 (CONDITIONAL_JUMP)
// 004c9ce5: PUSH 0xffff
// 004c9cea: FLD float ptr [ESI + 0x15c]
// 004c9cf0: PUSH 0x0
// 004c9cf2: FMUL double ptr [0x0062a0fe]
//   XREF to: 0062a0fe (READ)
// 004c9cf8: SUB ESP,0x4
// 004c9cfb: LEA EAX,[ESI + 0x20]
// 004c9cfe: FSTP float ptr [ESP]
// 004c9d01: PUSH EAX
// 004c9d02: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004c9d08: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 004c9d09: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004c9d0e: ADD ESP,0x14
// 004c9d11: CMP dword ptr [ESI + 0x1b4],0x0
//   Label: LAB_004c9d11
// 004c9d18: JZ 0x004c9f05
//   XREF to: 004c9f05 (CONDITIONAL_JUMP)
// 004c9d1e: FLD float ptr [EBP + 0x18]
// 004c9d21: FMUL double ptr [0x0062a106]
//   XREF to: 0062a106 (READ)
// 004c9d27: FADD float ptr [ESI + 0x164]
// 004c9d2d: FSTP float ptr [ESI + 0x164]
// 004c9d33: CMP dword ptr [ESI + 0x164],0x41000000
// 004c9d3d: JL 0x004c9d51
//   XREF to: 004c9d51 (CONDITIONAL_JUMP)
// 004c9d3f: FLD float ptr [ESI + 0x164]
// 004c9d45: FADD float ptr [0x0062a10e]
//   XREF to: 0062a10e (READ)
// 004c9d4b: FSTP float ptr [ESI + 0x164]
// 004c9d51: MOV dword ptr [ESI + 0x30],0x0
//   Label: LAB_004c9d51
// 004c9d58: MOV dword ptr [ESI + 0x38],0x0
// 004c9d5f: PUSH ESI
// 004c9d60: MOV dword ptr [ESI + 0x34],0x0
// 004c9d67: CALL core_flamecan.cpp_FUN_004cad90
//   XREF to: 004cad90 (UNCONDITIONAL_CALL)
// 004c9d6c: MOV ECX,dword ptr [ESI + 0x2a0]
// 004c9d72: ADD ESP,0x4
// 004c9d75: TEST ECX,ECX
// 004c9d77: JZ 0x004c9f98
//   XREF to: 004c9f98 (CONDITIONAL_JUMP)
// 004c9d7d: MOV EDX,dword ptr [ESI + 0x1b0]
// 004c9d83: PUSH EDX
// 004c9d84: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004c9d8a: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004c9d8b: CALL core_sound.cpp_CSound_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 004c9d90: ADD ESP,0x8
// 004c9d93: TEST EAX,EAX
// 004c9d95: JZ 0x004c9f0c
//   XREF to: 004c9f0c (CONDITIONAL_JUMP)
// 004c9d9b: CMP dword ptr [ESI + 0x288],0x0
//   Label: LAB_004c9d9b
// 004c9da2: JZ 0x004c9ec5
//   XREF to: 004c9ec5 (CONDITIONAL_JUMP)
// 004c9da8: LEA EAX,[ESP + 0x74]
// 004c9dac: PUSH EAX
// 004c9dad: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 004c9db2: ADD ESP,0x4
// 004c9db5: LEA EDI,[ESP + 0x74]
// 004c9db9: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004c9dbe: PUSH EDI
// 004c9dbf: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004c9dc6: PUSH EAX
// 004c9dc7: MOV EBX,dword ptr [EAX + 0x154]
// 004c9dcd: CALL dword ptr [EBX + 0x34]
// 004c9dd0: ADD ESP,0x8
// 004c9dd3: CMP EAX,0x2
// 004c9dd6: JNZ 0x004c9ec5
//   XREF to: 004c9ec5 (CONDITIONAL_JUMP)
// 004c9ddc: MOV EDI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004c9de2: MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004c9de9: LEA EAX,[EDI + 0x20]
// 004c9dec: LEA EBX,[ESI + 0x20]
// 004c9def: FLD float ptr [EAX]
// 004c9df1: FSUB float ptr [EBX]
// 004c9df3: FSTP float ptr [ESP + 0xc4]
// 004c9dfa: FLD float ptr [EAX + 0x4]
// 004c9dfd: FSUB float ptr [EBX + 0x4]
// 004c9e00: FSTP float ptr [ESP + 0xc8]
// 004c9e07: FLD float ptr [EAX + 0x8]
// 004c9e0a: FSUB float ptr [EBX + 0x8]
// 004c9e0d: FLD float ptr [ESP + 0xc8]
// 004c9e14: FXCH
// 004c9e16: FSTP float ptr [ESP + 0xcc]
// 004c9e1d: FCOMP double ptr [0x0062a116]
//   XREF to: 0062a116 (READ)
// 004c9e23: FNSTSW AX
// 004c9e25: SAHF
// 004c9e26: JBE 0x004c9ec5
//   XREF to: 004c9ec5 (CONDITIONAL_JUMP)
// 004c9e2c: FLD float ptr [ESP + 0xc8]
// 004c9e33: FCOMP float ptr [ESP + 0x8c]
// 004c9e3a: FNSTSW AX
// 004c9e3c: SAHF
// 004c9e3d: JNC 0x004c9ec5
//   XREF to: 004c9ec5 (CONDITIONAL_JUMP)
// 004c9e43: FLD float ptr [ESI + 0x158]
// 004c9e49: FADD float ptr [ESI + 0x160]
// 004c9e4f: FMUL double ptr [0x0062a11e]
//   XREF to: 0062a11e (READ)
// 004c9e55: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c9e5a: FISTP dword ptr [ESP + 0xf0]
// 004c9e61: MOV EAX,dword ptr [ESP + 0xf0]
// 004c9e68: FLD float ptr [ESP + 0xc4]
// 004c9e6f: MOV dword ptr [ESP + 0xf4],EAX
// 004c9e76: FABS
// 004c9e78: FLD float ptr [ESP + 0x90]
// 004c9e7f: FILD dword ptr [ESP + 0xf4]
// 004c9e86: FSTP float ptr [ESP + 0xec]
// 004c9e8d: FADD float ptr [ESP + 0xec]
// 004c9e94: FSTP double ptr [ESP]
// 004c9e97: FCOMP double ptr [ESP]
// 004c9e9a: FNSTSW AX
// 004c9e9c: SAHF
// 004c9e9d: JNC 0x004c9ec5
//   XREF to: 004c9ec5 (CONDITIONAL_JUMP)
// 004c9e9f: FLD float ptr [ESP + 0xcc]
// 004c9ea6: FABS
// 004c9ea8: FCOMP double ptr [ESP]
// 004c9eab: FNSTSW AX
// 004c9ead: SAHF
// 004c9eae: JNC 0x004c9ec5
//   XREF to: 004c9ec5 (CONDITIONAL_JUMP)
// 004c9eb0: PUSH 0x1
// 004c9eb2: PUSH 0x40000000
// 004c9eb7: PUSH 0x0
// 004c9eb9: PUSH 0x0
// 004c9ebb: PUSH EBX
// 004c9ebc: PUSH EDI
// 004c9ebd: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 004c9ec2: ADD ESP,0x18
// 004c9ec5: CMP dword ptr [ESI + 0x28c],0x0
//   Label: LAB_004c9ec5
// 004c9ecc: JZ 0x004c9f05
//   XREF to: 004c9f05 (CONDITIONAL_JUMP)
// 004c9ece: CMP dword ptr [ESI + 0x29c],0x0
// 004c9ed5: JL 0x004c9fc4
//   XREF to: 004c9fc4 (CONDITIONAL_JUMP)
// 004c9edb: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_004c9edb
//   XREF to: 006810c8 (READ)
// 004c9ee1: MOV EAX,dword ptr [ESI + 0x29c]
// 004c9ee7: CMP EAX,dword ptr [EBX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 004c9eed: JGE 0x004c9fd3
//   XREF to: 004c9fd3 (CONDITIONAL_JUMP)
// 004c9ef3: MOV EAX,[0x006810c8]
//   Label: LAB_004c9ef3
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (DATA)
// 004c9ef8: CMP dword ptr [EAX + 0x150fdc],0x0
//   XREF to: 03265254 (READ)
// 004c9eff: JG 0x004c9fe2
//   XREF to: 004c9fe2 (CONDITIONAL_JUMP)
// 004c9f05: MOV ESP,EBP
//   Label: LAB_004c9f05
// 004c9f07: POP EBP
// 004c9f08: POP EDI
// 004c9f09: POP ESI
// 004c9f0a: POP EBX
// 004c9f0b: RET
// 004c9f0c: PUSH 0x3f866666
//   Label: LAB_004c9f0c
// 004c9f11: PUSH 0x3f733333
// 004c9f16: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004c9f98: MOV EBX,dword ptr [ESI + 0x1b0]
//   Label: LAB_004c9f98
// 004c9f9e: TEST EBX,EBX
// 004c9fa0: JZ 0x004c9d9b
//   XREF to: 004c9d9b (CONDITIONAL_JUMP)
// 004c9fa6: PUSH EBX
// 004c9fa7: MOV EAX,[0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004c9fac: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004c9fad: CALL core_sound.cpp_CSound_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 004c9fb2: ADD ESP,0x8
// 004c9fb5: MOV dword ptr [ESI + 0x1b0],0x0
// 004c9fbf: JMP 0x004c9d9b
//   XREF to: 004c9d9b (UNCONDITIONAL_JUMP)
// 004c9fc4: MOV dword ptr [ESI + 0x29c],0x0
//   Label: LAB_004c9fc4
// 004c9fce: JMP 0x004c9edb
//   XREF to: 004c9edb (UNCONDITIONAL_JUMP)
// 004c9fd3: MOV dword ptr [ESI + 0x29c],0x0
//   Label: LAB_004c9fd3
// 004c9fdd: JMP 0x004c9ef3
//   XREF to: 004c9ef3 (UNCONDITIONAL_JUMP)
// 004c9fe2: MOV EBX,dword ptr [ESI + 0x29c]
//   Label: LAB_004c9fe2
// 004c9fe8: MOV EBX,dword ptr [EAX + EBX*0x4 + 0x150fe0]
//   XREF to: 03265258 (DATA)
// 004c9fef: LEA EAX,[ESP + 0x9c]
// 004c9ff6: PUSH EAX
// 004c9ff7: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 004c9ffc: ADD ESP,0x4
// 004c9fff: LEA EAX,[ESP + 0x9c]
// 004ca006: PUSH EAX
// 004ca007: MOV EDI,dword ptr [EBX + 0x154]
// 004ca00d: PUSH EBX
// 004ca00e: CALL dword ptr [EDI + 0x34]
// 004ca011: ADD ESP,0x8
// 004ca014: CMP EAX,0x2
// 004ca017: JNZ 0x004ca0f8
//   XREF to: 004ca0f8 (CONDITIONAL_JUMP)
// 004ca01d: LEA EAX,[EBX + 0x20]
// 004ca020: LEA EDI,[ESI + 0x20]
// 004ca023: FLD float ptr [EAX]
// 004ca025: FSUB float ptr [EDI]
// 004ca027: FSTP float ptr [ESP + 0xd0]
// 004ca02e: FLD float ptr [EAX + 0x4]
// 004ca031: FSUB float ptr [EDI + 0x4]
// 004ca034: FSTP float ptr [ESP + 0xd4]
// 004ca03b: FLD float ptr [EAX + 0x8]
// 004ca03e: FSUB float ptr [EDI + 0x8]
// 004ca041: FSTP float ptr [ESP + 0xd8]
// 004ca048: FLD float ptr [ESI + 0x158]
// 004ca04e: FADD float ptr [ESI + 0x160]
// 004ca054: FMUL double ptr [0x0062a11e]
//   XREF to: 0062a11e (READ)
// 004ca05a: FLD float ptr [ESP + 0xd4]
// 004ca061: FXCH
// 004ca063: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004ca068: FISTP dword ptr [ESP + 0xe8]
// 004ca06f: FCOMP double ptr [0x0062a116]
//   XREF to: 0062a116 (READ)
// 004ca075: FNSTSW AX
// 004ca077: SAHF
// 004ca078: JBE 0x004ca0f8
//   XREF to: 004ca0f8 (CONDITIONAL_JUMP)
// 004ca07e: FLD float ptr [ESP + 0xd4]
// 004ca085: FCOMP float ptr [ESP + 0xb4]
// 004ca08c: FNSTSW AX
// 004ca08e: SAHF
// 004ca08f: JNC 0x004ca0f8
//   XREF to: 004ca0f8 (CONDITIONAL_JUMP)
// 004ca091: MOV EAX,dword ptr [ESP + 0xe8]
// 004ca098: FLD float ptr [ESP + 0xd0]
// 004ca09f: MOV dword ptr [ESP + 0xf4],EAX
// 004ca0a6: FABS
// 004ca0a8: FLD float ptr [ESP + 0xb8]
// 004ca0af: FILD dword ptr [ESP + 0xf4]
// 004ca0b6: FSTP float ptr [ESP + 0xe4]
// 004ca0bd: FADD float ptr [ESP + 0xe4]
// 004ca0c4: FSTP double ptr [ESP + 0x8]
// 004ca0c8: FCOMP double ptr [ESP + 0x8]
// 004ca0cc: FNSTSW AX
// 004ca0ce: SAHF
// 004ca0cf: JNC 0x004ca0f8
//   XREF to: 004ca0f8 (CONDITIONAL_JUMP)
// 004ca0d1: FLD float ptr [ESP + 0xd8]
// 004ca0d8: FABS
// 004ca0da: FCOMP double ptr [ESP + 0x8]
// 004ca0de: FNSTSW AX
// 004ca0e0: SAHF
// 004ca0e1: JNC 0x004ca0f8
//   XREF to: 004ca0f8 (CONDITIONAL_JUMP)
// 004ca0e3: PUSH 0x0
// 004ca0e5: PUSH 0x40000000
// 004ca0ea: PUSH 0x0
// 004ca0ec: PUSH 0x0
// 004ca0ee: PUSH EDI
// 004ca0ef: PUSH EBX
// 004ca0f0: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 004ca0f5: ADD ESP,0x18
// 004ca0f8: INC dword ptr [ESI + 0x29c]
//   Label: LAB_004ca0f8
// 004ca0fe: MOV ESP,EBP
// 004ca100: POP EBP
// 004ca101: POP EDI
// 004ca102: POP ESI
// 004ca103: POP EBX
// 004ca104: RET
