; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005cc123(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00628d06
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00628d06] ; 005cc123 | DAT_00628d06
        ;   Label: crt_unknown.c_FUN_005cc123
    FSUBRP                              ; 005cc129
    FCHS                                ; 005cc12b
    FLDCW word ptr [ESP + 0x18]         ; 005cc12d
    ADD ESP,0x24                        ; 005cc131
    POP EDX                             ; 005cc134
    POP ECX                             ; 005cc135
    POP EAX                             ; 005cc136
    RET                                 ; 005cc137

