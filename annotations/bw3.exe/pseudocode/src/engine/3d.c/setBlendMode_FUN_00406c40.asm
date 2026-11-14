; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setBlendMode_FUN_00406c40(int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   blend_mode
;
; XREF[3]:
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30 at 004070ab
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 at 0046d4b5
;   engine_ncursfx.cpp_CMouse_render_FUN_00508d30 at 00508e23
;
; Referenced Globals:
;   undefined4 DAT_01c6e2ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406c40
        ;   Label: engine_3d.c_setBlendMode_FUN_00406c40
    MOV [0x01c6e2ac],EAX                ; 00406c44 | DAT_01c6e2ac
    RET                                 ; 00406c49

