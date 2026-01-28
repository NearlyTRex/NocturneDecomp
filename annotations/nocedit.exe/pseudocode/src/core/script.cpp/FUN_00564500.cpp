// Name: core_script.cpp_FUN_00564500
// Address: 00564500
// Address Range: [[00564500, 0056455d]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00564500(void)

#include "nocturne.h"

void core_script_cpp_FUN_00564500(void)

{
  if ((DAT_0310fd4c < 0) || (DAT_0310fd50 < 0)) {
    DAT_031141cc = -1;
    DAT_031141c8 = -1;
    DAT_031141c0 = -1;
    DAT_031141c4 = -1;
  }
  else {
    DAT_031141cc = DAT_0310fd48;
    DAT_031141c8 = DAT_0310fd44;
    DAT_031141c0 = DAT_0310fd4c;
    DAT_031141c4 = DAT_0310fd50;
    if (((DAT_0310fd48 <= DAT_0310fd50) &&
        (DAT_031141cc = DAT_0310fd50, DAT_031141c8 = DAT_0310fd4c, DAT_031141c0 = DAT_0310fd44,
        DAT_031141c4 = DAT_0310fd48, DAT_0310fd50 <= DAT_0310fd48)) &&
       (DAT_031141c4 = DAT_0310fd50, DAT_0310fd4c < DAT_0310fd44)) {
      DAT_031141c8 = DAT_0310fd44;
      DAT_031141c0 = DAT_0310fd4c;
    }
  }
  return;
}
