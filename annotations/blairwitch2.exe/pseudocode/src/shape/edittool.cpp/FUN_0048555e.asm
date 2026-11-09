; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0048555e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c26410
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0048555e
        ;   Label: shape_edittool.cpp_FUN_0048555e
    MOV EDX,dword ptr [ESP + 0x4]       ; 00485560
    CMP EDX,dword ptr [0x01c26410]      ; 00485564 | DAT_01c26410
    JZ 0x0048437d                       ; 0048556a
        ;   XREF to: 0048437d (CONDITIONAL_JUMP)  ; LAB_0048437d
    RET                                 ; 00485570

