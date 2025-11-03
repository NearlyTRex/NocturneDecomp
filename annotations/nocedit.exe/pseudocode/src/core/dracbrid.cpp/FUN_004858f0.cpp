// Name: core_dracbrid.cpp_FUN_004858f0
// Address: 004858f0
// Address Range: [[004858f0, 00485a41] [00485aed, 00485b11]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_004858f0()
// Cross-references:
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484575 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00621b0e = 0.5
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_dracbrid.cpp_FUN_00485b20
//   core_gore.cpp_FUN_004edbb0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_004858f0(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_dracbrid_cpp_FUN_004858f0(void)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  BADSPACEBASE *in_ESP;
  float fVar3;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CDemonActor *in_stack_ffffff40;
  float in_stack_ffffff44;
  float local_ac;
  undefined1 auStack_80 [20];
  float local_6c;
  float local_68;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [12];
  CVector3f local_38;
  float fStack_2c;
  float local_24;
  float local_20;
  float local_18;
  float fStack_14;
  
  if (in_stack_00000004[0x1a].create_event[0x50] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1));
    local_20 = (float)pCVar1->num_parts;
    if (1 < (int)local_20) {
      if (local_ac < 0.0) {
        local_ac = 20.0;
      }
      fVar3 = 0.0;
      if (0 < (int)local_20) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < local_ac)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      (&local_38,in_stack_00000008);
            local_38.z = -(float)in_stack_ffffff40;
            local_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                 (local_38.z,(float)in_stack_ffffff40);
            auStack_44._0_4_ = local_24 + (float)auStack_44._0_4_;
            local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_2c,in_stack_ffffff44);
            auStack_44._0_4_ = local_20 + (float)auStack_44._0_4_;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                      ((CMatrix3x3f *)&stack0xffffff4c,(CVector3f *)auStack_44);
            local_68 = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                            in_stack_00000008->x * in_stack_00000008->x +
                            in_stack_00000008->y * in_stack_00000008->y);
            auStack_80._16_4_ = 0.0;
            local_6c = 0.0;
            local_20 = local_68;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                      ((CMatrix3x3f *)&stack0xffffff50,(CVector3f *)auStack_4c,
                       (CVector3f *)(auStack_80 + 0x10));
          }
          in_stack_ffffff40 = in_stack_00000004;
          in_stack_ffffff44 = fVar3;
          core_dracbrid_cpp_FUN_00485b20();
          fVar3 = (float)((int)fVar3 + 1);
        } while ((int)fVar3 < (int)local_20);
      }
    }
  }
  pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)auStack_80);
  local_18 = (pCVar2->min).x + (pCVar2->max).x;
  fStack_14 = (pCVar2->min).y + (pCVar2->max).y;
  auStack_44._8_4_ = local_18 * FLOAT_00621b0e;
  local_38.x = fStack_14 * FLOAT_00621b0e;
  local_38.y = ((pCVar2->min).z + (pCVar2->max).z) * FLOAT_00621b0e;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_4c + 4),(CVector3f *)(auStack_44 + 8));
  if (in_stack_00000004[0x88].field20_0x118 == 0) {
    core_gore_cpp_FUN_004edbb0();
    return;
  }
  in_stack_00000004[0x23].actor_name[8] = '\0';
  in_stack_00000004[0x23].actor_name[9] = '\0';
  in_stack_00000004[0x23].actor_name[10] = '\0';
  in_stack_00000004[0x23].actor_name[0xb] = '\0';
  return;
}


