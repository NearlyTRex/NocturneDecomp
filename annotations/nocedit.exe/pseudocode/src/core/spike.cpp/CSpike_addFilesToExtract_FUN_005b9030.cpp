// Name: core_spike.cpp_CSpike_addFilesToExtract_FUN_005b9030
// Address: 005b9030
// Address Range: [[005b9030, 005b9047]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_addFilesToExtract_FUN_005b9030(CSpike *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_spike_cpp_CSpike_addFilesToExtract_FUN_005b9030(CSpike *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
