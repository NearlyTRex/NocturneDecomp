// Name: crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
// Address: 006060fe
// Address Range: [[006060fe, 00606189]]
// Convention: __cdecl
// Signature: strstreambase * crt_strstream.cpp_strstreambase_constructor_FUN_006060fe(strstreambase * this_ptr, int ctor_flags, char * buffer, int size, char * pstart)
// Cross-references:
//   crt_strstream.cpp_istrstream_constructor_FUN_005ff524 (005ff524) at 005ff53e [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 (005ff384) at 005ff3c3 [UNCONDITIONAL_CALL]
// Globals:
//   strstreambuf_vtable g_StrstreambufVTable
//   WatcomVirtualBaseDescriptor DAT_00665d60
//   void* g_StrStreamBase_Destructor = 006062a6
//   void* g_StrStreamBase_IOSDestructor = 0060618a
// Function calls:
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
//   crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
//   crt_strstream.cpp_strstreambuf_init_FUN_0060b815

#include "nocturne.h"

strstreambase * __cdecl
crt_strstream_cpp_strstreambase_constructor_FUN_006060fe
          (strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart)

{
  int iVar1;
  strstreambuf *this_ptr_00;
  ios *piVar2;
  strstreambase *psVar3;
  short *psVar4;
  int in_stack_00000018;
  char *in_stack_0000001c;
  
  psVar3 = this_ptr;
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->strstreambase_core).layout_info = &DAT_00665d60;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)&(this_ptr->ios).__tied_stream);
    psVar3 = (strstreambase *)&piVar2[-2].__error_state;
  }
  this_ptr_00 = (strstreambuf *)
                crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2
                          (&(psVar3->strstreambase_core).strstreambuf.streambuf);
  psVar4 = &this_ptr_00[-1].__minbuf_size;
  this_ptr_00->__vtable = &g_StrstreambufVTable;
  crt_strstream_cpp_strstreambuf_init_FUN_0060b815
            (this_ptr_00,pstart,in_stack_00000018,in_stack_0000001c);
  *(int *)((int)psVar4 + *(int *)(*(int *)psVar4 + 4) + -4) = *(int *)(*(int *)psVar4 + 4);
  iVar1 = *(int *)psVar4;
  this_ptr_00[1].streambuf.__reserve_base = (char *)&g_StrStreamBase_Destructor;
  *(void ***)((int)&(this_ptr_00->streambuf).__flags + *(int *)(iVar1 + 4)) =
       &g_StrStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
            ((streambuf *)((int)psVar4 + *(int *)(*(int *)psVar4 + 4)),(char *)this_ptr_00,
             (int)this_ptr,(char *)ctor_flags);
  return (strstreambase *)psVar4;
}


// Assembly code:
// 006060fe: PUSH EBX
//   Label: crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
// 006060ff: PUSH ESI
// 00606100: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00606104: TEST byte ptr [ESP + 0x10],0x1
//   XREF to: Stack[0x8] (READ)
// 00606109: JZ 0x00606173
//   XREF to: 00606173 (CONDITIONAL_JUMP)
// 0060610b: ADD EBX,0x4
//   Label: LAB_0060610b
// 0060610e: PUSH EBX
// 0060610f: CALL crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
//   XREF to: 0060b7c2 (UNCONDITIONAL_CALL)
// 00606114: ADD ESP,0x4
// 00606117: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0060611b: PUSH EDX
// 0060611c: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00606120: PUSH ECX
// 00606121: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00606125: PUSH ESI
// 00606126: MOV EBX,EAX
// 00606128: PUSH EAX
// 00606129: SUB EBX,0x4
// 0060612c: MOV dword ptr [EAX + 0x28],0x665d34
//   XREF to: 00665d34 (DATA)
// 00606133: CALL crt_strstream.cpp_strstreambuf_init_FUN_0060b815
//   XREF to: 0060b815 (UNCONDITIONAL_CALL)
// 00606138: MOV EAX,dword ptr [EBX]
// 0060613a: MOV EAX,dword ptr [EAX + 0x4]
// 0060613d: LEA EDX,[EBX + EAX*0x1]
// 00606140: MOV dword ptr [EDX + -0x4],EAX
// 00606143: MOV EAX,dword ptr [EBX]
// 00606145: MOV dword ptr [EBX + 0x44],0x665d6c
//   XREF to: 00665d6c (DATA)
// 0060614c: MOV EAX,dword ptr [EAX + 0x4]
// 0060614f: ADD ESP,0x10
// 00606152: MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665d74
//   XREF to: 00665d74 (DATA)
// 0060615a: LEA EAX,[EBX + 0x4]
// 0060615d: PUSH EAX
// 0060615e: MOV EAX,dword ptr [EBX]
// 00606160: MOV EAX,dword ptr [EAX + 0x4]
// 00606163: ADD EAX,EBX
// 00606165: PUSH EAX
// 00606166: CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
//   XREF to: 0060b8da (UNCONDITIONAL_CALL)
// 0060616b: ADD ESP,0x8
// 0060616e: MOV EAX,EBX
// 00606170: POP ESI
// 00606171: POP EBX
// 00606172: RET
// 00606173: MOV dword ptr [EBX],0x665d60
//   Label: LAB_00606173
//   XREF to: 00665d60 (DATA)
// 00606179: ADD EBX,0x4c
// 0060617c: PUSH EBX
// 0060617d: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 00606182: ADD ESP,0x4
// 00606185: LEA EBX,[EAX + -0x4c]
// 00606188: JMP 0x0060610b
//   XREF to: 0060610b (UNCONDITIONAL_JUMP)