// Assembly code:
// 004858f0: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_004858f0
// 004858f1: PUSH ESI
// 004858f2: PUSH EDI
// 004858f3: PUSH EBP
// 004858f4: MOV EBP,ESP
// 004858f6: SUB ESP,0x9c
// 004858fc: AND ESP,0xfffffff8
// 004858ff: MOV EDI,dword ptr [EBP + 0x14]
// 00485902: MOV EAX,dword ptr [EBP + 0x1c]
// 00485905: MOV EBX,dword ptr [EBP + 0x18]
// 00485908: MOV dword ptr [ESP],EAX
// 0048590b: LEA EAX,[EDI + 0x158]
// 00485911: LEA ESI,[EDI + 0x23b8]
// 00485917: CMP byte ptr [ESI],0x0
// 0048591a: JZ 0x0048597a
//   XREF to: 0048597a (CONDITIONAL_JUMP)
// 0048591c: PUSH EAX
// 0048591d: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00485922: ADD ESP,0x4
// 00485925: MOV EAX,dword ptr [EAX + 0x7140]
// 0048592b: MOV dword ptr [ESP + 0x8c],EAX
// 00485932: CMP EAX,0x1
// 00485935: JLE 0x0048597a
//   XREF to: 0048597a (CONDITIONAL_JUMP)
// 00485937: FLD float ptr [ESP]
// 0048593a: FLDZ
// 0048593c: FCOMPP
// 0048593e: FNSTSW AX
// 00485940: SAHF
// 00485941: JBE 0x0048594a
//   XREF to: 0048594a (CONDITIONAL_JUMP)
// 00485943: MOV dword ptr [ESP],0x41a00000
// 0048594a: MOV ECX,dword ptr [ESP + 0x8c]
//   Label: LAB_0048594a
// 00485951: XOR ESI,ESI
// 00485953: TEST ECX,ECX
// 00485955: JLE 0x0048597a
//   XREF to: 0048597a (CONDITIONAL_JUMP)
// 00485957: TEST EBX,EBX
//   Label: LAB_00485957
// 00485959: JNZ 0x00485a08
//   XREF to: 00485a08 (CONDITIONAL_JUMP)
// 0048595f: MOV EDX,dword ptr [EBP + 0x20]
//   Label: LAB_0048595f
// 00485962: PUSH EDX
// 00485963: PUSH EBX
// 00485964: PUSH ESI
//   Label: LAB_00485964
// 00485965: PUSH EDI
// 00485966: CALL core_dracbrid.cpp_FUN_00485b20
//   XREF to: 00485b20 (UNCONDITIONAL_CALL)
// 0048596b: ADD ESP,0x10
// 0048596e: MOV EAX,dword ptr [ESP + 0x8c]
// 00485975: INC ESI
// 00485976: CMP ESI,EAX
// 00485978: JL 0x00485957
//   XREF to: 00485957 (CONDITIONAL_JUMP)
// 0048597a: LEA ESI,[ESP + 0x2c]
//   Label: LAB_0048597a
// 0048597e: PUSH ESI
// 0048597f: MOV EAX,dword ptr [EDI + 0x154]
// 00485985: PUSH EDI
// 00485986: CALL dword ptr [EAX + 0x14]
// 00485989: LEA ESI,[EAX + 0xc]
// 0048598c: FLD float ptr [EAX]
// 0048598e: FADD float ptr [ESI]
// 00485990: ADD ESP,0x8
// 00485993: FST float ptr [ESP + 0x80]
// 0048599a: FLD float ptr [EAX + 0x4]
// 0048599d: FADD float ptr [ESI + 0x4]
// 004859a0: FXCH
// 004859a2: FLD float ptr [0x00621b0e]
//   XREF to: 00621b0e (READ)
// 004859a8: FXCH
// 004859aa: FMUL ST1
// 004859ac: FXCH ST2
// 004859ae: FST float ptr [ESP + 0x84]
// 004859b5: FMUL ST1
// 004859b7: FLD float ptr [EAX + 0x8]
// 004859ba: FADD float ptr [ESI + 0x8]
// 004859bd: LEA EAX,[ESP + 0x5c]
// 004859c1: FST float ptr [ESP + 0x88]
// 004859c8: FMULP ST2
// 004859ca: PUSH EAX
// 004859cb: LEA EAX,[ESP + 0x54]
// 004859cf: FXCH ST2
// 004859d1: FSTP float ptr [ESP + 0x60]
// 004859d5: PUSH EAX
// 004859d6: FXCH
// 004859d8: FSTP float ptr [ESP + 0x68]
// 004859dc: PUSH EDI
// 004859dd: FSTP float ptr [ESP + 0x70]
// 004859e1: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004859e6: MOV ECX,dword ptr [EDI + 0xb7d8]
// 004859ec: ADD ESP,0xc
// 004859ef: TEST ECX,ECX
// 004859f1: JZ 0x00485aed
//   XREF to: 00485aed (CONDITIONAL_JUMP)
// 004859f7: MOV dword ptr [EDI + 0x2f10],0x0
// 00485a01: MOV ESP,EBP
// 00485a03: POP EBP
// 00485a04: POP EDI
// 00485a05: POP ESI
// 00485a06: POP EBX
// 00485a07: RET
// 00485a08: FLD float ptr [ESP]
//   Label: LAB_00485a08
// 00485a0b: FLDZ
// 00485a0d: FCOMPP
// 00485a0f: FNSTSW AX
// 00485a11: SAHF
// 00485a12: JNC 0x0048595f
//   XREF to: 0048595f (CONDITIONAL_JUMP)
// 00485a18: PUSH EBX
// 00485a19: LEA EAX,[ESP + 0x78]
// 00485a1d: PUSH EAX
// 00485a1e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00485a23: ADD ESP,0x8
// 00485a26: PUSH dword ptr [ESP]
// 00485a29: FLD float ptr [ESP + 0x4]
// 00485a2d: FCHS
// 00485a2f: FSTP float ptr [ESP + 0x94]
// 00485a36: PUSH dword ptr [ESP + 0x94]
// 00485a3d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00485aed: MOV ESI,dword ptr [EDI + 0x2610]
//   Label: LAB_00485aed
// 00485af3: PUSH ESI
// 00485af4: PUSH 0x64
// 00485af6: PUSH EBX
// 00485af7: LEA EAX,[ESP + 0x5c]
// 00485afb: PUSH EAX
// 00485afc: MOV EDI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 00485b02: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 00485b03: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 00485b08: ADD ESP,0x14
// 00485b0b: MOV ESP,EBP
// 00485b0d: POP EBP
// 00485b0e: POP EDI
// 00485b0f: POP ESI
// 00485b10: POP EBX
// 00485b11: RET
