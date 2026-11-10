; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005af503(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060a04e
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0060a04e] ; 005af503 | DAT_0060a04e
        ;   Label: crt_unknown.c_FUN_005af503
    FSUBRP                              ; 005af509
    FCHS                                ; 005af50b
    FLDCW word ptr [ESP + 0x18]         ; 005af50d
    ADD ESP,0x24                        ; 005af511
    POP EDX                             ; 005af514
    POP ECX                             ; 005af515
    POP EAX                             ; 005af516
    RET                                 ; 005af517

