; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00570f18(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c40be
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x005c40be] ; 00570f18 | DAT_005c40be
        ;   Label: FUN_00570f18
    FADDP                               ; 00570f1e
    FLDCW word ptr [ESP + 0x18]         ; 00570f20
    ADD ESP,0x24                        ; 00570f24
    POP EDX                             ; 00570f27
    POP ECX                             ; 00570f28
    POP EAX                             ; 00570f29
    RET                                 ; 00570f2a

