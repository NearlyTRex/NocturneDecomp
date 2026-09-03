; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer *this_ptr,int blend_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blend_mode
;
; XREF[34]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 0041121f
;   core_batman.cpp_CBatman_renderOpaque_FUN_00414340 at 00414473
;   core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0 at 0042c5bb
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_004270e0 at 004270f9
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430 at 0044f902
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0 at 0044fcca
;   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00450c90 at 00450d0e
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520 at 00450815
;   core_dlight.cpp_renderConeLightGeometry_FUN_00451b70 at 00451be4
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0045a260 at 0045a3a2
;   ... and 24 more
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_004083c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00461000
        ;   Label: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
    PUSH EDX                            ; 00461004
    CALL engine_3d.c_setBlendMode_FUN_004083c0 ; 00461005
        ;   XREF to: 004083c0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_004083c0(int blend_mode)
    ADD ESP,0x4                         ; 0046100a
    RET                                 ; 0046100d

