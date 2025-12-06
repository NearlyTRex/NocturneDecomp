; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bat.cpp_FUN_00415070()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00415070
        ;   Label: core_bat.cpp_FUN_00415070
    MOV EAX,dword ptr [ESP + 0x8]       ; 00415074
    MOV EAX,dword ptr [EAX]             ; 00415078
    MOV dword ptr [EDX],EAX             ; 0041507a
    MOV EAX,EDX                         ; 0041507c
    RET                                 ; 0041507e

