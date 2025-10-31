// Name: shape_meshlod.cpp_FreeSomething1_FUN_00515970
// Address: 00515970
// Address Range: [[00515970, 00515ab4]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FreeSomething1_FUN_00515970()
// Cross-references:
//   shape_meshlod.cpp_CallocSomething1_FUN_00515ac0 (00515ac0) at 00515ac9 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b080 (0051b080) at 0051b090 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_dtor_FUN_00515950 (00515950) at 00515956 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_0063734d
//   TerminatedCString s_shape_meshlod_cpp_00637362
//   TerminatedCString s_shape_meshlod_cpp_00637377
//   TerminatedCString s_shape_meshlod_cpp_0063738c
//   TerminatedCString s_shape_meshlod_cpp_006373a1
//   TerminatedCString s_shape_meshlod_cpp_006373b6
//   TerminatedCString s_shape_meshlod_cpp_006373cb
//   TerminatedCString s_shape_meshlod_cpp_006373e0
//   TerminatedCString s_shape_meshlod_cpp_006373f5
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_meshlod.cpp_FUN_00515880
//   shape_meshlod.cpp_LodMesh_dtor_FUN_00515950
//   shape_meshlod.cpp_TryingToCloseFileMaybe_FUN_0051b870

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FreeSomething1(undefined4 param_1) */

void shape_meshlod_cpp_FreeSomething1_FUN_00515970(void)

{
  SLodMesh *ptr;
  int in_stack_00000004;
  
  shape_meshlod_cpp_TryingToCloseFileMaybe_FUN_0051b870();
  if (*(void **)(in_stack_00000004 + 4) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 4),"..\\shape\\meshlod.cpp",0x217);
  }
  if (*(void **)(in_stack_00000004 + 0xc) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0xc),"..\\shape\\meshlod.cpp",0x218);
  }
  if (*(void **)(in_stack_00000004 + 0x48) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x48),"..\\shape\\meshlod.cpp",0x219);
  }
  if (*(void **)(in_stack_00000004 + 0x58) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x58),"..\\shape\\meshlod.cpp",0x21a);
  }
  if (*(void **)(in_stack_00000004 + 0x54) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x54),"..\\shape\\meshlod.cpp",0x21b);
  }
  if (*(void **)(in_stack_00000004 + 0x50) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x50),"..\\shape\\meshlod.cpp",0x21c);
  }
  if (*(void **)(in_stack_00000004 + 0x14) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x14),"..\\shape\\meshlod.cpp",0x21d);
  }
  g_CurrentDebugLine = 0x21f;
  g_CurrentDebugFilename = "..\\shape\\meshlod.cpp";
  if (*(int *)(in_stack_00000004 + 0x60) != 0) {
    crt_memory_c_free_FUN_005fe659((void *)(*(int *)(in_stack_00000004 + 0x60) + -4));
  }
  g_CurrentDebugLine = 0x220;
  g_CurrentDebugFilename = "..\\shape\\meshlod.cpp";
  if (*(SLodMesh **)(in_stack_00000004 + 0x34) == (SLodMesh *)0x0) {
    shape_meshlod_cpp_FUN_00515880();
    return;
  }
  ptr = shape_meshlod_cpp_LodMesh_dtor_FUN_00515950(*(SLodMesh **)(in_stack_00000004 + 0x34));
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  shape_meshlod_cpp_FUN_00515880();
  return;
}


