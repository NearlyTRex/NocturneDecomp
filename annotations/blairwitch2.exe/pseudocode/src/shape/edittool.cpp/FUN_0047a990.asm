; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a990(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d1eaf
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_mini3d.cpp_setAlpha_FUN_004f3570
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0047a990
        ;   Label: shape_edittool.cpp_FUN_0047a990
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047a993
    PUSH EDX                            ; 0047a997
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047a998
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047a99d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047a9a0
    MOV dword ptr [ESP],EAX             ; 0047a9a4
    FILD dword ptr [ESP]                ; 0047a9a7
    FMUL float ptr [0x005d1eaf]         ; 0047a9aa | DAT_005d1eaf
    SUB ESP,0x4                         ; 0047a9b0
    FSTP float ptr [ESP]                ; 0047a9b3
    CALL engine_mini3d.cpp_setAlpha_FUN_004f3570 ; 0047a9b6
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004f3570(float alpha)
    ADD ESP,0x4                         ; 0047a9bb
    ADD ESP,0x4                         ; 0047a9be
    RET                                 ; 0047a9c1

