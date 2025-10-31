// Name: crt_fstream.cpp_ofstream_constructor_FUN_005ff710
// Address: 005ff710
// Address Range: [[005ff710, 005ff78d]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ofstream_constructor_FUN_005ff710(ofstream * this_ptr, int ctor_flags, int fd, int mode, char * buffer, SIZE_T buffer_size)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452a7e [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 (0043ec30) at 0043ec8d [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor g_OFStream_VirtualBaseLayout
//   WatcomVirtualBaseDescriptor g_OFStream_OStreamSubobjectLayout
//   void* g_OFStream_FStreamBaseDestructor = 005ff7bc
//   void* g_OFStream_OStream = 005ff78e
//   void* g_OFStream_IOS = 005ff7a4
// Function calls:
//   crt_fstream.cpp_fstreambase_constructor_FUN_00606456
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_ostream_ctor_FUN_006061a2

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ofstream_constructor_FUN_005ff710
          (ofstream *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size)

{
  int iVar1;
  int extraout_EAX;
  ostream *poVar2;
  char *pcVar3;
  ios *piVar4;
  SIZE_T unaff_retaddr;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->fstreambase_core).layout_info = &g_OFStream_VirtualBaseLayout;
    (this_ptr->ostream_core).layout_info =
         (WatcomInheritanceLayout *)&g_OFStream_OStreamSubobjectLayout;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (ofstream *)&piVar4[-2].__format_flags;
  }
  crt_fstream_cpp_fstreambase_constructor_FUN_00606456
            ((fstreambase *)this_ptr,1,fd,mode | 2,buffer,unaff_retaddr);
  poVar2 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((ostream *)(extraout_EAX + 0x44),1);
  pcVar3 = &poVar2[-2].ios.__fill_character;
  *(void **)(pcVar3 + (int)*(void **)(*(int *)pcVar3 + 4) + -4) = *(void **)(*(int *)pcVar3 + 4);
  poVar2[-1].ios.cleanup_vtable = &g_OFStream_FStreamBaseDestructor;
  iVar1 = *(int *)pcVar3;
  (poVar2->ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
  *(void ***)(pcVar3 + *(int *)(iVar1 + 4) + 0x28) = &g_OFStream_IOS;
  return;
}


// Assembly code:
// 005ff710: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ofstream_constructor_FUN_005ff710
//   XREF to: Stack[0x4] (READ)
// 005ff714: TEST byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[0x8] (READ)
// 005ff719: JZ 0x005ff770
//   XREF to: 005ff770 (CONDITIONAL_JUMP)
// 005ff71b: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_005ff71b
//   XREF to: Stack[0x14] (READ)
// 005ff71f: PUSH EDX
// 005ff720: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005ff724: OR DL,0x2
// 005ff727: PUSH EDX
// 005ff728: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005ff72c: PUSH ECX
// 005ff72d: PUSH 0x1
// 005ff72f: PUSH EAX
// 005ff730: CALL crt_fstream.cpp_fstreambase_constructor_FUN_00606456
//   XREF to: 00606456 (UNCONDITIONAL_CALL)
// 005ff735: ADD ESP,0x14
// 005ff738: PUSH 0x1
// 005ff73a: ADD EAX,0x44
// 005ff73d: PUSH EAX
// 005ff73e: CALL crt_iostream.cpp_ostream_ctor_FUN_006061a2
//   XREF to: 006061a2 (UNCONDITIONAL_CALL)
// 005ff743: SUB EAX,0x44
// 005ff746: MOV EDX,dword ptr [EAX]
// 005ff748: MOV EDX,dword ptr [EDX + 0x4]
// 005ff74b: LEA ECX,[EAX + EDX*0x1]
// 005ff74e: MOV dword ptr [ECX + -0x4],EDX
// 005ff751: MOV dword ptr [EAX + 0x40],0x665cd4
//   XREF to: 00665cd4 (DATA)
// 005ff758: MOV EDX,dword ptr [EAX]
// 005ff75a: MOV dword ptr [EAX + 0x48],0x665cdc
//   XREF to: 00665cdc (DATA)
// 005ff761: MOV EDX,dword ptr [EDX + 0x4]
// 005ff764: ADD ESP,0x8
// 005ff767: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665ce4
//   XREF to: 00665ce4 (DATA)
// 005ff76f: RET
// 005ff770: MOV dword ptr [EAX],0x665cc0
//   Label: LAB_005ff770
//   XREF to: 00665cc0 (DATA)
// 005ff776: ADD EAX,0x50
// 005ff779: PUSH EAX
// 005ff77a: MOV dword ptr [EAX + -0xc],0x665cc8
//   XREF to: 00665cc8 (DATA)
// 005ff781: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 005ff786: ADD ESP,0x4
// 005ff789: SUB EAX,0x50
// 005ff78c: JMP 0x005ff71b
//   XREF to: 005ff71b (UNCONDITIONAL_JUMP)
