// Name: core_barrier.cpp_CBarrier_FUN_00414460
// Address: 00414460
// Address Range: [[00414460, 00414609]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414460(CBarrier * this_ptr)
// Globals:
//   undefined4 DAT_006151bf
//   double DOUBLE_006151c7 = 0.200000000000000
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_barrier_cpp_CBarrier_FUN_00414460(CBarrier *this_ptr)

{
  int iVar1;
  undefined4 uStack00000018;
  undefined4 uStack0000002c;
  float in_stack_00000038;
  undefined4 uStack00000040;
  float in_stack_0000004c;
  undefined4 uStack00000054;
  float in_stack_00000060;
  undefined4 uStack00000068;
  float in_stack_00000074;
  undefined4 uStack0000007c;
  float in_stack_00000088;
  float in_stack_0000009c;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
    return;
  }
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  uStack00000018 = 0x4144e7;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 - in_stack_00000038;
  }
  uStack0000002c = 0x414509;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 + in_stack_0000004c;
  }
  uStack00000040 = 0x41452b;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 4) =
         *(float *)(this_ptr->field1_0x158 + 4) - in_stack_00000060;
  }
  uStack00000054 = 0x41454d;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 4) =
         *(float *)(this_ptr->field1_0x158 + 4) + in_stack_00000074;
  }
  uStack00000068 = 0x41456f;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 8) =
         *(float *)(this_ptr->field1_0x158 + 8) - in_stack_00000088;
  }
  uStack0000007c = 0x414591;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 8) =
         *(float *)(this_ptr->field1_0x158 + 8) + in_stack_0000009c;
  }
  if (*(int *)this_ptr->field1_0x158 < 0x3f000000) {
    this_ptr->field1_0x158[0] = '\0';
    this_ptr->field1_0x158[1] = '\0';
    this_ptr->field1_0x158[2] = '\0';
    this_ptr->field1_0x158[3] = '?';
  }
  if (*(float *)(this_ptr->field1_0x158 + 4) < 0.5) {
    this_ptr->field1_0x158[4] = '\0';
    this_ptr->field1_0x158[5] = '\0';
    this_ptr->field1_0x158[6] = '\0';
    this_ptr->field1_0x158[7] = '?';
  }
  if (0.5 <= *(float *)(this_ptr->field1_0x158 + 8)) {
    return;
  }
  this_ptr->field1_0x158[8] = '\0';
  this_ptr->field1_0x158[9] = '\0';
  this_ptr->field1_0x158[10] = '\0';
  this_ptr->field1_0x158[0xb] = '?';
  return;
}


