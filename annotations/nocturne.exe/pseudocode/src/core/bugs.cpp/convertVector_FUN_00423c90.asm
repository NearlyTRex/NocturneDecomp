; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_convertVector_FUN_00423c90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059ae98
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423c90
        ;   Label: core_bugs.cpp_convertVector_FUN_00423c90
    MOV EAX,dword ptr [ESP + 0xc]       ; 00423c91
    MOV EBX,dword ptr [ESP + 0x8]       ; 00423c95
    FILD dword ptr [EAX]                ; 00423c99
    FMUL float ptr [0x0059ae98]         ; 00423c9b | DAT_0059ae98
    FSTP float ptr [EBX]                ; 00423ca1
    FILD dword ptr [EAX + 0x4]          ; 00423ca3
    FMUL float ptr [0x0059ae98]         ; 00423ca6 | DAT_0059ae98
    FSTP float ptr [EBX + 0x4]          ; 00423cac
    FILD dword ptr [EAX + 0x8]          ; 00423caf
    FMUL float ptr [0x0059ae98]         ; 00423cb2 | DAT_0059ae98
    FSTP float ptr [EBX + 0x8]          ; 00423cb8
    POP EBX                             ; 00423cbb
    RET                                 ; 00423cbc

