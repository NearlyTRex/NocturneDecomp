// Name: core_boxactor.cpp_FUN_00422a50
// Address: 00422a50
// Address Range: [[00422a50, 00422afa] [00422b17, 00422c73]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422a50()
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonFilter[8] CDemonFilter_ARRAY_008229ec
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_FUN_0040cc70
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0
//   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   core_set.cpp_CDemonSet_FUN_0056d110
//   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422a50
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
               CDemonActor *param_5,undefined4 param_6,float param_7)

{
  CDemonActor *this_ptr;
  CDemonSet *this_ptr_00;
  CDemonActor *pCVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  float unaff_retaddr;
  int filter_index;
  int filter_pos_x;
  int in_stack_ffffff20;
  CMatrix3x4f *in_stack_ffffff30;
  undefined4 auStack_c4 [10];
  undefined1 auStack_9c [52];
  undefined4 uStack_68;
  CVector3f aCStack_64 [3];
  undefined1 auStack_40 [56];
  
  this_ptr = param_5;
  bVar6 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_004219e0();
  if (param_5[4].scale.y == 2) {
    param_7 = param_5[0x28].create_prob - param_7;
    param_5[0x28].create_prob = param_7;
    if (param_7 <= 0.0) {
      filter_pos_x = 0;
      filter_index = 0;
      iVar3 = core_actor_cpp_FUN_0040cc70();
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
                ((CDemonLight *)&param_5[4].scale.z,CDemonFilter_ARRAY_008229ec + iVar3,filter_index
                 ,filter_pos_x,in_stack_ffffff20);
      pCVar1 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.15);
      param_5[0x28].create_prob = (float)pCVar1;
      param_5 = pCVar1;
    }
  }
  if (this_ptr[4].scale.y != 3) {
    if (this_ptr[0x1a].orient.bank == 0.0) {
      return;
    }
    core_actor_cpp_CDemonActor_FUN_00408ec0(this_ptr);
    if (&this_ptr[4].field19_0x114 != (int *)&stack0xfffffffc) {
      this_ptr[4].field19_0x114 = unaff_EBX;
      this_ptr[4].field20_0x118 = (int)unaff_retaddr;
      this_ptr[4].field21_0x11c = (int)param_5;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_40,&g_ZeroVector,(CVector3f *)&this_ptr[0x28].field6_0x68);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_9c,&g_ZeroVector,(CVector3f *)&this_ptr->orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)(auStack_40 + 8),(CMatrix3x4f *)(auStack_9c + 4),in_stack_ffffff30);
    puVar4 = auStack_c4;
    puVar5 = &uStack_68;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_64,(CMatrix3x3f *)&stack0xfffffffc);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&this_ptr[4].field22_0x120,(CVector3f *)&stack0x00000000);
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)this_ptr[0x28].create_event,(CColor3f *)&this_ptr->location);
  uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  *(uint *)(this_ptr[0x28].create_event + 0x3c) = uVar2 & 0x7fff;
  this_ptr[0x28].create_event[0x1c] = (char)((int)(uVar2 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)this_ptr[0x28].create_event,2.0);
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr[0x28].create_event[0x20] = '\0';
  this_ptr[0x28].create_event[0x21] = '\0';
  this_ptr[0x28].create_event[0x22] = '\0';
  this_ptr[0x28].create_event[0x23] = '\0';
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr_00);
  return;
}


