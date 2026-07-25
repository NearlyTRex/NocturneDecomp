; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00570edb(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c40b4
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x005c40b4] ; 00570edb | DAT_005c40b4
        ;   Label: FUN_00570edb
    FSUBRP                              ; 00570ee1
    FCHS                                ; 00570ee3
    FLDCW word ptr [ESP + 0x18]         ; 00570ee5
    ADD ESP,0x24                        ; 00570ee9
    POP EDX                             ; 00570eec
    POP ECX                             ; 00570eed
    POP EAX                             ; 00570eee
    RET                                 ; 00570eef

