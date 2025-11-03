// Name: core_gabriela.cpp_FUN_004d4190
// Address: 004d4190
// Address Range: [[004d4190, 004d4833]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d4190()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d370f [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062aefd = 4
//   double DOUBLE_0062af05 = 0.318309886192889
//   double DOUBLE_0062af0d = 10
//   double DOUBLE_0062af15 = 30
//   double DOUBLE_0062af1d = -0.0500000000000000
//   double DOUBLE_0062af25 = 0.0500000000000000
//   float FLOAT_0062af2d = 0.5
//   float FLOAT_0062af31 = 3
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613bc
// Function calls:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_hero.cpp_FUN_004f3960
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d4190(undefined4 param_1) */

void core_gabriela_cpp_FUN_004d4190(void)

{
  CHero *pCVar1;
  CDemonSet *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  float fVar4;
  CBoundingBox3D *pCVar5;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CDemonActor *this_ptr_00;
  float unaff_EDI;
  CDemonActor *in_stack_00000004;
  undefined8 uStack_118;
  float fStack_114;
  CVector3f aCStack_dc [2];
  CVector3f local_bc;
  float local_b0;
  float local_ac;
  float afStack_a8 [5];
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_80;
  float local_7c;
  float fStack_78;
  float fStack_70;
  float local_6c;
  float local_68;
  CVector3f local_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float fStack_14;
  
  local_1c = 0x3e800000;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[0x8d].create_event + 0x3c,0,0x2c);
  if (in_stack_00000004[0x179].previous_transform_state.orientation.y != 0.0) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    local_80 = (in_stack_00000004->location).position.x -
               (pCVar1->base_character).base_actor.location.position.x;
    local_7c = (in_stack_00000004->location).position.y -
               (pCVar1->base_character).base_actor.location.position.y;
    fStack_78 = (in_stack_00000004->location).position.z -
                (pCVar1->base_character).base_actor.location.position.z;
    fVar4 = SQRT(fStack_78 * fStack_78 + local_80 * local_80 + local_7c * local_7c);
    if (in_stack_00000004[0x179].previous_transform_state.orientation.y == 4.2039e-45) {
      fVar4 = 0.0;
    }
    if ((float)DOUBLE_0062aefd <= fVar4) {
      iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        ((CPathMap *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x2c),
                         &(in_stack_00000004->location).position,&local_bc,
                         in_stack_00000004->field7_0x6c);
      if (iVar2 != 0) {
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_bc.z - (in_stack_00000004->orient).bank);
        fVar4 = fVar4 * (float)DOUBLE_0062af05 * (float)DOUBLE_0062aefd;
        *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = fVar4;
        if (fVar4 < -unaff_EBP) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = -unaff_EBP;
        }
        if (unaff_EBP < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = unaff_EBP;
        }
        iVar2 = g_LocalHeroIndex;
        in_stack_00000004[0x8d].create_event[0x3c] = '\x01';
        in_stack_00000004[0x8d].create_event[0x3d] = '\0';
        in_stack_00000004[0x8d].create_event[0x3e] = '\0';
        in_stack_00000004[0x8d].create_event[0x3f] = '\0';
        pCVar1 = g_HeroActors[iVar2];
        if (&fStack_90 != afStack_a8) {
          fStack_90 = (in_stack_00000004->location).position.x -
                      (pCVar1->base_character).base_actor.location.position.x;
          fStack_8c = (in_stack_00000004->location).position.y -
                      (pCVar1->base_character).base_actor.location.position.y;
          fStack_88 = (in_stack_00000004->location).position.z -
                      (pCVar1->base_character).base_actor.location.position.z;
        }
        if ((float)DOUBLE_0062af0d <
            SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c)) {
          in_stack_00000004[0x8d].create_event[0x44] = '\x01';
          in_stack_00000004[0x8d].create_event[0x45] = '\0';
          in_stack_00000004[0x8d].create_event[0x46] = '\0';
          in_stack_00000004[0x8d].create_event[0x47] = '\0';
          return;
        }
      }
    }
    else {
      fVar4 = in_stack_00000004[0x179].previous_transform_state.orientation.y;
      this_ptr_00 = (CDemonActor *)0x0;
      if ((fVar4 == 2.8026e-45) || (fVar4 == 4.2039e-45)) {
        this_ptr_00 = (CDemonActor *)core_hero_cpp_FUN_004f3960();
      }
      if ((this_ptr_00 == (CDemonActor *)0x0) || ((float)DOUBLE_0062af15 <= fStack_114)) {
        if ((in_stack_00000004[0x179].previous_transform_state.orientation.z != 0.0) &&
           (iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0
                              ((CMotionController *)(in_stack_00000004 + 1)),
           *(int *)(iVar2 + 0x24) == 0)) {
          in_stack_00000004[0x8d].create_event[0x54] = '\x01';
          in_stack_00000004[0x8d].create_event[0x55] = '\0';
          in_stack_00000004[0x8d].create_event[0x56] = '\0';
          in_stack_00000004[0x8d].create_event[0x57] = '\0';
          return;
        }
      }
      else {
        if ((in_stack_00000004[0x179].previous_transform_state.orientation.z == 0.0) &&
           (iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0
                              ((CMotionController *)(in_stack_00000004 + 1)),
           *(int *)(iVar2 + 0x24) == 0)) {
          in_stack_00000004[0x8d].create_event[0x54] = '\x01';
          in_stack_00000004[0x8d].create_event[0x55] = '\0';
          in_stack_00000004[0x8d].create_event[0x56] = '\0';
          in_stack_00000004[0x8d].create_event[0x57] = '\0';
        }
        local_64.x = (this_ptr_00->location).position.x - (in_stack_00000004->location).position.x;
        local_64.y = (this_ptr_00->location).position.y - (in_stack_00000004->location).position.y;
        local_64.z = (this_ptr_00->location).position.z - (in_stack_00000004->location).position.z;
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (aCStack_dc,&local_64);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - (in_stack_00000004->orient).bank);
        fVar4 = fVar4 * (float)DOUBLE_0062af05 * (float)DOUBLE_0062aefd;
        fStack_14 = -unaff_EDI;
        *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = fVar4;
        if (fVar4 < fStack_14) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = fStack_14;
        }
        if (unaff_EDI < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) {
          *(float *)(in_stack_00000004[0x8d].create_event + 0x60) = unaff_EDI;
        }
        if (((float)DOUBLE_0062af1d < *(float *)(in_stack_00000004[0x8d].create_event + 0x60)) &&
           ((double)*(float *)(in_stack_00000004[0x8d].create_event + 0x60) < DOUBLE_0062af25)) {
          pCVar5 = (*in_stack_00000004->vtable->getBoundingBox)
                             (in_stack_00000004,(CBoundingBox3D *)&stack0xffffff14);
          local_bc.z = (pCVar5->min).x + (pCVar5->max).x;
          local_b0 = (pCVar5->min).y + (pCVar5->max).y;
          CStack_38.z = local_bc.z * FLOAT_0062af2d;
          local_ac = (pCVar5->min).z + (pCVar5->max).z;
          fStack_2c = local_b0 * FLOAT_0062af2d;
          fStack_28 = local_ac * FLOAT_0062af2d;
          fStack_54 = (in_stack_00000004->location).position.x + CStack_38.z;
          fStack_50 = (in_stack_00000004->location).position.y + fStack_2c;
          fStack_4c = (in_stack_00000004->location).position.z + fStack_28;
          pCVar5 = (*this_ptr_00->vtable->getBoundingBox)
                             (this_ptr_00,(CBoundingBox3D *)&stack0xffffff10);
          fStack_28 = ((pCVar5->min).x + (pCVar5->max).x) * FLOAT_0062af2d;
          local_24 = ((pCVar5->min).y + (pCVar5->max).y) * FLOAT_0062af2d;
          local_20 = ((pCVar5->min).z + (pCVar5->max).z) * FLOAT_0062af2d;
          fStack_70 = (this_ptr_00->location).position.x + fStack_28;
          local_6c = (this_ptr_00->location).position.y + local_24;
          fStack_40 = fStack_70 - fStack_40;
          fStack_3c = local_6c - fStack_3c;
          local_68 = (this_ptr_00->location).position.z + local_20;
          CStack_38.x = local_68 - CStack_38.x;
          fStack_8c = SQRT(CStack_38.x * CStack_38.x + fStack_40 * fStack_40 + fStack_3c * fStack_3c
                          );
          if (fStack_8c <= 0.0) {
            fStack_90 = 0.0;
            local_94 = 0.0;
            fStack_8c = 0.0;
          }
          else {
            fStack_8c = 1.0 / fStack_8c;
            local_94 = fStack_40 * fStack_8c;
            fStack_90 = fStack_3c * fStack_8c;
            fStack_8c = CStack_38.x * fStack_8c;
          }
          fStack_70 = fStack_70 + local_94 * FLOAT_0062af31;
          local_6c = local_6c + fStack_90 * FLOAT_0062af31;
          local_68 = local_68 + fStack_8c * FLOAT_0062af31;
          core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
          this_ptr = g_CDemonSetPtr;
          g_CDemonSetPtr->collision_actor = (CDemonActor *)0x0;
          core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (this_ptr,&CStack_38,(CVector3f *)&stack0xfffffff8);
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          if (this_ptr_00 == g_CDemonSetPtr->collision_actor) {
            in_stack_00000004[0x8d].create_event[0x48] = '\x01';
            in_stack_00000004[0x8d].create_event[0x49] = '\0';
            in_stack_00000004[0x8d].create_event[0x4a] = '\0';
            in_stack_00000004[0x8d].create_event[0x4b] = '\0';
            return;
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 004d4190: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d4190
// 004d4191: PUSH ESI
// 004d4192: PUSH EDI
// 004d4193: PUSH EBP
// 004d4194: MOV EBP,ESP
// 004d4196: SUB ESP,0x114
// 004d419c: AND ESP,0xfffffff8
// 004d419f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d41a2: PUSH 0x2c
// 004d41a4: PUSH 0x0
// 004d41a6: LEA EAX,[EBX + 0xbe2c]
// 004d41ac: MOV EDX,0x3e800000
// 004d41b1: PUSH EAX
// 004d41b2: MOV dword ptr [ESP + 0x118],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d41b9: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004d41be: MOV ECX,dword ptr [EBX + 0x1fbd0]
// 004d41c4: ADD ESP,0xc
// 004d41c7: TEST ECX,ECX
// 004d41c9: JZ 0x004d4395
//   XREF to: 004d4395 (CONDITIONAL_JUMP)
// 004d41cf: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004d41d4: LEA EDX,[EBX + 0x20]
// 004d41d7: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004d41de: FLD float ptr [EDX]
// 004d41e0: FSUB float ptr [EAX + 0x20]
// 004d41e3: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x84] (WRITE)
// 004d41ea: FLD float ptr [EDX + 0x4]
// 004d41ed: FSUB float ptr [EAX + 0x24]
// 004d41f0: FST float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x80] (WRITE)
// 004d41f7: FMUL float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x80] (READ)
// 004d41fe: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x84] (READ)
// 004d4205: FMUL ST0
// 004d4207: FLD float ptr [EDX + 0x8]
// 004d420a: FSUB float ptr [EAX + 0x28]
// 004d420d: FXCH
// 004d420f: FADDP ST2,ST0
// 004d4211: FST float ptr [ESP + 0xac]
//   XREF to: Stack[-0x7c] (WRITE)
// 004d4218: FMUL float ptr [ESP + 0xac]
//   XREF to: Stack[-0x7c] (READ)
// 004d421f: FADDP
// 004d4221: FSQRT
// 004d4223: MOV ESI,dword ptr [EBX + 0x1fbd0]
// 004d4229: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x120] (WRITE)
// 004d422d: CMP ESI,0x3
// 004d4230: JZ 0x004d439c
//   XREF to: 004d439c (CONDITIONAL_JUMP)
// 004d4236: FLD float ptr [ESP + 0x8]
//   Label: LAB_004d4236
//   XREF to: Stack[-0x120] (READ)
// 004d423a: FCOMP double ptr [0x0062aefd]
//   XREF to: 0062aefd (READ)
// 004d4240: FNSTSW AX
// 004d4242: SAHF
// 004d4243: JNC 0x004d46d7
//   XREF to: 004d46d7 (CONDITIONAL_JUMP)
// 004d4249: MOV dword ptr [ESP + 0xc],0x461c3f9a
//   XREF to: Stack[-0x11c] (WRITE)
// 004d4251: MOV ECX,dword ptr [EBX + 0x1fbd0]
// 004d4257: XOR ESI,ESI
// 004d4259: CMP ECX,0x2
// 004d425c: JZ 0x004d4263
//   XREF to: 004d4263 (CONDITIONAL_JUMP)
// 004d425e: CMP ECX,0x3
// 004d4261: JNZ 0x004d4273
//   XREF to: 004d4273 (CONDITIONAL_JUMP)
// 004d4263: LEA EAX,[ESP + 0xc]
//   Label: LAB_004d4263
//   XREF to: Stack[-0x11c] (DATA)
// 004d4267: PUSH EAX
// 004d4268: PUSH EBX
// 004d4269: CALL core_hero.cpp_FUN_004f3960
//   XREF to: 004f3960 (UNCONDITIONAL_CALL)
// 004d426e: ADD ESP,0x8
// 004d4271: MOV ESI,EAX
// 004d4273: TEST ESI,ESI
//   Label: LAB_004d4273
// 004d4275: JZ 0x004d469f
//   XREF to: 004d469f (CONDITIONAL_JUMP)
// 004d427b: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x11c] (READ)
// 004d427f: FCOMP double ptr [0x0062af15]
//   XREF to: 0062af15 (READ)
// 004d4285: FNSTSW AX
// 004d4287: SAHF
// 004d4288: JNC 0x004d469f
//   XREF to: 004d469f (CONDITIONAL_JUMP)
// 004d428e: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004d4295: JNZ 0x004d42b7
//   XREF to: 004d42b7 (CONDITIONAL_JUMP)
// 004d4297: LEA EAX,[EBX + 0x158]
// 004d429d: PUSH EAX
// 004d429e: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d42a3: MOV EAX,dword ptr [EAX + 0x24]
// 004d42a6: ADD ESP,0x4
// 004d42a9: TEST EAX,EAX
// 004d42ab: JNZ 0x004d42b7
//   XREF to: 004d42b7 (CONDITIONAL_JUMP)
// 004d42ad: MOV dword ptr [EBX + 0xbe44],0x1
// 004d42b7: LEA EDX,[ESI + 0x20]
//   Label: LAB_004d42b7
// 004d42ba: LEA EAX,[EBX + 0x20]
// 004d42bd: FLD float ptr [EDX]
// 004d42bf: FSUB float ptr [EAX]
// 004d42c1: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x6c] (WRITE)
// 004d42c8: FLD float ptr [EDX + 0x4]
// 004d42cb: FSUB float ptr [EAX + 0x4]
// 004d42ce: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x68] (WRITE)
// 004d42d5: FLD float ptr [EDX + 0x8]
// 004d42d8: FSUB float ptr [EAX + 0x8]
// 004d42db: LEA EAX,[ESP + 0xbc]
//   XREF to: Stack[-0x6c] (DATA)
// 004d42e2: PUSH EAX
// 004d42e3: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0xe4] (DATA)
// 004d42e7: PUSH EAX
// 004d42e8: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x64] (WRITE)
// 004d42ef: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d42f4: FLD float ptr [EAX + 0x4]
// 004d42f7: ADD ESP,0x8
// 004d42fa: FSUB float ptr [EBX + 0x34]
// 004d42fd: SUB ESP,0x4
// 004d4300: FSTP float ptr [ESP]
//   XREF to: Stack[-0x12c] (DATA)
// 004d4303: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d4308: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d430f: FLD float ptr [ESP + 0x114]
//   XREF to: Stack[-0x18] (READ)
// 004d4316: FMUL double ptr [0x0062af05]
//   XREF to: 0062af05 (READ)
// 004d431c: ADD ESP,0x4
// 004d431f: FMUL double ptr [0x0062aefd]
//   XREF to: 0062aefd (READ)
// 004d4325: FLD float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 004d432c: FCHS
// 004d432e: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x24] (WRITE)
// 004d4335: FST float ptr [EBX + 0xbe50]
// 004d433b: FCOMP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x24] (READ)
// 004d4342: FNSTSW AX
// 004d4344: SAHF
// 004d4345: JNC 0x004d4354
//   XREF to: 004d4354 (CONDITIONAL_JUMP)
// 004d4347: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x24] (READ)
// 004d434e: MOV dword ptr [EBX + 0xbe50],EAX
// 004d4354: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004d4354
// 004d435a: FCOMP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 004d4361: FNSTSW AX
// 004d4363: SAHF
// 004d4364: JBE 0x004d4373
//   XREF to: 004d4373 (CONDITIONAL_JUMP)
// 004d4366: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 004d436d: MOV dword ptr [EBX + 0xbe50],EAX
// 004d4373: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004d4373
// 004d4379: FST double ptr [ESP]
//   XREF to: Stack[-0x128] (DATA)
// 004d437c: FCOMP double ptr [0x0062af1d]
//   XREF to: 0062af1d (READ)
// 004d4382: FNSTSW AX
// 004d4384: SAHF
// 004d4385: JBE 0x004d4395
//   XREF to: 004d4395 (CONDITIONAL_JUMP)
// 004d4387: FLD double ptr [ESP]
//   XREF to: Stack[-0x128] (DATA)
// 004d438a: FCOMP double ptr [0x0062af25]
//   XREF to: 0062af25 (READ)
// 004d4390: FNSTSW AX
// 004d4392: SAHF
// 004d4393: JC 0x004d43a7
//   XREF to: 004d43a7 (CONDITIONAL_JUMP)
// 004d4395: MOV ESP,EBP
//   Label: LAB_004d4395
// 004d4397: POP EBP
// 004d4398: POP EDI
// 004d4399: POP ESI
// 004d439a: POP EBX
// 004d439b: RET
// 004d439c: XOR EDI,EDI
//   Label: LAB_004d439c
// 004d439e: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x120] (WRITE)
// 004d43a2: JMP 0x004d4236
//   XREF to: 004d4236 (UNCONDITIONAL_JUMP)
// 004d43a7: LEA EDX,[ESP + 0x2c]
//   Label: LAB_004d43a7
//   XREF to: Stack[-0xfc] (DATA)
// 004d43ab: PUSH EDX
// 004d43ac: MOV EAX,dword ptr [EBX + 0x154]
// 004d43b2: PUSH EBX
// 004d43b3: CALL dword ptr [EAX + 0x14]
// 004d43b6: LEA EDX,[EAX + 0xc]
// 004d43b9: FLD float ptr [EAX]
// 004d43bb: FADD float ptr [EDX]
// 004d43bd: ADD ESP,0x8
// 004d43c0: FST float ptr [ESP + 0x50]
// 004d43c4: FLD float ptr [EAX + 0x4]
// 004d43c7: FADD float ptr [EDX + 0x4]
// 004d43ca: FXCH
// 004d43cc: FMUL float ptr [0x0062af2d]
//   XREF to: 0062af2d (READ)
// 004d43d2: FXCH
// 004d43d4: FST float ptr [ESP + 0x54]
// 004d43d8: FLD float ptr [EAX + 0x8]
// 004d43db: FADD float ptr [EDX + 0x8]
// 004d43de: FXCH
// 004d43e0: FMUL float ptr [0x0062af2d]
//   XREF to: 0062af2d (READ)
// 004d43e6: FXCH
// 004d43e8: FST float ptr [ESP + 0x58]
// 004d43ec: FMUL float ptr [0x0062af2d]
//   XREF to: 0062af2d (READ)
// 004d43f2: LEA EAX,[EBX + 0x20]
// 004d43f5: FXCH ST2
// 004d43f7: FSTP float ptr [ESP + 0xd4]
// 004d43fe: FSTP float ptr [ESP + 0xd8]
// 004d4405: FSTP float ptr [ESP + 0xdc]
// 004d440c: FLD float ptr [EAX]
// 004d440e: FADD float ptr [ESP + 0xd4]
// 004d4415: FSTP float ptr [ESP + 0xb0]
// 004d441c: FLD float ptr [EAX + 0x4]
// 004d441f: FADD float ptr [ESP + 0xd8]
// 004d4426: FSTP float ptr [ESP + 0xb4]
// 004d442d: FLD float ptr [EAX + 0x8]
// 004d4430: LEA EAX,[ESP + 0x14]
// 004d4434: PUSH EAX
// 004d4435: FADD float ptr [ESP + 0xe0]
// 004d443c: PUSH ESI
// 004d443d: FSTP float ptr [ESP + 0xc0]
// 004d4444: MOV EDX,dword ptr [ESI + 0x154]
// 004d444a: CALL dword ptr [EDX + 0x14]
// 004d444d: LEA EDX,[EAX + 0xc]
// 004d4450: FLD float ptr [EAX]
// 004d4452: FADD float ptr [EDX]
// 004d4454: ADD ESP,0x8
// 004d4457: FST float ptr [ESP + 0xf8]
// 004d445e: FLD float ptr [EAX + 0x4]
// 004d4461: FADD float ptr [EDX + 0x4]
// 004d4464: FXCH
// 004d4466: FMUL float ptr [0x0062af2d]
//   XREF to: 0062af2d (READ)
// 004d446c: FXCH
// 004d446e: FST float ptr [ESP + 0xfc]
// 004d4475: FLD float ptr [EAX + 0x8]
// 004d4478: FADD float ptr [EDX + 0x8]
// 004d447b: FXCH
// 004d447d: FMUL float ptr [0x0062af2d]
//   XREF to: 0062af2d (READ)
// 004d4483: FXCH
// 004d4485: FST float ptr [ESP + 0x100]
// 004d448c: FMUL float ptr [0x0062af2d]
//   XREF to: 0062af2d (READ)
// 004d4492: LEA EAX,[ESI + 0x20]
// 004d4495: FXCH ST2
// 004d4497: FSTP float ptr [ESP + 0xc8]
// 004d449e: FSTP float ptr [ESP + 0xcc]
// 004d44a5: FSTP float ptr [ESP + 0xd0]
// 004d44ac: FLD float ptr [EAX]
// 004d44ae: FADD float ptr [ESP + 0xc8]
// 004d44b5: FST float ptr [ESP + 0xe0]
// 004d44bc: FLD float ptr [EAX + 0x4]
// 004d44bf: FADD float ptr [ESP + 0xcc]
// 004d44c6: FXCH
// 004d44c8: FSUB float ptr [ESP + 0xb0]
// 004d44cf: FXCH
// 004d44d1: FST float ptr [ESP + 0xe4]
// 004d44d8: FSUB float ptr [ESP + 0xb4]
// 004d44df: FLD float ptr [EAX + 0x8]
// 004d44e2: FXCH
// 004d44e4: FST float ptr [ESP + 0x60]
// 004d44e8: FMUL float ptr [ESP + 0x60]
// 004d44ec: FXCH ST2
// 004d44ee: FSTP float ptr [ESP + 0x5c]
// 004d44f2: FADD float ptr [ESP + 0xd0]
// 004d44f9: FLD float ptr [ESP + 0x5c]
// 004d44fd: FMUL ST0
// 004d44ff: FXCH
// 004d4501: FST float ptr [ESP + 0xe8]
// 004d4508: FSUB float ptr [ESP + 0xb8]
// 004d450f: FXCH
// 004d4511: FADDP ST2,ST0
// 004d4513: FST float ptr [ESP + 0x64]
// 004d4517: FMUL float ptr [ESP + 0x64]
// 004d451b: FADDP
// 004d451d: FSQRT
// 004d451f: FST float ptr [ESP + 0x10]
// 004d4523: FLDZ
// 004d4525: FCOMPP
// 004d4527: FNSTSW AX
// 004d4529: SAHF
// 004d452a: JNC 0x004d468c
//   XREF to: 004d468c (CONDITIONAL_JUMP)
// 004d4530: FLD1
// 004d4532: FLD float ptr [ESP + 0x5c]
// 004d4536: FXCH
// 004d4538: FDIV float ptr [ESP + 0x10]
// 004d453c: FXCH
// 004d453e: FMUL ST1
// 004d4540: FLD float ptr [ESP + 0x60]
// 004d4544: FMUL ST2
// 004d4546: FLD float ptr [ESP + 0x64]
// 004d454a: FMULP ST3
// 004d454c: FXCH
// 004d454e: FSTP float ptr [ESP + 0x5c]
// 004d4552: FSTP float ptr [ESP + 0x60]
// 004d4556: FSTP float ptr [ESP + 0x64]
// 004d455a: FLD float ptr [0x0062af31]
//   Label: LAB_004d455a
//   XREF to: 0062af31 (READ)
// 004d4560: FLD float ptr [ESP + 0x5c]
// 004d4564: FMUL ST1
// 004d4566: FLD float ptr [ESP + 0x60]
// 004d456a: FMUL ST2
// 004d456c: FLD float ptr [ESP + 0x64]
// 004d4570: FMULP ST3
// 004d4572: FLD float ptr [ESP + 0xe0]
// 004d4579: FLD float ptr [ESP + 0xe4]
// 004d4580: FLD float ptr [ESP + 0xe8]
// 004d4587: LEA EDX,[ESP + 0x80]
// 004d458e: LEA EAX,[ESP + 0xe0]
// 004d4595: FXCH ST4
// 004d4597: FSTP float ptr [ESP + 0xec]
// 004d459e: FXCH ST2
// 004d45a0: FSTP float ptr [ESP + 0xf0]
// 004d45a7: FXCH ST3
// 004d45a9: FSTP float ptr [ESP + 0xf4]
// 004d45b0: FXCH ST2
// 004d45b2: FADD float ptr [ESP + 0xec]
// 004d45b9: FXCH ST2
// 004d45bb: FADD float ptr [ESP + 0xf0]
// 004d45c2: FXCH
// 004d45c4: FADD float ptr [ESP + 0xf4]
// 004d45cb: FXCH ST2
// 004d45cd: FSTP float ptr [ESP + 0x80]
// 004d45d4: FSTP float ptr [ESP + 0x84]
// 004d45db: FSTP float ptr [ESP + 0x88]
// 004d45e2: CMP EAX,EDX
// 004d45e4: JZ 0x004d4610
//   XREF to: 004d4610 (CONDITIONAL_JUMP)
// 004d45e6: MOV EAX,dword ptr [ESP + 0x80]
// 004d45ed: MOV dword ptr [ESP + 0xe0],EAX
// 004d45f4: MOV EAX,dword ptr [ESP + 0x84]
// 004d45fb: MOV dword ptr [ESP + 0xe4],EAX
// 004d4602: MOV EAX,dword ptr [ESP + 0x88]
// 004d4609: MOV dword ptr [ESP + 0xe8],EAX
// 004d4610: PUSH 0x1
//   Label: LAB_004d4610
// 004d4612: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d4618: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004d4619: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 004d461e: ADD ESP,0x8
// 004d4621: PUSH EBX
// 004d4622: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d4628: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004d4629: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004d462e: ADD ESP,0x8
// 004d4631: LEA EDX,[ESP + 0xe0]
// 004d4638: PUSH EDX
// 004d4639: LEA EDX,[ESP + 0xb4]
// 004d4640: PUSH EDX
// 004d4641: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d4646: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004d4647: MOV dword ptr [EAX + 0x14d144],0x0
//   XREF to: 032613bc (WRITE)
// 004d4651: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 004d4656: ADD ESP,0xc
// 004d4659: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004d465f: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004d4660: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004d4665: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 004d466a: MOV EDX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004d4670: ADD ESP,0x4
// 004d4673: CMP ESI,EDX
// 004d4675: JNZ 0x004d4395
//   XREF to: 004d4395 (CONDITIONAL_JUMP)
// 004d467b: MOV dword ptr [EBX + 0xbe38],0x1
// 004d4685: MOV ESP,EBP
// 004d4687: POP EBP
// 004d4688: POP EDI
// 004d4689: POP ESI
// 004d468a: POP EBX
// 004d468b: RET
// 004d468c: XOR ECX,ECX
//   Label: LAB_004d468c
// 004d468e: MOV dword ptr [ESP + 0x60],ECX
// 004d4692: MOV dword ptr [ESP + 0x5c],ECX
// 004d4696: MOV dword ptr [ESP + 0x64],ECX
// 004d469a: JMP 0x004d455a
//   XREF to: 004d455a (UNCONDITIONAL_JUMP)
// 004d469f: CMP dword ptr [EBX + 0x1fbd4],0x0
//   Label: LAB_004d469f
// 004d46a6: JZ 0x004d4395
//   XREF to: 004d4395 (CONDITIONAL_JUMP)
// 004d46ac: LEA EAX,[EBX + 0x158]
// 004d46b2: PUSH EAX
// 004d46b3: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d46b8: MOV EAX,dword ptr [EAX + 0x24]
// 004d46bb: ADD ESP,0x4
// 004d46be: TEST EAX,EAX
// 004d46c0: JNZ 0x004d4395
//   XREF to: 004d4395 (CONDITIONAL_JUMP)
// 004d46c6: MOV dword ptr [EBX + 0xbe44],0x1
// 004d46d0: MOV ESP,EBP
// 004d46d2: POP EBP
// 004d46d3: POP EDI
// 004d46d4: POP ESI
// 004d46d5: POP EBX
// 004d46d6: RET
// 004d46d7: MOV EAX,[0x02db87d0]
//   Label: LAB_004d46d7
//   XREF to: 02db87d0 (READ)
// 004d46dc: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004d46e3: LEA EDX,[EAX + 0xbe58]
// 004d46e9: MOV EAX,dword ptr [EBX + 0x6c]
// 004d46ec: PUSH EAX
// 004d46ed: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0xc0] (DATA)
// 004d46f1: PUSH EAX
// 004d46f2: LEA EAX,[EBX + 0x20]
// 004d46f5: PUSH EAX
// 004d46f6: PUSH EDX
// 004d46f7: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 004d46fc: ADD ESP,0x10
// 004d46ff: TEST EAX,EAX
// 004d4701: JZ 0x004d4395
//   XREF to: 004d4395 (CONDITIONAL_JUMP)
// 004d4707: FLD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xbc] (READ)
// 004d470b: FSUB float ptr [EBX + 0x34]
// 004d470e: SUB ESP,0x4
// 004d4711: FSTP float ptr [ESP]
//   XREF to: Stack[-0x12c] (DATA)
// 004d4714: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004d4719: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d4720: FLD float ptr [ESP + 0x114]
//   XREF to: Stack[-0x18] (READ)
// 004d4727: FMUL double ptr [0x0062af05]
//   XREF to: 0062af05 (READ)
// 004d472d: ADD ESP,0x4
// 004d4730: FMUL double ptr [0x0062aefd]
//   XREF to: 0062aefd (READ)
// 004d4736: FLD float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 004d473d: FCHS
// 004d473f: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x20] (WRITE)
// 004d4746: FST float ptr [EBX + 0xbe50]
// 004d474c: FCOMP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x20] (READ)
// 004d4753: FNSTSW AX
// 004d4755: SAHF
// 004d4756: JC 0x004d4822
//   XREF to: 004d4822 (CONDITIONAL_JUMP)
// 004d475c: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004d475c
// 004d4762: FCOMP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 004d4769: FNSTSW AX
// 004d476b: SAHF
// 004d476c: JBE 0x004d477b
//   XREF to: 004d477b (CONDITIONAL_JUMP)
// 004d476e: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 004d4775: MOV dword ptr [EBX + 0xbe50],EAX
// 004d477b: MOV EAX,[0x02db87d0]
//   Label: LAB_004d477b
//   XREF to: 02db87d0 (READ)
// 004d4780: MOV dword ptr [EBX + 0xbe2c],0x1
// 004d478a: LEA EDX,[EBX + 0x20]
// 004d478d: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004d4794: FLD float ptr [EDX]
// 004d4796: FSUB float ptr [EAX + 0x20]
// 004d4799: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0xb4] (WRITE)
// 004d479d: FLD float ptr [EDX + 0x4]
// 004d47a0: FSUB float ptr [EAX + 0x24]
// 004d47a3: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0xb0] (WRITE)
// 004d47a7: FLD float ptr [EDX + 0x8]
// 004d47aa: LEA EDX,[ESP + 0x74]
//   XREF to: Stack[-0xb4] (DATA)
// 004d47ae: FSUB float ptr [EAX + 0x28]
// 004d47b1: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x9c] (DATA)
// 004d47b8: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xac] (WRITE)
// 004d47bc: CMP EAX,EDX
// 004d47be: JZ 0x004d47e1
//   XREF to: 004d47e1 (CONDITIONAL_JUMP)
// 004d47c0: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0xb4] (READ)
// 004d47c4: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 004d47cb: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xb0] (READ)
// 004d47cf: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 004d47d6: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0xac] (READ)
// 004d47da: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 004d47e1: FLD float ptr [ESP + 0x90]
//   Label: LAB_004d47e1
//   XREF to: Stack[-0x98] (READ)
// 004d47e8: FMUL ST0
// 004d47ea: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x9c] (READ)
// 004d47f1: FMUL ST0
// 004d47f3: FADDP
// 004d47f5: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x94] (READ)
// 004d47fc: FMUL ST0
// 004d47fe: FADDP
// 004d4800: FSQRT
// 004d4802: FCOMP double ptr [0x0062af0d]
//   XREF to: 0062af0d (READ)
// 004d4808: FNSTSW AX
// 004d480a: SAHF
// 004d480b: JBE 0x004d4395
//   XREF to: 004d4395 (CONDITIONAL_JUMP)
// 004d4811: MOV dword ptr [EBX + 0xbe34],0x1
// 004d481b: MOV ESP,EBP
// 004d481d: POP EBP
// 004d481e: POP EDI
// 004d481f: POP ESI
// 004d4820: POP EBX
// 004d4821: RET
// 004d4822: MOV EAX,dword ptr [ESP + 0x108]
//   Label: LAB_004d4822
//   XREF to: Stack[-0x20] (READ)
// 004d4829: MOV dword ptr [EBX + 0xbe50],EAX
// 004d482f: JMP 0x004d475c
//   XREF to: 004d475c (UNCONDITIONAL_JUMP)
