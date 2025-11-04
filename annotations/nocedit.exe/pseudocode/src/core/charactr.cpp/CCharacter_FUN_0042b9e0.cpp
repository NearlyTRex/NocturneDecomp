// Name: core_charactr.cpp_CCharacter_FUN_0042b9e0
// Address: 0042b9e0
// Address Range: [[0042b9e0, 0042bb48] [0042bbf4, 0042bc1f]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b9e0(CCharacter * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_FUN_00412400 (00412400) at 0041240f [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_process_FUN_00412260 (00412260) at 00412390 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417988 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042ab97 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b930 (0042b930) at 0042b9cb [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c513 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0 (004e57d0) at 004e58b4 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7c00 (004f7c00) at 004f7c38 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e66f7 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0061715a = 0.5
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042bcc0
//   core_gore.cpp_FUN_004edbb0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b9e0(CCharacter *this_ptr)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  BADSPACEBASE *in_ESP;
  float fVar3;
  CVector3f *in_stack_00000008;
  CCharacter *in_stack_ffffff44;
  float max_value;
  float fStack_a8;
  undefined1 auStack_7c [20];
  float local_68;
  float local_64;
  undefined1 local_48 [8];
  undefined1 auStack_40 [12];
  CVector3f CStack_34;
  float fStack_28;
  float local_20;
  float local_1c;
  float fStack_14;
  
  max_value = 6.127877e-39;
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  if ((this_ptr->model).field18_0x2260[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr->model);
    local_1c = (float)pCVar1->num_parts;
    if (1 < (int)local_1c) {
      if (fStack_a8 < 0.0) {
        fStack_a8 = 20.0;
      }
      fVar3 = 0.0;
      if (0 < (int)local_1c) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < fStack_a8)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      (&CStack_34,in_stack_00000008);
            CStack_34.z = -(float)in_stack_ffffff44;
            local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                 (CStack_34.z,(float)in_stack_ffffff44);
            auStack_40._0_4_ = local_20 + (float)auStack_40._0_4_;
            local_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_28,max_value);
            auStack_40._0_4_ = local_1c + (float)auStack_40._0_4_;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                      ((CMatrix3x3f *)&stack0xffffff50,(CVector3f *)auStack_40);
            local_64 = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                            in_stack_00000008->x * in_stack_00000008->x +
                            in_stack_00000008->y * in_stack_00000008->y);
            auStack_7c._16_4_ = 0.0;
            local_68 = 0.0;
            local_1c = local_64;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                      ((CMatrix3x3f *)&stack0xffffff54,(CVector3f *)local_48,
                       (CVector3f *)(auStack_7c + 0x10));
          }
          in_stack_ffffff44 = this_ptr;
          max_value = fVar3;
          core_charactr_cpp_CCharacter_FUN_0042bcc0(this_ptr);
          fVar3 = (float)((int)fVar3 + 1);
        } while ((int)fVar3 < (int)local_1c);
      }
    }
  }
  pCVar2 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)auStack_7c);
  fStack_14 = (pCVar2->min).x + (pCVar2->max).x;
  auStack_40._8_4_ = fStack_14 * FLOAT_0061715a;
  CStack_34.x = ((pCVar2->min).y + (pCVar2->max).y) * FLOAT_0061715a;
  CStack_34.y = ((pCVar2->min).z + (pCVar2->max).z) * FLOAT_0061715a;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,(CVector3f *)(local_48 + 4),(CVector3f *)(auStack_40 + 8));
  if (*(int *)(this_ptr->cloth_data + 0x8d40) == 0) {
    core_gore_cpp_FUN_004edbb0();
    (this_ptr->base_actor).was_created = 2;
    return;
  }
  this_ptr->cloth_data[0x478] = '\0';
  this_ptr->cloth_data[0x479] = '\0';
  this_ptr->cloth_data[0x47a] = '\0';
  this_ptr->cloth_data[0x47b] = '\0';
  (this_ptr->base_actor).was_created = 2;
  return;
}


