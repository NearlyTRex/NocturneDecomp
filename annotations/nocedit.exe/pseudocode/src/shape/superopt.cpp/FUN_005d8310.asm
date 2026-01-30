; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_FUN_005d8310(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8310
        ;   Label: shape_superopt.cpp_FUN_005d8310
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8314
    MOV dword ptr [EAX],EDX             ; 005d8318
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d831a
    MOV dword ptr [EAX + 0x4],EDX       ; 005d831e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d8321
    MOV dword ptr [EAX + 0x8],EDX       ; 005d8325
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d8328
    MOV dword ptr [EAX + 0xc],EDX       ; 005d832c
    RET                                 ; 005d832f

