; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char __watcallStack crt_unknown_c_hexDigitToChar_FUN_005633ec(int digit)
;
; Parameters:
; int              Stack[0x4]:4   digit
;
; XREF[1]:
;   crt_unknown.c__tempnam_FUN_005633fc at 00563458
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005633ec
        ;   Label: crt_unknown.c_hexDigitToChar_FUN_005633ec
    ADD EAX,0x30                        ; 005633f0
    CMP EAX,0x39                        ; 005633f3
    JLE 0x005633fb                      ; 005633f6
        ;   XREF to: 005633fb (CONDITIONAL_JUMP)  ; LAB_005633fb
    ADD EAX,0x27                        ; 005633f8
    RET                                 ; 005633fb
        ;   Label: LAB_005633fb

