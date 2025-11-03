// Name: core_scat.cpp_FUN_00558720
// Address: 00558720
// Address Range: [[00558720, 00558ce0]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558720()
// Cross-references:
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557516 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064144c = 3.14159265350000
//   double DOUBLE_00641454 = 2
//   float FLOAT_0064145c = -1.570796
//   float FLOAT_00641460 = 0.5
//   double DOUBLE_00641464 = 1.5
//   double DOUBLE_0064146c = 0.0200000000000000
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_03106174
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_scat.cpp_FUN_00558cf0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00558720(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_scat_cpp_FUN_00558720(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  float *pfVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  CDemonActor_vtable *local_13c;
  CVector3f local_138 [13];
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CDemonActor_vtable *local_2c;
  int local_28;
  float local_24;
  int local_20;
  undefined4 local_1c;
  float local_18;
  
  in_stack_00000004[0x17a].actor_name[0xc] = '\0';
  in_stack_00000004[0x17a].actor_name[0xd] = '\0';
  in_stack_00000004[0x17a].actor_name[0xe] = '\0';
  in_stack_00000004[0x17a].actor_name[0xf] = '\0';
  if ((in_stack_0000000c == 0) &&
     (iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0
                        ((CMotionController *)(in_stack_00000004 + 1)), *(int *)(iVar3 + 0x24) == 2)
     ) {
    in_stack_0000000c = 1;
  }
  local_13c = in_stack_00000004[0x179].vtable;
  local_2c = *(CDemonActor_vtable **)in_stack_00000004[0x17a].actor_name;
  if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) != 0) &&
     (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) != 2)) {
    local_13c = (CDemonActor_vtable *)
                ((float)in_stack_00000004[0x8d].field11_0xdc * (float)DOUBLE_0064144c *
                 (float)DOUBLE_00641454 * in_stack_00000008 + (float)local_13c);
    local_1c = 0x3fc90fdb;
    if ((float)local_13c < FLOAT_0064145c) {
      local_13c = (CDemonActor_vtable *)0xbfc90fdb;
    }
    if (1.5707964 < (float)local_13c) {
      local_13c = (CDemonActor_vtable *)0x3fc90fdb;
    }
    local_2c = (CDemonActor_vtable *)0x0;
    goto LAB_005587bd;
  }
  if ((in_stack_00000004[0x179].previous_transform_state.orientation.z == 0.0) ||
     (in_stack_0000000c != 0)) {
    in_stack_00000004[0x17a].actor_name[8] = '\0';
    in_stack_00000004[0x17a].actor_name[9] = '\0';
    in_stack_00000004[0x17a].actor_name[10] = '\0';
    in_stack_00000004[0x17a].actor_name[0xb] = '\0';
  }
  else if (*(int *)(in_stack_00000004[0x8d].create_event + 0x48) == 0) {
    local_28 = in_stack_0000000c;
    local_24 = 1e+30;
    iVar3 = 0;
    for (local_20 = in_stack_0000000c; local_20 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_20 = local_20 + 1) {
      iVar1 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar3);
      local_18 = (float)core_scat_cpp_FUN_00558cf0();
      if ((0.0 <= local_18) && (local_18 < local_24)) {
        local_28 = iVar1;
        local_24 = local_18;
      }
      iVar3 = iVar3 + 4;
    }
    *(int *)(in_stack_00000004[0x17a].actor_name + 8) = local_28;
  }
  if (*(int *)(in_stack_00000004[0x8d].create_event + 0x48) != 0) {
    if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
      in_stack_00000004[0x17a].actor_name[0] = '\0';
      in_stack_00000004[0x17a].actor_name[1] = '\0';
      in_stack_00000004[0x17a].actor_name[2] = '\0';
      in_stack_00000004[0x17a].actor_name[3] = '\0';
      in_stack_00000004[0x179].vtable = *(CDemonActor_vtable **)in_stack_00000004[0x17a].actor_name;
      local_13c = in_stack_00000004[0x179].vtable;
      local_2c = local_13c;
    }
    goto LAB_005587bd;
  }
  if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) goto LAB_005587bd;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_138,10,&g_CVectorTypeInfo);
  iVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x154) + 0x4c))
                    ();
  if (iVar3 < 1) {
    pfVar5 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) +
                                           0x154) + 0x14))();
    fStack_90 = *pfVar5 + pfVar5[3];
    fStack_8c = pfVar5[1] + pfVar5[4];
    CStack_78.x = fStack_90 * FLOAT_00641460;
    fStack_88 = pfVar5[2] + pfVar5[5];
    CStack_78.y = fStack_8c * FLOAT_00641460;
    local_138[0].z = fStack_88 * FLOAT_00641460;
    CStack_78.z = local_138[0].z;
    fVar6 = CStack_78.x;
    fVar2 = CStack_78.y;
    if (&CStack_60 != &CStack_78) goto LAB_00558aeb;
  }
  else if (&CStack_60 != local_138) {
    CStack_60.x = local_138[0].x;
    CStack_60.y = local_138[0].y;
    fVar6 = CStack_60.x;
    fVar2 = CStack_60.y;
LAB_00558aeb:
    CStack_60.y = fVar2;
    CStack_60.x = fVar6;
    CStack_60.z = local_138[0].z;
  }
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8),&CStack_6c,
                      &CStack_60);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(in_stack_00000004,&CStack_9c,pCVar4);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  CStack_84.x = CStack_9c.x - pCVar4->x;
  CStack_84.y = CStack_9c.y - pCVar4->y;
  CStack_84.z = CStack_9c.z - pCVar4->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_54,&CStack_84);
  local_13c = (CDemonActor_vtable *)CStack_54.x;
  local_2c = (CDemonActor_vtable *)CStack_54.y;
