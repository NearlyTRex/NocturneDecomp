// Name: crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
// Address: 005ff384
// Address Range: [[005ff384, 005ff42e]]
// Convention: __cdecl
// Signature: ostrstream * crt_strstream.cpp_ostrstream_ctor_FUN_005ff384(ostrstream * this_ptr, int flags, char * buffer, int buffer_size, int mode)
// Cross-references:
//   support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50 (0043ed50) at 0043ed74 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80 (0043ea80) at 0043eaac [UNCONDITIONAL_CALL]
// Globals:
//   WatcomVirtualBaseDescriptor DAT_00665b68
//   WatcomThunkedDestructor DAT_00665b70
//   void* PTR_FUN_00665b7c = 005ff48a
//   void* PTR_LAB_00665b84 = 005ff42f
//   void* PTR_FUN_00665b8c = 005ff445
// Function calls:
//   crt_iostream.cpp_ios_ctor_FUN_006061fc
//   crt_iostream.cpp_ostream_ctor_FUN_006061a2
//   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe

#include "nocturne.h"

ostrstream * __cdecl
crt_strstream_cpp_ostrstream_ctor_FUN_005ff384
          (ostrstream *this_ptr,int flags,char *buffer,int buffer_size,int mode)

{
  void **ppvVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  strstreambase *psVar5;
  ostream *poVar6;
  ios *piVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  byte in_stack_00000018;
  
  bVar10 = 0;
  if ((flags & 1U) == 0) {
    (this_ptr->strstreambase_core).layout_info = &DAT_00665b68;
    (this_ptr->field_68).destructor_vtable = &DAT_00665b70;
    piVar7 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)&(this_ptr->field_80).__tied_stream);
    this_ptr = (ostrstream *)&piVar7[-2].__tied_stream;
  }
  if (buffer == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    if ((in_stack_00000018 & 0xc) == 0) {
      iVar9 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      pcVar4 = buffer;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
      } while (cVar2 != '\0');
      iVar9 = ~uVar8 - 1;
    }
    pcVar4 = buffer + iVar9;
  }
  psVar5 = crt_strstream_cpp_strstreambase_constructor_FUN_006060fe
                     ((strstreambase *)this_ptr,1,buffer,mode,pcVar4);
  poVar6 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((ostream *)&psVar5->ios,1);
  ppvVar1 = &poVar6[-2].ios.__xalloc_list;
  *(int *)((int)ppvVar1 + *(int *)((int)*ppvVar1 + 4) + -4) = *(int *)((int)*ppvVar1 + 4);
  poVar6[-1].ios.cleanup_vtable = &PTR_FUN_00665b7c;
  pvVar3 = *ppvVar1;
  (poVar6->ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&PTR_LAB_00665b84;
  *(void ***)((int)(&poVar6->ios + -1) + *(int *)((int)pvVar3 + 4)) = &PTR_FUN_00665b8c;
  return (ostrstream *)ppvVar1;
}


// Assembly code:
// 005ff384: PUSH EBX
//   Label: crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
// 005ff385: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ff389: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005ff38d: TEST byte ptr [ESP + 0xc],0x1
//   XREF to: Stack[0x8] (READ)
// 005ff392: JZ 0x005ff406
//   XREF to: 005ff406 (CONDITIONAL_JUMP)
// 005ff394: TEST EBX,EBX
//   Label: LAB_005ff394
// 005ff396: JZ 0x005ff427
//   XREF to: 005ff427 (CONDITIONAL_JUMP)
// 005ff39c: TEST byte ptr [ESP + 0x18],0xc
//   XREF to: Stack[0x14] (READ)
// 005ff3a1: JZ 0x005ff42b
//   XREF to: 005ff42b (CONDITIONAL_JUMP)
// 005ff3a7: PUSH EDI
// 005ff3a8: MOV EDI,EBX
// 005ff3aa: SUB ECX,ECX
// 005ff3ac: DEC ECX
// 005ff3ad: XOR EAX,EAX
// 005ff3af: SCASB.REPNE ES:EDI
// 005ff3b1: NOT ECX
// 005ff3b3: DEC ECX
// 005ff3b4: MOV EAX,ECX
// 005ff3b6: POP EDI
// 005ff3b7: ADD EAX,EBX
//   Label: LAB_005ff3b7
// 005ff3b9: PUSH EAX
//   Label: LAB_005ff3b9
// 005ff3ba: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005ff3be: PUSH ECX
// 005ff3bf: PUSH EBX
// 005ff3c0: PUSH 0x1
// 005ff3c2: PUSH EDX
// 005ff3c3: CALL crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
//   XREF to: 006060fe (UNCONDITIONAL_CALL)
// 005ff3c8: ADD ESP,0x14
// 005ff3cb: PUSH 0x1
// 005ff3cd: ADD EAX,0x48
// 005ff3d0: PUSH EAX
// 005ff3d1: CALL crt_iostream.cpp_ostream_ctor_FUN_006061a2
//   XREF to: 006061a2 (UNCONDITIONAL_CALL)
// 005ff3d6: LEA EDX,[EAX + -0x48]
// 005ff3d9: MOV EAX,dword ptr [EDX]
// 005ff3db: MOV EAX,dword ptr [EAX + 0x4]
// 005ff3de: LEA ECX,[EDX + EAX*0x1]
// 005ff3e1: MOV dword ptr [ECX + -0x4],EAX
// 005ff3e4: MOV dword ptr [EDX + 0x44],0x665b7c
//   XREF to: 00665b7c (DATA)
// 005ff3eb: MOV EAX,dword ptr [EDX]
// 005ff3ed: MOV dword ptr [EDX + 0x4c],0x665b84
//   XREF to: 00665b84 (DATA)
// 005ff3f4: MOV EAX,dword ptr [EAX + 0x4]
// 005ff3f7: ADD ESP,0x8
// 005ff3fa: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665b8c
//   XREF to: 00665b8c (DATA)
// 005ff402: MOV EAX,EDX
// 005ff404: POP EBX
// 005ff405: RET
// 005ff406: MOV dword ptr [EDX],0x665b68
//   Label: LAB_005ff406
//   XREF to: 00665b68 (DATA)
// 005ff40c: ADD EDX,0x54
// 005ff40f: PUSH EDX
// 005ff410: MOV dword ptr [EDX + -0xc],0x665b70
//   XREF to: 00665b70 (DATA)
// 005ff417: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 005ff41c: ADD ESP,0x4
// 005ff41f: LEA EDX,[EAX + -0x54]
// 005ff422: JMP 0x005ff394
//   XREF to: 005ff394 (UNCONDITIONAL_JUMP)
// 005ff427: XOR EAX,EAX
//   Label: LAB_005ff427
// 005ff429: JMP 0x005ff3b9
//   XREF to: 005ff3b9 (UNCONDITIONAL_JUMP)
// 005ff42b: XOR EAX,EAX
//   Label: LAB_005ff42b
// 005ff42d: JMP 0x005ff3b7
//   XREF to: 005ff3b7 (UNCONDITIONAL_JUMP)
