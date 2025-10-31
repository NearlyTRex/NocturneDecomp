// Name: core_dlight.cpp_CDemonLight_dtor_FUN_00472760
// Address: 00472760
// Address Range: [[00472760, 004727bd]]
// Convention: __cdecl
// Signature: CDemonLight * core_dlight.cpp_CDemonLight_dtor_FUN_00472760(CDemonLight * this_ptr, uint d1, uint d2, uint d3)
// Cross-references:
//   core_boxactor.cpp_CLightActor_dtor_FUN_004235f0 (004235f0) at 00423605 [UNCONDITIONAL_CALL]
// Globals:
//   CCameraView_vtable g_CDemonLightVTable
//   WatcomTypeInfo g_CDemonLight
// Function calls:
//   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
//   core_dlight.cpp_CDemonLight_free_FUN_004728b0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDemonLight * __cdecl
core_dlight_cpp_CDemonLight_dtor_FUN_00472760(CDemonLight *this_ptr,uint d1,uint d2,uint d3)

{
  CDemonLight *ptr;
  void *ptr_00;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDemonLight);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.vtable = &g_CDemonLightVTable;
  core_dlight_cpp_CDemonLight_free_FUN_004728b0(this_ptr);
  ptr = (CDemonLight *)
        core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090
                  (&this_ptr->base,1,unaff_retaddr,(uint)this_ptr);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00472760: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_dtor_FUN_00472760
// 00472761: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00472765: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0047276a: JNZ 0x00472796
//   XREF to: 00472796 (CONDITIONAL_JUMP)
// 0047276c: PUSH EBX
// 0047276d: MOV dword ptr [EBX + 0x3c],0x65c924
//   XREF to: 0065c924 (DATA)
// 00472774: CALL core_dlight.cpp_CDemonLight_free_FUN_004728b0
//   XREF to: 004728b0 (UNCONDITIONAL_CALL)
// 00472779: ADD ESP,0x4
// 0047277c: PUSH 0x1
// 0047277e: PUSH EBX
// 0047277f: CALL core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
//   XREF to: 0044c090 (UNCONDITIONAL_CALL)
// 00472784: ADD ESP,0x8
// 00472787: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0047278b: MOV EBX,EAX
// 0047278d: TEST DL,0x2
// 00472790: JNZ 0x004727b1
//   XREF to: 004727b1 (CONDITIONAL_JUMP)
// 00472792: MOV EAX,EBX
// 00472794: POP EBX
// 00472795: RET
// 00472796: PUSH 0x65c940
//   Label: LAB_00472796
//   XREF to: 0065c940 (DATA)
// 0047279b: PUSH EBX
// 0047279c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004727a1: ADD ESP,0x8
// 004727a4: PUSH EAX
// 004727a5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004727aa: ADD ESP,0x4
// 004727ad: MOV EAX,EBX
// 004727af: POP EBX
// 004727b0: RET
// 004727b1: PUSH EAX
//   Label: LAB_004727b1
// 004727b2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004727b7: ADD ESP,0x4
// 004727ba: MOV EAX,EBX
// 004727bc: POP EBX
// 004727bd: RET
