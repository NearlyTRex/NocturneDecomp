; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_FUN_004bc7c0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bc7c0
        ;   Label: core_imp.cpp_FUN_004bc7c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bc7c4
    MOV dword ptr [EAX],EDX             ; 004bc7c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bc7ca
    MOV dword ptr [EAX + 0x8],EDX       ; 004bc7ce
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bc7d1
    MOV dword ptr [EAX + 0x4],EDX       ; 004bc7d5
    RET                                 ; 004bc7d8

