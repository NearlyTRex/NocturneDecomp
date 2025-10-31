// Name: core_dcamera.cpp_testCoronaVisibility_FUN_00451250
// Address: 00451250
// Address Range: [[00451250, 0045133b]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_testCoronaVisibility_FUN_00451250(int start_x, int start_y, int depth_reciprocal)
// Globals:
//   int[76800] g_PrecomputedDepthBuffer
//   int g_CoronaVisibilityEnabled
//   int g_CoronaTargetX
//   int g_CoronaTargetY
//   int g_CoronaTargetDepth

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_testCoronaVisibility_FUN_00451250(int start_x,int start_y,int depth_reciprocal)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  
  if (g_CoronaVisibilityEnabled == 0) {
    local_18 = 1;
  }
  else {
    if (depth_reciprocal == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = (int)(0x7fffffff / (longlong)depth_reciprocal);
    }
    iVar4 = g_CoronaTargetDepth - iVar1;
    iVar5 = iVar4 >> 0x1f;
    iVar6 = start_y << 8;
    iVar3 = start_x << 8;
    iVar2 = 0x10;
    do {
      if (g_PrecomputedDepthBuffer[(iVar6 >> 8) * 0x140 + (iVar3 >> 8)] < iVar1 + -0x80) break;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + ((int)((iVar4 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4);
      iVar3 = iVar3 + (g_CoronaTargetX - start_x) * 0x10;
      iVar6 = iVar6 + (g_CoronaTargetY - start_y) * 0x10;
    } while (0 < iVar2);
    local_18 = (uint)(iVar2 == 0);
  }
  return local_18;
}


// Assembly code:
// 00451250: PUSH ESI
//   Label: core_dcamera.cpp_testCoronaVisibility_FUN_00451250
// 00451251: PUSH EBP
// 00451252: SUB ESP,0x10
// 00451255: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00451259: CMP dword ptr [0x015c4174],0x0
//   XREF to: 015c4174 (READ)
// 00451260: JZ 0x00451316
//   XREF to: 00451316 (CONDITIONAL_JUMP)
// 00451266: PUSH EDI
// 00451267: PUSH EBX
// 00451268: MOV EDI,dword ptr [0x015c4178]
//   XREF to: 015c4178 (READ)
// 0045126e: XOR ECX,ECX
// 00451270: MOV EBX,dword ptr [0x015c4180]
//   XREF to: 015c4180 (READ)
// 00451276: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0045127a: MOV ECX,dword ptr [0x015c417c]
//   XREF to: 015c417c (READ)
// 00451280: TEST ESI,ESI
// 00451282: JZ 0x0045131d
//   XREF to: 0045131d (CONDITIONAL_JUMP)
// 00451288: MOV EAX,0x7fffffff
// 0045128d: MOV EDX,EAX
// 0045128f: SAR EDX,0x1f
// 00451292: IDIV ESI
// 00451294: MOV ESI,EAX
// 00451296: MOV EBP,dword ptr [ESP + 0x24]
//   Label: LAB_00451296
//   XREF to: Stack[0x4] (READ)
// 0045129a: MOV EAX,EDI
// 0045129c: SUB EAX,EBP
// 0045129e: SHL EAX,0x4
// 004512a1: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004512a5: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004512a9: SUB ECX,EAX
// 004512ab: MOV EAX,ECX
// 004512ad: MOV EDX,EBX
// 004512af: SHL EAX,0x4
// 004512b2: SUB EDX,ESI
// 004512b4: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004512b8: MOV EAX,EDX
// 004512ba: SAR EDX,0x1f
// 004512bd: SHL EDX,0x4
// 004512c0: SBB EAX,EDX
// 004512c2: SAR EAX,0x4
// 004512c5: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004512c9: MOV ECX,EBP
// 004512cb: SHL EBX,0x8
// 004512ce: SHL ECX,0x8
// 004512d1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004512d5: MOV EDX,ESI
// 004512d7: MOV EAX,0x10
// 004512dc: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 004512e0: MOV EDI,EBX
//   Label: LAB_004512e0
// 004512e2: SAR EDI,0x8
// 004512e5: IMUL EDI,EDI,0x500
// 004512eb: MOV ESI,ECX
// 004512ed: SAR ESI,0x8
// 004512f0: MOV ESI,dword ptr [EDI + ESI*0x4 + 0xbce6f8]
//   XREF to: 00bce6f8 (DATA)
// 004512f7: LEA EDI,[EDX + -0x80]
// 004512fa: CMP ESI,EDI
// 004512fc: JGE 0x00451327
//   XREF to: 00451327 (CONDITIONAL_JUMP)
// 004512fe: TEST EAX,EAX
//   Label: LAB_004512fe
// 00451300: JNZ 0x0045130a
//   XREF to: 0045130a (CONDITIONAL_JUMP)
// 00451302: MOV dword ptr [ESP + 0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0045130a: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0045130a
//   XREF to: Stack[-0x18] (READ)
// 0045130e: POP EBX
// 0045130f: POP EDI
// 00451310: ADD ESP,0x10
//   Label: LAB_00451310
// 00451313: POP EBP
// 00451314: POP ESI
// 00451315: RET
// 00451316: MOV EAX,0x1
//   Label: LAB_00451316
// 0045131b: JMP 0x00451310
//   XREF to: 00451310 (UNCONDITIONAL_JUMP)
// 0045131d: MOV ESI,0x7fffffff
//   Label: LAB_0045131d
// 00451322: JMP 0x00451296
//   XREF to: 00451296 (UNCONDITIONAL_JUMP)
// 00451327: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_00451327
//   XREF to: Stack[-0xc] (READ)
// 0045132b: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0045132f: DEC EAX
// 00451330: ADD EDX,EBP
// 00451332: ADD ECX,ESI
// 00451334: ADD EBX,EDI
// 00451336: TEST EAX,EAX
// 00451338: JG 0x004512e0
//   XREF to: 004512e0 (CONDITIONAL_JUMP)
// 0045133a: JMP 0x004512fe
//   XREF to: 004512fe (UNCONDITIONAL_JUMP)
