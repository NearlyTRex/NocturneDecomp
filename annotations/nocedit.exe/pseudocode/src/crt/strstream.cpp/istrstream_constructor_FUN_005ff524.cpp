// Name: crt_strstream.cpp_istrstream_constructor_FUN_005ff524
// Address: 005ff524
// Address Range: [[005ff524, 005ff59b]]
// Convention: __cdecl
// Signature: istrstream * crt_strstream.cpp_istrstream_constructor_FUN_005ff524(istrstream * this_ptr, int ctor_flags, char * buffer, int size)
// Cross-references:
//   support_codec.cpp_CCodec_processBuffer_FUN_0043eba0 (0043eba0) at 0043ebc3 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30 (0043eb30) at 0043eb52 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor g_IstrstreamLayoutInfo
//   int g_Istrstream_IstreamLastReadLength = 0x48
//   WatcomThunkedDestructor PTR_FUN_00665bf4
//   WatcomThunkedDestructor PTR_FUN_00665bfc
//   WatcomThunkedDestructorDirect PTR_FUN_00665c04
// Function calls:
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_istream_ctor_FUN_00606376
//   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe

#include "nocturne.h"

istrstream * __cdecl
crt_strstream_cpp_istrstream_constructor_FUN_005ff524
          (istrstream *this_ptr,int ctor_flags,char *buffer,int size)

{
  int iVar1;
  strstreambase *psVar2;
  istream *piVar3;
  char *pcVar4;
  ios *piVar5;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->strstreambase_core).layout_info = &g_IstrstreamLayoutInfo;
    (this_ptr->istream_core).__last_read_length = (int)&g_Istrstream_IstreamLastReadLength;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (istrstream *)(piVar5 + -2);
  }
  psVar2 = crt_strstream_cpp_strstreambase_constructor_FUN_006060fe
                     ((strstreambase *)this_ptr,1,buffer,size,(char *)0x0);
  piVar3 = crt_iostream_cpp_istream_ctor_FUN_00606376((istream *)&psVar2->ios,1);
  pcVar4 = &piVar3[-2].ios.__fill_character;
  *(int *)(pcVar4 + *(int *)(*(int *)pcVar4 + 4) + -4) = *(int *)(*(int *)pcVar4 + 4);
  piVar3[-1].ios.cleanup_vtable = &PTR_FUN_00665bf4.destructor_func;
  iVar1 = *(int *)pcVar4;
  (piVar3->istream_core).destructor_vtable = &PTR_FUN_00665bfc;
  *(WatcomThunkedDestructorDirect **)(pcVar4 + *(int *)(iVar1 + 4) + 0x28) = &PTR_FUN_00665c04;
  return (istrstream *)pcVar4;
}


// Assembly code:
// 005ff524: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_istrstream_constructor_FUN_005ff524
//   XREF to: Stack[0x4] (READ)
// 005ff528: TEST byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[0x8] (READ)
// 005ff52d: JZ 0x005ff57e
//   XREF to: 005ff57e (CONDITIONAL_JUMP)
// 005ff52f: PUSH 0x0
//   Label: LAB_005ff52f
// 005ff531: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005ff535: PUSH EDX
// 005ff536: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005ff53a: PUSH ECX
// 005ff53b: PUSH 0x1
// 005ff53d: PUSH EAX
// 005ff53e: CALL crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
//   XREF to: 006060fe (UNCONDITIONAL_CALL)
// 005ff543: ADD ESP,0x14
// 005ff546: PUSH 0x1
// 005ff548: ADD EAX,0x48
// 005ff54b: PUSH EAX
// 005ff54c: CALL crt_iostream.cpp_istream_ctor_FUN_00606376
//   XREF to: 00606376 (UNCONDITIONAL_CALL)
// 005ff551: SUB EAX,0x48
// 005ff554: MOV EDX,dword ptr [EAX]
// 005ff556: MOV ECX,dword ptr [EDX + 0x4]
// 005ff559: LEA EDX,[EAX + ECX*0x1]
// 005ff55c: MOV dword ptr [EDX + -0x4],ECX
// 005ff55f: MOV dword ptr [EAX + 0x44],0x665bf4
//   XREF to: 00665bf4 (DATA)
// 005ff566: MOV EDX,dword ptr [EAX]
// 005ff568: MOV dword ptr [EAX + 0x50],0x665bfc
//   XREF to: 00665bfc (DATA)
// 005ff56f: MOV EDX,dword ptr [EDX + 0x4]
// 005ff572: ADD ESP,0x8
// 005ff575: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665c04
//   XREF to: 00665c04 (DATA)
// 005ff57d: RET
// 005ff57e: MOV dword ptr [EAX],0x665be0
//   Label: LAB_005ff57e
//   XREF to: 00665be0 (DATA)
// 005ff584: ADD EAX,0x58
// 005ff587: PUSH EAX
// 005ff588: MOV dword ptr [EAX + -0x10],0x665be8
//   XREF to: 00665be8 (DATA)
// 005ff58f: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 005ff594: ADD ESP,0x4
// 005ff597: SUB EAX,0x58
// 005ff59a: JMP 0x005ff52f
//   XREF to: 005ff52f (UNCONDITIONAL_JUMP)
