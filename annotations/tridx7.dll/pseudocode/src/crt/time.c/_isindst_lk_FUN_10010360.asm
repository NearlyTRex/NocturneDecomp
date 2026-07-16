; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_time_c__isindst_lk_FUN_10010360(_tm *tb)
;
; Parameters:
; _tm *            Stack[0x4]:4   tb
;
; XREF[1]:
;   crt_time.c__isindst_FUN_10010330 at 10010340
;
; Referenced Globals:
;   undefined4 DAT_10018524
;   undefined4 DAT_100185c0
;   undefined4 DAT_100185c4
;   undefined4 DAT_100185c8
;   undefined4 DAT_100185d0
;   undefined4 DAT_100185d4
;   undefined4 DAT_100185d8
;   undefined4 DAT_102407a0
;   undefined2 DAT_102407ec
;   undefined2 DAT_102407ee
;   undefined2 DAT_102407f0
;   undefined2 DAT_102407f2
;   undefined2 DAT_102407f4
;   undefined2 DAT_102407f6
;   undefined2 DAT_102407f8
;   ... and 9 more
;
; Called Functions:
;   crt_time.c_cvtdate_FUN_100105c0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10018524],0x0      ; 10010360 | DAT_10018524
        ;   Label: crt_time.c__isindst_lk_FUN_10010360
    PUSH ESI                            ; 10010367
    JNZ 0x1001036e                      ; 10010368
        ;   XREF to: 1001036e (CONDITIONAL_JUMP)  ; LAB_1001036e
    XOR EAX,EAX                         ; 1001036a
    POP ESI                             ; 1001036c
    RET                                 ; 1001036d
    MOV ESI,dword ptr [ESP + 0x8]       ; 1001036e
        ;   Label: LAB_1001036e
    MOV ECX,dword ptr [ESI + 0x14]      ; 10010372
    CMP dword ptr [0x100185c0],ECX      ; 10010375 | DAT_100185c0
    JNZ 0x10010389                      ; 1001037b
        ;   XREF to: 10010389 (CONDITIONAL_JUMP)  ; LAB_10010389
    CMP dword ptr [0x100185d0],ECX      ; 1001037d | DAT_100185d0
    JZ 0x100104fd                       ; 10010383
        ;   XREF to: 100104fd (CONDITIONAL_JUMP)  ; LAB_100104fd
    CMP dword ptr [0x102407a0],0x0      ; 10010389 | DAT_102407a0
        ;   Label: LAB_10010389
    JZ 0x100104c0                       ; 10010390
        ;   XREF to: 100104c0 (CONDITIONAL_JUMP)  ; LAB_100104c0
    CMP word ptr [0x10240840],0x0       ; 10010396 | DAT_10240840
    JNZ 0x100103e6                      ; 1001039e
        ;   XREF to: 100103e6 (CONDITIONAL_JUMP)  ; LAB_100103e6
    XOR EAX,EAX                         ; 100103a0
    MOV AX,[0x1024084e]                 ; 100103a2 | DAT_1024084e
    PUSH EAX                            ; 100103a8
    XOR EAX,EAX                         ; 100103a9
    MOV AX,[0x1024084c]                 ; 100103ab | DAT_1024084c
    PUSH EAX                            ; 100103b1
    XOR EAX,EAX                         ; 100103b2
    MOV AX,[0x1024084a]                 ; 100103b4 | DAT_1024084a
    PUSH EAX                            ; 100103ba
    XOR EAX,EAX                         ; 100103bb
    MOV AX,[0x10240848]                 ; 100103bd | DAT_10240848
    PUSH EAX                            ; 100103c3
    PUSH 0x0                            ; 100103c4
    XOR EAX,EAX                         ; 100103c6
    MOV AX,[0x10240844]                 ; 100103c8 | DAT_10240844
    PUSH EAX                            ; 100103ce
    XOR EAX,EAX                         ; 100103cf
    MOV AX,[0x10240846]                 ; 100103d1 | DAT_10240846
    PUSH EAX                            ; 100103d7
    XOR EAX,EAX                         ; 100103d8
    MOV AX,[0x10240842]                 ; 100103da | DAT_10240842
    PUSH EAX                            ; 100103e0
    PUSH ECX                            ; 100103e1
    PUSH 0x1                            ; 100103e2
    JMP 0x10010423                      ; 100103e4
        ;   XREF to: 10010423 (UNCONDITIONAL_JUMP)  ; LAB_10010423
    XOR EAX,EAX                         ; 100103e6
        ;   Label: LAB_100103e6
    MOV AX,[0x1024084e]                 ; 100103e8 | DAT_1024084e
    PUSH EAX                            ; 100103ee
    XOR EAX,EAX                         ; 100103ef
    MOV AX,[0x1024084c]                 ; 100103f1 | DAT_1024084c
    PUSH EAX                            ; 100103f7
    XOR EAX,EAX                         ; 100103f8
    MOV AX,[0x1024084a]                 ; 100103fa | DAT_1024084a
    PUSH EAX                            ; 10010400
    XOR EAX,EAX                         ; 10010401
    MOV AX,[0x10240848]                 ; 10010403 | DAT_10240848
    PUSH EAX                            ; 10010409
    XOR EAX,EAX                         ; 1001040a
    MOV AX,[0x10240846]                 ; 1001040c | DAT_10240846
    PUSH EAX                            ; 10010412
    PUSH 0x0                            ; 10010413
    PUSH 0x0                            ; 10010415
    XOR EAX,EAX                         ; 10010417
    MOV AX,[0x10240842]                 ; 10010419 | DAT_10240842
    PUSH EAX                            ; 1001041f
    PUSH ECX                            ; 10010420
    PUSH 0x0                            ; 10010421
    PUSH 0x1                            ; 10010423
        ;   Label: LAB_10010423
    CALL crt_time.c_cvtdate_FUN_100105c0 ; 10010425
        ;   XREF to: 100105c0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_cvtdate_FUN_100105c0(int trantype, int datetype, int year, int month, ...)
    ADD ESP,0x2c                        ; 1001042a
    CMP word ptr [0x102407ec],0x0       ; 1001042d | DAT_102407ec
    JNZ 0x1001047e                      ; 10010435
        ;   XREF to: 1001047e (CONDITIONAL_JUMP)  ; LAB_1001047e
    XOR EAX,EAX                         ; 10010437
    MOV AX,[0x102407fa]                 ; 10010439 | DAT_102407fa
    PUSH EAX                            ; 1001043f
    XOR EAX,EAX                         ; 10010440
    MOV AX,[0x102407f8]                 ; 10010442 | DAT_102407f8
    PUSH EAX                            ; 10010448
    XOR EAX,EAX                         ; 10010449
    MOV AX,[0x102407f6]                 ; 1001044b | DAT_102407f6
    PUSH EAX                            ; 10010451
    XOR EAX,EAX                         ; 10010452
    MOV AX,[0x102407f4]                 ; 10010454 | DAT_102407f4
    PUSH EAX                            ; 1001045a
    PUSH 0x0                            ; 1001045b
    XOR EAX,EAX                         ; 1001045d
    MOV AX,[0x102407f0]                 ; 1001045f | DAT_102407f0
    PUSH EAX                            ; 10010465
    XOR EAX,EAX                         ; 10010466
    MOV AX,[0x102407f2]                 ; 10010468 | DAT_102407f2
    MOV ECX,dword ptr [ESI + 0x14]      ; 1001046e
    PUSH EAX                            ; 10010471
    XOR EAX,EAX                         ; 10010472
    MOV AX,[0x102407ee]                 ; 10010474 | DAT_102407ee
    PUSH EAX                            ; 1001047a
    PUSH ECX                            ; 1001047b
    JMP 0x100104f1                      ; 1001047c
        ;   XREF to: 100104f1 (UNCONDITIONAL_JUMP)  ; LAB_100104f1
    XOR EAX,EAX                         ; 1001047e
        ;   Label: LAB_1001047e
    MOV AX,[0x102407fa]                 ; 10010480 | DAT_102407fa
    PUSH EAX                            ; 10010486
    XOR EAX,EAX                         ; 10010487
    MOV AX,[0x102407f8]                 ; 10010489 | DAT_102407f8
    PUSH EAX                            ; 1001048f
    XOR EAX,EAX                         ; 10010490
    MOV AX,[0x102407f6]                 ; 10010492 | DAT_102407f6
    PUSH EAX                            ; 10010498
    XOR EAX,EAX                         ; 10010499
    MOV AX,[0x102407f4]                 ; 1001049b | DAT_102407f4
    PUSH EAX                            ; 100104a1
    XOR EAX,EAX                         ; 100104a2
    MOV AX,[0x102407f2]                 ; 100104a4 | DAT_102407f2
    MOV ECX,dword ptr [ESI + 0x14]      ; 100104aa
    PUSH EAX                            ; 100104ad
    PUSH 0x0                            ; 100104ae
    PUSH 0x0                            ; 100104b0
    XOR EAX,EAX                         ; 100104b2
    MOV AX,[0x102407ee]                 ; 100104b4 | DAT_102407ee
    PUSH EAX                            ; 100104ba
    PUSH ECX                            ; 100104bb
    PUSH 0x0                            ; 100104bc
    JMP 0x100104f3                      ; 100104be
        ;   XREF to: 100104f3 (UNCONDITIONAL_JUMP)  ; LAB_100104f3
    PUSH 0x0                            ; 100104c0
        ;   Label: LAB_100104c0
    PUSH 0x0                            ; 100104c2
    PUSH 0x0                            ; 100104c4
    PUSH 0x2                            ; 100104c6
    PUSH 0x0                            ; 100104c8
    PUSH 0x0                            ; 100104ca
    PUSH 0x1                            ; 100104cc
    PUSH 0x4                            ; 100104ce
    PUSH ECX                            ; 100104d0
    PUSH 0x1                            ; 100104d1
    PUSH 0x1                            ; 100104d3
    CALL crt_time.c_cvtdate_FUN_100105c0 ; 100104d5
        ;   XREF to: 100105c0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_cvtdate_FUN_100105c0(int trantype, int datetype, int year, int month, ...)
    ADD ESP,0x2c                        ; 100104da
    PUSH 0x0                            ; 100104dd
    PUSH 0x0                            ; 100104df
    PUSH 0x0                            ; 100104e1
    MOV EAX,dword ptr [ESI + 0x14]      ; 100104e3
    PUSH 0x2                            ; 100104e6
    PUSH 0x0                            ; 100104e8
    PUSH 0x0                            ; 100104ea
    PUSH 0x5                            ; 100104ec
    PUSH 0xa                            ; 100104ee
    PUSH EAX                            ; 100104f0
    PUSH 0x1                            ; 100104f1
        ;   Label: LAB_100104f1
    PUSH 0x0                            ; 100104f3
        ;   Label: LAB_100104f3
    CALL crt_time.c_cvtdate_FUN_100105c0 ; 100104f5
        ;   XREF to: 100105c0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_cvtdate_FUN_100105c0(int trantype, int datetype, int year, int month, ...)
    ADD ESP,0x2c                        ; 100104fa
    MOV EAX,[0x100185c4]                ; 100104fd | DAT_100185c4
        ;   Label: LAB_100104fd
    LEA EDX,[ESI + 0x1c]                ; 10010502
    CMP dword ptr [0x100185d4],EAX      ; 10010505 | DAT_100185d4
    MOV EAX,dword ptr [EDX]             ; 1001050b
    JLE 0x1001053a                      ; 1001050d
        ;   XREF to: 1001053a (CONDITIONAL_JUMP)  ; LAB_1001053a
    CMP dword ptr [0x100185c4],EAX      ; 1001050f | DAT_100185c4
    JG 0x10010536                       ; 10010515
        ;   XREF to: 10010536 (CONDITIONAL_JUMP)  ; LAB_10010536
    CMP dword ptr [0x100185d4],EAX      ; 10010517 | DAT_100185d4
    JL 0x10010536                       ; 1001051d
        ;   XREF to: 10010536 (CONDITIONAL_JUMP)  ; LAB_10010536
    CMP dword ptr [0x100185c4],EAX      ; 1001051f | DAT_100185c4
    JGE 0x1001055e                      ; 10010525
        ;   XREF to: 1001055e (CONDITIONAL_JUMP)  ; LAB_1001055e
    CMP dword ptr [0x100185d4],EAX      ; 10010527 | DAT_100185d4
    JLE 0x1001055e                      ; 1001052d
        ;   XREF to: 1001055e (CONDITIONAL_JUMP)  ; LAB_1001055e
    MOV EAX,0x1                         ; 1001052f
    POP ESI                             ; 10010534
    RET                                 ; 10010535
    XOR EAX,EAX                         ; 10010536
        ;   Label: LAB_10010536
    POP ESI                             ; 10010538
    RET                                 ; 10010539
    CMP dword ptr [0x100185d4],EAX      ; 1001053a | DAT_100185d4
        ;   Label: LAB_1001053a
    JG 0x100105b4                       ; 10010540
        ;   XREF to: 100105b4 (CONDITIONAL_JUMP)  ; LAB_100105b4
    CMP dword ptr [0x100185c4],EAX      ; 10010542 | DAT_100185c4
    JL 0x100105b4                       ; 10010548
        ;   XREF to: 100105b4 (CONDITIONAL_JUMP)  ; LAB_100105b4
    CMP dword ptr [0x100185d4],EAX      ; 1001054a | DAT_100185d4
    JGE 0x1001055e                      ; 10010550
        ;   XREF to: 1001055e (CONDITIONAL_JUMP)  ; LAB_1001055e
    CMP dword ptr [0x100185c4],EAX      ; 10010552 | DAT_100185c4
    JLE 0x1001055e                      ; 10010558
        ;   XREF to: 1001055e (CONDITIONAL_JUMP)  ; LAB_1001055e
    XOR EAX,EAX                         ; 1001055a
    POP ESI                             ; 1001055c
    RET                                 ; 1001055d
    MOV EAX,dword ptr [ESI + 0x8]       ; 1001055e
        ;   Label: LAB_1001055e
    SHL EAX,0x2                         ; 10010561
    LEA ECX,[EAX + EAX*0x2]             ; 10010564
    LEA EAX,[ECX + ECX*0x4]             ; 10010567
    ADD EAX,dword ptr [ESI + 0x4]       ; 1001056a
    SHL EAX,0x2                         ; 1001056d
    LEA ECX,[EAX + EAX*0x2]             ; 10010570
    LEA EAX,[ECX + ECX*0x4]             ; 10010573
    ADD EAX,dword ptr [ESI]             ; 10010576
    MOV ESI,dword ptr [0x100185c4]      ; 10010578 | DAT_100185c4
    CMP dword ptr [EDX],ESI             ; 1001057e
    LEA ECX,[EAX + EAX*0x4]             ; 10010580
    LEA EAX,[ECX + ECX*0x4]             ; 10010583
    LEA ECX,[EAX + EAX*0x4]             ; 10010586
    LEA EAX,[ECX*0x8 + 0x0]             ; 10010589
    JNZ 0x100105a3                      ; 10010590
        ;   XREF to: 100105a3 (CONDITIONAL_JUMP)  ; LAB_100105a3
    CMP dword ptr [0x100185c8],EAX      ; 10010592 | DAT_100185c8
    MOV EAX,0x1                         ; 10010598
    JLE 0x100105b9                      ; 1001059d
        ;   XREF to: 100105b9 (CONDITIONAL_JUMP)  ; LAB_100105b9
    POP ESI                             ; 1001059f
    XOR EAX,EAX                         ; 100105a0
    RET                                 ; 100105a2
    CMP dword ptr [0x100185d8],EAX      ; 100105a3 | DAT_100185d8
        ;   Label: LAB_100105a3
    MOV EAX,0x1                         ; 100105a9
    JG 0x100105b9                       ; 100105ae
        ;   XREF to: 100105b9 (CONDITIONAL_JUMP)  ; LAB_100105b9
    POP ESI                             ; 100105b0
    XOR EAX,EAX                         ; 100105b1
    RET                                 ; 100105b3
    MOV EAX,0x1                         ; 100105b4
        ;   Label: LAB_100105b4
    POP ESI                             ; 100105b9
        ;   Label: LAB_100105b9
    RET                                 ; 100105ba

