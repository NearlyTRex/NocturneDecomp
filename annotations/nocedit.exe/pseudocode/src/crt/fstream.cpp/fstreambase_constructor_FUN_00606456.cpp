// Name: crt_fstream.cpp_fstreambase_constructor_FUN_00606456
// Address: 00606456
// Address Range: [[00606456, 006064f0]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_fstreambase_constructor_FUN_00606456(fstreambase * this_ptr, int ctor_flags, int fd, int mode, char * buffer, SIZE_T buffer_size)
// Cross-references:
//   crt_fstream.cpp_ifstream_constructor_FUN_005ff664 (005ff664) at 005ff684 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_constructor_FUN_005ff710 (005ff710) at 005ff730 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor g_FStreamBase_VirtualBaseLayout
//   void* g_FStreamBase_Destructor = 00606509
//   void* g_FStreamBase_IOSDestructor = 006064f1
// Function calls:
//   crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
//   crt_fstream.cpp_filebuf_open_FUN_00608c15
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
//   crt_stdio.c_reportStreamError_FUN_00606020

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_fstreambase_constructor_FUN_00606456
          (fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size)

{
  char *pcVar1;
  ios *piVar2;
  filebuf *this_ptr_00;
  int iVar3;
  int unaff_EBX;
  char *unaff_retaddr;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->base).layout_info = &g_FStreamBase_VirtualBaseLayout;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios_base);
    this_ptr = (fstreambase *)&piVar2[-2].__enabled_exceptions;
  }
  this_ptr_00 = crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(&(this_ptr->base).filebuf);
  pcVar1 = this_ptr_00[-1].__unbuffered_get_area + 4;
  *(int *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4) + -4) = *(int *)(*(int *)pcVar1 + 4);
  iVar3 = *(int *)pcVar1;
  this_ptr_00[1].streambuf.__b_lock = &g_FStreamBase_Destructor;
  *(void ***)(this_ptr_00->__unbuffered_get_area + *(int *)(iVar3 + 4) + -0x10) =
       &g_FStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
            ((streambuf *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),(char *)this_ptr_00,unaff_EBX,
             unaff_retaddr);
  iVar3 = crt_fstream_cpp_filebuf_open_FUN_00608c15
                    (this_ptr_00,(char *)buffer_size,in_stack_0000001c,in_stack_00000020);
  if (iVar3 == 0) {
    crt_stdio_c_reportStreamError_FUN_00606020
              ((FileEmbeddedData *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),3);
  }
  return;
}


// Assembly code:
// 00606456: PUSH EBX
//   Label: crt_fstream.cpp_fstreambase_constructor_FUN_00606456
// 00606457: PUSH ESI
// 00606458: PUSH EDI
// 00606459: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060645d: TEST byte ptr [ESP + 0x14],0x1
//   XREF to: Stack[0x8] (READ)
// 00606462: JNZ 0x00606479
//   XREF to: 00606479 (CONDITIONAL_JUMP)
// 00606464: MOV dword ptr [EBX],0x665ec8
//   XREF to: 00665ec8 (DATA)
// 0060646a: ADD EBX,0x48
// 0060646d: PUSH EBX
// 0060646e: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 00606473: ADD ESP,0x4
// 00606476: LEA EBX,[EAX + -0x48]
// 00606479: ADD EBX,0x4
//   Label: LAB_00606479
// 0060647c: PUSH EBX
// 0060647d: CALL crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
//   XREF to: 0060bddd (UNCONDITIONAL_CALL)
// 00606482: LEA EBX,[EAX + -0x4]
// 00606485: MOV EAX,dword ptr [EBX]
// 00606487: MOV EAX,dword ptr [EAX + 0x4]
// 0060648a: LEA ESI,[EBX + EAX*0x1]
// 0060648d: MOV dword ptr [ESI + -0x4],EAX
// 00606490: MOV EAX,dword ptr [EBX]
// 00606492: MOV dword ptr [EBX + 0x40],0x665ed4
//   XREF to: 00665ed4 (DATA)
// 00606499: MOV EAX,dword ptr [EAX + 0x4]
// 0060649c: MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665edc
//   XREF to: 00665edc (DATA)
// 006064a4: MOV EAX,dword ptr [EBX]
// 006064a6: ADD ESP,0x4
// 006064a9: LEA ESI,[EBX + 0x4]
// 006064ac: MOV EAX,dword ptr [EAX + 0x4]
// 006064af: PUSH ESI
// 006064b0: ADD EAX,EBX
// 006064b2: PUSH EAX
// 006064b3: CALL crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
//   XREF to: 0060b8da (UNCONDITIONAL_CALL)
// 006064b8: ADD ESP,0x8
// 006064bb: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 006064bf: PUSH EDX
// 006064c0: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 006064c4: PUSH ECX
// 006064c5: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 006064c9: PUSH EDI
// 006064ca: PUSH ESI
// 006064cb: CALL crt_fstream.cpp_filebuf_open_FUN_00608c15
//   XREF to: 00608c15 (UNCONDITIONAL_CALL)
// 006064d0: ADD ESP,0x10
// 006064d3: TEST EAX,EAX
// 006064d5: JZ 0x006064dd
//   XREF to: 006064dd (CONDITIONAL_JUMP)
// 006064d7: MOV EAX,EBX
//   Label: LAB_006064d7
// 006064d9: POP EDI
// 006064da: POP ESI
// 006064db: POP EBX
// 006064dc: RET
// 006064dd: MOV EAX,dword ptr [EBX]
//   Label: LAB_006064dd
// 006064df: MOV EAX,dword ptr [EAX + 0x4]
// 006064e2: PUSH 0x3
// 006064e4: ADD EAX,EBX
// 006064e6: PUSH EAX
// 006064e7: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 006064ec: ADD ESP,0x8
// 006064ef: JMP 0x006064d7
//   XREF to: 006064d7 (UNCONDITIONAL_JUMP)
