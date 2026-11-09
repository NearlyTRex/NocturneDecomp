; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_FUN_00406c20(int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   blend_mode
;
; XREF[4]:
;   core_moon.cpp_FUN_00521e40 at 00522035
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f10 at 0040708b
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 at 00483dd5
;   engine_ncursfx.cpp_CMouse_render_FUN_00531460 at 00531553
;
; Referenced Globals:
;   undefined4 DAT_01c51d0c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406c20
        ;   Label: engine_3d.c_FUN_00406c20
    MOV [0x01c51d0c],EAX                ; 00406c24 | DAT_01c51d0c
    RET                                 ; 00406c29

