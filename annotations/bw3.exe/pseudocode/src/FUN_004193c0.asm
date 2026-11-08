; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004193c0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_007e1620
;   undefined4 DAT_007e1634
;   undefined4 DAT_007e1638
;   undefined4 DAT_007e1644
;   undefined4 DAT_007e1648
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004193c0
        ;   Label: FUN_004193c0
    PUSH EBP                            ; 004193c1
    SUB ESP,0x78                        ; 004193c2
    MOV EBP,dword ptr [ESP + 0x84]      ; 004193c5
    MOV EBX,dword ptr [ESP + 0x88]      ; 004193cc
    CMP dword ptr [EBP + 0xd0e4],0x0    ; 004193d3
    JZ 0x004193e4                       ; 004193da
        ;   XREF to: 004193e4 (CONDITIONAL_JUMP)  ; LAB_004193e4
    XOR EAX,EAX                         ; 004193dc
    ADD ESP,0x78                        ; 004193de
    POP EBP                             ; 004193e1
    POP EBX                             ; 004193e2
    RET                                 ; 004193e3
    PUSH EDI                            ; 004193e4
        ;   Label: LAB_004193e4
    PUSH ESI                            ; 004193e5
    MOV ECX,dword ptr [0x007e1620]      ; 004193e6 | DAT_007e1620
    PUSH ECX                            ; 004193ec
    LEA EAX,[EBP + 0x158]               ; 004193ed
    PUSH EAX                            ; 004193f3
    LEA ESI,[ESP + 0x58]                ; 004193f4
    LEA EDI,[ESP + 0x4c]                ; 004193f8
    CALL FUN_0054dcc0                   ; 004193fc
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x58]                ; 00419401
    ADD ESP,0x8                         ; 00419405
    LEA EAX,[ESP + 0x44]                ; 00419408
    MOVSD ES:EDI,ESI                    ; 0041940c
    MOVSD ES:EDI,ESI                    ; 0041940d
    MOVSD ES:EDI,ESI                    ; 0041940e
    CMP EBX,EAX                         ; 0041940f
    JZ 0x00419427                       ; 00419411
        ;   XREF to: 00419427 (CONDITIONAL_JUMP)  ; LAB_00419427
    MOV EAX,dword ptr [ESP + 0x44]      ; 00419413
    MOV dword ptr [EBX],EAX             ; 00419417
    MOV EAX,dword ptr [ESP + 0x48]      ; 00419419
    MOV dword ptr [EBX + 0x4],EAX       ; 0041941d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419420
    MOV dword ptr [EBX + 0x8],EAX       ; 00419424
    MOV ESI,dword ptr [0x007e1634]      ; 00419427 | DAT_007e1634
        ;   Label: LAB_00419427
    PUSH ESI                            ; 0041942d
    LEA EAX,[EBP + 0x158]               ; 0041942e
    PUSH EAX                            ; 00419434
    LEA ESI,[ESP + 0x10]                ; 00419435
    LEA EDI,[ESP + 0x1c]                ; 00419439
    CALL FUN_0054dcc0                   ; 0041943d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x10]                ; 00419442
    LEA EAX,[ESP + 0x1c]                ; 00419446
    ADD ESP,0x8                         ; 0041944a
    LEA EDX,[EBX + 0xc]                 ; 0041944d
    MOVSD ES:EDI,ESI                    ; 00419450
    MOVSD ES:EDI,ESI                    ; 00419451
    MOVSD ES:EDI,ESI                    ; 00419452
    CMP EDX,EAX                         ; 00419453
    JZ 0x0041946b                       ; 00419455
        ;   XREF to: 0041946b (CONDITIONAL_JUMP)  ; LAB_0041946b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00419457
    MOV dword ptr [EDX],EAX             ; 0041945b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0041945d
    MOV dword ptr [EDX + 0x4],EAX       ; 00419461
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00419464
    MOV dword ptr [EDX + 0x8],EAX       ; 00419468
    MOV EDI,dword ptr [0x007e1638]      ; 0041946b | DAT_007e1638
        ;   Label: LAB_0041946b
    PUSH EDI                            ; 00419471
    LEA EAX,[EBP + 0x158]               ; 00419472
    PUSH EAX                            ; 00419478
    LEA ESI,[ESP + 0x7c]                ; 00419479
    LEA EDI,[ESP + 0x28]                ; 0041947d
    CALL FUN_0054dcc0                   ; 00419481
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x7c]                ; 00419486
    LEA EAX,[ESP + 0x28]                ; 0041948a
    ADD ESP,0x8                         ; 0041948e
    LEA EDX,[EBX + 0x18]                ; 00419491
    MOVSD ES:EDI,ESI                    ; 00419494
    MOVSD ES:EDI,ESI                    ; 00419495
    MOVSD ES:EDI,ESI                    ; 00419496
    CMP EDX,EAX                         ; 00419497
    JZ 0x004194af                       ; 00419499
        ;   XREF to: 004194af (CONDITIONAL_JUMP)  ; LAB_004194af
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041949b
    MOV dword ptr [EDX],EAX             ; 0041949f
    MOV EAX,dword ptr [ESP + 0x24]      ; 004194a1
    MOV dword ptr [EDX + 0x4],EAX       ; 004194a5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004194a8
    MOV dword ptr [EDX + 0x8],EAX       ; 004194ac
    MOV EAX,[0x007e1644]                ; 004194af | DAT_007e1644
        ;   Label: LAB_004194af
    PUSH EAX                            ; 004194b4
    LEA EAX,[EBP + 0x158]               ; 004194b5
    PUSH EAX                            ; 004194bb
    LEA ESI,[ESP + 0x40]                ; 004194bc
    LEA EDI,[ESP + 0x64]                ; 004194c0
    CALL FUN_0054dcc0                   ; 004194c4
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x40]                ; 004194c9
    LEA EAX,[ESP + 0x64]                ; 004194cd
    ADD ESP,0x8                         ; 004194d1
    LEA EDX,[EBX + 0x24]                ; 004194d4
    MOVSD ES:EDI,ESI                    ; 004194d7
    MOVSD ES:EDI,ESI                    ; 004194d8
    MOVSD ES:EDI,ESI                    ; 004194d9
    CMP EDX,EAX                         ; 004194da
    JZ 0x004194f2                       ; 004194dc
        ;   XREF to: 004194f2 (CONDITIONAL_JUMP)  ; LAB_004194f2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004194de
    MOV dword ptr [EDX],EAX             ; 004194e2
    MOV EAX,dword ptr [ESP + 0x60]      ; 004194e4
    MOV dword ptr [EDX + 0x4],EAX       ; 004194e8
    MOV EAX,dword ptr [ESP + 0x64]      ; 004194eb
    MOV dword ptr [EDX + 0x8],EAX       ; 004194ef
    MOV EDX,dword ptr [0x007e1648]      ; 004194f2 | DAT_007e1648
        ;   Label: LAB_004194f2
    PUSH EDX                            ; 004194f8
    ADD EBP,0x158                       ; 004194f9
    LEA ESI,[ESP + 0x6c]                ; 004194ff
    PUSH EBP                            ; 00419503
    LEA EDI,[ESP + 0x34]                ; 00419504
    ADD EBX,0x30                        ; 00419508
    CALL FUN_0054dcc0                   ; 0041950b
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x70]                ; 00419510
    ADD ESP,0x8                         ; 00419514
    LEA EAX,[ESP + 0x2c]                ; 00419517
    MOVSD ES:EDI,ESI                    ; 0041951b
    MOVSD ES:EDI,ESI                    ; 0041951c
    MOVSD ES:EDI,ESI                    ; 0041951d
    CMP EBX,EAX                         ; 0041951e
    JZ 0x00419536                       ; 00419520
        ;   XREF to: 00419536 (CONDITIONAL_JUMP)  ; LAB_00419536
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00419522
    MOV dword ptr [EBX],EAX             ; 00419526
    MOV EAX,dword ptr [ESP + 0x30]      ; 00419528
    MOV dword ptr [EBX + 0x4],EAX       ; 0041952c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041952f
    MOV dword ptr [EBX + 0x8],EAX       ; 00419533
    MOV EAX,0x5                         ; 00419536
        ;   Label: LAB_00419536
    POP ESI                             ; 0041953b
    POP EDI                             ; 0041953c
    ADD ESP,0x78                        ; 0041953d
    POP EBP                             ; 00419540
    POP EBX                             ; 00419541
    RET                                 ; 00419542

