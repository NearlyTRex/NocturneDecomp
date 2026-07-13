; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041a400(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059aa20
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_0041a4f0
;   FUN_00438250
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a400
        ;   Label: FUN_0041a400
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a401
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a405
    JNZ 0x0041a4a1                      ; 0041a40a
        ;   XREF to: 0041a4a1 (CONDITIONAL_JUMP)  ; LAB_0041a4a1
    PUSH 0x0                            ; 0041a410
    ADD EBX,0xbda4                      ; 0041a412
    PUSH EBX                            ; 0041a418
    CALL FUN_0041a4f0                   ; 0041a419
        ;   XREF to: 0041a4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a4f0()
    ADD ESP,0x8                         ; 0041a41e
    PUSH 0x0                            ; 0041a421
    SUB EAX,0x89e0                      ; 0041a423
    PUSH EAX                            ; 0041a428
    CALL FUN_0040fe50                   ; 0041a429
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 0041a42e
    PUSH 0x0                            ; 0041a431
    SUB EAX,0x4b0                       ; 0041a433
    PUSH EAX                            ; 0041a438
    CALL FUN_0040fe30                   ; 0041a439
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 0041a43e
    PUSH 0x0                            ; 0041a441
    SUB EAX,0x20c                       ; 0041a443
    PUSH EAX                            ; 0041a448
    CALL FUN_0040fe10                   ; 0041a449
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0041a44e
    PUSH 0x0                            ; 0041a451
    SUB EAX,0xb4                        ; 0041a453
    PUSH EAX                            ; 0041a458
    CALL FUN_0040fe10                   ; 0041a459
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0041a45e
    PUSH 0x0                            ; 0041a461
    SUB EAX,0x1c8                       ; 0041a463
    PUSH EAX                            ; 0041a468
    CALL FUN_00438250                   ; 0041a469
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 0041a46e
    PUSH 0x0                            ; 0041a471
    SUB EAX,0x293c                      ; 0041a473
    PUSH EAX                            ; 0041a478
    CALL FUN_0051b6e0                   ; 0041a479
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 0041a47e
    PUSH 0x1                            ; 0041a481
    LEA EBX,[EAX + 0xfffffeb0]          ; 0041a483
    PUSH EBX                            ; 0041a489
    CALL FUN_00409ea0                   ; 0041a48a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0041a48f
    MOV DL,byte ptr [ESP + 0xc]         ; 0041a492
    MOV EBX,EAX                         ; 0041a496
    TEST DL,0x2                         ; 0041a498
    JNZ 0x0041a4bc                      ; 0041a49b
        ;   XREF to: 0041a4bc (CONDITIONAL_JUMP)  ; LAB_0041a4bc
    MOV EAX,EBX                         ; 0041a49d
    POP EBX                             ; 0041a49f
    RET                                 ; 0041a4a0
    PUSH 0x59aa20                       ; 0041a4a1 | DAT_0059aa20
        ;   Label: LAB_0041a4a1
    PUSH EBX                            ; 0041a4a6
    CALL FUN_0056445f                   ; 0041a4a7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0041a4ac
    PUSH EAX                            ; 0041a4af
    CALL FUN_00564486                   ; 0041a4b0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0041a4b5
    MOV EAX,EBX                         ; 0041a4b8
    POP EBX                             ; 0041a4ba
    RET                                 ; 0041a4bb
    PUSH EAX                            ; 0041a4bc
        ;   Label: LAB_0041a4bc
    CALL FUN_00564494                   ; 0041a4bd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0041a4c2
    MOV EAX,EBX                         ; 0041a4c5
    POP EBX                             ; 0041a4c7
    RET                                 ; 0041a4c8

