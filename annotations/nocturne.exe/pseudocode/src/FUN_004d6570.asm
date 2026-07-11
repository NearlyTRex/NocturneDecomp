; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d6570(int param_1)
;
;
; Called Functions:
;   FUN_004d7d90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6570
        ;   Label: FUN_004d6570
    PUSH 0x0                            ; 004d6574
    ADD EAX,0x98                        ; 004d6576
    PUSH EAX                            ; 004d657b
    CALL FUN_004d7d90                   ; 004d657c
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7d90()
    ADD ESP,0x8                         ; 004d6581
    SUB EAX,0x98                        ; 004d6584
    RET                                 ; 004d6589

