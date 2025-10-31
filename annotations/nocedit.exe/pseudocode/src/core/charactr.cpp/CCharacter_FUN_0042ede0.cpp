// Name: core_charactr.cpp_CCharacter_FUN_0042ede0
// Address: 0042ede0
// Address Range: [[0042ede0, 0042f2fb]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)
// Cross-references:
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f566f [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8c70 (004f8c70) at 004f9302 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_005293b0 (005293b0) at 005296e5 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9260 (005d9260) at 005d974c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_was_in_the_way_but_cou_00617626
//   undefined4 DAT_00617662
//   undefined4 DAT_0061766a
//   undefined4 DAT_00617672
//   undefined4 DAT_0061767a
//   undefined4 DAT_00617682
//   undefined4 DAT_0061768a
//   undefined4 DAT_00617692
//   undefined4 DAT_0061769a
//   undefined4 DAT_006176a2
//   undefined4 DAT_006176aa
//   undefined4 DAT_0066e740
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_hero.cpp_closestHeroToPoint_FUN_004f2170
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr)

{
  bool bVar1;
  char *pcVar2;
  CCharacter *pCVar3;
  int iVar4;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  float unaff_retaddr;
  float in_stack_00000008;
  uint uStack0000000c;
  float fStack00000010;
  float fStack_f4;
  float fStack_f0;
  CMatrix3x3f CStack_e8;
  CMatrix3x3f CStack_c0;
  CVector3f CStack_9c;
  CVector3f local_8c;
  CVector3f CStack_80;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float local_40;
  float local_3c;
  CVector3f CStack_38;
  CVector3f local_2c [2];
  float fStack_14;
  
  pCVar3 = this_ptr;
  if (0.0 <= *(float *)(this_ptr->cloth_data + 0x32c)) {
    this_ptr_00 = (CDemonActor *)core_hero_cpp_closestHeroToPoint_FUN_004f2170();
    local_2c[0].y = (float)this_ptr_00;
    core_actor_cpp_CDemonActor_FUN_00408f10(this_ptr_00);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (CStack_c0.m + 1,&CStack_9c);
    fVar6 = ABS(pCVar5->y);
    CStack_38.x = (this_ptr->base_actor).location.position.x - (this_ptr_00->location).position.x;
    CStack_38.y = (this_ptr->base_actor).location.position.y - (this_ptr_00->location).position.y;
    CStack_38.z = (this_ptr->base_actor).location.position.z - (this_ptr_00->location).position.z;
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_80,&CStack_38);
    fStack_14 = pCVar5->y;
    iVar4 = (*(this_ptr_00->metadata).vtable[1].processMeleeHit)(this_ptr_00,(int)fVar6);
    if ((iVar4 != 0) && (fStack_f0 < (float)_DAT_00617662)) {
      bVar1 = CStack_80.x < 0.0;
      in_stack_00000008 = 0.0;
      do {
        fVar6 = in_stack_00000008;
        if (bVar1) {
          fVar6 = (float)((uint)in_stack_00000008 ^ 1);
        }
        fStack00000010 = unaff_retaddr + *(float *)(&DAT_0066e740 + (int)fVar6 * 4);
        CStack_5c.x = 0.0;
        CStack_5c.z = 0.0;
        CStack_5c.y = fStack00000010;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_e8,&CStack_5c);
        while ((float)_DAT_006176a2 < 6.5) {
          local_8c.z = 6.5;
          local_8c.x = 0.0;
          local_8c.y = 0.0;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_e8,&CStack_50,&local_8c);
          local_40 = *(float *)(unaff_ESI + 0x20) + pCVar5->x;
          local_3c = *(float *)(unaff_ESI + 0x24) + pCVar5->y;
          CStack_38.x = *(float *)(unaff_ESI + 0x28) + pCVar5->z;
          if ((float *)(this_ptr->cloth_data + 0x330) != &local_40) {
            *(float *)(this_ptr->cloth_data + 0x330) = local_40;
            *(float *)(this_ptr->cloth_data + 0x334) = local_3c;
            *(float *)(this_ptr->cloth_data + 0x338) = CStack_38.x;
          }
          fStack_f4 = 0.0;
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
          if (-1 < iVar4) {
            pCVar3->cloth_data[0x33c] = '\0';
            pCVar3->cloth_data[0x33d] = '\0';
            pCVar3->cloth_data[0x33e] = '\0';
            pCVar3->cloth_data[0x33f] = '\0';
            pCVar3->cloth_data[0x32c] = '\0';
            pCVar3->cloth_data[0x32d] = '\0';
            pCVar3->cloth_data[0x32e] = -0x80;
            pCVar3->cloth_data[0x32f] = -0x40;
            return 2;
          }
          CStack_e8.m[0].y = CStack_e8.m[0].y + _DAT_006176aa;
        }
        in_stack_00000008 = (float)((int)in_stack_00000008 + 1);
      } while ((int)in_stack_00000008 < 6);
    }
    if (((ABS(CStack_80.y) <= (float)_DAT_00617672) && (fStack_f0 <= (float)_DAT_0061767a)) &&
       (SQRT(CStack_80.z * CStack_80.z + CStack_80.x * CStack_80.x + CStack_80.y * CStack_80.y) <=
        (float)_DAT_00617682)) {
      fVar6 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x32c) = fVar6;
      if (fVar6 < (float)_DAT_0061768a) {
        return 0;
      }
      pcVar2 = this_ptr->cloth_data;
      uStack0000000c = 0;
      do {
        this_ptr = (CCharacter *)
                   ((float)((int)uStack0000000c / 2) * (float)_DAT_00617692 * (float)_DAT_0061769a);
        if ((uStack0000000c & 1) != 0) {
          this_ptr = (CCharacter *)-(float)this_ptr;
        }
        fStack00000010 = unaff_retaddr + (float)this_ptr;
        CStack_38.x = 0.0;
        CStack_38.z = 0.0;
        CStack_38.y = fStack00000010;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_c0,&CStack_38);
        while ((float)_DAT_006176a2 < fStack_f4) {
          fStack_14 = 0.0;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&CStack_c0,local_2c,(CVector3f *)&fStack_14);
          fStack_70 = *(float *)(unaff_ESI + 0x20) + pCVar5->x;
          fStack_6c = *(float *)(unaff_ESI + 0x24) + pCVar5->y;
          fStack_68 = *(float *)(unaff_ESI + 0x28) + pCVar5->z;
          if ((float *)(pcVar2 + 0x330) != &fStack_70) {
            *(float *)(pcVar2 + 0x330) = fStack_70;
            *(float *)(pCVar3->cloth_data + 0x334) = fStack_6c;
            *(float *)(pCVar3->cloth_data + 0x338) = fStack_68;
          }
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(pCVar3);
          if (-1 < iVar4) {
            pCVar3->cloth_data[0x33c] = '\0';
            pCVar3->cloth_data[0x33d] = '\0';
            pCVar3->cloth_data[0x33e] = '\0';
            pCVar3->cloth_data[0x33f] = '\0';
            pCVar3->cloth_data[0x32c] = '\0';
            pCVar3->cloth_data[0x32d] = '\0';
            pCVar3->cloth_data[0x32e] = -0x60;
            pCVar3->cloth_data[0x32f] = -0x40;
            return 1;
          }
          fStack_f4 = _DAT_006176aa + 0.0;
        }
        uStack0000000c = uStack0000000c + 1;
        if (8 < (int)uStack0000000c) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",pCVar3);
          pCVar3->cloth_data[0x32c] = '\0';
          pCVar3->cloth_data[0x32d] = '\0';
          pCVar3->cloth_data[0x32e] = '\0';
          pCVar3->cloth_data[0x32f] = '\0';
          return 0;
        }
      } while( true );
    }
  }
  else {
    fVar6 = *(float *)(this_ptr->cloth_data + 0x32c) + in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x32c) = fVar6;
    if (((fVar6 < 0.0) && (*(float *)(this_ptr->cloth_data + 0x33c) <= (float)_DAT_0061766a)) &&
       (iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr), iVar4 == 0)) {
      return 1;
    }
  }
  pCVar3->cloth_data[0x32c] = '\0';
  pCVar3->cloth_data[0x32d] = '\0';
  pCVar3->cloth_data[0x32e] = '\0';
  pCVar3->cloth_data[0x32f] = '\0';
  return 0;
}


