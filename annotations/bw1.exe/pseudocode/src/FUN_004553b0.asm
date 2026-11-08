; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004553b0(void)
;
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x5fb430                       ; 004553b0
        ;   Label: FUN_004553b0
    PUSH 0x10                           ; 004553b5
    PUSH 0x152bd50                      ; 004553b7
    CALL FUN_005c0357                   ; 004553bc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004553c1
    PUSH 0x5fb430                       ; 004553c4
    PUSH 0x10                           ; 004553c9
    PUSH 0x152be14                      ; 004553cb
    CALL FUN_005c0357                   ; 004553d0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004553d5
    PUSH 0x5fb430                       ; 004553d8
    PUSH 0x10                           ; 004553dd
    PUSH 0x152bed8                      ; 004553df
    CALL FUN_005c0357                   ; 004553e4
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004553e9
    PUSH 0x5fb430                       ; 004553ec
    PUSH 0x10                           ; 004553f1
    PUSH 0x152bf9c                      ; 004553f3
    CALL FUN_005c0357                   ; 004553f8
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004553fd
    PUSH 0x5fb430                       ; 00455400
    PUSH 0x10                           ; 00455405
    PUSH 0x152c060                      ; 00455407
    CALL FUN_005c0357                   ; 0045540c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00455411
    PUSH 0x5fb430                       ; 00455414
    PUSH 0x10                           ; 00455419
    PUSH 0x152c124                      ; 0045541b
    CALL FUN_005c0357                   ; 00455420
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00455425
    PUSH 0x5fb430                       ; 00455428
    PUSH 0x10                           ; 0045542d
    PUSH 0x152c1e8                      ; 0045542f
    CALL FUN_005c0357                   ; 00455434
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00455439
    RET                                 ; 0045543c

