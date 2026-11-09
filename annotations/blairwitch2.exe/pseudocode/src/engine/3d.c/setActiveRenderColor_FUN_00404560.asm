; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404560(void)
;
;
; XREF[1]:
;   engine_3d.c_drawLineStrip2D_FUN_00404590 at 00404597
;
; Referenced Globals:
;   undefined4 DAT_006094d0
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_01c35e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0070ca5c]      ; 00404560 | DAT_0070ca5c
        ;   Label: engine_3d.c_setActiveRenderColor_FUN_00404560
    TEST EDX,EDX                        ; 00404566
    JL 0x0040457e                       ; 00404568
        ;   XREF to: 0040457e (CONDITIONAL_JUMP)  ; LAB_0040457e
    MOV ECX,dword ptr [EDX*0x4 + 0x6094d0] ; 0040456a | DAT_006094d0
    MOV dword ptr [0x01c35e60],ECX      ; 00404571 | DAT_01c35e60
    MOV dword ptr [0x0070ca5c],EDX      ; 00404577 | DAT_0070ca5c
    RET                                 ; 0040457d
    MOV ECX,EDX                         ; 0040457e
        ;   Label: LAB_0040457e
    NEG ECX                             ; 00404580
    MOV dword ptr [0x01c35e60],ECX      ; 00404582 | DAT_01c35e60
    MOV dword ptr [0x0070ca5c],EDX      ; 00404588 | DAT_0070ca5c
    RET                                 ; 0040458e

