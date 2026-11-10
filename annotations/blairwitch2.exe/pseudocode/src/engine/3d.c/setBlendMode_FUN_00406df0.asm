; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setBlendMode_FUN_00406df0(int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   blend_mode
;
; XREF[4]:
;   core_moon.cpp_FUN_00502510 at 00502694
;   engine_3d.c_flushPremiumRenderBuffer_FUN_004070e0 at 0040725b
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 at 0046b8d5
;   engine_ncursfx.cpp_CMouse_render_FUN_00510250 at 00510343
;
; Referenced Globals:
;   undefined4 DAT_01c38b4c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406df0
        ;   Label: engine_3d.c_setBlendMode_FUN_00406df0
    MOV [0x01c38b4c],EAX                ; 00406df4 | DAT_01c38b4c
    RET                                 ; 00406df9

