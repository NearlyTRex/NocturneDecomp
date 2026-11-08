; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463460(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004516c0 at 00451744
;
; Referenced Globals:
;   undefined4 DAT_005d915c
;   undefined4 DAT_005d9164
;   undefined4 DAT_005d916c
;   undefined4 DAT_005d9174
;   undefined4 DAT_005d917c
;   undefined4 DAT_005febd0
;   undefined4 DAT_00612560
;   undefined4 DAT_01b2ee3c
;   undefined4 DAT_01b2ee40
;   undefined4 DAT_01b2ee44
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00450ee0
;   FUN_0045f700
;   FUN_0045f840
;   FUN_00465060
;   FUN_004837b0
;   FUN_00483850
;   FUN_00483ae0
;   FUN_00483c50
;   FUN_00483d80
;   FUN_00580173
;   FUN_005c03a0
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463460
        ;   Label: FUN_00463460
    PUSH ESI                            ; 00463461
    PUSH EDI                            ; 00463462
    PUSH EBP                            ; 00463463
    MOV EBP,ESP                         ; 00463464
    SUB ESP,0xc8                        ; 00463466
    AND ESP,0xfffffff8                  ; 0046346c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046346f
    ADD EAX,0x4                         ; 00463472
    PUSH EAX                            ; 00463475
    MOV EDX,dword ptr [0x00612560]      ; 00463476 | DAT_00612560
    PUSH EDX                            ; 0046347c | DAT_01bc120c
    CALL FUN_004837b0                   ; 0046347d
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 00463482
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463485
    ADD EAX,0x10                        ; 00463488
    PUSH EAX                            ; 0046348b
    LEA ESI,[ESP + 0x60]                ; 0046348c
    CALL FUN_0045f840                   ; 00463490
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f840()
    ADD ESP,0x4                         ; 00463495
    PUSH 0x0                            ; 00463498
    LEA EAX,[ESP + 0x54]                ; 0046349a
    LEA EDI,[ESP + 0x54]                ; 0046349e
    PUSH EAX                            ; 004634a2
    MOV ECX,dword ptr [0x00612560]      ; 004634a3 | DAT_00612560
    LEA ESI,[ESP + 0x64]                ; 004634a9
    PUSH ECX                            ; 004634ad | DAT_01bc120c
    MOVSD ES:EDI,ESI                    ; 004634ae
    MOVSD ES:EDI,ESI                    ; 004634af
    MOVSD ES:EDI,ESI                    ; 004634b0
    CALL FUN_00483850                   ; 004634b1
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 004634b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004634b9
    FLD float ptr [EAX + 0x38]          ; 004634bc
    FDIVR double ptr [0x005d915c]       ; 004634bf | DAT_005d915c
    FMUL float ptr [EAX + 0x140]        ; 004634c5
    XOR ESI,ESI                         ; 004634cb
    XOR EDI,EDI                         ; 004634cd
    MOV EAX,dword ptr [EAX + 0x140]     ; 004634cf
    FSTP float ptr [ESP]                ; 004634d5
    MOV dword ptr [ESP + 0x40],EAX      ; 004634d8
    MOV dword ptr [ESP + 0xc4],ESI      ; 004634dc
        ;   Label: LAB_004634dc
    FILD dword ptr [ESP + 0xc4]         ; 004634e3
    FMUL double ptr [0x005d9164]        ; 004634ea | DAT_005d9164
    FMUL double ptr [0x005d916c]        ; 004634f0 | DAT_005d916c
    FLD ST0                             ; 004634f6
    FCOS                                ; 004634f8
    FXCH                                ; 004634fa
    FSIN                                ; 004634fc
    FLD float ptr [ESP]                 ; 004634fe
    FXCH ST2                            ; 00463501
    FMUL ST2                            ; 00463503
    FXCH                                ; 00463505
    FMULP ST2                           ; 00463507
    LEA EBX,[ESP + 0x8c]                ; 00463509
    MOV EDX,dword ptr [0x00612560]      ; 00463510 | DAT_00612560
    LEA EAX,[ESP + 0x38]                ; 00463516
    FSTP float ptr [ESP + 0x38]         ; 0046351a
    FSTP float ptr [ESP + 0x3c]         ; 0046351e
    FLD float ptr [EAX]                 ; 00463522
    FMUL float ptr [0x005febd0]         ; 00463524 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 0046352a
    FLD float ptr [EAX + 0x4]           ; 0046352c
    FMUL float ptr [0x005febd0]         ; 0046352f | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00463535
    FLD float ptr [EAX + 0x8]           ; 00463538
    FMUL float ptr [0x005febd0]         ; 0046353b | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00463541
    LEA EAX,[ESP + 0x8c]                ; 00463544
    PUSH EAX                            ; 0046354b
    MOV EAX,dword ptr [EDX]             ; 0046354c | DAT_01bc120c
    ADD EAX,EDI                         ; 0046354e
    PUSH EAX                            ; 00463550
    CALL FUN_00580173                   ; 00463551
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EDX,dword ptr [0x00612560]      ; 00463556 | DAT_00612560
    ADD EDI,0x30                        ; 0046355c
    MOV EAX,dword ptr [EDX]             ; 0046355f | DAT_01bc120c
    INC ESI                             ; 00463561
    ADD ESP,0x8                         ; 00463562
    MOV dword ptr [EDI + EAX*0x1 + -0x10],0x0 ; 00463565
    CMP ESI,0x10                        ; 0046356d
    JL 0x004634dc                       ; 00463570
        ;   XREF to: 004634dc (CONDITIONAL_JUMP)  ; LAB_004634dc
    LEA EBX,[ESP + 0x2c]                ; 00463576
    MOV EAX,0x1b2ee3c                   ; 0046357a
    FLD float ptr [EAX]                 ; 0046357f | DAT_01b2ee3c
    FMUL float ptr [0x005febd0]         ; 00463581 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00463587
    FLD float ptr [EAX + 0x4]           ; 00463589 | DAT_01b2ee40
    FMUL float ptr [0x005febd0]         ; 0046358c | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00463592
    FLD float ptr [EAX + 0x8]           ; 00463595 | DAT_01b2ee44
    FMUL float ptr [0x005febd0]         ; 00463598 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 0046359e
    LEA EAX,[ESP + 0x2c]                ; 004635a1
    PUSH EAX                            ; 004635a5
    MOV EAX,dword ptr [EDX]             ; 004635a6 | DAT_01bc120c
    ADD EAX,0x300                       ; 004635a8
    PUSH EAX                            ; 004635ad
    CALL FUN_00580173                   ; 004635ae
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 004635b3
    MOV EAX,[0x00612560]                ; 004635b6 | DAT_00612560
    PUSH 0x1                            ; 004635bb
    MOV EDX,dword ptr [EAX]             ; 004635bd | DAT_01bc120c
    PUSH EAX                            ; 004635bf | DAT_01bc120c
    MOV dword ptr [EDX + 0x320],0xffff  ; 004635c0
    CALL FUN_00483d80                   ; 004635ca
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 004635cf
    MOV ESI,dword ptr [0x00612560]      ; 004635d2 | DAT_00612560
    PUSH ESI                            ; 004635d8 | DAT_01bc120c
    LEA ESI,[ESP + 0x84]                ; 004635d9
    LEA EDI,[ESP + 0x6c]                ; 004635e0
    CALL FUN_00483ae0                   ; 004635e4
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483ae0()
    LEA ESI,[ESP + 0x84]                ; 004635e9
    ADD ESP,0x4                         ; 004635f0
    XOR EBX,EBX                         ; 004635f3
    MOVSD ES:EDI,ESI                    ; 004635f5
    MOVSD ES:EDI,ESI                    ; 004635f6
    MOVSD ES:EDI,ESI                    ; 004635f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004635f8
    FLD float ptr [ESP + 0x68]          ; 004635fb
    FLD float ptr [ESP + 0x6c]          ; 004635ff
    FLD float ptr [ESP + 0x70]          ; 00463603
    LEA EDI,[ESP + 0x74]                ; 00463607
    LEA ESI,[ESP + 0xa4]                ; 0046360b
    FXCH ST2                            ; 00463612
    FSUB float ptr [EAX + 0x4]          ; 00463614
    FXCH                                ; 00463617
    FSUB float ptr [EAX + 0x8]          ; 00463619
    FXCH ST2                            ; 0046361c
    FSUB float ptr [EAX + 0xc]          ; 0046361e
    FXCH                                ; 00463621
    FSTP float ptr [ESP + 0xa4]         ; 00463623
    LEA EAX,[ESP + 0x74]                ; 0046362a
    FXCH                                ; 0046362e
    FSTP float ptr [ESP + 0xa8]         ; 00463630
    PUSH EAX                            ; 00463637
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463638
    FSTP float ptr [ESP + 0xb0]         ; 0046363b
    ADD EAX,0x10                        ; 00463642
    MOVSD ES:EDI,ESI                    ; 00463645
    MOVSD ES:EDI,ESI                    ; 00463646
    MOVSD ES:EDI,ESI                    ; 00463647
    PUSH EAX                            ; 00463648
    LEA ESI,[ESP + 0x4c]                ; 00463649
    LEA EDI,[ESP + 0xa0]                ; 0046364d
    CALL FUN_0045f700                   ; 00463654
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f700()
    LEA ESI,[ESP + 0x4c]                ; 00463659
    LEA EDX,[ESP + 0xa0]                ; 0046365d
    ADD ESP,0x8                         ; 00463664
    LEA EAX,[ESP + 0x74]                ; 00463667
    MOVSD ES:EDI,ESI                    ; 0046366b
    MOVSD ES:EDI,ESI                    ; 0046366c
    MOVSD ES:EDI,ESI                    ; 0046366d
    CMP EAX,EDX                         ; 0046366e
    JNZ 0x004637e7                      ; 00463670
        ;   XREF to: 004637e7 (CONDITIONAL_JUMP)  ; LAB_004637e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463676
        ;   Label: LAB_00463676
    FLD double ptr [0x005d9174]         ; 00463679 | DAT_005d9174
    FLD float ptr [EAX + 0x38]          ; 0046367f
    FMUL ST1                            ; 00463682
    FMUL float ptr [ESP + 0x74]         ; 00463684
    FSTP float ptr [ESP + 0x74]         ; 00463688
    FMUL float ptr [EAX + 0x38]         ; 0046368c
    FLD float ptr [ESP + 0x78]          ; 0046368f
    FXCH                                ; 00463693
    FMUL ST1                            ; 00463695
    FLD float ptr [ESP + 0x74]          ; 00463697
    FXCH                                ; 0046369b
    FSTP ST2                            ; 0046369d
    FXCH                                ; 0046369f
    FSTP float ptr [ESP + 0x78]         ; 004636a1
    FCOMP float ptr [ESP + 0x7c]        ; 004636a5
    FNSTSW AX                           ; 004636a9
    SAHF                                ; 004636ab
    JNC 0x004636ff                      ; 004636ac
        ;   XREF to: 004636ff (CONDITIONAL_JUMP)  ; LAB_004636ff
    FLD float ptr [ESP + 0x74]          ; 004636ae
    FLD float ptr [ESP + 0x7c]          ; 004636b2
    FCHS                                ; 004636b6
    FSTP float ptr [ESP + 0xc0]         ; 004636b8
    FCOMP float ptr [ESP + 0xc0]        ; 004636bf
    FNSTSW AX                           ; 004636c6
    SAHF                                ; 004636c8
    JBE 0x004636ff                      ; 004636c9
        ;   XREF to: 004636ff (CONDITIONAL_JUMP)  ; LAB_004636ff
    FLD float ptr [ESP + 0x78]          ; 004636cb
    FCOMP float ptr [ESP + 0x7c]        ; 004636cf
    FNSTSW AX                           ; 004636d3
    SAHF                                ; 004636d5
    JNC 0x004636ff                      ; 004636d6
        ;   XREF to: 004636ff (CONDITIONAL_JUMP)  ; LAB_004636ff
    FLD float ptr [ESP + 0x78]          ; 004636d8
    FCOMP float ptr [ESP + 0xc0]        ; 004636dc
    FNSTSW AX                           ; 004636e3
    SAHF                                ; 004636e5
    JBE 0x004636ff                      ; 004636e6
        ;   XREF to: 004636ff (CONDITIONAL_JUMP)  ; LAB_004636ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 004636e8
    FLD float ptr [ESP + 0x7c]          ; 004636eb
    FCOMP float ptr [EAX + 0x140]       ; 004636ef
    FNSTSW AX                           ; 004636f5
    SAHF                                ; 004636f7
    JNC 0x004636ff                      ; 004636f8
        ;   XREF to: 004636ff (CONDITIONAL_JUMP)  ; LAB_004636ff
    MOV EBX,0x1                         ; 004636fa
    XOR EAX,EAX                         ; 004636ff
        ;   Label: LAB_004636ff
    MOV EDI,0x3                         ; 00463701
    MOV dword ptr [ESP + 0x18],EAX      ; 00463706
    MOV dword ptr [ESP + 0x14],EAX      ; 0046370a
    MOV dword ptr [ESP + 0x10],EAX      ; 0046370e
    MOV dword ptr [ESP + 0xc],EAX       ; 00463712
    MOV dword ptr [ESP + 0x8],EDI       ; 00463716
    TEST EBX,EBX                        ; 0046371a
    JNZ 0x00463815                      ; 0046371c
        ;   XREF to: 00463815 (CONDITIONAL_JUMP)  ; LAB_00463815
    MOV dword ptr [ESP + 0x24],0x10     ; 00463722
    MOV dword ptr [ESP + 0x20],EBX      ; 0046372a
        ;   Label: LAB_0046372a
    CMP EBX,0xf                         ; 0046372e
    JNZ 0x0046380d                      ; 00463731
        ;   XREF to: 0046380d (CONDITIONAL_JUMP)  ; LAB_0046380d
    XOR EAX,EAX                         ; 00463737
    MOV dword ptr [ESP + 0x1c],EAX      ; 00463739
        ;   Label: LAB_00463739
    PUSH 0x450f20                       ; 0046373d | LAB_00450f20
    LEA EAX,[ESP + 0x8]                 ; 00463742
    PUSH EAX                            ; 00463746
    MOV EDX,dword ptr [0x00612560]      ; 00463747 | DAT_00612560
    PUSH EDX                            ; 0046374d | DAT_01bc120c
    INC EBX                             ; 0046374e
    CALL FUN_00483c50                   ; 0046374f
        ;   XREF to: 00483c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00483c50()
    ADD ESP,0xc                         ; 00463754
    CMP EBX,0x10                        ; 00463757
    JL 0x0046372a                       ; 0046375a
        ;   XREF to: 0046372a (CONDITIONAL_JUMP)  ; LAB_0046372a
    MOV ESI,0xffff                      ; 0046375c
        ;   Label: LAB_0046375c
    XOR ECX,ECX                         ; 00463761
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463763
    MOV dword ptr [ESP + 0xc],ECX       ; 00463766
    MOV dword ptr [ESP + 0x10],ECX      ; 0046376a
    MOV dword ptr [ESP + 0x14],ESI      ; 0046376e
    FLD float ptr [EAX + 0x140]         ; 00463772
    FMUL double ptr [0x005d917c]        ; 00463778 | DAT_005d917c
    XOR EBX,EBX                         ; 0046377e
    CALL FUN_005c03a0                   ; 00463780
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 00463785
    PUSH 0x450f20                       ; 00463789 | LAB_00450f20
        ;   Label: LAB_00463789
    LEA EAX,[ESP + 0x8]                 ; 0046378e
    MOV dword ptr [ESP + 0x24],EBX      ; 00463792
    XOR EDI,EDI                         ; 00463796
    PUSH EAX                            ; 00463798
    MOV EAX,[0x00612560]                ; 00463799 | DAT_00612560
    INC EBX                             ; 0046379e
    PUSH EAX                            ; 0046379f | DAT_01bc120c
    MOV dword ptr [ESP + 0x28],EDI      ; 004637a0
    MOV dword ptr [ESP + 0x30],EBX      ; 004637a4
    CALL FUN_00483c50                   ; 004637a8
        ;   XREF to: 00483c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00483c50()
    ADD ESP,0xc                         ; 004637ad
    CMP EBX,0xe                         ; 004637b0
    JL 0x00463789                       ; 004637b3
        ;   XREF to: 00463789 (CONDITIONAL_JUMP)  ; LAB_00463789
    MOV EDX,dword ptr [0x00612560]      ; 004637b5 | DAT_00612560
    PUSH EDX                            ; 004637bb | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004637bc
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004637c1
    PUSH EDI                            ; 004637c4
    MOV ECX,dword ptr [0x00612560]      ; 004637c5 | DAT_00612560
    PUSH ECX                            ; 004637cb | DAT_01bc120c
    CALL FUN_00483d80                   ; 004637cc
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 004637d1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004637d4
    PUSH EBX                            ; 004637d7
    CALL FUN_00465060                   ; 004637d8
        ;   XREF to: 00465060 (UNCONDITIONAL_CALL)  ; undefined FUN_00465060()
    ADD ESP,0x4                         ; 004637dd
    MOV ESP,EBP                         ; 004637e0
    POP EBP                             ; 004637e2
    POP EDI                             ; 004637e3
    POP ESI                             ; 004637e4
    POP EBX                             ; 004637e5
    RET                                 ; 004637e6
    MOV EAX,dword ptr [ESP + 0x98]      ; 004637e7
        ;   Label: LAB_004637e7
    MOV dword ptr [ESP + 0x74],EAX      ; 004637ee
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004637f2
    MOV dword ptr [ESP + 0x78],EAX      ; 004637f9
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004637fd
    MOV dword ptr [ESP + 0x7c],EAX      ; 00463804
    JMP 0x00463676                      ; 00463808
        ;   XREF to: 00463676 (UNCONDITIONAL_JUMP)  ; LAB_00463676
    LEA EAX,[EBX + 0x1]                 ; 0046380d
        ;   Label: LAB_0046380d
    JMP 0x00463739                      ; 00463810
        ;   XREF to: 00463739 (UNCONDITIONAL_JUMP)  ; LAB_00463739
    CALL FUN_00450ee0                   ; 00463815
        ;   XREF to: 00450ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00450ee0()
        ;   Label: LAB_00463815
    JMP 0x0046375c                      ; 0046381a
        ;   XREF to: 0046375c (UNCONDITIONAL_JUMP)  ; LAB_0046375c

