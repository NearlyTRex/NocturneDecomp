; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_00423d00(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00423d00
        ;   Label: core_bugs.cpp_FUN_00423d00
    MOV EDX,dword ptr [ESP + 0x4]       ; 00423d04
    SHL EAX,0x2                         ; 00423d08
    ADD EAX,EDX                         ; 00423d0b
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00423d0d
    RET                                 ; 00423d10

