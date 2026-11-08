; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a9440(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f915e
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_004207b0
;   FUN_004688a0
;   FUN_004837b0
;   FUN_00483850
;   FUN_00483de0
;   FUN_00484a40
;   FUN_00484e00
;   FUN_005c03a0
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9440
        ;   Label: FUN_005a9440
    PUSH ESI                            ; 005a9441
    PUSH EDI                            ; 005a9442
    PUSH EBP                            ; 005a9443
    MOV EBP,ESP                         ; 005a9444
    SUB ESP,0x40                        ; 005a9446
    AND ESP,0xfffffff8                  ; 005a9449
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a944c
    LEA EAX,[EBX + 0x20]                ; 005a944f
    PUSH EAX                            ; 005a9452
    MOV EDX,dword ptr [0x00612560]      ; 005a9453 | DAT_00612560
    PUSH EDX                            ; 005a9459 | DAT_01bc120c
    CALL FUN_004837b0                   ; 005a945a
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 005a945f
    PUSH 0x0                            ; 005a9462
    LEA EAX,[EBX + 0x30]                ; 005a9464
    PUSH EAX                            ; 005a9467
    MOV ESI,dword ptr [0x00612560]      ; 005a9468 | DAT_00612560
    PUSH ESI                            ; 005a946e | DAT_01bc120c
    MOV dword ptr [ESP + 0x48],EAX      ; 005a946f
    CALL FUN_00483850                   ; 005a9473
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 005a9478
    PUSH 0x0                            ; 005a947b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a947d
    PUSH EBX                            ; 005a9483
    LEA ESI,[ESP + 0x28]                ; 005a9484
    LEA EDI,[ESP + 0x10]                ; 005a9488
    CALL dword ptr [EAX + 0x1c]         ; 005a948c
    MOV ECX,0x6                         ; 005a948f
    ADD ESP,0x4                         ; 005a9494
    LEA EAX,[ESP + 0xc]                 ; 005a9497
    LEA ESI,[ESP + 0x24]                ; 005a949b
    PUSH EAX                            ; 005a949f
    MOVSD.REP ES:EDI,ESI                ; 005a94a0
    CALL FUN_004207b0                   ; 005a94a2
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 005a94a7
    MOV EDI,dword ptr [0x00612560]      ; 005a94aa | DAT_00612560
    PUSH EDI                            ; 005a94b0 | DAT_01bc120c
    MOV dword ptr [EBX + 0x7e8],EAX     ; 005a94b1
    CALL thunk_FUN_005084b0             ; 005a94b7
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 005a94bc
    ADD ESP,0x4                         ; 005a94c2
    TEST EAX,EAX                        ; 005a94c5
    JNZ 0x005a94d6                      ; 005a94c7
        ;   XREF to: 005a94d6 (CONDITIONAL_JUMP)  ; LAB_005a94d6
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 005a94c9
    MOV ESP,EBP                         ; 005a94cf
    POP EBP                             ; 005a94d1
    POP EDI                             ; 005a94d2
    POP ESI                             ; 005a94d3
    POP EBX                             ; 005a94d4
    RET                                 ; 005a94d5
    PUSH 0x0                            ; 005a94d6
        ;   Label: LAB_005a94d6
    MOV EDX,dword ptr [ESP + 0x40]      ; 005a94d8
    PUSH EDX                            ; 005a94dc
    MOV ECX,dword ptr [0x00612560]      ; 005a94dd | DAT_00612560
    PUSH ECX                            ; 005a94e3 | DAT_01bc120c
    CALL FUN_00483850                   ; 005a94e4
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 005a94e9
    PUSH 0xffff                         ; 005a94ec
    MOV ESI,dword ptr [0x00612560]      ; 005a94f1 | DAT_00612560
    PUSH ESI                            ; 005a94f7 | DAT_01bc120c
    CALL FUN_00483de0                   ; 005a94f8
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    MOV EDI,dword ptr [EBX + 0x3b8]     ; 005a94fd
    ADD ESP,0x8                         ; 005a9503
    CMP EDI,0x3                         ; 005a9506
    JZ 0x005a959e                       ; 005a9509
        ;   XREF to: 005a959e (CONDITIONAL_JUMP)  ; LAB_005a959e
    FLDZ                                ; 005a950f
    FLD float ptr [EBX + 0x3bc]         ; 005a9511
    FSTP double ptr [ESP]               ; 005a9517
    FCOMP double ptr [ESP]              ; 005a951a
    FNSTSW AX                           ; 005a951d
    SAHF                                ; 005a951f
    JNC 0x005a959e                      ; 005a9520
        ;   XREF to: 005a959e (CONDITIONAL_JUMP)  ; LAB_005a959e
    FLD double ptr [0x005f915e]         ; 005a9522 | DAT_005f915e
    FLD double ptr [ESP]                ; 005a9528
    FMUL ST1                            ; 005a952b
    FSUBP                               ; 005a952d
    CALL FUN_005c03a0                   ; 005a952f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x38]        ; 005a9534
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a9538
    PUSH EAX                            ; 005a953c
    MOV EDX,dword ptr [0x00612560]      ; 005a953d | DAT_00612560
    PUSH EDX                            ; 005a9543 | DAT_01bc120c
    CALL FUN_00483de0                   ; 005a9544
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 005a9549
    PUSH 0x0                            ; 005a954c
    MOV ECX,dword ptr [0x00612560]      ; 005a954e | DAT_00612560
    PUSH ECX                            ; 005a9554 | DAT_01bc120c
    CALL FUN_00484a40                   ; 005a9555
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00484a40()
    ADD ESP,0x8                         ; 005a955a
    PUSH 0x2e7                          ; 005a955d
    LEA EAX,[EBX + 0x158]               ; 005a9562
    PUSH 0x0                            ; 005a9568
    PUSH EAX                            ; 005a956a
    CALL FUN_004688a0                   ; 005a956b
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005a9570
    MOV ESI,dword ptr [0x00612560]      ; 005a9573 | DAT_00612560
    PUSH ESI                            ; 005a9579 | DAT_01bc120c
    CALL FUN_00484e00                   ; 005a957a
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484e00()
    ADD ESP,0x4                         ; 005a957f
    MOV EDI,dword ptr [0x00612560]      ; 005a9582 | DAT_00612560
        ;   Label: LAB_005a9582
    PUSH EDI                            ; 005a9588 | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 005a9589
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 005a958e
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 005a9591
    MOV ESP,EBP                         ; 005a9597
    POP EBP                             ; 005a9599
    POP EDI                             ; 005a959a
    POP ESI                             ; 005a959b
    POP EBX                             ; 005a959c
    RET                                 ; 005a959d
    PUSH -0x1                           ; 005a959e
        ;   Label: LAB_005a959e
    LEA EAX,[EBX + 0x158]               ; 005a95a0
    PUSH 0x0                            ; 005a95a6
    PUSH EAX                            ; 005a95a8
    CALL FUN_004688a0                   ; 005a95a9
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005a95ae
    JMP 0x005a9582                      ; 005a95b1
        ;   XREF to: 005a9582 (UNCONDITIONAL_JUMP)  ; LAB_005a9582

