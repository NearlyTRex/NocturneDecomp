; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0055f74c(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbf0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0055f74c
        ;   Label: engine_special.cpp_FUN_0055f74c
    CMP dword ptr [0x01c37788],0x0      ; 0055f750 | DAT_01c37788
    JNZ 0x0055f75c                      ; 0055f757
        ;   XREF to: 0055f75c (CONDITIONAL_JUMP)  ; LAB_0055f75c
    XOR EAX,EAX                         ; 0055f759
    RET                                 ; 0055f75b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0055f75c
        ;   Label: LAB_0055f75c
    PUSH ECX                            ; 0055f760
    CALL dword ptr [0x0264bbf0]         ; 0055f761 | DAT_0264bbf0
    ADD ESP,0x4                         ; 0055f767
    RET                                 ; 0055f76a

