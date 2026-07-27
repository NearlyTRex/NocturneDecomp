; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_FUN_004edf30(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edf30
        ;   Label: core_netgame.cpp_FUN_004edf30
    MOV EDX,dword ptr [ESP + 0x8]       ; 004edf34
    MOV ECX,dword ptr [EDX]             ; 004edf38
    MOV dword ptr [EAX],ECX             ; 004edf3a
    MOV ECX,dword ptr [EDX + 0x4]       ; 004edf3c
    MOV dword ptr [EAX + 0x4],ECX       ; 004edf3f
    MOV ECX,dword ptr [EDX + 0x8]       ; 004edf42
    MOV dword ptr [EAX + 0x8],ECX       ; 004edf45
    MOV ECX,dword ptr [EDX + 0xc]       ; 004edf48
    MOV dword ptr [EAX + 0xc],ECX       ; 004edf4b
    MOV ECX,dword ptr [EDX + 0x10]      ; 004edf4e
    MOV dword ptr [EAX + 0x10],ECX      ; 004edf51
    MOV ECX,dword ptr [EDX + 0x14]      ; 004edf54
    MOV dword ptr [EAX + 0x14],ECX      ; 004edf57
    MOV ECX,dword ptr [EDX + 0x18]      ; 004edf5a
    MOV dword ptr [EAX + 0x18],ECX      ; 004edf5d
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004edf60
    MOV dword ptr [EAX + 0x1c],ECX      ; 004edf63
    MOV ECX,dword ptr [EDX + 0x20]      ; 004edf66
    MOV dword ptr [EAX + 0x20],ECX      ; 004edf69
    MOV ECX,dword ptr [EDX + 0x24]      ; 004edf6c
    MOV dword ptr [EAX + 0x24],ECX      ; 004edf6f
    MOV ECX,dword ptr [EDX + 0x28]      ; 004edf72
    MOV dword ptr [EAX + 0x28],ECX      ; 004edf75
    RET                                 ; 004edf78

