// Name: core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
// Address: 0059a160
// Address Range: [[0059a160, 0059a26d]]
// Convention: __cdecl
// Signature: CDeformableModel * core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be120 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   WatcomTypeInfo g_CBoundingBox3DTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

CDeformableModel * __cdecl
core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  void *pvVar2;
  CDeformableModel *pCVar3;
  char *pcVar4;
  
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field6_0x7144 + 0xb4c,100,&g_CVectorTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x4bc),100,&g_CBoundingBox3DTypeInfo);
  pCVar1 = (CDeformableModel *)((int)pvVar2 + -0x814c);
  pCVar3 = pCVar1;
  do {
    pcVar4 = pCVar3->field1_0x4;
    pCVar3->field1_0x4[0x3c] = '\0';
    pCVar3->field1_0x4[0x3d] = '\0';
    pCVar3->field1_0x4[0x3e] = '\0';
    pCVar3->field1_0x4[0x3f] = '\0';
    pCVar3->field1_0x4[0x50] = '\0';
    pCVar3->field1_0x4[0x51] = '\0';
    pCVar3->field1_0x4[0x52] = '\0';
    pCVar3->field1_0x4[0x53] = '\0';
    pCVar3->field1_0x4[100] = '\0';
    pCVar3->field1_0x4[0x65] = '\0';
    pCVar3->field1_0x4[0x66] = '\0';
    pCVar3->field1_0x4[0x67] = '\0';
    pCVar3->field1_0x4[0x78] = '\0';
    pCVar3->field1_0x4[0x79] = '\0';
    pCVar3->field1_0x4[0x7a] = '\0';
    pCVar3->field1_0x4[0x7b] = '\0';
    pCVar3->field1_0x4[0x8c] = '\0';
    pCVar3->field1_0x4[0x8d] = '\0';
    pCVar3->field1_0x4[0x8e] = '\0';
    pCVar3->field1_0x4[0x8f] = '\0';
    pCVar3->field1_0x4[0xa0] = '\0';
    pCVar3->field1_0x4[0xa1] = '\0';
    pCVar3->field1_0x4[0xa2] = '\0';
    pCVar3->field1_0x4[0xa3] = '\0';
    pCVar3->field1_0x4[0x28] = '\0';
    pCVar3->field1_0x4[0x29] = '\0';
    pCVar3->field1_0x4[0x2a] = '\0';
    pCVar3->field1_0x4[0x2b] = '\0';
    pCVar3 = (CDeformableModel *)pcVar4;
  } while (pcVar4 != (undefined1 *)((int)pvVar2 + -0x8138));
  *(undefined4 *)((int)pvVar2 + -0x8094) = 0;
  *(undefined4 *)((int)pvVar2 + -0x8090) = 0;
  crt_memory_c_memset_FUN_005fde40((void *)((int)pvVar2 + -0x808c),0,0x7080);
  *(undefined4 *)((int)pvVar2 + -0x100c) = 0;
  crt_memory_c_memset_FUN_005fde40((void *)((int)pvVar2 + -0x1008),0,0xb40);
  *(undefined1 *)((int)pvVar2 + 0xe10) = 0;
  *(undefined4 *)((int)pvVar2 + 0xe60) = 0;
  *(undefined4 *)((int)pvVar2 + -0x4c0) = 0x3f800000;
  pCVar1->num_lods = 0;
  *(undefined4 *)((int)pvVar2 + -0x4c4) = *(undefined4 *)((int)pvVar2 + -0x4c0);
  *(undefined4 *)((int)pvVar2 + -0x4c8) = *(undefined4 *)((int)pvVar2 + -0x4c4);
  crt_memory_c_memset_FUN_005fde40((void *)((int)pvVar2 + -0x8148),0,0x28);
  *(undefined4 *)((int)pvVar2 + -4) = 0;
  *(undefined4 *)((int)pvVar2 + -8) = *(undefined4 *)((int)pvVar2 + -4);
  *(undefined4 *)((int)pvVar2 + -0xc) = *(undefined4 *)((int)pvVar2 + -8);
  return pCVar1;
}


