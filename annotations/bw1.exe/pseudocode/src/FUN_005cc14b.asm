; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005cc14b(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00628d06
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00628d06] ; 005cc14b | DAT_00628d06
        ;   Label: FUN_005cc14b
    FADDP                               ; 005cc151
    FCHS                                ; 005cc153
    FLDCW word ptr [ESP + 0x18]         ; 005cc155
    ADD ESP,0x24                        ; 005cc159
    POP EDX                             ; 005cc15c
    POP ECX                             ; 005cc15d
    POP EAX                             ; 005cc15e
    RET                                 ; 005cc15f

