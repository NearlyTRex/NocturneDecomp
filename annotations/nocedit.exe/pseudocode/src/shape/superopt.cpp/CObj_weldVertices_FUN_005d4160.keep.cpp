// Name: shape_superopt.cpp_CObj_weldVertices_FUN_005d4160
// Address: 005d4160
// MANUAL RECONSTRUCTION
// Address Range: [[005d4160, 005d44cc]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_weldVertices_FUN_005d4160(CObj *this_ptr,double weld_tolerance,int remove_degenerate)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_weldVertices_FUN_005d4160(CObj *this_ptr,double weld_tolerance,int remove_degenerate)

{
  int iVar2;
  uint uVar4;
  uint uVar5;
  CVert *vert_a;
  CVert *vert_b;
  CPoly *poly;
  char acStack_100 [92];
  CVector3d bbox_min;
  CVector3d bbox_max;
  void *pvStack_28;
  int iStack_20;
  uint uStack_18;

  (*this_ptr->vtable->clearStateFlags)(this_ptr,0x8000);
  iStack_20 = 0;
  pvStack_28 = (void *)0x0;
  if (1000 < (uint)this_ptr->vertex_count) {
    pvStack_28 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uStack_18 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pvStack_28 != (void *)0x0) && ((char)uStack_18 == '\0')) {
        _sprintf(acStack_100,"Welding vertices (%d removed so far)",iStack_20);
      }
      vert_a = this_ptr->vertex_data + uStack_18;
      if ((vert_a->state_flags & 0x8000) == 0) {
        bbox_min.x = vert_a->position.x - weld_tolerance;
        bbox_min.y = vert_a->position.y - weld_tolerance;
        bbox_min.z = vert_a->position.z - weld_tolerance;
        bbox_max.x = vert_a->position.x + weld_tolerance;
        bbox_max.y = vert_a->position.y + weld_tolerance;
        bbox_max.z = vert_a->position.z + weld_tolerance;
        vert_a->state_flags = vert_a->state_flags | 0x8000;
        uVar4 = uStack_18 + 1;
        if (uVar4 < (uint)this_ptr->vertex_count) {
          do {
            vert_b = this_ptr->vertex_data + uVar4;
            if ((vert_b->state_flags & 0x8000) == 0) {
              if (weld_tolerance == 0.0) {
                if ((vert_a->position.x == vert_b->position.x) &&
                   (vert_a->position.y == vert_b->position.y) &&
                   (vert_a->position.z == vert_b->position.z)) {
LAB_005d43a8:
                  uVar5 = 0;
                  if (this_ptr->poly_count != 0) {
                    do {
                      poly = &this_ptr->poly_array[uVar5];
                      if (uVar4 == (uint)poly->vertex_idx_0) {
                        poly->vertex_idx_0 = uStack_18;
                      }
                      if (uVar4 == (uint)poly->vertex_idx_1) {
                        poly->vertex_idx_1 = uStack_18;
                      }
                      if (uVar4 == (uint)poly->vertex_idx_2) {
                        poly->vertex_idx_2 = uStack_18;
                      }
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < (uint)this_ptr->poly_count);
                  }
                  iStack_20 = iStack_20 + 1;
                  vert_b->state_flags = vert_b->state_flags | 0x8000;
                }
              }
              else if (((bbox_min.x <= vert_b->position.x) &&
                       (((vert_b->position.x <= bbox_max.x && (bbox_min.y <= vert_b->position.y)) &&
                         (vert_b->position.y <= bbox_max.y)) &&
                        ((bbox_min.z <= vert_b->position.z && (vert_b->position.z <= bbox_max.z))))) &&
                      (SQRT((vert_b->position.z - vert_a->position.z) * (vert_b->position.z - vert_a->position.z) +
                            (vert_b->position.y - vert_a->position.y) * (vert_b->position.y - vert_a->position.y) +
                            (vert_b->position.x - vert_a->position.x) * (vert_b->position.x - vert_a->position.x)) <= weld_tolerance))
              goto LAB_005d43a8;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)this_ptr->vertex_count);
        }
      }
      uStack_18 = uStack_18 + 1;
    } while (uStack_18 < (uint)this_ptr->vertex_count);
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pvStack_28);
  if (remove_degenerate != 0) {
    iVar2 = (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
    return iVar2;
  }
  return 1;
}
