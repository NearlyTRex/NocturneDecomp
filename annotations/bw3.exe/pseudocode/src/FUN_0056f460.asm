; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f460(void)
;
;
; Called Functions:
;   FUN_0056f510
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 0056f460
        ;   Label: FUN_0056f460
    PUSH 0xff                           ; 0056f465
    PUSH 0xff                           ; 0056f46a
    PUSH 0xff                           ; 0056f46f
    PUSH 0x2cfd898                      ; 0056f474
    CALL FUN_0056f510                   ; 0056f479
        ;   XREF to: 0056f510 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f510()
    ADD ESP,0x14                        ; 0056f47e
    PUSH 0x0                            ; 0056f481
    PUSH 0x0                            ; 0056f483
    PUSH 0x0                            ; 0056f485
    PUSH 0x0                            ; 0056f487
    PUSH 0x2cfd89c                      ; 0056f489
    CALL FUN_0056f510                   ; 0056f48e
        ;   XREF to: 0056f510 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f510()
    ADD ESP,0x14                        ; 0056f493
    RET                                 ; 0056f496

