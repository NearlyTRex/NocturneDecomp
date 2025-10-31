// Name: crt_fstream.cpp_ifstream_constructor_FUN_005ff664
// Address: 005ff664
// Address Range: [[005ff664, 005ff6e1]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ifstream_constructor_FUN_005ff664(ifstream * this_ptr, int ctor_flags, int fd, char * buffer, int buffer_len)
// Cross-references:
//   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 (0043ec30) at 0043ec5c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor g_IFStream_LayoutInfo
//   WatcomVirtualBaseDescriptor g_IFStream_IStreamSubobjectLayout
//   void* g_IFStream_FStreamBaseDestructor = 005ff856
//   void* g_IFStream_IStreamDestructor = 005ff6e2
//   void* g_IFStream_IOSDestructor = 005ff6f8
// Function calls:
//   crt_fstream.cpp_fstreambase_constructor_FUN_00606456
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_istream_ctor_FUN_00606376

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ifstream_constructor_FUN_005ff664
          (ifstream *this_ptr,int ctor_flags,int fd,char *buffer,int buffer_len)

{
  void *pvVar1;
  int extraout_EAX;
  istream *piVar2;
  void **ppvVar3;
  ios *piVar4;
  SIZE_T unaff_retaddr;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->fstreambase_core).layout_info = &g_IFStream_LayoutInfo;
    (this_ptr->istream_core).layout_info =
         (WatcomInheritanceLayout *)&g_IFStream_IStreamSubobjectLayout;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (ifstream *)&piVar4[-2].__tied_stream;
  }
  crt_fstream_cpp_fstreambase_constructor_FUN_00606456
            ((fstreambase *)this_ptr,1,fd,(uint)buffer | 1,(char *)buffer_len,unaff_retaddr);
  piVar2 = crt_iostream_cpp_istream_ctor_FUN_00606376((istream *)(extraout_EAX + 0x44),1);
  ppvVar3 = &piVar2[-2].ios.__i_lock;
  *(int *)((int)ppvVar3 + *(int *)((int)*ppvVar3 + 4) + -4) = *(int *)((int)*ppvVar3 + 4);
  piVar2[-1].ios.cleanup_vtable = &g_IFStream_FStreamBaseDestructor;
  pvVar1 = *ppvVar3;
  (piVar2->istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&g_IFStream_IStreamDestructor;
  *(void ***)(*(int *)((int)pvVar1 + 4) + 0x28 + (int)ppvVar3) = &g_IFStream_IOSDestructor;
  return;
}


// Assembly code:
// 005ff664: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ifstream_constructor_FUN_005ff664
//   XREF to: Stack[0x4] (READ)
// 005ff668: TEST byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[0x8] (READ)
// 005ff66d: JZ 0x005ff6c4
//   XREF to: 005ff6c4 (CONDITIONAL_JUMP)
// 005ff66f: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_005ff66f
//   XREF to: Stack[0x14] (READ)
// 005ff673: PUSH EDX
// 005ff674: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005ff678: OR DL,0x1
// 005ff67b: PUSH EDX
// 005ff67c: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005ff680: PUSH ECX
// 005ff681: PUSH 0x1
// 005ff683: PUSH EAX
// 005ff684: CALL crt_fstream.cpp_fstreambase_constructor_FUN_00606456
//   XREF to: 00606456 (UNCONDITIONAL_CALL)
// 005ff689: ADD ESP,0x14
// 005ff68c: PUSH 0x1
// 005ff68e: ADD EAX,0x44
// 005ff691: PUSH EAX
// 005ff692: CALL crt_iostream.cpp_istream_ctor_FUN_00606376
//   XREF to: 00606376 (UNCONDITIONAL_CALL)
// 005ff697: SUB EAX,0x44
// 005ff69a: MOV EDX,dword ptr [EAX]
// 005ff69c: MOV EDX,dword ptr [EDX + 0x4]
// 005ff69f: LEA ECX,[EAX + EDX*0x1]
// 005ff6a2: MOV dword ptr [ECX + -0x4],EDX
// 005ff6a5: MOV dword ptr [EAX + 0x40],0x665c68
//   XREF to: 00665c68 (DATA)
// 005ff6ac: MOV EDX,dword ptr [EAX]
// 005ff6ae: MOV dword ptr [EAX + 0x4c],0x665c70
//   XREF to: 00665c70 (DATA)
// 005ff6b5: MOV EDX,dword ptr [EDX + 0x4]
// 005ff6b8: ADD ESP,0x8
// 005ff6bb: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665c78
//   XREF to: 00665c78 (DATA)
// 005ff6c3: RET
// 005ff6c4: MOV dword ptr [EAX],0x665c54
//   Label: LAB_005ff6c4
//   XREF to: 00665c54 (DATA)
// 005ff6ca: ADD EAX,0x54
// 005ff6cd: PUSH EAX
// 005ff6ce: MOV dword ptr [EAX + -0x10],0x665c5c
//   XREF to: 00665c5c (DATA)
// 005ff6d5: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 005ff6da: ADD ESP,0x4
// 005ff6dd: SUB EAX,0x54
// 005ff6e0: JMP 0x005ff66f
//   XREF to: 005ff66f (UNCONDITIONAL_JUMP)
