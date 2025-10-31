// Name: core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
// Address: 00547d00
// Address Range: [[00547d00, 00547dc0]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
// Cross-references:
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425e27 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 004262a8 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 00428868 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043ff20 (0043ff20) at 00440359 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d46f7 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f13f0 (004f13f0) at 004f1879 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8c70 (004f8c70) at 004f922b [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_005293b0 (005293b0) at 005294c1 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005578e0 (005578e0) at 00557ad1 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9260 (005d9260) at 005d981b [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ebd40 (005ebd40) at 005ebe15 [UNCONDITIONAL_CALL]
// Globals:
//   int g_PathfindingMaxClimbHeight
// Function calls:
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
          (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,
          int direction_hint)

{
  int iVar1;
  
  if ((((this_ptr->cached_world_position).x != dest_position->x) ||
      ((this_ptr->cached_world_position).y != dest_position->y)) ||
     ((this_ptr->cached_world_position).z != dest_position->z)) {
    if (&this_ptr->cached_world_position != dest_position) {
      (this_ptr->cached_world_position).x = dest_position->x;
      (this_ptr->cached_world_position).y = dest_position->y;
      (this_ptr->cached_world_position).z = dest_position->z;
    }
    g_PathfindingMaxClimbHeight = 1;
    do {
      iVar1 = core_path_cpp_CPathMap_findPathToDestination_FUN_00547320
                        (this_ptr,dest_position,&this_ptr->path_heading,direction_hint);
      this_ptr->last_pathfinding_result = iVar1;
      if (iVar1 == 1) break;
      g_PathfindingMaxClimbHeight = g_PathfindingMaxClimbHeight + 1;
    } while (g_PathfindingMaxClimbHeight < 4);
  }
  if (&this_ptr->path_heading != out_euler_angles) {
    out_euler_angles->x = (this_ptr->path_heading).x;
    out_euler_angles->y = (this_ptr->path_heading).y;
    out_euler_angles->z = (this_ptr->path_heading).z;
    return this_ptr->last_pathfinding_result;
  }
  return this_ptr->last_pathfinding_result;
}


// Assembly code:
// 00547d00: PUSH EBX
//   Label: core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
// 00547d01: PUSH ESI
// 00547d02: PUSH EDI
// 00547d03: PUSH EBP
// 00547d04: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00547d08: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00547d0c: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00547d10: LEA EDI,[EBX + 0x138c0]
// 00547d16: FLD float ptr [EDI]
// 00547d18: FCOMP float ptr [ESI]
// 00547d1a: FNSTSW AX
// 00547d1c: SAHF
// 00547d1d: JZ 0x00547d6a
//   XREF to: 00547d6a (CONDITIONAL_JUMP)
// 00547d1f: LEA EAX,[EBX + 0x138c0]
//   Label: LAB_00547d1f
// 00547d25: CMP EAX,ESI
// 00547d27: JNZ 0x00547d82
//   XREF to: 00547d82 (CONDITIONAL_JUMP)
// 00547d29: MOV EDX,0x1
//   Label: LAB_00547d29
// 00547d2e: LEA EDI,[EBX + 0x138cc]
// 00547d34: MOV dword ptr [0x030c3ab4],EDX
//   XREF to: 030c3ab4 (WRITE)
// 00547d3a: PUSH EBP
//   Label: LAB_00547d3a
// 00547d3b: PUSH EDI
// 00547d3c: PUSH ESI
// 00547d3d: PUSH EBX
// 00547d3e: CALL core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
//   XREF to: 00547320 (UNCONDITIONAL_CALL)
// 00547d43: ADD ESP,0x10
// 00547d46: MOV dword ptr [EBX + 0x138bc],EAX
// 00547d4c: CMP EAX,0x1
// 00547d4f: JNZ 0x00547d94
//   XREF to: 00547d94 (CONDITIONAL_JUMP)
// 00547d51: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_00547d51
//   XREF to: Stack[0xc] (READ)
// 00547d55: LEA EAX,[EBX + 0x138cc]
// 00547d5b: CMP EAX,ECX
// 00547d5d: JNZ 0x00547da6
//   XREF to: 00547da6 (CONDITIONAL_JUMP)
// 00547d5f: MOV EAX,dword ptr [EBX + 0x138bc]
// 00547d65: POP EBP
// 00547d66: POP EDI
// 00547d67: POP ESI
// 00547d68: POP EBX
// 00547d69: RET
// 00547d6a: FLD float ptr [EDI + 0x4]
//   Label: LAB_00547d6a
// 00547d6d: FCOMP float ptr [ESI + 0x4]
// 00547d70: FNSTSW AX
// 00547d72: SAHF
// 00547d73: JNZ 0x00547d1f
//   XREF to: 00547d1f (CONDITIONAL_JUMP)
// 00547d75: FLD float ptr [EDI + 0x8]
// 00547d78: FCOMP float ptr [ESI + 0x8]
// 00547d7b: FNSTSW AX
// 00547d7d: SAHF
// 00547d7e: JZ 0x00547d51
//   XREF to: 00547d51 (CONDITIONAL_JUMP)
// 00547d80: JMP 0x00547d1f
//   XREF to: 00547d1f (UNCONDITIONAL_JUMP)
// 00547d82: MOV EDX,dword ptr [ESI]
//   Label: LAB_00547d82
// 00547d84: MOV dword ptr [EAX],EDX
// 00547d86: MOV EDX,dword ptr [ESI + 0x4]
// 00547d89: MOV dword ptr [EAX + 0x4],EDX
// 00547d8c: MOV EDX,dword ptr [ESI + 0x8]
// 00547d8f: MOV dword ptr [EAX + 0x8],EDX
// 00547d92: JMP 0x00547d29
//   XREF to: 00547d29 (UNCONDITIONAL_JUMP)
// 00547d94: MOV EAX,[0x030c3ab4]
//   Label: LAB_00547d94
//   XREF to: 030c3ab4 (READ)
// 00547d99: INC EAX
// 00547d9a: MOV [0x030c3ab4],EAX
//   XREF to: 030c3ab4 (WRITE)
// 00547d9f: CMP EAX,0x3
// 00547da2: JLE 0x00547d3a
//   XREF to: 00547d3a (CONDITIONAL_JUMP)
// 00547da4: JMP 0x00547d51
//   XREF to: 00547d51 (UNCONDITIONAL_JUMP)
// 00547da6: MOV EDX,dword ptr [EAX]
//   Label: LAB_00547da6
// 00547da8: MOV dword ptr [ECX],EDX
// 00547daa: MOV EDX,dword ptr [EAX + 0x4]
// 00547dad: MOV dword ptr [ECX + 0x4],EDX
// 00547db0: MOV EDX,dword ptr [EAX + 0x8]
// 00547db3: MOV dword ptr [ECX + 0x8],EDX
// 00547db6: MOV EAX,dword ptr [EBX + 0x138bc]
// 00547dbc: POP EBP
// 00547dbd: POP EDI
// 00547dbe: POP ESI
// 00547dbf: POP EBX
// 00547dc0: RET
