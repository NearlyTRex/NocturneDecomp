// Name: core_scat.cpp_FUN_005578e0
// Address: 005578e0
// Address Range: [[005578e0, 00557d1a]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005578e0()
// Cross-references:
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557663 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006413dc = 15
//   double DOUBLE_006413e4 = 0.900000000000000
//   double DOUBLE_006413ec = 8
//   double DOUBLE_006413f4 = 0.318309886192889
//   double DOUBLE_006413fc = 4
//   double DOUBLE_00641404 = 10
//   double DOUBLE_0064140c = 3.14159265350000
//   double DOUBLE_00641414 = -3.14159265350000
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_00428d80
//   core_hero.cpp_FUN_004f3960
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_005578e0(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_005578e0(void)

{
  CCharacter *pCVar1;
  CHero *pCVar2;
  SMotion *pSVar3;
  CPathMap *this_ptr;
  float fVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  CHero *this_ptr_00;
  float unaff_EDI;
  int iVar6;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float local_58;
  CVector3f aCStack_54 [2];
  float local_38;
  undefined1 local_34 [8];
  float local_2c;
  float fStack_28;
  int iStack_24;
  undefined4 local_20;
  float local_1c;
  float fStack_18;
  
  local_20 = 0x3e800000;
  local_1c = 0.7853982;
  this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 0) {
    return;
  }
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base_actor.actor_name + 8,0,0x2c);
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  local_38 = (in_stack_00000004->base_actor).location.position.x -
             (pCVar2->base_character).base_actor.location.position.x;
  local_34._0_4_ =
       (in_stack_00000004->base_actor).location.position.y -
       (pCVar2->base_character).base_actor.location.position.y;
  local_34._4_4_ =
       (in_stack_00000004->base_actor).location.position.z -
       (pCVar2->base_character).base_actor.location.position.z;
  iVar6 = 0;
  if ((((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2) ||
       (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0)) &&
     (0 < *(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x568))) {
    local_2c = 9999.9;
    pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960();
    if ((pCVar2 != (CHero *)0x0) && ((int)fStack_28 < 0x41f00000)) {
      iVar6 = 1;
      this_ptr_00 = pCVar2;
    }
  }
  if (iVar6 != *(int *)(in_stack_00000004[2].cloth_data + 0x54f4)) {
    in_stack_00000004[1].base_actor.location.position.x = 1.4013e-45;
  }
  local_58 = (this_ptr_00->base_character).base_actor.location.position.x -
             (in_stack_00000004->base_actor).location.position.x;
  aCStack_54[0].x =
       (this_ptr_00->base_character).base_actor.location.position.y -
       (in_stack_00000004->base_actor).location.position.y;
  aCStack_54[0].y =
       (this_ptr_00->base_character).base_actor.location.position.z -
       (in_stack_00000004->base_actor).location.position.z;
  if ((float *)local_34 != &local_58) {
    local_34._0_4_ = local_58;
    local_34._4_4_ = aCStack_54[0].x;
    local_2c = aCStack_54[0].y;
  }
  local_74 = SQRT(local_2c * local_2c +
                  (float)local_34._0_4_ * (float)local_34._0_4_ +
                  (float)local_34._4_4_ * (float)local_34._4_4_);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
    local_74 = 0.0;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) == 0) goto LAB_00557b63;
  iStack_24 = 0;
  if (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x2e0) == 8) {
    if (local_74 < (float)DOUBLE_006413ec) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      if ((pSVar3->state_index == 7) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)) {
        pCVar1 = in_stack_00000004 + 1;
        (pCVar1->base_actor).actor_name[0x14] = '\x01';
        (pCVar1->base_actor).actor_name[0x15] = '\0';
        (pCVar1->base_actor).actor_name[0x16] = '\0';
        (pCVar1->base_actor).actor_name[0x17] = '\0';
      }
