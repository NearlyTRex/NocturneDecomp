// Name: core_dskybox.cpp_renderSkyDome_FUN_004901f0
// Address: 004901f0
// Address Range: [[004901f0, 004906a3]]
// Convention: __cdecl
// Signature: void core_dskybox.cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic * sky_texture, char * texture_name, float brightness_factor)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a3a3 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b6ff [UNCONDITIONAL_CALL]
// Globals:
//   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
//   double DOUBLE_0062256a = 0.5
//   double DOUBLE_00622572 = 1.41400000000000
//   double DOUBLE_0062257a = 0.589048622531250
//   double DOUBLE_00622582 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   float g_SkyDomeVertexScale = 5
//   undefined4 DAT_01000000
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3i CVector3i_02ca0388
//   undefined4 CVector3i_02ca0388.y
//   undefined4 CVector3i_02ca0388.z
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
//   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
//   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dskybox_cpp_renderSkyDome_FUN_004901f0
          (SMRGLTextureBasic *sky_texture,char *texture_name,float brightness_factor)

{
  char cVar1;
  float fVar2;
  int iVar3;
  CDemonRenderer *this_ptr;
  undefined4 extraout_EAX;
  undefined4 *extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float *uv_offset;
  int iVar6;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  SMRGLHeaderPrimitive local_88;
  int local_70;
  float local_6c;
  uint local_68;
  int local_64;
  CVector3f local_60;
  float local_54;
  undefined1 local_50 [8];
  CVector3i aCStack_48 [2];
  float local_2c;
  float local_28;
  float local_24;
  int local_14;
  
  pcVar7 = sky_texture->texture_name + 4;
  do {
    cVar1 = *texture_name;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  (sky_texture->base).type = (int)brightness_factor;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_60);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
            (&g_CDemonRaytraceInstance,(CVector3f *)local_50);
  fVar2 = (float)DOUBLE_0062256a;
  CVector3i_02ca0388.x = (int)((local_60.z + (float)local_50._4_4_) * fVar2);
  CVector3i_02ca0388.z = (int)(((float)local_50._0_4_ + (float)aCStack_48[0].y) * fVar2);
  local_2c = ((float)local_50._4_4_ - local_60.z) * fVar2 * (float)DOUBLE_00622572;
  g_SkyDomeVertexScale = 0.0;
  CVector3i_02ca0388.y = (int)local_54;
  if (0.0 < local_2c) {
    g_SkyDomeVertexScale = local_2c;
  }
  local_24 = ((float)aCStack_48[0].x - local_54) * (float)DOUBLE_00622572;
  if (g_SkyDomeVertexScale < local_24) {
    g_SkyDomeVertexScale = local_24;
  }
  local_28 = ((float)aCStack_48[0].y - (float)local_50._0_4_) * (float)DOUBLE_0062256a *
             (float)DOUBLE_00622572;
  if (g_SkyDomeVertexScale < local_28) {
    g_SkyDomeVertexScale = local_28;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&CVector3i_02ca0388);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)&(sky_texture->base).count);
  fVar9 = (float10)fsin((float10)DOUBLE_0062257a);
  fVar9 = fVar9 * (float10)g_SkyDomeVertexScale * (float10)DOUBLE_00622582;
  fVar10 = (float10)g_SkyDomeVertexScale * (float10)DOUBLE_00622582;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_60.z = (float)(int)ROUND(fVar9);
  local_50._0_4_ = local_60.z;
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),&local_60.z));
  local_50._0_4_ = (undefined4)ROUND(fVar10);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)*extraout_ECX,SUB84(dVar11,0));
  local_50._0_4_ = -local_50._0_4_;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_50);
  aCStack_48[0].y = -aCStack_48[0].y;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)(local_50 + 4)
            );
  aCStack_48[0].x = -aCStack_48[0].x;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,aCStack_48);
  this_ptr = g_CDemonRendererPtr;
  fVar2 = (float)(sky_texture->base).type;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = fVar2;
  this_ptr->vertex_buffer_ptr->color = (int)fVar2;
  this_ptr->vertex_buffer_ptr->fog = fVar2;
  this_ptr->vertex_buffer_ptr->w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].light = fVar2;
  this_ptr->vertex_buffer_ptr[1].color = (int)fVar2;
  this_ptr->vertex_buffer_ptr[1].fog = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[1].w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[2].light = fVar2;
  this_ptr->vertex_buffer_ptr[2].color = (int)fVar2;
  this_ptr->vertex_buffer_ptr[2].fog = fVar2;
  this_ptr->vertex_buffer_ptr[2].w_recip = 0.0;
  fVar2 = (float)(sky_texture->base).type;
  this_ptr->vertex_buffer_ptr[3].light = fVar2;
  this_ptr->vertex_buffer_ptr[3].color = (int)fVar2;
  this_ptr->vertex_buffer_ptr[3].fog = fVar2;
  this_ptr->vertex_buffer_ptr[3].w_recip = 0.0;
  local_88.surface_normal.D = 0;
  local_68 = 1;
  local_70 = 0x80000;
  local_6c = 7.34684e-40;
  local_64 = 0x80000;
  local_60.x = 7.34684e-40;
  local_50._0_4_ = 4.2039e-45;
  local_60.y = 2.8026e-45;
  iVar8 = 0;
  local_60.z = 7.34684e-40;
  local_54 = 7.34684e-40;
  local_50._4_4_ = 7.34684e-40;
  aCStack_48[0].x = 0x80000;
  engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
            (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffff74,0x2c5);
  texture_name = (char *)0x0;
  do {
    iVar6 = 0;
    uv_offset = (float *)texture_name;
    do {
      iVar5 = iVar6 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0
                ((float *)sky_texture,iVar8,iVar6,uv_offset);
      iVar6 = iVar5;
      uv_offset = (float *)((int)uv_offset + 1);
    } while (iVar5 < 4);
    brightness_factor = (float)((int)brightness_factor + 4);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x11);
  do {
    iVar6 = 0x1000000;
    fStack00000018 =
         (float)((int)((int)sky_texture +
                      (((int)sky_texture >> 0x1f) * -4 - (uint)(((int)sky_texture >> 0x1f) << 1 < 0)
                      )) >> 2 & 0xffffff);
    iVar8 = 0;
    fStack00000014 = (float)((int)fStack00000018 + 0x400000);
    iVar5 = 0;
    fStack00000010 = brightness_factor;
    do {
      local_70 = (int)fStack00000010 + iVar5;
      local_64 = local_70 + 1;
      local_60.z = (float)(local_70 + 5);
      local_50._4_4_ = local_70 + 4;
      iVar4 = iVar8 >> 0x1f;
      iVar3 = iVar8 + iVar4 * -4;
      local_6c = fStack00000018;
      iVar5 = iVar5 + 1;
      local_60.x = fStack00000018;
      iVar8 = iVar8 + 0x1000000;
      local_60.y = (float)((int)((iVar6 + (iVar6 >> 0x1f) * -4) - (uint)((iVar6 >> 0x1f) << 1 < 0))
                           >> 2 ^ 0xffffff);
      local_54 = fStack00000014;
      aCStack_48[0].x = (int)fStack00000014;
      local_68 = (int)(iVar3 - (uint)(iVar4 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar6 = iVar6 + 0x1000000;
      local_50._0_4_ = local_60.y;
      aCStack_48[0].y = local_68;
      local_14 = local_64;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr,&local_88,0x2c5);
    } while (iVar5 < 3);
  } while (fStack00000010 != 8.40779e-44);
  return;
}


