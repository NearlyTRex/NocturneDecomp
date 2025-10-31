// Name: core_dcube.cpp_staticInit_FUN_00454720
// Address: 00454720
// Address Range: [[00454720, 004547ac]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_staticInit_FUN_00454720(void)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   CVector3f[16] g_CubeInputTriangleBuffer
//   CVector3f[16] g_ClipStageMaxYBuffer
//   CVector3f[16] g_ClipStageMinYBuffer
//   CVector3f[16] g_ClipStageMaxXBuffer
//   CVector3f[16] g_ClipStageMinXBuffer
//   CVector3f[16] g_ClipStageMinZBuffer
//   CVector3f[16] g_CubeClippedTriangleBuffer
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

void __cdecl core_dcube_cpp_staticInit_FUN_00454720(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_CubeInputTriangleBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMaxYBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMinYBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMaxXBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMinXBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMinZBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_CubeClippedTriangleBuffer,0x10,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00454720: PUSH 0x6598c0
//   Label: core_dcube.cpp_staticInit_FUN_00454720
//   XREF to: 006598c0 (DATA)
// 00454725: PUSH 0x10
// 00454727: PUSH 0x15c42a8
//   XREF to: 015c42a8 (DATA)
// 0045472c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00454731: ADD ESP,0xc
// 00454734: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00454739: PUSH 0x10
// 0045473b: PUSH 0x15c436c
//   XREF to: 015c436c (DATA)
// 00454740: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00454745: ADD ESP,0xc
// 00454748: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0045474d: PUSH 0x10
// 0045474f: PUSH 0x15c4430
//   XREF to: 015c4430 (DATA)
// 00454754: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00454759: ADD ESP,0xc
// 0045475c: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00454761: PUSH 0x10
// 00454763: PUSH 0x15c44f4
//   XREF to: 015c44f4 (DATA)
// 00454768: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0045476d: ADD ESP,0xc
// 00454770: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00454775: PUSH 0x10
// 00454777: PUSH 0x15c45b8
//   XREF to: 015c45b8 (DATA)
// 0045477c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00454781: ADD ESP,0xc
// 00454784: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00454789: PUSH 0x10
// 0045478b: PUSH 0x15c467c
//   XREF to: 015c467c (DATA)
// 00454790: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00454795: ADD ESP,0xc
// 00454798: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0045479d: PUSH 0x10
// 0045479f: PUSH 0x15c4740
//   XREF to: 015c4740 (DATA)
// 004547a4: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004547a9: ADD ESP,0xc
// 004547ac: RET
