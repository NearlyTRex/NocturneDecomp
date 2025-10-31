// Name: crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
// Address: 005ff95c
// Address Range: [[005ff95c, 005ff9c7]]
// Convention: __cdecl
// Signature: ofstream * crt_fstream.cpp_ofstream_ctor_FUN_005ff95c(ofstream * this_ptr, int c1)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e153e [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0f9f [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor g_OFStream_VirtualBaseLayout
//   WatcomVirtualBaseDescriptor g_OFStream_OStreamSubobjectLayout
//   void* g_OFStream_FStreamBaseDestructor = 005ff7bc
//   void* g_OFStream_OStream = 005ff78e
//   void* g_OFStream_IOS = 005ff7a4
// Function calls:
//   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_ostream_ctor_FUN_006061a2

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(ofstream *this_ptr,int c1)

{
  int iVar1;
  fstreambase *pfVar2;
  ostream *poVar3;
  char *pcVar4;
  ios *piVar5;
  
  if ((c1 & 1U) == 0) {
    (this_ptr->fstreambase_core).layout_info = &g_OFStream_VirtualBaseLayout;
    (this_ptr->ostream_core).layout_info =
         (WatcomInheritanceLayout *)&g_OFStream_OStreamSubobjectLayout;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (ofstream *)&piVar5[-2].__format_flags;
  }
  pfVar2 = crt_fstream_cpp_fstreambase_ctor_FUN_0060658f((fstreambase *)this_ptr,1);
  poVar3 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((ostream *)pfVar2->padding_0x44,1);
  pcVar4 = &poVar3[-2].ios.__fill_character;
  *(int *)(pcVar4 + *(int *)(*(int *)pcVar4 + 4) + -4) = *(int *)(*(int *)pcVar4 + 4);
  poVar3[-1].ios.cleanup_vtable = &g_OFStream_FStreamBaseDestructor;
  iVar1 = *(int *)pcVar4;
  (poVar3->ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
  *(void ***)(pcVar4 + *(int *)(iVar1 + 4) + 0x28) = &g_OFStream_IOS;
  return (ofstream *)pcVar4;
}


// Assembly code:
// 005ff95c: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
//   XREF to: Stack[0x4] (READ)
// 005ff960: TEST byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[0x8] (READ)
// 005ff965: JZ 0x005ff9aa
//   XREF to: 005ff9aa (CONDITIONAL_JUMP)
// 005ff967: PUSH 0x1
//   Label: LAB_005ff967
// 005ff969: PUSH EAX
// 005ff96a: CALL crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
//   XREF to: 0060658f (UNCONDITIONAL_CALL)
// 005ff96f: ADD ESP,0x8
// 005ff972: PUSH 0x1
// 005ff974: ADD EAX,0x44
// 005ff977: PUSH EAX
// 005ff978: CALL crt_iostream.cpp_ostream_ctor_FUN_006061a2
//   XREF to: 006061a2 (UNCONDITIONAL_CALL)
// 005ff97d: SUB EAX,0x44
// 005ff980: MOV EDX,dword ptr [EAX]
// 005ff982: MOV EDX,dword ptr [EDX + 0x4]
// 005ff985: LEA ECX,[EAX + EDX*0x1]
// 005ff988: MOV dword ptr [ECX + -0x4],EDX
// 005ff98b: MOV dword ptr [EAX + 0x40],0x665cd4
//   XREF to: 00665cd4 (DATA)
// 005ff992: MOV EDX,dword ptr [EAX]
// 005ff994: MOV dword ptr [EAX + 0x48],0x665cdc
//   XREF to: 00665cdc (DATA)
// 005ff99b: MOV EDX,dword ptr [EDX + 0x4]
// 005ff99e: ADD ESP,0x8
// 005ff9a1: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665ce4
//   XREF to: 00665ce4 (DATA)
// 005ff9a9: RET
// 005ff9aa: MOV dword ptr [EAX],0x665cc0
//   Label: LAB_005ff9aa
//   XREF to: 00665cc0 (DATA)
// 005ff9b0: ADD EAX,0x50
// 005ff9b3: PUSH EAX
// 005ff9b4: MOV dword ptr [EAX + -0xc],0x665cc8
//   XREF to: 00665cc8 (DATA)
// 005ff9bb: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 005ff9c0: ADD ESP,0x4
// 005ff9c3: SUB EAX,0x50
// 005ff9c6: JMP 0x005ff967
//   XREF to: 005ff967 (UNCONDITIONAL_JUMP)