// Assembly code:
// 00515970: PUSH EBX
//   Label: shape_meshlod.cpp_FreeSomething1_FUN_00515970
// 00515971: PUSH ESI
// 00515972: PUSH EDI
// 00515973: PUSH EBP
// 00515974: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00515978: PUSH EBX
// 00515979: CALL shape_meshlod.cpp_TryingToCloseFileMaybe_FUN_0051b870
//   XREF to: 0051b870 (UNCONDITIONAL_CALL)
// 0051597e: MOV EDX,dword ptr [EBX + 0x4]
// 00515981: ADD ESP,0x4
// 00515984: TEST EDX,EDX
// 00515986: JNZ 0x00515a7b
//   XREF to: 00515a7b (CONDITIONAL_JUMP)
// 0051598c: MOV ESI,dword ptr [EBX + 0xc]
//   Label: LAB_0051598c
// 0051598f: TEST ESI,ESI
// 00515991: JZ 0x005159a6
//   XREF to: 005159a6 (CONDITIONAL_JUMP)
// 00515993: PUSH 0x218
// 00515998: PUSH 0x637362
//   XREF to: 00637362 (DATA)
// 0051599d: PUSH ESI
// 0051599e: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005159a3: ADD ESP,0xc
// 005159a6: MOV EBP,dword ptr [EBX + 0x48]
//   Label: LAB_005159a6
// 005159a9: TEST EBP,EBP
// 005159ab: JZ 0x005159c0
//   XREF to: 005159c0 (CONDITIONAL_JUMP)
// 005159ad: PUSH 0x219
// 005159b2: PUSH 0x637377
//   XREF to: 00637377 (DATA)
// 005159b7: PUSH EBP
// 005159b8: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005159bd: ADD ESP,0xc
// 005159c0: MOV EDX,dword ptr [EBX + 0x58]
//   Label: LAB_005159c0
// 005159c3: TEST EDX,EDX
// 005159c5: JZ 0x005159da
//   XREF to: 005159da (CONDITIONAL_JUMP)
// 005159c7: PUSH 0x21a
// 005159cc: PUSH 0x63738c
//   XREF to: 0063738c (DATA)
// 005159d1: PUSH EDX
// 005159d2: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005159d7: ADD ESP,0xc
// 005159da: MOV ESI,dword ptr [EBX + 0x54]
//   Label: LAB_005159da
// 005159dd: TEST ESI,ESI
// 005159df: JZ 0x005159f4
//   XREF to: 005159f4 (CONDITIONAL_JUMP)
// 005159e1: PUSH 0x21b
// 005159e6: PUSH 0x6373a1
//   XREF to: 006373a1 (DATA)
// 005159eb: PUSH ESI
// 005159ec: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005159f1: ADD ESP,0xc
// 005159f4: MOV EBP,dword ptr [EBX + 0x50]
//   Label: LAB_005159f4
// 005159f7: TEST EBP,EBP
// 005159f9: JZ 0x00515a0e
//   XREF to: 00515a0e (CONDITIONAL_JUMP)
// 005159fb: PUSH 0x21c
// 00515a00: PUSH 0x6373b6
//   XREF to: 006373b6 (DATA)
// 00515a05: PUSH EBP
// 00515a06: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00515a0b: ADD ESP,0xc
// 00515a0e: MOV EDX,dword ptr [EBX + 0x14]
//   Label: LAB_00515a0e
// 00515a11: TEST EDX,EDX
// 00515a13: JZ 0x00515a28
//   XREF to: 00515a28 (CONDITIONAL_JUMP)
// 00515a15: PUSH 0x21d
// 00515a1a: PUSH 0x6373cb
//   XREF to: 006373cb (DATA)
// 00515a1f: PUSH EDX
// 00515a20: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00515a25: ADD ESP,0xc
// 00515a28: MOV EDI,0x21f
//   Label: LAB_00515a28
// 00515a2d: MOV ESI,0x6373e0
//   XREF to: 006373e0 (DATA)
// 00515a32: MOV EAX,dword ptr [EBX + 0x60]
// 00515a35: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 00515a3b: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 00515a41: TEST EAX,EAX
// 00515a43: JZ 0x00515a51
//   XREF to: 00515a51 (CONDITIONAL_JUMP)
// 00515a45: SUB EAX,0x4
// 00515a48: PUSH EAX
// 00515a49: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00515a4e: ADD ESP,0x4
// 00515a51: MOV EAX,0x220
//   Label: LAB_00515a51
// 00515a56: MOV EBP,0x6373f5
//   XREF to: 006373f5 (DATA)
// 00515a5b: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 00515a60: MOV EAX,dword ptr [EBX + 0x34]
// 00515a63: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 00515a69: TEST EAX,EAX
// 00515a6b: JNZ 0x00515a93
//   XREF to: 00515a93 (CONDITIONAL_JUMP)
// 00515a6d: PUSH EBX
// 00515a6e: CALL shape_meshlod.cpp_FUN_00515880
//   XREF to: 00515880 (UNCONDITIONAL_CALL)
// 00515a73: ADD ESP,0x4
// 00515a76: POP EBP
// 00515a77: POP EDI
// 00515a78: POP ESI
// 00515a79: POP EBX
// 00515a7a: RET
// 00515a7b: PUSH 0x217
//   Label: LAB_00515a7b
// 00515a80: PUSH 0x63734d
//   XREF to: 0063734d (DATA)
// 00515a85: PUSH EDX
// 00515a86: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00515a8b: ADD ESP,0xc
// 00515a8e: JMP 0x0051598c
//   XREF to: 0051598c (UNCONDITIONAL_JUMP)
// 00515a93: PUSH 0x0
//   Label: LAB_00515a93
// 00515a95: PUSH EAX
// 00515a96: CALL shape_meshlod.cpp_LodMesh_dtor_FUN_00515950
//   XREF to: 00515950 (UNCONDITIONAL_CALL)
// 00515a9b: ADD ESP,0x8
// 00515a9e: PUSH EAX
// 00515a9f: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00515aa4: ADD ESP,0x4
// 00515aa7: PUSH EBX
// 00515aa8: CALL shape_meshlod.cpp_FUN_00515880
//   XREF to: 00515880 (UNCONDITIONAL_CALL)
// 00515aad: ADD ESP,0x4
// 00515ab0: POP EBP
// 00515ab1: POP EDI
// 00515ab2: POP ESI
// 00515ab3: POP EBX
// 00515ab4: RET