LAB_005587bd:
  local_38 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)local_2c - *(float *)in_stack_00000004[0x17a].actor_name);
  local_18 = local_38;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)local_13c - (float)in_stack_00000004[0x179].vtable);
  local_30 = in_stack_00000008 * (float)DOUBLE_0064144c * (float)DOUBLE_00641464;
  local_3c = -local_30;
  if (local_38 < local_3c) {
    local_38 = local_3c;
  }
  if (local_30 < local_38) {
    local_38 = local_30;
  }
  local_40 = -local_30;
  local_34 = local_18;
  if (local_18 < local_40) {
    local_34 = local_40;
  }
  if (local_30 < local_34) {
    local_34 = local_30;
  }
  fVar6 = *(float *)in_stack_00000004[0x17a].actor_name;
  iVar3 = *(int *)(in_stack_00000004[0x17a].actor_name + 8);
  in_stack_00000004[0x179].vtable =
       (CDemonActor_vtable *)((float)in_stack_00000004[0x179].vtable + local_34);
  *(float *)in_stack_00000004[0x17a].actor_name = fVar6 + local_38;
  if ((iVar3 != 0) && (in_stack_0000000c == 0)) {
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)in_stack_00000004[0x17a].actor_name - (float)local_2c);
    if (((float)DOUBLE_0064146c <= ABS(local_18)) &&
       (fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (*(float *)in_stack_00000004[0x17a].actor_name - (float)local_2c),
       (float)DOUBLE_0064146c <= ABS(fVar6))) {
      return;
    }
    in_stack_00000004[0x17a].actor_name[0xc] = '\x01';
    in_stack_00000004[0x17a].actor_name[0xd] = '\0';
    in_stack_00000004[0x17a].actor_name[0xe] = '\0';
    in_stack_00000004[0x17a].actor_name[0xf] = '\0';
    return;
  }
  return;
}


