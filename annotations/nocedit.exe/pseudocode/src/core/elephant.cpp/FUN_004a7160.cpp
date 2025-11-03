// Name: core_elephant.cpp_FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a71ff] [004a7406, 004a74a4]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a7160()
// Globals:
//   TerminatedCString s_shotgun_noammo_wav_00623fd4
//   TerminatedCString s_elephantgun_wav_00623fe7
//   double DOUBLE_00623ffa = 3.14159265350000
//   double DOUBLE_00624002 = 0.00555555555555555
//   float FLOAT_0062400a = -0.125
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CSound* g_CSoundPtr = 03f6af64
//   CFireEffect g_CFireEffectInstance
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_fire.cpp_CFireEffect_FUN_004c7a60
//   core_sound.cpp_CSound_FUN_005b3a40
//   core_weapon.cpp_FUN_005ee6e0

#include "nocturne.h"

undefined4 core_elephant_cpp_FUN_004a7160(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CDemonActor *pCVar4;
  CBoundingBox3D *pCVar5;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  float10 fVar6;
  CDemonActor *in_stack_00000004;
  SCollisionInfo *in_stack_fffffe7c;
  CBoundingBox3D *in_stack_fffffea0;
  CDemonActor *output_local_point;
  float fStack_138;
  float fVar7;
  float fVar8;
  CDemonActor *pCVar9;
  double dStack_110;
  float fStack_108;
  int iStack_104;
  CDemonActor *pCStack_100;
  CDemonActor *pCStack_fc;
  CDemonActor *pCStack_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_94;
  float fStack_90;
  int iStack_88;
  float fStack_78;
  CVector3f CStack_74;
  float local_68;
  CDemonActor *pCStack_64;
  float fStack_60;
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
  
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  pCVar9 = in_stack_00000004;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_74,pCVar1);
  iVar2 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_FUN_005b3a40
              (g_CSoundPtr,in_stack_00000004->actor_name,"shotgun-noammo.wav");
    return 0;
  }
  fVar6 = (float10)fptan((float10)*(float *)(in_stack_00000004[4].actor_name + 0x18) *
                         (float10)DOUBLE_00623ffa * (float10)DOUBLE_00624002);
  fStack_30 = (float)(fVar6 * (float10)in_stack_00000004[2].orient.heading);
  iStack_20 = core_actor_cpp_getRandomInt_FUN_0040cc70(10,0xf);
  iStack_28 = 0;
  if (0 < iStack_20) {
    do {
      fStack_c4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
      fStack_94 = fStack_c4;
      fStack_90 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fStack_c0);
      fcos((float10)fStack_c0);
      fVar6 = (float10)fsin((float10)fStack_c0);
      fVar7 = (float)(fVar6 * (float10)fStack_90);
      fVar8 = in_stack_00000004[2].orient.heading;
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (in_stack_00000004,(CVector3f *)&stack0xfffffed8,
                          (CVector3f *)&stack0xfffffecc);
      if ((CVector3f *)&stack0xfffffed0 != pCVar1) {
        fVar7 = pCVar1->x;
        fVar8 = pCVar1->y;
        pCVar9 = (CDemonActor *)pCVar1->z;
      }
      output_local_point = (CDemonActor *)(CStack_f0.x + fVar8);
      fStack_b0 = (float)DOUBLE_00624012 / in_stack_00000004[2].orient.heading;
      CStack_f0.z = fVar7 * fStack_b0;
      fStack_e4 = fVar8 * fStack_b0;
      fStack_e0 = (float)pCVar9 * fStack_b0;
      pCStack_100 = (CDemonActor *)(fStack_f4 - CStack_f0.z);
      pCStack_fc = (CDemonActor *)(CStack_f0.x - fStack_e4);
      pCStack_f8 = (CDemonActor *)(CStack_f0.y - fStack_e0);
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
                              (g_CDemonSetPtr,&CStack_f0,(CVector3f *)&fStack_138);
        dStack_110 = (double)fStack_78;
        if ((dStack_110 < 0.0) || (1.0 < dStack_110)) break;
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
        CStack_74.x = (float)pCVar4;
        CStack_74.z = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                       (g_CDemonSetPtr->collision_actor,g_CCrateClassInfo.name_hash)
        ;
        pCStack_64 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (g_CDemonSetPtr->collision_actor,g_CFlameCanClassInfo.name_hash);
        pCVar5 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_fffffea0)
        ;
        fStack_3c = fStack_5c;
        pCStack_4c = (CDemonActor *)
                     (((1.0 - (float)output_local_point) * (float)pCVar5) / (float)(int)fStack_5c);
        if (pCVar3 == (CDemonActor *)0x0) {
          if (pCStack_44 == (CGlass *)0x0) {
            if (pCVar4 == (CDemonActor *)0x0) {
              if (iStack_54 == 0) {
                if (iStack_50 == 0) {
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
              output_local_point = pCStack_4c;
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
          pCVar9 = (CDemonActor *)0x3ecccccd;
          fStack_ac = (g_CDemonSetPtr->collision_result_vec2).x -
                      (g_CDemonSetPtr->collision_result_vec1).x;
          fStack_a8 = (g_CDemonSetPtr->collision_result_vec2).y -
                      (g_CDemonSetPtr->collision_result_vec1).y;
          fStack_a4 = (g_CDemonSetPtr->collision_result_vec2).z -
                      (g_CDemonSetPtr->collision_result_vec1).z;
          fStack_30 = (float)DOUBLE_0062401a /
                      SQRT(fStack_a4 * fStack_a4 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8);
          fStack_b8 = fStack_ac * fStack_30;
          fStack_b4 = fStack_a8 * fStack_30;
          fStack_b0 = fStack_a4 * fStack_30;
          output_local_point = (CDemonActor *)&fStack_f4;
          fVar7 = fStack_3c;
          pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (pCVar3,(CVector3f *)output_local_point,
                              &g_CDemonSetPtr->collision_impact_position);
          if ((CVector3f *)&dStack_110 != pCVar1) {
            dStack_110 = *(double *)pCVar1;
            fStack_108 = pCVar1->z;
          }
          iStack_104 = *(int *)(in_stack_00000004[4].actor_name + 0xc);
          pCStack_fc = (CDemonActor *)0x6b;
          pCStack_100 = (CDemonActor *)0x3f800000;
          pCStack_f8 = in_stack_00000004;
          CStack_f0.z = (float)(*in_stack_00000004->vtable->getCarrier)(in_stack_00000004);
          fStack_138 = 6.838788e-39;
          (*pCVar3->vtable[1].playAmbientSoundWithVolume)(pCVar3,&stack0xfffffee0,fVar7);
          if (in_stack_00000004[2].orient.bank == 0.0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
        }
        unaff_EDI = (float)((int)unaff_EDI + 1);
      } while ((int)unaff_EDI < 4);
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < iStack_20);
  }
  fStack_b0 = local_68;
  fStack_a8 = fStack_60;
  fStack_ac = (float)pCStack_64 + FLOAT_0062400a;
  core_fire_cpp_CFireEffect_FUN_004c7a60(g_CFireEffectPtr);
  dStack_110 = (double)CONCAT44(dStack_110._4_4_,&pCStack_64);
  core_sound_cpp_CSound_FUN_005b3a40
            (g_CSoundPtr,in_stack_00000004->actor_name,"elephantgun.wav");
  in_stack_00000004[2].orient_matrix.m[1].z = 1.0;
  return 1;
}


// Assembly code:
// 004a7160: PUSH EBX
//   Label: core_elephant.cpp_FUN_004a7160
// 004a7161: PUSH ESI
// 004a7162: PUSH EDI
// 004a7163: PUSH EBP
// 004a7164: MOV EBP,ESP
// 004a7166: SUB ESP,0x114
// 004a716c: AND ESP,0xfffffff8
// 004a716f: MOV EBX,dword ptr [EBP + 0x14]
// 004a7172: LEA ESI,[ESP + 0xc0]
// 004a7179: PUSH ESI
// 004a717a: MOV EAX,dword ptr [EBX + 0x154]
// 004a7180: PUSH EBX
// 004a7181: CALL dword ptr [EAX + 0xf4]
// 004a7187: ADD ESP,0x8
// 004a718a: PUSH EAX
// 004a718b: LEA EAX,[ESP + 0xac]
// 004a7192: PUSH EAX
// 004a7193: PUSH EBX
// 004a7194: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004a7199: ADD ESP,0xc
// 004a719c: PUSH EBX
// 004a719d: CALL core_weapon.cpp_FUN_005ee6e0
//   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)
// 004a71a2: ADD ESP,0x4
// 004a71a5: TEST EAX,EAX
// 004a71a7: JZ 0x004a747f
//   XREF to: 004a747f (CONDITIONAL_JUMP)
// 004a71ad: FLD float ptr [EBX + 0x578]
// 004a71b3: FMUL double ptr [0x00623ffa]
//   XREF to: 00623ffa (READ)
// 004a71b9: FMUL double ptr [0x00624002]
//   XREF to: 00624002 (READ)
// 004a71bf: FPTAN
// 004a71c1: FSTP ST0
// 004a71c3: PUSH 0xf
// 004a71c5: FMUL float ptr [EBX + 0x2e8]
// 004a71cb: PUSH 0xa
// 004a71cd: FSTP float ptr [ESP + 0xec]
// 004a71d4: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004a71d9: ADD ESP,0x8
// 004a71dc: XOR ECX,ECX
// 004a71de: MOV dword ptr [ESP + 0xf0],EAX
// 004a71e5: MOV dword ptr [ESP + 0xe8],ECX
// 004a71ec: TEST EAX,EAX
// 004a71ee: JLE 0x004a7406
//   XREF to: 004a7406 (CONDITIONAL_JUMP)
// 004a71f4: PUSH 0x40c90fdb
//   Label: LAB_004a71f4
// 004a71f9: PUSH 0x0
// 004a71fb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004a7406: MOV EAX,dword ptr [ESP + 0xa8]
//   Label: LAB_004a7406
// 004a740d: MOV dword ptr [ESP + 0x60],EAX
// 004a7411: MOV EAX,dword ptr [ESP + 0xac]
// 004a7418: MOV dword ptr [ESP + 0x64],EAX
// 004a741c: MOV EAX,dword ptr [ESP + 0xb0]
// 004a7423: MOV dword ptr [ESP + 0x68],EAX
// 004a7427: LEA EAX,[EBX + 0x3c]
// 004a742a: PUSH EAX
// 004a742b: LEA EAX,[ESP + 0x64]
// 004a742f: FLD float ptr [ESP + 0x68]
// 004a7433: PUSH EAX
// 004a7434: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a7439: FADD float ptr [0x0062400a]
//   XREF to: 0062400a (READ)
// 004a743f: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004a7440: FSTP float ptr [ESP + 0x70]
// 004a7444: CALL core_fire.cpp_CFireEffect_FUN_004c7a60
//   XREF to: 004c7a60 (UNCONDITIONAL_CALL)
// 004a7449: ADD ESP,0xc
// 004a744c: LEA EAX,[ESP + 0xa8]
// 004a7453: PUSH EAX
// 004a7454: PUSH 0x623fe7
//   XREF to: 00623fe7 (DATA)
// 004a7459: PUSH EBX
// 004a745a: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004a7460: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004a7461: CALL core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 004a7466: MOV EAX,0x1
// 004a746b: ADD ESP,0x10
// 004a746e: MOV dword ptr [EBX + 0x300],0x3f800000
// 004a7478: MOV ESP,EBP
// 004a747a: POP EBP
// 004a747b: POP EDI
// 004a747c: POP ESI
// 004a747d: POP EBX
// 004a747e: RET
// 004a747f: LEA EAX,[ESP + 0xa8]
//   Label: LAB_004a747f
// 004a7486: PUSH EAX
// 004a7487: PUSH 0x623fd4
//   XREF to: 00623fd4 (DATA)
// 004a748c: PUSH EBX
// 004a748d: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004a7493: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004a7494: CALL core_sound.cpp_CSound_FUN_005b3a40
//   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
// 004a7499: ADD ESP,0x10
// 004a749c: XOR EAX,EAX
// 004a749e: MOV ESP,EBP
// 004a74a0: POP EBP
// 004a74a1: POP EDI
// 004a74a2: POP ESI
// 004a74a3: POP EBX
// 004a74a4: RET
