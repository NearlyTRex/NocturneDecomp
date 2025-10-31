// Name: core_actor.cpp_CDemonActor_FUN_00409270
// Address: 00409270
// Address Range: [[00409270, 004093ee]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_actor.cpp_CDemonActor_FUN_00409270(CDemonActor * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 004094b3 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 005719c5 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573776 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_FUN_00409270(CDemonActor *this_ptr)

{
  CBoundingBox3D *pCVar1;
  CVector3f *point;
  uint corner_index;
  BADSPACEBASE *in_ESP;
  CBoundingBox3D *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  float fStack_50;
  CVector3f aCStack_28 [2];
  
  if (in_stack_00000010 < 2) {
    if (in_stack_00000010 != 1) {
LAB_004093bd:
      (in_stack_00000008->min).z = 1e+08;
      (in_stack_00000008->min).y = (in_stack_00000008->min).z;
      (in_stack_00000008->min).x = (in_stack_00000008->min).y;
      if ((CBoundingBox3D *)&in_stack_00000008->max == in_stack_00000008) {
        return in_stack_00000008;
      }
      (in_stack_00000008->max).x = (in_stack_00000008->min).x;
      (in_stack_00000008->max).y = (in_stack_00000008->min).y;
      (in_stack_00000008->max).z = (in_stack_00000008->min).z;
      return in_stack_00000008;
    }
  }
  else {
    if (in_stack_00000010 < 3) {
      (in_stack_00000008->min).x =
           (this_ptr->location).position.x - *(float *)(in_stack_0000000c + 0x1c);
      (in_stack_00000008->min).y =
           (this_ptr->location).position.y + *(float *)(in_stack_0000000c + 0x14);
      (in_stack_00000008->min).z =
           (this_ptr->location).position.z - *(float *)(in_stack_0000000c + 0x1c);
      (in_stack_00000008->max).x =
           (this_ptr->location).position.x + *(float *)(in_stack_0000000c + 0x1c);
      (in_stack_00000008->max).y =
           (this_ptr->location).position.y + *(float *)(in_stack_0000000c + 0x18);
      (in_stack_00000008->max).z =
           (this_ptr->location).position.z + *(float *)(in_stack_0000000c + 0x1c);
      return in_stack_00000008;
    }
    if (in_stack_00000010 != 3) goto LAB_004093bd;
  }
  (*((this_ptr->metadata).vtable)->getBoundingBox)(this_ptr,(CBoundingBox3D *)&stack0xffffffac);
  fStack_50 = 5.930106e-39;
  core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
            ((CBoundingBox3D *)&stack0xffffffc0,aCStack_28,0);
  pCVar1 = (CBoundingBox3D *)core_actor_cpp_CDemonActor_FUN_00408e80(this_ptr);
  if (in_stack_00000008 != pCVar1) {
    (in_stack_00000008->min).x = (pCVar1->min).x;
    (in_stack_00000008->min).y = (pCVar1->min).y;
    (in_stack_00000008->min).z = (pCVar1->min).z;
  }
  if ((CBoundingBox3D *)&in_stack_00000008->max != pCVar1) {
    (in_stack_00000008->max).x = (pCVar1->min).x;
    (in_stack_00000008->max).y = (pCVar1->min).y;
    (in_stack_00000008->max).z = (pCVar1->min).z;
  }
  corner_index = 1;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
              ((CBoundingBox3D *)&stack0xffffffc8,(CVector3f *)&aCStack_28[1].z,corner_index);
    point = core_actor_cpp_CDemonActor_FUN_00408e80(this_ptr);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(in_stack_00000008,point);
  } while ((int)corner_index < 8);
  (in_stack_00000008->min).x = (this_ptr->location).position.x + (in_stack_00000008->min).x;
  (in_stack_00000008->min).y = (this_ptr->location).position.y + (in_stack_00000008->min).y;
  (in_stack_00000008->min).z = (this_ptr->location).position.z + (in_stack_00000008->min).z;
  (in_stack_00000008->max).x = (this_ptr->location).position.x + (in_stack_00000008->max).x;
  (in_stack_00000008->max).y = (this_ptr->location).position.y + (in_stack_00000008->max).y;
  (in_stack_00000008->max).z = (this_ptr->location).position.z + (in_stack_00000008->max).z;
  return in_stack_00000008;
}


