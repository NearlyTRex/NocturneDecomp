// Name: shape_meshlod.cpp_CLodMesh_FUN_005164d0
// Address: 005164d0
// Address Range: [[005164d0, 005164ff]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_FUN_005164d0(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516ba0 (00516ba0) at 00516bc7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051d9c8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b96a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051c100 (0051c100) at 0051c12b [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d6ab [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_FUN_005164d0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  SLodTriangle *pSVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < this_ptr->tri_count) {
    pSVar3 = this_ptr->triangle_data;
    do {
      if (pSVar3->processed_flag == 0) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = iVar1 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar1 < this_ptr->tri_count);
  }
  return iVar2;
}


// Assembly code:
// 005164d0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_005164d0
// 005164d1: PUSH ESI
// 005164d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005164d6: MOV EDX,dword ptr [EBX + 0x8]
// 005164d9: XOR EAX,EAX
// 005164db: XOR ECX,ECX
// 005164dd: TEST EDX,EDX
// 005164df: JLE 0x005164f8
//   XREF to: 005164f8 (CONDITIONAL_JUMP)
// 005164e1: MOV EDX,dword ptr [EBX + 0xc]
// 005164e4: CMP dword ptr [EDX + 0x40],0x0
//   Label: LAB_005164e4
// 005164e8: JZ 0x005164fd
//   XREF to: 005164fd (CONDITIONAL_JUMP)
// 005164ea: INC EAX
//   Label: LAB_005164ea
// 005164eb: MOV ESI,dword ptr [EBX + 0x8]
// 005164ee: ADD EDX,0x8c
// 005164f4: CMP EAX,ESI
// 005164f6: JL 0x005164e4
//   XREF to: 005164e4 (CONDITIONAL_JUMP)
// 005164f8: MOV EAX,ECX
//   Label: LAB_005164f8
// 005164fa: POP ESI
// 005164fb: POP EBX
// 005164fc: RET
// 005164fd: INC ECX
//   Label: LAB_005164fd
// 005164fe: JMP 0x005164ea
//   XREF to: 005164ea (UNCONDITIONAL_JUMP)
