; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer *this_ptr,int blend_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blend_mode
;
; XREF[38]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 004107b1
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413db5
;   core_chain.cpp_FUN_005b56c0 at 005b57ce
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730 at 00426749
;   core_charactr.cpp_FUN_0042b760 at 0042be34
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960 at 0044bca8
;   core_dlight.cpp_FUN_0044b020 at 0044b516
;   core_dlight.cpp_FUN_0044c15e at 0044c1e6
;   core_dlight.cpp_renderConeLightGeometry_FUN_0044d060 at 0044d0d4
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00464ac0 at 00464c14
;   ... and 28 more
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_00406df0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046b8d0
        ;   Label: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
    PUSH EDX                            ; 0046b8d4
    CALL engine_3d.c_setBlendMode_FUN_00406df0 ; 0046b8d5
        ;   XREF to: 00406df0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406df0(int blend_mode)
    ADD ESP,0x4                         ; 0046b8da
    RET                                 ; 0046b8dd