// Assembly code:
// 00414460: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_FUN_00414460
// 00414461: PUSH EBP
// 00414462: MOV EBP,ESP
// 00414464: SUB ESP,0x10
// 00414467: AND ESP,0xfffffff8
// 0041446a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041446d: PUSH 0x1d
// 0041446f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414474: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414475: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00414477: CALL dword ptr [EDX]
// 00414479: ADD ESP,0x8
// 0041447c: TEST EAX,EAX
// 0041447e: JZ 0x004145fc
//   XREF to: 004145fc (CONDITIONAL_JUMP)
// 00414484: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00414489: PUSH 0x2a
// 0041448b: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00414491: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414496: FMUL double ptr [0x006151bf]
//   XREF to: 006151bf (READ)
// 0041449c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0041449d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0041449f: FSTP float ptr [ESP + 0x8]
// 004144a3: CALL dword ptr [EDX]
// 004144a5: ADD ESP,0x8
// 004144a8: TEST EAX,EAX
// 004144aa: JZ 0x004144bc
//   XREF to: 004144bc (CONDITIONAL_JUMP)
// 004144ac: FLD float ptr [ESP]
// 004144af: FLD ST0
// 004144b1: FMUL double ptr [0x006151bf]
//   XREF to: 006151bf (READ)
// 004144b7: FSTP ST1
// 004144b9: FSTP float ptr [ESP]
// 004144bc: PUSH 0x38
//   Label: LAB_004144bc
// 004144be: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004144c3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004144c4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004144c6: CALL dword ptr [EDX]
// 004144c8: ADD ESP,0x8
// 004144cb: TEST EAX,EAX
// 004144cd: JZ 0x004144db
//   XREF to: 004144db (CONDITIONAL_JUMP)
// 004144cf: FLD float ptr [ESP]
// 004144d2: FMUL double ptr [0x006151c7]
//   XREF to: 006151c7 (READ)
// 004144d8: FSTP float ptr [ESP]
// 004144db: PUSH 0x4b
//   Label: LAB_004144db
// 004144dd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004144e2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004144e3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004144e5: CALL dword ptr [EDX]
// 004144e7: ADD ESP,0x8
// 004144ea: TEST EAX,EAX
// 004144ec: JZ 0x004144fd
//   XREF to: 004144fd (CONDITIONAL_JUMP)
// 004144ee: FLD float ptr [EBX + 0x158]
// 004144f4: FSUB float ptr [ESP]
// 004144f7: FSTP float ptr [EBX + 0x158]
// 004144fd: PUSH 0x4d
//   Label: LAB_004144fd
// 004144ff: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414504: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414505: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00414507: CALL dword ptr [EDX]
// 00414509: ADD ESP,0x8
// 0041450c: TEST EAX,EAX
// 0041450e: JZ 0x0041451f
//   XREF to: 0041451f (CONDITIONAL_JUMP)
// 00414510: FLD float ptr [EBX + 0x158]
// 00414516: FADD float ptr [ESP]
// 00414519: FSTP float ptr [EBX + 0x158]
// 0041451f: PUSH 0x1e
//   Label: LAB_0041451f
// 00414521: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414526: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414527: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00414529: CALL dword ptr [EDX]
// 0041452b: ADD ESP,0x8
// 0041452e: TEST EAX,EAX
// 00414530: JZ 0x00414541
//   XREF to: 00414541 (CONDITIONAL_JUMP)
// 00414532: FLD float ptr [EBX + 0x15c]
// 00414538: FSUB float ptr [ESP]
// 0041453b: FSTP float ptr [EBX + 0x15c]
// 00414541: PUSH 0x10
//   Label: LAB_00414541
// 00414543: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00414548: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00414549: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0041454b: CALL dword ptr [EDX]
// 0041454d: ADD ESP,0x8
// 00414550: TEST EAX,EAX
// 00414552: JZ 0x00414563
//   XREF to: 00414563 (CONDITIONAL_JUMP)
// 00414554: FLD float ptr [EBX + 0x15c]
// 0041455a: FADD float ptr [ESP]
// 0041455d: FSTP float ptr [EBX + 0x15c]
// 00414563: PUSH 0x50
//   Label: LAB_00414563
// 00414565: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0041456a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0041456b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0041456d: CALL dword ptr [EDX]
// 0041456f: ADD ESP,0x8
// 00414572: TEST EAX,EAX
// 00414574: JZ 0x00414585
//   XREF to: 00414585 (CONDITIONAL_JUMP)
// 00414576: FLD float ptr [EBX + 0x160]
// 0041457c: FSUB float ptr [ESP]
// 0041457f: FSTP float ptr [EBX + 0x160]
// 00414585: PUSH 0x48
//   Label: LAB_00414585
// 00414587: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0041458c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0041458d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0041458f: CALL dword ptr [EDX]
// 00414591: ADD ESP,0x8
// 00414594: TEST EAX,EAX
// 00414596: JZ 0x004145a7
//   XREF to: 004145a7 (CONDITIONAL_JUMP)
// 00414598: FLD float ptr [EBX + 0x160]
// 0041459e: FADD float ptr [ESP]
// 004145a1: FSTP float ptr [EBX + 0x160]
// 004145a7: MOV EDX,0x3f000000
//   Label: LAB_004145a7
// 004145ac: MOV ECX,dword ptr [EBX + 0x158]
// 004145b2: MOV dword ptr [ESP + 0xc],EDX
// 004145b6: CMP ECX,EDX
// 004145b8: JGE 0x004145c0
//   XREF to: 004145c0 (CONDITIONAL_JUMP)
// 004145ba: MOV dword ptr [EBX + 0x158],EDX
// 004145c0: FLD float ptr [EBX + 0x15c]
//   Label: LAB_004145c0
// 004145c6: FCOMP float ptr [ESP + 0xc]
// 004145ca: FNSTSW AX
// 004145cc: SAHF
// 004145cd: JNC 0x004145d9
//   XREF to: 004145d9 (CONDITIONAL_JUMP)
// 004145cf: MOV EAX,dword ptr [ESP + 0xc]
// 004145d3: MOV dword ptr [EBX + 0x15c],EAX
// 004145d9: FLD float ptr [EBX + 0x160]
//   Label: LAB_004145d9
// 004145df: FCOMP float ptr [ESP + 0xc]
// 004145e3: FNSTSW AX
// 004145e5: SAHF
// 004145e6: JC 0x004145ed
//   XREF to: 004145ed (CONDITIONAL_JUMP)
// 004145e8: MOV ESP,EBP
// 004145ea: POP EBP
// 004145eb: POP EBX
// 004145ec: RET
// 004145ed: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004145ed
// 004145f1: MOV dword ptr [EBX + 0x160],EAX
// 004145f7: MOV ESP,EBP
// 004145f9: POP EBP
// 004145fa: POP EBX
// 004145fb: RET
// 004145fc: PUSH EBX
//   Label: LAB_004145fc
// 004145fd: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 00414602: ADD ESP,0x4
// 00414605: MOV ESP,EBP
// 00414607: POP EBP
// 00414608: POP EBX
// 00414609: RET
