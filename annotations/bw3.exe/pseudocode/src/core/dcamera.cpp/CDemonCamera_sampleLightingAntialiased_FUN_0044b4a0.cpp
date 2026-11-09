// Name: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044b4a0
// Address: 0044b4a0
// Address Range: [[0044b4a0, 0044bafa]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044b4a0(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044b4a0(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_18;
  
  if (*(int *)&light_source->field_0x1cd0 == 0) {
    iVar6 = *(int *)world_pos - *(int *)&light_source->field_0x16c;
    iVar7 = *(int *)(world_pos + 4) - *(int *)&light_source->field_0x170;
    iVar4 = *(int *)(world_pos + 8) - *(int *)&light_source->field_0x174;
    lVar1 = (longlong)*(int *)&light_source->field_0x180 * (longlong)iVar6;
    lVar2 = (longlong)*(int *)&light_source->field_0x18c * (longlong)iVar7;
    lVar3 = (longlong)*(int *)&light_source->field_0x198 * (longlong)iVar4;
    _DAT_02d26208 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (((_DAT_02d26208 < 1) ||
        (lVar1 = (longlong)*(int *)&light_source->field_0x178 * (longlong)iVar6,
        lVar2 = (longlong)*(int *)&light_source->field_0x184 * (longlong)iVar7,
        lVar3 = (longlong)*(int *)&light_source->field_0x190 * (longlong)iVar4,
        _DAT_02d26200 =
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
        _DAT_02d26208 <= _DAT_02d26200)) ||
       ((_DAT_02d26200 <= -_DAT_02d26208 ||
        ((lVar1 = (longlong)*(int *)&light_source->field_0x17c * (longlong)iVar6,
         lVar2 = (longlong)*(int *)&light_source->field_0x188 * (longlong)iVar7,
         lVar3 = (longlong)*(int *)&light_source->field_0x194 * (longlong)iVar4,
         _DAT_02d26204 =
              ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
         _DAT_02d26208 <= _DAT_02d26204 || (_DAT_02d26204 <= -_DAT_02d26208)))))) {
      piVar5 = (int *)&DAT_014a02f0;
    }
    else {
      _DAT_02d26200 =
           (int)(((longlong)_DAT_02d26200 * (longlong)*(int *)&light_source->field_0x1c0) /
                (longlong)_DAT_02d26208) + *(int *)&light_source->field_0x1c8;
      _DAT_02d26204 =
           (int)(((longlong)_DAT_02d26204 * (longlong)*(int *)&light_source->field_0x1c4) /
                (longlong)_DAT_02d26208) + *(int *)&light_source->field_0x1cc;
      piVar5 = (int *)&DAT_02d26200;
    }
    if (((0 < piVar5[2]) &&
        (*(short *)(*(int *)&light_source->field_0x2f94 +
                   ((*piVar5 >> 0x10) + *(int *)&light_source->field_0x1cc0 * (piVar5[1] >> 0x10)) *
                   2) != 0)) &&
       ((float)piVar5[2] * (float)_DAT_005b9d8e < *(float *)&light_source->field_0x140)) {
      return (int)ROUND((float)intensity *
                        ((*(float *)&light_source->field_0x140 -
                         (float)piVar5[2] * (float)_DAT_005b9d8e) /
                        *(float *)&light_source->field_0x140));
    }
    return 0;
  }
  iVar6 = *(int *)world_pos - *(int *)&light_source->field_0x16c;
  iVar7 = *(int *)(world_pos + 4) - *(int *)&light_source->field_0x170;
  iVar4 = *(int *)(world_pos + 8) - *(int *)&light_source->field_0x174;
  lVar1 = (longlong)*(int *)&light_source->field_0x180 * (longlong)iVar6;
  lVar2 = (longlong)*(int *)&light_source->field_0x18c * (longlong)iVar7;
  lVar3 = (longlong)*(int *)&light_source->field_0x198 * (longlong)iVar4;
  _DAT_02d26208 =
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  if ((((_DAT_02d26208 < 1) ||
       (lVar1 = (longlong)*(int *)&light_source->field_0x178 * (longlong)iVar6,
       lVar2 = (longlong)*(int *)&light_source->field_0x184 * (longlong)iVar7,
       lVar3 = (longlong)*(int *)&light_source->field_0x190 * (longlong)iVar4,
       _DAT_02d26200 =
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
       _DAT_02d26208 <= _DAT_02d26200)) || (_DAT_02d26200 <= -_DAT_02d26208)) ||
     ((lVar1 = (longlong)*(int *)&light_source->field_0x17c * (longlong)iVar6,
      lVar2 = (longlong)*(int *)&light_source->field_0x188 * (longlong)iVar7,
      lVar3 = (longlong)*(int *)&light_source->field_0x194 * (longlong)iVar4,
      _DAT_02d26204 =
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
      _DAT_02d26208 <= _DAT_02d26204 || (_DAT_02d26204 <= -_DAT_02d26208)))) {
    piVar5 = (int *)&DAT_014a02f0;
  }
  else {
    _DAT_02d26200 =
         (int)(((longlong)_DAT_02d26200 * (longlong)*(int *)&light_source->field_0x1c0) /
              (longlong)_DAT_02d26208) + *(int *)&light_source->field_0x1c8;
    _DAT_02d26204 =
         (int)(((longlong)_DAT_02d26204 * (longlong)*(int *)&light_source->field_0x1c4) /
              (longlong)_DAT_02d26208) + *(int *)&light_source->field_0x1cc;
    piVar5 = (int *)&DAT_02d26200;
  }
  if (piVar5[2] < 1) {
    return 0;
  }
  local_18 = 1;
  uVar8 = 0;
  if (piVar5[2] <
      (int)(*(ushort *)
             (((*piVar5 >> 0x10) + *(int *)&light_source->field_0x1cc0 * (piVar5[1] >> 0x10)) * 2 +
             *(int *)&light_source->field_0x2f94) + 0x90)) {
    lVar1 = (longlong)
            (int)((uint)*(byte *)(*(int *)&light_source->field_0x1c54 +
                                 ((piVar5[1] >> (light_source->field_0x1ccc & 0x1f) &
                                  *(uint *)&light_source->field_0x1c68) <<
                                 (light_source->field_0x1c60 & 0x1f)) +
                                 (*(uint *)&light_source->field_0x1c68 &
                                 *piVar5 >> (light_source->field_0x1cc8 & 0x1f))) << 10) *
            (longlong)intensity;
    uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  *(short *)((int)piVar5 + 2) = *(short *)((int)piVar5 + 2) + 1;
  if (*piVar5 >> 0x10 < *(int *)&light_source->field_0x1cc0) {
    if (piVar5[2] <
        (int)(*(ushort *)
               (*(int *)&light_source->field_0x2f94 +
               ((*piVar5 >> 0x10) + (piVar5[1] >> 0x10) * *(int *)&light_source->field_0x1cc0) * 2)
             + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)*(byte *)((*(uint *)&light_source->field_0x1c68 &
                                    *piVar5 >> (light_source->field_0x1cc8 & 0x1f)) +
                                    ((piVar5[1] >> (light_source->field_0x1ccc & 0x1f) &
                                     *(uint *)&light_source->field_0x1c68) <<
                                    (light_source->field_0x1c60 & 0x1f)) +
                                   *(int *)&light_source->field_0x1c54) << 10) * (longlong)intensity
      ;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = 2;
  }
  iVar4 = *piVar5 + -0x20000 >> 0x10;
  *piVar5 = *piVar5 + -0x20000;
  if (0 < iVar4) {
    if (piVar5[2] <
        (int)(*(ushort *)
               ((iVar4 + (piVar5[1] >> 0x10) * *(int *)&light_source->field_0x1cc0) * 2 +
               *(int *)&light_source->field_0x2f94) + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)*(byte *)(*(int *)&light_source->field_0x1c54 +
                                   ((piVar5[1] >> (light_source->field_0x1ccc & 0x1f) &
                                    *(uint *)&light_source->field_0x1c68) <<
                                   (light_source->field_0x1c60 & 0x1f)) +
                                   (*(uint *)&light_source->field_0x1c68 &
                                   *piVar5 >> (light_source->field_0x1cc8 & 0x1f))) << 10) *
              (longlong)intensity;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
  *(short *)((int)piVar5 + 2) = *(short *)((int)piVar5 + 2) + 1;
  if (piVar5[1] >> 0x10 < *(int *)&light_source->field_0x1cc4) {
    if (piVar5[2] <
        (int)(*(ushort *)
               (*(int *)&light_source->field_0x2f94 +
               ((*piVar5 >> 0x10) + *(int *)&light_source->field_0x1cc0 * (piVar5[1] >> 0x10)) * 2)
             + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)*(byte *)(*(int *)&light_source->field_0x1c54 +
                                   ((piVar5[1] >> (light_source->field_0x1ccc & 0x1f) &
                                    *(uint *)&light_source->field_0x1c68) <<
                                   (light_source->field_0x1c60 & 0x1f)) +
                                   (*(uint *)&light_source->field_0x1c68 &
                                   *piVar5 >> (light_source->field_0x1cc8 & 0x1f))) << 10) *
              (longlong)intensity;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  iVar4 = piVar5[1] + -0x20000;
  piVar5[1] = iVar4;
  if (0 < iVar4) {
    if (piVar5[2] <
        (int)(*(ushort *)
               (*(int *)&light_source->field_0x2f94 +
               ((*piVar5 >> 0x10) + (iVar4 >> 0x10) * *(int *)&light_source->field_0x1cc0) * 2) +
             0x90)) {
      lVar1 = (longlong)
              (int)((uint)*(byte *)((*(uint *)&light_source->field_0x1c68 &
                                    *piVar5 >> (light_source->field_0x1cc8 & 0x1f)) +
                                    ((piVar5[1] >> (light_source->field_0x1ccc & 0x1f) &
                                     *(uint *)&light_source->field_0x1c68) <<
                                    (light_source->field_0x1c60 & 0x1f)) +
                                   *(int *)&light_source->field_0x1c54) << 10) * (longlong)intensity
      ;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  return (int)uVar8 / local_18;
}
