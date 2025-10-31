// Name: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
// Address: 004578f0
// Address Range: [[004578f0, 00457a8b]]
// Convention: __cdecl
// Signature: float core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, uint * hit_material)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0 (004966f0) at 0049681a [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220 (00496220) at 00496657 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 (00495b70) at 0049611a [UNCONDITIONAL_CALL]
// Globals:
//   CVector3f g_TempNormal0
//   undefined4 g_TempNormal0.y
//   undefined4 g_TempNormal0.z
//   CVector3f g_TempNormal1
//   undefined4 g_TempNormal1.y
//   undefined4 g_TempNormal1.z
//   CVector3f g_TempNormal2
//   undefined4 g_TempNormal2.y
//   undefined4 g_TempNormal2.z
// Function calls:
//   core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460

#include "nocturne.h"

float __cdecl
core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
          (CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal
          ,uint *hit_material)

{
  float fVar1;
  float fVar2;
  CDemonCubeTriangle *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  CVector3f local_2c;
  int local_20;
  float local_1c;
  float local_18;
  
  iVar5 = 0;
  local_20 = -1;
  local_1c = 1.0001;
  if (0 < this_ptr->triangle_count) {
    iVar6 = 0;
    do {
      local_18 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                           ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar6)
                            ,ray_origin,ray_direction);
      if (((0.0 <= local_18) && (local_18 < local_1c)) && (local_18 <= 1.0)) {
        local_20 = iVar5;
        local_1c = local_18;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar5 < this_ptr->triangle_count);
  }
  if (-1 < local_20) {
    pCVar3 = this_ptr->triangle_buffer;
    fVar1 = pCVar3[local_20].normal.y;
    fVar2 = pCVar3[local_20].normal.z;
    if (&local_2c != hit_normal) {
      hit_normal->x = -pCVar3[local_20].normal.x;
      hit_normal->y = -fVar1;
      hit_normal->z = -fVar2;
    }
    *hit_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + local_20);
    pCVar4 = this_ptr->triangle_buffer[local_20].vertices[0];
    if (pCVar4 != &g_TempNormal0) {
      g_TempNormal0.x = pCVar4->x;
      g_TempNormal0.z = pCVar4->z;
      g_TempNormal0.y = pCVar4->y;
    }
    pCVar4 = this_ptr->triangle_buffer[local_20].vertices[1];
    if (pCVar4 != &g_TempNormal1) {
      g_TempNormal1.x = pCVar4->x;
      g_TempNormal1.z = pCVar4->z;
      g_TempNormal1.y = pCVar4->y;
    }
    pCVar4 = this_ptr->triangle_buffer[local_20].vertices[2];
    if (pCVar4 != &g_TempNormal2) {
      g_TempNormal2.y = pCVar4->y;
      g_TempNormal2.z = pCVar4->z;
      g_TempNormal2.x = pCVar4->x;
      return local_1c;
    }
  }
  return local_1c;
}


