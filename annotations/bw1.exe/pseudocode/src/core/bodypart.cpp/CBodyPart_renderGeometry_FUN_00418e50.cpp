// Name: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50
// Address: 00418e50
// Address Range: [[00418e50, 00418fbb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(CBodyPart *this_ptr,int render_flags)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(CBodyPart *this_ptr,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x174,*(CVector3i **)&this_ptr->field_0x178);
  core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x174,*(int *)&this_ptr->field_0x180,
             *(void **)&this_ptr->field_0x184,*(CVector3i **)&this_ptr->field_0x178,3,
             *(CVector3i **)&this_ptr->field_0x17c);
  if ((*(int *)&this_ptr->field_0x18c == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 != 0)
     ) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (DAT_00612560,(SMRGLTextureBasic *)&this_ptr->field_0x190);
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
              (DAT_00612560,*(SMRGLPrimitiveTriangle **)&this_ptr->field_0x184,
               *(int *)&this_ptr->field_0x180,render_flags);
  }
  else {
    iVar2 = 0;
    local_18 = -1;
    if (0 < *(int *)&this_ptr->field_0x180) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)&this_ptr->field_0x188 + local_14);
        if (iVar1 != local_18) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                    (DAT_00612560,(SMRGLTextureBasic *)(&this_ptr->field_0x190 + iVar1 * 0x18));
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
                  (DAT_00612560,(SMRGLPrimitivePoly *)(*(int *)&this_ptr->field_0x184 + iVar3),
                   render_flags);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < *(int *)&this_ptr->field_0x180);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  return;
}
