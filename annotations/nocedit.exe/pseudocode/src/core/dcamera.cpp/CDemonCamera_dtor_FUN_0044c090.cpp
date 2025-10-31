// Name: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
// Address: 0044c090
// Address Range: [[0044c090, 0044c0ed]]
// Convention: __cdecl
// Signature: CDemonCamera * core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera * this_ptr, uint d1, uint d2, uint d3)
// Cross-references:
//   core_dlight.cpp_CDemonLight_dtor_FUN_00472760 (00472760) at 0047277f [UNCONDITIONAL_CALL]
// Globals:
//   CCameraView_vtable g_CDemonCameraVTable
//   WatcomTypeInfo g_CDemonCamera
// Function calls:
//   core_camview.cpp_CCameraView_dtor_FUN_00427d00
//   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDemonCamera * __cdecl
core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera *this_ptr,uint d1,uint d2,uint d3)

{
  CDemonCamera *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDemonCamera);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CDemonCameraVTable;
  core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(this_ptr);
  ptr = (CDemonCamera *)core_camview_cpp_CCameraView_dtor_FUN_00427d00(&this_ptr->base,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0044c090: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
// 0044c091: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0044c095: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0044c09a: JNZ 0x0044c0c6
//   XREF to: 0044c0c6 (CONDITIONAL_JUMP)
// 0044c09c: PUSH EBX
// 0044c09d: MOV dword ptr [EBX + 0x3c],0x65c664
//   XREF to: 0065c664 (DATA)
// 0044c0a4: CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
//   XREF to: 0044c360 (UNCONDITIONAL_CALL)
// 0044c0a9: ADD ESP,0x4
// 0044c0ac: PUSH 0x1
// 0044c0ae: PUSH EBX
// 0044c0af: CALL core_camview.cpp_CCameraView_dtor_FUN_00427d00
//   XREF to: 00427d00 (UNCONDITIONAL_CALL)
// 0044c0b4: ADD ESP,0x8
// 0044c0b7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0044c0bb: MOV EBX,EAX
// 0044c0bd: TEST DL,0x2
// 0044c0c0: JNZ 0x0044c0e1
//   XREF to: 0044c0e1 (CONDITIONAL_JUMP)
// 0044c0c2: MOV EAX,EBX
// 0044c0c4: POP EBX
// 0044c0c5: RET
// 0044c0c6: PUSH 0x65c690
//   Label: LAB_0044c0c6
//   XREF to: 0065c690 (DATA)
// 0044c0cb: PUSH EBX
// 0044c0cc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0044c0d1: ADD ESP,0x8
// 0044c0d4: PUSH EAX
// 0044c0d5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0044c0da: ADD ESP,0x4
// 0044c0dd: MOV EAX,EBX
// 0044c0df: POP EBX
// 0044c0e0: RET
// 0044c0e1: PUSH EAX
//   Label: LAB_0044c0e1
// 0044c0e2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0044c0e7: ADD ESP,0x4
// 0044c0ea: MOV EAX,EBX
// 0044c0ec: POP EBX
// 0044c0ed: RET
