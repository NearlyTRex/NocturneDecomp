; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00466220(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00442190 at 004421c1
;
; Called Functions:
;   FUN_005a54b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00466220
        ;   Label: FUN_00466220
    PUSH EDX                            ; 00466224
    CALL FUN_005a54b0                   ; 00466225
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54b0()
    ADD ESP,0x4                         ; 0046622a
    TEST EAX,EAX                        ; 0046622d
    SETZ AL                             ; 0046622f
    AND EAX,0xff                        ; 00466232
    RET                                 ; 00466237

