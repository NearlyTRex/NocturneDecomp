; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af410(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004ad640 at 004ad700
;
; Referenced Globals:
;   undefined1* switchdataD_004af3b0 = 004af456
;   TerminatedCString s_kick1_wav_005d6ffb
;   TerminatedCString s_hit_gh_4_7_wav_005d7005
;   TerminatedCString s_gb_fall1_wav_005d7015
;   undefined4 DAT_005d7023
;   undefined4 DAT_005d702b
;   undefined4 DAT_006167e0
;   undefined4 DAT_007bcc84
;   undefined4 DAT_01c264e0
;   undefined4 DAT_01cb0694
;   undefined4 DAT_01cb0698
;   undefined4 DAT_01cb06a8
;
; Called Functions:
;   FUN_00408d70
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_0040cf60
;   FUN_004222d0
;   FUN_0042aa00
;   FUN_004b0a40
;   FUN_004c9850
;   FUN_004cf230
;   FUN_004cff50
;   FUN_004cff90
;   FUN_005030c0
;   FUN_00503620
;   FUN_005038a0
;   FUN_005469a0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af410
        ;   Label: FUN_004af410
    PUSH ESI                            ; 004af411
    PUSH EDI                            ; 004af412
    PUSH EBP                            ; 004af413
    MOV EBP,ESP                         ; 004af414
    SUB ESP,0xe4                        ; 004af416
    AND ESP,0xfffffff8                  ; 004af41c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004af41f
    LEA EAX,[EBX + 0x2b4]               ; 004af422
    MOV dword ptr [ESP + 0xdc],EAX      ; 004af428
    LEA EAX,[EBP + 0x18]                ; 004af42f
        ;   Label: LAB_004af42f
    PUSH EAX                            ; 004af432
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004af433
    PUSH EDX                            ; 004af43a
    CALL FUN_005030c0                   ; 004af43b
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    MOV ESI,EAX                         ; 004af440
    DEC EAX                             ; 004af442
    ADD ESP,0x8                         ; 004af443
    CMP EAX,0x15                        ; 004af446
    JA 0x004af8e3                       ; 004af449
        ;   XREF to: 004af8e3 (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4af3b0]  ; 004af44f | caseD_7 | caseD_2 | caseD_3
        ;   Label: switchD
    CMP ESI,0x7                         ; 004af456
        ;   Label: caseD_1
    JNZ 0x004af59b                      ; 004af459
        ;   XREF to: 004af59b (CONDITIONAL_JUMP)  ; LAB_004af59b
    MOV EAX,[0x01cb0698]                ; 004af45f | DAT_01cb0698
    PUSH EAX                            ; 004af464
        ;   Label: LAB_004af464
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004af465
    PUSH ECX                            ; 004af46c
    LEA ESI,[ESP + 0x70]                ; 004af46d
    LEA EDI,[ESP + 0xb8]                ; 004af471
    CALL FUN_005469a0                   ; 004af478
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    LEA ESI,[ESP + 0x70]                ; 004af47d
    ADD ESP,0x8                         ; 004af481
    MOVSD ES:EDI,ESI                    ; 004af484
    MOVSD ES:EDI,ESI                    ; 004af485
    MOVSD ES:EDI,ESI                    ; 004af486
    MOV ESI,dword ptr [EBX + 0x25614]   ; 004af487
    TEST ESI,ESI                        ; 004af48d
    JZ 0x004af5a5                       ; 004af48f
        ;   XREF to: 004af5a5 (CONDITIONAL_JUMP)  ; LAB_004af5a5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004af495
    MOV dword ptr [ESP + 0xe0],EAX      ; 004af49b
    MOV EAX,ESI                         ; 004af4a2
    PUSH 0x3f800000                     ; 004af4a4
    PUSH EAX                            ; 004af4a9
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 004af4aa
    CALL dword ptr [ESI + 0x4c]         ; 004af4b0
    ADD ESP,0x4                         ; 004af4b3
    PUSH EAX                            ; 004af4b6
    LEA EAX,[ESP + 0xb8]                ; 004af4b7
    PUSH EAX                            ; 004af4be
    PUSH EBX                            ; 004af4bf
    LEA ESI,[ESP + 0x84]                ; 004af4c0
    CALL FUN_00408d70                   ; 004af4c7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004af4cc
    LEA EAX,[ESP + 0xa0]                ; 004af4cf
    LEA EDI,[ESP + 0xa0]                ; 004af4d6
    PUSH EAX                            ; 004af4dd
    LEA ESI,[ESP + 0x80]                ; 004af4de
    MOV EAX,dword ptr [ESP + 0xec]      ; 004af4e5
    PUSH EBX                            ; 004af4ec
    MOVSD ES:EDI,ESI                    ; 004af4ed
    MOVSD ES:EDI,ESI                    ; 004af4ee
    MOVSD ES:EDI,ESI                    ; 004af4ef
    CALL dword ptr [EAX + 0x30]         ; 004af4f0
    ADD ESP,0x10                        ; 004af4f3
    FLD float ptr [EBP + 0x18]          ; 004af4f6
        ;   Label: caseD_12
    FLDZ                                ; 004af4f9
    FCOMPP                              ; 004af4fb
    FNSTSW AX                           ; 004af4fd
    SAHF                                ; 004af4ff
    JC 0x004af42f                       ; 004af500
        ;   XREF to: 004af42f (CONDITIONAL_JUMP)  ; LAB_004af42f
    MOV ESP,EBP                         ; 004af506
    POP EBP                             ; 004af508
    POP EDI                             ; 004af509
    POP ESI                             ; 004af50a
    POP EBX                             ; 004af50b
    RET                                 ; 004af50c
    MOV ESI,dword ptr [0x007bcc84]      ; 004af50d | DAT_007bcc84
        ;   Label: caseD_2
    PUSH ESI                            ; 004af513
    MOV EDI,dword ptr [EBX + 0x25608]   ; 004af514
    PUSH EDI                            ; 004af51a
    CALL FUN_0040c8f0                   ; 004af51b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004af520
    TEST EAX,EAX                        ; 004af523
    JZ 0x004af53a                       ; 004af525
        ;   XREF to: 004af53a (CONDITIONAL_JUMP)  ; caseD_14
    CMP dword ptr [EAX + 0x7d4],0x1     ; 004af527
    JNZ 0x004af547                      ; 004af52e
        ;   XREF to: 004af547 (CONDITIONAL_JUMP)  ; LAB_004af547
    MOV dword ptr [EBX + 0x25654],0x3ea0d97c ; 004af530
    PUSH 0x0                            ; 004af53a
        ;   Label: caseD_14
    PUSH EBX                            ; 004af53c
    CALL FUN_004cff50                   ; 004af53d
        ;   XREF to: 004cff50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cff50()
    ADD ESP,0x8                         ; 004af542
    JMP 0x004af4f6                      ; 004af545
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV dword ptr [EBX + 0x25654],0xbf060a92 ; 004af547
        ;   Label: LAB_004af547
    PUSH 0x0                            ; 004af551
    PUSH EBX                            ; 004af553
    CALL FUN_004cff50                   ; 004af554
        ;   XREF to: 004cff50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cff50()
    ADD ESP,0x8                         ; 004af559
    JMP 0x004af4f6                      ; 004af55c
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 004af55e
        ;   Label: caseD_3
    PUSH 0x0                            ; 004af560
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004af562
    PUSH EBX                            ; 004af568
    CALL dword ptr [EAX + 0x130]        ; 004af569
    ADD ESP,0xc                         ; 004af56f
    PUSH 0x1                            ; 004af572
    PUSH 0x0                            ; 004af574
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004af576
    PUSH ECX                            ; 004af57d
    CALL FUN_00503620                   ; 004af57e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004af583
    JMP 0x004af4f6                      ; 004af586
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 004af58b
        ;   Label: caseD_15
    PUSH EBX                            ; 004af58d
    CALL FUN_004cff90                   ; 004af58e
        ;   XREF to: 004cff90 (UNCONDITIONAL_CALL)  ; undefined FUN_004cff90()
    ADD ESP,0x8                         ; 004af593
    JMP 0x004af4f6                      ; 004af596
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,[0x01cb0694]                ; 004af59b | DAT_01cb0694
        ;   Label: LAB_004af59b
    JMP 0x004af464                      ; 004af5a0
        ;   XREF to: 004af464 (UNCONDITIONAL_JUMP)  ; LAB_004af464
    CMP dword ptr [EBX + 0x2570],0x0    ; 004af5a5
        ;   Label: LAB_004af5a5
    JZ 0x004af4f6                       ; 004af5ac
        ;   XREF to: 004af4f6 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x2                            ; 004af5b2
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004af5b4
    PUSH EAX                            ; 004af5bb
    CALL FUN_005038a0                   ; 004af5bc
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0xe8],EAX      ; 004af5c1
    FLD float ptr [ESP + 0xe8]          ; 004af5c8
    ADD ESP,0x8                         ; 004af5cf
    FCOMP double ptr [0x005d702b]       ; 004af5d2 | DAT_005d702b
    FNSTSW AX                           ; 004af5d8
    SAHF                                ; 004af5da
    JA 0x004af627                       ; 004af5db
        ;   XREF to: 004af627 (CONDITIONAL_JUMP)  ; LAB_004af627
    PUSH 0x1                            ; 004af5dd
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004af5df
    PUSH EDX                            ; 004af5e6
    CALL FUN_005038a0                   ; 004af5e7
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0xe8],EAX      ; 004af5ec
    FLD float ptr [ESP + 0xe8]          ; 004af5f3
    ADD ESP,0x8                         ; 004af5fa
    FCOMP double ptr [0x005d702b]       ; 004af5fd | DAT_005d702b
    FNSTSW AX                           ; 004af603
    SAHF                                ; 004af605
    JBE 0x004af646                      ; 004af606
        ;   XREF to: 004af646 (CONDITIONAL_JUMP)  ; LAB_004af646
    LEA EAX,[ESP + 0xb0]                ; 004af608
    PUSH 0x3f800000                     ; 004af60f
    PUSH EAX                            ; 004af614
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004af615
    PUSH EBX                            ; 004af61b
    CALL dword ptr [ESI + 0x2c]         ; 004af61c
    ADD ESP,0xc                         ; 004af61f
    JMP 0x004af4f6                      ; 004af622
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA ESI,[ESP + 0xb0]                ; 004af627
        ;   Label: LAB_004af627
    PUSH 0x3fd9999a                     ; 004af62e
    PUSH ESI                            ; 004af633
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004af634
    PUSH EBX                            ; 004af63a
    CALL dword ptr [EAX + 0x2c]         ; 004af63b
    ADD ESP,0xc                         ; 004af63e
    JMP 0x004af4f6                      ; 004af641
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x3                            ; 004af646
        ;   Label: LAB_004af646
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004af648
    PUSH ECX                            ; 004af64f
    CALL FUN_005038a0                   ; 004af650
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0xe8],EAX      ; 004af655
    FLD float ptr [ESP + 0xe8]          ; 004af65c
    ADD ESP,0x8                         ; 004af663
    FCOMP double ptr [0x005d702b]       ; 004af666 | DAT_005d702b
    FNSTSW AX                           ; 004af66c
    SAHF                                ; 004af66e
    JBE 0x004af4f6                      ; 004af66f
        ;   XREF to: 004af4f6 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[ESP + 0xb0]                ; 004af675
    PUSH 0x3f800000                     ; 004af67c
    PUSH EAX                            ; 004af681
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004af682
    PUSH EBX                            ; 004af688
    CALL dword ptr [ESI + 0x2c]         ; 004af689
    ADD ESP,0xc                         ; 004af68c
    JMP 0x004af4f6                      ; 004af68f
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDI,dword ptr [0x01c264e0]      ; 004af694 | DAT_01c264e0
        ;   Label: caseD_6
    PUSH EDI                            ; 004af69a
    MOV EAX,dword ptr [EBX + 0x276c]    ; 004af69b
    PUSH EAX                            ; 004af6a1
    CALL FUN_0040c8f0                   ; 004af6a2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 004af6a7
    ADD ESP,0x8                         ; 004af6ae
    MOV dword ptr [ESP + 0xd4],EAX      ; 004af6b1
    TEST EAX,EAX                        ; 004af6b8
    JNZ 0x004af6cb                      ; 004af6ba
        ;   XREF to: 004af6cb (CONDITIONAL_JUMP)  ; LAB_004af6cb
    MOV dword ptr [EBX + 0x276c],0x0    ; 004af6bc
        ;   Label: LAB_004af6bc
    JMP 0x004af4f6                      ; 004af6c6
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ECX,dword ptr [0x01cb06a8]      ; 004af6cb | DAT_01cb06a8
        ;   Label: LAB_004af6cb
    PUSH ECX                            ; 004af6d1
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004af6d2
    PUSH ESI                            ; 004af6d9
    LEA ESI,[ESP + 0xc4]                ; 004af6da
    LEA EDI,[ESP + 0x88]                ; 004af6e1
    CALL FUN_005469a0                   ; 004af6e8
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 004af6ed
    LEA EAX,[ESP + 0x80]                ; 004af6f0
    LEA ESI,[ESP + 0xbc]                ; 004af6f7
    PUSH EAX                            ; 004af6fe
    MOVSD ES:EDI,ESI                    ; 004af6ff
    MOVSD ES:EDI,ESI                    ; 004af700
    MOVSD ES:EDI,ESI                    ; 004af701
    PUSH EBX                            ; 004af702
    LEA ESI,[ESP + 0xac]                ; 004af703
    LEA EDI,[ESP + 0x4c]                ; 004af70a
    CALL FUN_00408d70                   ; 004af70e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004af713
    LEA EAX,[ESP + 0x8]                 ; 004af716
    LEA ESI,[ESP + 0xa4]                ; 004af71a
    PUSH EAX                            ; 004af721
    MOVSD ES:EDI,ESI                    ; 004af722
    MOVSD ES:EDI,ESI                    ; 004af723
    MOVSD ES:EDI,ESI                    ; 004af724
    CALL FUN_004222d0                   ; 004af725
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 004af72a
    PUSH 0x41700000                     ; 004af72d
    PUSH 0x41200000                     ; 004af732
    CALL FUN_0040cf60                   ; 004af737
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xe8],EAX      ; 004af73c
    FLD float ptr [ESP + 0xe8]          ; 004af743
    ADD ESP,0x8                         ; 004af74a
    LEA EAX,[ESP + 0x44]                ; 004af74d
    PUSH EAX                            ; 004af751
    MOV EDI,dword ptr [ESP + 0xdc]      ; 004af752
    LEA ESI,[ESP + 0x54]                ; 004af759
    PUSH EDI                            ; 004af75d
    FSTP float ptr [ESP + 0x14]         ; 004af75e
    CALL FUN_00408de0                   ; 004af762
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA EDI,[ESP + 0x94]                ; 004af767
    LEA ESI,[ESP + 0x58]                ; 004af76e
    ADD ESP,0x8                         ; 004af772
    MOVSD ES:EDI,ESI                    ; 004af775
    MOVSD ES:EDI,ESI                    ; 004af776
    MOVSD ES:EDI,ESI                    ; 004af777
    LEA EAX,[ESP + 0x8c]                ; 004af778
    LEA ESI,[ESP + 0x24]                ; 004af77f
    CMP ESI,EAX                         ; 004af783
    JZ 0x004af7a8                       ; 004af785
        ;   XREF to: 004af7a8 (CONDITIONAL_JUMP)  ; LAB_004af7a8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004af787
    MOV dword ptr [ESP + 0x24],EAX      ; 004af78e
    MOV EAX,dword ptr [ESP + 0x90]      ; 004af792
    MOV dword ptr [ESP + 0x28],EAX      ; 004af799
    MOV EAX,dword ptr [ESP + 0x94]      ; 004af79d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004af7a4
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004af7a8
        ;   Label: LAB_004af7a8
    LEA EAX,[ESP + 0x8]                 ; 004af7af
    MOV dword ptr [ESP + 0x3c],EBX      ; 004af7b3
    MOV dword ptr [ESP + 0x40],EBX      ; 004af7b7
    PUSH EAX                            ; 004af7bb
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004af7bc
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 004af7c3
    PUSH EAX                            ; 004af7c9
    CALL dword ptr [ESI + 0x110]        ; 004af7ca
    ADD ESP,0x8                         ; 004af7d0
    FLDZ                                ; 004af7d3
    FLD float ptr [ESP + 0xc]           ; 004af7d5
    FSTP double ptr [ESP]               ; 004af7d9
    FCOMP double ptr [ESP]              ; 004af7dc
    FNSTSW AX                           ; 004af7df
    SAHF                                ; 004af7e1
    JNC 0x004af6bc                      ; 004af7e2
        ;   XREF to: 004af6bc (CONDITIONAL_JUMP)  ; LAB_004af6bc
    FLD double ptr [ESP]                ; 004af7e8
    FMUL double ptr [0x005d7023]        ; 004af7eb | DAT_005d7023
    CALL FUN_005b7ff0                   ; 004af7f1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xe0]        ; 004af7f6
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004af7fd
    PUSH 0x0                            ; 004af804
    INC EAX                             ; 004af806
    PUSH EAX                            ; 004af807
    PUSH 0x0                            ; 004af808
    LEA EAX,[ESP + 0x50]                ; 004af80a
    PUSH EAX                            ; 004af80e
    MOV EDX,dword ptr [0x006167e0]      ; 004af80f | DAT_006167e0
    PUSH EDX                            ; 004af815
    CALL FUN_004c9850                   ; 004af816
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    ADD ESP,0x14                        ; 004af81b
    PUSH 0x5d6ffb                       ; 004af81e | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004af823
    PUSH EBX                            ; 004af829
    CALL dword ptr [EAX + 0x34]         ; 004af82a
    ADD ESP,0x8                         ; 004af82d
    MOV dword ptr [EBX + 0x276c],0x0    ; 004af830
    JMP 0x004af4f6                      ; 004af83a
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ESI,dword ptr [EBX + 0x276c]    ; 004af83f
        ;   Label: caseD_f
    TEST ESI,ESI                        ; 004af845
    JZ 0x004af4f6                       ; 004af847
        ;   XREF to: 004af4f6 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[ESI + 0x20]                ; 004af84d
    PUSH EAX                            ; 004af850
    PUSH EBX                            ; 004af851
    LEA ESI,[ESP + 0x64]                ; 004af852
    LEA EDI,[ESP + 0xd0]                ; 004af856
    CALL FUN_00408de0                   ; 004af85d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x64]                ; 004af862
    ADD ESP,0x8                         ; 004af866
    MOVSD ES:EDI,ESI                    ; 004af869
    MOVSD ES:EDI,ESI                    ; 004af86a
    MOVSD ES:EDI,ESI                    ; 004af86b
    FLDZ                                ; 004af86c
    FCOMP float ptr [ESP + 0xd0]        ; 004af86e
    FNSTSW AX                           ; 004af875
    SAHF                                ; 004af877
    JNC 0x004af4f6                      ; 004af878
        ;   XREF to: 004af4f6 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5d7005                       ; 004af87e | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004af883
    PUSH EBX                            ; 004af889
    CALL dword ptr [EAX + 0x34]         ; 004af88a
    ADD ESP,0x8                         ; 004af88d
    JMP 0x004af4f6                      ; 004af890
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5d7015                       ; 004af895 | = "gb-fall1.wav"
        ;   Label: caseD_11
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004af89a
    PUSH EBX                            ; 004af8a0
    CALL dword ptr [EAX + 0x34]         ; 004af8a1
    ADD ESP,0x8                         ; 004af8a4
    JMP 0x004af4f6                      ; 004af8a7
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004af8ac
        ;   Label: caseD_13
    CALL FUN_004b0a40                   ; 004af8ad
        ;   XREF to: 004b0a40 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0a40()
    ADD ESP,0x4                         ; 004af8b2
    JMP 0x004af4f6                      ; 004af8b5
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004af8ba
        ;   Label: caseD_16
    CALL FUN_004cf230                   ; 004af8bb
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf230()
    ADD ESP,0x4                         ; 004af8c0
    TEST EAX,EAX                        ; 004af8c3
    JNZ 0x004af4f6                      ; 004af8c5
        ;   XREF to: 004af4f6 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 004af8cb
    PUSH EAX                            ; 004af8cd
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004af8ce
    PUSH ECX                            ; 004af8d5
    CALL FUN_00503620                   ; 004af8d6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004af8db
    JMP 0x004af4f6                      ; 004af8de
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH ESI                            ; 004af8e3
        ;   Label: caseD_4
    PUSH EBX                            ; 004af8e4
    CALL FUN_0042aa00                   ; 004af8e5
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 004af8ea
    JMP 0x004af4f6                      ; 004af8ed
        ;   XREF to: 004af4f6 (UNCONDITIONAL_JUMP)  ; caseD_12

