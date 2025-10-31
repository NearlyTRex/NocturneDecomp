// Name: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
// Address: 004efb70
// Address Range: [[004efb70, 004efc80]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround * this_ptr)
// Cross-references:
//   core_ground.cpp_CGround_render_FUN_004efc90 (004efc90) at 004efcf1 [UNCONDITIONAL_CALL]
// Function calls:
//   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = -this_ptr->grid_width;
  if (-this_ptr->grid_width < this_ptr->visible_min_x) {
    iVar1 = this_ptr->visible_min_x;
  }
  local_1c = this_ptr->grid_width;
  if (this_ptr->visible_max_x < this_ptr->grid_width) {
    local_1c = this_ptr->visible_max_x;
  }
  iVar4 = -this_ptr->grid_height;
  if (-this_ptr->grid_height < this_ptr->visible_min_y) {
    iVar4 = this_ptr->visible_min_y;
  }
  local_20 = this_ptr->grid_height;
  if (this_ptr->visible_max_y < this_ptr->grid_height) {
    local_20 = this_ptr->visible_max_y;
  }
  for (; iVar2 = iVar1, iVar4 < 0; iVar4 = iVar4 + 1) {
    for (; iVar3 = local_1c, iVar2 < 0; iVar2 = iVar2 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar2,this_ptr->camera_y + iVar4);
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar3,this_ptr->camera_y + iVar4);
    }
  }
  while (local_20 = local_20 + -1, iVar4 = iVar1, -1 < local_20) {
    for (; iVar2 = local_1c, iVar4 < 0; iVar4 = iVar4 + 1) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar4,this_ptr->camera_y + local_20);
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990
                (this_ptr,this_ptr->camera_x + iVar2,this_ptr->camera_y + local_20);
    }
  }
  return;
}


