// Name: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
// Address: 00409150
// Address Range: [[00409150, 00409266]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150(CDemonActor * this_ptr, CVector3f * line_start, CVector3f * line_end, CVector3f * out_intersection_point)
// Cross-references:
//   core_hero.cpp_CHero_FUN_004f25c0 (004f25c0) at 004f25f5 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_rayCylinderIntersect_FUN_00408340
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150
          (CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,
          CVector3f *out_intersection_point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  BADSPACEBASE *in_ESP;
  SCollisionInfo SStack_54;
  CVector3f CStack_1c;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffff94);
  iVar7 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)&stack0xffffff98);
  if (iVar7 == 2) {
    fVar1 = line_end->y;
    fVar2 = line_start->y;
    fVar3 = line_end->z;
    fVar4 = line_start->z;
    fVar8 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                      (&SStack_54,line_start,(CVector3f *)&stack0xfffffff8,(CVector3f *)&CStack_1c.z
                      );
    if ((0.0 <= fVar8) && (fVar8 <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        fVar5 = line_start->y;
        fVar6 = line_start->z;
        if (out_intersection_point != &CStack_1c) {
          out_intersection_point->x = line_start->x + (fVar1 - fVar2) * fVar8;
          out_intersection_point->y = fVar5 + (fVar3 - fVar4) * fVar8;
          out_intersection_point->z = fVar6 + (float)this_ptr * fVar8;
        }
      }
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 00409150: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
// 00409151: PUSH ESI
// 00409152: PUSH EDI
// 00409153: PUSH EBP
// 00409154: MOV EBP,ESP
// 00409156: SUB ESP,0x68
// 00409159: AND ESP,0xfffffff8
// 0040915c: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040915f: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00409162: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00409165: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 00409169: PUSH EAX
// 0040916a: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 0040916f: ADD ESP,0x4
// 00409172: XOR EDX,EDX
// 00409174: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 00409178: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 0040917c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040917f: PUSH EDX
// 00409180: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00409183: MOV EAX,dword ptr [EAX + 0x154]
// 00409189: PUSH ECX
// 0040918a: CALL dword ptr [EAX + 0x34]
// 0040918d: ADD ESP,0x8
// 00409190: CMP EAX,0x2
// 00409193: JZ 0x0040919e
//   XREF to: 0040919e (CONDITIONAL_JUMP)
// 00409195: XOR EAX,EAX
//   Label: LAB_00409195
// 00409197: MOV ESP,EBP
// 00409199: POP EBP
// 0040919a: POP EDI
// 0040919b: POP ESI
// 0040919c: POP EBX
// 0040919d: RET
// 0040919e: FLD float ptr [EDI]
//   Label: LAB_0040919e
// 004091a0: LEA EAX,[ESP + 0x4c]
// 004091a4: FSUB float ptr [EBX]
// 004091a6: PUSH EAX
// 004091a7: FSTP float ptr [ESP + 0x5c]
// 004091ab: LEA EAX,[ESP + 0x5c]
// 004091af: FLD float ptr [EDI + 0x4]
// 004091b2: PUSH EAX
// 004091b3: FSUB float ptr [EBX + 0x4]
// 004091b6: LEA EAX,[ESP + 0x14]
// 004091ba: FSTP float ptr [ESP + 0x64]
// 004091be: PUSH EBX
// 004091bf: FLD float ptr [EDI + 0x8]
// 004091c2: FSUB float ptr [EBX + 0x8]
// 004091c5: PUSH EAX
// 004091c6: FSTP float ptr [ESP + 0x70]
// 004091ca: CALL core_actor.cpp_rayCylinderIntersect_FUN_00408340
//   XREF to: 00408340 (UNCONDITIONAL_CALL)
// 004091cf: MOV dword ptr [ESP + 0x74],EAX
// 004091d3: FLD float ptr [ESP + 0x74]
// 004091d7: ADD ESP,0x10
// 004091da: FLDZ
// 004091dc: FXCH
// 004091de: FST float ptr [ESP + 0x8]
// 004091e2: FSTP double ptr [ESP]
// 004091e5: FCOMP double ptr [ESP]
// 004091e8: FNSTSW AX
// 004091ea: SAHF
// 004091eb: JA 0x00409195
//   XREF to: 00409195 (CONDITIONAL_JUMP)
// 004091ed: FLD1
// 004091ef: FCOMP double ptr [ESP]
// 004091f2: FNSTSW AX
// 004091f4: SAHF
// 004091f5: JC 0x00409195
//   XREF to: 00409195 (CONDITIONAL_JUMP)
// 004091f7: TEST ESI,ESI
// 004091f9: JZ 0x0040925b
//   XREF to: 0040925b (CONDITIONAL_JUMP)
// 004091fb: FLD float ptr [ESP + 0x8]
// 004091ff: FLD float ptr [ESP + 0x58]
// 00409203: FMUL ST1
// 00409205: FLD float ptr [ESP + 0x5c]
// 00409209: FMUL ST2
// 0040920b: FLD float ptr [ESP + 0x60]
// 0040920f: FMULP ST3
// 00409211: FXCH
// 00409213: FSTP float ptr [ESP + 0x34]
// 00409217: FSTP float ptr [ESP + 0x38]
// 0040921b: FSTP float ptr [ESP + 0x3c]
// 0040921f: FLD float ptr [EBX]
// 00409221: FADD float ptr [ESP + 0x34]
// 00409225: FSTP float ptr [ESP + 0x40]
// 00409229: FLD float ptr [EBX + 0x4]
// 0040922c: FADD float ptr [ESP + 0x38]
// 00409230: FSTP float ptr [ESP + 0x44]
// 00409234: FLD float ptr [EBX + 0x8]
// 00409237: FADD float ptr [ESP + 0x3c]
// 0040923b: LEA EAX,[ESP + 0x40]
// 0040923f: FSTP float ptr [ESP + 0x48]
// 00409243: CMP ESI,EAX
// 00409245: JZ 0x0040925b
//   XREF to: 0040925b (CONDITIONAL_JUMP)
// 00409247: MOV EAX,dword ptr [ESP + 0x40]
// 0040924b: MOV dword ptr [ESI],EAX
// 0040924d: MOV EAX,dword ptr [ESP + 0x44]
// 00409251: MOV dword ptr [ESI + 0x4],EAX
// 00409254: MOV EAX,dword ptr [ESP + 0x48]
// 00409258: MOV dword ptr [ESI + 0x8],EAX
// 0040925b: MOV EAX,0x1
//   Label: LAB_0040925b
// 00409260: MOV ESP,EBP
// 00409262: POP EBP
// 00409263: POP EDI
// 00409264: POP ESI
// 00409265: POP EBX
// 00409266: RET
