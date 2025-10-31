// Name: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
// Address: 00572800
// Address Range: [[00572800, 00572a0d]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * direction)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c324e [UNCONDITIONAL_CALL]
// Globals:
//   float g_RaycastStepOffsetScale = 0.005000000
//   float g_RaycastStepSize = 0.1000000
// Function calls:
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800
          (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_14;
  float local_10;
  
  local_70.x = start_pos->x;
  local_70.y = start_pos->y;
  local_70.z = start_pos->z;
  local_58 = direction->x;
  local_54 = direction->y;
  iVar1 = 0;
  local_50 = direction->z;
  local_4c = 0.0;
  local_48 = -32.0;
  local_44 = 0.0;
  local_14 = 0.0;
  do {
    local_64 = local_4c * g_RaycastStepOffsetScale;
    local_60 = local_48 * g_RaycastStepOffsetScale;
    local_5c = local_44 * g_RaycastStepOffsetScale;
    local_34 = local_58 * g_RaycastStepSize;
    local_30 = local_54 * g_RaycastStepSize;
    local_2c = local_50 * g_RaycastStepSize;
    local_10 = 0.1;
    local_28.x = local_70.x + local_34 + local_64;
    local_28.y = local_70.y + local_30 + local_60;
    local_28.z = local_70.z + local_2c + local_5c;
    local_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(this_ptr,&local_70,&local_28);
    if ((0.0 <= local_14) && (local_14 <= 1.0)) {
      return local_14 * g_RaycastStepSize + local_10;
    }
    if (&local_70.y != &local_28.y) {
      local_70.y = local_28.y;
      local_70.z = local_28.z;
    }
    local_3c = local_48 * unaff_EBP;
    local_38 = local_44 * unaff_EBP;
    iVar1 = iVar1 + 1;
    local_54 = local_54 + local_3c;
    local_50 = local_50 + local_38;
    local_4c = local_4c + local_40 * unaff_EBP;
  } while (iVar1 < 100);
  return -1.0;
}


