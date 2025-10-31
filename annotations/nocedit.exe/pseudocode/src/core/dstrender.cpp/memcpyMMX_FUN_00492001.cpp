// Name: core_dstrender.cpp_memcpyMMX_FUN_00492001
// Address: 00492001
// Address Range: [[00492001, 00492041]]
// Convention: __cdecl
// Signature: void * core_dstrender.cpp_memcpyMMX_FUN_00492001(void * dest, void * src, int byte_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 (0044cdf0) at 0044cee2 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 (0044c860) at 0044ca67 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780 (0044c780) at 0044c820 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70 (00472c70) at 00472cef [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 (00472f80) at 0047315c [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * __cdecl core_dstrender_cpp_memcpyMMX_FUN_00492001(void *dest,void *src,int byte_count)

{
  bool bVar1;
  void *in_EAX;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  iVar3 = byte_count;
  do {
    iVar2 = iVar3 + -0x20;
    bVar1 = 0x1f < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  puVar4 = (undefined8 *)((uint)src & 0xfffffff8);
  puVar5 = (undefined8 *)((uint)dest & 0xfffffff8);
  iVar3 = ((uint)byte_count >> 3) + 1;
  do {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  return in_EAX;
}


// Assembly code:
// 00492001: PUSH EBP
//   Label: core_dstrender.cpp_memcpyMMX_FUN_00492001
// 00492002: MOV EBP,ESP
// 00492004: PUSH ESI
// 00492005: PUSH EDI
// 00492006: PUSH EAX
// 00492007: PUSH ECX
// 00492008: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049200b: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0049200e: MOV AL,byte ptr [ESI]
//   Label: LAB_0049200e
// 00492010: ADD ESI,0x20
// 00492013: SUB ECX,0x20
// 00492016: JG 0x0049200e
//   XREF to: 0049200e (CONDITIONAL_JUMP)
// 00492018: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049201b: AND ESI,0xfffffff8
// 0049201e: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00492021: AND EDI,0xfffffff8
// 00492024: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00492027: SHR ECX,0x3
// 0049202a: INC ECX
// 0049202b: MOVQ MM0,qword ptr [ESI]
//   Label: LAB_0049202b
// 0049202e: MOVQ qword ptr [EDI],MM0
// 00492031: ADD ESI,0x8
// 00492034: ADD EDI,0x8
// 00492037: DEC ECX
// 00492038: JGE 0x0049202b
//   XREF to: 0049202b (CONDITIONAL_JUMP)
// 0049203a: POP ECX
// 0049203b: POP EAX
// 0049203c: EMMS
// 0049203e: POP EDI
// 0049203f: POP ESI
// 00492040: LEAVE
// 00492041: RET
