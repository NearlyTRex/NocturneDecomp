// Name: shape_design.c_polygonTextureNameComparator_FUN_0045b850
// Address: 0045b850
// Address Range: [[0045b850, 0045b8a2]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_polygonTextureNameComparator_FUN_0045b850(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2)

#include "nocturne.h"

int __cdecl shape_design_c_polygonTextureNameComparator_FUN_0045b850(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2)

{
  int local_14;
  
  if (polygon1->texture_name[0] == '\0') {
    local_14 = 1;
  }
  else if (polygon2->texture_name[0] == '\0') {
    local_14 = -1;
  }
  else {
    local_14 = _stricmp(polygon1->texture_name,polygon2->texture_name);
  }
  return local_14;
}
