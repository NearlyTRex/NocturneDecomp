; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_FUN_005d8190()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8190
        ;   Label: shape_superopt.cpp_FUN_005d8190
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8194
    MOV ECX,dword ptr [EDX]             ; 005d8198
    MOV dword ptr [EAX],ECX             ; 005d819a
    MOV ECX,dword ptr [EDX + 0x4]       ; 005d819c
    MOV dword ptr [EAX + 0x4],ECX       ; 005d819f
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d81a2
    MOV dword ptr [EAX + 0x8],ECX       ; 005d81a5
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d81a8
    MOV dword ptr [EAX + 0xc],ECX       ; 005d81ab
    MOV ECX,dword ptr [EDX + 0x10]      ; 005d81ae
    MOV dword ptr [EAX + 0x10],ECX      ; 005d81b1
    MOV ECX,dword ptr [EDX + 0x14]      ; 005d81b4
    MOV dword ptr [EAX + 0x14],ECX      ; 005d81b7
    RET                                 ; 005d81ba

