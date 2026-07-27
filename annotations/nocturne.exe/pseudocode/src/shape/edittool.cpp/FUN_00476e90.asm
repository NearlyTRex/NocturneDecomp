; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00476e90(int param_1)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00476e70 at 00476e76
;
; Referenced Globals:
;   undefined4 DAT_01bcde24
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00476e90
        ;   Label: shape_edittool.cpp_FUN_00476e90
    CMP EDX,dword ptr [0x01bcde24]      ; 00476e94 | DAT_01bcde24
    JZ 0x004764bd                       ; 00476e9a
        ;   XREF to: 004764bd (CONDITIONAL_JUMP)  ; LAB_004764bd
    RET                                 ; 00476ea0

