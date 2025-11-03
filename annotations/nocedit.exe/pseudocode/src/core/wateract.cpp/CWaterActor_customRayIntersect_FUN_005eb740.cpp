// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// Address: 005eb740
// Address Range: [[005eb740, 005eb907]]
// Convention: __cdecl
// Signature: float core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor * this_ptr)
// Function calls:
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  float fVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_EDI;
  int iVar4;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float *in_stack_00000010;
  CVector3f *in_stack_ffffff68;
  CVector3f *in_stack_ffffff6c;
  CVector3f *in_stack_ffffff70;
  undefined1 auStack_74 [36];
  CBoundingBox3D local_50 [2];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,local_50);
  fVar2 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                    (this_ptr_00,in_stack_ffffff68,in_stack_ffffff6c,in_stack_ffffff70);
  if ((fVar2 < 0.0) || (1.0 < fVar2)) {
    auStack_74._0_4_ = 2.0;
  }
  else {
    iVar1 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
    iVar4 = 0;
    auStack_74._0_4_ = 2.0;
    pcVar3 = this_ptr->field21_0x298 + 0x7d10;
    if (0 < iVar1) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                  ((CDemonTriangle *)(auStack_74 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar3 + 0x18) * 0x20 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar3 + 0x24) * 0x20 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar3 + 0x30) * 0x20 + 4));
        fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                          ((CDemonTriangle *)auStack_74,in_stack_00000008,in_stack_0000000c);
        if (((fVar2 < (float)auStack_74._0_4_) && (0.0 <= fVar2)) && (fVar2 <= 1.0)) {
          fStack_20 = -local_50[0].min.y;
          fStack_1c = -local_50[0].min.z;
          fStack_18 = -local_50[0].max.x;
          auStack_74._0_4_ = fVar2;
          if (&fStack_14 != &fStack_20) {
            fStack_14 = fStack_20;
            unaff_EBP = fStack_1c;
            unaff_EDI = fStack_18;
          }
        }
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x48;
      } while (iVar4 < iVar1);
    }
    if (((float)auStack_74._0_4_ < 1.0) && (&fStack_14 != in_stack_00000010)) {
      *in_stack_00000010 = fStack_14;
      in_stack_00000010[1] = unaff_EBP;
      in_stack_00000010[2] = unaff_EDI;
    }
  }
  return (float)auStack_74._0_4_;
}


