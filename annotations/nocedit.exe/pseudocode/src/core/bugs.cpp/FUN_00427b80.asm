; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_00427b80()
;
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00427b80
        ;   Label: core_bugs.cpp_FUN_00427b80
    MOV EAX,dword ptr [ESP + 0x8]       ; 00427b84
    MOV EAX,dword ptr [EAX]             ; 00427b88
    MOV EDX,dword ptr [ECX]             ; 00427b8a
    MOV dword ptr [ECX],EAX             ; 00427b8c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00427b8e
    MOV dword ptr [EAX],EDX             ; 00427b92
    RET                                 ; 00427b94

