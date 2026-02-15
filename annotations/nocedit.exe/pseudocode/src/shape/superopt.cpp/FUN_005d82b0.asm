; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_FUN_005d82b0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d82b0
        ;   Label: shape_superopt.cpp_FUN_005d82b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d82b4
    MOV ECX,dword ptr [EDX]             ; 005d82b8
    MOV dword ptr [EAX],ECX             ; 005d82ba
    MOV ECX,dword ptr [EDX + 0x4]       ; 005d82bc
    MOV dword ptr [EAX + 0x4],ECX       ; 005d82bf
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d82c2
    MOV dword ptr [EAX + 0x8],ECX       ; 005d82c5
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d82c8
    MOV dword ptr [EAX + 0xc],ECX       ; 005d82cb
    MOV ECX,dword ptr [EDX + 0x10]      ; 005d82ce
    MOV dword ptr [EAX + 0x10],ECX      ; 005d82d1
    MOV ECX,dword ptr [EDX + 0x14]      ; 005d82d4
    MOV dword ptr [EAX + 0x14],ECX      ; 005d82d7
    RET                                 ; 005d82da

