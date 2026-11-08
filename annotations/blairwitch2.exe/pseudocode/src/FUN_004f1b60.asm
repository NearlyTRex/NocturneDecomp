; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f1b60(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1b60
        ;   Label: FUN_004f1b60
    CMP dword ptr [EAX + 0xfc],0x0      ; 004f1b64
    JNZ 0x004f1b50                      ; 004f1b6b
        ;   XREF to: 004f1b50 (CONDITIONAL_JUMP)  ; LAB_004f1b50
    LEA EAX,[EAX]                       ; 004f1b6d
    XOR EAX,EAX                         ; 004f1b70
    RET                                 ; 004f1b72