// Assembly code:
// 0059a160: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
// 0059a161: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059a165: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0059a16a: PUSH 0x64
// 0059a16c: ADD EBX,0x7c90
// 0059a172: PUSH EBX
// 0059a173: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0059a178: ADD ESP,0xc
// 0059a17b: PUSH 0x659900
//   XREF to: 00659900 (DATA)
// 0059a180: PUSH 0x64
// 0059a182: ADD EAX,0x4bc
// 0059a187: PUSH EAX
// 0059a188: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0059a18d: LEA EBX,[EAX + 0xffff7eb4]
// 0059a193: ADD ESP,0xc
// 0059a196: MOV EAX,EBX
// 0059a198: LEA EDX,[EBX + 0x14]
// 0059a19b: XOR ECX,ECX
// 0059a19d: ADD EAX,0x4
//   Label: LAB_0059a19d
// 0059a1a0: MOV dword ptr [EAX + 0x3c],ECX
// 0059a1a3: MOV dword ptr [EAX + 0x50],ECX
// 0059a1a6: MOV dword ptr [EAX + 0x64],ECX
// 0059a1a9: MOV dword ptr [EAX + 0x78],ECX
// 0059a1ac: MOV dword ptr [EAX + 0x8c],ECX
// 0059a1b2: MOV dword ptr [EAX + 0xa0],ECX
// 0059a1b8: MOV dword ptr [EAX + 0x28],ECX
// 0059a1bb: CMP EAX,EDX
// 0059a1bd: JNZ 0x0059a19d
//   XREF to: 0059a19d (CONDITIONAL_JUMP)
// 0059a1bf: PUSH 0x7080
// 0059a1c4: PUSH 0x0
// 0059a1c6: LEA EAX,[EBX + 0xc0]
// 0059a1cc: MOV dword ptr [EBX + 0xb8],0x0
// 0059a1d6: PUSH EAX
// 0059a1d7: MOV dword ptr [EBX + 0xbc],0x0
// 0059a1e1: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0059a1e6: ADD ESP,0xc
// 0059a1e9: PUSH 0xb40
// 0059a1ee: PUSH 0x0
// 0059a1f0: LEA EAX,[EBX + 0x7144]
// 0059a1f6: PUSH EAX
// 0059a1f7: MOV dword ptr [EBX + 0x7140],0x0
// 0059a201: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0059a206: MOV byte ptr [EBX + 0x8f5c],0x0
// 0059a20d: MOV dword ptr [EBX + 0x8fac],0x0
// 0059a217: MOV dword ptr [EBX + 0x7c8c],0x3f800000
// 0059a221: ADD ESP,0xc
// 0059a224: MOV dword ptr [EBX],0x0
// 0059a22a: LEA EAX,[EBX + 0x4]
// 0059a22d: FLD float ptr [EBX + 0x7c8c]
// 0059a233: PUSH 0x28
// 0059a235: FSTP float ptr [EBX + 0x7c88]
// 0059a23b: PUSH 0x0
// 0059a23d: FLD float ptr [EBX + 0x7c88]
// 0059a243: PUSH EAX
// 0059a244: FSTP float ptr [EBX + 0x7c84]
// 0059a24a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0059a24f: LEA EAX,[EBX + 0x8140]
// 0059a255: MOV dword ptr [EAX + 0x8],0x0
// 0059a25c: ADD ESP,0xc
// 0059a25f: MOV EDX,dword ptr [EAX + 0x8]
// 0059a262: MOV dword ptr [EAX + 0x4],EDX
// 0059a265: MOV EDX,dword ptr [EAX + 0x4]
// 0059a268: MOV dword ptr [EAX],EDX
// 0059a26a: MOV EAX,EBX
// 0059a26c: POP EBX
// 0059a26d: RET
