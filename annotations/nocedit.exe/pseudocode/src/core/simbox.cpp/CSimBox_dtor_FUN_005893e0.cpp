// Name: core_simbox.cpp_CSimBox_dtor_FUN_005893e0
// Address: 005893e0
// Address Range: [[005893e0, 00589444]]
// Convention: __cdecl
// Signature: CSimBox * core_simbox.cpp_CSimBox_dtor_FUN_005893e0(CSimBox * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CSimBoxTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_box.cpp_CBox_dtor_FUN_0041dd00
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CSimBox * __cdecl
core_simbox_cpp_CSimBox_dtor_FUN_005893e0(CSimBox *this_ptr,uint d1,uint d2,uint d3)

{
  CBox *pCVar1;
  CSimBox *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSimBoxTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)(this_ptr->field1_0x158 + 0x200));
  ptr = (CSimBox *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-2].scrape_points[3].local_position.z,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005893e0: PUSH EBX
//   Label: core_simbox.cpp_CSimBox_dtor_FUN_005893e0
// 005893e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005893e5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005893ea: JNZ 0x0058941d
//   XREF to: 0058941d (CONDITIONAL_JUMP)
// 005893ec: PUSH 0x0
// 005893ee: ADD EBX,0x358
// 005893f4: PUSH EBX
// 005893f5: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 005893fa: ADD ESP,0x8
// 005893fd: PUSH 0x1
// 005893ff: LEA EBX,[EAX + 0xfffffca8]
// 00589405: PUSH EBX
// 00589406: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0058940b: ADD ESP,0x8
// 0058940e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00589412: MOV EBX,EAX
// 00589414: TEST DL,0x2
// 00589417: JNZ 0x00589438
//   XREF to: 00589438 (CONDITIONAL_JUMP)
// 00589419: MOV EAX,EBX
// 0058941b: POP EBX
// 0058941c: RET
// 0058941d: PUSH 0x662e10
//   Label: LAB_0058941d
//   XREF to: 00662e10 (DATA)
// 00589422: PUSH EBX
// 00589423: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00589428: ADD ESP,0x8
// 0058942b: PUSH EAX
// 0058942c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00589431: ADD ESP,0x4
// 00589434: MOV EAX,EBX
// 00589436: POP EBX
// 00589437: RET
// 00589438: PUSH EAX
//   Label: LAB_00589438
// 00589439: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0058943e: ADD ESP,0x4
// 00589441: MOV EAX,EBX
// 00589443: POP EBX
// 00589444: RET
