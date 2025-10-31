// Name: core_box.cpp_CBox_ctor_FUN_0041dc50
// Address: 0041dc50
// Address Range: [[0041dc50, 0041dcfd]]
// Convention: __cdecl
// Signature: CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 (00419010) at 0041904d [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 (00421700) at 00421722 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_ctor_FUN_004c9740 (004c9740) at 004c9748 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_ctor_FUN_004c3ea0 (004c3ea0) at 004c3eb6 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_ctor_FUN_00588d40 (00588d40) at 00588d64 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70 (005ede70) at 005ede92 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SScrapeTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041dc50(CBox *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->scrape_points,8,&g_SScrapeTypeInfo);
  *(undefined4 *)((int)pvVar1 + -0xac) = 0;
  *(float *)((int)pvVar1 + -0xb0) = *(float *)((int)pvVar1 + -0xac);
  (((CBox *)((int)pvVar1 + -0xb4))->position).x = *(float *)((int)pvVar1 + -0xac);
  *(undefined4 *)((int)pvVar1 + -0xa0) = 0;
  *(undefined4 *)((int)pvVar1 + -0xa4) = *(undefined4 *)((int)pvVar1 + -0xa0);
  *(undefined4 *)((int)pvVar1 + -0xa8) = *(undefined4 *)((int)pvVar1 + -0xa4);
  *(undefined4 *)((int)pvVar1 + -8) = 0;
  *(undefined4 *)((int)pvVar1 + -0xc) = *(undefined4 *)((int)pvVar1 + -8);
  *(undefined4 *)((int)pvVar1 + -0x10) = *(undefined4 *)((int)pvVar1 + -0xc);
  *(undefined4 *)((int)pvVar1 + -0x20) = 0;
  *(undefined4 *)((int)pvVar1 + -0x60) = 0;
  *(undefined4 *)((int)pvVar1 + -100) = *(undefined4 *)((int)pvVar1 + -0x60);
  *(undefined4 *)((int)pvVar1 + -0x68) = *(undefined4 *)((int)pvVar1 + -100);
  *(undefined4 *)((int)pvVar1 + -0x6c) = 0;
  *(undefined4 *)((int)pvVar1 + -0x70) = *(undefined4 *)((int)pvVar1 + -0x6c);
  *(undefined4 *)((int)pvVar1 + -0x74) = *(undefined4 *)((int)pvVar1 + -0x70);
  *(undefined4 *)((int)pvVar1 + -0x3c) = 0;
  *(undefined4 *)((int)pvVar1 + -0x40) = *(undefined4 *)((int)pvVar1 + -0x3c);
  *(undefined4 *)((int)pvVar1 + -0x44) = *(undefined4 *)((int)pvVar1 + -0x40);
  *(undefined4 *)((int)pvVar1 + 0x1a0) = 0;
  return (CBox *)((int)pvVar1 + -0xb4);
}


// Assembly code:
// 0041dc50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBox_ctor_FUN_0041dc50
//   XREF to: Stack[0x4] (READ)
// 0041dc54: PUSH 0x65b140
//   XREF to: 0065b140 (DATA)
// 0041dc59: PUSH 0x8
// 0041dc5b: ADD EAX,0xb4
// 0041dc60: PUSH EAX
// 0041dc61: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0041dc66: SUB EAX,0xb4
// 0041dc6b: MOV dword ptr [EAX + 0x8],0x0
// 0041dc72: FLD float ptr [EAX + 0x8]
// 0041dc75: LEA EDX,[EAX + 0xc]
// 0041dc78: FST float ptr [EAX + 0x4]
// 0041dc7b: FSTP float ptr [EAX]
// 0041dc7d: MOV dword ptr [EDX + 0x8],0x0
// 0041dc84: MOV ECX,dword ptr [EDX + 0x8]
// 0041dc87: MOV dword ptr [EDX + 0x4],ECX
// 0041dc8a: MOV ECX,dword ptr [EDX + 0x4]
// 0041dc8d: MOV dword ptr [EDX],ECX
// 0041dc8f: LEA EDX,[EAX + 0xa4]
// 0041dc95: MOV dword ptr [EDX + 0x8],0x0
// 0041dc9c: MOV ECX,dword ptr [EDX + 0x8]
// 0041dc9f: MOV dword ptr [EDX + 0x4],ECX
// 0041dca2: MOV ECX,dword ptr [EDX + 0x4]
// 0041dca5: MOV dword ptr [EDX],ECX
// 0041dca7: LEA EDX,[EAX + 0x4c]
// 0041dcaa: MOV dword ptr [EAX + 0x94],0x0
// 0041dcb4: MOV dword ptr [EDX + 0x8],0x0
// 0041dcbb: MOV ECX,dword ptr [EDX + 0x8]
// 0041dcbe: MOV dword ptr [EDX + 0x4],ECX
// 0041dcc1: MOV ECX,dword ptr [EDX + 0x4]
// 0041dcc4: MOV dword ptr [EDX],ECX
// 0041dcc6: LEA EDX,[EAX + 0x40]
// 0041dcc9: MOV dword ptr [EDX + 0x8],0x0
// 0041dcd0: MOV ECX,dword ptr [EDX + 0x8]
// 0041dcd3: MOV dword ptr [EDX + 0x4],ECX
// 0041dcd6: MOV ECX,dword ptr [EDX + 0x4]
// 0041dcd9: MOV dword ptr [EDX],ECX
// 0041dcdb: LEA EDX,[EAX + 0x70]
// 0041dcde: MOV dword ptr [EDX + 0x8],0x0
// 0041dce5: ADD ESP,0xc
// 0041dce8: MOV ECX,dword ptr [EDX + 0x8]
// 0041dceb: MOV dword ptr [EDX + 0x4],ECX
// 0041dcee: MOV ECX,dword ptr [EDX + 0x4]
// 0041dcf1: MOV dword ptr [EDX],ECX
// 0041dcf3: MOV dword ptr [EAX + 0x254],0x0
// 0041dcfd: RET
