// Name: core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
// Address: 005267a0
// Address Range: [[005267a0, 00526afd]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0()
// Cross-references:
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525d5e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mobster_cpp_006398ae
//   TerminatedCString s_CMobster_aimTommyGun_I_m_006398c2
//   float FLOAT_006398f2 = 3
//   float FLOAT_006398f6 = 4
//   double DOUBLE_006398fe = 2
//   undefined4 g_CHeroClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f37ed0
//   undefined4 DAT_02f37ef0
//   CVector3f g_ZeroVector
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_enemy.cpp_FUN_004a9a50
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_CMobster_aimTommyGun(CMobster* param_1, undefined4
   param_2) */

void core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  CQuaternion4f *quat_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  undefined4 *puVar4;
  float unaff_EDI;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  CDeformableModelInstance *in_stack_00000018;
  float afStackY_1838 [1515];
  float fVar6;
  CQuaternion4f *in_stack_ffffff98;
  float fVar7;
  code *blend_callback;
  undefined1 auStack_58 [12];
  float afStack_4c [2];
  CVector3f local_44;
  float local_38;
  CVector3f local_34;
  float fStack_24;
  CVector3f local_20;
  float fStack_14;
  
  bVar5 = 0;
  if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0) {
    in_stack_00000004[0x8e].create_event[0x44] = '\0';
    in_stack_00000004[0x8e].create_event[0x45] = '\0';
    in_stack_00000004[0x8e].create_event[0x46] = '\0';
    in_stack_00000004[0x8e].create_event[0x47] = '\0';
  }
  else {
    if (*(int *)(in_stack_00000004[0x8d].create_event + 0x4c) != 0) {
      iVar1 = core_enemy_cpp_FUN_004a9a50();
      if ((iVar1 == 0) && (*(int *)(in_stack_00000004[0x8e].actor_name + 0x18) == 0)) {
        in_stack_00000004[0x8e].create_event[0x44] = '\0';
        in_stack_00000004[0x8e].create_event[0x45] = '\0';
        in_stack_00000004[0x8e].create_event[0x46] = '\0';
        in_stack_00000004[0x8e].create_event[0x47] = '\0';
        return;
      }
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38),
                          g_CWeaponClassInfo.name_hash);
      if (pCVar2 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\mobster.cpp";
        g_CurrentLineNumber = 0x323;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMobster::aimTommyGun - I'm not carrying one!");
      }
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_44,&g_ZeroVector,
                          (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_02f37ed0 * 4].z);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,&local_34,pCVar3);
      iVar1 = *(int *)(in_stack_00000004[0x8d].create_event + 0x4c);
      fStack_24 = *(float *)(iVar1 + 0x20) - pCVar3->x;
      local_20.x = *(float *)(iVar1 + 0x24) - pCVar3->y;
      local_20.y = *(float *)(iVar1 + 0x28) - pCVar3->z;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[0x8d].create_event + 0x4c),
                          g_CHeroClassInfo.name_hash);
      fVar7 = FLOAT_006398f2;
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar7 = FLOAT_006398f6;
      }
      local_20.y = local_20.y + fVar7;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                ((CVector3f *)&fStack_14,&local_20);
      quat_ptr = (CQuaternion4f *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (unaff_EDI - (in_stack_00000004->orient).bank);
      fVar7 = SQRT(unaff_EBP * unaff_EBP + local_20.z * local_20.z + fStack_14 * fStack_14);
      if (((float)in_stack_ffffff98 <= ABS((float)quat_ptr)) || (fVar7 <= (float)DOUBLE_006398fe)) {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44) - (float)quat_ptr;
        *(float *)(in_stack_00000004[0x8e].create_event + 0x44) = fVar6;
        if (fVar6 < 0.0) {
          in_stack_00000004[0x8e].create_event[0x44] = '\0';
          in_stack_00000004[0x8e].create_event[0x45] = '\0';
          in_stack_00000004[0x8e].create_event[0x46] = '\0';
          in_stack_00000004[0x8e].create_event[0x47] = '\0';
        }
      }
      else {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44) + (float)quat_ptr;
        *(float *)(in_stack_00000004[0x8e].create_event + 0x44) = fVar6;
        if (1.0 < fVar6) {
          in_stack_00000004[0x8e].create_event[0x44] = '\0';
          in_stack_00000004[0x8e].create_event[0x45] = '\0';
          in_stack_00000004[0x8e].create_event[0x46] = -0x80;
          in_stack_00000004[0x8e].create_event[0x47] = '?';
        }
      }
      if ((float)quat_ptr < -(float)in_stack_ffffff98) {
        quat_ptr = (CQuaternion4f *)-(float)in_stack_ffffff98;
      }
      if ((float)in_stack_ffffff98 < (float)quat_ptr) {
        quat_ptr = in_stack_ffffff98;
      }
      if (in_stack_00000004[0x1b].field7_0x6c == 0) {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 2;
      }
      else {
        fVar6 = *(float *)(in_stack_00000004[0x8e].create_event + 0x44);
        iVar1 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),iVar1,6.0,fVar6,DAT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(quat_ptr,fVar7);
      puVar4 = (undefined4 *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
      *(undefined4 *)(auStack_58 + (uint)bVar5 * -8) =
           *(undefined4 *)((int)&local_34 + (uint)bVar5 * -8);
      *(undefined4 *)(auStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) = *puVar4;
      fVar7 = local_38;
      *(undefined4 *)
       ((int)(auStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) + ((uint)bVar5 * -2 + 1) * 4) =
           puVar4[(uint)bVar5 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CQuaternion4f *)auStack_58,
                 *(float *)(in_stack_00000004[0x8e].create_event + 0x44),DAT_02f37ef0,
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                ((CQuaternion4f *)-(float)in_stack_ffffff98,fVar7);
      blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      auStack_58._8_4_ = local_44.y;
      afStack_4c[(uint)bVar5 * -2] = *(float *)((int)&local_44 + (uint)bVar5 * -8 + 8);
      iVar1 = DAT_02f37ef0;
      afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (&local_38)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
      (afStack_4c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (&local_38 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                (in_stack_00000018,(CQuaternion4f *)(auStack_58 + 8),
                 *(float *)(in_stack_00000004[0x8e].create_event + 0x44),iVar1,blend_callback);
      return;
    }
    in_stack_00000004[0x8e].create_event[0x44] = '\0';
    in_stack_00000004[0x8e].create_event[0x45] = '\0';
    in_stack_00000004[0x8e].create_event[0x46] = '\0';
    in_stack_00000004[0x8e].create_event[0x47] = '\0';
  }
  return;
}


