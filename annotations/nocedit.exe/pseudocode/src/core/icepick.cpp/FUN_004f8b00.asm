; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f8b00()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8b00
        ;   Label: core_icepick.cpp_FUN_004f8b00
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8b04
    MOV dword ptr [EAX],EDX             ; 004f8b08
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f8b0a
    MOV dword ptr [EAX + 0x8],EDX       ; 004f8b0e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f8b11
    MOV dword ptr [EAX + 0x4],EDX       ; 004f8b15
    RET                                 ; 004f8b18

