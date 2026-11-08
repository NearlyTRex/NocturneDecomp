; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058a610(void)
;
;
; Called Functions:
;   FUN_0058a640
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x2661f80                      ; 0058a610
        ;   Label: FUN_0058a610
    CALL FUN_0058a640                   ; 0058a615
        ;   XREF to: 0058a640 (UNCONDITIONAL_CALL)  ; undefined FUN_0058a640()
    ADD ESP,0x4                         ; 0058a61a
    PUSH 0x5f22b0                       ; 0058a61d
    PUSH 0xc8                           ; 0058a622
    PUSH 0x2661fb8                      ; 0058a627
    CALL FUN_005b7f5f                   ; 0058a62c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0058a631
    RET                                 ; 0058a634

