// Name: core_shotgun.cpp_FUN_00588060
// Address: 00588060
// Address Range: [[00588060, 005880fc] [0058830a, 005883ba]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_00588060()
// Globals:
//   TerminatedCString s_shotgun_noammo_wav_00649b08
//   TerminatedCString s_shotgun_wav_00649b1b
//   double DOUBLE_00649b27 = 3.14159265350000
//   double DOUBLE_00649b2f = 0.00555555555555555
//   float FLOAT_00649b37 = -0.125
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CFireEffect g_CFireEffectInstance
//   CDemonSet g_CDemonSetInstance
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_fire.cpp_CFireEffect_FUN_004c7a60
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_sound.cpp_CSound_FUN_005b3a40
//   core_weapon.cpp_FUN_005ee6e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_shotgun.cpp_FUN_00588060(undefined4 param_1) */

undefined4 core_shotgun_cpp_FUN_00588060(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  CBoundingBox3D *pCVar5;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *in_stack_fffffe7c;
  CBoundingBox3D *in_stack_fffffea0;
  CDemonActor *in_stack_fffffebc;
  CDemonActor *sound_name;
  float volume;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  CDemonActor *pCStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  float fStack_c0;
  CVector3f CStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_88;
  float fStack_78;
  CDemonActor *pCStack_74;
  float fStack_70;
  float fStack_6c;
  CDemonActor *pCStack_68;
  CDemonActor *pCStack_64;
  float fStack_5c;
  int iStack_54;
  int iStack_50;
  CDemonActor *pCStack_4c;
  CGlass *pCStack_44;
  CGlass *pCStack_40;
  float fStack_3c;
  float fStack_30;
  int iStack_28;
  int iStack_20;
  
  sound_name = in_stack_00000004;
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  volume = 8.127652e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_b0,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004->actor_name,"shotgun-noammo.wav");
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)DOUBLE_00649b27 * (float10)DOUBLE_00649b2f);
  fVar11 = 1.4013e-44;
  fStack_30 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  iStack_20 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_28 = 0;
  if (0 < iStack_20) {
    do {
      CStack_cc.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_94 = CStack_cc.y;
      fStack_90 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_c0);
      fVar6 = (float10)fcos((float10)CStack_cc.z);
      fVar7 = (float10)fsin((float10)CStack_cc.z);
      fVar8 = (float)(fVar6 * (float10)fStack_90);
      fVar9 = (float)(fVar7 * (float10)fStack_90);
      fVar10 = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,(CVector3f *)&stack0xfffffec0,
                          (CVector3f *)&stack0xfffffed8);
      if ((CVector3f *)&stack0xfffffedc != pCVar1) {
        fVar9 = pCVar1->x;
        fVar10 = pCVar1->y;
        fVar11 = pCVar1->z;
      }
      pCStack_e8 = (CDemonActor *)((float)sound_name + fVar9);
      fStack_e4 = volume + fVar10;
      fStack_e0 = fVar8 + fVar11;
      CStack_b0.x = (float)_DAT_00649b3f / in_stack_00000004[2].orient.heading;
      fStack_dc = (float)sound_name - fVar9 * CStack_b0.x;
      CStack_d8.x = volume - fVar10 * CStack_b0.x;
      CStack_d8.y = fVar8 - fVar11 * CStack_b0.x;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      pCVar3 = (CDemonActor *)in_stack_00000004[2].orient_matrix.m[2].x;
      if (pCVar3 != (CDemonActor *)0x0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar3);
      }
      iStack_88 = 0;
      do {
        fStack_78 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                              (g_CDemonSetPtr,&CStack_cc,&CStack_d8);
        if ((fStack_78 < 0.0) || (1.0 < fStack_78)) break;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CCharacterClassInfo.name_hash);
        if ((pCVar3 != (CDemonActor *)0x0) &&
           (iVar2 = (*pCVar3->vtable[1].hasCollision)(pCVar3,in_stack_fffffe7c), 0 < iVar2)) {
          pCVar3 = (CDemonActor *)0x0;
        }
        pCStack_64 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CGlassClassInfo.name_hash);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonSetPtr->collision_actor,g_CTriggerClassInfo.name_hash);
        pCStack_74 = pCVar4;
        pCStack_68 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash);
        pCStack_68 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffea0)
        ;
        fStack_3c = fStack_5c;
        pCStack_4c = (CDemonActor *)
                     (((1.0 - (float)in_stack_fffffebc) * (float)pCVar5) / (float)(int)fStack_5c);
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_44 == (CGlass *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (iStack_50 == 0) {
                if (iStack_54 == 0) {
                  in_stack_fffffea0 = (CBoundingBox3D *)g_CFireEffectPtr;
                  core_fire_cpp_CFireEffect_FUN_004c76a0(g_CFireEffectPtr);
                  break;
                }
                core_flamecan_cpp_FUN_004cb340();
              }
              else {
                core_crate_cpp_FUN_00448a70();
              }
            }
            else {
              core_trigger_cpp_FUN_005e0aa0();
              iVar2 = core_trigger_cpp_FUN_005e0ac0();
              if (iVar2 != 0) {
                core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00();
              }
              in_stack_fffffebc = pCStack_4c;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_4c);
            }
          }
          else {
            core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(pCStack_44);
            if (extraout_EAX == 0) break;
            core_glass_cpp_CGlass_shatter_FUN_004eaef0
                      (pCStack_40,&g_CDemonSetPtr->collision_impact_position);
          }
        }
        else {
          iVar2 = (*pCVar3->vtable[1].renderOpaque)(pCVar3);
          if (iVar2 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffecc);
          CStack_b0.y = (g_CDemonSetPtr->collision_result_vec2).x -
                        (g_CDemonSetPtr->collision_result_vec1).x;
          CStack_b0.z = (g_CDemonSetPtr->collision_result_vec2).y -
                        (g_CDemonSetPtr->collision_result_vec1).y;
          fStack_a4 = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_30 = (float)_DAT_00649b47 /
                      SQRT(fStack_a4 * fStack_a4 +
                           CStack_b0.y * CStack_b0.y + CStack_b0.z * CStack_b0.z);
          fStack_f4 = CStack_b0.y * fStack_30;
          fStack_f0 = CStack_b0.z * fStack_30;
          fStack_ec = fStack_a4 * fStack_30;
          if ((float *)&stack0xfffffedc != &fStack_f4) {
            fVar11 = fStack_ec;
          }
          in_stack_fffffebc = (CDemonActor *)&pCStack_e8;
          volume = fStack_3c;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (pCVar3,(CVector3f *)in_stack_fffffebc,
                     &g_CDemonSetPtr->collision_impact_position);
          pCStack_e8 = (*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          sound_name = (CDemonActor *)&stack0xfffffee0;
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,(char *)sound_name,volume);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          fVar11 = 8.129918e-39;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        unaff_EDI = unaff_EDI + 1;
      } while (unaff_EDI < 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < iStack_20);
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  fStack_70 = fStack_a0;
  pCStack_68 = (CDemonActor *)fStack_98;
  fStack_6c = fStack_9c + FLOAT_00649b37;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  core_sound_cpp_CSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004->actor_name,"shotgun.wav");
  in_stack_00000004[2].orient_matrix.m[1].z = 0.666;
  return 1;
}


