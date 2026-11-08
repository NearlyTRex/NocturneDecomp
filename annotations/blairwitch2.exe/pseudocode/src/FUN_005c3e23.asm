; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005c3e23(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00621816
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00621816] ; 005c3e23 | DAT_00621816
        ;   Label: FUN_005c3e23
    FSUBRP                              ; 005c3e29
    FCHS                                ; 005c3e2b
    FLDCW word ptr [ESP + 0x18]         ; 005c3e2d
    ADD ESP,0x24                        ; 005c3e31
    POP EDX                             ; 005c3e34
    POP ECX                             ; 005c3e35
    POP EAX                             ; 005c3e36
    RET                                 ; 005c3e37