// Assembly code:
// 005eb740: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// 005eb741: PUSH ESI
// 005eb742: PUSH EDI
// 005eb743: PUSH EBP
// 005eb744: MOV EBP,ESP
// 005eb746: SUB ESP,0x8c
// 005eb74c: AND ESP,0xfffffff8
// 005eb74f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005eb752: PUSH 0x0
// 005eb754: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005eb757: PUSH EDX
// 005eb758: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005eb75b: PUSH ECX
// 005eb75c: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x50] (DATA)
// 005eb760: PUSH EAX
// 005eb761: MOV EDX,dword ptr [ESI + 0x154]
// 005eb767: PUSH ESI
// 005eb768: CALL dword ptr [EDX + 0x14]
// 005eb76b: ADD ESP,0x8
// 005eb76e: PUSH EAX
// 005eb76f: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 005eb774: MOV dword ptr [ESP + 0x98],EAX
// 005eb77b: FLD float ptr [ESP + 0x98]
// 005eb782: ADD ESP,0x10
// 005eb785: FLDZ
// 005eb787: FXCH
// 005eb789: FSTP double ptr [ESP]
// 005eb78c: FCOMP double ptr [ESP]
// 005eb78f: FNSTSW AX
// 005eb791: SAHF
// 005eb792: JA 0x005eb87a
//   XREF to: 005eb87a (CONDITIONAL_JUMP)
// 005eb798: FLD1
// 005eb79a: FCOMP double ptr [ESP]
// 005eb79d: FNSTSW AX
// 005eb79f: SAHF
// 005eb7a0: JC 0x005eb87a
//   XREF to: 005eb87a (CONDITIONAL_JUMP)
// 005eb7a6: MOV EBX,0x40000000
// 005eb7ab: MOV EAX,dword ptr [ESI + 0x2b234]
// 005eb7b1: XOR EDI,EDI
// 005eb7b3: MOV dword ptr [ESP + 0x14],EBX
// 005eb7b7: MOV dword ptr [ESP + 0x84],EAX
// 005eb7be: LEA EBX,[ESI + 0x7fa8]
// 005eb7c4: TEST EAX,EAX
// 005eb7c6: JLE 0x005eb835
//   XREF to: 005eb835 (CONDITIONAL_JUMP)
// 005eb7c8: ADD ESI,0x29c
// 005eb7ce: MOV EAX,dword ptr [EBX + 0x30]
//   Label: LAB_005eb7ce
// 005eb7d1: SHL EAX,0x5
// 005eb7d4: ADD EAX,ESI
// 005eb7d6: PUSH EAX
// 005eb7d7: MOV EAX,dword ptr [EBX + 0x24]
// 005eb7da: SHL EAX,0x5
// 005eb7dd: ADD EAX,ESI
// 005eb7df: PUSH EAX
// 005eb7e0: MOV EAX,dword ptr [EBX + 0x18]
// 005eb7e3: SHL EAX,0x5
// 005eb7e6: ADD EAX,ESI
// 005eb7e8: PUSH EAX
// 005eb7e9: LEA EAX,[ESP + 0x24]
// 005eb7ed: PUSH EAX
// 005eb7ee: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005eb7f3: ADD ESP,0x10
// 005eb7f6: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005eb7f9: PUSH ECX
// 005eb7fa: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005eb7fd: PUSH EAX
// 005eb7fe: LEA EAX,[ESP + 0x20]
// 005eb802: PUSH EAX
// 005eb803: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 005eb808: MOV dword ptr [ESP + 0x94],EAX
// 005eb80f: FLD float ptr [ESP + 0x94]
// 005eb816: ADD ESP,0xc
// 005eb819: FST float ptr [ESP + 0x10]
// 005eb81d: FCOMP float ptr [ESP + 0x14]
// 005eb821: FNSTSW AX
// 005eb823: SAHF
// 005eb824: JC 0x005eb887
//   XREF to: 005eb887 (CONDITIONAL_JUMP)
// 005eb826: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_005eb826
// 005eb82d: INC EDI
// 005eb82e: ADD EBX,0x48
// 005eb831: CMP EDI,EAX
// 005eb833: JL 0x005eb7ce
//   XREF to: 005eb7ce (CONDITIONAL_JUMP)
// 005eb835: FLD float ptr [ESP + 0x14]
//   Label: LAB_005eb835
// 005eb839: FLD1
// 005eb83b: FCOMPP
// 005eb83d: FNSTSW AX
// 005eb83f: SAHF
// 005eb840: JBE 0x005eb861
//   XREF to: 005eb861 (CONDITIONAL_JUMP)
// 005eb842: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005eb845: LEA EAX,[ESP + 0x74]
// 005eb849: CMP EAX,EDX
// 005eb84b: JZ 0x005eb861
//   XREF to: 005eb861 (CONDITIONAL_JUMP)
// 005eb84d: MOV EAX,dword ptr [ESP + 0x74]
// 005eb851: MOV dword ptr [EDX],EAX
// 005eb853: MOV EAX,dword ptr [ESP + 0x78]
// 005eb857: MOV dword ptr [EDX + 0x4],EAX
// 005eb85a: MOV EAX,dword ptr [ESP + 0x7c]
// 005eb85e: MOV dword ptr [EDX + 0x8],EAX
// 005eb861: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005eb861
// 005eb865: MOV dword ptr [ESP + 0x80],EAX
// 005eb86c: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_005eb86c
// 005eb873: MOV ESP,EBP
// 005eb875: POP EBP
// 005eb876: POP EDI
// 005eb877: POP ESI
// 005eb878: POP EBX
// 005eb879: RET
// 005eb87a: MOV dword ptr [ESP + 0x80],0x40000000
//   Label: LAB_005eb87a
// 005eb885: JMP 0x005eb86c
//   XREF to: 005eb86c (UNCONDITIONAL_JUMP)
// 005eb887: FLD float ptr [ESP + 0x10]
//   Label: LAB_005eb887
// 005eb88b: FLDZ
// 005eb88d: FXCH
// 005eb88f: FSTP double ptr [ESP + 0x8]
// 005eb893: FCOMP double ptr [ESP + 0x8]
// 005eb897: FNSTSW AX
// 005eb899: SAHF
// 005eb89a: JA 0x005eb826
//   XREF to: 005eb826 (CONDITIONAL_JUMP)
// 005eb89c: FLD1
// 005eb89e: FCOMP double ptr [ESP + 0x8]
// 005eb8a2: FNSTSW AX
// 005eb8a4: SAHF
// 005eb8a5: JC 0x005eb826
//   XREF to: 005eb826 (CONDITIONAL_JUMP)
// 005eb8ab: FLD float ptr [ESP + 0x3c]
// 005eb8af: FLD float ptr [ESP + 0x40]
// 005eb8b3: FLD float ptr [ESP + 0x44]
// 005eb8b7: MOV EAX,dword ptr [ESP + 0x10]
// 005eb8bb: LEA EDX,[ESP + 0x68]
// 005eb8bf: FXCH ST2
// 005eb8c1: FCHS
// 005eb8c3: FXCH
// 005eb8c5: FCHS
// 005eb8c7: FXCH ST2
// 005eb8c9: FCHS
// 005eb8cb: FXCH
// 005eb8cd: FSTP float ptr [ESP + 0x68]
// 005eb8d1: FXCH
// 005eb8d3: FSTP float ptr [ESP + 0x6c]
// 005eb8d7: MOV dword ptr [ESP + 0x14],EAX
// 005eb8db: LEA EAX,[ESP + 0x74]
// 005eb8df: FSTP float ptr [ESP + 0x70]
// 005eb8e3: CMP EAX,EDX
// 005eb8e5: JZ 0x005eb826
//   XREF to: 005eb826 (CONDITIONAL_JUMP)
// 005eb8eb: MOV EAX,dword ptr [ESP + 0x68]
// 005eb8ef: MOV dword ptr [ESP + 0x74],EAX
// 005eb8f3: MOV EAX,dword ptr [ESP + 0x6c]
// 005eb8f7: MOV dword ptr [ESP + 0x78],EAX
// 005eb8fb: MOV EAX,dword ptr [ESP + 0x70]
// 005eb8ff: MOV dword ptr [ESP + 0x7c],EAX
// 005eb903: JMP 0x005eb826
//   XREF to: 005eb826 (UNCONDITIONAL_JUMP)
