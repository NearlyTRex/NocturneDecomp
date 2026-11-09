; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_zombie_cpp_FUN_005cc0db(void)
;
;
; *****************************************************************************

section .text

    FCHS                                ; 005cc0db
        ;   Label: unkafter_zombie.cpp_FUN_005cc0db
    FLDCW word ptr [ESP + 0x18]         ; 005cc0dd
    ADD ESP,0x24                        ; 005cc0e1
    POP EDX                             ; 005cc0e4
    POP ECX                             ; 005cc0e5
    POP EAX                             ; 005cc0e6
    RET                                 ; 005cc0e7

