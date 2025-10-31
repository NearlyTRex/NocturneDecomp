// Name: core_drip.cpp_FUN_0048e2a0
// Address: 0048e2a0
// Address Range: [[0048e2a0, 0048e47e] [0048e5f0, 0048e604] [0048e696, 0048e6aa]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e2a0()
// Globals:
//   float FLOAT_006222a3 = -5000
//   double DOUBLE_006222a7 = 32
//   double DOUBLE_006222af = 0.850000000000000
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
//   core_set.cpp_CDemonSet_FUN_00570fa0

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048e2a0(undefined4 param_1, undefined4 param_2)
    */

void core_drip_cpp_FUN_0048e2a0(void)

{
  CVector3f *ray_start;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  undefined1 auStack_a4 [52];
  CDemonActor *pCStack_70;
  CDemonActor *pCStack_6c;
  float fStack_60;
  CVector3f local_54;
  CVector3f local_48 [2];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (in_stack_00000004[2].orient_matrix.m[0].x == 0.0) {
    ray_start = in_stack_00000004[2].orient_matrix.m + 1;
    local_48[0].x = ray_start->x;
    local_48[0].z = in_stack_00000004[2].orient_matrix.m[1].z;
    local_48[0].y = in_stack_00000004[2].orient_matrix.m[1].y + FLOAT_006222a3;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
              (&g_CDemonRaytraceInstance,&local_54,ray_start,local_48);
    in_stack_00000004[2].orient_matrix.m[0].x = 1.4013e-45;
    in_stack_00000004[2].orient_matrix.m[0].y = local_54.y;
  }
  if ((in_stack_00000004[2].location.area_id & 0x7fffffffU) == 0) {
    fVar3 = in_stack_00000004[2].orient_matrix.m[2].y - in_stack_00000008 * (float)DOUBLE_006222a7;
    in_stack_00000004[2].orient_matrix.m[2].y = fVar3;
    pCVar1 = (in_stack_00000004->metadata).vtable;
    (in_stack_00000004->location).position.y =
         fVar3 * in_stack_00000008 + (in_stack_00000004->location).position.y;
    (*pCVar1->getBoundingBox)(in_stack_00000004,(CBoundingBox3D *)(auStack_a4 + 0x2c));
    if ((in_stack_00000004->location).position.y <
        in_stack_00000004[2].orient_matrix.m[0].y -
        (fStack_60 - (float)pCStack_6c) * (float)DOUBLE_006222af) {
      if (*(int *)(in_stack_00000004[2].create_event + 0x10) != 0) {
        core_set_cpp_CDemonSet_FUN_00570fa0(g_CDemonSetPtr);
        (*((in_stack_00000004->metadata).vtable)->playSound)
                  (in_stack_00000004,(char *)&in_stack_00000004[2].health);
      }
      iVar5 = *(int *)(in_stack_00000004[2].create_event + 0xc);
      (in_stack_00000004->location).position.y = in_stack_00000004[2].orient_matrix.m[0].y;
      if (iVar5 == 0) {
        iVar5 = 0;
        do {
          local_54.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_54.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_48[0].x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_54.y = local_54.y + (in_stack_00000004->location).position.x;
          local_54.z = local_54.z + (in_stack_00000004->location).position.y;
          local_48[0].x = local_48[0].x + (in_stack_00000004->location).position.z;
          core_fire_cpp_CFireEffect_FUN_004c7b20(g_CFireEffectPtr);
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
          fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
          fVar7 = (float10)fcos((float10)fVar4);
          fVar8 = (float10)fcos((float10)fVar3);
          fVar9 = (float10)fsin((float10)fVar4);
          fVar10 = (float10)fsin((float10)fVar3);
          fStack_28 = (float)(fVar10 * (float10)FLOAT_006222b7);
          fStack_2c = (float)(fVar7 * (float10)FLOAT_006222b7 * (float10)(float)fVar8);
          fStack_24 = (float)(fVar9 * (float10)FLOAT_006222b7 * (float10)(float)fVar8);
          core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                    ((CKeyFramedModelInstance *)&DAT_02c9b170);
          iVar5 = iVar5 + 1;
          core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
        } while (iVar5 < 10);
      }
      (in_stack_00000004->location).position.y = in_stack_00000004[2].orient_matrix.m[1].y;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (in_stack_00000004->location).position.x =
           fVar3 * in_stack_00000004[2].orient.heading + in_stack_00000004[2].orient_matrix.m[1].x;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (in_stack_00000004->location).position.z =
           fVar3 * in_stack_00000004[2].orient.heading + in_stack_00000004[2].orient_matrix.m[1].z;
      in_stack_00000004[2].orient_matrix.m[2].z = 0.0;
      in_stack_00000004[2].orient_matrix.m[2].y = in_stack_00000004[2].orient_matrix.m[2].z;
      in_stack_00000004[2].orient_matrix.m[2].x = in_stack_00000004[2].orient_matrix.m[2].y;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        (in_stack_00000004[2].orient.pitch,in_stack_00000004[2].orient.bank);
      in_stack_00000004[2].location.area_id = (int)fVar3;
    }
    iVar6 = 0;
    iVar5 = 0;
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar6) break;
      iVar2 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar5 + -4);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_a4);
      auStack_a4._4_4_ = in_stack_00000004[2].runtime_state;
      pCStack_70 = in_stack_00000004;
      pCStack_6c = in_stack_00000004;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x114))();
    }
  }
  else if ((in_stack_00000004[2].location.position.z != 0.0) &&
          (in_stack_00000008 = (float)in_stack_00000004[2].location.area_id - in_stack_00000008,
          in_stack_00000004[2].location.area_id = (int)in_stack_00000008, in_stack_00000008 < 0.0))
  {
    in_stack_00000004[2].location.area_id = 0;
    return;
  }
  return;
}