// Assembly code:
// 0042ede0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042ede0
// 0042ede1: PUSH ESI
// 0042ede2: PUSH EDI
// 0042ede3: PUSH EBP
// 0042ede4: MOV EBP,ESP
// 0042ede6: SUB ESP,0x108
// 0042edec: AND ESP,0xfffffff8
// 0042edef: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042edf2: FLD float ptr [EDI + 0x2dc4]
// 0042edf8: FLDZ
// 0042edfa: FCOMPP
// 0042edfc: FNSTSW AX
// 0042edfe: SAHF
// 0042edff: JBE 0x0042ee63
//   XREF to: 0042ee63 (CONDITIONAL_JUMP)
// 0042ee01: FLD float ptr [EDI + 0x2dc4]
// 0042ee07: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042ee0a: FST float ptr [EDI + 0x2dc4]
// 0042ee10: FLDZ
// 0042ee12: FCOMPP
// 0042ee14: FNSTSW AX
// 0042ee16: SAHF
// 0042ee17: JBE 0x0042ee2a
//   XREF to: 0042ee2a (CONDITIONAL_JUMP)
// 0042ee19: FLD float ptr [EDI + 0x2dd4]
// 0042ee1f: FCOMP double ptr [0x0061766a]
//   XREF to: 0061766a (READ)
// 0042ee25: FNSTSW AX
// 0042ee27: SAHF
// 0042ee28: JBE 0x0042ee3d
//   XREF to: 0042ee3d (CONDITIONAL_JUMP)
// 0042ee2a: MOV dword ptr [EDI + 0x2dc4],0x0
//   Label: LAB_0042ee2a
// 0042ee34: XOR EAX,EAX
//   Label: LAB_0042ee34
// 0042ee36: MOV ESP,EBP
//   Label: LAB_0042ee36
// 0042ee38: POP EBP
// 0042ee39: POP EDI
// 0042ee3a: POP ESI
// 0042ee3b: POP EBX
// 0042ee3c: RET
// 0042ee3d: PUSH 0x0
//   Label: LAB_0042ee3d
// 0042ee3f: PUSH 0x0
// 0042ee41: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042ee46: PUSH 0x0
// 0042ee48: LEA EAX,[EDI + 0x2dc8]
// 0042ee4e: PUSH EAX
// 0042ee4f: PUSH EDI
// 0042ee50: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0042ee55: ADD ESP,0x18
// 0042ee58: TEST EAX,EAX
// 0042ee5a: JNZ 0x0042ee2a
//   XREF to: 0042ee2a (CONDITIONAL_JUMP)
// 0042ee5c: MOV EAX,0x1
// 0042ee61: JMP 0x0042ee36
//   XREF to: 0042ee36 (UNCONDITIONAL_JUMP)
// 0042ee63: LEA ESI,[EDI + 0x20]
//   Label: LAB_0042ee63
// 0042ee66: PUSH ESI
// 0042ee67: CALL core_hero.cpp_closestHeroToPoint_FUN_004f2170
//   XREF to: 004f2170 (UNCONDITIONAL_CALL)
// 0042ee6c: ADD ESP,0x4
// 0042ee6f: MOV EBX,EAX
// 0042ee71: PUSH ESI
// 0042ee72: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0042ee79: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0xa4] (DATA)
// 0042ee7d: PUSH EAX
// 0042ee7e: PUSH EBX
// 0042ee7f: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0042ee84: ADD ESP,0xc
// 0042ee87: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0xa4] (DATA)
// 0042ee8b: PUSH EAX
// 0042ee8c: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0xbc] (DATA)
// 0042ee90: PUSH EAX
// 0042ee91: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042ee96: FLD float ptr [EAX + 0x4]
// 0042ee99: FABS
// 0042ee9b: LEA EAX,[EBX + 0x20]
// 0042ee9e: FLD float ptr [ESI]
// 0042eea0: FSUB float ptr [EAX]
// 0042eea2: ADD ESP,0x8
// 0042eea5: FSTP float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x44] (WRITE)
// 0042eeac: FLD float ptr [ESI + 0x4]
// 0042eeaf: FSUB float ptr [EAX + 0x4]
// 0042eeb2: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x40] (WRITE)
// 0042eeb9: FLD float ptr [ESI + 0x8]
// 0042eebc: FSUB float ptr [EAX + 0x8]
// 0042eebf: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x44] (DATA)
// 0042eec6: PUSH EAX
// 0042eec7: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x8c] (DATA)
// 0042eece: FXCH
// 0042eed0: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x114] (WRITE)
// 0042eed4: PUSH EAX
// 0042eed5: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0042eedc: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042eee1: ADD ESP,0x8
// 0042eee4: MOV EAX,dword ptr [EAX + 0x4]
// 0042eee7: PUSH EBX
// 0042eee8: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0042eeef: MOV EAX,dword ptr [EBX + 0x154]
// 0042eef5: CALL dword ptr [EAX + 0x15c]
// 0042eefb: ADD ESP,0x4
// 0042eefe: TEST EAX,EAX
// 0042ef00: JZ 0x0042f09e
//   XREF to: 0042f09e (CONDITIONAL_JUMP)
// 0042ef06: FLD float ptr [ESP + 0x4]
// 0042ef0a: FCOMP double ptr [0x00617662]
//   XREF to: 00617662 (READ)
// 0042ef10: FNSTSW AX
// 0042ef12: SAHF
// 0042ef13: JNC 0x0042f09e
//   XREF to: 0042f09e (CONDITIONAL_JUMP)
// 0042ef19: FLD float ptr [ESP + 0x74]
// 0042ef1d: FLDZ
// 0042ef1f: FCOMPP
// 0042ef21: FNSTSW AX
// 0042ef23: SAHF
// 0042ef24: JBE 0x0042f07f
//   XREF to: 0042f07f (CONDITIONAL_JUMP)
// 0042ef2a: MOV EAX,0x1
// 0042ef2f: MOV ESI,dword ptr [ESP + 0xec]
//   Label: LAB_0042ef2f
// 0042ef36: MOV dword ptr [ESP + 0xf0],EAX
// 0042ef3d: XOR EDX,EDX
// 0042ef3f: LEA EBX,[EDI + 0x2dc8]
// 0042ef45: MOV dword ptr [ESP + 0xfc],EDX
// 0042ef4c: ADD ESI,0x20
// 0042ef4f: MOV ECX,dword ptr [ESP + 0xf0]
//   Label: LAB_0042ef4f
// 0042ef56: MOV EAX,dword ptr [ESP + 0xfc]
// 0042ef5d: TEST ECX,ECX
// 0042ef5f: JNZ 0x0042f203
//   XREF to: 0042f203 (CONDITIONAL_JUMP)
// 0042ef65: FLD float ptr [ESP + 0xf4]
//   Label: LAB_0042ef65
// 0042ef6c: FADD float ptr [EAX*0x4 + 0x66e740]
//   XREF to: 0066e740 (DATA)
// 0042ef73: XOR EAX,EAX
// 0042ef75: FSTP float ptr [ESP + 0x104]
// 0042ef7c: MOV dword ptr [ESP + 0x98],EAX
// 0042ef83: MOV dword ptr [ESP + 0xa0],EAX
// 0042ef8a: MOV EAX,dword ptr [ESP + 0x104]
// 0042ef91: MOV dword ptr [ESP + 0x9c],EAX
// 0042ef98: LEA EAX,[ESP + 0x98]
// 0042ef9f: PUSH EAX
// 0042efa0: LEA EAX,[ESP + 0x10]
// 0042efa4: PUSH EAX
// 0042efa5: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0042efaa: MOV ECX,0x40d00000
// 0042efaf: ADD ESP,0x8
// 0042efb2: MOV dword ptr [ESP + 0x8],ECX
// 0042efb6: FLD float ptr [ESP + 0x8]
//   Label: LAB_0042efb6
// 0042efba: FCOMP double ptr [0x006176a2]
//   XREF to: 006176a2 (READ)
// 0042efc0: FNSTSW AX
// 0042efc2: SAHF
// 0042efc3: JBE 0x0042f086
//   XREF to: 0042f086 (CONDITIONAL_JUMP)
// 0042efc9: MOV EAX,dword ptr [ESP + 0x8]
// 0042efcd: MOV dword ptr [ESP + 0x70],EAX
// 0042efd1: LEA EAX,[ESP + 0x68]
// 0042efd5: PUSH EAX
// 0042efd6: LEA EAX,[ESP + 0xa8]
// 0042efdd: PUSH EAX
// 0042efde: LEA EAX,[ESP + 0x14]
// 0042efe2: XOR ECX,ECX
// 0042efe4: PUSH EAX
// 0042efe5: MOV dword ptr [ESP + 0x74],ECX
// 0042efe9: MOV dword ptr [ESP + 0x78],ECX
// 0042efed: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0042eff2: FLD float ptr [ESI]
// 0042eff4: FADD float ptr [EAX]
// 0042eff6: ADD ESP,0xc
// 0042eff9: FSTP float ptr [ESP + 0xb0]
// 0042f000: FLD float ptr [ESI + 0x4]
//   Label: LAB_0042f000
// 0042f003: FADD float ptr [EAX + 0x4]
// 0042f006: FSTP float ptr [ESP + 0xb4]
// 0042f00d: FLD float ptr [ESI + 0x8]
// 0042f010: FADD float ptr [EAX + 0x8]
// 0042f013: LEA EAX,[ESP + 0xb0]
// 0042f01a: FSTP float ptr [ESP + 0xb8]
// 0042f021: CMP EBX,EAX
// 0042f023: JZ 0x0042f042
//   XREF to: 0042f042 (CONDITIONAL_JUMP)
// 0042f025: MOV EAX,dword ptr [ESP + 0xb0]
// 0042f02c: MOV dword ptr [EBX],EAX
// 0042f02e: MOV EAX,dword ptr [ESP + 0xb4]
// 0042f035: MOV dword ptr [EBX + 0x4],EAX
// 0042f038: MOV EAX,dword ptr [ESP + 0xb8]
// 0042f03f: MOV dword ptr [EBX + 0x8],EAX
// 0042f042: PUSH 0x0
//   Label: LAB_0042f042
// 0042f044: PUSH 0x0
// 0042f046: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042f04b: PUSH 0x0
// 0042f04d: PUSH EBX
// 0042f04e: PUSH EDI
// 0042f04f: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0042f054: ADD ESP,0x18
// 0042f057: TEST EAX,EAX
// 0042f059: JL 0x0042f20a
//   XREF to: 0042f20a (CONDITIONAL_JUMP)
// 0042f05f: MOV dword ptr [EDI + 0x2dd4],0x0
// 0042f069: MOV EAX,0x2
// 0042f06e: MOV dword ptr [EDI + 0x2dc4],0xc0800000
// 0042f078: MOV ESP,EBP
// 0042f07a: POP EBP
// 0042f07b: POP EDI
// 0042f07c: POP ESI
// 0042f07d: POP EBX
// 0042f07e: RET
// 0042f07f: XOR EAX,EAX
//   Label: LAB_0042f07f
// 0042f081: JMP 0x0042ef2f
//   XREF to: 0042ef2f (UNCONDITIONAL_JUMP)
// 0042f086: MOV EAX,dword ptr [ESP + 0xfc]
//   Label: LAB_0042f086
// 0042f08d: INC EAX
// 0042f08e: MOV dword ptr [ESP + 0xfc],EAX
// 0042f095: CMP EAX,0x6
// 0042f098: JL 0x0042ef4f
//   XREF to: 0042ef4f (CONDITIONAL_JUMP)
// 0042f09e: FLD float ptr [ESP + 0x78]
//   Label: LAB_0042f09e
// 0042f0a2: FABS
// 0042f0a4: FCOMP double ptr [0x00617672]
//   XREF to: 00617672 (READ)
// 0042f0aa: FNSTSW AX
// 0042f0ac: SAHF
// 0042f0ad: JA 0x0042ee2a
//   XREF to: 0042ee2a (CONDITIONAL_JUMP)
// 0042f0b3: FLD float ptr [ESP + 0x4]
// 0042f0b7: FCOMP double ptr [0x0061767a]
//   XREF to: 0061767a (READ)
// 0042f0bd: FNSTSW AX
// 0042f0bf: SAHF
// 0042f0c0: JA 0x0042ee2a
//   XREF to: 0042ee2a (CONDITIONAL_JUMP)
// 0042f0c6: FLD float ptr [ESP + 0x78]
// 0042f0ca: FMUL ST0
// 0042f0cc: FLD float ptr [ESP + 0x74]
// 0042f0d0: FMUL ST0
// 0042f0d2: FADDP
// 0042f0d4: FLD float ptr [ESP + 0x7c]
// 0042f0d8: FMUL ST0
// 0042f0da: FADDP
// 0042f0dc: FSQRT
// 0042f0de: FCOMP double ptr [0x00617682]
//   XREF to: 00617682 (READ)
// 0042f0e4: FNSTSW AX
// 0042f0e6: SAHF
// 0042f0e7: JA 0x0042ee2a
//   XREF to: 0042ee2a (CONDITIONAL_JUMP)
// 0042f0ed: FLD float ptr [EDI + 0x2dc4]
// 0042f0f3: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042f0f6: FST float ptr [EDI + 0x2dc4]
// 0042f0fc: FCOMP double ptr [0x0061768a]
//   XREF to: 0061768a (READ)
// 0042f102: FNSTSW AX
// 0042f104: SAHF
// 0042f105: JC 0x0042ee34
//   XREF to: 0042ee34 (CONDITIONAL_JUMP)
// 0042f10b: MOV ESI,dword ptr [ESP + 0xec]
// 0042f112: XOR EDX,EDX
// 0042f114: LEA EBX,[EDI + 0x2dc8]
// 0042f11a: MOV dword ptr [ESP + 0x100],EDX
// 0042f121: ADD ESI,0x20
// 0042f124: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_0042f124
// 0042f12b: MOV EDX,EAX
// 0042f12d: SAR EDX,0x1f
// 0042f130: SUB EAX,EDX
// 0042f132: SAR EAX,0x1
// 0042f134: MOV dword ptr [ESP + 0x104],EAX
// 0042f13b: FILD dword ptr [ESP + 0x104]
// 0042f142: FMUL double ptr [0x00617692]
//   XREF to: 00617692 (READ)
// 0042f148: FMUL double ptr [0x0061769a]
//   XREF to: 0061769a (READ)
// 0042f14e: MOV AH,byte ptr [ESP + 0x100]
// 0042f155: FSTP float ptr [ESP + 0xf8]
// 0042f15c: TEST AH,0x1
// 0042f15f: JNZ 0x0042f21d
//   XREF to: 0042f21d (CONDITIONAL_JUMP)
// 0042f165: FLD float ptr [ESP + 0xf4]
//   Label: LAB_0042f165
// 0042f16c: FADD float ptr [ESP + 0xf8]
// 0042f173: FSTP float ptr [ESP + 0x104]
// 0042f17a: MOV EAX,dword ptr [ESP + 0x104]
// 0042f181: MOV dword ptr [ESP + 0xc0],EAX
// 0042f188: LEA EAX,[ESP + 0xbc]
// 0042f18f: PUSH EAX
// 0042f190: LEA EAX,[ESP + 0x38]
// 0042f194: XOR ECX,ECX
// 0042f196: PUSH EAX
// 0042f197: MOV dword ptr [ESP + 0xc4],ECX
// 0042f19e: MOV dword ptr [ESP + 0xcc],ECX
// 0042f1a5: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0042f1aa: MOV EDX,0x40900000
// 0042f1af: ADD ESP,0x8
// 0042f1b2: MOV dword ptr [ESP],EDX
// 0042f1b5: FLD float ptr [ESP]
//   Label: LAB_0042f1b5
// 0042f1b8: FCOMP double ptr [0x006176a2]
//   XREF to: 006176a2 (READ)
// 0042f1be: FNSTSW AX
// 0042f1c0: SAHF
// 0042f1c1: JA 0x0042f23b
//   XREF to: 0042f23b (CONDITIONAL_JUMP)
// 0042f1c3: MOV ECX,dword ptr [ESP + 0x100]
// 0042f1ca: INC ECX
// 0042f1cb: MOV dword ptr [ESP + 0x100],ECX
// 0042f1d2: CMP ECX,0x8
// 0042f1d5: JLE 0x0042f124
//   XREF to: 0042f124 (CONDITIONAL_JUMP)
// 0042f1db: PUSH EDI
// 0042f1dc: PUSH 0x617626
//   XREF to: 00617626 (DATA)
// 0042f1e1: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0042f1e7: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 0042f1e8: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0042f1ed: ADD ESP,0xc
// 0042f1f0: MOV dword ptr [EDI + 0x2dc4],0x0
// 0042f1fa: XOR EAX,EAX
// 0042f1fc: MOV ESP,EBP
// 0042f1fe: POP EBP
// 0042f1ff: POP EDI
// 0042f200: POP ESI
// 0042f201: POP EBX
// 0042f202: RET
// 0042f203: XOR AL,0x1
//   Label: LAB_0042f203
// 0042f205: JMP 0x0042ef65
//   XREF to: 0042ef65 (UNCONDITIONAL_JUMP)
// 0042f20a: FLD float ptr [ESP + 0x8]
//   Label: LAB_0042f20a
// 0042f20e: FADD float ptr [0x006176aa]
//   XREF to: 006176aa (READ)
// 0042f214: FSTP float ptr [ESP + 0x8]
// 0042f218: JMP 0x0042efb6
//   XREF to: 0042efb6 (UNCONDITIONAL_JUMP)
// 0042f21d: XOR byte ptr [ESP + 0xfb],0x80
//   Label: LAB_0042f21d
// 0042f225: JMP 0x0042f165
//   XREF to: 0042f165 (UNCONDITIONAL_JUMP)
// 0042f22a: FLD float ptr [ESP]
//   Label: LAB_0042f22a
// 0042f22d: FADD float ptr [0x006176aa]
//   XREF to: 006176aa (READ)
// 0042f233: FSTP float ptr [ESP]
// 0042f236: JMP 0x0042f1b5
//   XREF to: 0042f1b5 (UNCONDITIONAL_JUMP)
// 0042f23b: MOV EAX,dword ptr [ESP]
//   Label: LAB_0042f23b
// 0042f23e: MOV dword ptr [ESP + 0xe8],EAX
// 0042f245: LEA EAX,[ESP + 0xe0]
// 0042f24c: PUSH EAX
// 0042f24d: LEA EAX,[ESP + 0xcc]
// 0042f254: PUSH EAX
// 0042f255: LEA EAX,[ESP + 0x3c]
// 0042f259: XOR ECX,ECX
// 0042f25b: PUSH EAX
// 0042f25c: MOV dword ptr [ESP + 0xec],ECX
// 0042f263: MOV dword ptr [ESP + 0xf0],ECX
// 0042f26a: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0042f26f: FLD float ptr [ESI]
// 0042f271: FADD float ptr [EAX]
// 0042f273: ADD ESP,0xc
// 0042f276: FSTP float ptr [ESP + 0x80]
// 0042f27d: FLD float ptr [ESI + 0x4]
// 0042f280: FADD float ptr [EAX + 0x4]
// 0042f283: FSTP float ptr [ESP + 0x84]
// 0042f28a: FLD float ptr [ESI + 0x8]
// 0042f28d: FADD float ptr [EAX + 0x8]
// 0042f290: LEA EAX,[ESP + 0x80]
// 0042f297: FSTP float ptr [ESP + 0x88]
// 0042f29e: CMP EBX,EAX
// 0042f2a0: JZ 0x0042f2bf
//   XREF to: 0042f2bf (CONDITIONAL_JUMP)
// 0042f2a2: MOV EAX,dword ptr [ESP + 0x80]
// 0042f2a9: MOV dword ptr [EBX],EAX
// 0042f2ab: MOV EAX,dword ptr [ESP + 0x84]
// 0042f2b2: MOV dword ptr [EBX + 0x4],EAX
// 0042f2b5: MOV EAX,dword ptr [ESP + 0x88]
// 0042f2bc: MOV dword ptr [EBX + 0x8],EAX
// 0042f2bf: PUSH 0x0
//   Label: LAB_0042f2bf
// 0042f2c1: PUSH 0x0
// 0042f2c3: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042f2c8: PUSH 0x0
// 0042f2ca: PUSH EBX
// 0042f2cb: PUSH EDI
// 0042f2cc: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0042f2d1: ADD ESP,0x18
// 0042f2d4: TEST EAX,EAX
// 0042f2d6: JL 0x0042f22a
//   XREF to: 0042f22a (CONDITIONAL_JUMP)
// 0042f2dc: MOV dword ptr [EDI + 0x2dd4],0x0
// 0042f2e6: MOV EAX,0x1
// 0042f2eb: MOV dword ptr [EDI + 0x2dc4],0xc0a00000
// 0042f2f5: MOV ESP,EBP
// 0042f2f7: POP EBP
// 0042f2f8: POP EDI
// 0042f2f9: POP ESI
// 0042f2fa: POP EBX
// 0042f2fb: RET