LAB_00557a94:
      if (iStack_24 == 0) goto LAB_00557b63;
    }
  }
  else if (local_74 < (float)DOUBLE_006413dc) {
    if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) && (iVar6 != 0)) {
      if (((float)DOUBLE_006413e4 < *(float *)(in_stack_00000004->field13_0x2620 + 0x470)) &&
         (*(int *)(in_stack_00000004[2].cloth_data + 0x551c) != 0)) {
        pCVar1 = in_stack_00000004 + 1;
        (pCVar1->base_actor).actor_name[0x14] = '\x01';
        (pCVar1->base_actor).actor_name[0x15] = '\0';
        (pCVar1->base_actor).actor_name[0x16] = '\0';
        (pCVar1->base_actor).actor_name[0x17] = '\0';
      }
      core_charactr_cpp_CCharacter_FUN_00428d80(in_stack_00000004);
    }
    pCVar1 = in_stack_00000004 + 1;
    (pCVar1->base_actor).actor_name[0x10] = '\0';
    (pCVar1->base_actor).actor_name[0x11] = '\0';
    (pCVar1->base_actor).actor_name[0x12] = '\0';
    (pCVar1->base_actor).actor_name[0x13] = '\0';
    pCVar1 = in_stack_00000004 + 1;
    (pCVar1->base_actor).actor_name[8] = '\0';
    (pCVar1->base_actor).actor_name[9] = '\0';
    (pCVar1->base_actor).actor_name[10] = '\0';
    (pCVar1->base_actor).actor_name[0xb] = '\0';
    goto LAB_00557a94;
  }
  this_ptr = (*((this_ptr_00->base_character).base_actor.vtable)->getPathMap)
                       ((CDemonActor *)this_ptr_00);
  if (this_ptr == (CPathMap *)0x0) {
    this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
  }
  iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                    (this_ptr,&(in_stack_00000004->base_actor).location.position,aCStack_54,
                     (in_stack_00000004->base_actor).field7_0x6c);
  if (iVar6 != 0) {
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (aCStack_54[0].z - (in_stack_00000004->base_actor).orient.bank);
    fVar4 = fVar4 * (float)DOUBLE_006413f4 * (float)DOUBLE_006413fc;
    local_1c = -fStack_18;
    in_stack_00000004[1].base_actor.location.area_id = (int)fVar4;
    if (fVar4 < local_1c) {
      in_stack_00000004[1].base_actor.location.area_id = (int)local_1c;
    }
    if (fStack_18 < (float)in_stack_00000004[1].base_actor.location.area_id) {
      in_stack_00000004[1].base_actor.location.area_id = (int)fStack_18;
    }
    if ((float)DOUBLE_00641404 <= local_74) {
      pCVar1 = in_stack_00000004 + 1;
      (pCVar1->base_actor).actor_name[0x10] = '\x01';
      (pCVar1->base_actor).actor_name[0x11] = '\0';
      (pCVar1->base_actor).actor_name[0x12] = '\0';
      (pCVar1->base_actor).actor_name[0x13] = '\0';
    }
    pCVar1 = in_stack_00000004 + 1;
    (pCVar1->base_actor).actor_name[8] = '\x01';
    (pCVar1->base_actor).actor_name[9] = '\0';
    (pCVar1->base_actor).actor_name[10] = '\0';
    (pCVar1->base_actor).actor_name[0xb] = '\0';
  }
LAB_00557b63:
  local_70 = (this_ptr_00->base_character).base_actor.location.position.x -
             (in_stack_00000004->base_actor).location.position.x;
  fStack_6c = (this_ptr_00->base_character).base_actor.location.position.y -
              (in_stack_00000004->base_actor).location.position.y;
  fStack_68 = (this_ptr_00->base_character).base_actor.location.position.z -
              (in_stack_00000004->base_actor).location.position.z;
  if ((float *)local_34 != &local_70) {
    local_34._0_4_ = local_70;
    local_34._4_4_ = fStack_6c;
    local_2c = fStack_68;
  }
  pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     (&CStack_64,(CVector3f *)local_34);
  if ((CVector3f *)(local_34 + 4) != pCVar5) {
    local_34._4_4_ = pCVar5->x;
    local_2c = pCVar5->y;
    fStack_28 = pCVar5->z;
  }
  local_34._0_4_ =
       core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                 (local_2c - (in_stack_00000004->base_actor).orient.bank);
  if (unaff_EDI < (float)local_34._0_4_) {
    local_34._0_4_ = unaff_EDI;
  }
  if ((float)local_34._0_4_ < -unaff_EDI) {
    local_34._0_4_ = -unaff_EDI;
  }
  local_70 = (float)local_34._0_4_ - *(float *)(in_stack_00000004[2].cloth_data + 0x54fc);
  if (in_stack_00000008 * (float)DOUBLE_0064140c < local_70) {
    local_70 = in_stack_00000008 * (float)DOUBLE_0064140c;
  }
  if (local_70 < in_stack_00000008 * (float)DOUBLE_00641414) {
    local_70 = in_stack_00000008 * (float)DOUBLE_00641414;
  }
  *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) =
       *(float *)(in_stack_00000004[2].cloth_data + 0x54fc) + local_70;
  return;
}


