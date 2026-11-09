; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)
;
;
; XREF[1]:
;   engine_3d.c_drawLineStrip2D_FUN_00404440 at 00404447
;
; Referenced Globals:
;   undefined4 DAT_00610600
;   undefined4 DAT_00713a5c
;   undefined4 DAT_01c4f020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00713a5c]      ; 00404410 | DAT_00713a5c
        ;   Label: engine_3d.c_setActiveRenderColor_FUN_00404410
    TEST EDX,EDX                        ; 00404416
    JL 0x0040442e                       ; 00404418
        ;   XREF to: 0040442e (CONDITIONAL_JUMP)  ; LAB_0040442e
    MOV ECX,dword ptr [EDX*0x4 + 0x610600] ; 0040441a | DAT_00610600
    MOV dword ptr [0x01c4f020],ECX      ; 00404421 | DAT_01c4f020
    MOV dword ptr [0x00713a5c],EDX      ; 00404427 | DAT_00713a5c
    RET                                 ; 0040442d
    MOV ECX,EDX                         ; 0040442e
        ;   Label: LAB_0040442e
    NEG ECX                             ; 00404430
    MOV dword ptr [0x01c4f020],ECX      ; 00404432 | DAT_01c4f020
    MOV dword ptr [0x00713a5c],EDX      ; 00404438 | DAT_00713a5c
    RET                                 ; 0040443e