// Assembly code:
// 004901f0: PUSH EBX
//   Label: core_dskybox.cpp_renderSkyDome_FUN_004901f0
// 004901f1: PUSH ESI
// 004901f2: PUSH EDI
// 004901f3: PUSH EBP
// 004901f4: SUB ESP,0xa4
// 004901fa: MOV EBP,dword ptr [ESP + 0xb8]
//   XREF to: Stack[0x4] (READ)
// 00490201: MOV ESI,dword ptr [ESP + 0xbc]
//   XREF to: Stack[0x8] (READ)
// 00490208: LEA EDI,[EBP + 0xc]
// 0049020b: PUSH EDI
// 0049020c: MOV AL,byte ptr [ESI]
//   Label: LAB_0049020c
// 0049020e: MOV byte ptr [EDI],AL
// 00490210: CMP AL,0x0
// 00490212: JZ 0x00490224
//   XREF to: 00490224 (CONDITIONAL_JUMP)
// 00490214: MOV AL,byte ptr [ESI + 0x1]
// 00490217: ADD ESI,0x2
// 0049021a: MOV byte ptr [EDI + 0x1],AL
// 0049021d: ADD EDI,0x2
// 00490220: CMP AL,0x0
// 00490222: JNZ 0x0049020c
//   XREF to: 0049020c (CONDITIONAL_JUMP)
// 00490224: POP EDI
//   Label: LAB_00490224
// 00490225: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[0xc] (READ)
// 0049022c: MOV dword ptr [EBP],EAX
// 0049022f: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x60] (DATA)
// 00490233: PUSH EAX
// 00490234: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00490239: CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
//   XREF to: 00499b40 (UNCONDITIONAL_CALL)
// 0049023e: ADD ESP,0x8
// 00490241: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x54] (DATA)
// 00490245: PUSH EAX
// 00490246: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0049024b: CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
//   XREF to: 00499b70 (UNCONDITIONAL_CALL)
// 00490250: ADD ESP,0x8
// 00490253: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x60] (READ)
// 00490257: FADD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x54] (READ)
// 0049025b: FLD double ptr [0x0062256a]
//   XREF to: 0062256a (READ)
// 00490261: FXCH
// 00490263: FMUL ST1
// 00490265: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x58] (READ)
// 00490269: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x54] (READ)
// 0049026d: FSUB float ptr [ESP + 0x54]
//   XREF to: Stack[-0x60] (READ)
// 00490271: FXCH
// 00490273: FADD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x4c] (READ)
// 00490277: FXCH
// 00490279: FMUL ST3
// 0049027b: FXCH
// 0049027d: FMULP ST3
// 0049027f: FMUL double ptr [0x00622572]
//   XREF to: 00622572 (READ)
// 00490285: FLDZ
// 00490287: XOR EDX,EDX
// 00490289: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x5c] (READ)
// 0049028d: MOV dword ptr [0x00672360],EDX
//   XREF to: 00672360 (WRITE)
// 00490293: MOV [0x02ca038c],EAX
//   XREF to: 02ca038c (WRITE)
// 00490298: FXCH ST2
// 0049029a: FSTP float ptr [0x02ca0388]
//   XREF to: 02ca0388 (WRITE)
// 004902a0: FXCH ST2
// 004902a2: FSTP float ptr [0x02ca0390]
//   XREF to: 02ca0390 (WRITE)
// 004902a8: FXCH
// 004902aa: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x34] (WRITE)
// 004902b1: FCOMP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x34] (READ)
// 004902b8: FNSTSW AX
// 004902ba: SAHF
// 004902bb: JC 0x00490693
//   XREF to: 00490693 (CONDITIONAL_JUMP)
// 004902c1: FLD float ptr [ESP + 0x64]
//   Label: LAB_004902c1
//   XREF to: Stack[-0x50] (READ)
// 004902c5: FSUB float ptr [ESP + 0x58]
//   XREF to: Stack[-0x5c] (READ)
// 004902c9: FMUL double ptr [0x00622572]
//   XREF to: 00622572 (READ)
// 004902cf: FST float ptr [ESP + 0x88]
//   XREF to: Stack[-0x2c] (WRITE)
// 004902d6: FCOMP float ptr [0x00672360]
//   XREF to: 00672360 (READ)
// 004902dc: FNSTSW AX
// 004902de: SAHF
// 004902df: JBE 0x004902ed
//   XREF to: 004902ed (CONDITIONAL_JUMP)
// 004902e1: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x2c] (READ)
// 004902e8: MOV [0x00672360],EAX
//   XREF to: 00672360 (WRITE)
// 004902ed: FLD float ptr [ESP + 0x68]
//   Label: LAB_004902ed
//   XREF to: Stack[-0x4c] (READ)
// 004902f1: FSUB float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x58] (READ)
// 004902f5: FMUL double ptr [0x0062256a]
//   XREF to: 0062256a (READ)
// 004902fb: FMUL double ptr [0x00622572]
//   XREF to: 00622572 (READ)
// 00490301: FST float ptr [ESP + 0x84]
//   XREF to: Stack[-0x30] (WRITE)
// 00490308: FCOMP float ptr [0x00672360]
//   XREF to: 00672360 (READ)
// 0049030e: FNSTSW AX
// 00490310: SAHF
// 00490311: JBE 0x0049031f
//   XREF to: 0049031f (CONDITIONAL_JUMP)
// 00490313: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x30] (READ)
// 0049031a: MOV [0x00672360],EAX
//   XREF to: 00672360 (WRITE)
// 0049031f: PUSH 0x2ca0388
//   Label: LAB_0049031f
//   XREF to: 02ca0388 (DATA)
// 00490324: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0049032a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0049032b: MOV EBX,0x4
// 00490330: XOR ESI,ESI
// 00490332: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00490337: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0049033d: ADD ESP,0x8
// 00490340: LEA EAX,[EBX + EBP*0x1]
// 00490343: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0xb0] (WRITE)
// 00490347: PUSH EAX
// 00490348: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0xa0] (WRITE)
// 0049034c: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0xa4] (WRITE)
// 00490350: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00490351: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0xa8] (WRITE)
// 00490355: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0xac] (WRITE)
// 00490359: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0049035e: FLD double ptr [0x0062257a]
//   XREF to: 0062257a (READ)
// 00490364: FSIN
// 00490366: ADD ESP,0x8
// 00490369: FLD float ptr [0x00672360]
//   XREF to: 00672360 (READ)
// 0049036f: FXCH
// 00490371: FMUL ST1
// 00490373: FLD double ptr [0x00622582]
//   XREF to: 00622582 (READ)
// 00490379: FXCH
// 0049037b: FMUL ST1
// 0049037d: FXCH ST2
// 0049037f: FMULP
// 00490381: FXCH
// 00490383: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00490388: FISTP dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x6c] (WRITE)
// 0049038c: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x6c] (READ)
// 00490390: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00490396: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0049039a: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x6c] (DATA)
// 0049039e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004903a3: PUSH EAX
// 004903a4: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x68] (WRITE)
// 004903a8: MOV EAX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 004903aa: PUSH EAX
// 004903ab: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004903b0: ADD ESP,0x8
// 004903b3: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x6c] (READ)
// 004903b7: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x6c] (DATA)
// 004903bb: NEG EBX
// 004903bd: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004903c3: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x6c] (WRITE)
// 004903c7: PUSH EAX
// 004903c8: MOV EAX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 004903ca: ADD EAX,0x30
// 004903cd: PUSH EAX
// 004903ce: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004903d3: ADD ESP,0x8
// 004903d6: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x64] (READ)
// 004903da: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x6c] (DATA)
// 004903de: NEG ESI
// 004903e0: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004903e6: MOV dword ptr [ESP + 0x50],ESI
//   XREF to: Stack[-0x64] (WRITE)
// 004903ea: PUSH EAX
// 004903eb: MOV EAX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 004903ed: ADD EAX,0x60
// 004903f0: PUSH EAX
// 004903f1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004903f6: ADD ESP,0x8
// 004903f9: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x6c] (READ)
// 004903fd: NEG EDI
// 004903ff: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00490404: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 00490408: LEA ECX,[ESP + 0x48]
//   XREF to: Stack[-0x6c] (DATA)
// 0049040c: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0049040e: PUSH ECX
// 0049040f: ADD EAX,0x90
// 00490414: PUSH EAX
// 00490415: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0049041a: ADD ESP,0x8
// 0049041d: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00490422: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490424: MOV ECX,dword ptr [EBP]
// 00490427: MOV dword ptr [EBX + 0x20],ECX
// 0049042a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0049042c: MOV dword ptr [EBX + 0x24],ECX
// 0049042f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490431: MOV dword ptr [EBX + 0x28],ECX
// 00490434: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490436: MOV dword ptr [ECX + 0x2c],0x0
// 0049043d: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0049043f: MOV EBX,dword ptr [EBP]
// 00490442: MOV dword ptr [ECX + 0x50],EBX
// 00490445: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490447: MOV dword ptr [ECX + 0x54],EBX
// 0049044a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0049044c: MOV ECX,dword ptr [EBP]
// 0049044f: MOV dword ptr [EBX + 0x58],ECX
// 00490452: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490454: MOV dword ptr [ECX + 0x5c],0x0
// 0049045b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0049045d: MOV ECX,dword ptr [EBP]
// 00490460: MOV dword ptr [EBX + 0x80],ECX
// 00490466: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490468: MOV dword ptr [EBX + 0x84],ECX
// 0049046e: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490470: MOV dword ptr [EBX + 0x88],ECX
// 00490476: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490478: MOV dword ptr [ECX + 0x8c],0x0
// 00490482: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490484: MOV ECX,dword ptr [EBP]
// 00490487: MOV dword ptr [EBX + 0xb0],ECX
// 0049048d: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0049048f: MOV dword ptr [EBX + 0xb4],ECX
// 00490495: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00490497: MOV ESI,0x1
// 0049049c: MOV dword ptr [EBX + 0xb8],ECX
// 004904a2: MOV EDI,0x3
// 004904a7: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004904a9: PUSH 0x2c5
// 004904ae: XOR EDX,EDX
// 004904b0: MOV dword ptr [ECX + 0xbc],0x0
// 004904ba: MOV ECX,0x80000
// 004904bf: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x9c] (WRITE)
// 004904c3: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x90] (WRITE)
// 004904c7: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x98] (WRITE)
// 004904cb: MOV EBX,ECX
// 004904cd: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x94] (WRITE)
// 004904d1: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 004904d5: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 004904d9: MOV ECX,0x2
// 004904de: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x78] (WRITE)
// 004904e2: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 004904e6: LEA ECX,[ESP + 0x4]
//   XREF to: Stack[-0xb4] (DATA)
// 004904ea: XOR EDI,EDI
// 004904ec: PUSH ECX
// 004904ed: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x80] (WRITE)
// 004904f1: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x7c] (WRITE)
// 004904f5: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004904f6: MOV dword ptr [ESP + 0x4c],EBX
//   XREF to: Stack[-0x74] (WRITE)
// 004904fa: MOV dword ptr [ESP + 0x50],EBX
//   XREF to: Stack[-0x70] (WRITE)
// 004904fe: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 00490503: ADD ESP,0xc
// 00490506: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0049050d: MOV ESI,dword ptr [ESP + 0x90]
//   Label: LAB_0049050d
//   XREF to: Stack[-0x24] (READ)
// 00490514: XOR EBX,EBX
// 00490516: PUSH ESI
//   Label: LAB_00490516
// 00490517: PUSH EBX
// 00490518: PUSH EDI
// 00490519: PUSH EBP
// 0049051a: INC ESI
// 0049051b: INC EBX
// 0049051c: CALL core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
//   XREF to: 004900b0 (UNCONDITIONAL_CALL)
// 00490521: ADD ESP,0x10
// 00490524: CMP EBX,0x4
// 00490527: JL 0x00490516
//   XREF to: 00490516 (CONDITIONAL_JUMP)
// 00490529: MOV ESI,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x24] (READ)
// 00490530: ADD ESI,0x4
// 00490533: INC EDI
// 00490534: MOV dword ptr [ESP + 0x90],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0049053b: CMP EDI,0x10
// 0049053e: JLE 0x0049050d
//   XREF to: 0049050d (CONDITIONAL_JUMP)
// 00490540: XOR EDI,EDI
// 00490542: MOV dword ptr [ESP + 0x94],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00490549: MOV dword ptr [ESP + 0x8c],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00490550: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_00490550
//   XREF to: Stack[-0x20] (READ)
// 00490557: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0049055e: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x28] (READ)
// 00490565: MOV EDX,EAX
// 00490567: SAR EDX,0x1f
// 0049056a: SHL EDX,0x2
// 0049056d: SBB EAX,EDX
// 0049056f: SAR EAX,0x2
// 00490572: MOV ESI,0x1000000
//   XREF to: 01000000 (DATA)
// 00490577: AND EAX,0xffffff
// 0049057c: XOR EBX,EBX
// 0049057e: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00490585: ADD EAX,0x400000
//   XREF to: 00400000 (DATA)
// 0049058a: XOR EDI,EDI
// 0049058c: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00490593: MOV ECX,dword ptr [ESP + 0x98]
//   Label: LAB_00490593
//   XREF to: Stack[-0x1c] (READ)
// 0049059a: ADD ECX,EDI
// 0049059c: LEA EAX,[ECX + 0x1]
// 0049059f: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004905a3: LEA EAX,[ECX + 0x5]
// 004905a6: MOV EDX,EBX
// 004905a8: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004905ac: LEA EAX,[ECX + 0x4]
// 004905af: SAR EDX,0x1f
// 004905b2: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004905b6: MOV EAX,EBX
// 004905b8: SHL EDX,0x2
// 004905bb: SBB EAX,EDX
// 004905bd: SAR EAX,0x2
// 004905c0: MOV EBP,EAX
// 004905c2: MOV EDX,ESI
// 004905c4: MOV EAX,ESI
// 004905c6: SAR EDX,0x1f
// 004905c9: SHL EDX,0x2
// 004905cc: SBB EAX,EDX
// 004905ce: SAR EAX,0x2
// 004905d1: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x9c] (WRITE)
// 004905d5: MOV ECX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x14] (READ)
// 004905dc: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x98] (WRITE)
// 004905e0: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x40] (READ)
// 004905e4: PUSH 0x2c5
// 004905e9: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x90] (WRITE)
// 004905ed: MOV ECX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x14] (READ)
// 004905f4: INC EDI
// 004905f5: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 004905f9: MOV ECX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x3c] (READ)
// 004905fd: ADD EBX,0x1000000
//   XREF to: 01000000 (PARAM)
// 00490603: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 00490607: MOV ECX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x18] (READ)
// 0049060e: XOR EAX,0xffffff
// 00490613: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x80] (WRITE)
// 00490617: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0049061b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0049061f: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x38] (READ)
// 00490626: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x74] (WRITE)
// 0049062a: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0049062e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xb4] (DATA)
// 00490632: XOR EBP,0xffffff
// 00490638: PUSH EAX
// 00490639: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0049063e: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x94] (WRITE)
// 00490642: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00490643: MOV dword ptr [ESP + 0x50],EBP
//   XREF to: Stack[-0x70] (WRITE)
// 00490647: ADD ESI,0x1000000
//   XREF to: 01000000 (DATA)
// 0049064d: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 00490652: ADD ESP,0xc
// 00490655: CMP EDI,0x3
// 00490658: JL 0x00490593
//   XREF to: 00490593 (CONDITIONAL_JUMP)
// 0049065e: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x20] (READ)
// 00490665: MOV AH,byte ptr [ESP + 0x8f]
//   XREF to: Stack[-0x25] (READ)
// 0049066c: ADD EDX,0x4
// 0049066f: INC AH
// 00490671: MOV dword ptr [ESP + 0x94],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00490678: MOV byte ptr [ESP + 0x8f],AH
//   XREF to: Stack[-0x25] (WRITE)
// 0049067f: CMP EDX,0x40
// 00490682: JNZ 0x00490550
//   XREF to: 00490550 (CONDITIONAL_JUMP)
// 00490688: ADD ESP,0xa4
// 0049068e: POP EBP
// 0049068f: POP EDI
// 00490690: POP ESI
// 00490691: POP EBX
// 00490692: RET
// 00490693: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_00490693
//   XREF to: Stack[-0x34] (READ)
// 0049069a: MOV [0x00672360],EAX
//   XREF to: 00672360 (WRITE)
// 0049069f: JMP 0x004902c1
//   XREF to: 004902c1 (UNCONDITIONAL_JUMP)