// Assembly code:
// 0042b9e0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b9e0
// 0042b9e1: PUSH ESI
// 0042b9e2: PUSH EDI
// 0042b9e3: PUSH EBP
// 0042b9e4: MOV EBP,ESP
// 0042b9e6: SUB ESP,0x9c
// 0042b9ec: AND ESP,0xfffffff8
// 0042b9ef: MOV EDI,dword ptr [EBP + 0x14]
// 0042b9f2: MOV EAX,dword ptr [EBP + 0x1c]
// 0042b9f5: MOV EBX,dword ptr [EBP + 0x18]
// 0042b9f8: MOV dword ptr [ESP],EAX
// 0042b9fb: MOV EDX,dword ptr [EDI + 0xb7d4]
// 0042ba01: PUSH EDX
// 0042ba02: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0042ba07: LEA EAX,[EDI + 0x158]
// 0042ba0d: LEA ESI,[EDI + 0x23b8]
// 0042ba13: MOV DL,byte ptr [ESI]
// 0042ba15: ADD ESP,0x4
// 0042ba18: TEST DL,DL
// 0042ba1a: JZ 0x0042ba7a
//   XREF to: 0042ba7a (CONDITIONAL_JUMP)
// 0042ba1c: PUSH EAX
// 0042ba1d: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0042ba22: ADD ESP,0x4
// 0042ba25: MOV EAX,dword ptr [EAX + 0x7140]
// 0042ba2b: MOV dword ptr [ESP + 0x8c],EAX
// 0042ba32: CMP EAX,0x1
// 0042ba35: JLE 0x0042ba7a
//   XREF to: 0042ba7a (CONDITIONAL_JUMP)
// 0042ba37: FLD float ptr [ESP]
// 0042ba3a: FLDZ
// 0042ba3c: FCOMPP
// 0042ba3e: FNSTSW AX
// 0042ba40: SAHF
// 0042ba41: JBE 0x0042ba4a
//   XREF to: 0042ba4a (CONDITIONAL_JUMP)
// 0042ba43: MOV dword ptr [ESP],0x41a00000
// 0042ba4a: MOV EAX,dword ptr [ESP + 0x8c]
//   Label: LAB_0042ba4a
// 0042ba51: XOR ESI,ESI
// 0042ba53: TEST EAX,EAX
// 0042ba55: JLE 0x0042ba7a
//   XREF to: 0042ba7a (CONDITIONAL_JUMP)
// 0042ba57: TEST EBX,EBX
//   Label: LAB_0042ba57
// 0042ba59: JNZ 0x0042bb0f
//   XREF to: 0042bb0f (CONDITIONAL_JUMP)
// 0042ba5f: MOV ECX,dword ptr [EBP + 0x20]
//   Label: LAB_0042ba5f
// 0042ba62: PUSH ECX
// 0042ba63: PUSH EBX
// 0042ba64: PUSH ESI
//   Label: LAB_0042ba64
// 0042ba65: PUSH EDI
// 0042ba66: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 0042ba6b: ADD ESP,0x10
// 0042ba6e: MOV EDX,dword ptr [ESP + 0x8c]
// 0042ba75: INC ESI
// 0042ba76: CMP ESI,EDX
// 0042ba78: JL 0x0042ba57
//   XREF to: 0042ba57 (CONDITIONAL_JUMP)
// 0042ba7a: LEA ESI,[ESP + 0x2c]
//   Label: LAB_0042ba7a
// 0042ba7e: PUSH ESI
// 0042ba7f: MOV EAX,dword ptr [EDI + 0x154]
// 0042ba85: PUSH EDI
// 0042ba86: CALL dword ptr [EAX + 0x14]
// 0042ba89: LEA ESI,[EAX + 0xc]
// 0042ba8c: FLD float ptr [EAX]
// 0042ba8e: FADD float ptr [ESI]
// 0042ba90: ADD ESP,0x8
// 0042ba93: FST float ptr [ESP + 0x80]
// 0042ba9a: FLD float ptr [EAX + 0x4]
// 0042ba9d: FADD float ptr [ESI + 0x4]
// 0042baa0: FXCH
// 0042baa2: FLD float ptr [0x0061715a]
//   XREF to: 0061715a (READ)
// 0042baa8: FXCH
// 0042baaa: FMUL ST1
// 0042baac: FXCH ST2
// 0042baae: FST float ptr [ESP + 0x84]
// 0042bab5: FMUL ST1
// 0042bab7: FLD float ptr [EAX + 0x8]
// 0042baba: FADD float ptr [ESI + 0x8]
// 0042babd: LEA EAX,[ESP + 0x5c]
// 0042bac1: FST float ptr [ESP + 0x88]
// 0042bac8: FMULP ST2
// 0042baca: PUSH EAX
// 0042bacb: LEA EAX,[ESP + 0x54]
// 0042bacf: FXCH ST2
// 0042bad1: FSTP float ptr [ESP + 0x60]
// 0042bad5: PUSH EAX
// 0042bad6: FXCH
// 0042bad8: FSTP float ptr [ESP + 0x68]
// 0042badc: PUSH EDI
// 0042badd: FSTP float ptr [ESP + 0x70]
// 0042bae1: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042bae6: MOV ESI,dword ptr [EDI + 0xb7d8]
// 0042baec: ADD ESP,0xc
// 0042baef: TEST ESI,ESI
// 0042baf1: JZ 0x0042bbf4
//   XREF to: 0042bbf4 (CONDITIONAL_JUMP)
// 0042baf7: MOV dword ptr [EDI + 0x2f10],0x0
// 0042bb01: MOV dword ptr [EDI + 0x70],0x2
// 0042bb08: MOV ESP,EBP
// 0042bb0a: POP EBP
// 0042bb0b: POP EDI
// 0042bb0c: POP ESI
// 0042bb0d: POP EBX
// 0042bb0e: RET
// 0042bb0f: FLD float ptr [ESP]
//   Label: LAB_0042bb0f
// 0042bb12: FLDZ
// 0042bb14: FCOMPP
// 0042bb16: FNSTSW AX
// 0042bb18: SAHF
// 0042bb19: JNC 0x0042ba5f
//   XREF to: 0042ba5f (CONDITIONAL_JUMP)
// 0042bb1f: PUSH EBX
// 0042bb20: LEA EAX,[ESP + 0x78]
// 0042bb24: PUSH EAX
// 0042bb25: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042bb2a: ADD ESP,0x8
// 0042bb2d: PUSH dword ptr [ESP]
// 0042bb30: FLD float ptr [ESP + 0x4]
// 0042bb34: FCHS
// 0042bb36: FSTP float ptr [ESP + 0x94]
// 0042bb3d: PUSH dword ptr [ESP + 0x94]
// 0042bb44: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0042bbf4: MOV EAX,dword ptr [EDI + 0x2610]
//   Label: LAB_0042bbf4
// 0042bbfa: PUSH EAX
// 0042bbfb: PUSH 0x64
// 0042bbfd: PUSH EBX
// 0042bbfe: LEA EAX,[ESP + 0x5c]
// 0042bc02: PUSH EAX
// 0042bc03: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 0042bc09: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 0042bc0a: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 0042bc0f: ADD ESP,0x14
// 0042bc12: MOV dword ptr [EDI + 0x70],0x2
// 0042bc19: MOV ESP,EBP
// 0042bc1b: POP EBP
// 0042bc1c: POP EDI
// 0042bc1d: POP ESI
// 0042bc1e: POP EBX
// 0042bc1f: RET
