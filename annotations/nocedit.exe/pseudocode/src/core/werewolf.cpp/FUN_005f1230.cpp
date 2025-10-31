// Name: core_werewolf.cpp_FUN_005f1230
// Address: 005f1230
// Address Range: [[005f1230, 005f181d]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f1230()
// Cross-references:
//   core_werewolf.cpp_CWerewolf_FUN_005f1820 (005f1820) at 005f1900 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665740
//   undefined4 DAT_0066576c
//   undefined4 DAT_00665770
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0068495c
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_werewolf.cpp_FUN_005f1230(undefined4 param_1, undefined4
   param_2) */

void core_werewolf_cpp_FUN_005f1230(void)

{
  float *pfVar1;
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3i local_b8;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_7c [8];
  float local_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3i local_4c;
  float local_38;
  float local_34;
  float local_30;
  CVector3i local_2c;
  float local_1c;
  float local_18;
  float local_14;
  
  local_2c.y = (int)DAT_0066576c;
  local_2c.z = (int)DAT_00665770;
  local_ac = DAT_0066576c;
  local_a4 = 0;
  local_a8 = DAT_00665770;
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_d0 = (*in_stack_00000008 + DAT_0066576c) * *pfVar1;
  local_cc = (in_stack_00000008[1] + DAT_00665770) * *pfVar1;
  local_c8 = in_stack_00000008[2] * *pfVar1;
  if (&local_58 != &local_d0) {
    local_58 = local_d0;
    local_54 = local_cc;
    local_50 = local_c8;
  }
  local_4c.x = (int)ROUND(local_58 * _DAT_00665740);
  local_4c.y = (int)ROUND(local_54 * _DAT_00665740);
  local_4c.z = (int)ROUND(local_50 * _DAT_00665740);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_4c);
  local_9c = -DAT_0066576c;
  local_1c = DAT_00665770;
  local_94 = 0;
  local_98 = DAT_00665770;
  local_60 = *in_stack_00000008 + local_9c;
  local_5c = in_stack_00000008[1] + DAT_00665770;
  local_58 = in_stack_00000008[2];
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_6c = local_60 * *pfVar1;
  local_68 = local_5c * *pfVar1;
  local_64 = local_58 * *pfVar1;
  if (&local_54 != &local_6c) {
    local_54 = local_6c;
    local_50 = local_68;
    local_4c.x = (int)local_64;
  }
  local_7c._4_4_ = (undefined4)ROUND(local_54 * _DAT_00665740);
  local_74 = (float)(int)ROUND(local_50 * _DAT_00665740);
  local_70 = (int)ROUND((float)local_4c.x * _DAT_00665740);
  local_18 = local_9c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_7c + 4)
            );
  local_ac = -DAT_00665770;
  local_b8.z = (int)-DAT_0066576c;
  local_a8 = 0.0;
  local_38 = *in_stack_00000008 + (float)local_b8.z;
  local_34 = in_stack_00000008[1] + local_ac;
  local_30 = in_stack_00000008[2];
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_8c = local_38 * *pfVar1;
  local_88 = local_34 * *pfVar1;
  local_84 = local_30 * *pfVar1;
  if (&local_50 != &local_8c) {
    local_50 = local_8c;
    local_4c.x = (int)local_88;
    local_4c.y = (int)local_84;
  }
  local_2c.x = (int)ROUND(local_50 * _DAT_00665740);
  local_2c.y = (int)ROUND((float)local_4c.x * _DAT_00665740);
  local_2c.z = (int)ROUND((float)local_4c.y * _DAT_00665740);
  local_14 = (float)local_b8.z;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_2c);
  local_cc = -DAT_00665770;
  local_d0 = DAT_0066576c;
  local_c8 = 0.0;
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_7c._0_4_ = (*in_stack_00000008 + DAT_0066576c) * *pfVar1;
  local_7c._4_4_ = (in_stack_00000008[1] + local_cc) * *pfVar1;
  local_74 = in_stack_00000008[2] * *pfVar1;
  if (&local_4c != (CVector3i *)local_7c) {
    local_4c.x = local_7c._0_4_;
    local_4c.y = local_7c._4_4_;
    local_4c.z = (int)local_74;
  }
  local_b8.x = (int)ROUND((float)local_4c.x * _DAT_00665740);
  local_b8.y = (int)ROUND((float)local_4c.y * _DAT_00665740);
  local_b8.z = (int)ROUND((float)local_4c.z * _DAT_00665740);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_b8);
  this_ptr = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr->color = 0;
  this_ptr->vertex_buffer_ptr->fog = 0.0;
  this_ptr->vertex_buffer_ptr[1].light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr[1].color = 0;
  this_ptr->vertex_buffer_ptr[1].fog = 0.0;
  this_ptr->vertex_buffer_ptr[2].light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr[2].color = 0;
  this_ptr->vertex_buffer_ptr[2].fog = 0.0;
  this_ptr->vertex_buffer_ptr[3].light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr[3].color = 0;
  this_ptr->vertex_buffer_ptr[3].fog = 0.0;
  this_ptr->vertex_buffer_ptr->w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr[1].w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr[2].w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr[3].w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr->u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr,&DAT_0068495c);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xfffffefc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 005f1230: PUSH EBX
