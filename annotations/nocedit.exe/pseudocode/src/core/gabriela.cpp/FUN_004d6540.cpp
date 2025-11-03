// Name: core_gabriela.cpp_FUN_004d6540
// Address: 004d6540
// Address Range: [[004d6540, 004d6b2e]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6540()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3493 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062b0b5 = 3.14159265350000
//   double DOUBLE_0062b0bd = 2
//   float FLOAT_0062b0c5 = -1.570796
//   float FLOAT_0062b0c9 = 0.5
//   double DOUBLE_0062b0cd = 0.5
//   double DOUBLE_0062b0d5 = 1.5
//   WatcomTypeInfo g_CVectorTypeInfo
//   undefined4 DAT_0065e7c0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d7b860
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_gabriela.cpp_FUN_004d6260
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d6540(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_gabriela_cpp_FUN_004d6540(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  CVector3f local_134 [12];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_98;
  CVector3f aCStack_8c [2];
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  undefined4 local_3c;
  float local_30;
  undefined4 local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  if ((in_stack_0000000c == 0) &&
     (iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0
                        ((CMotionController *)(in_stack_00000004 + 1)), *(int *)(iVar4 + 0x24) == 2)
     ) {
    in_stack_0000000c = 1;
  }
  if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) == 0) ||
     (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) == 2)) {
    if ((in_stack_00000004[0x179].previous_transform_state.orientation.z == 0.0) ||
       (in_stack_0000000c != 0)) {
      in_stack_00000004[0x17a].actor_name[8] = '\0';
      in_stack_00000004[0x17a].actor_name[9] = '\0';
      in_stack_00000004[0x17a].actor_name[10] = '\0';
      in_stack_00000004[0x17a].actor_name[0xb] = '\0';
    }
    else if (in_stack_00000004[0x179].vtable == (CDemonActor_vtable *)0x0) {
      iVar4 = 0;
      local_24 = 1e+30;
      local_28 = 0;
      for (local_20 = 0; local_20 < (int)g_CDemonSetPtr->actor_list_ptr; local_20 = local_20 + 1) {
        uVar1 = *(undefined4 *)(g_CDemonSetPtr->actor_list_data + iVar4);
        local_18 = (float)core_gabriela_cpp_FUN_004d6260();
        if ((0.0 <= local_18) && (local_18 < local_24)) {
          local_28 = uVar1;
          local_24 = local_18;
        }
        iVar4 = iVar4 + 4;
      }
      *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 8) = local_28;
    }
    if (in_stack_00000004[0x179].vtable == (CDemonActor_vtable *)&DAT_00000002) {
      if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
        in_stack_00000004[0x17a].actor_name[0x18] = '\0';
        in_stack_00000004[0x17a].actor_name[0x19] = '\0';
        in_stack_00000004[0x17a].actor_name[0x1a] = '\0';
        in_stack_00000004[0x17a].actor_name[0x1b] = '\0';
        *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x14) =
             *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x18);
        *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x10) =
             *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x14);
        *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0xc) =
             *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x10);
      }
      fVar2 = in_stack_00000008 / (_DAT_0065e7c0 * (float)DOUBLE_0062b0cd) +
              in_stack_00000004[0x17a].location.position.x;
    }
    else if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
      if (0.0 < *(float *)(in_stack_00000004[0x17a].actor_name + 0x1c)) goto LAB_004d65dd;
      fVar2 = in_stack_00000004[0x17a].location.position.x - in_stack_00000008 / _DAT_0065e7c0;
    }
    else {
      crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_134,10,&g_CVectorTypeInfo);
      iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x154) +
                          0x4c))();
      if (iVar4 < 1) {
        pfVar6 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) +
                                               0x154) + 0x14))();
        fStack_a4 = *pfVar6 + pfVar6[3];
        fStack_a0 = pfVar6[1] + pfVar6[4];
        aCStack_8c[0].x = fStack_a4 * FLOAT_0062b0c9;
        fStack_9c = pfVar6[2] + pfVar6[5];
        aCStack_8c[0].y = fStack_a0 * FLOAT_0062b0c9;
        local_134[0].z = fStack_9c * FLOAT_0062b0c9;
        aCStack_8c[0].z = local_134[0].z;
        fVar2 = aCStack_8c[0].x;
        fVar3 = aCStack_8c[0].y;
        if (&CStack_50 != aCStack_8c) goto LAB_004d6841;
      }
      else if (&CStack_50 != local_134) {
        CStack_50.x = local_134[0].x;
        CStack_50.y = local_134[0].y;
        fVar2 = CStack_50.x;
        fVar3 = CStack_50.y;
LAB_004d6841:
        CStack_50.y = fVar3;
        CStack_50.x = fVar2;
        CStack_50.z = local_134[0].z;
      }
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (*(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8),&CStack_68,
                          &CStack_50);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(in_stack_00000004,&CStack_74,pCVar5)
      ;
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1));
      CStack_98.x = CStack_74.x - pCVar5->x;
      CStack_98.y = CStack_74.y - pCVar5->y;
      CStack_98.z = CStack_74.z - pCVar5->z;
      core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_5c,&CStack_98);
      fVar2 = in_stack_00000008 / _DAT_0065e7c0;
      *(float *)(in_stack_00000004[0x17a].actor_name + 0xc) = CStack_5c.x;
      fVar2 = fVar2 + in_stack_00000004[0x17a].location.position.x;
      *(float *)(in_stack_00000004[0x17a].actor_name + 0x10) = CStack_5c.y;
    }
  }
  else {
    fVar2 = (float)in_stack_00000004[0x8d].field11_0xdc * (float)DOUBLE_0062b0b5 *
            (float)DOUBLE_0062b0bd * in_stack_00000008 +
            *(float *)(in_stack_00000004[0x17a].actor_name + 0xc);
    local_3c = 0x3fc90fdb;
    *(float *)(in_stack_00000004[0x17a].actor_name + 0xc) = fVar2;
    if (fVar2 < FLOAT_0062b0c5) {
      in_stack_00000004[0x17a].actor_name[0xc] = -0x25;
      in_stack_00000004[0x17a].actor_name[0xd] = '\x0f';
      in_stack_00000004[0x17a].actor_name[0xe] = -0x37;
      in_stack_00000004[0x17a].actor_name[0xf] = -0x41;
    }
    if (1.5707964 < *(float *)(in_stack_00000004[0x17a].actor_name + 0xc)) {
      in_stack_00000004[0x17a].actor_name[0xc] = -0x25;
      in_stack_00000004[0x17a].actor_name[0xd] = '\x0f';
      in_stack_00000004[0x17a].actor_name[0xe] = -0x37;
      in_stack_00000004[0x17a].actor_name[0xf] = '?';
    }
    fVar2 = in_stack_00000008 / _DAT_0065e7c0 + in_stack_00000004[0x17a].location.position.x;
    in_stack_00000004[0x17a].actor_name[0x10] = '\0';
    in_stack_00000004[0x17a].actor_name[0x11] = '\0';
    in_stack_00000004[0x17a].actor_name[0x12] = '\0';
    in_stack_00000004[0x17a].actor_name[0x13] = '\0';
  }
  in_stack_00000004[0x17a].location.position.x = fVar2;
