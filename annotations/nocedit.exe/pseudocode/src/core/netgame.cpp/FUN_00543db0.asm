; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_netgame_cpp_FUN_00543db0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543db0
        ;   Label: core_netgame.cpp_FUN_00543db0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00543db4
    MOV ECX,dword ptr [EDX]             ; 00543db8
    MOV dword ptr [EAX],ECX             ; 00543dba
    MOV ECX,dword ptr [EDX + 0x4]       ; 00543dbc
    MOV dword ptr [EAX + 0x4],ECX       ; 00543dbf
    MOV ECX,dword ptr [EDX + 0x8]       ; 00543dc2
    MOV dword ptr [EAX + 0x8],ECX       ; 00543dc5
    MOV ECX,dword ptr [EDX + 0xc]       ; 00543dc8
    MOV dword ptr [EAX + 0xc],ECX       ; 00543dcb
    MOV ECX,dword ptr [EDX + 0x10]      ; 00543dce
    MOV dword ptr [EAX + 0x10],ECX      ; 00543dd1
    MOV ECX,dword ptr [EDX + 0x14]      ; 00543dd4
    MOV dword ptr [EAX + 0x14],ECX      ; 00543dd7
    MOV ECX,dword ptr [EDX + 0x18]      ; 00543dda
    MOV dword ptr [EAX + 0x18],ECX      ; 00543ddd
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00543de0
    MOV dword ptr [EAX + 0x1c],ECX      ; 00543de3
    MOV ECX,dword ptr [EDX + 0x20]      ; 00543de6
    MOV dword ptr [EAX + 0x20],ECX      ; 00543de9
    MOV ECX,dword ptr [EDX + 0x24]      ; 00543dec
    MOV dword ptr [EAX + 0x24],ECX      ; 00543def
    MOV ECX,dword ptr [EDX + 0x28]      ; 00543df2
    MOV dword ptr [EAX + 0x28],ECX      ; 00543df5
    RET                                 ; 00543df8

