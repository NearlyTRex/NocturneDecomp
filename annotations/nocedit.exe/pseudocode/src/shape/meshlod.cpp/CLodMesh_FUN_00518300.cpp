// Name: shape_meshlod.cpp_CLodMesh_FUN_00518300
// Address: 00518300
// Address Range: [[00518300, 005183d2]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_00518300(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 005182a7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000 (00517000) at 005170ff [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_006378af
//   TerminatedCString s_Can_t_find_closest_face_006378c4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_meshlod.cpp_FUN_0051a400

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_00518300(CLodMesh *this_ptr)

{
  void *pvVar1;
  int iVar2;
  double dVar3;
  int in_stack_00000008;
  int local_18;
  
  pvVar1 = this_ptr->sample_points_ptr;
  *(undefined4 *)((int)pvVar1 + in_stack_00000008 * 0x1c + 0x10) = 0x39a08ce9;
  *(undefined4 *)((int)pvVar1 + in_stack_00000008 * 0x1c + 0x14) = 0x46293e59;
  *(undefined4 *)((int)pvVar1 + in_stack_00000008 * 0x1c + 0xc) = 0xffffffff;
  iVar2 = 0;
  if (0 < this_ptr->tri_count) {
    local_18 = 0;
    do {
      if (*(int *)(this_ptr->triangle_data->field9_0x44 + local_18 + -4) == 0) {
        dVar3 = (double)shape_meshlod_cpp_FUN_0051a400();
        if (dVar3 < *(double *)((int)pvVar1 + in_stack_00000008 * 0x1c + 0x10)) {
          *(int *)((int)pvVar1 + in_stack_00000008 * 0x1c + 0xc) = iVar2;
          *(double *)((int)pvVar1 + in_stack_00000008 * 0x1c + 0x10) = dVar3;
        }
      }
      iVar2 = iVar2 + 1;
      local_18 = local_18 + 0x8c;
    } while (iVar2 < this_ptr->tri_count);
  }
  if (-1 < *(int *)((int)pvVar1 + in_stack_00000008 * 0x1c + 0xc)) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0xa30;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find closest face!");
  return;
}


// Assembly code:
// 00518300: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00518300
// 00518301: PUSH ESI
// 00518302: PUSH EDI
// 00518303: PUSH EBP
// 00518304: MOV EBP,ESP
// 00518306: SUB ESP,0x14
// 00518309: AND ESP,0xfffffff8
// 0051830c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051830f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00518312: SHL EAX,0x2
// 00518315: MOV EBX,EAX
// 00518317: SHL EAX,0x3
// 0051831a: SUB EAX,EBX
// 0051831c: MOV EBX,dword ptr [EDI + 0x60]
// 0051831f: ADD EBX,EAX
// 00518321: MOV dword ptr [EBX + 0x10],0x39a08ce9
// 00518328: MOV dword ptr [EBX + 0x14],0x46293e59
// 0051832f: MOV dword ptr [EBX + 0xc],0xffffffff
// 00518336: MOV EDX,dword ptr [EDI + 0x8]
// 00518339: XOR ESI,ESI
// 0051833b: TEST EDX,EDX
// 0051833d: JLE 0x00518368
//   XREF to: 00518368 (CONDITIONAL_JUMP)
// 0051833f: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00518343: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_00518343
//   XREF to: Stack[-0x18] (READ)
// 00518347: MOV EAX,dword ptr [EDI + 0xc]
// 0051834a: ADD EAX,EDX
// 0051834c: CMP dword ptr [EAX + 0x40],0x0
// 00518350: JZ 0x00518375
//   XREF to: 00518375 (CONDITIONAL_JUMP)
// 00518352: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_00518352
//   XREF to: Stack[-0x18] (READ)
// 00518356: INC ESI
// 00518357: ADD ECX,0x8c
// 0051835d: MOV EAX,dword ptr [EDI + 0x8]
// 00518360: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00518364: CMP ESI,EAX
// 00518366: JL 0x00518343
//   XREF to: 00518343 (CONDITIONAL_JUMP)
// 00518368: CMP dword ptr [EBX + 0xc],0x0
//   Label: LAB_00518368
// 0051836c: JL 0x005183a9
//   XREF to: 005183a9 (CONDITIONAL_JUMP)
// 0051836e: MOV ESP,EBP
// 00518370: POP EBP
// 00518371: POP EDI
// 00518372: POP ESI
// 00518373: POP EBX
// 00518374: RET
// 00518375: PUSH EAX
//   Label: LAB_00518375
// 00518376: PUSH EBX
// 00518377: PUSH EDI
// 00518378: CALL shape_meshlod.cpp_FUN_0051a400
//   XREF to: 0051a400 (UNCONDITIONAL_CALL)
// 0051837d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00518381: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00518385: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00518389: ADD ESP,0xc
// 0051838c: FST double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0051838f: FCOMP double ptr [EBX + 0x10]
// 00518392: FNSTSW AX
// 00518394: SAHF
// 00518395: JNC 0x00518352
//   XREF to: 00518352 (CONDITIONAL_JUMP)
// 00518397: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0051839a: MOV dword ptr [EBX + 0xc],ESI
// 0051839d: MOV dword ptr [EBX + 0x10],EAX
// 005183a0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 005183a4: MOV dword ptr [EBX + 0x14],EAX
// 005183a7: JMP 0x00518352
//   XREF to: 00518352 (UNCONDITIONAL_JUMP)
// 005183a9: MOV ECX,0x6378af
//   Label: LAB_005183a9
//   XREF to: 006378af (DATA)
// 005183ae: MOV EBX,0xa30
// 005183b3: PUSH 0x6378c4
//   XREF to: 006378c4 (DATA)
// 005183b8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005183be: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005183c4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005183c9: ADD ESP,0x4
// 005183cc: MOV ESP,EBP
// 005183ce: POP EBP
// 005183cf: POP EDI
// 005183d0: POP ESI
// 005183d1: POP EBX
// 005183d2: RET
