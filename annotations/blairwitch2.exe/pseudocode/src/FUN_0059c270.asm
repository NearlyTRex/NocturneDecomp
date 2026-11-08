; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c270(void)
;
;
; Called Functions:
;   FUN_0059c290
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x2668118                      ; 0059c270
        ;   Label: FUN_0059c270
    CALL FUN_0059c290                   ; 0059c275
        ;   XREF to: 0059c290 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c290()
    ADD ESP,0x4                         ; 0059c27a
    PUSH 0x61ea4c                       ; 0059c27d
    CALL FUN_005b8d8c                   ; 0059c282
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0059c287
    RET                                 ; 0059c28a

