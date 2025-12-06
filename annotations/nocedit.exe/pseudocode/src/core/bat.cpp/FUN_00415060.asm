; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bat.cpp_FUN_00415060()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00415060
        ;   Label: core_bat.cpp_FUN_00415060
    MOV EAX,dword ptr [ESP + 0x8]       ; 00415064
    MOV EAX,dword ptr [EAX]             ; 00415068
    MOV dword ptr [EDX],EAX             ; 0041506a
    MOV EAX,EDX                         ; 0041506c
    RET                                 ; 0041506e

