// Name: crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
// Address: 0060658f
// Address Range: [[0060658f, 006065f7]]
// Convention: __cdecl
// Signature: fstreambase * crt_fstream.cpp_fstreambase_ctor_FUN_0060658f(fstreambase * this_ptr, uint c1)
// Cross-references:
//   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 (005ff8f0) at 005ff8fe [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c (005ff95c) at 005ff96a [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor g_FStreamBase_VirtualBaseLayout
//   void* g_FStreamBase_Destructor = 00606509
//   void* g_FStreamBase_IOSDestructor = 006064f1
// Function calls:
//   crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815

#include "nocturne.h"

fstreambase * __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0060658f(fstreambase *this_ptr,uint c1)

{
  int iVar1;
  void *pvVar2;
  filebuf *buffer_ptr;
  ios *piVar3;
  fstreambase *pfVar4;
  
  pfVar4 = this_ptr;
  if ((c1 & 1) == 0) {
    (this_ptr->base).layout_info = &g_FStreamBase_VirtualBaseLayout;
    piVar3 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios_base);
    pfVar4 = (fstreambase *)&piVar3[-2].__enabled_exceptions;
  }
  buffer_ptr = crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(&(pfVar4->base).filebuf);
  pfVar4 = (fstreambase *)(buffer_ptr[-1].__unbuffered_get_area + 4);
  iVar1 = *(int *)((int)(pfVar4->base).layout_info + 4);
  *(int *)((pfVar4->base).filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
  pvVar2 = (pfVar4->base).layout_info;
  buffer_ptr[1].streambuf.__b_lock = &g_FStreamBase_Destructor;
  *(void ***)(buffer_ptr->__unbuffered_get_area + *(int *)((int)pvVar2 + 4) + -0x10) =
       &g_FStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
            ((streambuf *)
             ((pfVar4->base).filebuf.__unbuffered_get_area +
             *(int *)((int)(pfVar4->base).layout_info + 4) + -0x38),(char *)buffer_ptr,(int)this_ptr
             ,(char *)c1);
  return pfVar4;
}


// Assembly code:
// 0060658f: PUSH EBX
//   Label: crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
// 00606590: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00606594: TEST byte ptr [ESP + 0xc],0x1
//   XREF to: Stack[0x8] (READ)
// 00606599: JZ 0x006065e1
//   XREF to: 006065e1 (CONDITIONAL_JUMP)
// 0060659b: ADD EBX,0x4
//   Label: LAB_0060659b
// 0060659e: PUSH EBX
// 0060659f: CALL crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
//   XREF to: 0060bddd (UNCONDITIONAL_CALL)
// 006065a4: LEA EBX,[EAX + -0x4]
// 006065a7: MOV EDX,dword ptr [EBX]
// 006065a9: MOV EDX,dword ptr [EDX + 0x4]
// 006065ac: LEA EAX,[EBX + EDX*0x1]
// 006065af: MOV dword ptr [EAX + -0x4],EDX
// 006065b2: MOV EAX,dword ptr [EBX]
// 006065b4: MOV dword ptr [EBX + 0x40],0x665ed4
//   XREF to: 00665ed4 (DATA)
// 006065bb: MOV EAX,dword ptr [EAX + 0x4]
// 006065be: ADD ESP,0x4
// 006065c1: MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665edc
//   XREF to: 00665edc (DATA)
// 006065c9: LEA EAX,[EBX + 0x4]
// 006065cc: PUSH EAX
// 006065cd: MOV EAX,dword ptr [EBX]
// 006065cf: MOV EAX,dword ptr [EAX + 0x4]
// 006065d2: ADD EAX,EBX
// 006065d4: PUSH EAX
// 006065d5: CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
//   XREF to: 0060b8da (UNCONDITIONAL_CALL)
// 006065da: ADD ESP,0x8
// 006065dd: MOV EAX,EBX
// 006065df: POP EBX
// 006065e0: RET
// 006065e1: MOV dword ptr [EBX],0x665ec8
//   Label: LAB_006065e1
//   XREF to: 00665ec8 (DATA)
// 006065e7: ADD EBX,0x48
// 006065ea: PUSH EBX
// 006065eb: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 006065f0: ADD ESP,0x4
// 006065f3: LEA EBX,[EAX + -0x48]
// 006065f6: JMP 0x0060659b
//   XREF to: 0060659b (UNCONDITIONAL_JUMP)
