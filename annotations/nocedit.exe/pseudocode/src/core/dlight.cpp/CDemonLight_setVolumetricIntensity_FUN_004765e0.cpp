// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
// Address: 004765e0
// Address Range: [[004765e0, 00476666]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
// Cross-references:
//   core_elephant.cpp_FUN_004a7070 (004a7070) at 004a7130 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505ac0 (00505ac0) at 00505b61 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ca95 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b00f [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_apply_FUN_00586bf0 (00586bf0) at 00586c56 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00587f70 (00587f70) at 00588030 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee4a0 (005ee4a0) at 005ee5b7 [UNCONDITIONAL_CALL]
// Globals:
//   double g_VolumetricFilterScaleLowRes = 7
//   double g_VolumetricFilterScaleHighRes = 3
//   CDemonFilter* g_GlobalFilters = 020a4878
//   CDemonFilter* g_PlayerFilters = 020a4878
// Function calls:
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
          (CDemonLight *this_ptr,float intensity)

{
  int unaff_EBX;
  float10 fVar1;
  double dVar2;
  int iVar3;
  int in_stack_fffffffc;
  
  this_ptr->volumetric_intensity = intensity;
  if (0x100 < this_ptr->shadow_map_width) {
    iVar3 = 0;
    fVar1 = (float10)this_ptr->volumetric_intensity * (float10)g_VolumetricFilterScaleHighRes;
    dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(intensity,this_ptr));
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              (SUB84(dVar2,0),(&g_PlayerFilters)[(int)ROUND(fVar1)],0,iVar3,unaff_EBX);
    return;
  }
  iVar3 = 0;
  fVar1 = (float10)this_ptr->volumetric_intensity * (float10)g_VolumetricFilterScaleLowRes;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(intensity,this_ptr));
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (SUB84(dVar2,0),(&g_GlobalFilters)[(int)ROUND(fVar1)],0,iVar3,in_stack_fffffffc);
  return;
}


// Assembly code:
// 004765e0: SUB ESP,0x4
//   Label: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
// 004765e3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004765e7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004765eb: MOV dword ptr [EAX + 0x2fa8],EDX
// 004765f1: CMP dword ptr [EAX + 0x1cc0],0x100
// 004765fb: JLE 0x00476633
//   XREF to: 00476633 (CONDITIONAL_JUMP)
// 004765fd: PUSH EBX
// 004765fe: FLD float ptr [EAX + 0x2fa8]
// 00476604: PUSH 0x0
// 00476606: FMUL double ptr [0x0061f2d3]
//   XREF to: 0061f2d3 (READ)
// 0047660c: PUSH 0x0
// 0047660e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00476613: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (WRITE)
// 00476617: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (READ)
// 0047661b: PUSH 0x0
// 0047661d: MOV EBX,dword ptr [EDX*0x4 + 0x66efbc]
//   XREF to: 0066efbc (DATA)
// 00476624: PUSH EBX
// 00476625: PUSH EAX
// 00476626: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 0047662b: ADD ESP,0x14
// 0047662e: POP EBX
// 0047662f: ADD ESP,0x4
// 00476632: RET
// 00476633: FLD float ptr [EAX + 0x2fa8]
//   Label: LAB_00476633
// 00476639: PUSH 0x0
// 0047663b: FMUL double ptr [0x0061f2cb]
//   XREF to: 0061f2cb (READ)
// 00476641: PUSH 0x0
// 00476643: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00476648: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (WRITE)
// 0047664c: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 00476650: PUSH 0x0
// 00476652: MOV ECX,dword ptr [EDX*0x4 + 0x66ef9c]
//   XREF to: 0066ef9c (DATA)
// 00476659: PUSH ECX
// 0047665a: PUSH EAX
// 0047665b: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 00476660: ADD ESP,0x14
// 00476663: ADD ESP,0x4
// 00476666: RET
