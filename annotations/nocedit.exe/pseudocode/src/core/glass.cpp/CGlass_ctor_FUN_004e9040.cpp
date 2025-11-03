// Name: core_glass.cpp_CGlass_ctor_FUN_004e9040
// Address: 004e9040
// Address Range: [[004e9040, 004e9174]]
// Convention: __cdecl
// Signature: CGlass * core_glass.cpp_CGlass_ctor_FUN_004e9040(CGlass * this_ptr)
// Cross-references:
//   core_glass.cpp_CGlass_factoryFunc_FUN_004e9000 (004e9000) at 004e901a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_HEADLITE_RAW_0062df62
//   undefined4 s_EADLITE.RAW_0062df63
//   undefined4 s_ADLITE.RAW_0062df64
//   undefined4 s_DLITE.RAW_0062df65
//   TerminatedCString s_true_0062df6f
//   undefined4 s_rue_0062df70
//   undefined4 s_ue_0062df71
//   undefined4 s_e_0062df72
//   TerminatedCString s_s_7YEARS_RAW_0062df74
//   undefined4 s_YEARS.RAW_0062df75
//   undefined4 s_EARS.RAW_0062df76
//   undefined4 s_ARS.RAW_0062df77
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonActor_vtable g_CGlassVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_mirror.cpp_CMirror_ctor_FUN_005213c0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004e9040(CGlass *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CMirror *pCVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_mirror_cpp_CMirror_ctor_FUN_005213c0((CMirror *)(pCVar2[1].create_event + 0x1c));
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (&pCVar3[1].reflection.reflection_matrix.m[1].y,0x19,&g_CVectorTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar4 + -0x238) = &g_CGlassVTable;
  pcVar5 = "HEADLITE.RAW";
  *(undefined4 *)((int)pvVar4 + -0x234) = 0x40800000;
  *(undefined4 *)((int)pvVar4 + -0x230) = 0x40800000;
  pcVar6 = (char *)((int)pvVar4 + -0x220);
  *(undefined4 *)((int)pvVar4 + -0x22c) = 0x3dcccccd;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar4 + -0x224) = 0;
  *(undefined4 *)((int)pvVar4 + -0x228) = 0xd;
  *(undefined4 *)((int)pvVar4 + -0x210) = 0x8000;
  *(undefined4 *)((int)pvVar4 + -0x20c) = 0;
  pcVar5 = "true";
  *(undefined1 *)((int)pvVar4 + -0x208) = 0;
  pcVar6 = (char *)((int)pvVar4 + -0x80);
  *(undefined4 *)((int)pvVar4 + -0x1a4) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = "7YEARS.RAW";
  pcVar6 = (char *)((int)pvVar4 + -0x10);
  *(undefined4 *)((int)pvVar4 + -0x1c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar4 + -0x14) = 0;
  *(undefined4 *)((int)pvVar4 + -0x18) = 0xd;
  *(undefined4 *)((int)pvVar4 + 0x7b0) = 0;
  return (CGlass *)((int)pvVar4 + -0x38c);
}


