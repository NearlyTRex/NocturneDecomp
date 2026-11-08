; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005022f0(void)
;
;
; Called Functions:
;   FUN_0040d420
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1d1c7b8                      ; 005022f0
        ;   Label: FUN_005022f0
    CALL FUN_0040d420                   ; 005022f5
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 005022fa
    PUSH 0x61830c                       ; 005022fd
    CALL FUN_005b8d8c                   ; 00502302
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00502307
    PUSH 0x5f6f60                       ; 0050230a
    PUSH 0x4b                           ; 0050230f
    PUSH 0x1d1c7cc                      ; 00502311
    CALL FUN_005b7f5f                   ; 00502316
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0050231b
    PUSH 0x61831c                       ; 0050231e
    CALL FUN_005b8d8c                   ; 00502323
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00502328
    PUSH 0x1d1cda8                      ; 0050232b
    CALL FUN_0040d420                   ; 00502330
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 00502335
    PUSH 0x61832c                       ; 00502338
    CALL FUN_005b8d8c                   ; 0050233d
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00502342
    RET                                 ; 00502345