// Assembly code:
// 004efb70: PUSH EBX
//   Label: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
// 004efb71: PUSH ESI
// 004efb72: PUSH EDI
// 004efb73: PUSH EBP
// 004efb74: SUB ESP,0x10
// 004efb77: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004efb7b: MOV EBP,dword ptr [EBX + 0x10]
// 004efb7e: MOV EDX,dword ptr [EBX + 0x3c]
// 004efb81: NEG EBP
// 004efb83: CMP EBP,EDX
// 004efb85: JGE 0x004efb89
//   XREF to: 004efb89 (CONDITIONAL_JUMP)
// 004efb87: MOV EBP,EDX
// 004efb89: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_004efb89
// 004efb8c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004efb90: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004efb94: MOV EAX,dword ptr [EBX + 0x40]
// 004efb97: CMP EAX,ECX
// 004efb99: JGE 0x004efb9f
//   XREF to: 004efb9f (CONDITIONAL_JUMP)
// 004efb9b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004efb9f: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_004efb9f
// 004efba2: MOV ESI,dword ptr [EBX + 0x44]
// 004efba5: NEG EAX
// 004efba7: CMP EAX,ESI
// 004efba9: JGE 0x004efbad
//   XREF to: 004efbad (CONDITIONAL_JUMP)
// 004efbab: MOV EAX,ESI
// 004efbad: MOV ESI,dword ptr [EBX + 0x14]
//   Label: LAB_004efbad
// 004efbb0: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x20] (DATA)
// 004efbb3: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004efbb6: MOV ESI,dword ptr [EBX + 0x48]
// 004efbb9: CMP ESI,EDI
// 004efbbb: JGE 0x004efbc0
//   XREF to: 004efbc0 (CONDITIONAL_JUMP)
// 004efbbd: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x20] (DATA)
// 004efbc0: MOV EDI,EAX
//   Label: LAB_004efbc0
// 004efbc2: TEST EAX,EAX
// 004efbc4: JL 0x004efc3f
//   XREF to: 004efc3f (CONDITIONAL_JUMP)
// 004efbca: MOV EDI,dword ptr [ESP]
//   Label: LAB_004efbca
//   XREF to: Stack[-0x20] (DATA)
// 004efbcd: DEC EDI
// 004efbce: TEST EDI,EDI
// 004efbd0: JL 0x004efc0c
//   XREF to: 004efc0c (CONDITIONAL_JUMP)
// 004efbd2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004efbd6: DEC EAX
// 004efbd7: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004efbdb: MOV ESI,EBP
//   Label: LAB_004efbdb
// 004efbdd: TEST EBP,EBP
// 004efbdf: JL 0x004efc64
//   Label: LAB_004efbdf
//   XREF to: 004efc64 (CONDITIONAL_JUMP)
// 004efbe5: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004efbe9: TEST ESI,ESI
// 004efbeb: JL 0x004efc07
//   XREF to: 004efc07 (CONDITIONAL_JUMP)
// 004efbed: MOV EAX,dword ptr [EBX + 0x30]
//   Label: LAB_004efbed
// 004efbf0: ADD EAX,EDI
// 004efbf2: PUSH EAX
// 004efbf3: MOV EAX,dword ptr [EBX + 0x2c]
// 004efbf6: ADD EAX,ESI
// 004efbf8: PUSH EAX
// 004efbf9: PUSH EBX
// 004efbfa: DEC ESI
// 004efbfb: CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
//   XREF to: 004ef990 (UNCONDITIONAL_CALL)
// 004efc00: ADD ESP,0xc
// 004efc03: TEST ESI,ESI
// 004efc05: JGE 0x004efbed
//   XREF to: 004efbed (CONDITIONAL_JUMP)
// 004efc07: DEC EDI
//   Label: LAB_004efc07
// 004efc08: TEST EDI,EDI
// 004efc0a: JGE 0x004efbdb
//   XREF to: 004efbdb (CONDITIONAL_JUMP)
// 004efc0c: ADD ESP,0x10
//   Label: LAB_004efc0c
// 004efc0f: POP EBP
// 004efc10: POP EDI
// 004efc11: POP ESI
// 004efc12: POP EBX
// 004efc13: RET
// 004efc14: INC EDI
//   Label: LAB_004efc14
// 004efc15: TEST EDI,EDI
// 004efc17: JGE 0x004efbca
//   XREF to: 004efbca (CONDITIONAL_JUMP)
// 004efc19: MOV ESI,EBP
//   Label: LAB_004efc19
// 004efc1b: TEST EBP,EBP
// 004efc1d: JL 0x004efc4a
//   Label: LAB_004efc1d
//   XREF to: 004efc4a (CONDITIONAL_JUMP)
// 004efc1f: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 004efc23: TEST ESI,ESI
//   Label: LAB_004efc23
// 004efc25: JL 0x004efc14
//   XREF to: 004efc14 (CONDITIONAL_JUMP)
// 004efc27: MOV EAX,dword ptr [EBX + 0x30]
// 004efc2a: ADD EAX,EDI
// 004efc2c: PUSH EAX
// 004efc2d: MOV EAX,dword ptr [EBX + 0x2c]
// 004efc30: ADD EAX,ESI
// 004efc32: PUSH EAX
// 004efc33: PUSH EBX
// 004efc34: DEC ESI
// 004efc35: CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
//   XREF to: 004ef990 (UNCONDITIONAL_CALL)
// 004efc3a: ADD ESP,0xc
// 004efc3d: JMP 0x004efc23
//   XREF to: 004efc23 (UNCONDITIONAL_JUMP)
// 004efc3f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004efc3f
//   XREF to: Stack[-0x1c] (READ)
// 004efc43: DEC EAX
// 004efc44: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004efc48: JMP 0x004efc19
//   XREF to: 004efc19 (UNCONDITIONAL_JUMP)
// 004efc4a: MOV EAX,dword ptr [EBX + 0x30]
//   Label: LAB_004efc4a
// 004efc4d: ADD EAX,EDI
// 004efc4f: PUSH EAX
// 004efc50: MOV EAX,dword ptr [EBX + 0x2c]
// 004efc53: ADD EAX,ESI
// 004efc55: PUSH EAX
// 004efc56: PUSH EBX
// 004efc57: INC ESI
// 004efc58: CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
//   XREF to: 004ef990 (UNCONDITIONAL_CALL)
// 004efc5d: ADD ESP,0xc
// 004efc60: TEST ESI,ESI
// 004efc62: JMP 0x004efc1d
//   XREF to: 004efc1d (UNCONDITIONAL_JUMP)
// 004efc64: MOV EAX,dword ptr [EBX + 0x30]
//   Label: LAB_004efc64
// 004efc67: ADD EAX,EDI
// 004efc69: PUSH EAX
// 004efc6a: MOV EAX,dword ptr [EBX + 0x2c]
// 004efc6d: ADD EAX,ESI
// 004efc6f: PUSH EAX
// 004efc70: PUSH EBX
// 004efc71: INC ESI
// 004efc72: CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
//   XREF to: 004ef990 (UNCONDITIONAL_CALL)
// 004efc77: ADD ESP,0xc
// 004efc7a: TEST ESI,ESI
// 004efc7c: JMP 0x004efbdf
//   XREF to: 004efbdf (UNCONDITIONAL_JUMP)
