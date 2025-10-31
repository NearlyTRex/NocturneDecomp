// Name: core_fire.cpp_CRock_render_FUN_004c1870
// Address: 004c1870
// Address Range: [[004c1870, 004c18f4] [004c18fe, 004c1936]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CRock_render_FUN_004c1870(CRock * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_set.cpp_CDemonSet_FUN_0056d380
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_render_FUN_004c1870(CRock *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,(CVector3i *)this_ptr->field1_0x38,(CVector3i *)0x0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0((CBoundingBox3D *)&stack0xffffffe8);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
              (*(CKeyFramedModel **)(this_ptr->field1_0x38 + 0xc),(CKeyFramedModelInstance *)0x0,0,
               -1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c1870: PUSH EBX
//   Label: core_fire.cpp_CRock_render_FUN_004c1870
// 004c1871: PUSH EBP
// 004c1872: SUB ESP,0x18
// 004c1875: MOV EBX,dword ptr [ESP + 0x24]
// 004c1879: PUSH EBX
// 004c187a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1880: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c1881: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c1886: ADD ESP,0x8
// 004c1889: PUSH 0x0
// 004c188b: LEA EAX,[EBX + 0x38]
// 004c188e: PUSH EAX
// 004c188f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1895: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c1896: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004c189b: MOV EDX,dword ptr [EBX + 0x44]
// 004c189e: MOV EDX,dword ptr [EDX + 0x5690]
// 004c18a4: ADD ESP,0xc
// 004c18a7: MOV EAX,dword ptr [EDX]
// 004c18a9: MOV dword ptr [ESP],EAX
// 004c18ac: LEA EAX,[EDX + 0x4]
// 004c18af: MOV EAX,dword ptr [EAX]
// 004c18b1: MOV dword ptr [ESP + 0x4],EAX
// 004c18b5: LEA EAX,[EDX + 0x8]
// 004c18b8: MOV EAX,dword ptr [EAX]
// 004c18ba: MOV dword ptr [ESP + 0x8],EAX
// 004c18be: MOV EAX,dword ptr [EDX + 0xc]
// 004c18c1: ADD EDX,0xc
// 004c18c4: MOV dword ptr [ESP + 0xc],EAX
// 004c18c8: LEA EAX,[EDX + 0x4]
// 004c18cb: MOV EAX,dword ptr [EAX]
// 004c18cd: MOV dword ptr [ESP + 0x10],EAX
// 004c18d1: LEA EAX,[EDX + 0x8]
// 004c18d4: MOV EAX,dword ptr [EAX]
// 004c18d6: MOV dword ptr [ESP + 0x14],EAX
// 004c18da: MOV EAX,ESP
// 004c18dc: PUSH EAX
// 004c18dd: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004c18e2: ADD ESP,0x4
// 004c18e5: TEST EAX,EAX
// 004c18e7: JNZ 0x004c18fe
//   XREF to: 004c18fe (CONDITIONAL_JUMP)
// 004c18e9: MOV EBP,dword ptr [0x006703ec]
//   Label: LAB_004c18e9
//   XREF to: 006703ec (READ)
// 004c18ef: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004c18f0: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004c18fe: PUSH EDI
//   Label: LAB_004c18fe
// 004c18ff: PUSH ESI
// 004c1900: PUSH 0x0
// 004c1902: LEA EAX,[ESP + 0x18]
// 004c1906: PUSH EAX
// 004c1907: LEA EAX,[ESP + 0x10]
// 004c190b: PUSH EAX
// 004c190c: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004c1911: PUSH EBX
// 004c1912: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004c1918: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004c1919: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 004c191e: ADD ESP,0x18
// 004c1921: PUSH -0x1
// 004c1923: PUSH 0x0
// 004c1925: PUSH 0x0
// 004c1927: MOV EDI,dword ptr [EBX + 0x44]
// 004c192a: PUSH EDI
// 004c192b: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 004c1930: ADD ESP,0x10
// 004c1933: POP ESI
// 004c1934: POP EDI
// 004c1935: JMP 0x004c18e9
//   XREF to: 004c18e9 (UNCONDITIONAL_JUMP)