// Assembly code:
// 00409270: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_FUN_00409270
// 00409271: PUSH ESI
// 00409272: PUSH EDI
// 00409273: SUB ESP,0x48
// 00409276: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0040927a: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0040927e: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 00409282: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x10] (READ)
// 00409286: CMP EBX,0x2
// 00409289: JNC 0x004093b2
//   XREF to: 004093b2 (CONDITIONAL_JUMP)
// 0040928f: CMP EBX,0x1
// 00409292: JNZ 0x004093bd
//   XREF to: 004093bd (CONDITIONAL_JUMP)
// 00409298: MOV EBX,ESP
//   Label: LAB_00409298
// 0040929a: PUSH EBX
// 0040929b: MOV EAX,dword ptr [EDI + 0x154]
// 004092a1: PUSH EDI
// 004092a2: CALL dword ptr [EAX + 0x14]
// 004092a5: ADD ESP,0x8
// 004092a8: PUSH 0x0
// 004092aa: LEA EAX,[ESP + 0x1c]
// 004092ae: PUSH EAX
// 004092af: LEA EAX,[ESP + 0x8]
// 004092b3: PUSH EAX
// 004092b4: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 004092b9: ADD ESP,0xc
// 004092bc: PUSH EAX
// 004092bd: LEA EAX,[ESP + 0x40]
// 004092c1: PUSH EAX
// 004092c2: PUSH EDI
// 004092c3: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004092c8: ADD ESP,0xc
// 004092cb: MOV EDX,ESI
// 004092cd: MOV EBX,EAX
// 004092cf: CMP ESI,EAX
// 004092d1: JZ 0x004092e3
//   XREF to: 004092e3 (CONDITIONAL_JUMP)
// 004092d3: MOV ECX,dword ptr [EAX]
// 004092d5: MOV dword ptr [ESI],ECX
// 004092d7: MOV ECX,dword ptr [EAX + 0x4]
// 004092da: MOV dword ptr [ESI + 0x4],ECX
// 004092dd: MOV ECX,dword ptr [EAX + 0x8]
// 004092e0: MOV dword ptr [ESI + 0x8],ECX
// 004092e3: LEA EAX,[EDX + 0xc]
//   Label: LAB_004092e3
// 004092e6: CMP EAX,EBX
// 004092e8: JNZ 0x0040935f
//   XREF to: 0040935f (CONDITIONAL_JUMP)
// 004092ea: MOV EBX,0x1
//   Label: LAB_004092ea
// 004092ef: PUSH EBX
//   Label: LAB_004092ef
// 004092f0: LEA EAX,[ESP + 0x28]
// 004092f4: PUSH EAX
// 004092f5: LEA EAX,[ESP + 0x8]
// 004092f9: PUSH EAX
// 004092fa: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 004092ff: ADD ESP,0xc
// 00409302: PUSH EAX
// 00409303: LEA EAX,[ESP + 0x34]
// 00409307: PUSH EAX
// 00409308: PUSH EDI
// 00409309: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0040930e: ADD ESP,0xc
// 00409311: PUSH EAX
// 00409312: PUSH ESI
// 00409313: INC EBX
// 00409314: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00409319: ADD ESP,0x8
// 0040931c: CMP EBX,0x8
// 0040931f: JL 0x004092ef
//   XREF to: 004092ef (CONDITIONAL_JUMP)
// 00409321: FLD float ptr [EDI + 0x20]
// 00409324: FADD float ptr [ESI]
// 00409326: FSTP float ptr [ESI]
// 00409328: FLD float ptr [EDI + 0x24]
// 0040932b: FADD float ptr [ESI + 0x4]
// 0040932e: FSTP float ptr [ESI + 0x4]
// 00409331: FLD float ptr [EDI + 0x28]
// 00409334: FADD float ptr [ESI + 0x8]
// 00409337: LEA EAX,[ESI + 0xc]
// 0040933a: FSTP float ptr [ESI + 0x8]
// 0040933d: FLD float ptr [EDI + 0x20]
// 00409340: FADD float ptr [EAX]
// 00409342: FSTP float ptr [EAX]
// 00409344: FLD float ptr [EDI + 0x24]
// 00409347: FADD float ptr [EAX + 0x4]
// 0040934a: FSTP float ptr [EAX + 0x4]
// 0040934d: FLD float ptr [EDI + 0x28]
// 00409350: FADD float ptr [EAX + 0x8]
// 00409353: FSTP float ptr [EAX + 0x8]
// 00409356: MOV EAX,ESI
//   Label: LAB_00409356
// 00409358: ADD ESP,0x48
// 0040935b: POP EDI
// 0040935c: POP ESI
// 0040935d: POP EBX
// 0040935e: RET
// 0040935f: MOV EDX,dword ptr [EBX]
//   Label: LAB_0040935f
// 00409361: MOV dword ptr [EAX],EDX
// 00409363: MOV EDX,dword ptr [EBX + 0x4]
// 00409366: MOV dword ptr [EAX + 0x4],EDX
// 00409369: MOV EDX,dword ptr [EBX + 0x8]
// 0040936c: MOV dword ptr [EAX + 0x8],EDX
// 0040936f: JMP 0x004092ea
//   XREF to: 004092ea (UNCONDITIONAL_JUMP)
// 00409374: FLD float ptr [EDI + 0x20]
//   Label: LAB_00409374
// 00409377: FSUB float ptr [EAX + 0x1c]
// 0040937a: FSTP float ptr [ESI]
// 0040937c: FLD float ptr [EDI + 0x24]
// 0040937f: FADD float ptr [EAX + 0x14]
// 00409382: FSTP float ptr [ESI + 0x4]
// 00409385: FLD float ptr [EDI + 0x28]
// 00409388: FSUB float ptr [EAX + 0x1c]
// 0040938b: FSTP float ptr [ESI + 0x8]
// 0040938e: FLD float ptr [EDI + 0x20]
// 00409391: FADD float ptr [EAX + 0x1c]
// 00409394: FSTP float ptr [ESI + 0xc]
// 00409397: FLD float ptr [EDI + 0x24]
// 0040939a: FADD float ptr [EAX + 0x18]
// 0040939d: FSTP float ptr [ESI + 0x10]
// 004093a0: FLD float ptr [EDI + 0x28]
// 004093a3: FADD float ptr [EAX + 0x1c]
// 004093a6: FSTP float ptr [ESI + 0x14]
// 004093a9: MOV EAX,ESI
// 004093ab: ADD ESP,0x48
// 004093ae: POP EDI
// 004093af: POP ESI
// 004093b0: POP EBX
// 004093b1: RET
// 004093b2: JBE 0x00409374
//   Label: LAB_004093b2
//   XREF to: 00409374 (CONDITIONAL_JUMP)
// 004093b4: CMP EBX,0x3
// 004093b7: JZ 0x00409298
//   XREF to: 00409298 (CONDITIONAL_JUMP)
// 004093bd: MOV dword ptr [ESI + 0x8],0x4cbebc20
//   Label: LAB_004093bd
// 004093c4: LEA EAX,[ESI + 0xc]
// 004093c7: MOV EDX,dword ptr [ESI + 0x8]
// 004093ca: MOV dword ptr [ESI + 0x4],EDX
// 004093cd: MOV EDX,dword ptr [ESI + 0x4]
// 004093d0: MOV dword ptr [ESI],EDX
// 004093d2: CMP EAX,ESI
// 004093d4: JZ 0x00409356
//   XREF to: 00409356 (CONDITIONAL_JUMP)
// 004093d6: MOV EDX,dword ptr [ESI]
// 004093d8: MOV dword ptr [EAX],EDX
// 004093da: MOV EDX,dword ptr [ESI + 0x4]
// 004093dd: MOV dword ptr [EAX + 0x4],EDX
// 004093e0: MOV EDX,dword ptr [ESI + 0x8]
// 004093e3: MOV dword ptr [EAX + 0x8],EDX
// 004093e6: MOV EAX,ESI
// 004093e8: ADD ESP,0x48
// 004093eb: POP EDI
// 004093ec: POP ESI
// 004093ed: POP EBX
// 004093ee: RET
