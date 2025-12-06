// Name: core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
// Address: 00522c80
// Address Range: [[00522c80, 00522d11]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_clearMaybe_FUN_00522c80(CDemonMission *this_ptr)

{
  this_ptr->field0_0x0[4] = '\0';
  this_ptr->field0_0x0[5] = '\0';
  this_ptr->field0_0x0[6] = '\0';
  this_ptr->field0_0x0[7] = '\0';
  this_ptr->first_actor = (CDemonActor *)0x0;
  this_ptr->field6_0x54c[0] = '\0';
  this_ptr->field6_0x54c[1] = '\0';
  this_ptr->field6_0x54c[2] = '\0';
  this_ptr->field6_0x54c[3] = '\0';
  this_ptr->field6_0x54c[0x10] = -1;
  this_ptr->field6_0x54c[0x11] = -1;
  this_ptr->field6_0x54c[0x12] = -1;
  this_ptr->field6_0x54c[0x13] = -1;
  this_ptr->field6_0x54c[0xc] = '\0';
  this_ptr->field6_0x54c[0xd] = '\0';
  this_ptr->field6_0x54c[0xe] = '\0';
  this_ptr->field6_0x54c[0xf] = '\0';
  *(uint *)(this_ptr->field6_0x54c + 8) = *(uint *)(this_ptr->field6_0x54c + 0xc);
  *(uint *)(this_ptr->field6_0x54c + 4) = *(uint *)(this_ptr->field6_0x54c + 8);
  this_ptr->field2_0xc[0x38] = '\0';
  this_ptr->field6_0x54c[0x14] = '\0';
  this_ptr->field6_0x54c[0x15] = '\0';
  this_ptr->field6_0x54c[0x16] = '\0';
  this_ptr->field6_0x54c[0x17] = '\0';
  this_ptr->field2_0xc[0x30] = '\0';
  this_ptr->field2_0xc[0x31] = '\0';
  this_ptr->field2_0xc[0x32] = '\0';
  this_ptr->field2_0xc[0x33] = '\0';
  this_ptr->field2_0xc[0x34] = '\0';
  this_ptr->field2_0xc[0x35] = '\0';
  this_ptr->field2_0xc[0x36] = '\0';
  this_ptr->field2_0xc[0x37] = '\0';
  this_ptr->field6_0x54c[0x338] = '\0';
  this_ptr->field6_0x54c[0x339] = '\0';
  this_ptr->field6_0x54c[0x33a] = '\0';
  this_ptr->field6_0x54c[0x33b] = '\0';
  this_ptr->field2_0xc[0] = '\0';
  this_ptr->field2_0xc[1] = '\0';
  this_ptr->field2_0xc[2] = '\0';
  this_ptr->field2_0xc[3] = '\0';
  this_ptr->field6_0x54c[0x33c] = '\0';
  this_ptr->field6_0x54c[0x33d] = '\0';
  this_ptr->field6_0x54c[0x33e] = '\0';
  this_ptr->field6_0x54c[0x33f] = '\0';
  this_ptr->actorCountMaybe = 0;
  this_ptr->mission_version_num = -1;
  DAT_02f35f10 = 0;
  return;
}
