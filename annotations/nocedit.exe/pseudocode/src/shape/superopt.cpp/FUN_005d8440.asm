; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_FUN_005d8440(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8440
        ;   Label: shape_superopt.cpp_FUN_005d8440
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8444
    MOV dword ptr [EAX],EDX             ; 005d8448
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d844a
    MOV dword ptr [EAX + 0x4],EDX       ; 005d844e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d8451
    MOV dword ptr [EAX + 0x8],EDX       ; 005d8455
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d8458
    MOV dword ptr [EAX + 0xc],EDX       ; 005d845c
    MOV EDX,dword ptr [ESP + 0x18]      ; 005d845f
    MOV dword ptr [EAX + 0x10],EDX      ; 005d8463
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005d8466
    MOV dword ptr [EAX + 0x14],EDX      ; 005d846a
    RET                                 ; 005d846d

