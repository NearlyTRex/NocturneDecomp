; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00486760(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5bb78
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00486760
        ;   Label: shape_edittool.cpp_FUN_00486760
    CMP EDX,dword ptr [0x01c5bb78]      ; 00486764 | DAT_01c5bb78
    JZ 0x0048557d                       ; 0048676a
        ;   XREF to: 0048557d (CONDITIONAL_JUMP)  ; LAB_0048557d
    RET                                 ; 00486770

