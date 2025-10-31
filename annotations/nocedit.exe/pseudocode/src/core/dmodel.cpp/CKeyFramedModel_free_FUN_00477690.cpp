// Name: core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
// Address: 00477690
// Address Range: [[00477690, 0047784d]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 (00477bf0) at 00477d34 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90 (00476d90) at 00476d96 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10 (0047ea10) at 0047ea1a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479719 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476db9 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047da20 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_freeAllModels_FUN_00478cb0 (00478cb0) at 00478cbe [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_cleanup_FUN_00504720 (00504720) at 00504747 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_free_FUN_00529ce0 (00529ce0) at 00529d08 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_clear_FUN_005693c0 (005693c0) at 005693c7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00596a95 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f534
//   TerminatedCString s_core_dmodel_cpp_0061f547
//   TerminatedCString s_core_dmodel_cpp_0061f55a
//   TerminatedCString s_core_dmodel_cpp_0061f56d
//   TerminatedCString s_core_dmodel_cpp_0061f580
//   TerminatedCString s_core_dmodel_cpp_0061f593
//   TerminatedCString s_core_dmodel_cpp_0061f5a6
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel *this_ptr)

{
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1a5;
  crt_memory_c_free_FUN_005fe659(this_ptr->vertex_list);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1a8;
  this_ptr->vertex_list = (CVector3i **)0x0;
  crt_memory_c_free_FUN_005fe659(this_ptr->vertex_normal_list);
  this_ptr->vertex_normal_list = (CVector3i **)0x0;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1ab;
  crt_memory_c_free_FUN_005fe659(this_ptr->poly_vert_list);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1ae;
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad **)0x0;
  crt_memory_c_free_FUN_005fe659(this_ptr->poly_texture_index_list);
  this_ptr->poly_texture_index_list = (int *)0x0;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1b1;
  crt_memory_c_free_FUN_005fe659(this_ptr->env_map_opac_list);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1b4;
  this_ptr->env_map_opac_list = (uchar *)0x0;
  if (this_ptr->frame_bounds != (CVector3f *)0x0) {
    crt_memory_c_free_FUN_005fe659(&this_ptr->frame_bounds[-1].z);
  }
  this_ptr->frame_bounds = (CVector3f *)0x0;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0x1b7;
  if (this_ptr->collision_triangle_list != (CDemonTriangle *)0x0) {
    crt_memory_c_free_FUN_005fe659(&this_ptr->collision_triangle_list[-1].area);
  }
  this_ptr->vertex_count = 0;
  this_ptr->poly_count = 0;
  this_ptr->texture_count = 0;
  this_ptr->part_count = 0;
  this_ptr->frame_count = 0;
  this_ptr->collision_triangle_count = 0;
  this_ptr->transparent_pixel_flag = 0;
  this_ptr->disable_backface_culling = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  return;
}


// Assembly code:
// 00477690: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
// 00477691: PUSH ESI
// 00477692: PUSH EDI
// 00477693: PUSH EBP
// 00477694: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00477698: MOV EDX,0x61f534
//   XREF to: 0061f534 (PARAM)
// 0047769d: MOV ECX,0x1a5
// 004776a2: MOV EDI,0x61f547
//   XREF to: 0061f547 (DATA)
// 004776a7: MOV ESI,dword ptr [EBX + 0x10c]
// 004776ad: MOV EBP,0x1a8
// 004776b2: PUSH ESI
// 004776b3: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 004776b9: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 004776bf: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004776c4: ADD ESP,0x4
// 004776c7: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 004776cd: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 004776d3: MOV EAX,dword ptr [EBX + 0x108]
// 004776d9: MOV dword ptr [EBX + 0x10c],0x0
// 004776e3: PUSH EAX
// 004776e4: MOV EDI,0x61f56d
//   XREF to: 0061f56d (DATA)
// 004776e9: MOV EBP,0x1ae
// 004776ee: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004776f3: MOV EDX,0x61f55a
//   XREF to: 0061f55a (PARAM)
// 004776f8: MOV ECX,0x1ab
// 004776fd: ADD ESP,0x4
// 00477700: MOV ESI,dword ptr [EBX + 0x114]
// 00477706: MOV dword ptr [EBX + 0x108],0x0
// 00477710: PUSH ESI
// 00477711: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00477717: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0047771d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00477722: ADD ESP,0x4
// 00477725: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 0047772b: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 00477731: MOV EAX,dword ptr [EBX + 0x118]
// 00477737: MOV dword ptr [EBX + 0x114],0x0
// 00477741: PUSH EAX
// 00477742: MOV EDI,0x61f593
//   XREF to: 0061f593 (DATA)
// 00477747: MOV EBP,0x1b4
// 0047774c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00477751: MOV EDX,0x61f580
//   XREF to: 0061f580 (PARAM)
// 00477756: MOV ECX,0x1b1
// 0047775b: ADD ESP,0x4
// 0047775e: MOV ESI,dword ptr [EBX + 0x11c]
// 00477764: MOV dword ptr [EBX + 0x118],0x0
// 0047776e: PUSH ESI
// 0047776f: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00477775: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0047777b: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00477780: ADD ESP,0x4
// 00477783: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00477789: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 0047778f: MOV EAX,dword ptr [EBX + 0x5690]
// 00477795: MOV dword ptr [EBX + 0x11c],0x0
// 0047779f: TEST EAX,EAX
// 004777a1: JNZ 0x0047782f
//   XREF to: 0047782f (CONDITIONAL_JUMP)
// 004777a7: MOV EAX,0x61f5a6
//   Label: LAB_004777a7
//   XREF to: 0061f5a6 (DATA)
// 004777ac: MOV EDX,0x1b7
// 004777b1: MOV dword ptr [EBX + 0x5690],0x0
// 004777bb: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 004777c0: MOV EAX,dword ptr [EBX + 0x5698]
// 004777c6: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 004777cc: TEST EAX,EAX
// 004777ce: JNZ 0x00477840
//   XREF to: 00477840 (CONDITIONAL_JUMP)
// 004777d0: MOV dword ptr [EBX + 0x104],0x0
//   Label: LAB_004777d0
// 004777da: MOV dword ptr [EBX + 0x110],0x0
// 004777e4: MOV dword ptr [EBX + 0x120],0x0
// 004777ee: MOV dword ptr [EBX + 0x5584],0x0
// 004777f8: MOV dword ptr [EBX + 0x100],0x0
// 00477802: MOV dword ptr [EBX + 0x5694],0x0
// 0047780c: MOV dword ptr [EBX + 0x569c],0x0
// 00477816: MOV dword ptr [EBX + 0x56a0],0x0
// 00477820: MOV dword ptr [EBX + 0x5698],0x0
// 0047782a: POP EBP
// 0047782b: POP EDI
// 0047782c: POP ESI
// 0047782d: POP EBX
// 0047782e: RET
// 0047782f: SUB EAX,0x4
//   Label: LAB_0047782f
// 00477832: PUSH EAX
// 00477833: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00477838: ADD ESP,0x4
// 0047783b: JMP 0x004777a7
//   XREF to: 004777a7 (UNCONDITIONAL_JUMP)
// 00477840: SUB EAX,0x4
//   Label: LAB_00477840
// 00477843: PUSH EAX
// 00477844: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00477849: ADD ESP,0x4
// 0047784c: JMP 0x004777d0
//   XREF to: 004777d0 (UNCONDITIONAL_JUMP)
