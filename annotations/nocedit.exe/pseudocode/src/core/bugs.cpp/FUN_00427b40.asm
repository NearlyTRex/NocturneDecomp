; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_00427b40()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00427b40
        ;   Label: core_bugs.cpp_FUN_00427b40
    MOV EDX,dword ptr [ESP + 0x4]       ; 00427b44
    SHL EAX,0x2                         ; 00427b48
    ADD EAX,EDX                         ; 00427b4b
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00427b4d
    RET                                 ; 00427b50

