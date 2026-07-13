; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ee560(int param_1)
;
;
; Called Functions:
;   FUN_004d4370
;   FUN_004ee8b0
;   FUN_004ee8d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee560
        ;   Label: FUN_004ee560
    PUSH 0x0                            ; 004ee564
    ADD EAX,0x12c                       ; 004ee566
    PUSH EAX                            ; 004ee56b
    CALL FUN_004ee8d0                   ; 004ee56c
        ;   XREF to: 004ee8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee8d0()
    ADD ESP,0x8                         ; 004ee571
    PUSH 0x0                            ; 004ee574
    SUB EAX,0x8c                        ; 004ee576
    PUSH EAX                            ; 004ee57b
    CALL FUN_004ee8b0                   ; 004ee57c
        ;   XREF to: 004ee8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee8b0()
    ADD ESP,0x8                         ; 004ee581
    PUSH 0x0                            ; 004ee584
    SUB EAX,0xa0                        ; 004ee586
    PUSH EAX                            ; 004ee58b
    CALL FUN_004d4370                   ; 004ee58c
        ;   XREF to: 004d4370 (UNCONDITIONAL_CALL)  ; undefined FUN_004d4370()
    ADD ESP,0x8                         ; 004ee591
    RET                                 ; 004ee594