// Assembly code:
// 004e9040: PUSH ESI
//   Label: core_glass.cpp_CGlass_ctor_FUN_004e9040
// 004e9041: PUSH EDI
// 004e9042: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e9046: PUSH EDX
// 004e9047: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004e904c: ADD ESP,0x4
// 004e904f: ADD EAX,0x1ec
// 004e9054: PUSH EAX
// 004e9055: CALL core_mirror.cpp_CMirror_ctor_FUN_005213c0
//   XREF to: 005213c0 (UNCONDITIONAL_CALL)
// 004e905a: ADD ESP,0x4
// 004e905d: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004e9062: PUSH 0x19
// 004e9064: ADD EAX,0x1a0
// 004e9069: PUSH EAX
// 004e906a: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004e906f: LEA EDX,[EAX + 0xfffffc74]
// 004e9075: MOV dword ptr [EDX + 0x154],0x65eef4
//   XREF to: 0065eef4 (DATA)
// 004e907f: MOV ESI,0x62df62
//   XREF to: 0062df62 (DATA)
// 004e9084: MOV dword ptr [EDX + 0x158],0x40800000
// 004e908e: ADD ESP,0xc
// 004e9091: MOV dword ptr [EDX + 0x15c],0x40800000
// 004e909b: LEA EDI,[EDX + 0x16c]
// 004e90a1: MOV dword ptr [EDX + 0x160],0x3dcccccd
// 004e90ab: PUSH EDI
// 004e90ac: MOV AL,byte ptr [ESI]
//   Label: LAB_004e90ac
//   XREF to: 0062df62 (READ)
//   XREF to: 0062df64 (READ)
// 004e90ae: MOV byte ptr [EDI],AL
// 004e90b0: CMP AL,0x0
// 004e90b2: JZ 0x004e90c4
//   XREF to: 004e90c4 (CONDITIONAL_JUMP)
// 004e90b4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062df63 (READ)
//   XREF to: 0062df65 (READ)
// 004e90b7: ADD ESI,0x2
// 004e90ba: MOV byte ptr [EDI + 0x1],AL
// 004e90bd: ADD EDI,0x2
// 004e90c0: CMP AL,0x0
// 004e90c2: JNZ 0x004e90ac
//   XREF to: 004e90ac (CONDITIONAL_JUMP)
// 004e90c4: POP EDI
//   Label: LAB_004e90c4
// 004e90c5: MOV dword ptr [EDX + 0x168],0x0
// 004e90cf: MOV dword ptr [EDX + 0x164],0xd
// 004e90d9: MOV dword ptr [EDX + 0x17c],0x8000
// 004e90e3: MOV dword ptr [EDX + 0x180],0x0
// 004e90ed: MOV ESI,0x62df6f
//   XREF to: 0062df6f (DATA)
// 004e90f2: MOV byte ptr [EDX + 0x184],0x0
// 004e90f9: LEA EDI,[EDX + 0x30c]
// 004e90ff: MOV dword ptr [EDX + 0x1e8],0x0
// 004e9109: PUSH EDI
// 004e910a: MOV AL,byte ptr [ESI]
//   Label: LAB_004e910a
//   XREF to: 0062df6f (READ)
//   XREF to: 0062df71 (READ)
// 004e910c: MOV byte ptr [EDI],AL
// 004e910e: CMP AL,0x0
// 004e9110: JZ 0x004e9122
//   XREF to: 004e9122 (CONDITIONAL_JUMP)
// 004e9112: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062df70 (READ)
//   XREF to: 0062df72 (READ)
// 004e9115: ADD ESI,0x2
// 004e9118: MOV byte ptr [EDI + 0x1],AL
// 004e911b: ADD EDI,0x2
// 004e911e: CMP AL,0x0
// 004e9120: JNZ 0x004e910a
//   XREF to: 004e910a (CONDITIONAL_JUMP)
// 004e9122: POP EDI
//   Label: LAB_004e9122
// 004e9123: MOV ESI,0x62df74
//   XREF to: 0062df74 (DATA)
// 004e9128: LEA EDI,[EDX + 0x37c]
// 004e912e: MOV dword ptr [EDX + 0x370],0x0
// 004e9138: PUSH EDI
// 004e9139: MOV AL,byte ptr [ESI]
//   Label: LAB_004e9139
//   XREF to: 0062df74 (READ)
//   XREF to: 0062df76 (READ)
// 004e913b: MOV byte ptr [EDI],AL
// 004e913d: CMP AL,0x0
// 004e913f: JZ 0x004e9151
//   XREF to: 004e9151 (CONDITIONAL_JUMP)
// 004e9141: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062df75 (READ)
//   XREF to: 0062df77 (READ)
// 004e9144: ADD ESI,0x2
// 004e9147: MOV byte ptr [EDI + 0x1],AL
// 004e914a: ADD EDI,0x2
// 004e914d: CMP AL,0x0
// 004e914f: JNZ 0x004e9139
//   XREF to: 004e9139 (CONDITIONAL_JUMP)
// 004e9151: POP EDI
//   Label: LAB_004e9151
// 004e9152: MOV dword ptr [EDX + 0x378],0x0
// 004e915c: MOV dword ptr [EDX + 0x374],0xd
// 004e9166: MOV EAX,EDX
// 004e9168: MOV dword ptr [EDX + 0xb3c],0x0
// 004e9172: POP EDI
// 004e9173: POP ESI
// 004e9174: RET
