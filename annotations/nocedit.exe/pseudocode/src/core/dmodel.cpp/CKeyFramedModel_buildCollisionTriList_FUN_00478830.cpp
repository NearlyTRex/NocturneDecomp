// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
// Address: 00478830
// Address Range: [[00478830, 00478946]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 (00476f20) at 004770fa [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 (00477110) at 0047767c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e457 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f8b4
//   TerminatedCString s_core_dmodel_cpp_0061f8c7
//   TerminatedCString s_core_dmodel_cpp_0061f8da
//   TerminatedCString s_CKeyFramedModel_buildCol_0061f8ed
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CVector3f g_ZeroVector
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_free_FUN_005fe659
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel *this_ptr)

{
  int iVar1;
  CDemonTriangle *pCVar2;
  CDemonTriangle *pCVar3;
  int iVar4;
  float fVar5;
  
  g_CurrentDebugLine = 0x45e;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  if (this_ptr->collision_triangle_list != (CDemonTriangle *)0x0) {
    crt_memory_c_free_FUN_005fe659(&this_ptr->collision_triangle_list[-1].area);
  }
  this_ptr->collision_triangle_count = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    iVar4 = 0;
    if (0 < this_ptr->poly_count) {
      iVar1 = 0;
      do {
        iVar4 = iVar4 + 1;
        this_ptr->collision_triangle_count =
             this_ptr->collision_triangle_count +
             *(int *)((int)this_ptr->poly_vert_list + iVar1 + 4) + -2;
        iVar1 = iVar1 + 0x48;
      } while (iVar4 < this_ptr->poly_count);
    }
    fVar5 = (float)(this_ptr->frame_count * this_ptr->collision_triangle_count);
    pCVar2 = (CDemonTriangle *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       ((int)fVar5 * 0x38 + 4,"..\\core\\dmodel.cpp",0x46f);
    pCVar3 = pCVar2;
    if (pCVar2 != (CDemonTriangle *)0x0) {
      pCVar3 = (CDemonTriangle *)&(pCVar2->vertex1).y;
      (pCVar2->vertex1).x = fVar5;
    }
    this_ptr->collision_triangle_list = pCVar3;
    if (pCVar3 == (CDemonTriangle *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x470;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(this_ptr,&g_ZeroVector);
  }
  return;
}


// Assembly code:
// 00478830: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
// 00478831: PUSH ESI
// 00478832: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00478836: MOV ECX,0x45e
// 0047883b: MOV EDX,0x61f8b4
//   XREF to: 0061f8b4 (PARAM)
// 00478840: MOV EAX,dword ptr [EBX + 0x5698]
// 00478846: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0047884c: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00478852: TEST EAX,EAX
// 00478854: JNZ 0x00478936
//   XREF to: 00478936 (CONDITIONAL_JUMP)
// 0047885a: MOV dword ptr [EBX + 0x5694],0x0
//   Label: LAB_0047885a
// 00478864: MOV ESI,dword ptr [EBX + 0x110]
// 0047886a: MOV dword ptr [EBX + 0x5698],0x0
// 00478874: CMP ESI,0x1
// 00478877: JL 0x00478933
//   XREF to: 00478933 (CONDITIONAL_JUMP)
// 0047887d: CMP dword ptr [EBX + 0x100],0x1
// 00478884: JL 0x00478933
//   XREF to: 00478933 (CONDITIONAL_JUMP)
// 0047888a: XOR EDX,EDX
// 0047888c: TEST ESI,ESI
// 0047888e: JLE 0x004788bd
//   XREF to: 004788bd (CONDITIONAL_JUMP)
// 00478890: PUSH EDI
// 00478891: XOR EAX,EAX
// 00478893: ADD EAX,0x48
//   Label: LAB_00478893
// 00478896: MOV ECX,dword ptr [EBX + 0x114]
// 0047889c: MOV ECX,dword ptr [ECX + EAX*0x1 + -0x44]
// 004788a0: MOV ESI,dword ptr [EBX + 0x5694]
// 004788a6: SUB ECX,0x2
// 004788a9: INC EDX
// 004788aa: ADD ESI,ECX
// 004788ac: MOV EDI,dword ptr [EBX + 0x110]
// 004788b2: MOV dword ptr [EBX + 0x5694],ESI
// 004788b8: CMP EDX,EDI
// 004788ba: JL 0x00478893
//   XREF to: 00478893 (CONDITIONAL_JUMP)
// 004788bc: POP EDI
// 004788bd: MOV ESI,dword ptr [EBX + 0x100]
//   Label: LAB_004788bd
// 004788c3: IMUL ESI,dword ptr [EBX + 0x5694]
// 004788ca: LEA EAX,[ESI*0x8 + 0x0]
// 004788d1: MOV EDX,EAX
// 004788d3: SHL EAX,0x3
// 004788d6: PUSH 0x46f
// 004788db: SUB EAX,EDX
// 004788dd: PUSH 0x61f8c7
//   XREF to: 0061f8c7 (DATA)
// 004788e2: ADD EAX,0x4
// 004788e5: PUSH EAX
// 004788e6: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004788eb: ADD ESP,0xc
// 004788ee: TEST EAX,EAX
// 004788f0: JZ 0x004788f8
//   XREF to: 004788f8 (CONDITIONAL_JUMP)
// 004788f2: ADD EAX,0x4
// 004788f5: MOV dword ptr [EAX + -0x4],ESI
// 004788f8: MOV dword ptr [EBX + 0x5698],EAX
//   Label: LAB_004788f8
// 004788fe: TEST EAX,EAX
// 00478900: JNZ 0x00478925
//   XREF to: 00478925 (CONDITIONAL_JUMP)
// 00478902: MOV EDX,0x61f8da
//   XREF to: 0061f8da (PARAM)
// 00478907: MOV ECX,0x470
// 0047890c: PUSH 0x61f8ed
//   XREF to: 0061f8ed (DATA)
// 00478911: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00478917: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0047891d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00478922: ADD ESP,0x4
// 00478925: PUSH 0x3f87558
//   Label: LAB_00478925
//   XREF to: 03f87558 (DATA)
// 0047892a: PUSH EBX
// 0047892b: CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
//   XREF to: 00478950 (UNCONDITIONAL_CALL)
// 00478930: ADD ESP,0x8
// 00478933: POP ESI
//   Label: LAB_00478933
// 00478934: POP EBX
// 00478935: RET
// 00478936: SUB EAX,0x4
//   Label: LAB_00478936
// 00478939: PUSH EAX
// 0047893a: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0047893f: ADD ESP,0x4
// 00478942: JMP 0x0047885a
//   XREF to: 0047885a (UNCONDITIONAL_JUMP)
