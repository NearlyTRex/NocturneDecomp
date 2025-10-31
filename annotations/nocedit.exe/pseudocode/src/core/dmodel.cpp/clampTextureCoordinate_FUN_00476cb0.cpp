// Name: core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0
// Address: 00476cb0
// Address Range: [[00476cb0, 00476ce7]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0(float * value)
// Globals:
//   double DOUBLE_0061f2db = 255.999000000000

#include "nocturne.h"

void __cdecl core_dmodel_cpp_clampTextureCoordinate_FUN_00476cb0(float *value)

{
  if (*value < 0.0) {
    *value = 0.0;
    if (*value <= (float)DOUBLE_0061f2db) {
      return;
    }
  }
  else if (*value <= (float)DOUBLE_0061f2db) {
    return;
  }
  *value = 255.999;
  return;
}


// Assembly code:
// 00476cb0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0
//   XREF to: Stack[0x4] (READ)
// 00476cb4: FLD float ptr [EDX]
// 00476cb6: FLDZ
// 00476cb8: FCOMPP
// 00476cba: FNSTSW AX
// 00476cbc: SAHF
// 00476cbd: JA 0x00476ccd
//   XREF to: 00476ccd (CONDITIONAL_JUMP)
// 00476cbf: FLD float ptr [EDX]
// 00476cc1: FCOMP double ptr [0x0061f2db]
//   XREF to: 0061f2db (READ)
// 00476cc7: FNSTSW AX
// 00476cc9: SAHF
// 00476cca: JA 0x00476ce1
//   XREF to: 00476ce1 (CONDITIONAL_JUMP)
// 00476ccc: RET
// 00476ccd: MOV dword ptr [EDX],0x0
//   Label: LAB_00476ccd
// 00476cd3: FLD float ptr [EDX]
// 00476cd5: FCOMP double ptr [0x0061f2db]
//   XREF to: 0061f2db (READ)
// 00476cdb: FNSTSW AX
// 00476cdd: SAHF
// 00476cde: JA 0x00476ce1
//   XREF to: 00476ce1 (CONDITIONAL_JUMP)
// 00476ce0: RET
// 00476ce1: MOV dword ptr [EDX],0x437fffbe
//   Label: LAB_00476ce1
// 00476ce7: RET
