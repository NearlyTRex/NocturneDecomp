; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_FUN_00402800(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 at 0048070b
;
; Referenced Globals:
;   undefined4 DAT_0061049c
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061049c]                ; 00402800 | DAT_0061049c
        ;   Label: engine_2d.c_FUN_00402800
    RET                                 ; 00402805

