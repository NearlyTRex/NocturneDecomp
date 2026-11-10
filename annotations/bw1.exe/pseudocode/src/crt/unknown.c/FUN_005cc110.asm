; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005cc110(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00628d06
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00628d06] ; 005cc110 | DAT_00628d06
        ;   Label: crt_unknown.c_FUN_005cc110
    FSUBRP                              ; 005cc116
    FLDCW word ptr [ESP + 0x18]         ; 005cc118
    ADD ESP,0x24                        ; 005cc11c
    POP EDX                             ; 005cc11f
    POP ECX                             ; 005cc120
    POP EAX                             ; 005cc121
    RET                                 ; 005cc122

