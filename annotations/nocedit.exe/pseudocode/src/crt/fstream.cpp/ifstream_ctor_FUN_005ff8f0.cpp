// Name: crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
// Address: 005ff8f0
// Address Range: [[005ff8f0, 005ff95b]]
// Convention: __cdecl
// Signature: ifstream * crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0(ifstream * this_ptr, int c1)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e152c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0f8e [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor g_IFStream_LayoutInfo
//   WatcomVirtualBaseDescriptor g_IFStream_IStreamSubobjectLayout
//   void* g_IFStream_FStreamBaseDestructor = 005ff856
//   void* g_IFStream_IStreamDestructor = 005ff6e2
//   void* g_IFStream_IOSDestructor = 005ff6f8
// Function calls:
//   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_istream_ctor_FUN_00606376

#include "nocturne.h"

ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(ifstream *this_ptr,int c1)

{
  void *pvVar1;
  fstreambase *pfVar2;
  istream *piVar3;
  void **ppvVar4;
  ios *piVar5;
  
  if ((c1 & 1U) == 0) {
    (this_ptr->fstreambase_core).layout_info = &g_IFStream_LayoutInfo;
    (this_ptr->istream_core).layout_info =
         (WatcomInheritanceLayout *)&g_IFStream_IStreamSubobjectLayout;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (ifstream *)&piVar5[-2].__tied_stream;
  }
  pfVar2 = crt_fstream_cpp_fstreambase_ctor_FUN_0060658f((fstreambase *)this_ptr,1);
  piVar3 = crt_iostream_cpp_istream_ctor_FUN_00606376((istream *)pfVar2->padding_0x44,1);
  ppvVar4 = &piVar3[-2].ios.__i_lock;
  *(int *)((int)ppvVar4 + *(int *)((int)*ppvVar4 + 4) + -4) = *(int *)((int)*ppvVar4 + 4);
  piVar3[-1].ios.cleanup_vtable = &g_IFStream_FStreamBaseDestructor;
  pvVar1 = *ppvVar4;
  (piVar3->istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&g_IFStream_IStreamDestructor;
  *(void ***)((int)ppvVar4 + *(int *)((int)pvVar1 + 4) + 0x28) = &g_IFStream_IOSDestructor;
  return (ifstream *)ppvVar4;
}


// Assembly code:
// 005ff8f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
//   XREF to: Stack[0x4] (READ)
// 005ff8f4: TEST byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[0x8] (READ)
// 005ff8f9: JZ 0x005ff93e
//   XREF to: 005ff93e (CONDITIONAL_JUMP)
// 005ff8fb: PUSH 0x1
//   Label: LAB_005ff8fb
// 005ff8fd: PUSH EAX
// 005ff8fe: CALL crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
//   XREF to: 0060658f (UNCONDITIONAL_CALL)
// 005ff903: ADD ESP,0x8
// 005ff906: PUSH 0x1
// 005ff908: ADD EAX,0x44
// 005ff90b: PUSH EAX
// 005ff90c: CALL crt_iostream.cpp_istream_ctor_FUN_00606376
//   XREF to: 00606376 (UNCONDITIONAL_CALL)
// 005ff911: SUB EAX,0x44
// 005ff914: MOV EDX,dword ptr [EAX]
// 005ff916: MOV EDX,dword ptr [EDX + 0x4]
// 005ff919: LEA ECX,[EAX + EDX*0x1]
// 005ff91c: MOV dword ptr [ECX + -0x4],EDX
// 005ff91f: MOV dword ptr [EAX + 0x40],0x665c68
//   XREF to: 00665c68 (DATA)
// 005ff926: MOV EDX,dword ptr [EAX]
// 005ff928: MOV dword ptr [EAX + 0x4c],0x665c70
//   XREF to: 00665c70 (DATA)
// 005ff92f: MOV EDX,dword ptr [EDX + 0x4]
// 005ff932: ADD ESP,0x8
// 005ff935: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665c78
//   XREF to: 00665c78 (DATA)
// 005ff93d: RET
// 005ff93e: MOV dword ptr [EAX],0x665c54
//   Label: LAB_005ff93e
//   XREF to: 00665c54 (DATA)
// 005ff944: ADD EAX,0x54
// 005ff947: PUSH EAX
// 005ff948: MOV dword ptr [EAX + -0x10],0x665c5c
//   XREF to: 00665c5c (DATA)
// 005ff94f: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 005ff954: ADD ESP,0x4
// 005ff957: SUB EAX,0x54
// 005ff95a: JMP 0x005ff8fb
//   XREF to: 005ff8fb (UNCONDITIONAL_JUMP)
