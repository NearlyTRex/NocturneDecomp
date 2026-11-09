; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_zombie_cpp_FUN_005cc0fb(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00628cfc
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00628cfc] ; 005cc0fb | DAT_00628cfc
        ;   Label: unkafter_zombie.cpp_FUN_005cc0fb
    FSUBRP                              ; 005cc101
    FCHS                                ; 005cc103
    FLDCW word ptr [ESP + 0x18]         ; 005cc105
    ADD ESP,0x24                        ; 005cc109
    POP EDX                             ; 005cc10c
    POP ECX                             ; 005cc10d
    POP EAX                             ; 005cc10e
    RET                                 ; 005cc10f