// Assembly code:
// 00588060: PUSH EBX
//   Label: core_shotgun.cpp_FUN_00588060
// 00588061: PUSH ESI
// 00588062: PUSH EDI
// 00588063: PUSH EBP
// 00588064: MOV EBP,ESP
// 00588066: SUB ESP,0x114
// 0058806c: AND ESP,0xfffffff8
// 0058806f: MOV EBX,dword ptr [EBP + 0x14]
// 00588072: LEA EAX,[ESP + 0xa8]
// 00588079: PUSH EAX
// 0058807a: MOV ESI,dword ptr [EBX + 0x154]
// 00588080: PUSH EBX
// 00588081: CALL dword ptr [ESI + 0xf4]
// 00588087: ADD ESP,0x8
// 0058808a: PUSH EAX
// 0058808b: LEA EAX,[ESP + 0x70]
// 0058808f: PUSH EAX
// 00588090: PUSH EBX
// 00588091: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00588096: ADD ESP,0xc
// 00588099: PUSH EBX
// 0058809a: CALL core_weapon.cpp_FUN_005ee6e0
//   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)
// 0058809f: ADD ESP,0x4
// 005880a2: TEST EAX,EAX
// 005880a4: JZ 0x00588398
//   XREF to: 00588398 (CONDITIONAL_JUMP)
// 005880aa: FLD float ptr [EBX + 0x578]
// 005880b0: FMUL double ptr [0x00649b27]
//   XREF to: 00649b27 (READ)
// 005880b6: FMUL double ptr [0x00649b2f]
//   XREF to: 00649b2f (READ)
// 005880bc: FPTAN
// 005880be: FSTP ST0
// 005880c0: PUSH 0xf
// 005880c2: FMUL float ptr [EBX + 0x2e8]
// 005880c8: PUSH 0xa
// 005880ca: FSTP float ptr [ESP + 0xec]
// 005880d1: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005880d6: ADD ESP,0x8
// 005880d9: XOR ECX,ECX
// 005880db: MOV dword ptr [ESP + 0xf0],EAX
// 005880e2: MOV dword ptr [ESP + 0xe8],ECX
// 005880e9: TEST EAX,EAX
// 005880eb: JLE 0x0058830a
//   XREF to: 0058830a (CONDITIONAL_JUMP)
// 005880f1: PUSH 0x40c90fdb
//   Label: LAB_005880f1
// 005880f6: PUSH 0x0
// 005880f8: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0058830a: MOV EAX,[0x006810c8]
//   Label: LAB_0058830a
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0058830f: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00588310: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 00588315: ADD ESP,0x4
// 00588318: MOV EAX,dword ptr [ESP + 0x6c]
// 0058831c: MOV dword ptr [ESP + 0x9c],EAX
// 00588323: MOV EAX,dword ptr [ESP + 0x70]
// 00588327: MOV dword ptr [ESP + 0xa0],EAX
// 0058832e: MOV EAX,dword ptr [ESP + 0x74]
// 00588332: MOV dword ptr [ESP + 0xa4],EAX
// 00588339: LEA EAX,[EBX + 0x3c]
// 0058833c: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 00588342: PUSH EAX
// 00588343: LEA EAX,[ESP + 0xa0]
// 0058834a: FLD float ptr [ESP + 0xa4]
// 00588351: PUSH EAX
// 00588352: FADD float ptr [0x00649b37]
//   XREF to: 00649b37 (READ)
// 00588358: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 00588359: FSTP float ptr [ESP + 0xac]
// 00588360: CALL core_fire.cpp_CFireEffect_FUN_004c7a60
//   XREF to: 004c7a60 (UNCONDITIONAL_CALL)
// 00588365: ADD ESP,0xc
// 00588368: LEA EAX,[ESP + 0x6c]
// 0058836c: PUSH EAX
// 0058836d: PUSH 0x649b1b
//   XREF to: 00649b1b (DATA)
// 00588372: PUSH EBX
// 00588373: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 00588379: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 0058837a: CALL core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 0058837f: MOV EAX,0x1
// 00588384: ADD ESP,0x10
// 00588387: MOV dword ptr [EBX + 0x300],0x3f2a7efa
// 00588391: MOV ESP,EBP
// 00588393: POP EBP
// 00588394: POP EDI
// 00588395: POP ESI
// 00588396: POP EBX
// 00588397: RET
// 00588398: LEA EAX,[ESP + 0x6c]
//   Label: LAB_00588398
// 0058839c: PUSH EAX
// 0058839d: PUSH 0x649b08
//   XREF to: 00649b08 (DATA)
// 005883a2: PUSH EBX
// 005883a3: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 005883a9: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 005883aa: CALL core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 005883af: ADD ESP,0x10
// 005883b2: XOR EAX,EAX
// 005883b4: MOV ESP,EBP
// 005883b6: POP EBP
// 005883b7: POP EDI
// 005883b8: POP ESI
// 005883b9: POP EBX
// 005883ba: RET