// Assembly code:
// 005267a0: PUSH EBX
//   Label: core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
// 005267a1: PUSH ESI
// 005267a2: PUSH EDI
// 005267a3: PUSH EBP
// 005267a4: MOV EBP,ESP
// 005267a6: SUB ESP,0x74
// 005267a9: AND ESP,0xfffffff8
// 005267ac: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005267af: MOV EDX,dword ptr [EBX + 0x24f8]
// 005267b5: TEST EDX,EDX
// 005267b7: JZ 0x005267d0
//   XREF to: 005267d0 (CONDITIONAL_JUMP)
// 005267b9: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005267bf: TEST ECX,ECX
// 005267c1: JNZ 0x005267d8
//   XREF to: 005267d8 (CONDITIONAL_JUMP)
// 005267c3: MOV dword ptr [EBX + 0xbf8c],ECX
// 005267c9: MOV ESP,EBP
//   Label: LAB_005267c9
// 005267cb: POP EBP
// 005267cc: POP EDI
// 005267cd: POP ESI
// 005267ce: POP EBX
// 005267cf: RET
// 005267d0: MOV dword ptr [EBX + 0xbf8c],EDX
//   Label: LAB_005267d0
// 005267d6: JMP 0x005267c9
//   XREF to: 005267c9 (UNCONDITIONAL_JUMP)
// 005267d8: PUSH ECX
//   Label: LAB_005267d8
// 005267d9: PUSH EBX
// 005267da: CALL core_enemy.cpp_FUN_004a9a50
//   XREF to: 004a9a50 (UNCONDITIONAL_CALL)
// 005267df: ADD ESP,0x8
// 005267e2: TEST EAX,EAX
// 005267e4: JZ 0x00526a8c
//   XREF to: 00526a8c (CONDITIONAL_JUMP)
// 005267ea: MOV EAX,[0x03f95d78]
//   Label: LAB_005267ea
//   XREF to: 03f95d78 (READ)
// 005267ef: PUSH EAX
// 005267f0: MOV EDX,dword ptr [EBX + 0x24f8]
// 005267f6: PUSH EDX
// 005267f7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005267fc: ADD ESP,0x8
// 005267ff: TEST EAX,EAX
// 00526801: JNZ 0x00526826
//   XREF to: 00526826 (CONDITIONAL_JUMP)
// 00526803: MOV ECX,0x6398ae
//   XREF to: 006398ae (PARAM)
// 00526808: MOV ESI,0x323
// 0052680d: PUSH 0x6398c2
//   XREF to: 006398c2 (DATA)
// 00526812: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00526818: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0052681e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00526823: ADD ESP,0x4
// 00526826: MOV EDI,0x3f490fdb
//   Label: LAB_00526826
// 0052682b: MOV EAX,dword ptr [EBX + 0xbee0]
// 00526831: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x88] (DATA)
// 00526834: TEST EAX,EAX
// 00526836: JZ 0x0052683f
//   XREF to: 0052683f (CONDITIONAL_JUMP)
// 00526838: MOV dword ptr [ESP],0x3fc90fdb
//   XREF to: Stack[-0x88] (DATA)
// 0052683f: MOV EDX,dword ptr [0x02f37ed0]
//   Label: LAB_0052683f
//   XREF to: 02f37ed0 (READ)
// 00526845: LEA EAX,[EDX*0x4 + 0x0]
// 0052684c: SUB EAX,EDX
// 0052684e: MOV EDX,EAX
// 00526850: SHL EDX,0x4
// 00526853: LEA EAX,[EBX + 0xfd8]
// 00526859: ADD EAX,EDX
// 0052685b: PUSH EAX
// 0052685c: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00526861: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x50] (DATA)
// 00526865: PUSH EAX
// 00526866: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0052686b: ADD ESP,0xc
// 0052686e: PUSH EAX
// 0052686f: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x44] (DATA)
// 00526873: PUSH EAX
// 00526874: PUSH EBX
// 00526875: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0052687a: MOV EDX,dword ptr [EBX + 0xbe3c]
// 00526880: FLD float ptr [EDX + 0x20]
// 00526883: FSUB float ptr [EAX]
// 00526885: ADD ESP,0xc
// 00526888: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 0052688c: FLD float ptr [EDX + 0x24]
// 0052688f: FSUB float ptr [EAX + 0x4]
// 00526892: MOV ECX,dword ptr [0x02db880c]
//   XREF to: 02db880c (READ)
// 00526898: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (WRITE)
// 0052689c: FLD float ptr [EDX + 0x28]
// 0052689f: FSUB float ptr [EAX + 0x8]
// 005268a2: PUSH ECX
// 005268a3: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x30] (WRITE)
// 005268a7: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005268ad: PUSH ESI
// 005268ae: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005268b3: ADD ESP,0x8
// 005268b6: TEST EAX,EAX
// 005268b8: JZ 0x00526aa6
//   XREF to: 00526aa6 (CONDITIONAL_JUMP)
// 005268be: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 005268c2: FADD float ptr [0x006398f6]
//   XREF to: 006398f6 (READ)
// 005268c8: FSTP float ptr [ESP + 0x54]
//   Label: LAB_005268c8
//   XREF to: Stack[-0x34] (WRITE)
// 005268cc: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x38] (DATA)
// 005268d0: PUSH EAX
// 005268d1: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x2c] (DATA)
// 005268d5: PUSH EAX
// 005268d6: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005268db: ADD ESP,0x8
// 005268de: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 005268e2: FSUB float ptr [EBX + 0x34]
// 005268e5: SUB ESP,0x4
// 005268e8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8c] (DATA)
// 005268eb: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005268f0: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005268f4: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x18] (READ)
// 005268f8: ADD ESP,0x4
// 005268fb: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (WRITE)
// 005268ff: FABS
// 00526901: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 00526905: FMUL ST0
// 00526907: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 0052690b: FMUL ST0
// 0052690d: FADDP
// 0052690f: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 00526913: FMUL ST0
// 00526915: FADDP
// 00526917: FSQRT
// 00526919: FLD float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0052691c: FXCH
// 0052691e: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (WRITE)
// 00526922: FCOMPP
// 00526924: FNSTSW AX
// 00526926: SAHF
// 00526927: JBE 0x00526ab5
//   XREF to: 00526ab5 (CONDITIONAL_JUMP)
// 0052692d: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 00526931: FCOMP double ptr [0x006398fe]
//   XREF to: 006398fe (READ)
// 00526937: FNSTSW AX
// 00526939: SAHF
// 0052693a: JBE 0x00526ab5
//   XREF to: 00526ab5 (CONDITIONAL_JUMP)
// 00526940: FLD float ptr [EBX + 0xbf8c]
// 00526946: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00526949: FST float ptr [EBX + 0xbf8c]
// 0052694f: FLD1
// 00526951: FCOMPP
// 00526953: FNSTSW AX
// 00526955: SAHF
// 00526956: JNC 0x00526962
//   XREF to: 00526962 (CONDITIONAL_JUMP)
// 00526958: MOV dword ptr [EBX + 0xbf8c],0x3f800000
// 00526962: FLD float ptr [ESP + 0x5c]
//   Label: LAB_00526962
//   XREF to: Stack[-0x2c] (READ)
// 00526966: FLD float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00526969: FCHS
// 0052696b: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0052696f: FCOMP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 00526973: FNSTSW AX
// 00526975: SAHF
// 00526976: JNC 0x00526980
//   XREF to: 00526980 (CONDITIONAL_JUMP)
// 00526978: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 0052697c: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00526980: FLD float ptr [ESP + 0x5c]
//   Label: LAB_00526980
//   XREF to: Stack[-0x2c] (READ)
// 00526984: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00526987: FNSTSW AX
// 00526989: SAHF
// 0052698a: JBE 0x00526993
//   XREF to: 00526993 (CONDITIONAL_JUMP)
// 0052698c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0052698f: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00526993: FLD float ptr [ESP + 0x60]
//   Label: LAB_00526993
//   XREF to: Stack[-0x28] (READ)
// 00526997: FLD float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0052699a: FCHS
// 0052699c: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 005269a0: FCOMP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 005269a4: FNSTSW AX
// 005269a6: SAHF
// 005269a7: JNC 0x005269b1
//   XREF to: 005269b1 (CONDITIONAL_JUMP)
// 005269a9: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 005269ad: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005269b1: FLD float ptr [ESP + 0x60]
//   Label: LAB_005269b1
//   XREF to: Stack[-0x28] (READ)
// 005269b5: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 005269b8: FNSTSW AX
// 005269ba: SAHF
// 005269bb: JBE 0x005269c4
//   XREF to: 005269c4 (CONDITIONAL_JUMP)
// 005269bd: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 005269c0: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005269c4: MOV EDI,dword ptr [EBX + 0x24b4]
//   Label: LAB_005269c4
// 005269ca: LEA EAX,[EBX + 0x158]
// 005269d0: TEST EDI,EDI
// 005269d2: JZ 0x00526ae0
//   XREF to: 00526ae0 (CONDITIONAL_JUMP)
// 005269d8: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005269dd: MOV ECX,dword ptr [0x02f37ef0]
//   XREF to: 02f37ef0 (READ)
// 005269e3: PUSH ECX
// 005269e4: PUSH dword ptr [EBX + 0xbf8c]
// 005269ea: PUSH 0x40c00000
// 005269ef: PUSH 0x6
// 005269f1: PUSH EAX
//   Label: LAB_005269f1
// 005269f2: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 005269f7: ADD ESP,0x18
// 005269fa: PUSH dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005269fe: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x60] (DATA)
// 00526a02: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x80] (DATA)
// 00526a06: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 00526a0b: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x60] (DATA)
// 00526a0f: ADD ESP,0x4
// 00526a12: MOVSD ES:EDI,ESI
// 00526a13: MOVSD ES:EDI,ESI
// 00526a14: MOVSD ES:EDI,ESI
// 00526a15: MOVSD ES:EDI,ESI
// 00526a16: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 00526a1b: MOV ESI,dword ptr [0x02f37ef0]
//   XREF to: 02f37ef0 (READ)
// 00526a21: PUSH ESI
// 00526a22: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x80] (DATA)
// 00526a26: PUSH dword ptr [EBX + 0xbf8c]
// 00526a2c: PUSH EAX
// 00526a2d: LEA EAX,[EBX + 0x158]
// 00526a33: PUSH EAX
// 00526a34: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00526a3b: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 00526a40: ADD ESP,0x14
// 00526a43: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 00526a47: PUSH dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 00526a4b: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 00526a50: ADD ESP,0x4
// 00526a53: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x80] (DATA)
// 00526a57: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 00526a5c: MOV EAX,[0x02f37ef0]
//   XREF to: 02f37ef0 (READ)
// 00526a61: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x70] (DATA)
// 00526a65: PUSH EAX
// 00526a66: MOVSD ES:EDI,ESI
// 00526a67: MOVSD ES:EDI,ESI
// 00526a68: MOVSD ES:EDI,ESI
// 00526a69: MOVSD ES:EDI,ESI
// 00526a6a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x80] (DATA)
// 00526a6e: PUSH dword ptr [EBX + 0xbf8c]
// 00526a74: PUSH EAX
// 00526a75: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 00526a7c: PUSH EDX
// 00526a7d: CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 00526a82: ADD ESP,0x14
// 00526a85: MOV ESP,EBP
// 00526a87: POP EBP
// 00526a88: POP EDI
// 00526a89: POP ESI
// 00526a8a: POP EBX
// 00526a8b: RET
// 00526a8c: CMP dword ptr [EBX + 0xbee8],0x0
//   Label: LAB_00526a8c
// 00526a93: JNZ 0x005267ea
//   XREF to: 005267ea (CONDITIONAL_JUMP)
// 00526a99: MOV dword ptr [EBX + 0xbf8c],EAX
// 00526a9f: MOV ESP,EBP
// 00526aa1: POP EBP
// 00526aa2: POP EDI
// 00526aa3: POP ESI
// 00526aa4: POP EBX
// 00526aa5: RET
// 00526aa6: FLD float ptr [ESP + 0x54]
//   Label: LAB_00526aa6
//   XREF to: Stack[-0x34] (READ)
// 00526aaa: FADD float ptr [0x006398f2]
//   XREF to: 006398f2 (READ)
// 00526ab0: JMP 0x005268c8
//   XREF to: 005268c8 (UNCONDITIONAL_JUMP)
// 00526ab5: FLD float ptr [EBX + 0xbf8c]
//   Label: LAB_00526ab5
// 00526abb: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00526abe: FST float ptr [EBX + 0xbf8c]
// 00526ac4: FLDZ
// 00526ac6: FCOMPP
// 00526ac8: FNSTSW AX
// 00526aca: SAHF
// 00526acb: JBE 0x00526962
//   XREF to: 00526962 (CONDITIONAL_JUMP)
// 00526ad1: MOV dword ptr [EBX + 0xbf8c],0x0
// 00526adb: JMP 0x00526962
//   XREF to: 00526962 (UNCONDITIONAL_JUMP)
// 00526ae0: PUSH 0x59ddb0
//   Label: LAB_00526ae0
//   XREF to: 0059ddb0 (DATA)
// 00526ae5: MOV EDX,dword ptr [0x02f37ef0]
//   XREF to: 02f37ef0 (READ)
// 00526aeb: PUSH EDX
// 00526aec: PUSH dword ptr [EBX + 0xbf8c]
// 00526af2: PUSH 0x40c00000
// 00526af7: PUSH 0x2
// 00526af9: JMP 0x005269f1
//   XREF to: 005269f1 (UNCONDITIONAL_JUMP)