// Assembly code:
// 0048e2a0: PUSH EBX
//   Label: core_drip.cpp_FUN_0048e2a0
// 0048e2a1: PUSH ESI
// 0048e2a2: PUSH EDI
// 0048e2a3: PUSH EBP
// 0048e2a4: SUB ESP,0xa4
// 0048e2aa: MOV EBX,dword ptr [ESP + 0xb8]
// 0048e2b1: CMP dword ptr [EBX + 0x2ec],0x0
// 0048e2b8: JZ 0x0048e2fe
//   XREF to: 0048e2fe (CONDITIONAL_JUMP)
// 0048e2ba: TEST dword ptr [EBX + 0x2dc],0x7fffffff
//   Label: LAB_0048e2ba
// 0048e2c4: JZ 0x0048e35e
//   XREF to: 0048e35e (CONDITIONAL_JUMP)
// 0048e2ca: CMP dword ptr [EBX + 0x2d8],0x0
// 0048e2d1: JZ 0x0048e2f3
//   XREF to: 0048e2f3 (CONDITIONAL_JUMP)
// 0048e2d3: FLD float ptr [EBX + 0x2dc]
// 0048e2d9: FSUB float ptr [ESP + 0xbc]
// 0048e2e0: FST float ptr [EBX + 0x2dc]
// 0048e2e6: FLDZ
// 0048e2e8: FCOMPP
// 0048e2ea: FNSTSW AX
// 0048e2ec: SAHF
// 0048e2ed: JA 0x0048e696
//   XREF to: 0048e696 (CONDITIONAL_JUMP)
// 0048e2f3: ADD ESP,0xa4
//   Label: LAB_0048e2f3
// 0048e2f9: POP EBP
// 0048e2fa: POP EDI
// 0048e2fb: POP ESI
// 0048e2fc: POP EBX
// 0048e2fd: RET
// 0048e2fe: LEA EDX,[EBX + 0x2f8]
//   Label: LAB_0048e2fe
// 0048e304: MOV EAX,dword ptr [EDX]
// 0048e306: MOV dword ptr [ESP + 0x6c],EAX
// 0048e30a: LEA EAX,[EDX + 0x4]
// 0048e30d: MOV EAX,dword ptr [EAX]
// 0048e30f: MOV dword ptr [ESP + 0x70],EAX
// 0048e313: LEA EAX,[EDX + 0x8]
// 0048e316: MOV EAX,dword ptr [EAX]
// 0048e318: MOV dword ptr [ESP + 0x74],EAX
// 0048e31c: LEA EAX,[ESP + 0x6c]
// 0048e320: PUSH EAX
// 0048e321: LEA EAX,[ESP + 0x64]
// 0048e325: PUSH EDX
// 0048e326: FLD float ptr [ESP + 0x78]
// 0048e32a: PUSH EAX
// 0048e32b: FADD float ptr [0x006222a3]
//   XREF to: 006222a3 (READ)
// 0048e331: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0048e336: FSTP float ptr [ESP + 0x80]
// 0048e33d: CALL core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
//   XREF to: 00495aa0 (UNCONDITIONAL_CALL)
// 0048e342: ADD ESP,0x10
// 0048e345: MOV EAX,dword ptr [ESP + 0x64]
// 0048e349: MOV dword ptr [EBX + 0x2ec],0x1
// 0048e353: MOV dword ptr [EBX + 0x2f0],EAX
// 0048e359: JMP 0x0048e2ba
//   XREF to: 0048e2ba (UNCONDITIONAL_JUMP)
// 0048e35e: FLD float ptr [ESP + 0xbc]
//   Label: LAB_0048e35e
// 0048e365: FLD ST0
// 0048e367: FMUL double ptr [0x006222a7]
//   XREF to: 006222a7 (READ)
// 0048e36d: FSUBR float ptr [EBX + 0x308]
// 0048e373: FST float ptr [EBX + 0x308]
// 0048e379: FMULP
// 0048e37b: LEA EAX,[ESP + 0x3c]
// 0048e37f: MOV EDX,dword ptr [EBX + 0x154]
// 0048e385: PUSH EAX
// 0048e386: FADD float ptr [EBX + 0x24]
// 0048e389: PUSH EBX
// 0048e38a: FSTP float ptr [EBX + 0x24]
// 0048e38d: CALL dword ptr [EDX + 0x14]
// 0048e390: ADD ESP,0x8
// 0048e393: FLD float ptr [ESP + 0x4c]
// 0048e397: FSUB float ptr [ESP + 0x40]
// 0048e39b: FMUL double ptr [0x006222af]
//   XREF to: 006222af (READ)
// 0048e3a1: FSUBR float ptr [EBX + 0x2f0]
// 0048e3a7: FLD float ptr [EBX + 0x24]
// 0048e3aa: FCOMPP
// 0048e3ac: FNSTSW AX
// 0048e3ae: SAHF
// 0048e3af: JC 0x0048e41a
//   XREF to: 0048e41a (CONDITIONAL_JUMP)
// 0048e3b1: LEA EAX,[EBX + 0x20]
//   Label: LAB_0048e3b1
// 0048e3b4: XOR EDI,EDI
// 0048e3b6: XOR ESI,ESI
// 0048e3b8: MOV dword ptr [ESP + 0x94],EAX
// 0048e3bf: MOV EAX,[0x006810c8]
//   Label: LAB_0048e3bf
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (DATA)
// 0048e3c4: CMP EDI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 0048e3ca: JGE 0x0048e2f3
//   XREF to: 0048e2f3 (CONDITIONAL_JUMP)
// 0048e3d0: MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
// 0048e3d7: MOV EAX,ESP
// 0048e3d9: PUSH EAX
// 0048e3da: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0048e3df: ADD ESP,0x4
// 0048e3e2: MOV EDX,ESP
// 0048e3e4: MOV EAX,dword ptr [EBX + 0x310]
// 0048e3ea: PUSH EDX
// 0048e3eb: MOV dword ptr [ESP + 0x8],EAX
// 0048e3ef: MOV dword ptr [ESP + 0x38],EBX
// 0048e3f3: PUSH 0x3f800000
// 0048e3f8: MOV EDX,dword ptr [ESP + 0x9c]
// 0048e3ff: MOV dword ptr [ESP + 0x40],EBX
// 0048e403: PUSH EDX
// 0048e404: MOV EAX,dword ptr [EBP + 0x154]
// 0048e40a: PUSH EBP
// 0048e40b: ADD ESI,0x4
// 0048e40e: INC EDI
// 0048e40f: CALL dword ptr [EAX + 0x114]
// 0048e415: ADD ESP,0x10
// 0048e418: JMP 0x0048e3bf
//   XREF to: 0048e3bf (UNCONDITIONAL_JUMP)
// 0048e41a: CMP dword ptr [EBX + 0x338],0x0
//   Label: LAB_0048e41a
// 0048e421: JZ 0x0048e454
//   XREF to: 0048e454 (CONDITIONAL_JUMP)
// 0048e423: PUSH 0x3f800000
// 0048e428: PUSH 0x0
// 0048e42a: PUSH 0x0
// 0048e42c: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0048e432: PUSH 0x42c80000
// 0048e437: PUSH EBP
//   XREF to: 03114278 (DATA)
// 0048e438: CALL core_set.cpp_CDemonSet_FUN_00570fa0
//   XREF to: 00570fa0 (UNCONDITIONAL_CALL)
// 0048e43d: ADD ESP,0x14
// 0048e440: LEA EDX,[EBX + 0x314]
// 0048e446: PUSH EDX
// 0048e447: MOV EAX,dword ptr [EBX + 0x154]
// 0048e44d: PUSH EBX
// 0048e44e: CALL dword ptr [EAX + 0x24]
// 0048e451: ADD ESP,0x8
// 0048e454: FLD float ptr [EBX + 0x2f0]
//   Label: LAB_0048e454
// 0048e45a: MOV EAX,dword ptr [EBX + 0x334]
// 0048e460: FSTP float ptr [EBX + 0x24]
// 0048e463: TEST EAX,EAX
// 0048e465: JNZ 0x0048e5f0
//   XREF to: 0048e5f0 (CONDITIONAL_JUMP)
// 0048e46b: LEA ESI,[EBX + 0x20]
// 0048e46e: XOR EDI,EDI
// 0048e470: PUSH 0x3f000000
//   Label: LAB_0048e470
// 0048e475: PUSH 0xbf000000
// 0048e47a: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0048e5f0: PUSH 0x3f800000
//   Label: LAB_0048e5f0
// 0048e5f5: FLD float ptr [EBX + 0x2fc]
// 0048e5fb: PUSH 0x0
// 0048e5fd: FSTP float ptr [EBX + 0x24]
// 0048e600: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0048e696: MOV dword ptr [EBX + 0x2dc],0x0
//   Label: LAB_0048e696
// 0048e6a0: ADD ESP,0xa4
// 0048e6a6: POP EBP
// 0048e6a7: POP EDI
// 0048e6a8: POP ESI
// 0048e6a9: POP EBX
// 0048e6aa: RET
