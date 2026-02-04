; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer *this_ptr,int blend_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blend_mode
;
; XREF[32]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413c0d
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 004174e2
;   core_chain.cpp_CChain_renderTransparent_FUN_004308f0 at 004309e9
;   core_charactr.cpp_CCharacter_FUN_0042af60 at 0042b0ce
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 at 00473ee6
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 at 0047428e
;   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 at 00475288
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 at 00474da9
;   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 at 00476144
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485d21
;   ... and 22 more
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_00406dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0048ca50
        ;   Label: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
    PUSH EDX                            ; 0048ca54
    CALL engine_3d.c_setBlendMode_FUN_00406dd0 ; 0048ca55
        ;   XREF to: 00406dd0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
    ADD ESP,0x4                         ; 0048ca5a
    RET                                 ; 0048ca5d