// Assembly code:
// 005578e0: PUSH EBX
//   Label: core_scat.cpp_FUN_005578e0
// 005578e1: PUSH ESI
// 005578e2: PUSH EDI
// 005578e3: PUSH EBP
// 005578e4: MOV EBP,ESP
// 005578e6: SUB ESP,0x7c
// 005578e9: AND ESP,0xfffffff8
// 005578ec: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005578ef: MOV EDX,0x3e800000
// 005578f4: MOV ECX,0x3f490fdb
// 005578f9: MOV ESI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005578ff: MOV EDI,dword ptr [EBX + 0x1fbd0]
// 00557905: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00557909: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0055790d: MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00557914: TEST EDI,EDI
// 00557916: JNZ 0x0055791f
//   XREF to: 0055791f (CONDITIONAL_JUMP)
// 00557918: MOV ESP,EBP
// 0055791a: POP EBP
// 0055791b: POP EDI
// 0055791c: POP ESI
// 0055791d: POP EBX
// 0055791e: RET
// 0055791f: PUSH 0x2c
//   Label: LAB_0055791f
// 00557921: PUSH 0x0
// 00557923: LEA EAX,[EBX + 0xbe2c]
// 00557929: PUSH EAX
// 0055792a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0055792f: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00557934: LEA EDX,[EBX + 0x20]
// 00557937: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0055793e: FLD float ptr [EDX]
// 00557940: FSUB float ptr [EAX + 0x20]
// 00557943: ADD ESP,0xc
// 00557946: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 0055794a: FLD float ptr [EDX + 0x4]
// 0055794d: FSUB float ptr [EAX + 0x24]
// 00557950: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (WRITE)
// 00557954: FLD float ptr [EDX + 0x8]
// 00557957: FSUB float ptr [EAX + 0x28]
// 0055795a: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (WRITE)
// 0055795e: MOV EAX,dword ptr [EBX + 0x1fbd0]
// 00557964: XOR EDI,EDI
// 00557966: CMP EAX,0x2
// 00557969: JNZ 0x00557c94
//   XREF to: 00557c94 (CONDITIONAL_JUMP)
// 0055796f: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_0055796f
// 00557975: MOV EAX,dword ptr [EAX + 0x330]
// 0055797b: TEST EAX,EAX
// 0055797d: JZ 0x005579b3
//   XREF to: 005579b3 (CONDITIONAL_JUMP)
// 0055797f: CMP dword ptr [EAX + 0x568],0x0
// 00557986: JLE 0x005579b3
//   XREF to: 005579b3 (CONDITIONAL_JUMP)
// 00557988: MOV dword ptr [ESP + 0x60],0x461c3f9a
//   XREF to: Stack[-0x30] (WRITE)
// 00557990: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x30] (DATA)
// 00557994: PUSH EAX
// 00557995: PUSH EBX
// 00557996: CALL core_hero.cpp_FUN_004f3960
//   XREF to: 004f3960 (UNCONDITIONAL_CALL)
// 0055799b: ADD ESP,0x8
// 0055799e: TEST EAX,EAX
// 005579a0: JZ 0x005579b3
//   XREF to: 005579b3 (CONDITIONAL_JUMP)
// 005579a2: CMP dword ptr [ESP + 0x60],0x41f00000
//   XREF to: Stack[-0x30] (READ)
// 005579aa: JGE 0x005579b3
//   XREF to: 005579b3 (CONDITIONAL_JUMP)
// 005579ac: MOV EDI,0x1
// 005579b1: MOV ESI,EAX
// 005579b3: CMP EDI,dword ptr [EBX + 0x1fbd4]
//   Label: LAB_005579b3
// 005579b9: JZ 0x005579c5
//   XREF to: 005579c5 (CONDITIONAL_JUMP)
// 005579bb: MOV dword ptr [EBX + 0xbe44],0x1
// 005579c5: LEA EDX,[ESI + 0x20]
//   Label: LAB_005579c5
// 005579c8: LEA EAX,[EBX + 0x20]
// 005579cb: FLD float ptr [EDX]
// 005579cd: FSUB float ptr [EAX]
// 005579cf: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x60] (WRITE)
// 005579d3: FLD float ptr [EDX + 0x4]
// 005579d6: FSUB float ptr [EAX + 0x4]
// 005579d9: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x5c] (WRITE)
// 005579dd: FLD float ptr [EDX + 0x8]
// 005579e0: LEA EDX,[ESP + 0x54]
//   XREF to: Stack[-0x3c] (DATA)
// 005579e4: FSUB float ptr [EAX + 0x8]
// 005579e7: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x60] (DATA)
// 005579eb: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x58] (WRITE)
// 005579ef: CMP EDX,EAX
// 005579f1: JZ 0x00557a0b
//   XREF to: 00557a0b (CONDITIONAL_JUMP)
// 005579f3: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x60] (DATA)
// 005579f7: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005579fb: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x5c] (READ)
// 005579ff: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00557a03: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x58] (READ)
// 00557a07: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00557a0b: FLD float ptr [ESP + 0x58]
//   Label: LAB_00557a0b
//   XREF to: Stack[-0x38] (READ)
// 00557a0f: FMUL ST0
// 00557a11: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00557a15: FMUL ST0
// 00557a17: FADDP
// 00557a19: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 00557a1d: FMUL ST0
// 00557a1f: FADDP
// 00557a21: FSQRT
// 00557a23: MOV EAX,dword ptr [EBX + 0x1fbd0]
// 00557a29: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (WRITE)
// 00557a2d: CMP EAX,0x3
// 00557a30: JNZ 0x00557a38
//   XREF to: 00557a38 (CONDITIONAL_JUMP)
// 00557a32: XOR EDX,EDX
// 00557a34: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 00557a38: MOV ECX,dword ptr [EBX + 0x1fbe8]
//   Label: LAB_00557a38
// 00557a3e: TEST ECX,ECX
// 00557a40: JZ 0x00557b63
//   XREF to: 00557b63 (CONDITIONAL_JUMP)
// 00557a46: XOR EAX,EAX
// 00557a48: MOV EDX,dword ptr [ECX + 0x2e0]
// 00557a4e: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00557a52: CMP EDX,0x8
// 00557a55: JNZ 0x00557ca2
//   XREF to: 00557ca2 (CONDITIONAL_JUMP)
// 00557a5b: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 00557a5f: FCOMP double ptr [0x006413ec]
//   XREF to: 006413ec (READ)
// 00557a65: FNSTSW AX
// 00557a67: SAHF
// 00557a68: JNC 0x00557a9f
//   XREF to: 00557a9f (CONDITIONAL_JUMP)
// 00557a6a: LEA EAX,[EBX + 0x158]
// 00557a70: PUSH EAX
// 00557a71: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00557a76: MOV EAX,dword ptr [EAX + 0x24]
// 00557a79: ADD ESP,0x4
// 00557a7c: CMP EAX,0x7
// 00557a7f: JNZ 0x00557a94
//   XREF to: 00557a94 (CONDITIONAL_JUMP)
// 00557a81: CMP dword ptr [EBX + 0x1fbd4],0x0
// 00557a88: JZ 0x00557a94
//   XREF to: 00557a94 (CONDITIONAL_JUMP)
// 00557a8a: MOV dword ptr [EBX + 0xbe38],0x1
// 00557a94: CMP dword ptr [ESP + 0x64],0x0
//   Label: LAB_00557a94
//   XREF to: Stack[-0x2c] (READ)
// 00557a99: JZ 0x00557b63
//   XREF to: 00557b63 (CONDITIONAL_JUMP)
// 00557a9f: PUSH ESI
//   Label: LAB_00557a9f
// 00557aa0: MOV EAX,dword ptr [ESI + 0x154]
// 00557aa6: CALL dword ptr [EAX + 0xbc]
// 00557aac: ADD ESP,0x4
// 00557aaf: MOV EDX,EAX
// 00557ab1: TEST EAX,EAX
// 00557ab3: JNZ 0x00557ac3
//   XREF to: 00557ac3 (CONDITIONAL_JUMP)
// 00557ab5: LEA EAX,[ESI + 0x20]
// 00557ab8: PUSH EAX
// 00557ab9: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 00557abe: ADD ESP,0x4
// 00557ac1: MOV EDX,EAX
// 00557ac3: MOV ECX,dword ptr [EBX + 0x6c]
//   Label: LAB_00557ac3
// 00557ac6: PUSH ECX
// 00557ac7: LEA EAX,[ESP + 0x40]
// 00557acb: PUSH EAX
// 00557acc: LEA EAX,[EBX + 0x20]
// 00557acf: PUSH EAX
// 00557ad0: PUSH EDX
// 00557ad1: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 00557ad6: ADD ESP,0x10
// 00557ad9: TEST EAX,EAX
// 00557adb: JZ 0x00557b63
//   XREF to: 00557b63 (CONDITIONAL_JUMP)
// 00557ae1: FLD float ptr [ESP + 0x40]
// 00557ae5: FSUB float ptr [EBX + 0x34]
// 00557ae8: SUB ESP,0x4
// 00557aeb: FSTP float ptr [ESP]
// 00557aee: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00557af3: MOV dword ptr [ESP + 0x7c],EAX
// 00557af7: FLD float ptr [ESP + 0x7c]
// 00557afb: FMUL double ptr [0x006413f4]
//   XREF to: 006413f4 (READ)
// 00557b01: ADD ESP,0x4
// 00557b04: FMUL double ptr [0x006413fc]
//   XREF to: 006413fc (READ)
// 00557b0a: FLD float ptr [ESP + 0x70]
// 00557b0e: FCHS
// 00557b10: FSTP float ptr [ESP + 0x6c]
// 00557b14: FST float ptr [EBX + 0xbe50]
// 00557b1a: FCOMP float ptr [ESP + 0x6c]
// 00557b1e: FNSTSW AX
// 00557b20: SAHF
// 00557b21: JNC 0x00557b2d
//   XREF to: 00557b2d (CONDITIONAL_JUMP)
// 00557b23: MOV EAX,dword ptr [ESP + 0x6c]
// 00557b27: MOV dword ptr [EBX + 0xbe50],EAX
// 00557b2d: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_00557b2d
// 00557b33: FCOMP float ptr [ESP + 0x70]
// 00557b37: FNSTSW AX
// 00557b39: SAHF
// 00557b3a: JBE 0x00557b46
//   XREF to: 00557b46 (CONDITIONAL_JUMP)
// 00557b3c: MOV EAX,dword ptr [ESP + 0x70]
// 00557b40: MOV dword ptr [EBX + 0xbe50],EAX
// 00557b46: FLD float ptr [ESP + 0x14]
//   Label: LAB_00557b46
// 00557b4a: FCOMP double ptr [0x00641404]
//   XREF to: 00641404 (READ)
// 00557b50: FNSTSW AX
// 00557b52: SAHF
// 00557b53: JNC 0x00557d0c
//   XREF to: 00557d0c (CONDITIONAL_JUMP)
// 00557b59: MOV dword ptr [EBX + 0xbe2c],0x1
//   Label: LAB_00557b59
// 00557b63: LEA EAX,[EBX + 0x20]
//   Label: LAB_00557b63
// 00557b66: FLD float ptr [ESI + 0x20]
// 00557b69: FSUB float ptr [EAX]
// 00557b6b: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (WRITE)
// 00557b6f: FLD float ptr [ESI + 0x24]
// 00557b72: FSUB float ptr [EAX + 0x4]
// 00557b75: LEA EDX,[ESP + 0x54]
//   XREF to: Stack[-0x3c] (DATA)
// 00557b79: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x74] (WRITE)
// 00557b7d: FLD float ptr [ESI + 0x28]
// 00557b80: FSUB float ptr [EAX + 0x8]
// 00557b83: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x78] (DATA)
// 00557b87: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (WRITE)
// 00557b8b: CMP EDX,EAX
// 00557b8d: JZ 0x00557ba7
//   XREF to: 00557ba7 (CONDITIONAL_JUMP)
// 00557b8f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (DATA)
// 00557b93: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00557b97: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x74] (READ)
// 00557b9b: MOV dword ptr [ESP + 0x58],EAX
// 00557b9f: MOV EAX,dword ptr [ESP + 0x20]
// 00557ba3: MOV dword ptr [ESP + 0x5c],EAX
// 00557ba7: LEA EAX,[ESP + 0x54]
//   Label: LAB_00557ba7
// 00557bab: PUSH EAX
// 00557bac: LEA EAX,[ESP + 0x28]
// 00557bb0: PUSH EAX
// 00557bb1: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00557bb6: MOV ESI,EAX
// 00557bb8: LEA EAX,[ESP + 0x5c]
// 00557bbc: ADD ESP,0x8
// 00557bbf: CMP EAX,ESI
// 00557bc1: JZ 0x00557bd7
//   XREF to: 00557bd7 (CONDITIONAL_JUMP)
// 00557bc3: MOV EAX,dword ptr [ESI]
// 00557bc5: MOV dword ptr [ESP + 0x54],EAX
// 00557bc9: MOV EAX,dword ptr [ESI + 0x4]
// 00557bcc: MOV dword ptr [ESP + 0x58],EAX
// 00557bd0: MOV EAX,dword ptr [ESI + 0x8]
// 00557bd3: MOV dword ptr [ESP + 0x5c],EAX
// 00557bd7: FLD float ptr [ESP + 0x58]
//   Label: LAB_00557bd7
// 00557bdb: FSUB float ptr [EBX + 0x34]
// 00557bde: SUB ESP,0x4
// 00557be1: FSTP float ptr [ESP]
// 00557be4: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00557be9: MOV dword ptr [ESP + 0x7c],EAX
// 00557bed: FLD float ptr [ESP + 0x7c]
// 00557bf1: ADD ESP,0x4
// 00557bf4: FST float ptr [ESP + 0x4c]
// 00557bf8: FCOMP float ptr [ESP + 0x74]
// 00557bfc: FNSTSW AX
// 00557bfe: SAHF
// 00557bff: JBE 0x00557c09
//   XREF to: 00557c09 (CONDITIONAL_JUMP)
// 00557c01: MOV EAX,dword ptr [ESP + 0x74]
// 00557c05: MOV dword ptr [ESP + 0x4c],EAX
// 00557c09: FLD float ptr [ESP + 0x4c]
//   Label: LAB_00557c09
// 00557c0d: FLD float ptr [ESP + 0x74]
// 00557c11: FCHS
// 00557c13: FSTP float ptr [ESP + 0x68]
// 00557c17: FCOMP float ptr [ESP + 0x68]
// 00557c1b: FNSTSW AX
// 00557c1d: SAHF
// 00557c1e: JNC 0x00557c28
//   XREF to: 00557c28 (CONDITIONAL_JUMP)
// 00557c20: MOV EAX,dword ptr [ESP + 0x68]
// 00557c24: MOV dword ptr [ESP + 0x4c],EAX
// 00557c28: FLD float ptr [ESP + 0x4c]
//   Label: LAB_00557c28
// 00557c2c: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00557c2f: FXCH
// 00557c31: FSUB float ptr [EBX + 0x1fbdc]
// 00557c37: FXCH
// 00557c39: FMUL double ptr [0x0064140c]
//   XREF to: 0064140c (READ)
// 00557c3f: FXCH
// 00557c41: FST float ptr [ESP + 0x10]
// 00557c45: FXCH
// 00557c47: FSTP double ptr [ESP]
// 00557c4a: FCOMP double ptr [ESP]
// 00557c4d: FNSTSW AX
// 00557c4f: SAHF
// 00557c50: JBE 0x00557c59
//   XREF to: 00557c59 (CONDITIONAL_JUMP)
// 00557c52: FLD double ptr [ESP]
// 00557c55: FSTP float ptr [ESP + 0x10]
// 00557c59: FLD float ptr [EBP + 0x18]
//   Label: LAB_00557c59
//   XREF to: Stack[0x8] (READ)
// 00557c5c: FMUL double ptr [0x00641414]
//   XREF to: 00641414 (READ)
// 00557c62: FLD float ptr [ESP + 0x10]
// 00557c66: FXCH
// 00557c68: FSTP double ptr [ESP + 0x8]
// 00557c6c: FCOMP double ptr [ESP + 0x8]
// 00557c70: FNSTSW AX
// 00557c72: SAHF
// 00557c73: JNC 0x00557c7d
//   XREF to: 00557c7d (CONDITIONAL_JUMP)
// 00557c75: FLD double ptr [ESP + 0x8]
// 00557c79: FSTP float ptr [ESP + 0x10]
// 00557c7d: FLD float ptr [EBX + 0x1fbdc]
//   Label: LAB_00557c7d
// 00557c83: FADD float ptr [ESP + 0x10]
// 00557c87: FSTP float ptr [EBX + 0x1fbdc]
// 00557c8d: MOV ESP,EBP
// 00557c8f: POP EBP
// 00557c90: POP EDI
// 00557c91: POP ESI
// 00557c92: POP EBX
// 00557c93: RET
// 00557c94: CMP EAX,0x3
//   Label: LAB_00557c94
// 00557c97: JZ 0x0055796f
//   XREF to: 0055796f (CONDITIONAL_JUMP)
// 00557c9d: JMP 0x005579b3
//   XREF to: 005579b3 (UNCONDITIONAL_JUMP)
// 00557ca2: FLD float ptr [ESP + 0x14]
//   Label: LAB_00557ca2
//   XREF to: Stack[-0x7c] (READ)
// 00557ca6: FCOMP double ptr [0x006413dc]
//   XREF to: 006413dc (READ)
// 00557cac: FNSTSW AX
// 00557cae: SAHF
// 00557caf: JNC 0x00557a9f
//   XREF to: 00557a9f (CONDITIONAL_JUMP)
// 00557cb5: CMP dword ptr [EBX + 0x1fbd4],0x0
// 00557cbc: JZ 0x00557cf3
//   XREF to: 00557cf3 (CONDITIONAL_JUMP)
// 00557cbe: TEST EDI,EDI
// 00557cc0: JZ 0x00557cf3
//   XREF to: 00557cf3 (CONDITIONAL_JUMP)
// 00557cc2: FLD float ptr [EBX + 0x2a90]
// 00557cc8: FCOMP double ptr [0x006413e4]
//   XREF to: 006413e4 (READ)
// 00557cce: FNSTSW AX
// 00557cd0: SAHF
// 00557cd1: JBE 0x00557ce6
//   XREF to: 00557ce6 (CONDITIONAL_JUMP)
// 00557cd3: CMP dword ptr [EBX + 0x1fbfc],0x0
// 00557cda: JZ 0x00557ce6
//   XREF to: 00557ce6 (CONDITIONAL_JUMP)
// 00557cdc: MOV dword ptr [EBX + 0xbe38],0x1
// 00557ce6: LEA EAX,[ESI + 0x20]
//   Label: LAB_00557ce6
// 00557ce9: PUSH EAX
// 00557cea: PUSH EBX
// 00557ceb: CALL core_charactr.cpp_CCharacter_FUN_00428d80
//   XREF to: 00428d80 (UNCONDITIONAL_CALL)
// 00557cf0: ADD ESP,0x8
// 00557cf3: MOV dword ptr [EBX + 0xbe34],0x0
//   Label: LAB_00557cf3
// 00557cfd: MOV dword ptr [EBX + 0xbe2c],0x0
// 00557d07: JMP 0x00557a94
//   XREF to: 00557a94 (UNCONDITIONAL_JUMP)
// 00557d0c: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_00557d0c
// 00557d16: JMP 0x00557b59
//   XREF to: 00557b59 (UNCONDITIONAL_JUMP)
