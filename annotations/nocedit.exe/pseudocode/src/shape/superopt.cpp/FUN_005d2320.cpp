// Name: shape_superopt.cpp_FUN_005d2320
// Address: 005d2320
// Address Range: [[005d2320, 005d240d]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d2320()
// Globals:
//   undefined4 s_Unable_to_allocate_RAM_for_objec_0065432a
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   shape_superopt.cpp_FUN_005cc620
//   shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d2320(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d2320(void)

{
  void *pvVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CPoly *pCVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CPoly local_78;
  uint local_10;
  
  bVar6 = 0;
  *(int *)(in_stack_00000004 + 8) = in_stack_00000008;
  pvVar1 = crt_memory_c_malloc_FUN_00601bb0(in_stack_00000008 * 0x68);
  *(void **)(in_stack_00000004 + 0xc) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    shape_superopt_cpp_FUN_005cc620();
    local_10 = 0;
    if (*(int *)(in_stack_00000004 + 8) != 0) {
      iVar3 = 0;
      do {
        pCVar4 = &local_78;
        pcVar5 = (char *)(*(int *)(in_stack_00000004 + 0xc) + iVar3);
        for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pCVar4->field0_0x0;
          pCVar4 = (CPoly *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
          pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar5 = pCVar4->field0_0x0[0];
          pCVar4 = (CPoly *)((int)pCVar4 + (uint)bVar6 * -2 + 1);
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        }
        (*(code *)**(undefined4 **)(*(int *)(in_stack_00000004 + 0xc) + iVar3 + 100))();
        iVar3 = iVar3 + 0x68;
        local_10 = local_10 + 1;
      } while (local_10 < *(uint *)(in_stack_00000004 + 8));
    }
    shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_78);
    return 1;
  }
  if (*(void **)(in_stack_00000004 + 4) != (void *)0x0) {
    crt_memory_c_free_FUN_00601cd0(*(void **)(in_stack_00000004 + 4));
  }
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
  return 0;
}


// Assembly code:
// 005d2320: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d2320
// 005d2321: PUSH ESI
// 005d2322: PUSH EBP
// 005d2323: SUB ESP,0x6c
// 005d2326: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 005d232a: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 005d2331: MOV ESI,EAX
// 005d2333: MOV dword ptr [EBX + 0x8],EAX
// 005d2336: SHL EAX,0x2
// 005d2339: SUB EAX,ESI
// 005d233b: SHL EAX,0x2
// 005d233e: ADD EAX,ESI
// 005d2340: SHL EAX,0x3
// 005d2343: PUSH EAX
// 005d2344: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 005d2349: ADD ESP,0x4
// 005d234c: MOV dword ptr [EBX + 0xc],EAX
// 005d234f: TEST EAX,EAX
// 005d2351: JNZ 0x005d2389
//   XREF to: 005d2389 (CONDITIONAL_JUMP)
// 005d2353: MOV ECX,dword ptr [EBX + 0x4]
// 005d2356: TEST ECX,ECX
// 005d2358: JZ 0x005d2363
//   XREF to: 005d2363 (CONDITIONAL_JUMP)
// 005d235a: PUSH ECX
// 005d235b: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005d2360: ADD ESP,0x4
// 005d2363: PUSH 0x65432a
//   Label: LAB_005d2363
//   XREF to: 0065432a (DATA)
// 005d2368: MOV dword ptr [EBX + 0x4],0x0
// 005d236f: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d2374: XOR ESI,ESI
// 005d2376: ADD ESP,0x4
// 005d2379: MOV dword ptr [EBX + 0x14],0x0
// 005d2380: MOV EAX,ESI
// 005d2382: ADD ESP,0x6c
// 005d2385: POP EBP
// 005d2386: POP ESI
// 005d2387: POP EBX
// 005d2388: RET
// 005d2389: PUSH EDI
//   Label: LAB_005d2389
// 005d238a: PUSH 0x0
// 005d238c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 005d2390: PUSH EAX
// 005d2391: XOR EDI,EDI
// 005d2393: CALL shape_superopt.cpp_FUN_005cc620
//   XREF to: 005cc620 (UNCONDITIONAL_CALL)
// 005d2398: ADD ESP,0x8
// 005d239b: MOV EBP,dword ptr [EBX + 0x8]
// 005d239e: MOV dword ptr [ESP + 0x6c],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 005d23a2: TEST EBP,EBP
// 005d23a4: JBE 0x005d23f0
//   XREF to: 005d23f0 (CONDITIONAL_JUMP)
// 005d23a6: XOR EBP,EBP
// 005d23a8: MOV ECX,0x68
//   Label: LAB_005d23a8
// 005d23ad: MOV EDI,dword ptr [EBX + 0xc]
// 005d23b0: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x78] (DATA)
// 005d23b4: ADD EDI,EBP
// 005d23b6: PUSH EDI
// 005d23b7: MOV EAX,ECX
// 005d23b9: SHR ECX,0x2
// 005d23bc: MOVSD.REP ES:EDI,ESI
// 005d23be: MOV CL,AL
// 005d23c0: AND CL,0x3
// 005d23c3: MOVSB.REP ES:EDI,ESI
// 005d23c5: POP EDI
// 005d23c6: MOV EAX,dword ptr [EBX + 0xc]
// 005d23c9: PUSH EBX
// 005d23ca: ADD EAX,EBP
// 005d23cc: PUSH EAX
// 005d23cd: MOV ESI,dword ptr [EAX + 0x64]
// 005d23d0: CALL dword ptr [ESI]
// 005d23d2: ADD ESP,0x8
// 005d23d5: MOV EAX,dword ptr [ESP + 0x6c]
// 005d23d9: ADD EBP,0x68
// 005d23dc: INC EAX
// 005d23dd: MOV EDX,dword ptr [EBX + 0x8]
// 005d23e0: MOV dword ptr [ESP + 0x6c],EAX
// 005d23e4: CMP EAX,EDX
// 005d23e6: JC 0x005d23a8
//   XREF to: 005d23a8 (CONDITIONAL_JUMP)
// 005d23e8: LEA EAX,[EAX]
// 005d23ee: MOV EDX,EDX
// 005d23f0: PUSH 0x0
//   Label: LAB_005d23f0
// 005d23f2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 005d23f6: PUSH EAX
// 005d23f7: MOV ESI,0x1
// 005d23fc: CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   XREF to: 005cc660 (UNCONDITIONAL_CALL)
// 005d2401: ADD ESP,0x8
// 005d2404: POP EDI
// 005d2405: MOV EAX,ESI
// 005d2407: ADD ESP,0x6c
// 005d240a: POP EBP
// 005d240b: POP ESI
// 005d240c: POP EBX
// 005d240d: RET
