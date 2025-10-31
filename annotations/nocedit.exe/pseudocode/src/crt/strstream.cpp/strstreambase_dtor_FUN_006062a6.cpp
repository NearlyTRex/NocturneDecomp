// Name: crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
// Address: 006062a6
// Address Range: [[006062a6, 0060632b]]
// Convention: __cdecl
// Signature: strstreambase * crt_strstream.cpp_strstreambase_dtor_FUN_006062a6(strstreambase * this_ptr, uint d1, uint d2, uint d3)
// Cross-references:
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca (005ff5ca) at 005ff610 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a (005ff48a) at 005ff4d0 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambase_destructor_thunk_FUN_0060618a (0060618a) at 00606199 [UNCONDITIONAL_CALL]
// Globals:
//   void* g_StrStreamBase_Destructor = 006062a6
//   void* g_StrStreamBase_IOSDestructor = 0060618a
//   WatcomTypeInfo g_StrStreamBaseTypeInfo
// Function calls:
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

strstreambase * __cdecl
crt_strstream_cpp_strstreambase_dtor_FUN_006062a6(strstreambase *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  strstreambuf *psVar3;
  void *ptr;
  ios *piVar4;
  uint unaff_retaddr;
  
  if ((d1 & 4) == 0) {
    iVar1 = ((this_ptr->strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)(this_ptr->padding + iVar1 + -0x48) = iVar1;
    pWVar2 = (this_ptr->strstreambase_core).layout_info;
    *(void ***)this_ptr->padding = &g_StrStreamBase_Destructor;
    *(void ***)(this_ptr->padding + pWVar2->offset_to_vbase + -0x1c) =
         &g_StrStreamBase_IOSDestructor;
    psVar3 = crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f
                       (&(this_ptr->strstreambase_core).strstreambuf,0);
    this_ptr = (strstreambase *)&psVar3[-1].__minbuf_size;
    if ((d2 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c
                         ((ios *)&psVar3[1].streambuf.__get_base,1,unaff_retaddr);
      this_ptr = (strstreambase *)&piVar4[-2].__error_state;
    }
    if ((d3 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_StrStreamBaseTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}


// Assembly code:
// 006062a6: PUSH EBX
//   Label: crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
// 006062a7: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006062ab: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 006062b0: JNZ 0x006062f6
//   XREF to: 006062f6 (CONDITIONAL_JUMP)
// 006062b2: MOV EAX,dword ptr [EBX]
// 006062b4: MOV EAX,dword ptr [EAX + 0x4]
// 006062b7: LEA EDX,[EBX + EAX*0x1]
// 006062ba: MOV dword ptr [EDX + -0x4],EAX
// 006062bd: PUSH 0x0
// 006062bf: MOV EAX,dword ptr [EBX]
// 006062c1: MOV dword ptr [EBX + 0x44],0x665d6c
//   XREF to: 00665d6c (DATA)
// 006062c8: ADD EBX,0x4
// 006062cb: MOV EAX,dword ptr [EAX + 0x4]
// 006062ce: PUSH EBX
// 006062cf: MOV dword ptr [EBX + EAX*0x1 + 0x24],0x665d74
//   XREF to: 00665d74 (DATA)
// 006062d7: CALL crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f
//   XREF to: 0060bb7f (UNCONDITIONAL_CALL)
// 006062dc: ADD ESP,0x8
// 006062df: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 006062e3: LEA EBX,[EAX + -0x4]
// 006062e6: TEST DL,0x1
// 006062e9: JZ 0x00606311
//   XREF to: 00606311 (CONDITIONAL_JUMP)
// 006062eb: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_006062eb
//   XREF to: Stack[0x8] (READ)
// 006062f0: JNZ 0x00606324
//   XREF to: 00606324 (CONDITIONAL_JUMP)
// 006062f2: MOV EAX,EBX
// 006062f4: POP EBX
// 006062f5: RET
// 006062f6: PUSH 0x665e30
//   Label: LAB_006062f6
//   XREF to: 00665e30 (DATA)
// 006062fb: PUSH EBX
// 006062fc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00606301: ADD ESP,0x8
// 00606304: PUSH EAX
// 00606305: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0060630a: ADD ESP,0x4
//   Label: LAB_0060630a
// 0060630d: MOV EAX,EBX
// 0060630f: POP EBX
// 00606310: RET
// 00606311: PUSH 0x1
//   Label: LAB_00606311
// 00606313: ADD EBX,0x4c
// 00606316: PUSH EBX
// 00606317: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 0060631c: ADD ESP,0x8
// 0060631f: LEA EBX,[EAX + -0x4c]
// 00606322: JMP 0x006062eb
//   XREF to: 006062eb (UNCONDITIONAL_JUMP)
// 00606324: PUSH EBX
//   Label: LAB_00606324
// 00606325: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0060632a: JMP 0x0060630a
//   XREF to: 0060630a (UNCONDITIONAL_JUMP)
