// Name: core_fire.cpp_FUN_004c1940
// Address: 004c1940
// Address Range: [[004c1940, 004c19f1]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c1940()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7a60 (004c7a60) at 004c7a9f [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_set.cpp_CDemonSet_FUN_0056d110

#include "nocturne.h"

void core_fire_cpp_FUN_004c1940(void)

{
  CDemonSet *this_ptr;
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *in_stack_00000004;
  CColor3f *in_stack_00000008;
  CMatrix3x3f *in_stack_00000018;
  
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(in_stack_00000004 + 7),in_stack_00000008);
  in_stack_00000004[0x16] = 0x8000;
  *(undefined1 *)(in_stack_00000004 + 0xe) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(in_stack_00000004 + 7),8.0);
  this_ptr = g_CDemonSetPtr;
  in_stack_00000004[0xf] = 0;
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr);
  if ((CColor3f *)(in_stack_00000004 + 1) != in_stack_00000008) {
    ((CColor3f *)(in_stack_00000004 + 1))->r = in_stack_00000008->r;
    in_stack_00000004[2] = in_stack_00000008->g;
    in_stack_00000004[3] = in_stack_00000008->b;
  }
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                     (in_stack_00000018,(CVector3f *)&stack0xfffffff4);
  if ((CVector3f *)(in_stack_00000004 + 4) == pCVar1) {
    *in_stack_00000004 = 2;
    return;
  }
  ((CVector3f *)(in_stack_00000004 + 4))->x = pCVar1->x;
  in_stack_00000004[5] = pCVar1->y;
  in_stack_00000004[6] = pCVar1->z;
  *in_stack_00000004 = 2;
  return;
}


// Assembly code:
// 004c1940: PUSH EBX
//   Label: core_fire.cpp_FUN_004c1940
// 004c1941: PUSH ESI
// 004c1942: PUSH EDI
// 004c1943: SUB ESP,0x18
// 004c1946: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004c194a: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004c194e: PUSH ESI
// 004c194f: LEA EBX,[EDI + 0x1c]
// 004c1952: PUSH EBX
// 004c1953: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 004c1958: ADD ESP,0x8
// 004c195b: PUSH 0x41000000
// 004c1960: MOV dword ptr [EBX + 0x3c],0x8000
// 004c1967: PUSH EBX
// 004c1968: MOV byte ptr [EBX + 0x1c],0x20
// 004c196c: CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   XREF to: 00471360 (UNCONDITIONAL_CALL)
// 004c1971: ADD ESP,0x8
// 004c1974: PUSH EBX
// 004c1975: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c197b: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c197c: MOV dword ptr [EBX + 0x20],0x0
// 004c1983: CALL core_set.cpp_CDemonSet_FUN_0056d110
//   XREF to: 0056d110 (UNCONDITIONAL_CALL)
// 004c1988: ADD ESP,0x8
// 004c198b: XOR ECX,ECX
// 004c198d: LEA EAX,[EDI + 0x4]
// 004c1990: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x24] (DATA)
// 004c1993: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004c1997: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004c199b: CMP EAX,ESI
// 004c199d: JZ 0x004c19af
//   XREF to: 004c19af (CONDITIONAL_JUMP)
// 004c199f: MOV EDX,dword ptr [ESI]
// 004c19a1: MOV dword ptr [EAX],EDX
// 004c19a3: MOV EDX,dword ptr [ESI + 0x4]
// 004c19a6: MOV dword ptr [EAX + 0x4],EDX
// 004c19a9: MOV EDX,dword ptr [ESI + 0x8]
// 004c19ac: MOV dword ptr [EAX + 0x8],EDX
// 004c19af: LEA EAX,[ESP + 0xc]
//   Label: LAB_004c19af
//   XREF to: Stack[-0x18] (DATA)
// 004c19b3: PUSH EAX
// 004c19b4: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004c19b8: PUSH EAX
// 004c19b9: LEA EBX,[EDI + 0x10]
// 004c19bc: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 004c19c1: ADD ESP,0x8
// 004c19c4: CMP EBX,EAX
// 004c19c6: JNZ 0x004c19d5
//   XREF to: 004c19d5 (CONDITIONAL_JUMP)
// 004c19c8: MOV dword ptr [EDI],0x2
// 004c19ce: ADD ESP,0x18
// 004c19d1: POP EDI
// 004c19d2: POP ESI
// 004c19d3: POP EBX
// 004c19d4: RET
// 004c19d5: MOV EDX,dword ptr [EAX]
//   Label: LAB_004c19d5
// 004c19d7: MOV dword ptr [EBX],EDX
// 004c19d9: MOV EDX,dword ptr [EAX + 0x4]
// 004c19dc: MOV dword ptr [EBX + 0x4],EDX
// 004c19df: MOV EDX,dword ptr [EAX + 0x8]
// 004c19e2: MOV dword ptr [EBX + 0x8],EDX
// 004c19e5: MOV dword ptr [EDI],0x2
// 004c19eb: ADD ESP,0x18
// 004c19ee: POP EDI
// 004c19ef: POP ESI
// 004c19f0: POP EBX
// 004c19f1: RET
