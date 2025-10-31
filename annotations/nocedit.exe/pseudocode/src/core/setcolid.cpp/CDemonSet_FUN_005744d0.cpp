// Name: core_setcolid.cpp_CDemonSet_FUN_005744d0
// Address: 005744d0
// Address Range: [[005744d0, 00574551]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_005744d0(CDemonSet * this_ptr)
// Cross-references:
//   core_door.cpp_CDoor_process_FUN_004800c0 (004800c0) at 00480164 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
//   core_path.cpp_GlobalPathmapListCorruption_FUN_00548590

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_005744d0(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  pCVar1 = (CVector3f *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
  if (&CStack_1c != pCVar1) {
    CStack_1c.x = pCVar1->x;
    CStack_1c.y = pCVar1->y;
    CStack_1c.z = pCVar1->z;
  }
  if (&CStack_10 != pCVar1 + 1) {
    CStack_10.x = pCVar1[1].x;
    CStack_10.y = pCVar1[1].y;
    CStack_10.z = pCVar1[1].z;
  }
  core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
            (&g_CDemonRaytraceInstance,(CVector3f *)(in_stack_00000008 + 0x20),
             (void *)(in_stack_00000008 + 0x30),&CStack_1c,&CStack_10);
  core_path_cpp_GlobalPathmapListCorruption_FUN_00548590();
  return;
}


// Assembly code:
// 005744d0: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_FUN_005744d0
// 005744d1: SUB ESP,0x30
// 005744d4: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005744d8: MOV EDX,ESP
// 005744da: PUSH EDX
// 005744db: MOV EAX,dword ptr [EBX + 0x154]
// 005744e1: PUSH EBX
// 005744e2: CALL dword ptr [EAX + 0x14]
// 005744e5: MOV EDX,EAX
// 005744e7: MOV ECX,EAX
// 005744e9: LEA EAX,[ESP + 0x20]
// 005744ed: ADD ESP,0x8
// 005744f0: CMP EAX,EDX
// 005744f2: JNZ 0x0057453c
//   XREF to: 0057453c (CONDITIONAL_JUMP)
// 005744f4: LEA EAX,[ESP + 0x24]
//   Label: LAB_005744f4
// 005744f8: LEA EDX,[ECX + 0xc]
// 005744fb: CMP EAX,EDX
// 005744fd: JZ 0x00574513
//   XREF to: 00574513 (CONDITIONAL_JUMP)
// 005744ff: MOV EAX,dword ptr [EDX]
// 00574501: MOV dword ptr [ESP + 0x24],EAX
// 00574505: MOV EAX,dword ptr [EDX + 0x4]
// 00574508: MOV dword ptr [ESP + 0x28],EAX
// 0057450c: MOV EAX,dword ptr [EDX + 0x8]
// 0057450f: MOV dword ptr [ESP + 0x2c],EAX
// 00574513: LEA EAX,[ESP + 0x24]
//   Label: LAB_00574513
// 00574517: PUSH EAX
// 00574518: LEA EAX,[ESP + 0x1c]
// 0057451c: PUSH EAX
// 0057451d: LEA EAX,[EBX + 0x30]
// 00574520: PUSH EAX
// 00574521: ADD EBX,0x20
// 00574524: PUSH EBX
// 00574525: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0057452a: CALL core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
//   XREF to: 00499f10 (UNCONDITIONAL_CALL)
// 0057452f: ADD ESP,0x14
// 00574532: CALL core_path.cpp_GlobalPathmapListCorruption_FUN_00548590
//   XREF to: 00548590 (UNCONDITIONAL_CALL)
// 00574537: ADD ESP,0x30
// 0057453a: POP EBX
// 0057453b: RET
// 0057453c: MOV EAX,dword ptr [EDX]
//   Label: LAB_0057453c
// 0057453e: MOV dword ptr [ESP + 0x18],EAX
// 00574542: MOV EAX,dword ptr [EDX + 0x4]
// 00574545: MOV dword ptr [ESP + 0x1c],EAX
// 00574549: MOV EAX,dword ptr [EDX + 0x8]
// 0057454c: MOV dword ptr [ESP + 0x20],EAX
// 00574550: JMP 0x005744f4
//   XREF to: 005744f4 (UNCONDITIONAL_JUMP)