// Assembly code:
// 00572800: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
// 00572801: PUSH ESI
// 00572802: PUSH EBP
// 00572803: MOV EBP,ESP
// 00572805: SUB ESP,0x7c
// 00572808: AND ESP,0xfffffff8
// 0057280b: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0057280e: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00572811: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00572814: MOV EAX,dword ptr [EBX]
// 00572816: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0057281a: LEA EAX,[EBX + 0x4]
// 0057281d: MOV EAX,dword ptr [EAX]
// 0057281f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00572823: LEA EAX,[EBX + 0x8]
// 00572826: MOV EAX,dword ptr [EAX]
// 00572828: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0057282c: MOV EAX,dword ptr [EDX]
// 0057282e: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00572832: LEA EAX,[EDX + 0x4]
// 00572835: MOV EAX,dword ptr [EAX]
// 00572837: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0057283b: LEA EAX,[EDX + 0x8]
// 0057283e: MOV ECX,0xc2000000
// 00572843: XOR EBX,EBX
// 00572845: MOV EAX,dword ptr [EAX]
// 00572847: XOR EDX,EDX
// 00572849: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0057284d: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 00572851: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00572855: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00572859: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0057285d: FLD float ptr [0x00646256]
//   Label: LAB_0057285d
//   XREF to: 00646256 (READ)
// 00572863: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00572867: FMUL ST1
// 00572869: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0057286d: FMUL ST2
// 0057286f: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 00572873: FMULP ST3
// 00572875: FLD float ptr [0x0064625a]
//   XREF to: 0064625a (READ)
// 0057287b: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0057287f: FMUL ST1
// 00572881: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00572885: FMUL ST2
// 00572887: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 0057288b: FMULP ST3
// 0057288d: MOV EAX,0x3dcccccd
// 00572892: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 00572896: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0057289a: FXCH ST5
// 0057289c: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (WRITE)
// 005728a0: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 005728a4: FXCH ST4
// 005728a6: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 005728aa: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 005728ae: FXCH ST6
// 005728b0: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (WRITE)
// 005728b4: FXCH
// 005728b6: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (WRITE)
// 005728ba: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (WRITE)
// 005728be: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005728c2: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x28] (DATA)
// 005728c6: FXCH
// 005728c8: FADD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 005728cc: FXCH
// 005728ce: FADD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 005728d2: FXCH ST2
// 005728d4: FADD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005728d8: PUSH EAX
// 005728d9: FXCH
// 005728db: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x7c] (WRITE)
// 005728df: FXCH
// 005728e1: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x78] (WRITE)
// 005728e5: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x74] (WRITE)
// 005728e9: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x7c] (READ)
// 005728ed: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x78] (READ)
// 005728f1: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x70] (DATA)
// 005728f5: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x74] (READ)
// 005728f9: PUSH EAX
// 005728fa: FXCH ST2
// 005728fc: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x64] (READ)
// 00572900: FXCH
// 00572902: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x60] (READ)
// 00572906: FXCH ST2
// 00572908: FADD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x5c] (READ)
// 0057290c: FXCH
// 0057290e: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (WRITE)
// 00572912: FXCH
// 00572914: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x24] (WRITE)
// 00572918: PUSH ESI
// 00572919: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x20] (WRITE)
// 0057291d: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 00572922: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00572926: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x18] (READ)
// 0057292a: ADD ESP,0xc
// 0057292d: FLDZ
// 0057292f: FXCH
// 00572931: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 00572935: FSTP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00572938: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0057293b: FNSTSW AX
// 0057293d: SAHF
// 0057293e: JA 0x0057294e
//   XREF to: 0057294e (CONDITIONAL_JUMP)
// 00572940: FLD1
// 00572942: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00572945: FNSTSW AX
// 00572947: SAHF
// 00572948: JNC 0x005729f2
//   XREF to: 005729f2 (CONDITIONAL_JUMP)
// 0057294e: LEA EDX,[ESP + 0x18]
//   Label: LAB_0057294e
//   XREF to: Stack[-0x70] (DATA)
// 00572952: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x28] (DATA)
// 00572956: CMP EDX,EAX
// 00572958: JZ 0x00572972
//   XREF to: 00572972 (CONDITIONAL_JUMP)
// 0057295a: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (DATA)
// 0057295e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00572962: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 00572966: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0057296a: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0057296e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00572972: FLD float ptr [ESP + 0x3c]
//   Label: LAB_00572972
//   XREF to: Stack[-0x4c] (READ)
// 00572976: FMUL float ptr [ESP + 0x78]
//   XREF to: Stack[-0x10] (READ)
// 0057297a: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0057297e: FMUL float ptr [ESP + 0x78]
//   XREF to: Stack[-0x10] (READ)
// 00572982: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 00572986: FMUL float ptr [ESP + 0x78]
//   XREF to: Stack[-0x10] (READ)
// 0057298a: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0057298e: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00572992: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 00572996: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0057299a: INC EBX
// 0057299b: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x10] (READ)
// 0057299f: FXCH ST6
// 005729a1: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (WRITE)
// 005729a5: FXCH ST4
// 005729a7: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (WRITE)
// 005729ab: FXCH ST2
// 005729ad: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 005729b1: FXCH ST3
// 005729b3: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (WRITE)
// 005729b7: FXCH ST2
// 005729b9: FADD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 005729bd: FXCH ST2
// 005729bf: FADD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 005729c3: FXCH
// 005729c5: FADD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 005729c9: FXCH ST2
// 005729cb: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 005729cf: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (WRITE)
// 005729d3: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 005729d7: CMP EBX,0x64
// 005729da: JL 0x0057285d
//   XREF to: 0057285d (CONDITIONAL_JUMP)
// 005729e0: MOV dword ptr [ESP + 0x6c],0xbf800000
//   XREF to: Stack[-0x1c] (WRITE)
// 005729e8: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 005729ec: MOV ESP,EBP
// 005729ee: POP EBP
// 005729ef: POP ESI
// 005729f0: POP EBX
// 005729f1: RET
// 005729f2: FLD float ptr [ESP + 0x8]
//   Label: LAB_005729f2
//   XREF to: Stack[-0x80] (READ)
// 005729f6: FMUL float ptr [0x0064625a]
//   XREF to: 0064625a (READ)
// 005729fc: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 00572a00: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00572a04: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 00572a08: MOV ESP,EBP
// 00572a0a: POP EBP
// 00572a0b: POP ESI
// 00572a0c: POP EBX
// 00572a0d: RET
