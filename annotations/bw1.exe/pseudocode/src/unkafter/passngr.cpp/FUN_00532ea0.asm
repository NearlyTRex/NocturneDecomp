; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_passngr_cpp_FUN_00532ea0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e7abdc
;   undefined4 DAT_01e7abe0
;   undefined4 DAT_01e7d35c
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00532ea0
        ;   Label: unkafter_passngr.cpp_FUN_00532ea0
    MOV dword ptr [0x01e7abdc],EDX      ; 00532ea2 | DAT_01e7abdc
    MOV dword ptr [0x01e7abe0],EDX      ; 00532ea8 | DAT_01e7abe0
    MOV dword ptr [0x01e7d35c],EDX      ; 00532eae | DAT_01e7d35c
    RET                                 ; 00532eb4