// Assembly code:
// 00558720: PUSH EBX
//   Label: core_scat.cpp_FUN_00558720
// 00558721: PUSH ESI
// 00558722: PUSH EDI
// 00558723: PUSH EBP
// 00558724: MOV EBP,ESP
// 00558726: SUB ESP,0x12c
// 0055872c: AND ESP,0xfffffff8
// 0055872f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00558732: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00558735: MOV dword ptr [ESI + 0x1fbfc],0x0
// 0055873f: TEST EDX,EDX
// 00558741: JZ 0x00558916
//   XREF to: 00558916 (CONDITIONAL_JUMP)
// 00558747: MOV EAX,dword ptr [ESI + 0x1fbec]
//   Label: LAB_00558747
// 0055874d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 00558751: MOV EAX,dword ptr [ESI + 0x1fbf0]
// 00558757: MOV EBX,dword ptr [ESI + 0x1f734]
// 0055875d: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00558764: TEST EBX,EBX
// 00558766: JNZ 0x0055893d
//   XREF to: 0055893d (CONDITIONAL_JUMP)
// 0055876c: CMP dword ptr [ESI + 0x1fbd4],0x0
//   Label: LAB_0055876c
// 00558773: JNZ 0x005589b5
//   XREF to: 005589b5 (CONDITIONAL_JUMP)
// 00558779: MOV dword ptr [ESI + 0x1fbf8],0x0
//   Label: LAB_00558779
// 00558783: CMP dword ptr [ESI + 0xbe38],0x0
//   Label: LAB_00558783
// 0055878a: JZ 0x00558a81
//   XREF to: 00558a81 (CONDITIONAL_JUMP)
// 00558790: MOV EBX,dword ptr [ESI + 0x1fbf8]
// 00558796: TEST EBX,EBX
// 00558798: JNZ 0x005587bd
//   XREF to: 005587bd (CONDITIONAL_JUMP)
// 0055879a: MOV dword ptr [ESI + 0x1fbf0],EBX
// 005587a0: MOV EAX,dword ptr [ESI + 0x1fbf0]
// 005587a6: MOV dword ptr [ESI + 0x1fbec],EAX
// 005587ac: MOV EAX,dword ptr [ESI + 0x1fbec]
// 005587b2: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005587b9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005587bd: FLD float ptr [ESP + 0x114]
//   Label: LAB_005587bd
//   XREF to: Stack[-0x2c] (READ)
// 005587c4: FSUB float ptr [ESI + 0x1fbf0]
// 005587ca: SUB ESP,0x4
// 005587cd: FSTP float ptr [ESP]
//   XREF to: Stack[-0x144] (DATA)
// 005587d0: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005587d5: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005587dc: FLD float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x18] (READ)
// 005587e3: ADD ESP,0x4
// 005587e6: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x13c] (READ)
// 005587ea: FXCH
// 005587ec: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x38] (WRITE)
// 005587f3: FSUB float ptr [ESI + 0x1fbec]
// 005587f9: SUB ESP,0x4
// 005587fc: FSTP float ptr [ESP]
//   XREF to: Stack[-0x144] (DATA)
// 005587ff: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00558804: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0055880b: FLD float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x18] (READ)
// 00558812: ADD ESP,0x4
// 00558815: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00558818: FMUL double ptr [0x0064144c]
//   XREF to: 0064144c (READ)
// 0055881e: FMUL double ptr [0x00641464]
//   XREF to: 00641464 (READ)
// 00558824: FLD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x38] (READ)
// 0055882b: FXCH ST2
// 0055882d: FSTP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x34] (WRITE)
// 00558834: FST float ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (WRITE)
// 0055883b: FCHS
// 0055883d: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x3c] (WRITE)
// 00558844: FCOMP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x3c] (READ)
// 0055884b: FNSTSW AX
// 0055884d: SAHF
// 0055884e: JNC 0x0055885e
//   XREF to: 0055885e (CONDITIONAL_JUMP)
// 00558850: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x3c] (READ)
// 00558857: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0055885e: FLD float ptr [ESP + 0x108]
//   Label: LAB_0055885e
//   XREF to: Stack[-0x38] (READ)
// 00558865: FCOMP float ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (READ)
// 0055886c: FNSTSW AX
// 0055886e: SAHF
// 0055886f: JBE 0x0055887f
//   XREF to: 0055887f (CONDITIONAL_JUMP)
// 00558871: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (READ)
// 00558878: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0055887f: FLD float ptr [ESP + 0x10c]
//   Label: LAB_0055887f
//   XREF to: Stack[-0x34] (READ)
// 00558886: FLD float ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (READ)
// 0055888d: FCHS
// 0055888f: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x40] (WRITE)
// 00558896: FCOMP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x40] (READ)
// 0055889d: FNSTSW AX
// 0055889f: SAHF
// 005588a0: JNC 0x005588b0
//   XREF to: 005588b0 (CONDITIONAL_JUMP)
// 005588a2: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x40] (READ)
// 005588a9: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005588b0: FLD float ptr [ESP + 0x10c]
//   Label: LAB_005588b0
//   XREF to: Stack[-0x34] (READ)
// 005588b7: FCOMP float ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (READ)
// 005588be: FNSTSW AX
// 005588c0: SAHF
// 005588c1: JBE 0x005588d1
//   XREF to: 005588d1 (CONDITIONAL_JUMP)
// 005588c3: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (READ)
// 005588ca: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005588d1: FLD float ptr [ESI + 0x1fbf0]
//   Label: LAB_005588d1
// 005588d7: FLD float ptr [ESI + 0x1fbec]
// 005588dd: MOV EDI,dword ptr [ESI + 0x1fbf8]
// 005588e3: FADD float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x34] (READ)
// 005588ea: FXCH
// 005588ec: FADD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x38] (READ)
// 005588f3: FXCH
// 005588f5: FSTP float ptr [ESI + 0x1fbec]
// 005588fb: FSTP float ptr [ESI + 0x1fbf0]
// 00558901: TEST EDI,EDI
// 00558903: JZ 0x0055890f
//   XREF to: 0055890f (CONDITIONAL_JUMP)
// 00558905: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00558909: JZ 0x00558c5d
//   XREF to: 00558c5d (CONDITIONAL_JUMP)
// 0055890f: MOV ESP,EBP
//   Label: LAB_0055890f
// 00558911: POP EBP
// 00558912: POP EDI
// 00558913: POP ESI
// 00558914: POP EBX
// 00558915: RET
// 00558916: LEA EAX,[ESI + 0x158]
//   Label: LAB_00558916
// 0055891c: PUSH EAX
// 0055891d: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00558922: MOV EAX,dword ptr [EAX + 0x24]
// 00558925: ADD ESP,0x4
// 00558928: CMP EAX,0x2
// 0055892b: JNZ 0x00558747
//   XREF to: 00558747 (CONDITIONAL_JUMP)
// 00558931: MOV dword ptr [EBP + 0x1c],0x1
//   XREF to: Stack[0xc] (WRITE)
// 00558938: JMP 0x00558747
//   XREF to: 00558747 (UNCONDITIONAL_JUMP)
// 0055893d: CMP dword ptr [ESI + 0xbe28],0x2
//   Label: LAB_0055893d
// 00558944: JZ 0x0055876c
//   XREF to: 0055876c (CONDITIONAL_JUMP)
// 0055894a: FLD float ptr [ESI + 0xbe54]
// 00558950: FMUL double ptr [0x0064144c]
//   XREF to: 0064144c (READ)
// 00558956: FMUL double ptr [0x00641454]
//   XREF to: 00641454 (READ)
// 0055895c: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055895f: MOV EAX,0x3fc90fdb
// 00558964: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x13c] (READ)
// 00558968: FXCH
// 0055896a: FADD ST0,ST1
// 0055896c: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00558973: FSTP ST1
// 00558975: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x13c] (WRITE)
// 00558979: FCOMP float ptr [0x0064145c]
//   XREF to: 0064145c (READ)
// 0055897f: FNSTSW AX
// 00558981: SAHF
// 00558982: JNC 0x0055898c
//   XREF to: 0055898c (CONDITIONAL_JUMP)
// 00558984: MOV dword ptr [ESP + 0x4],0xbfc90fdb
//   XREF to: Stack[-0x13c] (WRITE)
// 0055898c: FLD float ptr [ESP + 0x4]
//   Label: LAB_0055898c
//   XREF to: Stack[-0x13c] (READ)
// 00558990: FCOMP float ptr [ESP + 0x124]
//   XREF to: Stack[-0x1c] (READ)
// 00558997: FNSTSW AX
// 00558999: SAHF
// 0055899a: JBE 0x005589a7
//   XREF to: 005589a7 (CONDITIONAL_JUMP)
// 0055899c: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x1c] (READ)
// 005589a3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005589a7: XOR ECX,ECX
//   Label: LAB_005589a7
// 005589a9: MOV dword ptr [ESP + 0x114],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005589b0: JMP 0x005587bd
//   XREF to: 005587bd (UNCONDITIONAL_JUMP)
// 005589b5: MOV EDI,dword ptr [EBP + 0x1c]
//   Label: LAB_005589b5
//   XREF to: Stack[0xc] (READ)
// 005589b8: TEST EDI,EDI
// 005589ba: JNZ 0x00558779
//   XREF to: 00558779 (CONDITIONAL_JUMP)
// 005589c0: CMP dword ptr [ESI + 0xbe38],0x0
// 005589c7: JNZ 0x00558783
//   XREF to: 00558783 (CONDITIONAL_JUMP)
// 005589cd: MOV EDX,0x7149f2ca
// 005589d2: MOV dword ptr [ESP + 0x118],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005589d9: MOV dword ptr [ESP + 0x120],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005589e0: MOV dword ptr [ESP + 0x11c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005589e7: MOV EAX,[0x006810c8]
//   Label: LAB_005589e7
//   XREF to: 006810c8 (READ)
// 005589ec: MOV EBX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (READ)
// 005589f3: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005589f9: JGE 0x00558a6f
//   XREF to: 00558a6f (CONDITIONAL_JUMP)
// 005589ff: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 00558a06: CMP EBX,dword ptr [ESI + 0x1fbf8]
// 00558a0c: SETZ AL
// 00558a0f: AND EAX,0xff
// 00558a14: PUSH EAX
// 00558a15: PUSH EBX
// 00558a16: PUSH ESI
// 00558a17: CALL core_scat.cpp_FUN_00558cf0
//   XREF to: 00558cf0 (UNCONDITIONAL_CALL)
// 00558a1c: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00558a23: FLD float ptr [ESP + 0x134]
//   XREF to: Stack[-0x18] (READ)
// 00558a2a: ADD ESP,0xc
// 00558a2d: FST float ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 00558a30: FLDZ
// 00558a32: FCOMPP
// 00558a34: FNSTSW AX
// 00558a36: SAHF
// 00558a37: JBE 0x00558a4d
//   XREF to: 00558a4d (CONDITIONAL_JUMP)
// 00558a39: MOV EBX,dword ptr [ESP + 0x120]
//   Label: LAB_00558a39
//   XREF to: Stack[-0x20] (READ)
// 00558a40: INC EBX
// 00558a41: ADD EDI,0x4
// 00558a44: MOV dword ptr [ESP + 0x120],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00558a4b: JMP 0x005589e7
//   XREF to: 005589e7 (UNCONDITIONAL_JUMP)
// 00558a4d: FLD float ptr [ESP]
//   Label: LAB_00558a4d
//   XREF to: Stack[-0x140] (DATA)
// 00558a50: FCOMP float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x24] (READ)
// 00558a57: FNSTSW AX
// 00558a59: SAHF
// 00558a5a: JNC 0x00558a39
//   XREF to: 00558a39 (CONDITIONAL_JUMP)
// 00558a5c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 00558a5f: MOV dword ptr [ESP + 0x118],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00558a66: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00558a6d: JMP 0x00558a39
//   XREF to: 00558a39 (UNCONDITIONAL_JUMP)
// 00558a6f: MOV EAX,dword ptr [ESP + 0x118]
//   Label: LAB_00558a6f
//   XREF to: Stack[-0x28] (READ)
// 00558a76: MOV dword ptr [ESI + 0x1fbf8],EAX
// 00558a7c: JMP 0x00558783
//   XREF to: 00558783 (UNCONDITIONAL_JUMP)
// 00558a81: CMP dword ptr [ESI + 0x1fbf8],0x0
//   Label: LAB_00558a81
// 00558a88: JZ 0x005587bd
//   XREF to: 005587bd (CONDITIONAL_JUMP)
// 00558a8e: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00558a93: PUSH 0xa
// 00558a95: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x138] (DATA)
// 00558a99: PUSH EAX
// 00558a9a: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00558a9f: ADD ESP,0xc
// 00558aa2: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x138] (DATA)
// 00558aa6: MOV EAX,dword ptr [ESI + 0x1fbf8]
// 00558aac: PUSH EDI
// 00558aad: MOV EBX,dword ptr [EAX + 0x154]
// 00558ab3: PUSH EAX
// 00558ab4: CALL dword ptr [EBX + 0x4c]
// 00558ab7: ADD ESP,0x8
// 00558aba: TEST EAX,EAX
// 00558abc: JLE 0x00558bad
//   XREF to: 00558bad (CONDITIONAL_JUMP)
// 00558ac2: LEA EBX,[ESP + 0xe0]
// 00558ac9: LEA EAX,[ESP + 0x8]
// 00558acd: CMP EBX,EAX
// 00558acf: JZ 0x00558af2
//   XREF to: 00558af2 (CONDITIONAL_JUMP)
// 00558ad1: MOV EAX,dword ptr [ESP + 0x8]
// 00558ad5: MOV dword ptr [ESP + 0xe0],EAX
// 00558adc: MOV EAX,dword ptr [ESP + 0xc]
// 00558ae0: MOV dword ptr [ESP + 0xe4],EAX
// 00558ae7: MOV EAX,dword ptr [ESP + 0x10]
// 00558aeb: MOV dword ptr [ESP + 0xe8],EAX
//   Label: LAB_00558aeb
// 00558af2: LEA EAX,[ESP + 0xe0]
//   Label: LAB_00558af2
// 00558af9: PUSH EAX
// 00558afa: LEA EAX,[ESP + 0xd8]
// 00558b01: PUSH EAX
// 00558b02: MOV EDX,dword ptr [ESI + 0x1fbf8]
// 00558b08: PUSH EDX
// 00558b09: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00558b0e: ADD ESP,0xc
// 00558b11: PUSH EAX
// 00558b12: LEA EAX,[ESP + 0xa8]
// 00558b19: PUSH EAX
// 00558b1a: PUSH ESI
// 00558b1b: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00558b20: ADD ESP,0xc
// 00558b23: MOV ECX,dword ptr [0x03106174]
//   XREF to: 03106174 (READ)
// 00558b29: PUSH ECX
// 00558b2a: LEA EAX,[ESP + 0x9c]
// 00558b31: PUSH EAX
// 00558b32: LEA EAX,[ESI + 0x158]
// 00558b38: PUSH EAX
// 00558b39: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00558b3e: ADD ESP,0xc
// 00558b41: FLD float ptr [ESP + 0xa4]
// 00558b48: FSUB float ptr [EAX]
// 00558b4a: FLD float ptr [ESP + 0xa8]
// 00558b51: FXCH
// 00558b53: FSTP float ptr [ESP + 0xbc]
// 00558b5a: FSUB float ptr [EAX + 0x4]
// 00558b5d: FLD float ptr [ESP + 0xac]
// 00558b64: FXCH
// 00558b66: FSTP float ptr [ESP + 0xc0]
// 00558b6d: FSUB float ptr [EAX + 0x8]
// 00558b70: LEA EAX,[ESP + 0xbc]
// 00558b77: PUSH EAX
// 00558b78: LEA EAX,[ESP + 0xf0]
// 00558b7f: PUSH EAX
// 00558b80: FSTP float ptr [ESP + 0xcc]
// 00558b87: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00558b8c: ADD ESP,0x8
// 00558b8f: MOV EAX,dword ptr [ESP + 0xec]
// 00558b96: MOV dword ptr [ESP + 0x4],EAX
// 00558b9a: MOV EAX,dword ptr [ESP + 0xf0]
// 00558ba1: MOV dword ptr [ESP + 0x114],EAX
// 00558ba8: JMP 0x005587bd
//   XREF to: 005587bd (UNCONDITIONAL_JUMP)
// 00558bad: LEA EDI,[ESP + 0x80]
//   Label: LAB_00558bad
// 00558bb4: MOV EAX,dword ptr [ESI + 0x1fbf8]
// 00558bba: PUSH EDI
// 00558bbb: MOV EBX,dword ptr [EAX + 0x154]
// 00558bc1: PUSH EAX
// 00558bc2: CALL dword ptr [EBX + 0x14]
// 00558bc5: LEA EBX,[EAX + 0xc]
// 00558bc8: FLD float ptr [EAX]
// 00558bca: FADD float ptr [EBX]
// 00558bcc: ADD ESP,0x8
// 00558bcf: FST float ptr [ESP + 0xb0]
// 00558bd6: FLD float ptr [EAX + 0x4]
// 00558bd9: FADD float ptr [EBX + 0x4]
// 00558bdc: FXCH
// 00558bde: FLD float ptr [0x00641460]
//   XREF to: 00641460 (READ)
// 00558be4: FXCH
// 00558be6: FMUL ST1
// 00558be8: FXCH ST2
// 00558bea: FST float ptr [ESP + 0xb4]
// 00558bf1: FLD float ptr [EAX + 0x8]
// 00558bf4: FADD float ptr [EBX + 0x8]
// 00558bf7: FXCH
// 00558bf9: FMUL ST2
// 00558bfb: FXCH
// 00558bfd: FST float ptr [ESP + 0xb8]
// 00558c04: FMULP ST2
// 00558c06: LEA EAX,[ESP + 0xc8]
// 00558c0d: FXCH ST2
// 00558c0f: FSTP float ptr [ESP + 0xc8]
// 00558c16: FXCH
// 00558c18: FSTP float ptr [ESP + 0xcc]
// 00558c1f: LEA EBX,[ESP + 0xe0]
// 00558c26: FSTP float ptr [ESP + 0xd0]
// 00558c2d: CMP EBX,EAX
// 00558c2f: JZ 0x00558af2
//   XREF to: 00558af2 (CONDITIONAL_JUMP)
// 00558c35: MOV EAX,dword ptr [ESP + 0xc8]
// 00558c3c: MOV dword ptr [ESP + 0xe0],EAX
// 00558c43: MOV EAX,dword ptr [ESP + 0xcc]
// 00558c4a: MOV dword ptr [ESP + 0xe4],EAX
// 00558c51: MOV EAX,dword ptr [ESP + 0xd0]
// 00558c58: JMP 0x00558aeb
//   XREF to: 00558aeb (UNCONDITIONAL_JUMP)
// 00558c5d: FLD float ptr [ESI + 0x1fbf0]
//   Label: LAB_00558c5d
// 00558c63: FSUB float ptr [ESP + 0x114]
//   XREF to: Stack[-0x2c] (READ)
// 00558c6a: SUB ESP,0x4
// 00558c6d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x144] (DATA)
// 00558c70: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00558c75: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00558c7c: FLD float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x18] (READ)
// 00558c83: FABS
// 00558c85: ADD ESP,0x4
// 00558c88: FCOMP double ptr [0x0064146c]
//   XREF to: 0064146c (READ)
// 00558c8e: FNSTSW AX
// 00558c90: SAHF
// 00558c91: JNC 0x00558ca4
//   XREF to: 00558ca4 (CONDITIONAL_JUMP)
// 00558c93: MOV dword ptr [ESI + 0x1fbfc],0x1
//   Label: LAB_00558c93
// 00558c9d: MOV ESP,EBP
// 00558c9f: POP EBP
// 00558ca0: POP EDI
// 00558ca1: POP ESI
// 00558ca2: POP EBX
// 00558ca3: RET
// 00558ca4: FLD float ptr [ESI + 0x1fbf0]
//   Label: LAB_00558ca4
// 00558caa: FSUB float ptr [ESP + 0x114]
//   XREF to: Stack[-0x2c] (READ)
// 00558cb1: SUB ESP,0x4
// 00558cb4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x144] (DATA)
// 00558cb7: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00558cbc: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00558cc3: FLD float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x18] (READ)
// 00558cca: FABS
// 00558ccc: ADD ESP,0x4
// 00558ccf: FCOMP double ptr [0x0064146c]
//   XREF to: 0064146c (READ)
// 00558cd5: FNSTSW AX
// 00558cd7: SAHF
// 00558cd8: JC 0x00558c93
//   XREF to: 00558c93 (CONDITIONAL_JUMP)
// 00558cda: MOV ESP,EBP
// 00558cdc: POP EBP
// 00558cdd: POP EDI
// 00558cde: POP ESI
// 00558cdf: POP EBX
// 00558ce0: RET
