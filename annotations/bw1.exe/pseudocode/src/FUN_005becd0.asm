; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005becd0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 005becd0
        ;   Label: FUN_005becd0
    SETZ AL                             ; 005becd5
    AND EAX,0xff                        ; 005becd8
    RET                                 ; 005becdd

