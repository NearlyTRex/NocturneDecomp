; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b9e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bcd65
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_mini3d.cpp_setAlpha_FUN_004edaf0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0047b9e0
        ;   Label: shape_edittool.cpp_FUN_0047b9e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047b9e3
    PUSH EDX                            ; 0047b9e7
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047b9e8
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047b9ed
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047b9f0
    MOV dword ptr [ESP],EAX             ; 0047b9f4
    FILD dword ptr [ESP]                ; 0047b9f7
    FMUL float ptr [0x005bcd65]         ; 0047b9fa | DAT_005bcd65
    SUB ESP,0x4                         ; 0047ba00
    FSTP float ptr [ESP]                ; 0047ba03
    CALL engine_mini3d.cpp_setAlpha_FUN_004edaf0 ; 0047ba06
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004edaf0(float alpha)
    ADD ESP,0x4                         ; 0047ba0b
    ADD ESP,0x4                         ; 0047ba0e
    RET                                 ; 0047ba11