//   Label: core_werewolf.cpp_FUN_005f1230
// 005f1231: PUSH ESI
// 005f1232: PUSH EDI
// 005f1233: PUSH EBP
// 005f1234: SUB ESP,0x10c
// 005f123a: MOV EDI,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x4] (READ)
// 005f1241: MOV ESI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x8] (READ)
// 005f1248: MOV EAX,[0x0066576c]
//   XREF to: 0066576c (READ)
// 005f124d: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005f1254: MOV EAX,[0x00665770]
//   XREF to: 00665770 (READ)
// 005f1259: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005f1260: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x28] (READ)
// 005f1267: XOR EDX,EDX
// 005f1269: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005f126d: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x24] (READ)
// 005f1274: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0xa4] (WRITE)
// 005f1278: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005f127c: FLD float ptr [ESI]
// 005f127e: FADD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x28] (READ)
// 005f1285: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0xe8] (WRITE)
// 005f1289: FLD float ptr [ESI + 0x4]
// 005f128c: FADD float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x24] (READ)
// 005f1293: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe4] (WRITE)
// 005f1297: MOV EAX,dword ptr [ESI + 0x8]
// 005f129a: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005f129e: LEA EAX,[EDI + 0x261c]
// 005f12a4: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0xe8] (READ)
// 005f12a8: FMUL float ptr [EAX]
// 005f12aa: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe4] (READ)
// 005f12ae: FXCH
// 005f12b0: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xd0] (WRITE)
// 005f12b4: FMUL float ptr [EAX]
// 005f12b6: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xe0] (READ)
// 005f12ba: FXCH
// 005f12bc: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0xcc] (WRITE)
// 005f12c0: FMUL float ptr [EAX]
// 005f12c2: LEA EDX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f12c9: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0xd0] (DATA)
// 005f12cd: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0xc8] (WRITE)
// 005f12d1: CMP EDX,EAX
// 005f12d3: JZ 0x005f12f6
//   XREF to: 005f12f6 (CONDITIONAL_JUMP)
// 005f12d5: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0xd0] (DATA)
// 005f12d9: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005f12e0: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0xcc] (READ)
// 005f12e4: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005f12eb: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0xc8] (READ)
// 005f12ef: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005f12f6: LEA EBX,[ESP + 0xd0]
//   Label: LAB_005f12f6
//   XREF to: Stack[-0x4c] (DATA)
// 005f12fd: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f1304: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005f130a: FLD float ptr [EAX]
//   XREF to: Stack[-0x58] (DATA)
// 005f130c: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1312: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x4c] (DATA)
// 005f1314: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 005f1317: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f131d: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x48] (WRITE)
// 005f1320: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 005f1323: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1329: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x44] (WRITE)
// 005f132c: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x4c] (DATA)
// 005f1333: PUSH EAX
// 005f1334: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005f1336: PUSH EAX
// 005f1337: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005f133c: FLD float ptr [0x0066576c]
//   XREF to: 0066576c (READ)
// 005f1342: MOV EAX,[0x00665770]
//   XREF to: 00665770 (READ)
// 005f1347: ADD ESP,0x8
// 005f134a: FCHS
// 005f134c: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f1353: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005f135a: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (READ)
// 005f1361: XOR ECX,ECX
// 005f1363: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005f1367: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x20] (READ)
// 005f136e: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x98] (WRITE)
// 005f1375: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005f137c: FLD float ptr [ESI]
// 005f137e: FADD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (READ)
// 005f1385: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x64] (WRITE)
// 005f138c: FLD float ptr [ESI + 0x4]
// 005f138f: FADD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x20] (READ)
// 005f1396: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x60] (WRITE)
// 005f139d: MOV EAX,dword ptr [ESI + 0x8]
// 005f13a0: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005f13a7: LEA EAX,[EDI + 0x261c]
// 005f13ad: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x64] (READ)
// 005f13b4: FMUL float ptr [EAX]
// 005f13b6: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x60] (READ)
// 005f13bd: FXCH
// 005f13bf: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x70] (WRITE)
// 005f13c6: FMUL float ptr [EAX]
// 005f13c8: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x5c] (READ)
// 005f13cf: FXCH
// 005f13d1: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x6c] (WRITE)
// 005f13d8: FMUL float ptr [EAX]
// 005f13da: LEA EDX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f13e1: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x70] (DATA)
// 005f13e8: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x68] (WRITE)
// 005f13ef: CMP EDX,EAX
// 005f13f1: JZ 0x005f141d
//   XREF to: 005f141d (CONDITIONAL_JUMP)
// 005f13f3: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x70] (DATA)
// 005f13fa: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005f1401: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x6c] (READ)
// 005f1408: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005f140f: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x68] (READ)
// 005f1416: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005f141d: LEA EBX,[ESP + 0xa0]
//   Label: LAB_005f141d
//   XREF to: Stack[-0x7c] (DATA)
// 005f1424: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f142b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005f1431: FLD float ptr [EAX]
//   XREF to: Stack[-0x58] (DATA)
// 005f1433: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1439: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x7c] (DATA)
// 005f143b: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 005f143e: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1444: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x78] (WRITE)
// 005f1447: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 005f144a: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1450: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x74] (WRITE)
// 005f1453: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x7c] (DATA)
// 005f145a: PUSH EAX
// 005f145b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005f145d: ADD EAX,0x30
// 005f1460: PUSH EAX
// 005f1461: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005f1466: FLD float ptr [0x00665770]
//   XREF to: 00665770 (READ)
// 005f146c: FLD float ptr [0x0066576c]
//   XREF to: 0066576c (READ)
// 005f1472: ADD ESP,0x8
// 005f1475: FXCH
// 005f1477: FCHS
// 005f1479: FXCH
// 005f147b: FCHS
// 005f147d: XOR EBX,EBX
// 005f147f: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f1486: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (READ)
// 005f148d: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (WRITE)
// 005f1494: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005f1498: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 005f149f: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0xb0] (WRITE)
// 005f14a3: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005f14a7: FLD float ptr [ESI]
// 005f14a9: FADD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (READ)
// 005f14b0: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x40] (WRITE)
// 005f14b7: FLD float ptr [ESI + 0x4]
// 005f14ba: FADD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 005f14c1: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x3c] (WRITE)
// 005f14c8: MOV EAX,dword ptr [ESI + 0x8]
// 005f14cb: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005f14d2: LEA EAX,[EDI + 0x261c]
// 005f14d8: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x40] (READ)
// 005f14df: FMUL float ptr [EAX]
// 005f14e1: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x3c] (READ)
// 005f14e8: FXCH
// 005f14ea: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x94] (WRITE)
// 005f14f1: FMUL float ptr [EAX]
// 005f14f3: FLD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x38] (READ)
// 005f14fa: FXCH
// 005f14fc: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x90] (WRITE)
// 005f1503: FMUL float ptr [EAX]
// 005f1505: LEA EDX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f150c: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x94] (DATA)
// 005f1513: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x8c] (WRITE)
// 005f151a: CMP EDX,EAX
// 005f151c: JZ 0x005f1548
//   XREF to: 005f1548 (CONDITIONAL_JUMP)
// 005f151e: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x94] (DATA)
// 005f1525: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005f152c: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x90] (READ)
// 005f1533: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005f153a: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x8c] (READ)
// 005f1541: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005f1548: LEA EBX,[ESP + 0xe8]
//   Label: LAB_005f1548
//   XREF to: Stack[-0x34] (DATA)
// 005f154f: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f1556: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005f155c: FLD float ptr [EAX]
//   XREF to: Stack[-0x58] (DATA)
// 005f155e: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1564: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 005f1566: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 005f1569: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f156f: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 005f1572: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 005f1575: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f157b: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 005f157e: LEA EAX,[ESP + 0xe8]
//   XREF to: Stack[-0x34] (DATA)
// 005f1585: PUSH EAX
// 005f1586: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005f1588: ADD EAX,0x60
// 005f158b: PUSH EAX
// 005f158c: XOR EBP,EBP
// 005f158e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005f1593: FLD float ptr [0x00665770]
//   XREF to: 00665770 (READ)
// 005f1599: MOV EAX,[0x0066576c]
//   XREF to: 0066576c (READ)
// 005f159e: ADD ESP,0x8
// 005f15a1: FCHS
// 005f15a3: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (WRITE)
// 005f15aa: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005f15b1: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005f15b5: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 005f15bc: MOV dword ptr [ESP + 0x48],EBP
//   XREF to: Stack[-0xd4] (WRITE)
// 005f15c0: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005f15c4: FLD float ptr [ESI]
// 005f15c6: FADD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005f15cd: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xf4] (WRITE)
// 005f15d1: FLD float ptr [ESI + 0x4]
// 005f15d4: FADD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 005f15db: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xf0] (WRITE)
// 005f15df: MOV EAX,dword ptr [ESI + 0x8]
// 005f15e2: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005f15e6: LEA EAX,[EDI + 0x261c]
// 005f15ec: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0xf4] (READ)
// 005f15f0: FMUL float ptr [EAX]
// 005f15f2: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xf0] (READ)
// 005f15f6: FXCH
// 005f15f8: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x88] (WRITE)
// 005f15ff: FMUL float ptr [EAX]
// 005f1601: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xec] (READ)
// 005f1605: FXCH
// 005f1607: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x84] (WRITE)
// 005f160e: FMUL float ptr [EAX]
// 005f1610: LEA EBX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f1617: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x88] (DATA)
// 005f161e: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x80] (WRITE)
// 005f1625: CMP EBX,EAX
// 005f1627: JZ 0x005f1653
//   XREF to: 005f1653 (CONDITIONAL_JUMP)
// 005f1629: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x88] (DATA)
// 005f1630: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005f1637: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x84] (READ)
// 005f163e: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005f1645: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x80] (READ)
// 005f164c: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005f1653: LEA EBX,[ESP + 0x58]
//   Label: LAB_005f1653
//   XREF to: Stack[-0xc4] (DATA)
// 005f1657: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x58] (DATA)
// 005f165e: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005f1664: FLD float ptr [EAX]
//   XREF to: Stack[-0x58] (DATA)
// 005f1666: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f166c: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xc4] (DATA)
// 005f166e: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 005f1671: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1677: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc0] (WRITE)
// 005f167a: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 005f167d: FMUL float ptr [0x00665740]
//   XREF to: 00665740 (READ)
// 005f1683: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xbc] (WRITE)
// 005f1686: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0xc4] (DATA)
// 005f168a: PUSH EAX
// 005f168b: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 005f168d: ADD EAX,0x90
// 005f1692: PUSH EAX
// 005f1693: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005f1698: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005f169d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f169f: MOV dword ptr [EDX + 0x20],0xffff
// 005f16a6: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16a8: MOV dword ptr [EDX + 0x24],0x0
// 005f16af: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16b1: MOV dword ptr [EBX + 0x28],0x0
// 005f16b8: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16ba: MOV dword ptr [EBX + 0x50],0xffff
// 005f16c1: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16c3: MOV dword ptr [EDX + 0x54],0x0
// 005f16ca: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16cc: MOV dword ptr [EDX + 0x58],0x0
// 005f16d3: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16d5: MOV dword ptr [EBX + 0x80],0xffff
// 005f16df: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16e1: MOV dword ptr [EBX + 0x84],0x0
// 005f16eb: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16ed: MOV dword ptr [EBX + 0x88],0x0
// 005f16f7: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f16f9: MOV dword ptr [EDX + 0xb0],0xffff
// 005f1703: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1705: MOV dword ptr [EDX + 0xb4],0x0
// 005f170f: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1711: MOV dword ptr [EDX + 0xb8],0x0
// 005f171b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f171d: MOV dword ptr [EBX + 0x2c],0x4000
// 005f1724: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1726: MOV dword ptr [EBX + 0x5c],0x4000
// 005f172d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f172f: MOV dword ptr [EDX + 0x8c],0x4000
// 005f1739: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f173b: MOV dword ptr [EDX + 0xbc],0x4000
// 005f1745: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1747: MOV dword ptr [EDX + 0x18],0x80000
// 005f174e: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1750: MOV dword ptr [EBX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 005f1757: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1759: ADD ESP,0x8
// 005f175c: MOV dword ptr [EBX + 0x48],0xf80000
//   XREF to: 00f80000 (DATA)
// 005f1763: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1765: MOV dword ptr [EBX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 005f176c: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f176e: MOV dword ptr [EBX + 0x78],0xf80000
//   XREF to: 00f80000 (DATA)
// 005f1775: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1777: MOV dword ptr [EBX + 0x7c],0x80000
// 005f177e: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1780: MOV EDX,0x4
// 005f1785: MOV dword ptr [EBX + 0xa8],0x80000
// 005f178f: PUSH 0x68495c
//   XREF to: 0068495c (DATA)
// 005f1794: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005f1796: XOR ECX,ECX
// 005f1798: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005f1799: MOV dword ptr [EBX + 0xac],0x80000
// 005f17a3: MOV EBX,0x3
// 005f17a8: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x118] (WRITE)
// 005f17ac: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x108] (WRITE)
// 005f17b0: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x10c] (WRITE)
// 005f17b4: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x110] (WRITE)
// 005f17b8: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x114] (WRITE)
// 005f17bc: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x104] (WRITE)
// 005f17c0: MOV EDX,0x1
// 005f17c5: MOV ECX,0x2
// 005f17ca: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0xf8] (WRITE)
// 005f17ce: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x100] (WRITE)
// 005f17d2: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0xfc] (WRITE)
// 005f17d6: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005f17db: ADD ESP,0x8
// 005f17de: PUSH 0x1
// 005f17e0: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005f17e6: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005f17e7: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005f17ec: ADD ESP,0x8
// 005f17ef: MOV EAX,ESP
// 005f17f1: PUSH EAX
// 005f17f2: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005f17f8: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005f17f9: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 005f17fe: ADD ESP,0x8
// 005f1801: XOR EBP,EBP
// 005f1803: PUSH EBP
// 005f1804: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005f180a: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005f180b: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005f1810: ADD ESP,0x8
// 005f1813: ADD ESP,0x10c
// 005f1819: POP EBP
// 005f181a: POP EDI
// 005f181b: POP ESI
// 005f181c: POP EBX
// 005f181d: RET