LAB_004d65dd:
  if (1.0 < in_stack_00000004[0x17a].location.position.x) {
    in_stack_00000004[0x17a].location.position.x = 1.0;
  }
  if (in_stack_00000004[0x17a].location.position.x < 0.0) {
    in_stack_00000004[0x17a].actor_name[0x14] = '\0';
    in_stack_00000004[0x17a].actor_name[0x15] = '\0';
    in_stack_00000004[0x17a].actor_name[0x16] = '\0';
    in_stack_00000004[0x17a].actor_name[0x17] = '\0';
    in_stack_00000004[0x17a].actor_name[0x18] = '\0';
    in_stack_00000004[0x17a].actor_name[0x19] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1a] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1b] = '\0';
    in_stack_00000004[0x17a].location.position.x = 0.0;
  }
  if (0.0 < in_stack_00000004[0x17a].location.position.x) {
    local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(in_stack_00000004[0x17a].actor_name + 0x10) -
                          *(float *)(in_stack_00000004[0x17a].actor_name + 0x18));
    local_18 = local_1c;
    local_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(in_stack_00000004[0x17a].actor_name + 0xc) -
                          *(float *)(in_stack_00000004[0x17a].actor_name + 0x14));
    fVar2 = in_stack_00000008 * (float)DOUBLE_0062b0b5 * (float)DOUBLE_0062b0d5;
    if (local_1c < -fVar2) {
      local_1c = -fVar2;
    }
    if (fVar2 < local_1c) {
      local_1c = fVar2;
    }
    if (local_30 < -fVar2) {
      local_30 = -fVar2;
    }
    if (fVar2 < local_30) {
      local_30 = fVar2;
    }
    fVar2 = *(float *)(in_stack_00000004[0x17a].actor_name + 0x18);
    *(float *)(in_stack_00000004[0x17a].actor_name + 0x14) =
         *(float *)(in_stack_00000004[0x17a].actor_name + 0x14) + local_30;
    *(float *)(in_stack_00000004[0x17a].actor_name + 0x18) = fVar2 + local_1c;
    return;
  }
  uVar1 = *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x10);
  *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x14) =
       *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0xc);
  *(undefined4 *)(in_stack_00000004[0x17a].actor_name + 0x18) = uVar1;
  return;
}


