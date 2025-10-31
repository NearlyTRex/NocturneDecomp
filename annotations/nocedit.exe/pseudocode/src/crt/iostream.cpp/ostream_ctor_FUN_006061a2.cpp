// Name: crt_iostream.cpp_ostream_ctor_FUN_006061a2
// Address: 006061a2
// Address Range: [[006061a2, 006061e3]]
// Convention: __cdecl
// Signature: ostream * crt_iostream.cpp_ostream_ctor_FUN_006061a2(ostream * this_ptr, uint c1)
// Cross-references:
//   crt_fstream.cpp_ofstream_constructor_FUN_005ff710 (005ff710) at 005ff73e [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c (005ff95c) at 005ff978 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 (005ff384) at 005ff3d1 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665db8
//   void* g_OStream_Destructor = 00606231
//   void* g_OStream_IOSDestructor = 006061e4
// Function calls:
//   crt_iostream.cpp_ios_ctor_FUN_006061fc

#include "nocturne.h"

ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_006061a2(ostream *this_ptr,uint c1)

{
  int iVar1;
  ios *piVar2;
  
  if ((c1 & 1) == 0) {
    (this_ptr->ostream_core).layout_info = (WatcomInheritanceLayout *)&DAT_00665db8;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (ostream *)&piVar2[-1].__fill_character;
  }
  iVar1 = ((this_ptr->ostream_core).layout_info)->offset_to_base;
  *(int *)((this_ptr->ios).padding + iVar1 + -0x31) = iVar1;
  (this_ptr->ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OStream_Destructor;
  *(void ***)((this_ptr->ios).padding + ((this_ptr->ostream_core).layout_info)->offset_to_base + -5)
       = &g_OStream_IOSDestructor;
  return this_ptr;
}


// Assembly code:
// 006061a2: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_ostream_ctor_FUN_006061a2
//   XREF to: Stack[0x4] (READ)
// 006061a6: TEST byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[0x8] (READ)
// 006061ab: JZ 0x006061cd
//   XREF to: 006061cd (CONDITIONAL_JUMP)
// 006061ad: MOV EDX,dword ptr [EAX]
//   Label: LAB_006061ad
// 006061af: MOV EDX,dword ptr [EDX + 0x4]
// 006061b2: LEA ECX,[EAX + EDX*0x1]
// 006061b5: MOV dword ptr [ECX + -0x4],EDX
// 006061b8: MOV EDX,dword ptr [EAX]
// 006061ba: MOV dword ptr [EAX + 0x4],0x665dc4
//   XREF to: 00665dc4 (DATA)
// 006061c1: MOV EDX,dword ptr [EDX + 0x4]
// 006061c4: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665dcc
//   XREF to: 00665dcc (DATA)
// 006061cc: RET
// 006061cd: MOV dword ptr [EAX],0x665db8
//   Label: LAB_006061cd
//   XREF to: 00665db8 (DATA)
// 006061d3: ADD EAX,0xc
// 006061d6: PUSH EAX
// 006061d7: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 006061dc: ADD ESP,0x4
// 006061df: SUB EAX,0xc
// 006061e2: JMP 0x006061ad
//   XREF to: 006061ad (UNCONDITIONAL_JUMP)
