; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503070(void)
;
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1d1d40c                      ; 00503070
        ;   Label: FUN_00503070
    CALL FUN_0040d0a0                   ; 00503075
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 0050307a
    PUSH 0x61f366                       ; 0050307d
    CALL FUN_005c1093                   ; 00503082
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00503087
    PUSH 0x1d1d420                      ; 0050308a
    CALL FUN_0040d0a0                   ; 0050308f
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00503094
    PUSH 0x61f376                       ; 00503097
    CALL FUN_005c1093                   ; 0050309c
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005030a1
    PUSH 0x1d1d434                      ; 005030a4
    CALL FUN_0040d0a0                   ; 005030a9
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 005030ae
    PUSH 0x61f386                       ; 005030b1
    CALL FUN_005c1093                   ; 005030b6
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005030bb
    PUSH 0x1d1d448                      ; 005030be
    CALL FUN_0040d0a0                   ; 005030c3
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 005030c8
    PUSH 0x61f396                       ; 005030cb
    CALL FUN_005c1093                   ; 005030d0
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 005030d5
    RET                                 ; 005030d8

