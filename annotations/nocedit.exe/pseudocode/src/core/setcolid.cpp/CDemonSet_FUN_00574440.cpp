// Name: core_setcolid.cpp_CDemonSet_FUN_00574440
// Address: 00574440
// Address Range: [[00574440, 005744c1]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_00574440(CDemonSet * this_ptr)
// Cross-references:
//   core_barrier.cpp_CBarrier_FUN_004143e0 (004143e0) at 004143f6 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_process_FUN_004800c0 (004800c0) at 00480403 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_updateCollisionData_FUN_00481020 (00481020) at 0048104c [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
//   core_path.cpp_GlobalPathmapListCorruption_FUN_00548590

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574440(CDemonSet *this_ptr)

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
  core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
            (&g_CDemonRaytraceInstance,(CVector3f *)(in_stack_00000008 + 0x20),
             (CVector3f *)(in_stack_00000008 + 0x30),&CStack_1c,&CStack_10);
  core_path_cpp_GlobalPathmapListCorruption_FUN_00548590();
  return;
}


// Assembly code:
// 00574440: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_FUN_00574440
// 00574441: SUB ESP,0x30
// 00574444: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00574448: MOV EDX,ESP
// 0057444a: PUSH EDX
// 0057444b: MOV EAX,dword ptr [EBX + 0x154]
// 00574451: PUSH EBX
// 00574452: CALL dword ptr [EAX + 0x14]
// 00574455: MOV EDX,EAX
// 00574457: MOV ECX,EAX
// 00574459: LEA EAX,[ESP + 0x20]
// 0057445d: ADD ESP,0x8
// 00574460: CMP EAX,EDX
// 00574462: JNZ 0x005744ac
//   XREF to: 005744ac (CONDITIONAL_JUMP)
// 00574464: LEA EAX,[ESP + 0x24]
//   Label: LAB_00574464
// 00574468: LEA EDX,[ECX + 0xc]
// 0057446b: CMP EAX,EDX
// 0057446d: JZ 0x00574483
//   XREF to: 00574483 (CONDITIONAL_JUMP)
// 0057446f: MOV EAX,dword ptr [EDX]
// 00574471: MOV dword ptr [ESP + 0x24],EAX
// 00574475: MOV EAX,dword ptr [EDX + 0x4]
// 00574478: MOV dword ptr [ESP + 0x28],EAX
// 0057447c: MOV EAX,dword ptr [EDX + 0x8]
// 0057447f: MOV dword ptr [ESP + 0x2c],EAX
// 00574483: LEA EAX,[ESP + 0x24]
//   Label: LAB_00574483
// 00574487: PUSH EAX
// 00574488: LEA EAX,[ESP + 0x1c]
// 0057448c: PUSH EAX
// 0057448d: LEA EAX,[EBX + 0x30]
// 00574490: PUSH EAX
// 00574491: ADD EBX,0x20
// 00574494: PUSH EBX
// 00574495: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0057449a: CALL core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
//   XREF to: 00499c20 (UNCONDITIONAL_CALL)
// 0057449f: ADD ESP,0x14
// 005744a2: CALL core_path.cpp_GlobalPathmapListCorruption_FUN_00548590
//   XREF to: 00548590 (UNCONDITIONAL_CALL)
// 005744a7: ADD ESP,0x30
// 005744aa: POP EBX
// 005744ab: RET
// 005744ac: MOV EAX,dword ptr [EDX]
//   Label: LAB_005744ac
// 005744ae: MOV dword ptr [ESP + 0x18],EAX
// 005744b2: MOV EAX,dword ptr [EDX + 0x4]
// 005744b5: MOV dword ptr [ESP + 0x1c],EAX
// 005744b9: MOV EAX,dword ptr [EDX + 0x8]
// 005744bc: MOV dword ptr [ESP + 0x20],EAX
// 005744c0: JMP 0x00574464
//   XREF to: 00574464 (UNCONDITIONAL_JUMP)
