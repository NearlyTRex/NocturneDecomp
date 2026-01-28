; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_mobster_cpp_FUN_00526b00(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00526b00
        ;   Label: core_mobster.cpp_FUN_00526b00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00526b04
    MOV dword ptr [EAX],EDX             ; 00526b08
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526b0a
    MOV dword ptr [EAX + 0x8],EDX       ; 00526b0e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00526b11
    MOV dword ptr [EAX + 0x4],EDX       ; 00526b15
    RET                                 ; 00526b18

