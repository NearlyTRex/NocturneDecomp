// Name: core_main.c_waitWithSkip_FUN_005082a0
// Address: 005082a0
// Address Range: [[005082a0, 00508339]]
// Convention: __cdecl
// Signature: void core_main.c_waitWithSkip_FUN_005082a0(int duration_ms)
// Globals:
//   CKeys* g_CKeysPtr = 02dcd7d4
//   int g_GlobalDeltaTimeInt
//   void* g_CKeysPtr
// Function calls:
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_main_c_waitWithSkip_FUN_005082a0(int duration_ms)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if (0 < duration_ms) {
    do {
      while( true ) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
        g_GlobalDeltaTimeInt = (iVar2 - iVar1) / 0x12;
        if (g_GlobalDeltaTimeInt < 0) {
          g_GlobalDeltaTimeInt = 0;
        }
        if (0x4000 < g_GlobalDeltaTimeInt) {
          g_GlobalDeltaTimeInt = 0x4000;
        }
        duration_ms = duration_ms - g_GlobalDeltaTimeInt;
        iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        iVar1 = iVar2;
        if (iVar3 == 0) break;
        iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
        if (iVar2 != 0) {
          return;
        }
        if (duration_ms < 1) {
          return;
        }
      }
    } while (0 < duration_ms);
  }
  return;
}


// Assembly code:
// 005082a0: PUSH EBX
//   Label: core_main.c_waitWithSkip_FUN_005082a0
// 005082a1: PUSH ESI
// 005082a2: PUSH EDI
// 005082a3: PUSH EBP
// 005082a4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005082a8: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 005082ad: MOV ESI,EAX
// 005082af: TEST EBX,EBX
// 005082b1: JLE 0x0050830f
//   XREF to: 0050830f (CONDITIONAL_JUMP)
// 005082b3: MOV EBP,0x4000
// 005082b8: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_005082b8
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005082bd: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 005082c2: MOV ECX,EAX
// 005082c4: SUB EAX,ESI
// 005082c6: MOV EDX,EAX
// 005082c8: MOV ESI,0x12
// 005082cd: SAR EDX,0x1f
// 005082d0: IDIV ESI
// 005082d2: MOV [0x02cf6a80],EAX
//   XREF to: 02cf6a80 (WRITE)
// 005082d7: TEST EAX,EAX
// 005082d9: JL 0x00508314
//   XREF to: 00508314 (CONDITIONAL_JUMP)
// 005082db: MOV EDI,dword ptr [0x02cf6a80]
//   Label: LAB_005082db
//   XREF to: 02cf6a80 (READ)
// 005082e1: MOV ESI,ECX
// 005082e3: CMP EDI,0x4000
// 005082e9: JLE 0x005082f1
//   XREF to: 005082f1 (CONDITIONAL_JUMP)
// 005082eb: MOV dword ptr [0x02cf6a80],EBP
//   XREF to: 02cf6a80 (WRITE)
// 005082f1: MOV EAX,[0x02cf6a80]
//   Label: LAB_005082f1
//   XREF to: 02cf6a80 (READ)
// 005082f6: PUSH 0x2a
// 005082f8: SUB EBX,EAX
// 005082fa: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005082ff: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00508300: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00508302: CALL dword ptr [EDX]
// 00508304: ADD ESP,0x8
// 00508307: TEST EAX,EAX
// 00508309: JNZ 0x0050831e
//   XREF to: 0050831e (CONDITIONAL_JUMP)
// 0050830b: TEST EBX,EBX
// 0050830d: JG 0x005082b8
//   XREF to: 005082b8 (CONDITIONAL_JUMP)
// 0050830f: POP EBP
//   Label: LAB_0050830f
// 00508310: POP EDI
// 00508311: POP ESI
// 00508312: POP EBX
// 00508313: RET
// 00508314: XOR ESI,ESI
//   Label: LAB_00508314
// 00508316: MOV dword ptr [0x02cf6a80],ESI
//   XREF to: 02cf6a80 (WRITE)
// 0050831c: JMP 0x005082db
//   XREF to: 005082db (UNCONDITIONAL_JUMP)
// 0050831e: PUSH 0x1
//   Label: LAB_0050831e
// 00508320: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00508325: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00508326: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00508328: CALL dword ptr [EDX]
// 0050832a: ADD ESP,0x8
// 0050832d: TEST EAX,EAX
// 0050832f: JNZ 0x0050830f
//   XREF to: 0050830f (CONDITIONAL_JUMP)
// 00508331: TEST EBX,EBX
// 00508333: JG 0x005082b8
//   XREF to: 005082b8 (CONDITIONAL_JUMP)
// 00508335: POP EBP
// 00508336: POP EDI
// 00508337: POP ESI
// 00508338: POP EBX
// 00508339: RET
