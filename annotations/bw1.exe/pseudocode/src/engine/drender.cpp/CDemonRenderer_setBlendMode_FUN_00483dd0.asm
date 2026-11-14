; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer *this_ptr,int blend_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blend_mode
;
; XREF[37]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_004101f0 at 00410331
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413970 at 00413ab5
;   core_chain.cpp_CChain_renderTransparent_FUN_00436600 at 0043670e
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060 at 00430079
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190 at 004644d8
;   core_dlight.cpp_FUN_00463820 at 00463d46
;   core_dlight.cpp_FUN_00464990 at 00464a16
;   core_dlight.cpp_renderConeLightGeometry_FUN_00465890 at 00465904
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0047cfe0 at 0047d134
;   core_fire.cpp_CExplosion_render_FUN_004b1870 at 004b1bbd
;   ... and 27 more
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_00406c20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00483dd0
        ;   Label: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
    PUSH EDX                            ; 00483dd4
    CALL engine_3d.c_setBlendMode_FUN_00406c20 ; 00483dd5
        ;   XREF to: 00406c20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c20(int blend_mode)
    ADD ESP,0x4                         ; 00483dda
    RET                                 ; 00483ddd

