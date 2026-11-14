// Name: core_setutil.cpp_C3DSLight_process_FUN_0053b8d0
// Address: 0053b8d0
// Address Range: [[0053b8d0, 0053ba8e]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_process_FUN_0053b8d0(C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_process_FUN_0053b8d0(C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (light == (CDemonLight *)0x0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x351;
    core_main_c_FUN_004e4500("C3DSLight::process - NULL CDemonLight pointer!");
  }
  if (this_ptr->filter_count != 0) {
    if (0.0 < this_ptr->filter_durations[this_ptr->current_filter_frame]) {
      this_ptr->filter_frame_elapsed = g_CGamePtr->delta_time_float + this_ptr->filter_frame_elapsed
      ;
      if (this_ptr->filter_durations[this_ptr->current_filter_frame] <
          this_ptr->filter_frame_elapsed) {
        iVar3 = this_ptr->current_filter_frame + 1;
        this_ptr->filter_frame_elapsed =
             this_ptr->filter_frame_elapsed -
             this_ptr->filter_durations[this_ptr->current_filter_frame];
        this_ptr->current_filter_frame = iVar3;
        if (this_ptr->filter_count <= iVar3) {
          this_ptr->current_filter_frame = 0;
        }
      }
    }
    iVar2 = _DAT_01c2a370;
    lVar1 = (longlong)_DAT_01c2a370 * (longlong)(this_ptr->filter_vel).x;
    iVar3 = (this_ptr->filter_vel).y;
    (this_ptr->filter_pos).x =
         (this_ptr->filter_pos).x + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar2 * (longlong)iVar3;
    iVar3 = (this_ptr->filter_pos).y +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    (this_ptr->filter_pos).y = iVar3;
    if (apply_filter_flag != 0) {
      core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600
                (light,this_ptr->filters[this_ptr->current_filter_frame],
                 this_ptr->filter_indices[this_ptr->current_filter_frame],(this_ptr->filter_pos).x,
                 iVar3);
    }
  }
  if (this_ptr->on_time < 1.0) {
    this_ptr->cycle_elapsed = g_CGamePtr->delta_time_float + this_ptr->cycle_elapsed;
    if (this_ptr->cycle_time < this_ptr->cycle_elapsed) {
      this_ptr->cycle_elapsed = this_ptr->cycle_elapsed - this_ptr->cycle_time;
    }
    if (this_ptr->cycle_elapsed <= this_ptr->on_time) {
      light->light_enabled_flag = 1;
    }
    else {
      light->light_enabled_flag = 0;
    }
  }
  if (g_CDemonSetPtr->camera_enabled_flag != 0) {
    return;
  }
  light->light_enabled_flag = 0;
  return;
}
