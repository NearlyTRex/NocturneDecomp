// Name: core_dcamera.cpp_CDemonCamera_computeDirectionalLightMap_FUN_0044af70
// Address: 0044af70
// Address Range: [[0044af70, 0044b063]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_computeDirectionalLightMap_FUN_0044af70(CDemonCamera *this_ptr,CVector3f *light_dir,float intensity)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_computeDirectionalLightMap_FUN_0044af70(CDemonCamera *this_ptr,CVector3f *light_dir,float intensity)

{
  float fVar1;
  char *pcVar2;
  float *pfVar3;
  int iVar4;
  double dVar5;
  int local_24;
  int local_20;
  int local_1c;
  
  memset(g_CHAR_ARRAY_00b1a288,0,0x12d40);
  if ((light_dir != (CVector3f *)0x0) && (local_20 = 0, 0 < this_ptr->display_height)) {
    local_24 = 0;
    local_1c = 0;
    do {
      pcVar2 = g_CHAR_ARRAY_00b1a288 + local_1c;
      pfVar3 = (float *)((int)&g_CVector3f_ARRAY_ARRAY_00a38388[0][0].x + local_24);
      iVar4 = 0;
      if (0 < this_ptr->display_width) {
        do {
          fVar1 = light_dir->z * pfVar3[2] + light_dir->x * *pfVar3 + light_dir->y * pfVar3[1];
          if (0.0 < fVar1) {
            dVar5 = round
                              ((double)(fVar1 * intensity * (float)255 *
                                       (float)0.25));
            local_1c = (int)ROUND(dVar5);
            *pcVar2 = (char)local_1c;
          }
          pfVar3 = pfVar3 + 3;
          iVar4 = iVar4 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar4 < this_ptr->display_width);
      }
      local_24 = local_24 + 0xf00;
      local_1c = local_1c + 0x140;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->display_height);
  }
  return;
}
