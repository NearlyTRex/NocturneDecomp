; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_00570f03(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c40be
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x005c40be] ; 00570f03 | DAT_005c40be
        ;   Label: crt_unknown.c_FUN_00570f03
    FSUBRP                              ; 00570f09
    FCHS                                ; 00570f0b
    FLDCW word ptr [ESP + 0x18]         ; 00570f0d
    ADD ESP,0x24                        ; 00570f11
    POP EDX                             ; 00570f14
    POP ECX                             ; 00570f15
    POP EAX                             ; 00570f16
    RET                                 ; 00570f17

