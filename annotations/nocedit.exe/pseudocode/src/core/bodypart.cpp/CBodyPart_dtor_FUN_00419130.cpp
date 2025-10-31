// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00419130
// Address: 00419130
// Address Range: [[00419130, 004191cb]]
// Convention: __cdecl
// Signature: CBodyPart * core_bodypart.cpp_CBodyPart_dtor_FUN_00419130(CBodyPart * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6)
// Globals:
//   CDemonActor_vtable g_CBodyPartVTable
//   WatcomTypeInfo g_CBodyPartTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0
//   core_bodypart.cpp_freeBodyPartModels_FUN_0041b690
//   core_box.cpp_CBox_dtor_FUN_0041dd00
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBodyPart * __cdecl
core_bodypart_cpp_CBodyPart_dtor_FUN_00419130
          (CBodyPart *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6)

{
  CBox *pCVar1;
  int iVar2;
  CBodyPart *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBodyPartTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_actor).metadata.vtable = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0();
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)(this_ptr->field1_0x158 + 0xb74));
  iVar2 = core_bodypart_cpp_freeBodyPartFires_FUN_0041b6b0
                    ((SBodyPartFire **)&pCVar1[-3].scrape_points[4].local_position.z);
  iVar2 = core_bodypart_cpp_freeBodyPartModels_FUN_0041b690((SBodyPartModel **)(iVar2 + -0x4c0));
  ptr = (CBodyPart *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar2 + -0x290),1)
  ;
  if ((d6 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00419130: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_dtor_FUN_00419130
// 00419131: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00419135: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041913a: JNZ 0x004191a4
//   XREF to: 004191a4 (CONDITIONAL_JUMP)
// 0041913c: PUSH 0x0
// 0041913e: PUSH 0x0
// 00419140: PUSH EBX
// 00419141: MOV dword ptr [EBX + 0x154],0x65add4
//   XREF to: 0065add4 (DATA)
// 0041914b: CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   XREF to: 004191d0 (UNCONDITIONAL_CALL)
// 00419150: ADD ESP,0xc
// 00419153: PUSH 0x0
// 00419155: ADD EBX,0xccc
// 0041915b: PUSH EBX
// 0041915c: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 00419161: ADD ESP,0x8
// 00419164: PUSH 0x0
// 00419166: SUB EAX,0x57c
// 0041916b: PUSH EAX
// 0041916c: CALL core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0
//   XREF to: 0041b6b0 (UNCONDITIONAL_CALL)
// 00419171: ADD ESP,0x8
// 00419174: PUSH 0x0
// 00419176: SUB EAX,0x4c0
// 0041917b: PUSH EAX
// 0041917c: CALL core_bodypart.cpp_freeBodyPartModels_FUN_0041b690
//   XREF to: 0041b690 (UNCONDITIONAL_CALL)
// 00419181: ADD ESP,0x8
// 00419184: PUSH 0x1
// 00419186: LEA EBX,[EAX + 0xfffffd70]
// 0041918c: PUSH EBX
// 0041918d: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00419192: ADD ESP,0x8
// 00419195: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00419199: MOV EBX,EAX
// 0041919b: TEST DL,0x2
// 0041919e: JNZ 0x004191bf
//   XREF to: 004191bf (CONDITIONAL_JUMP)
// 004191a0: MOV EAX,EBX
// 004191a2: POP EBX
// 004191a3: RET
// 004191a4: PUSH 0x65af00
//   Label: LAB_004191a4
//   XREF to: 0065af00 (DATA)
// 004191a9: PUSH EBX
// 004191aa: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004191af: ADD ESP,0x8
// 004191b2: PUSH EAX
// 004191b3: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004191b8: ADD ESP,0x4
// 004191bb: MOV EAX,EBX
// 004191bd: POP EBX
// 004191be: RET
// 004191bf: PUSH EAX
//   Label: LAB_004191bf
// 004191c0: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004191c5: ADD ESP,0x4
// 004191c8: MOV EAX,EBX
// 004191ca: POP EBX
// 004191cb: RET