// Assembly code:
// 004d6540: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d6540
// 004d6541: PUSH ESI
// 004d6542: PUSH EDI
// 004d6543: PUSH EBP
// 004d6544: MOV EBP,ESP
// 004d6546: SUB ESP,0x124
// 004d654c: AND ESP,0xfffffff8
// 004d654f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d6552: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d6555: TEST ESI,ESI
// 004d6557: JZ 0x004d6655
//   XREF to: 004d6655 (CONDITIONAL_JUMP)
// 004d655d: CMP dword ptr [EBX + 0x1f734],0x0
//   Label: LAB_004d655d
// 004d6564: JNZ 0x004d667a
//   XREF to: 004d667a (CONDITIONAL_JUMP)
// 004d656a: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_004d656a
// 004d6571: JNZ 0x004d670c
//   XREF to: 004d670c (CONDITIONAL_JUMP)
// 004d6577: MOV dword ptr [EBX + 0x1fbf8],0x0
//   Label: LAB_004d6577
// 004d6581: CMP dword ptr [EBX + 0x1fbec],0x2
//   Label: LAB_004d6581
// 004d6588: JNZ 0x004d67d7
//   XREF to: 004d67d7 (CONDITIONAL_JUMP)
// 004d658e: MOV ESI,dword ptr [EBX + 0x1fbf8]
// 004d6594: TEST ESI,ESI
// 004d6596: JNZ 0x004d65c2
//   XREF to: 004d65c2 (CONDITIONAL_JUMP)
// 004d6598: MOV dword ptr [EBX + 0x1fc08],ESI
// 004d659e: MOV EAX,dword ptr [EBX + 0x1fc08]
// 004d65a4: MOV dword ptr [EBX + 0x1fc04],EAX
// 004d65aa: MOV EAX,dword ptr [EBX + 0x1fc04]
// 004d65b0: MOV dword ptr [EBX + 0x1fc00],EAX
// 004d65b6: MOV EAX,dword ptr [EBX + 0x1fc00]
// 004d65bc: MOV dword ptr [EBX + 0x1fbfc],EAX
// 004d65c2: FLD float ptr [0x0065e7c0]
//   Label: LAB_004d65c2
//   XREF to: 0065e7c0 (READ)
// 004d65c8: FMUL double ptr [0x0062b0cd]
//   XREF to: 0062b0cd (READ)
// 004d65ce: FDIVR float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d65d1: FADD float ptr [EBX + 0x1fc10]
// 004d65d7: FSTP float ptr [EBX + 0x1fc10]
//   Label: LAB_004d65d7
// 004d65dd: FLD float ptr [EBX + 0x1fc10]
//   Label: LAB_004d65dd
// 004d65e3: FLD1
// 004d65e5: FCOMPP
// 004d65e7: FNSTSW AX
// 004d65e9: SAHF
// 004d65ea: JNC 0x004d65f6
//   XREF to: 004d65f6 (CONDITIONAL_JUMP)
// 004d65ec: MOV dword ptr [EBX + 0x1fc10],0x3f800000
// 004d65f6: FLD float ptr [EBX + 0x1fc10]
//   Label: LAB_004d65f6
// 004d65fc: FLDZ
// 004d65fe: FCOMPP
// 004d6600: FNSTSW AX
// 004d6602: SAHF
// 004d6603: JBE 0x004d6623
//   XREF to: 004d6623 (CONDITIONAL_JUMP)
// 004d6605: MOV dword ptr [EBX + 0x1fc04],0x0
// 004d660f: MOV dword ptr [EBX + 0x1fc08],0x0
// 004d6619: MOV dword ptr [EBX + 0x1fc10],0x0
// 004d6623: FLD float ptr [EBX + 0x1fc10]
//   Label: LAB_004d6623
// 004d6629: FLDZ
// 004d662b: FCOMPP
// 004d662d: FNSTSW AX
// 004d662f: SAHF
// 004d6630: JC 0x004d69e7
//   XREF to: 004d69e7 (CONDITIONAL_JUMP)
// 004d6636: FLD float ptr [EBX + 0x1fc00]
// 004d663c: MOV EAX,dword ptr [EBX + 0x1fbfc]
// 004d6642: MOV dword ptr [EBX + 0x1fc04],EAX
// 004d6648: FSTP float ptr [EBX + 0x1fc08]
// 004d664e: MOV ESP,EBP
// 004d6650: POP EBP
// 004d6651: POP EDI
// 004d6652: POP ESI
// 004d6653: POP EBX
// 004d6654: RET
// 004d6655: LEA EAX,[EBX + 0x158]
//   Label: LAB_004d6655
// 004d665b: PUSH EAX
// 004d665c: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d6661: MOV EAX,dword ptr [EAX + 0x24]
// 004d6664: ADD ESP,0x4
// 004d6667: CMP EAX,0x2
// 004d666a: JNZ 0x004d655d
//   XREF to: 004d655d (CONDITIONAL_JUMP)
// 004d6670: MOV ESI,0x1
// 004d6675: JMP 0x004d655d
//   XREF to: 004d655d (UNCONDITIONAL_JUMP)
// 004d667a: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_004d667a
// 004d6681: JZ 0x004d656a
//   XREF to: 004d656a (CONDITIONAL_JUMP)
// 004d6687: FLD float ptr [EBX + 0xbe54]
// 004d668d: FMUL double ptr [0x0062b0b5]
//   XREF to: 0062b0b5 (READ)
// 004d6693: FMUL double ptr [0x0062b0bd]
//   XREF to: 0062b0bd (READ)
// 004d6699: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d669c: MOV ESI,0x3fc90fdb
// 004d66a1: FLD float ptr [EBX + 0x1fbfc]
// 004d66a7: FXCH
// 004d66a9: FADD ST0,ST1
// 004d66ab: MOV dword ptr [ESP + 0xfc],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 004d66b2: FSTP ST1
// 004d66b4: FST float ptr [EBX + 0x1fbfc]
// 004d66ba: FCOMP float ptr [0x0062b0c5]
//   XREF to: 0062b0c5 (READ)
// 004d66c0: FNSTSW AX
// 004d66c2: SAHF
// 004d66c3: JNC 0x004d66cf
//   XREF to: 004d66cf (CONDITIONAL_JUMP)
// 004d66c5: MOV dword ptr [EBX + 0x1fbfc],0xbfc90fdb
// 004d66cf: FLD float ptr [EBX + 0x1fbfc]
//   Label: LAB_004d66cf
// 004d66d5: FCOMP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x3c] (READ)
// 004d66dc: FNSTSW AX
// 004d66de: SAHF
// 004d66df: JBE 0x004d66ee
//   XREF to: 004d66ee (CONDITIONAL_JUMP)
// 004d66e1: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x3c] (READ)
// 004d66e8: MOV dword ptr [EBX + 0x1fbfc],EAX
// 004d66ee: FLD float ptr [EBP + 0x18]
//   Label: LAB_004d66ee
//   XREF to: Stack[0x8] (READ)
// 004d66f1: FDIV float ptr [0x0065e7c0]
//   XREF to: 0065e7c0 (READ)
// 004d66f7: FADD float ptr [EBX + 0x1fc10]
// 004d66fd: MOV dword ptr [EBX + 0x1fc00],0x0
// 004d6707: JMP 0x004d65d7
//   XREF to: 004d65d7 (UNCONDITIONAL_JUMP)
// 004d670c: TEST ESI,ESI
//   Label: LAB_004d670c
// 004d670e: JNZ 0x004d6577
//   XREF to: 004d6577 (CONDITIONAL_JUMP)
// 004d6714: CMP dword ptr [EBX + 0x1fbec],0x0
// 004d671b: JNZ 0x004d6581
//   XREF to: 004d6581 (CONDITIONAL_JUMP)
// 004d6721: MOV EDX,0x7149f2ca
// 004d6726: MOV dword ptr [ESP + 0x110],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 004d672d: MOV dword ptr [ESP + 0x118],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004d6734: XOR EDI,EDI
// 004d6736: MOV dword ptr [ESP + 0x114],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004d673d: MOV EAX,[0x006810c8]
//   Label: LAB_004d673d
//   XREF to: 006810c8 (READ)
// 004d6742: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x20] (READ)
// 004d6749: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004d674f: JGE 0x004d67c5
//   XREF to: 004d67c5 (CONDITIONAL_JUMP)
// 004d6755: MOV ESI,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 004d675c: CMP ESI,dword ptr [EBX + 0x1fbf8]
// 004d6762: SETZ AL
// 004d6765: AND EAX,0xff
// 004d676a: PUSH EAX
// 004d676b: PUSH ESI
// 004d676c: PUSH EBX
// 004d676d: CALL core_gabriela.cpp_FUN_004d6260
//   XREF to: 004d6260 (UNCONDITIONAL_CALL)
// 004d6772: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d6779: FLD float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x18] (READ)
// 004d6780: ADD ESP,0xc
// 004d6783: FST float ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 004d6786: FLDZ
// 004d6788: FCOMPP
// 004d678a: FNSTSW AX
// 004d678c: SAHF
// 004d678d: JBE 0x004d67a3
//   XREF to: 004d67a3 (CONDITIONAL_JUMP)
// 004d678f: MOV ESI,dword ptr [ESP + 0x118]
//   Label: LAB_004d678f
//   XREF to: Stack[-0x20] (READ)
// 004d6796: INC ESI
// 004d6797: ADD EDI,0x4
// 004d679a: MOV dword ptr [ESP + 0x118],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004d67a1: JMP 0x004d673d
//   XREF to: 004d673d (UNCONDITIONAL_JUMP)
// 004d67a3: FLD float ptr [ESP]
//   Label: LAB_004d67a3
//   XREF to: Stack[-0x138] (DATA)
// 004d67a6: FCOMP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x24] (READ)
// 004d67ad: FNSTSW AX
// 004d67af: SAHF
// 004d67b0: JNC 0x004d678f
//   XREF to: 004d678f (CONDITIONAL_JUMP)
// 004d67b2: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 004d67b5: MOV dword ptr [ESP + 0x110],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 004d67bc: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004d67c3: JMP 0x004d678f
//   XREF to: 004d678f (UNCONDITIONAL_JUMP)
// 004d67c5: MOV EAX,dword ptr [ESP + 0x110]
//   Label: LAB_004d67c5
//   XREF to: Stack[-0x28] (READ)
// 004d67cc: MOV dword ptr [EBX + 0x1fbf8],EAX
// 004d67d2: JMP 0x004d6581
//   XREF to: 004d6581 (UNCONDITIONAL_JUMP)
// 004d67d7: CMP dword ptr [EBX + 0x1fbf8],0x0
//   Label: LAB_004d67d7
// 004d67de: JZ 0x004d69c0
//   XREF to: 004d69c0 (CONDITIONAL_JUMP)
// 004d67e4: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004d67e9: PUSH 0xa
// 004d67eb: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x134] (DATA)
// 004d67ef: PUSH EAX
// 004d67f0: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004d67f5: ADD ESP,0xc
// 004d67f8: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x134] (DATA)
// 004d67fc: MOV EAX,dword ptr [EBX + 0x1fbf8]
// 004d6802: PUSH ESI
// 004d6803: MOV EDI,dword ptr [EAX + 0x154]
// 004d6809: PUSH EAX
// 004d680a: CALL dword ptr [EDI + 0x4c]
// 004d680d: ADD ESP,0x8
// 004d6810: TEST EAX,EAX
// 004d6812: JLE 0x004d6913
//   XREF to: 004d6913 (CONDITIONAL_JUMP)
// 004d6818: LEA EAX,[ESP + 0xe8]
// 004d681f: LEA ESI,[ESP + 0x4]
// 004d6823: CMP EAX,ESI
// 004d6825: JZ 0x004d6848
//   XREF to: 004d6848 (CONDITIONAL_JUMP)
// 004d6827: MOV EAX,dword ptr [ESP + 0x4]
// 004d682b: MOV dword ptr [ESP + 0xe8],EAX
// 004d6832: MOV EAX,dword ptr [ESP + 0x8]
// 004d6836: MOV dword ptr [ESP + 0xec],EAX
// 004d683d: MOV EAX,dword ptr [ESP + 0xc]
// 004d6841: MOV dword ptr [ESP + 0xf0],EAX
//   Label: LAB_004d6841
// 004d6848: LEA EAX,[ESP + 0xe8]
//   Label: LAB_004d6848
// 004d684f: PUSH EAX
// 004d6850: LEA EAX,[ESP + 0xd4]
// 004d6857: PUSH EAX
// 004d6858: MOV EDX,dword ptr [EBX + 0x1fbf8]
// 004d685e: PUSH EDX
// 004d685f: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d6864: ADD ESP,0xc
// 004d6867: PUSH EAX
// 004d6868: LEA EAX,[ESP + 0xc8]
// 004d686f: PUSH EAX
// 004d6870: PUSH EBX
// 004d6871: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d6876: ADD ESP,0xc
// 004d6879: MOV ECX,dword ptr [0x02d7b860]
//   XREF to: 02d7b860 (READ)
// 004d687f: PUSH ECX
// 004d6880: LEA EAX,[ESP + 0xbc]
// 004d6887: PUSH EAX
// 004d6888: LEA EAX,[EBX + 0x158]
// 004d688e: PUSH EAX
// 004d688f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004d6894: ADD ESP,0xc
// 004d6897: FLD float ptr [ESP + 0xc4]
// 004d689e: FSUB float ptr [EAX]
// 004d68a0: FLD float ptr [ESP + 0xc8]
// 004d68a7: FXCH
// 004d68a9: FSTP float ptr [ESP + 0xa0]
// 004d68b0: FSUB float ptr [EAX + 0x4]
// 004d68b3: FLD float ptr [ESP + 0xcc]
// 004d68ba: FXCH
// 004d68bc: FSTP float ptr [ESP + 0xa4]
// 004d68c3: FSUB float ptr [EAX + 0x8]
// 004d68c6: LEA EAX,[ESP + 0xa0]
// 004d68cd: PUSH EAX
// 004d68ce: LEA EAX,[ESP + 0xe0]
// 004d68d5: PUSH EAX
// 004d68d6: FSTP float ptr [ESP + 0xb0]
// 004d68dd: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d68e2: ADD ESP,0x8
// 004d68e5: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d68e8: FDIV float ptr [0x0065e7c0]
//   XREF to: 0065e7c0 (READ)
// 004d68ee: MOV EAX,dword ptr [ESP + 0xdc]
// 004d68f5: MOV dword ptr [EBX + 0x1fbfc],EAX
// 004d68fb: MOV EAX,dword ptr [ESP + 0xe0]
// 004d6902: FADD float ptr [EBX + 0x1fc10]
// 004d6908: MOV dword ptr [EBX + 0x1fc00],EAX
// 004d690e: JMP 0x004d65d7
//   XREF to: 004d65d7 (UNCONDITIONAL_JUMP)
// 004d6913: LEA ESI,[ESP + 0x7c]
//   Label: LAB_004d6913
// 004d6917: MOV EAX,dword ptr [EBX + 0x1fbf8]
// 004d691d: PUSH ESI
// 004d691e: MOV EDI,dword ptr [EAX + 0x154]
// 004d6924: PUSH EAX
// 004d6925: CALL dword ptr [EDI + 0x14]
// 004d6928: LEA ESI,[EAX + 0xc]
// 004d692b: FLD float ptr [EAX]
// 004d692d: FADD float ptr [ESI]
// 004d692f: ADD ESP,0x8
// 004d6932: FST float ptr [ESP + 0x94]
// 004d6939: FLD float ptr [EAX + 0x4]
// 004d693c: FADD float ptr [ESI + 0x4]
// 004d693f: FXCH
// 004d6941: FLD float ptr [0x0062b0c9]
//   XREF to: 0062b0c9 (READ)
// 004d6947: FXCH
// 004d6949: FMUL ST1
// 004d694b: FXCH ST2
// 004d694d: FST float ptr [ESP + 0x98]
// 004d6954: FLD float ptr [EAX + 0x8]
// 004d6957: FADD float ptr [ESI + 0x8]
// 004d695a: FXCH
// 004d695c: FMUL ST2
// 004d695e: FXCH
// 004d6960: FST float ptr [ESP + 0x9c]
// 004d6967: FMULP ST2
// 004d6969: LEA EAX,[ESP + 0xac]
// 004d6970: FXCH ST2
// 004d6972: FSTP float ptr [ESP + 0xac]
// 004d6979: FXCH
// 004d697b: FSTP float ptr [ESP + 0xb0]
// 004d6982: LEA ESI,[ESP + 0xe8]
// 004d6989: FSTP float ptr [ESP + 0xb4]
// 004d6990: CMP ESI,EAX
// 004d6992: JZ 0x004d6848
//   XREF to: 004d6848 (CONDITIONAL_JUMP)
// 004d6998: MOV EAX,dword ptr [ESP + 0xac]
// 004d699f: MOV dword ptr [ESP + 0xe8],EAX
// 004d69a6: MOV EAX,dword ptr [ESP + 0xb0]
// 004d69ad: MOV dword ptr [ESP + 0xec],EAX
// 004d69b4: MOV EAX,dword ptr [ESP + 0xb4]
// 004d69bb: JMP 0x004d6841
//   XREF to: 004d6841 (UNCONDITIONAL_JUMP)
// 004d69c0: FLD float ptr [EBX + 0x1fc0c]
//   Label: LAB_004d69c0
// 004d69c6: FLDZ
// 004d69c8: FCOMPP
// 004d69ca: FNSTSW AX
// 004d69cc: SAHF
// 004d69cd: JC 0x004d65dd
//   XREF to: 004d65dd (CONDITIONAL_JUMP)
// 004d69d3: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d69d6: FDIV float ptr [0x0065e7c0]
//   XREF to: 0065e7c0 (READ)
// 004d69dc: FSUBR float ptr [EBX + 0x1fc10]
// 004d69e2: JMP 0x004d65d7
//   XREF to: 004d65d7 (UNCONDITIONAL_JUMP)
// 004d69e7: FLD float ptr [EBX + 0x1fc00]
//   Label: LAB_004d69e7
// 004d69ed: FSUB float ptr [EBX + 0x1fc08]
// 004d69f3: SUB ESP,0x4
// 004d69f6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x13c] (DATA)
// 004d69f9: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d69fe: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d6a05: FLD float ptr [EBX + 0x1fbfc]
// 004d6a0b: FLD float ptr [ESP + 0x124]
//   XREF to: Stack[-0x18] (READ)
// 004d6a12: ADD ESP,0x4
// 004d6a15: FXCH
// 004d6a17: FSUB float ptr [EBX + 0x1fc04]
// 004d6a1d: FXCH
// 004d6a1f: FSTP float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (WRITE)
// 004d6a26: SUB ESP,0x4
// 004d6a29: FSTP float ptr [ESP]
//   XREF to: Stack[-0x13c] (DATA)
// 004d6a2c: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d6a31: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d6a38: FLD float ptr [ESP + 0x124]
//   XREF to: Stack[-0x18] (READ)
// 004d6a3f: ADD ESP,0x4
// 004d6a42: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d6a45: FMUL double ptr [0x0062b0b5]
//   XREF to: 0062b0b5 (READ)
// 004d6a4b: FMUL double ptr [0x0062b0d5]
//   XREF to: 0062b0d5 (READ)
// 004d6a51: FLD float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (READ)
// 004d6a58: FXCH ST2
// 004d6a5a: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (WRITE)
// 004d6a61: FST float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (WRITE)
// 004d6a68: FCHS
// 004d6a6a: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (WRITE)
// 004d6a71: FCOMP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (READ)
// 004d6a78: FNSTSW AX
// 004d6a7a: SAHF
// 004d6a7b: JNC 0x004d6a8b
//   XREF to: 004d6a8b (CONDITIONAL_JUMP)
// 004d6a7d: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x38] (READ)
// 004d6a84: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d6a8b: FLD float ptr [ESP + 0x11c]
//   Label: LAB_004d6a8b
//   XREF to: Stack[-0x1c] (READ)
// 004d6a92: FCOMP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 004d6a99: FNSTSW AX
// 004d6a9b: SAHF
// 004d6a9c: JBE 0x004d6aac
//   XREF to: 004d6aac (CONDITIONAL_JUMP)
// 004d6a9e: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 004d6aa5: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d6aac: FLD float ptr [ESP + 0x108]
//   Label: LAB_004d6aac
//   XREF to: Stack[-0x30] (READ)
// 004d6ab3: FLD float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 004d6aba: FCHS
// 004d6abc: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (WRITE)
// 004d6ac3: FCOMP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (READ)
// 004d6aca: FNSTSW AX
// 004d6acc: SAHF
// 004d6acd: JNC 0x004d6add
//   XREF to: 004d6add (CONDITIONAL_JUMP)
// 004d6acf: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x34] (READ)
// 004d6ad6: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004d6add: FLD float ptr [ESP + 0x108]
//   Label: LAB_004d6add
//   XREF to: Stack[-0x30] (READ)
// 004d6ae4: FCOMP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 004d6aeb: FNSTSW AX
// 004d6aed: SAHF
// 004d6aee: JBE 0x004d6afe
//   XREF to: 004d6afe (CONDITIONAL_JUMP)
// 004d6af0: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x2c] (READ)
// 004d6af7: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004d6afe: FLD float ptr [EBX + 0x1fc08]
//   Label: LAB_004d6afe
// 004d6b04: FLD float ptr [EBX + 0x1fc04]
// 004d6b0a: FADD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x30] (READ)
// 004d6b11: FXCH
// 004d6b13: FADD float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x1c] (READ)
// 004d6b1a: FXCH
// 004d6b1c: FSTP float ptr [EBX + 0x1fc04]
// 004d6b22: FSTP float ptr [EBX + 0x1fc08]
// 004d6b28: MOV ESP,EBP
// 004d6b2a: POP EBP
// 004d6b2b: POP EDI
// 004d6b2c: POP ESI
// 004d6b2d: POP EBX
// 004d6b2e: RET
