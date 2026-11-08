; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c7360(void)
;
;
; Called Functions:
;   FUN_004c93c0
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1cb8284                      ; 004c7360
        ;   Label: FUN_004c7360
    CALL FUN_004c93c0                   ; 004c7365
        ;   XREF to: 004c93c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c93c0()
    ADD ESP,0x4                         ; 004c736a
    PUSH 0x6167c0                       ; 004c736d
    CALL FUN_005b8d8c                   ; 004c7372
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004c7377
    PUSH 0x5f7c10                       ; 004c737a
    PUSH 0x100                          ; 004c737f
    PUSH 0x1cb82f4                      ; 004c7384
    CALL FUN_005b7f5f                   ; 004c7389
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004c738e
    PUSH 0x6167d0                       ; 004c7391
    CALL FUN_005b8d8c                   ; 004c7396
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 004c739b
    PUSH 0x5f7c30                       ; 004c739e
    PUSH 0x7d0                          ; 004c73a3
    PUSH 0x1cbcafc                      ; 004c73a8
    CALL FUN_005b7f5f                   ; 004c73ad
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004c73b2
    PUSH 0x5f7c50                       ; 004c73b5
    PUSH 0x20                           ; 004c73ba
    PUSH 0x1cdde44                      ; 004c73bc
    CALL FUN_005b7f5f                   ; 004c73c1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004c73c6
    PUSH 0x5f7c70                       ; 004c73c9
    PUSH 0x3e8                          ; 004c73ce
    PUSH 0x1cde34c                      ; 004c73d3
    CALL FUN_005b7f5f                   ; 004c73d8
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004c73dd
    RET                                 ; 004c73e0

