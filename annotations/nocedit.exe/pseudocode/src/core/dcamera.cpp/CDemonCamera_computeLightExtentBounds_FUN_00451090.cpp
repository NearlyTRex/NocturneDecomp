// Name: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
// Address: 00451090
// Address Range: [[00451090, 00451122]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090(CDemonCamera * this_ptr, CDemonLight * light, CRect * out_bounds)
// Cross-references:
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a8c3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
          (CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)

{
  int iVar1;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  iVar1 = 0;
  local_18 = 0;
  local_14 = 9999;
  local_10 = 0;
  local_1c = 9999;
  if (0 < this_ptr->display_height) {
    do {
      if ((uint)light->left_extent[0] <= (uint)light->right_extent[0]) {
        if (iVar1 < local_14) {
          local_14 = iVar1;
        }
        if (local_10 < iVar1) {
          local_10 = iVar1;
        }
        if ((uint)light->left_extent[0] < local_1c) {
          local_1c = light->left_extent[0];
        }
        if (local_18 < (uint)light->right_extent[0]) {
          local_18 = light->right_extent[0];
        }
      }
      iVar1 = iVar1 + 1;
      light = (CDemonLight *)&(light->base).base.position;
    } while (iVar1 < this_ptr->display_height);
  }
  out_bounds->left = local_1c;
  out_bounds->top = local_18;
  out_bounds->right = local_14;
  out_bounds->bottom = local_10;
  return;
}


// Assembly code:
// 00451090: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
// 00451091: PUSH EDI
// 00451092: PUSH EBP
// 00451093: SUB ESP,0x10
// 00451096: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0045109a: MOV EBP,ESI
// 0045109c: MOV EDX,0x270f
// 004510a1: XOR ECX,ECX
// 004510a3: MOV EAX,dword ptr [EBX + 0x154]
// 004510a9: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004510ad: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004510b1: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 004510b5: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 004510b8: TEST EAX,EAX
// 004510ba: JLE 0x00451112
//   XREF to: 00451112 (CONDITIONAL_JUMP)
// 004510bc: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004510c0: MOV EDI,dword ptr [EDX + 0x1888]
//   Label: LAB_004510c0
// 004510c6: CMP EDI,dword ptr [EDX + 0x14c8]
// 004510cc: JC 0x00451104
//   XREF to: 00451104 (CONDITIONAL_JUMP)
// 004510ce: CMP ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004510d2: JGE 0x004510d8
//   XREF to: 004510d8 (CONDITIONAL_JUMP)
// 004510d4: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004510d8: CMP ECX,dword ptr [ESP + 0xc]
//   Label: LAB_004510d8
//   XREF to: Stack[-0x10] (READ)
// 004510dc: JLE 0x004510e2
//   XREF to: 004510e2 (CONDITIONAL_JUMP)
// 004510de: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 004510e2: MOV EDI,dword ptr [ESP]
//   Label: LAB_004510e2
//   XREF to: Stack[-0x1c] (DATA)
// 004510e5: MOV EAX,dword ptr [EDX + 0x14c8]
// 004510eb: CMP EAX,EDI
// 004510ed: JNC 0x004510f2
//   XREF to: 004510f2 (CONDITIONAL_JUMP)
// 004510ef: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 004510f2: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_004510f2
//   XREF to: Stack[-0x18] (READ)
// 004510f6: MOV EAX,dword ptr [EDX + 0x1888]
// 004510fc: CMP EAX,ESI
// 004510fe: JBE 0x00451104
//   XREF to: 00451104 (CONDITIONAL_JUMP)
// 00451100: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00451104: INC ECX
//   Label: LAB_00451104
// 00451105: MOV ESI,dword ptr [EBX + 0x154]
// 0045110b: ADD EDX,0x4
// 0045110e: CMP ECX,ESI
// 00451110: JL 0x004510c0
//   XREF to: 004510c0 (CONDITIONAL_JUMP)
// 00451112: MOV ESI,ESP
//   Label: LAB_00451112
// 00451114: MOV EDI,EBP
// 00451116: MOVSD ES:EDI,ESI
// 00451117: MOVSD ES:EDI,ESI
// 00451118: MOVSD ES:EDI,ESI
// 00451119: MOVSD ES:EDI,ESI
// 0045111a: MOV EAX,EBP
// 0045111c: ADD ESP,0x10
// 0045111f: POP EBP
// 00451120: POP EDI
// 00451121: POP EBX
// 00451122: RET
