; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005af518(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060a04e
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0060a04e] ; 005af518 | DAT_0060a04e
        ;   Label: FUN_005af518
    FADDP                               ; 005af51e
    FLDCW word ptr [ESP + 0x18]         ; 005af520
    ADD ESP,0x24                        ; 005af524
    POP EDX                             ; 005af527
    POP ECX                             ; 005af528
    POP EAX                             ; 005af529
    RET                                 ; 005af52a

