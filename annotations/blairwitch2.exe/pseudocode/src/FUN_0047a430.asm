; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047a430(void)
;
;
; Called Functions:
;   FUN_0047b660
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1c25594                      ; 0047a430
        ;   Label: FUN_0047a430
    CALL FUN_0047b660                   ; 0047a435
        ;   XREF to: 0047b660 (UNCONDITIONAL_CALL)  ; undefined FUN_0047b660()
    ADD ESP,0x4                         ; 0047a43a
    PUSH 0x6138d0                       ; 0047a43d
    CALL FUN_005b8d8c                   ; 0047a442
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0047a447
    RET                                 ; 0047a44a

