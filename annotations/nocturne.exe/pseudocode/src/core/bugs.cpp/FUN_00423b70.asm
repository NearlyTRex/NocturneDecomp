; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00423b70(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423b70
        ;   Label: core_bugs.cpp_FUN_00423b70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00423b74
    MOV dword ptr [EAX],EDX             ; 00423b78
    MOV EDX,dword ptr [ESP + 0xc]       ; 00423b7a
    MOV dword ptr [EAX + 0x4],EDX       ; 00423b7e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00423b81
    MOV dword ptr [EAX + 0x8],EDX       ; 00423b85
    RET                                 ; 00423b88

