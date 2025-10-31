// Name: core_flies.cpp_FUN_004cbd60
// Address: 004cbd60
// Address Range: [[004cbd60, 004cbe15]]
// Convention: __cdecl
// Signature: CFlies * core_flies.cpp_FUN_004cbd60(CFlies * this_ptr)
// Cross-references:
//   core_flies.cpp_FUN_004cbd20 (004cbd20) at 004cbd3a [UNCONDITIONAL_CALL]
//   core_gore.cpp_CreateFlies_FUN_004edf30 (004edf30) at 004ee015 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable PTR_core_flies.cpp_FUN_004cbe20_0065e524
//   WatcomTypeInfo g_SFlyTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_FUN_004cbd60(CFlies *this_ptr)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  BADSPACEBASE *in_ESP;
  undefined4 local_4;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar1[1].actor_name + 0x10,200,&g_SFlyTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar2 + -0x14) = &PTR_core_flies_cpp_FUN_004cbe20_0065e524;
  *(undefined4 *)((int)pvVar2 + -4) = 0x14;
  if ((undefined4 *)((int)pvVar2 + -0x10) != &local_4) {
    *(undefined4 *)((int)pvVar2 + -0x10) = 0x40a00000;
    *(undefined4 *)((int)pvVar2 + -0xc) = 0x40a00000;
    *(undefined4 *)((int)pvVar2 + -8) = 0x40a00000;
  }
  *(undefined4 *)((int)pvVar2 + 0x28ac) = 0;
  *(undefined4 *)((int)pvVar2 + 0x28a8) = 0;
  *(undefined4 *)((int)pvVar2 + 0x28a0) = 0;
  *(undefined4 *)((int)pvVar2 + 0x28b0) = 0;
  *(undefined4 *)((int)pvVar2 + 0x28b4) = 1;
  *(undefined4 *)((int)pvVar2 + 0x28a4) = 0;
  return (CFlies *)((int)pvVar2 + -0x168);
}


// Assembly code:
// 004cbd60: SUB ESP,0xc
//   Label: core_flies.cpp_FUN_004cbd60
// 004cbd63: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004cbd67: PUSH EDX
// 004cbd68: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004cbd6d: ADD ESP,0x4
// 004cbd70: PUSH 0x65e610
//   XREF to: 0065e610 (DATA)
// 004cbd75: PUSH 0xc8
// 004cbd7a: ADD EAX,0x168
// 004cbd7f: PUSH EAX
// 004cbd80: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004cbd85: LEA EDX,[EAX + 0xfffffe98]
// 004cbd8b: MOV ECX,0x40a00000
// 004cbd90: MOV dword ptr [EDX + 0x154],0x65e524
//   XREF to: 0065e524 (DATA)
// 004cbd9a: ADD ESP,0xc
// 004cbd9d: MOV dword ptr [EDX + 0x164],0x14
// 004cbda7: MOV EAX,ESP
// 004cbda9: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0xc] (DATA)
// 004cbdac: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 004cbdb0: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x4] (WRITE)
// 004cbdb4: LEA ECX,[EDX + 0x158]
// 004cbdba: CMP ECX,EAX
// 004cbdbc: JNZ 0x004cbe00
//   XREF to: 004cbe00 (CONDITIONAL_JUMP)
// 004cbdbe: MOV dword ptr [EDX + 0x2a14],0x0
//   Label: LAB_004cbdbe
// 004cbdc8: MOV dword ptr [EDX + 0x2a10],0x0
// 004cbdd2: MOV dword ptr [EDX + 0x2a08],0x0
// 004cbddc: MOV dword ptr [EDX + 0x2a18],0x0
// 004cbde6: MOV dword ptr [EDX + 0x2a1c],0x1
// 004cbdf0: MOV EAX,EDX
// 004cbdf2: MOV dword ptr [EDX + 0x2a0c],0x0
// 004cbdfc: ADD ESP,0xc
// 004cbdff: RET
// 004cbe00: MOV dword ptr [ECX],0x40a00000
//   Label: LAB_004cbe00
// 004cbe06: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 004cbe0a: MOV dword ptr [ECX + 0x4],EAX
// 004cbe0d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 004cbe11: MOV dword ptr [ECX + 0x8],EAX
// 004cbe14: JMP 0x004cbdbe
//   XREF to: 004cbdbe (UNCONDITIONAL_JUMP)