// Assembly code:
// 00422a50: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422a50
// 00422a51: PUSH EBP
// 00422a52: SUB ESP,0xdc
// 00422a58: MOV EBX,dword ptr [ESP + 0xe8]
// 00422a5f: PUSH dword ptr [ESP + 0xec]
// 00422a66: PUSH EBX
// 00422a67: CALL core_boxactor.cpp_CBoxActor_process_FUN_004219e0
//   XREF to: 004219e0 (UNCONDITIONAL_CALL)
// 00422a6c: MOV EDX,dword ptr [EBX + 0x66c]
// 00422a72: ADD ESP,0x8
// 00422a75: CMP EDX,0x2
// 00422a78: JZ 0x00422a9d
//   XREF to: 00422a9d (CONDITIONAL_JUMP)
// 00422a7a: CMP dword ptr [EBX + 0x66c],0x3
//   Label: LAB_00422a7a
// 00422a81: JZ 0x00422b17
//   XREF to: 00422b17 (CONDITIONAL_JUMP)
// 00422a87: CMP dword ptr [EBX + 0x2324],0x0
// 00422a8e: JNZ 0x00422b85
//   XREF to: 00422b85 (CONDITIONAL_JUMP)
// 00422a94: ADD ESP,0xdc
// 00422a9a: POP EBP
// 00422a9b: POP EBX
// 00422a9c: RET
// 00422a9d: FLD float ptr [EBX + 0x3634]
//   Label: LAB_00422a9d
// 00422aa3: FSUB float ptr [ESP + 0xec]
// 00422aaa: FST float ptr [EBX + 0x3634]
// 00422ab0: FLDZ
// 00422ab2: FCOMPP
// 00422ab4: FNSTSW AX
// 00422ab6: SAHF
// 00422ab7: JC 0x00422a7a
//   XREF to: 00422a7a (CONDITIONAL_JUMP)
// 00422ab9: PUSH 0x0
// 00422abb: PUSH 0x0
// 00422abd: PUSH 0x0
// 00422abf: PUSH 0x7
// 00422ac1: PUSH 0x0
// 00422ac3: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00422ac8: MOV EDX,EAX
// 00422aca: SHL EAX,0x2
// 00422acd: ADD EAX,EDX
// 00422acf: SHL EAX,0x2
// 00422ad2: SUB EAX,EDX
// 00422ad4: SHL EAX,0x2
// 00422ad7: ADD ESP,0x8
// 00422ada: ADD EAX,0x8229ec
//   XREF to: 008229ec (DATA)
// 00422adf: PUSH EAX
// 00422ae0: LEA EAX,[EBX + 0x670]
// 00422ae6: PUSH EAX
// 00422ae7: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 00422aec: ADD ESP,0x14
// 00422aef: PUSH 0x3e19999a
// 00422af4: PUSH 0x0
// 00422af6: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00422b17: LEA EAX,[EBX + 0x20]
//   Label: LAB_00422b17
// 00422b1a: PUSH EAX
// 00422b1b: ADD EBX,0x3638
// 00422b21: PUSH EBX
// 00422b22: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 00422b27: ADD ESP,0x8
// 00422b2a: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00422b2f: MOV EDX,EAX
// 00422b31: AND EDX,0x7fff
// 00422b37: MOV EAX,EDX
// 00422b39: MOV dword ptr [EBX + 0x3c],EDX
// 00422b3c: SAR EDX,0x1f
// 00422b3f: SHL EDX,0x8
// 00422b42: SBB EAX,EDX
// 00422b44: SAR EAX,0x8
// 00422b47: MOV EDX,EAX
// 00422b49: SAR EDX,0x1f
// 00422b4c: SHL EDX,0x2
// 00422b4f: SBB EAX,EDX
// 00422b51: SAR EAX,0x2
// 00422b54: PUSH 0x40000000
// 00422b59: PUSH EBX
// 00422b5a: MOV byte ptr [EBX + 0x1c],AL
// 00422b5d: CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   XREF to: 00471360 (UNCONDITIONAL_CALL)
// 00422b62: ADD ESP,0x8
// 00422b65: PUSH EBX
// 00422b66: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00422b6c: PUSH EBP
//   XREF to: 03114278 (DATA)
// 00422b6d: MOV dword ptr [EBX + 0x20],0x0
// 00422b74: CALL core_set.cpp_CDemonSet_FUN_0056d110
//   XREF to: 0056d110 (UNCONDITIONAL_CALL)
// 00422b79: ADD ESP,0x8
// 00422b7c: ADD ESP,0xdc
// 00422b82: POP EBP
// 00422b83: POP EBX
// 00422b84: RET
// 00422b85: LEA EAX,[EBX + 0x361c]
//   Label: LAB_00422b85
// 00422b8b: PUSH EAX
// 00422b8c: LEA EAX,[ESP + 0xd0]
// 00422b93: PUSH EAX
// 00422b94: PUSH EBX
// 00422b95: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00422b9a: LEA EAX,[ESP + 0xd8]
// 00422ba1: LEA EDX,[EBX + 0x674]
// 00422ba7: ADD ESP,0xc
// 00422baa: CMP EDX,EAX
// 00422bac: JZ 0x00422bcb
//   XREF to: 00422bcb (CONDITIONAL_JUMP)
// 00422bae: MOV EAX,dword ptr [ESP + 0xcc]
// 00422bb5: MOV dword ptr [EDX],EAX
// 00422bb7: MOV EAX,dword ptr [ESP + 0xd0]
// 00422bbe: MOV dword ptr [EDX + 0x4],EAX
// 00422bc1: MOV EAX,dword ptr [ESP + 0xd4]
// 00422bc8: MOV dword ptr [EDX + 0x8],EAX
// 00422bcb: PUSH EDI
//   Label: LAB_00422bcb
// 00422bcc: PUSH ESI
// 00422bcd: LEA EAX,[EBX + 0x3628]
// 00422bd3: PUSH EAX
// 00422bd4: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00422bd9: LEA EAX,[ESP + 0xa0]
// 00422be0: PUSH EAX
// 00422be1: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 00422be6: ADD ESP,0xc
// 00422be9: LEA EAX,[EBX + 0x30]
// 00422bec: PUSH EAX
// 00422bed: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00422bf2: LEA EAX,[ESP + 0x40]
// 00422bf6: PUSH EAX
// 00422bf7: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 00422bfc: ADD ESP,0xc
// 00422bff: LEA EAX,[ESP + 0x38]
// 00422c03: PUSH EAX
// 00422c04: LEA EAX,[ESP + 0x9c]
// 00422c0b: PUSH EAX
// 00422c0c: LEA ESI,[ESP + 0x10]
// 00422c10: LEA EDI,[ESP + 0x70]
// 00422c14: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 00422c19: ADD ESP,0x8
// 00422c1c: LEA EAX,[ESP + 0xc8]
// 00422c23: MOV ECX,0xc
// 00422c28: PUSH EAX
// 00422c29: LEA EAX,[ESP + 0x6c]
// 00422c2d: LEA ESI,[ESP + 0xc]
// 00422c31: PUSH EAX
// 00422c32: MOVSD.REP ES:EDI,ESI
// 00422c34: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 00422c39: ADD ESP,0x8
// 00422c3c: LEA EAX,[ESP + 0xc8]
// 00422c43: LEA ESI,[EBX + 0x670]
// 00422c49: PUSH EAX
// 00422c4a: ADD EBX,0x680
// 00422c50: PUSH EBX
// 00422c51: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00422c56: ADD ESP,0x8
// 00422c59: PUSH ESI
// 00422c5a: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00422c60: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00422c61: CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   XREF to: 0056d090 (UNCONDITIONAL_CALL)
// 00422c66: ADD ESP,0x8
// 00422c69: POP ESI
// 00422c6a: POP EDI
// 00422c6b: ADD ESP,0xdc
// 00422c71: POP EBP
// 00422c72: POP EBX
// 00422c73: RET
