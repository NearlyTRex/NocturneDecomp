// Name: support_newmsg.cpp_CMouse_ctor_FUN_00544380
// Address: 00544380
// Address Range: [[00544380, 005443d7]]
// Convention: __cdecl
// Signature: CMouse * __cdecl support_newmsg_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr)

#include "nocturne.h"

CMouse * __cdecl support_newmsg_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(ptr,8,&g_CAlphaBitmapTypeInfo);
  pvVar1 = __arrinit
                     ((void *)((int)pvVar1 + 0xa0),7,&g_CAlphaBitmapTypeInfo);
  pvVar1 = __arrinit
                     ((void *)((int)pvVar1 + 0x8c),0xf,&g_CAlphaBitmapTypeInfo);
  *(uint *)((int)pvVar1 + 300) = 0;
  *(uint *)((int)pvVar1 + 0x130) = 0;
  return (CMouse *)((int)pvVar1 + -300);
}
