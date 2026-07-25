; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00570ec8(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c40b4
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x005c40b4] ; 00570ec8 | DAT_005c40b4
        ;   Label: FUN_00570ec8
    FSUBRP                              ; 00570ece
    FLDCW word ptr [ESP + 0x18]         ; 00570ed0
    ADD ESP,0x24                        ; 00570ed4
    POP EDX                             ; 00570ed7
    POP ECX                             ; 00570ed8
    POP EAX                             ; 00570ed9
    RET                                 ; 00570eda

