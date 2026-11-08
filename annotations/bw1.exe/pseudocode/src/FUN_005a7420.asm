; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a7420(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00607910
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_0043e620
;   FUN_00441ca0
;   FUN_00522fc0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7420
        ;   Label: FUN_005a7420
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a7421
    TEST byte ptr [ESP + 0xc],0x4       ; 005a7425
    JNZ 0x005a74d1                      ; 005a742a
        ;   XREF to: 005a74d1 (CONDITIONAL_JUMP)  ; LAB_005a74d1
    PUSH 0x0                            ; 005a7430
    ADD EBX,0xbe7a0                     ; 005a7432
    PUSH EBX                            ; 005a7438
    CALL FUN_00522fc0                   ; 005a7439
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fc0()
    ADD ESP,0x8                         ; 005a743e
    PUSH 0x0                            ; 005a7441
    SUB EAX,0x3ab34                     ; 005a7443
    PUSH EAX                            ; 005a7448
    CALL FUN_0043e620                   ; 005a7449
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e620()
    ADD ESP,0x8                         ; 005a744e
    PUSH 0x0                            ; 005a7451
    SUB EAX,0x3ab30                     ; 005a7453
    PUSH EAX                            ; 005a7458
    CALL FUN_0043e620                   ; 005a7459
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e620()
    ADD ESP,0x8                         ; 005a745e
    PUSH 0x0                            ; 005a7461
    SUB EAX,0x3ab30                     ; 005a7463
    PUSH EAX                            ; 005a7468
    CALL FUN_0043e620                   ; 005a7469
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e620()
    ADD ESP,0x8                         ; 005a746e
    PUSH 0x0                            ; 005a7471
    SUB EAX,0x23a4                      ; 005a7473
    PUSH EAX                            ; 005a7478
    CALL FUN_005673f0                   ; 005a7479
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 005a747e
    PUSH 0x0                            ; 005a7481
    SUB EAX,0x8c8c                      ; 005a7483
    PUSH EAX                            ; 005a7488
    CALL FUN_0040ee30                   ; 005a7489
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 005a748e
    PUSH 0x0                            ; 005a7491
    SUB EAX,0x93c                       ; 005a7493
    PUSH EAX                            ; 005a7498
    CALL FUN_00441ca0                   ; 005a7499
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 005a749e
    PUSH 0x0                            ; 005a74a1
    SUB EAX,0x2b48                      ; 005a74a3
    PUSH EAX                            ; 005a74a8
    CALL FUN_005673f0                   ; 005a74a9
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 005a74ae
    PUSH 0x1                            ; 005a74b1
    LEA EBX,[EAX + 0xfffffea8]          ; 005a74b3
    PUSH EBX                            ; 005a74b9
    CALL FUN_00408730                   ; 005a74ba
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 005a74bf
    MOV DL,byte ptr [ESP + 0xc]         ; 005a74c2
    MOV EBX,EAX                         ; 005a74c6
    TEST DL,0x2                         ; 005a74c8
    JNZ 0x005a74ec                      ; 005a74cb
        ;   XREF to: 005a74ec (CONDITIONAL_JUMP)  ; LAB_005a74ec
    MOV EAX,EBX                         ; 005a74cd
    POP EBX                             ; 005a74cf
    RET                                 ; 005a74d0
    PUSH 0x607910                       ; 005a74d1 | DAT_00607910
        ;   Label: LAB_005a74d1
    PUSH EBX                            ; 005a74d6
    CALL FUN_005c030f                   ; 005a74d7
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005a74dc
    PUSH EAX                            ; 005a74df
    CALL FUN_005c0336                   ; 005a74e0
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005a74e5
    MOV EAX,EBX                         ; 005a74e8
    POP EBX                             ; 005a74ea
    RET                                 ; 005a74eb
    PUSH EAX                            ; 005a74ec
        ;   Label: LAB_005a74ec
    CALL FUN_005c0344                   ; 005a74ed
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005a74f2
    MOV EAX,EBX                         ; 005a74f5
    POP EBX                             ; 005a74f7
    RET                                 ; 005a74f8

