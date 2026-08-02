; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_00570ef0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c40be
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x005c40be] ; 00570ef0 | DAT_005c40be
        ;   Label: crt_unknown.c_FUN_00570ef0
    FSUBRP                              ; 00570ef6
    FLDCW word ptr [ESP + 0x18]         ; 00570ef8
    ADD ESP,0x24                        ; 00570efc
    POP EDX                             ; 00570eff
    POP ECX                             ; 00570f00
    POP EAX                             ; 00570f01
    RET                                 ; 00570f02

