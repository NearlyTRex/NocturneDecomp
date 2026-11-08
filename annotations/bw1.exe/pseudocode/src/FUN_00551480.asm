; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551480(int param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00550580 at 0055088c
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061d95c
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccf5d4
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01e82168
;   undefined4 DAT_02026358
;
; Called Functions:
;   FUN_00483de0
;   FUN_00483e20
;   FUN_00551c30
;   FUN_00555460
;   FUN_00555590
;   FUN_00555770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551480
        ;   Label: FUN_00551480
    PUSH ESI                            ; 00551481
    PUSH EDI                            ; 00551482
    PUSH EBP                            ; 00551483
    SUB ESP,0x50                        ; 00551484
    MOV EBP,dword ptr [ESP + 0x64]      ; 00551487
    MOV EAX,[0x0061d95c]                ; 0055148b | DAT_0061d95c
    XOR EDX,EDX                         ; 00551490
    MOV ECX,dword ptr [EAX + 0x244]     ; 00551492 | DAT_01ccf5d4
    MOV dword ptr [0x02026358],EDX      ; 00551498 | DAT_02026358
    TEST ECX,ECX                        ; 0055149e
    JNZ 0x005514cb                      ; 005514a0
        ;   XREF to: 005514cb (CONDITIONAL_JUMP)  ; LAB_005514cb
    MOV EAX,[0x01d06ab4]                ; 005514a2 | DAT_01d06ab4
    SHL EAX,0x2                         ; 005514a7
    MOV EBX,dword ptr [EAX + 0x1d06aa4] ; 005514aa
    TEST EBX,EBX                        ; 005514b0
    JZ 0x005514cb                       ; 005514b2
        ;   XREF to: 005514cb (CONDITIONAL_JUMP)  ; LAB_005514cb
    MOV ESI,dword ptr [EBX + 0x1ff60]   ; 005514b4
    MOV EAX,EBX                         ; 005514ba
    TEST ESI,ESI                        ; 005514bc
    JZ 0x005514cb                       ; 005514be
        ;   XREF to: 005514cb (CONDITIONAL_JUMP)  ; LAB_005514cb
    MOV EAX,dword ptr [EBX + 0x1ff68]   ; 005514c0
    MOV [0x02026358],EAX                ; 005514c6 | DAT_02026358
    MOV EAX,dword ptr [EBP + 0x15f6fc]  ; 005514cb
        ;   Label: LAB_005514cb
    DEC EAX                             ; 005514d1
    MOV dword ptr [ESP + 0x4c],EAX      ; 005514d2
    TEST EAX,EAX                        ; 005514d6
    JL 0x00551515                       ; 005514d8
        ;   XREF to: 00551515 (CONDITIONAL_JUMP)  ; LAB_00551515
    SHL EAX,0x2                         ; 005514da
    ADD EAX,EBP                         ; 005514dd
    MOV dword ptr [ESP + 0x48],EAX      ; 005514df
    MOV EBX,dword ptr [ESP + 0x48]      ; 005514e3
        ;   Label: LAB_005514e3
    MOV EBX,dword ptr [EBX + 0x15f700]  ; 005514e7
    CMP dword ptr [EBX + 0xf8],0x0      ; 005514ed
    JNZ 0x0055151d                      ; 005514f4
        ;   XREF to: 0055151d (CONDITIONAL_JUMP)  ; LAB_0055151d
    AND byte ptr [EBX + 0x144],0xfb     ; 005514f6
    MOV EAX,dword ptr [ESP + 0x48]      ; 005514fd
        ;   Label: LAB_005514fd
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00551501
    SUB EAX,0x4                         ; 00551505
    DEC EDX                             ; 00551508
    MOV dword ptr [ESP + 0x48],EAX      ; 00551509
    MOV dword ptr [ESP + 0x4c],EDX      ; 0055150d
    TEST EDX,EDX                        ; 00551511
    JGE 0x005514e3                      ; 00551513
        ;   XREF to: 005514e3 (CONDITIONAL_JUMP)  ; LAB_005514e3
    ADD ESP,0x50                        ; 00551515
        ;   Label: LAB_00551515
    POP EBP                             ; 00551518
    POP EDI                             ; 00551519
    POP ESI                             ; 0055151a
    POP EBX                             ; 0055151b
    RET                                 ; 0055151c
    PUSH EBX                            ; 0055151d
        ;   Label: LAB_0055151d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055151e
    LEA ESI,[ESP + 0x4]                 ; 00551524
    LEA EDI,[ESP + 0x1c]                ; 00551528
    CALL dword ptr [EAX + 0x1c]         ; 0055152c
    MOV ECX,0x6                         ; 0055152f
    LEA ESI,[ESP + 0x4]                 ; 00551534
    ADD ESP,0x4                         ; 00551538
    MOVSD.REP ES:EDI,ESI                ; 0055153b
    LEA EDX,[ESP + 0x30]                ; 0055153d
    LEA ECX,[ESP + 0x18]                ; 00551541
    CMP EDX,ECX                         ; 00551545
    JZ 0x00551561                       ; 00551547
        ;   XREF to: 00551561 (CONDITIONAL_JUMP)  ; LAB_00551561
    MOV EAX,dword ptr [ESP + 0x18]      ; 00551549
    MOV dword ptr [ESP + 0x30],EAX      ; 0055154d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00551551
    MOV dword ptr [ESP + 0x34],EAX      ; 00551555
    MOV EAX,dword ptr [ESP + 0x20]      ; 00551559
    MOV dword ptr [ESP + 0x38],EAX      ; 0055155d
    LEA EAX,[ESP + 0x3c]                ; 00551561
        ;   Label: LAB_00551561
    LEA EDX,[ECX + 0xc]                 ; 00551565
    CMP EAX,EDX                         ; 00551568
    JZ 0x00551580                       ; 0055156a
        ;   XREF to: 00551580 (CONDITIONAL_JUMP)  ; LAB_00551580
    MOV EAX,dword ptr [EDX]             ; 0055156c
    MOV dword ptr [ESP + 0x3c],EAX      ; 0055156e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00551572
    MOV dword ptr [ESP + 0x40],EAX      ; 00551575
    MOV EAX,dword ptr [EDX + 0x8]       ; 00551579
    MOV dword ptr [ESP + 0x44],EAX      ; 0055157c
    LEA EAX,[EBX + 0x3c]                ; 00551580
        ;   Label: LAB_00551580
    PUSH EAX                            ; 00551583
    LEA EAX,[ESP + 0x40]                ; 00551584
    PUSH EAX                            ; 00551588
    LEA EAX,[ESP + 0x38]                ; 00551589
    PUSH EAX                            ; 0055158d
    LEA EAX,[EBX + 0x30]                ; 0055158e
    PUSH EAX                            ; 00551591
    LEA EAX,[EBX + 0x20]                ; 00551592
    PUSH EAX                            ; 00551595
    PUSH EBP                            ; 00551596
    CALL FUN_00551c30                   ; 00551597
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    MOV EAX,[0x02026358]                ; 0055159c | DAT_02026358
    ADD ESP,0x18                        ; 005515a1
    MOV EDI,dword ptr [EBX + 0x108]     ; 005515a4
    MOV ESI,dword ptr [EBX + 0x10c]     ; 005515aa
    MOV ECX,dword ptr [EBX + 0x110]     ; 005515b0
    CMP EBX,EAX                         ; 005515b6
    JNZ 0x005515e4                      ; 005515b8
        ;   XREF to: 005515e4 (CONDITIONAL_JUMP)  ; LAB_005515e4
    LEA EDX,[EDI + EDI*0x2]             ; 005515ba
    MOV EAX,EDX                         ; 005515bd
    SAR EDX,0x1f                        ; 005515bf
    SUB EAX,EDX                         ; 005515c2
    SAR EAX,0x1                         ; 005515c4
    LEA EDX,[ESI + ESI*0x2]             ; 005515c6
    MOV EDI,EAX                         ; 005515c9
    MOV EAX,EDX                         ; 005515cb
    SAR EDX,0x1f                        ; 005515cd
    SUB EAX,EDX                         ; 005515d0
    SAR EAX,0x1                         ; 005515d2
    LEA EDX,[ECX + ECX*0x2]             ; 005515d4
    MOV ESI,EAX                         ; 005515d7
    MOV EAX,EDX                         ; 005515d9
    SAR EDX,0x1f                        ; 005515db
    SUB EAX,EDX                         ; 005515de
    SAR EAX,0x1                         ; 005515e0
    MOV ECX,EAX                         ; 005515e2
    PUSH ECX                            ; 005515e4
        ;   Label: LAB_005515e4
    PUSH ESI                            ; 005515e5
    PUSH EDI                            ; 005515e6
    MOV EDX,dword ptr [0x00622c18]      ; 005515e7 | DAT_00622c18
    PUSH EDX                            ; 005515ed | DAT_01e82168
    CALL FUN_00555770                   ; 005515ee
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 005515f3
    PUSH 0xffff                         ; 005515f6
    MOV ECX,dword ptr [0x00612560]      ; 005515fb | DAT_00612560
    PUSH ECX                            ; 00551601 | DAT_01bc120c
    CALL FUN_00483de0                   ; 00551602
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 00551607
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055160a
    PUSH EBX                            ; 00551610
    CALL dword ptr [EAX + 0x10]         ; 00551611
    ADD ESP,0x4                         ; 00551614
    TEST EAX,EAX                        ; 00551617
    JZ 0x005516a8                       ; 00551619
        ;   XREF to: 005516a8 (CONDITIONAL_JUMP)  ; LAB_005516a8
    OR byte ptr [EBX + 0x144],0x4       ; 0055161f
    PUSH 0x1                            ; 00551626
        ;   Label: LAB_00551626
    MOV ESI,dword ptr [0x00612560]      ; 00551628 | DAT_00612560
    PUSH ESI                            ; 0055162e | DAT_01bc120c
    CALL FUN_00483e20                   ; 0055162f
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    ADD ESP,0x8                         ; 00551634
    MOV EDI,dword ptr [EBP + 0x15acc8]  ; 00551637
    XOR ESI,ESI                         ; 0055163d
    TEST EDI,EDI                        ; 0055163f
    JLE 0x0055168b                      ; 00551641
        ;   XREF to: 0055168b (CONDITIONAL_JUMP)  ; LAB_0055168b
    PUSH 0x0                            ; 00551643
        ;   Label: LAB_00551643
    PUSH ESI                            ; 00551645
    PUSH EBP                            ; 00551646
    CALL FUN_00555460                   ; 00551647
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; undefined FUN_00555460()
    ADD ESP,0xc                         ; 0055164c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055164f
    PUSH EBX                            ; 00551655
    CALL dword ptr [EAX + 0x10]         ; 00551656
    ADD ESP,0x4                         ; 00551659
    TEST EAX,EAX                        ; 0055165c
    JZ 0x00551667                       ; 0055165e
        ;   XREF to: 00551667 (CONDITIONAL_JUMP)  ; LAB_00551667
    OR byte ptr [EBX + 0x144],0x4       ; 00551660
    PUSH 0x1                            ; 00551667
        ;   Label: LAB_00551667
    MOV EAX,[0x00612560]                ; 00551669 | DAT_00612560
    PUSH EAX                            ; 0055166e | DAT_01bc120c
    CALL FUN_00483e20                   ; 0055166f
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    ADD ESP,0x8                         ; 00551674
    PUSH EBP                            ; 00551677
    INC ESI                             ; 00551678
    CALL FUN_00555590                   ; 00551679
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; undefined FUN_00555590()
    MOV EDX,dword ptr [EBP + 0x15acc8]  ; 0055167e
    ADD ESP,0x4                         ; 00551684
    CMP ESI,EDX                         ; 00551687
    JL 0x00551643                       ; 00551689
        ;   XREF to: 00551643 (CONDITIONAL_JUMP)  ; LAB_00551643
    PUSH 0x10000                        ; 0055168b
        ;   Label: LAB_0055168b
    PUSH 0x10000                        ; 00551690
    PUSH 0x10000                        ; 00551695
    PUSH EBP                            ; 0055169a
    CALL FUN_00555770                   ; 0055169b
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 005516a0
    JMP 0x005514fd                      ; 005516a3
        ;   XREF to: 005514fd (UNCONDITIONAL_JUMP)  ; LAB_005514fd
    AND byte ptr [EBX + 0x144],0xfb     ; 005516a8
        ;   Label: LAB_005516a8
    JMP 0x00551626                      ; 005516af
        ;   XREF to: 00551626 (UNCONDITIONAL_JUMP)  ; LAB_00551626