// Assembly code:
// 004578f0: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
// 004578f1: PUSH ESI
// 004578f2: PUSH EDI
// 004578f3: PUSH EBP
// 004578f4: MOV EBP,ESP
// 004578f6: SUB ESP,0x24
// 004578f9: AND ESP,0xfffffff8
// 004578fc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004578ff: MOV ECX,0xffffffff
// 00457904: MOV EDX,0x3f800347
// 00457909: MOV ESI,dword ptr [EDI + 0x28]
// 0045790c: XOR EBX,EBX
// 0045790e: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00457912: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00457916: TEST ESI,ESI
// 00457918: JLE 0x0045797b
//   XREF to: 0045797b (CONDITIONAL_JUMP)
// 0045791a: XOR ESI,ESI
// 0045791c: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0045791c
//   XREF to: Stack[0xc] (READ)
// 0045791f: PUSH EAX
// 00457920: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00457923: MOV EAX,dword ptr [EDI + 0x2c]
// 00457926: PUSH EDX
// 00457927: ADD EAX,ESI
// 00457929: PUSH EAX
// 0045792a: CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
//   XREF to: 00455460 (UNCONDITIONAL_CALL)
// 0045792f: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00457933: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x18] (READ)
// 00457937: ADD ESP,0xc
// 0045793a: FLDZ
// 0045793c: FXCH
// 0045793e: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 00457942: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00457945: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00457948: FNSTSW AX
// 0045794a: SAHF
// 0045794b: JA 0x00457970
//   XREF to: 00457970 (CONDITIONAL_JUMP)
// 0045794d: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00457951: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00457955: FNSTSW AX
// 00457957: SAHF
// 00457958: JNC 0x00457970
//   XREF to: 00457970 (CONDITIONAL_JUMP)
// 0045795a: FLD1
// 0045795c: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0045795f: FNSTSW AX
// 00457961: SAHF
// 00457962: JC 0x00457970
//   XREF to: 00457970 (CONDITIONAL_JUMP)
// 00457964: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00457968: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0045796c: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00457970: INC EBX
//   Label: LAB_00457970
// 00457971: MOV EAX,dword ptr [EDI + 0x28]
// 00457974: ADD ESI,0x20
// 00457977: CMP EBX,EAX
// 00457979: JL 0x0045791c
//   XREF to: 0045791c (CONDITIONAL_JUMP)
// 0045797b: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_0045797b
//   XREF to: Stack[-0x20] (READ)
// 0045797f: TEST EDX,EDX
// 00457981: JL 0x00457a43
//   XREF to: 00457a43 (CONDITIONAL_JUMP)
// 00457987: MOV EAX,EDX
// 00457989: MOV EBX,dword ptr [EDI + 0x2c]
// 0045798c: SHL EAX,0x5
// 0045798f: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00457992: FLD float ptr [EBX + EAX*0x1 + 0xc]
// 00457996: FCHS
// 00457998: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 0045799c: FLD float ptr [EBX + EAX*0x1 + 0x10]
// 004579a0: FCHS
// 004579a2: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 004579a6: FLD float ptr [EBX + EAX*0x1 + 0x14]
// 004579aa: FCHS
// 004579ac: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 004579b0: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 004579b4: CMP EAX,ECX
// 004579b6: JNZ 0x00457a4e
//   XREF to: 00457a4e (CONDITIONAL_JUMP)
// 004579bc: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_004579bc
//   XREF to: Stack[-0x20] (READ)
// 004579c0: MOV EAX,dword ptr [EDI + 0x30]
// 004579c3: ADD EAX,EBX
// 004579c5: MOV AL,byte ptr [EAX]
// 004579c7: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004579ca: AND EAX,0xff
// 004579cf: MOV dword ptr [EBX],EAX
// 004579d1: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004579d5: MOV EBX,dword ptr [EDI + 0x2c]
// 004579d8: SHL EAX,0x5
// 004579db: MOV EAX,dword ptr [EBX + EAX*0x1]
// 004579de: CMP EAX,0x15c4800
//   XREF to: 015c4800 (DATA)
// 004579e3: JZ 0x004579ff
//   XREF to: 004579ff (CONDITIONAL_JUMP)
// 004579e5: FLD float ptr [EAX]
// 004579e7: FLD float ptr [EAX + 0x8]
// 004579ea: MOV EDX,dword ptr [EAX + 0x4]
// 004579ed: MOV dword ptr [0x015c4804],EDX
//   XREF to: 015c4804 (WRITE)
// 004579f3: FSTP float ptr [0x015c4808]
//   XREF to: 015c4808 (WRITE)
// 004579f9: FSTP float ptr [0x015c4800]
//   XREF to: 015c4800 (WRITE)
// 004579ff: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004579ff
//   XREF to: Stack[-0x20] (READ)
// 00457a03: MOV EBX,dword ptr [EDI + 0x2c]
// 00457a06: SHL EAX,0x5
// 00457a09: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 00457a0d: CMP EAX,0x15c480c
//   XREF to: 015c480c (DATA)
// 00457a12: JZ 0x00457a2e
//   XREF to: 00457a2e (CONDITIONAL_JUMP)
// 00457a14: FLD float ptr [EAX]
// 00457a16: FLD float ptr [EAX + 0x8]
// 00457a19: MOV EDX,dword ptr [EAX + 0x4]
// 00457a1c: MOV dword ptr [0x015c4810],EDX
//   XREF to: 015c4810 (WRITE)
// 00457a22: FSTP float ptr [0x015c4814]
//   XREF to: 015c4814 (WRITE)
// 00457a28: FSTP float ptr [0x015c480c]
//   XREF to: 015c480c (WRITE)
// 00457a2e: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00457a2e
//   XREF to: Stack[-0x20] (READ)
// 00457a32: MOV EBX,dword ptr [EDI + 0x2c]
// 00457a35: SHL EAX,0x5
// 00457a38: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8]
// 00457a3c: CMP EAX,0x15c4818
//   XREF to: 015c4818 (DATA)
// 00457a41: JNZ 0x00457a67
//   XREF to: 00457a67 (CONDITIONAL_JUMP)
// 00457a43: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00457a43
//   XREF to: Stack[-0x1c] (READ)
// 00457a47: MOV ESP,EBP
// 00457a49: POP EBP
// 00457a4a: POP EDI
// 00457a4b: POP ESI
// 00457a4c: POP EBX
// 00457a4d: RET
// 00457a4e: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00457a4e
//   XREF to: Stack[-0x2c] (DATA)
// 00457a52: MOV dword ptr [ECX],EAX
// 00457a54: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00457a58: MOV dword ptr [ECX + 0x4],EAX
// 00457a5b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00457a5f: MOV dword ptr [ECX + 0x8],EAX
// 00457a62: JMP 0x004579bc
//   XREF to: 004579bc (UNCONDITIONAL_JUMP)
// 00457a67: FLD float ptr [EAX]
//   Label: LAB_00457a67
// 00457a69: FLD float ptr [EAX + 0x8]
// 00457a6c: MOV EDX,dword ptr [EAX + 0x4]
// 00457a6f: MOV dword ptr [0x015c481c],EDX
//   XREF to: 015c481c (WRITE)
// 00457a75: FSTP float ptr [0x015c4820]
//   XREF to: 015c4820 (WRITE)
// 00457a7b: FSTP float ptr [0x015c4818]
//   XREF to: 015c4818 (WRITE)
// 00457a81: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00457a85: MOV ESP,EBP
// 00457a87: POP EBP
// 00457a88: POP EDI
// 00457a89: POP ESI
// 00457a8a: POP EBX
// 00457a8b: RET
