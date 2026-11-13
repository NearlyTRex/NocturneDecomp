; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492e40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbca8
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_mini3d.cpp_setAlpha_FUN_00512320
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00492e40
        ;   Label: shape_edittool.cpp_FUN_00492e40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00492e43
    PUSH EDX                            ; 00492e47
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00492e48
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00492e4d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492e50
    MOV dword ptr [ESP],EAX             ; 00492e54
    FILD dword ptr [ESP]                ; 00492e57
    FMUL float ptr [0x005dbca8]         ; 00492e5a | DAT_005dbca8
    SUB ESP,0x4                         ; 00492e60
    FSTP float ptr [ESP]                ; 00492e63
    CALL engine_mini3d.cpp_setAlpha_FUN_00512320 ; 00492e66
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_00512320(float alpha)
    ADD ESP,0x4                         ; 00492e6b
    ADD ESP,0x4                         ; 00492e6e
    RET                                 ; 00492e71

