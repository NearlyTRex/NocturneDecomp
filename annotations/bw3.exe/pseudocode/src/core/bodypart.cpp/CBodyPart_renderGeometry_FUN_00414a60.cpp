// Name: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60
// Address: 00414a60
// Address Range: [[00414a60, 00414bcb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00414a60(CBodyPart *this_ptr,int render_flags)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00414a60(CBodyPart *this_ptr,int render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x174,*(CVector3i **)&this_ptr->field_0x178);
  core_set_cpp_CDemonSet_lightVerticies_FUN_00538dd0
            (g_CDemonSetPtr,*(int *)&this_ptr->field_0x174,*(int *)&this_ptr->field_0x180,
             *(void **)&this_ptr->field_0x184,*(CVector3i **)&this_ptr->field_0x178,3,
             *(CVector3i **)&this_ptr->field_0x17c);
  if ((*(int *)&this_ptr->field_0x18c == 1) ||
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar2 != 0)
     ) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar2 == 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&this_ptr->field_0x190);
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880
              (DAT_005f2afc,*(SMRGLPrimitiveTriangle **)&this_ptr->field_0x184,
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
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                    (DAT_005f2afc,(SMRGLTextureBasic *)(&this_ptr->field_0x190 + iVar1 * 0x18));
          local_18 = iVar1;
        }
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                  (DAT_005f2afc,(SMRGLPrimitivePoly *)(*(int *)&this_ptr->field_0x184 + iVar3),
                   render_flags);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
        local_14 = local_14 + 4;
      } while (iVar2 < *(int *)&this_ptr->field_0x180);
    }
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  return;
}
