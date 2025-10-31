// Name: support_newmsg.cpp_CMouse_ctor_FUN_00544380
// Address: 00544380
// Address Range: [[00544380, 005443d7]]
// Convention: __cdecl
// Signature: CMouse * support_newmsg.cpp_CMouse_ctor_FUN_00544380(CMouse * ptr)
// Cross-references:
//   support_newmsg.cpp_staticInit_FUN_00544360 (00544360) at 00544365 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CAlphaBitmapTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CMouse * __cdecl support_newmsg_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(ptr,8,&g_CAlphaBitmapTypeInfo)
  ;
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar1 + 0xa0),7,&g_CAlphaBitmapTypeInfo);
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar1 + 0x8c),0xf,&g_CAlphaBitmapTypeInfo);
  *(undefined4 *)((int)pvVar1 + 300) = 0;
  *(undefined4 *)((int)pvVar1 + 0x130) = 0;
  return (CMouse *)((int)pvVar1 + -300);
}


// Assembly code:
// 00544380: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_newmsg.cpp_CMouse_ctor_FUN_00544380
//   XREF to: Stack[0x4] (READ)
// 00544384: PUSH 0x65e9f0
//   XREF to: 0065e9f0 (DATA)
// 00544389: PUSH 0x8
// 0054438b: PUSH EAX
// 0054438c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00544391: ADD ESP,0xc
// 00544394: PUSH 0x65e9f0
//   XREF to: 0065e9f0 (DATA)
// 00544399: PUSH 0x7
// 0054439b: ADD EAX,0xa0
// 005443a0: PUSH EAX
// 005443a1: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005443a6: ADD ESP,0xc
// 005443a9: PUSH 0x65e9f0
//   XREF to: 0065e9f0 (DATA)
// 005443ae: PUSH 0xf
// 005443b0: ADD EAX,0x8c
// 005443b5: PUSH EAX
// 005443b6: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005443bb: MOV dword ptr [EAX + 0x12c],0x0
// 005443c5: ADD ESP,0xc
// 005443c8: MOV dword ptr [EAX + 0x130],0x0
// 005443d2: SUB EAX,0x12c
// 005443d7: RET
