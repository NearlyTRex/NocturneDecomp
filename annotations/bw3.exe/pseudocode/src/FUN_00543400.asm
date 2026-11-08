; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543400(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0270f7c0
;   undefined4 DAT_0270f7c4
;   undefined4 DAT_0270f7c8
;   undefined4 DAT_0270f7cc
;   undefined4 DAT_0270f7d0
;   undefined4 DAT_0270f7d4
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543400
        ;   Label: FUN_00543400
    PUSH ESI                            ; 00543401
    PUSH 0x1c5bc10                      ; 00543402
    PUSH 0x2                            ; 00543407
    MOV EDX,0xbe8f5c29                  ; 00543409
    MOV ECX,0x3ed70a3d                  ; 0054340e
    PUSH 0x6040b4                       ; 00543413
    MOV EBX,0x3f19999a                  ; 00543418
    MOV ESI,0x3eb33333                  ; 0054341d
    PUSH 0x5434d0                       ; 00543422
    MOV dword ptr [0x0270f7c0],EDX      ; 00543427 | DAT_0270f7c0
    MOV dword ptr [0x0270f7c4],ECX      ; 0054342d | DAT_0270f7c4
    PUSH 0x5d1176                       ; 00543433
    MOV dword ptr [0x0270f7c8],EBX      ; 00543438 | DAT_0270f7c8
    MOV dword ptr [0x0270f7cc],ESI      ; 0054343e | DAT_0270f7cc
    PUSH 0x270f818                      ; 00543444
    MOV dword ptr [0x0270f7d0],ECX      ; 00543449 | DAT_0270f7d0
    MOV dword ptr [0x0270f7d4],EBX      ; 0054344f | DAT_0270f7d4
    CALL FUN_0040c3a0                   ; 00543455
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0054345a
    PUSH 0x270f818                      ; 0054345d
    PUSH 0x1                            ; 00543462
    PUSH 0x6040d0                       ; 00543464
    PUSH 0x545e70                       ; 00543469
    PUSH 0x5d117e                       ; 0054346e
    PUSH 0x270f854                      ; 00543473
    CALL FUN_0040c3a0                   ; 00543478
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 0054347d
    PUSH 0x270f818                      ; 00543480
    PUSH 0x1                            ; 00543485
    PUSH 0x6040d4                       ; 00543487
    PUSH 0x545f00                       ; 0054348c
    PUSH 0x5d118d                       ; 00543491
    PUSH 0x270f890                      ; 00543496
    CALL FUN_0040c3a0                   ; 0054349b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 005434a0
    PUSH 0x270f818                      ; 005434a3
    PUSH 0x1                            ; 005434a8
    PUSH 0x6040d8                       ; 005434aa
    PUSH 0x545f90                       ; 005434af
    PUSH 0x5d119b                       ; 005434b4
    PUSH 0x270f8cc                      ; 005434b9
    CALL FUN_0040c3a0                   ; 005434be
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 005434c3
    POP ESI                             ; 005434c6
    POP EBX                             ; 005434c7
    RET                                 ; 005434c8

