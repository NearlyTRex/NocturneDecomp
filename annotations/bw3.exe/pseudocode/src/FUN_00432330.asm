; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00432330(int param_1,float param_2,int param_3)
;
;
; XREF[13]:
;   FUN_0040fb40 at 0040fdc2
;   FUN_004628b0 at 004628ff
;   FUN_004f8cc0 at 004f8cec
;   FUN_00509120 at 00509404
;   FUN_00518ab0 at 00518bbe
;   FUN_00546400 at 0054645b
;   FUN_00586500 at 0058655b
;   FUN_00597f40 at 00597fb6
;   FUN_005989e0 at 00598a2e
;   FUN_00599540 at 00599747
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005b8646
;   TerminatedCString s_Bip01_head_005b8651
;   TerminatedCString s_heroCanSee_005b865c
;   TerminatedCString s_Bip01_head_005b8667
;   TerminatedCString s_CHero_005b8672
;   TerminatedCString s_Bip01_head_005b8678
;   TerminatedCString s_Bip01_head_005b8683
;   undefined4 DAT_005b868e
;   undefined4 DAT_005b8696
;   undefined4 DAT_005b869e
;   undefined4 DAT_005b86a6
;   undefined4 DAT_005b86ae
;   undefined4 DAT_005b86b6
;   undefined4 DAT_005b86be
;   undefined4 DAT_005b86c6
;   ... and 18 more
;
; Called Functions:
;   FUN_00408b40
;   FUN_00408b80
;   FUN_0040c790
;   FUN_0040c840
;   FUN_0040ce40
;   FUN_0040cfa0
;   FUN_00491aa0
;   FUN_0053cbf0
;   FUN_0053ebe0
;   FUN_0053ec10
;   FUN_0053ec90
;   FUN_00548090
;   FUN_0054dcc0
;   FUN_0054eac0
;   FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432330
        ;   Label: FUN_00432330
    PUSH ESI                            ; 00432331
    PUSH EDI                            ; 00432332
    PUSH EBP                            ; 00432333
    MOV EBP,ESP                         ; 00432334
    SUB ESP,0x234                       ; 00432336
    AND ESP,0xfffffff8                  ; 0043233c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0043233f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00432342
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432345
    PUSH EDX                            ; 00432348
    MOV EAX,dword ptr [EAX + 0x154]     ; 00432349
    CALL dword ptr [EAX + 0x10c]        ; 0043234f
    ADD ESP,0x4                         ; 00432355
    TEST EAX,EAX                        ; 00432358
    JZ 0x00432361                       ; 0043235a
        ;   XREF to: 00432361 (CONDITIONAL_JUMP)  ; LAB_00432361
    MOV EBX,0x1                         ; 0043235c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432361
        ;   Label: LAB_00432361
    ADD EAX,0x158                       ; 00432364
    PUSH EAX                            ; 00432369
    CALL FUN_0054eac0                   ; 0043236a
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0043236f
    PUSH 0x0                            ; 00432372
    PUSH 0x5b8646                       ; 00432374 | = "Bip01 head"
    PUSH EAX                            ; 00432379
    MOV dword ptr [ESP + 0x224],EAX     ; 0043237a
    CALL FUN_00548090                   ; 00432381
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00432386
    CMP EAX,-0x1                        ; 00432389
    JNZ 0x00432393                      ; 0043238c
        ;   XREF to: 00432393 (CONDITIONAL_JUMP)  ; LAB_00432393
    MOV EBX,0x1                         ; 0043238e
    XOR ECX,ECX                         ; 00432393
        ;   Label: LAB_00432393
    MOV dword ptr [ESP + 0x224],ECX     ; 00432395
    TEST EBX,EBX                        ; 0043239c
    JZ 0x004323fd                       ; 0043239e
        ;   XREF to: 004323fd (CONDITIONAL_JUMP)  ; LAB_004323fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004323a0
    MOV dword ptr [EAX + 0x2778],ECX    ; 004323a3
        ;   Label: LAB_004323a3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004323a9
        ;   Label: LAB_004323a9
    MOV EAX,dword ptr [ESP + 0x224]     ; 004323ac
    MOV dword ptr [EDX + 0x2760],EAX    ; 004323b3
    TEST EAX,EAX                        ; 004323b9
    JNZ 0x00432ac2                      ; 004323bb
        ;   XREF to: 00432ac2 (CONDITIONAL_JUMP)  ; LAB_00432ac2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004323c1
        ;   Label: LAB_004323c1
    CMP dword ptr [EAX + 0x2760],0x0    ; 004323c4
    JNZ 0x00432f4c                      ; 004323cb
        ;   XREF to: 00432f4c (CONDITIONAL_JUMP)  ; LAB_00432f4c
    FLD float ptr [EBP + 0x18]          ; 004323d1
        ;   Label: LAB_004323d1
    FDIV float ptr [0x005b86ae]         ; 004323d4 | DAT_005b86ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004323da
    FSUBR float ptr [EAX + 0x2770]      ; 004323dd
    FST float ptr [EAX + 0x2770]        ; 004323e3
    FLDZ                                ; 004323e9
    FCOMPP                              ; 004323eb
    FNSTSW AX                           ; 004323ed
    SAHF                                ; 004323ef
    JA 0x00432f24                       ; 004323f0
        ;   XREF to: 00432f24 (CONDITIONAL_JUMP)  ; LAB_00432f24
    MOV ESP,EBP                         ; 004323f6
    POP EBP                             ; 004323f8
    POP EDI                             ; 004323f9
    POP ESI                             ; 004323fa
    POP EBX                             ; 004323fb
    RET                                 ; 004323fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004323fd
        ;   Label: LAB_004323fd
    MOV EBX,dword ptr [EAX + 0x2764]    ; 00432400
    TEST EBX,EBX                        ; 00432406
    JZ 0x00432413                       ; 00432408
        ;   XREF to: 00432413 (CONDITIONAL_JUMP)  ; LAB_00432413
    MOV dword ptr [ESP + 0x224],EBX     ; 0043240a
    JMP 0x004323a3                      ; 00432411
        ;   XREF to: 004323a3 (UNCONDITIONAL_JUMP)  ; LAB_004323a3
    FLD float ptr [EAX + 0x2778]        ; 00432413
        ;   Label: LAB_00432413
    FLDZ                                ; 00432419
    FCOMPP                              ; 0043241b
    FNSTSW AX                           ; 0043241d
    SAHF                                ; 0043241f
    JNC 0x00432449                      ; 00432420
        ;   XREF to: 00432449 (CONDITIONAL_JUMP)  ; LAB_00432449
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432422
    MOV EAX,dword ptr [EAX + 0x2760]    ; 00432425
    MOV dword ptr [ESP + 0x224],EAX     ; 0043242b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432432
    FLD float ptr [EAX + 0x2778]        ; 00432435
    FSUB float ptr [EBP + 0x18]         ; 0043243b
    FSTP float ptr [EAX + 0x2778]       ; 0043243e
    JMP 0x004323a9                      ; 00432444
        ;   XREF to: 004323a9 (UNCONDITIONAL_JUMP)  ; LAB_004323a9
    PUSH ECX                            ; 00432449
        ;   Label: LAB_00432449
    PUSH 0x5b8651                       ; 0043244a | = "Bip01 head"
    MOV ESI,dword ptr [ESP + 0x220]     ; 0043244f
    PUSH ESI                            ; 00432456
    CALL FUN_00548090                   ; 00432457
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0043245c
    CMP EAX,-0x1                        ; 0043245f
    JZ 0x00432575                       ; 00432462
        ;   XREF to: 00432575 (CONDITIONAL_JUMP)  ; LAB_00432575
    PUSH EAX                            ; 00432468
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432469
    ADD EAX,0x158                       ; 0043246c
    PUSH EAX                            ; 00432471
    LEA ESI,[ESP + 0x178]               ; 00432472
    LEA EDI,[ESP + 0x130]               ; 00432479
    CALL FUN_0054dcc0                   ; 00432480
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x178]               ; 00432485
    ADD ESP,0x8                         ; 0043248c
    LEA EAX,[ESP + 0x128]               ; 0043248f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00432496
    PUSH EAX                            ; 00432499
    MOVSD ES:EDI,ESI                    ; 0043249a
    MOVSD ES:EDI,ESI                    ; 0043249b
    MOVSD ES:EDI,ESI                    ; 0043249c
    PUSH EBX                            ; 0043249d
    LEA ESI,[ESP + 0xf4]                ; 0043249e
    LEA EDI,[ESP + 0x1f0]               ; 004324a5
    CALL FUN_00408b80                   ; 004324ac
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xf4]                ; 004324b1
    LEA EAX,[ESP + 0x1f0]               ; 004324b8
    ADD ESP,0x8                         ; 004324bf
    LEA EDX,[ESP + 0xc8]                ; 004324c2
    MOVSD ES:EDI,ESI                    ; 004324c9
    MOVSD ES:EDI,ESI                    ; 004324ca
    MOVSD ES:EDI,ESI                    ; 004324cb
    CMP EDX,EAX                         ; 004324cc
    JNZ 0x00432546                      ; 004324ce
        ;   XREF to: 00432546 (CONDITIONAL_JUMP)  ; LAB_00432546
    PUSH 0x5b865c                       ; 004324d0 | = "heroCanSee"
        ;   Label: LAB_004324d0
    MOV ESI,dword ptr [0x005fba60]      ; 004324d5 | DAT_005fba60
    PUSH ESI                            ; 004324db
    CALL FUN_00491aa0                   ; 004324dc
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 004324e1
    XOR EDI,EDI                         ; 004324e4
    MOV dword ptr [ESP + 0x220],EAX     ; 004324e6
    MOV dword ptr [ESP + 0x22c],EDI     ; 004324ed
    MOV dword ptr [ESP + 0x228],EDI     ; 004324f4
        ;   Label: LAB_004324f4
    MOV EAX,[0x00603b28]                ; 004324fb | DAT_00603b28
    MOV EDX,dword ptr [ESP + 0x22c]     ; 00432500
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 00432507 | DAT_02026970
    JGE 0x00432a8b                      ; 0043250d
        ;   XREF to: 00432a8b (CONDITIONAL_JUMP)  ; LAB_00432a8b
    ADD EAX,dword ptr [ESP + 0x228]     ; 00432513
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043251a
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 0043251d
    CMP EBX,ESI                         ; 00432523
    JNZ 0x00432602                      ; 00432525
        ;   XREF to: 00432602 (CONDITIONAL_JUMP)  ; LAB_00432602
    MOV EAX,dword ptr [ESP + 0x22c]     ; 0043252b
        ;   Label: LAB_0043252b
    MOV EDI,dword ptr [ESP + 0x228]     ; 00432532
    INC EAX                             ; 00432539
    ADD EDI,0x4                         ; 0043253a
    MOV dword ptr [ESP + 0x22c],EAX     ; 0043253d
    JMP 0x004324f4                      ; 00432544
        ;   XREF to: 004324f4 (UNCONDITIONAL_JUMP)  ; LAB_004324f4
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00432546
        ;   Label: LAB_00432546
    MOV dword ptr [ESP + 0xc8],EAX      ; 0043254d
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00432554
    MOV dword ptr [ESP + 0xcc],EAX      ; 0043255b
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 00432562
    MOV dword ptr [ESP + 0xd0],EAX      ; 00432569
    JMP 0x004324d0                      ; 00432570
        ;   XREF to: 004324d0 (UNCONDITIONAL_JUMP)  ; LAB_004324d0
    MOV EAX,0x40b00000                  ; 00432575
        ;   Label: LAB_00432575
    MOV ECX,dword ptr [EBP + 0x14]      ; 0043257a
    MOV dword ptr [ESP + 0x18c],EAX     ; 0043257d
    LEA EAX,[ESP + 0x188]               ; 00432584
    XOR EDI,EDI                         ; 0043258b
    PUSH EAX                            ; 0043258d
    LEA ESI,[ESP + 0x120]               ; 0043258e
    MOV dword ptr [ESP + 0x18c],EDI     ; 00432595
    PUSH ECX                            ; 0043259c
    MOV dword ptr [ESP + 0x198],EDI     ; 0043259d
    LEA EDI,[ESP + 0x94]                ; 004325a4
    CALL FUN_00408b80                   ; 004325ab
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x124]               ; 004325b0
    LEA EAX,[ESP + 0x94]                ; 004325b7
    ADD ESP,0x8                         ; 004325be
    LEA EDX,[ESP + 0xc8]                ; 004325c1
    MOVSD ES:EDI,ESI                    ; 004325c8
    MOVSD ES:EDI,ESI                    ; 004325c9
    MOVSD ES:EDI,ESI                    ; 004325ca
    CMP EDX,EAX                         ; 004325cb
    JZ 0x004324d0                       ; 004325cd
        ;   XREF to: 004324d0 (CONDITIONAL_JUMP)  ; LAB_004324d0
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004325d3
    MOV dword ptr [ESP + 0xc8],EAX      ; 004325da
    MOV EAX,dword ptr [ESP + 0x90]      ; 004325e1
    MOV dword ptr [ESP + 0xcc],EAX      ; 004325e8
    MOV EAX,dword ptr [ESP + 0x94]      ; 004325ef
    MOV dword ptr [ESP + 0xd0],EAX      ; 004325f6
    JMP 0x004324d0                      ; 004325fd
        ;   XREF to: 004324d0 (UNCONDITIONAL_JUMP)  ; LAB_004324d0
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00432602
        ;   Label: LAB_00432602
    JZ 0x00432619                       ; 00432609
        ;   XREF to: 00432619 (CONDITIONAL_JUMP)  ; LAB_00432619
    CMP dword ptr [ESP + 0x220],0x0     ; 0043260b
    JZ 0x0043252b                       ; 00432613
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV EDX,dword ptr [0x007e2a14]      ; 00432619 | DAT_007e2a14
        ;   Label: LAB_00432619
    PUSH EDX                            ; 0043261f
    PUSH EBX                            ; 00432620
    CALL FUN_0040c840                   ; 00432621
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00432626
    TEST EAX,EAX                        ; 00432629
    JNZ 0x0043252b                      ; 0043262b
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV ECX,dword ptr [0x02cfd8fc]      ; 00432631 | DAT_02cfd8fc
    PUSH ECX                            ; 00432637
    PUSH EBX                            ; 00432638
    CALL FUN_0040c840                   ; 00432639
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0043263e
    TEST EAX,EAX                        ; 00432641
    JNZ 0x0043252b                      ; 00432643
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV ESI,dword ptr [0x01ed37c0]      ; 00432649 | DAT_01ed37c0
    PUSH ESI                            ; 0043264f
    PUSH EBX                            ; 00432650
    CALL FUN_0040c840                   ; 00432651
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00432656
    TEST EAX,EAX                        ; 00432659
    JNZ 0x0043252b                      ; 0043265b
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV EDI,dword ptr [0x02d24bd0]      ; 00432661 | DAT_02d24bd0
    PUSH EDI                            ; 00432667
    PUSH EBX                            ; 00432668
    CALL FUN_0040c840                   ; 00432669
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0043266e
    TEST EAX,EAX                        ; 00432671
    JNZ 0x0043252b                      ; 00432673
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV EAX,[0x02d24c48]                ; 00432679 | DAT_02d24c48
    PUSH EAX                            ; 0043267e
    PUSH EBX                            ; 0043267f
    CALL FUN_0040c840                   ; 00432680
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00432685
    TEST EAX,EAX                        ; 00432688
    JNZ 0x0043252b                      ; 0043268a
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV EDX,dword ptr [0x02d24c0c]      ; 00432690 | DAT_02d24c0c
    PUSH EDX                            ; 00432696
    PUSH EBX                            ; 00432697
    CALL FUN_0040c840                   ; 00432698
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0043269d
    TEST EAX,EAX                        ; 004326a0
    JNZ 0x0043252b                      ; 004326a2
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV ECX,dword ptr [0x02d24cf0]      ; 004326a8 | DAT_02d24cf0
    PUSH ECX                            ; 004326ae
    PUSH EBX                            ; 004326af
    CALL FUN_0040c840                   ; 004326b0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004326b5
    TEST EAX,EAX                        ; 004326b8
    JNZ 0x0043252b                      ; 004326ba
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV ESI,dword ptr [0x02d24d40]      ; 004326c0 | DAT_02d24d40
    PUSH ESI                            ; 004326c6
    PUSH EBX                            ; 004326c7
    CALL FUN_0040c840                   ; 004326c8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004326cd
    TEST EAX,EAX                        ; 004326d0
    JNZ 0x0043252b                      ; 004326d2
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV EDI,dword ptr [0x02d24b58]      ; 004326d8 | DAT_02d24b58
    PUSH EDI                            ; 004326de
    PUSH EBX                            ; 004326df
    CALL FUN_0040c840                   ; 004326e0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004326e5
    TEST EAX,EAX                        ; 004326e8
    JNZ 0x0043252b                      ; 004326ea
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    PUSH EBX                            ; 004326f0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004326f1
    CALL dword ptr [EAX + 0x70]         ; 004326f7
    ADD ESP,0x4                         ; 004326fa
    TEST EAX,EAX                        ; 004326fd
    JNZ 0x0043252b                      ; 004326ff
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    PUSH EBX                            ; 00432705
    MOV EAX,dword ptr [EBX + 0x154]     ; 00432706
    CALL dword ptr [EAX + 0x10c]        ; 0043270c
    ADD ESP,0x4                         ; 00432712
    TEST EAX,EAX                        ; 00432715
    JNZ 0x0043252b                      ; 00432717
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    LEA EDX,[EBX + 0x158]               ; 0043271d
    LEA ESI,[EBX + 0x24a8]              ; 00432723
    MOV CL,byte ptr [ESI]               ; 00432729
    MOV EAX,0xffffffff                  ; 0043272b
    TEST CL,CL                          ; 00432730
    JZ 0x0043274d                       ; 00432732
        ;   XREF to: 0043274d (CONDITIONAL_JUMP)  ; LAB_0043274d
    PUSH 0x0                            ; 00432734
    PUSH 0x5b8667                       ; 00432736 | = "Bip01 head"
    PUSH EDX                            ; 0043273b
    CALL FUN_0054eac0                   ; 0043273c
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 00432741
    PUSH EAX                            ; 00432744
    CALL FUN_00548090                   ; 00432745
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0043274a
    TEST EAX,EAX                        ; 0043274d
        ;   Label: LAB_0043274d
    JL 0x00432a2f                       ; 0043274f
        ;   XREF to: 00432a2f (CONDITIONAL_JUMP)  ; LAB_00432a2f
    PUSH EAX                            ; 00432755
    LEA EAX,[EBX + 0x158]               ; 00432756
    PUSH EAX                            ; 0043275c
    LEA ESI,[ESP + 0x1e4]               ; 0043275d
    LEA EDI,[ESP + 0x148]               ; 00432764
    CALL FUN_0054dcc0                   ; 0043276b
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    ADD ESP,0x8                         ; 00432770
    LEA EAX,[ESP + 0x140]               ; 00432773
    LEA ESI,[ESP + 0x1dc]               ; 0043277a
    PUSH EAX                            ; 00432781
    MOVSD ES:EDI,ESI                    ; 00432782
    MOVSD ES:EDI,ESI                    ; 00432783
    MOVSD ES:EDI,ESI                    ; 00432784
    PUSH EBX                            ; 00432785
    LEA ESI,[ESP + 0x184]               ; 00432786
    LEA EDI,[ESP + 0x34]                ; 0043278d
    CALL FUN_00408b80                   ; 00432791
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x184]               ; 00432796
    LEA EDX,[ESP + 0x34]                ; 0043279d
    ADD ESP,0x8                         ; 004327a1
    LEA EAX,[ESP + 0xf8]                ; 004327a4
    MOVSD ES:EDI,ESI                    ; 004327ab
    MOVSD ES:EDI,ESI                    ; 004327ac
    MOVSD ES:EDI,ESI                    ; 004327ad
    CMP EAX,EDX                         ; 004327ae
    JZ 0x004327d3                       ; 004327b0
        ;   XREF to: 004327d3 (CONDITIONAL_JUMP)  ; LAB_004327d3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004327b2
    MOV dword ptr [ESP + 0xf8],EAX      ; 004327b6
    MOV EAX,dword ptr [ESP + 0x30]      ; 004327bd
    MOV dword ptr [ESP + 0xfc],EAX      ; 004327c1
    MOV EAX,dword ptr [ESP + 0x34]      ; 004327c8
    MOV dword ptr [ESP + 0x100],EAX     ; 004327cc
    FLD float ptr [ESP + 0xf8]          ; 004327d3
        ;   Label: LAB_004327d3
    FLD float ptr [ESP + 0xfc]          ; 004327da
    FLD float ptr [ESP + 0x100]         ; 004327e1
    LEA EDI,[ESP + 0x158]               ; 004327e8
    LEA ESI,[ESP + 0x20]                ; 004327ef
    LEA EAX,[ESP + 0x158]               ; 004327f3
    FXCH ST2                            ; 004327fa
    FSUB float ptr [ESP + 0xc8]         ; 004327fc
    FXCH                                ; 00432803
    FSUB float ptr [ESP + 0xcc]         ; 00432805
    FXCH ST2                            ; 0043280c
    FSUB float ptr [ESP + 0xd0]         ; 0043280e
    PUSH EAX                            ; 00432815
    FXCH                                ; 00432816
    FSTP float ptr [ESP + 0x24]         ; 00432818
    FXCH                                ; 0043281c
    FSTP float ptr [ESP + 0x28]         ; 0043281e
    FSTP float ptr [ESP + 0x2c]         ; 00432822
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432826
    MOVSD ES:EDI,ESI                    ; 00432829
    MOVSD ES:EDI,ESI                    ; 0043282a
    MOVSD ES:EDI,ESI                    ; 0043282b
    PUSH EAX                            ; 0043282c
    LEA ESI,[ESP + 0x10]                ; 0043282d
    LEA EDI,[ESP + 0x7c]                ; 00432831
    CALL FUN_00408b40                   ; 00432835
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x10]                ; 0043283a
    ADD ESP,0x8                         ; 0043283e
    MOVSD ES:EDI,ESI                    ; 00432841
    MOVSD ES:EDI,ESI                    ; 00432842
    MOVSD ES:EDI,ESI                    ; 00432843
    FLD float ptr [ESP + 0x7c]          ; 00432844
    FLDZ                                ; 00432848
    FCOMPP                              ; 0043284a
    FNSTSW AX                           ; 0043284c
    SAHF                                ; 0043284e
    JA 0x0043252b                       ; 0043284f
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    FLD float ptr [ESP + 0x78]          ; 00432855
    FMUL ST0                            ; 00432859
    FLD float ptr [ESP + 0x74]          ; 0043285b
    FMUL ST0                            ; 0043285f
    FADDP                               ; 00432861
    FLD float ptr [ESP + 0x7c]          ; 00432863
    FMUL ST0                            ; 00432867
    FADDP                               ; 00432869
    FSTP float ptr [ESP + 0x214]        ; 0043286b
    MOV EAX,dword ptr [ESP + 0x214]     ; 00432872
    MOV dword ptr [ESP],EAX             ; 00432879
    CMP EAX,0x44610000                  ; 0043287c
    JG 0x0043252b                       ; 00432881
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    LEA EAX,[ESP + 0x74]                ; 00432887
    PUSH EAX                            ; 0043288b
    LEA ESI,[ESP + 0x54]                ; 0043288c
    LEA EDI,[ESP + 0x6c]                ; 00432890
    CALL FUN_00576250                   ; 00432894
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x54]                ; 00432899
    ADD ESP,0x4                         ; 0043289d
    MOVSD ES:EDI,ESI                    ; 004328a0
    MOVSD ES:EDI,ESI                    ; 004328a1
    MOVSD ES:EDI,ESI                    ; 004328a2
    FLD float ptr [ESP + 0x6c]          ; 004328a3
    FABS                                ; 004328a7
    FCOMP double ptr [0x005b86be]       ; 004328a9 | DAT_005b86be
    FNSTSW AX                           ; 004328af
    SAHF                                ; 004328b1
    JA 0x0043252b                       ; 004328b2
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    FLD float ptr [ESP + 0x68]          ; 004328b8
    FABS                                ; 004328bc
    FCOMP double ptr [0x005b86c6]       ; 004328be | DAT_005b86c6
    FNSTSW AX                           ; 004328c4
    SAHF                                ; 004328c6
    JA 0x0043252b                       ; 004328c7
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV ESI,dword ptr [0x01c5bc48]      ; 004328cd | DAT_01c5bc48
    PUSH ESI                            ; 004328d3
    MOV ECX,0x41200000                  ; 004328d4
    PUSH EBX                            ; 004328d9
    MOV dword ptr [ESP + 0xc],ECX       ; 004328da
    CALL FUN_0040c840                   ; 004328de
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004328e3
    MOV ESI,EAX                         ; 004328e6
    TEST EAX,EAX                        ; 004328e8
    JZ 0x0043290a                       ; 004328ea
        ;   XREF to: 0043290a (CONDITIONAL_JUMP)  ; LAB_0043290a
    MOV EDI,0x41f00000                  ; 004328ec
    MOV EDX,dword ptr [EBP + 0x14]      ; 004328f1
    MOV EAX,dword ptr [EAX + 0xcde4]    ; 004328f4
    MOV dword ptr [ESP + 0x4],EDI       ; 004328fa
    CMP EAX,EDX                         ; 004328fe
    JNZ 0x0043290a                      ; 00432900
        ;   XREF to: 0043290a (CONDITIONAL_JUMP)  ; LAB_0043290a
    MOV dword ptr [ESP + 0x4],0x42200000 ; 00432902
    FLD float ptr [ESP + 0x4]           ; 0043290a
        ;   Label: LAB_0043290a
    FCOMP double ptr [0x005b86ce]       ; 0043290e | DAT_005b86ce
    FNSTSW AX                           ; 00432914
    SAHF                                ; 00432916
    JNC 0x00432933                      ; 00432917
        ;   XREF to: 00432933 (CONDITIONAL_JUMP)  ; LAB_00432933
    PUSH 0x5b8672                       ; 00432919 | = "CHero"
    PUSH EBX                            ; 0043291e
    CALL FUN_0040c790                   ; 0043291f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 00432924
    TEST EAX,EAX                        ; 00432927
    JZ 0x00432933                       ; 00432929
        ;   XREF to: 00432933 (CONDITIONAL_JUMP)  ; LAB_00432933
    MOV dword ptr [ESP + 0x4],0x41700000 ; 0043292b
    FLD float ptr [ESP]                 ; 00432933
        ;   Label: LAB_00432933
    FSQRT                               ; 00432936
    FLD double ptr [0x005b86d6]         ; 00432938 | DAT_005b86d6
    FXCH                                ; 0043293e
    FADD ST0,ST1                        ; 00432940
    FDIVP                               ; 00432942
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432944
    FLD float ptr [ESP + 0x4]           ; 00432947
    FXCH                                ; 0043294b
    FMUL ST1                            ; 0043294d
    MOV EDX,dword ptr [EAX + 0x2760]    ; 0043294f
    FSTP ST1                            ; 00432955
    FSTP float ptr [ESP + 0x4]          ; 00432957
    CMP EBX,EDX                         ; 0043295b
    JNZ 0x00432971                      ; 0043295d
        ;   XREF to: 00432971 (CONDITIONAL_JUMP)  ; LAB_00432971
    FLD float ptr [ESP + 0x4]           ; 0043295f
    FLD ST0                             ; 00432963
    FMUL double ptr [0x005b868e]        ; 00432965 | DAT_005b868e
    FSTP ST1                            ; 0043296b
    FSTP float ptr [ESP + 0x4]          ; 0043296d
    TEST ESI,ESI                        ; 00432971
        ;   Label: LAB_00432971
    JZ 0x00432a73                       ; 00432973
        ;   XREF to: 00432a73 (CONDITIONAL_JUMP)  ; LAB_00432a73
    CMP dword ptr [ESI + 0xcdd0],0x1    ; 00432979
    JNZ 0x00432a73                      ; 00432980
        ;   XREF to: 00432a73 (CONDITIONAL_JUMP)  ; LAB_00432a73
    MOV ESI,dword ptr [0x00603b28]      ; 00432986 | DAT_00603b28
        ;   Label: LAB_00432986
    PUSH ESI                            ; 0043298c | DAT_01ed78c8
    CALL FUN_0053ebe0                   ; 0043298d
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebe0()
    ADD ESP,0x4                         ; 00432992
    MOV EDI,dword ptr [EBP + 0x14]      ; 00432995
    PUSH EDI                            ; 00432998
    MOV EAX,[0x00603b28]                ; 00432999 | DAT_00603b28
    PUSH EAX                            ; 0043299e | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 0043299f
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 004329a4
    PUSH EBX                            ; 004329a7
    MOV EDX,dword ptr [0x00603b28]      ; 004329a8 | DAT_00603b28
    PUSH EDX                            ; 004329ae | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 004329af
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 004329b4
    PUSH 0x2                            ; 004329b7
    MOV ECX,dword ptr [0x00603b28]      ; 004329b9 | DAT_00603b28
    PUSH ECX                            ; 004329bf | DAT_01ed78c8
    CALL FUN_0053ec90                   ; 004329c0
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec90()
    ADD ESP,0x8                         ; 004329c5
    LEA EAX,[ESP + 0xf8]                ; 004329c8
    PUSH EAX                            ; 004329cf
    LEA EAX,[ESP + 0xcc]                ; 004329d0
    PUSH EAX                            ; 004329d7
    MOV ESI,dword ptr [0x00603b28]      ; 004329d8 | DAT_00603b28
    PUSH ESI                            ; 004329de | DAT_01ed78c8
    CALL FUN_0053cbf0                   ; 004329df
        ;   XREF to: 0053cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053cbf0()
    ADD ESP,0xc                         ; 004329e4
    TEST EAX,EAX                        ; 004329e7
    JNZ 0x0043252b                      ; 004329e9
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    LEA EAX,[ESP + 0x68]                ; 004329ef
    LEA EDX,[ESP + 0x80]                ; 004329f3
    MOV dword ptr [ESP + 0x224],EBX     ; 004329fa
    CMP EDX,EAX                         ; 00432a01
    JZ 0x0043252b                       ; 00432a03
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    MOV EAX,dword ptr [ESP + 0x68]      ; 00432a09
    MOV dword ptr [ESP + 0x80],EAX      ; 00432a0d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00432a14
    MOV dword ptr [ESP + 0x84],EAX      ; 00432a18
    MOV EAX,dword ptr [ESP + 0x70]      ; 00432a1f
    MOV dword ptr [ESP + 0x88],EAX      ; 00432a23
    JMP 0x0043252b                      ; 00432a2a
        ;   XREF to: 0043252b (UNCONDITIONAL_JUMP)  ; LAB_0043252b
    LEA EAX,[ESP + 0xf8]                ; 00432a2f
        ;   Label: LAB_00432a2f
    LEA EDX,[EBX + 0x20]                ; 00432a36
    CMP EAX,EDX                         ; 00432a39
    JZ 0x00432a5a                       ; 00432a3b
        ;   XREF to: 00432a5a (CONDITIONAL_JUMP)  ; LAB_00432a5a
    MOV EAX,dword ptr [EDX]             ; 00432a3d
    MOV dword ptr [ESP + 0xf8],EAX      ; 00432a3f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00432a46
    MOV dword ptr [ESP + 0xfc],EAX      ; 00432a49
    MOV EAX,dword ptr [EDX + 0x8]       ; 00432a50
    MOV dword ptr [ESP + 0x100],EAX     ; 00432a53
    FLD float ptr [ESP + 0xfc]          ; 00432a5a
        ;   Label: LAB_00432a5a
    FADD float ptr [0x005b8696]         ; 00432a61 | DAT_005b8696
    FSTP float ptr [ESP + 0xfc]         ; 00432a67
    JMP 0x004327d3                      ; 00432a6e
        ;   XREF to: 004327d3 (UNCONDITIONAL_JUMP)  ; LAB_004327d3
    FLD float ptr [ESP + 0x4]           ; 00432a73
        ;   Label: LAB_00432a73
    FCOMP float ptr [0x005b86de]        ; 00432a77 | DAT_005b86de
    FNSTSW AX                           ; 00432a7d
    SAHF                                ; 00432a7f
    JC 0x0043252b                       ; 00432a80
        ;   XREF to: 0043252b (CONDITIONAL_JUMP)  ; LAB_0043252b
    JMP 0x00432986                      ; 00432a86
        ;   XREF to: 00432986 (UNCONDITIONAL_JUMP)  ; LAB_00432986
    PUSH EAX                            ; 00432a8b | DAT_01ed78c8
        ;   Label: LAB_00432a8b
    CALL FUN_0053ebe0                   ; 00432a8c
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebe0()
    ADD ESP,0x4                         ; 00432a91
    PUSH 0x40000000                     ; 00432a94
    PUSH 0x3f800000                     ; 00432a99
    CALL FUN_0040ce40                   ; 00432a9e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x238],EAX     ; 00432aa3
    FLD float ptr [ESP + 0x238]         ; 00432aaa
    ADD ESP,0x8                         ; 00432ab1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432ab4
    FSTP float ptr [EAX + 0x2778]       ; 00432ab7
    JMP 0x004323a9                      ; 00432abd
        ;   XREF to: 004323a9 (UNCONDITIONAL_JUMP)  ; LAB_004323a9
    PUSH 0x0                            ; 00432ac2
        ;   Label: LAB_00432ac2
    PUSH 0x5b8678                       ; 00432ac4 | = "Bip01 head"
    MOV ECX,dword ptr [ESP + 0x220]     ; 00432ac9
    PUSH ECX                            ; 00432ad0
    CALL FUN_00548090                   ; 00432ad1
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00432ad6
    CMP EAX,-0x1                        ; 00432ad9
    JZ 0x00432d07                       ; 00432adc
        ;   XREF to: 00432d07 (CONDITIONAL_JUMP)  ; LAB_00432d07
    PUSH EAX                            ; 00432ae2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432ae3
    ADD EAX,0x158                       ; 00432ae6
    PUSH EAX                            ; 00432aeb
    LEA ESI,[ESP + 0x16c]               ; 00432aec
    LEA EDI,[ESP + 0x208]               ; 00432af3
    CALL FUN_0054dcc0                   ; 00432afa
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x16c]               ; 00432aff
    ADD ESP,0x8                         ; 00432b06
    LEA EAX,[ESP + 0x200]               ; 00432b09
    MOV EDX,dword ptr [EBP + 0x14]      ; 00432b10
    PUSH EAX                            ; 00432b13
    MOVSD ES:EDI,ESI                    ; 00432b14
    MOVSD ES:EDI,ESI                    ; 00432b15
    MOVSD ES:EDI,ESI                    ; 00432b16
    PUSH EDX                            ; 00432b17
    LEA ESI,[ESP + 0x1a8]               ; 00432b18
    LEA EDI,[ESP + 0x13c]               ; 00432b1f
    CALL FUN_00408b80                   ; 00432b26
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x1a8]               ; 00432b2b
    LEA EAX,[ESP + 0x13c]               ; 00432b32
    ADD ESP,0x8                         ; 00432b39
    LEA EDX,[ESP + 0x98]                ; 00432b3c
    MOVSD ES:EDI,ESI                    ; 00432b43
    MOVSD ES:EDI,ESI                    ; 00432b44
    MOVSD ES:EDI,ESI                    ; 00432b45
    CMP EDX,EAX                         ; 00432b46
    JZ 0x00432b74                       ; 00432b48
        ;   XREF to: 00432b74 (CONDITIONAL_JUMP)  ; LAB_00432b74
    MOV EAX,dword ptr [ESP + 0x134]     ; 00432b4a
    MOV dword ptr [ESP + 0x98],EAX      ; 00432b51
    MOV EAX,dword ptr [ESP + 0x138]     ; 00432b58
    MOV dword ptr [ESP + 0x9c],EAX      ; 00432b5f
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00432b66
    MOV dword ptr [ESP + 0xa0],EAX      ; 00432b6d
        ;   Label: LAB_00432b6d
    MOV ECX,dword ptr [0x007e2cec]      ; 00432b74 | DAT_007e2cec
        ;   Label: LAB_00432b74
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432b7a
    PUSH ECX                            ; 00432b7d
    MOV EBX,dword ptr [EAX + 0x2760]    ; 00432b7e
    PUSH EBX                            ; 00432b84
    CALL FUN_0040c840                   ; 00432b85
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00432b8a
    MOV EBX,EAX                         ; 00432b8d
    MOV dword ptr [ESP + 0x21c],EAX     ; 00432b8f
    TEST EAX,EAX                        ; 00432b96
    JNZ 0x00432d78                      ; 00432b98
        ;   XREF to: 00432d78 (CONDITIONAL_JUMP)  ; LAB_00432d78
    MOV EDX,dword ptr [EBP + 0x14]      ; 00432b9e
    MOV EDX,dword ptr [EDX + 0x2760]    ; 00432ba1
    LEA EAX,[ESP + 0xb0]                ; 00432ba7
    ADD EDX,0x20                        ; 00432bae
    CMP EAX,EDX                         ; 00432bb1
    JZ 0x00432bd2                       ; 00432bb3
        ;   XREF to: 00432bd2 (CONDITIONAL_JUMP)  ; LAB_00432bd2
    MOV EAX,dword ptr [EDX]             ; 00432bb5
    MOV dword ptr [ESP + 0xb0],EAX      ; 00432bb7
    MOV EAX,dword ptr [EDX + 0x4]       ; 00432bbe
    MOV dword ptr [ESP + 0xb4],EAX      ; 00432bc1
    MOV EAX,dword ptr [EDX + 0x8]       ; 00432bc8
    MOV dword ptr [ESP + 0xb8],EAX      ; 00432bcb
        ;   Label: LAB_00432bcb
    FLD float ptr [ESP + 0xb0]          ; 00432bd2
        ;   Label: LAB_00432bd2
    FLD float ptr [ESP + 0xb4]          ; 00432bd9
    FLD float ptr [ESP + 0xb8]          ; 00432be0
    LEA EDI,[ESP + 0xe0]                ; 00432be7
    LEA ESI,[ESP + 0xa4]                ; 00432bee
    LEA EAX,[ESP + 0xe0]                ; 00432bf5
    FXCH ST2                            ; 00432bfc
    FSUB float ptr [ESP + 0x98]         ; 00432bfe
    FXCH                                ; 00432c05
    FSUB float ptr [ESP + 0x9c]         ; 00432c07
    FXCH ST2                            ; 00432c0e
    FSUB float ptr [ESP + 0xa0]         ; 00432c10
    FXCH                                ; 00432c17
    FSTP float ptr [ESP + 0xa4]         ; 00432c19
    FXCH                                ; 00432c20
    FSTP float ptr [ESP + 0xa8]         ; 00432c22
    FSTP float ptr [ESP + 0xac]         ; 00432c29
    MOVSD ES:EDI,ESI                    ; 00432c30
    MOVSD ES:EDI,ESI                    ; 00432c31
    MOVSD ES:EDI,ESI                    ; 00432c32
    PUSH EAX                            ; 00432c33
    MOV EDI,dword ptr [EBP + 0x14]      ; 00432c34
    PUSH EDI                            ; 00432c37
    LEA ESI,[ESP + 0x1b4]               ; 00432c38
    CALL FUN_00408b40                   ; 00432c3f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA EDI,[ESP + 0xdc]                ; 00432c44
    LEA ESI,[ESP + 0x1b4]               ; 00432c4b
    ADD ESP,0x8                         ; 00432c52
    LEA EAX,[ESP + 0xd4]                ; 00432c55
    MOVSD ES:EDI,ESI                    ; 00432c5c
    MOVSD ES:EDI,ESI                    ; 00432c5d
    MOVSD ES:EDI,ESI                    ; 00432c5e
    PUSH EAX                            ; 00432c5f
    LEA ESI,[ESP + 0x1bc]               ; 00432c60
    LEA EDI,[ESP + 0x114]               ; 00432c67
    CALL FUN_00576250                   ; 00432c6e
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x1bc]               ; 00432c73
    LEA EAX,[ESP + 0x114]               ; 00432c7a
    ADD ESP,0x4                         ; 00432c81
    LEA EDX,[ESP + 0x80]                ; 00432c84
    MOVSD ES:EDI,ESI                    ; 00432c8b
    MOVSD ES:EDI,ESI                    ; 00432c8c
    MOVSD ES:EDI,ESI                    ; 00432c8d
    CMP EDX,EAX                         ; 00432c8e
    JZ 0x00432cbc                       ; 00432c90
        ;   XREF to: 00432cbc (CONDITIONAL_JUMP)  ; LAB_00432cbc
    MOV EAX,dword ptr [ESP + 0x110]     ; 00432c92
    MOV dword ptr [ESP + 0x80],EAX      ; 00432c99
    MOV EAX,dword ptr [ESP + 0x114]     ; 00432ca0
    MOV dword ptr [ESP + 0x84],EAX      ; 00432ca7
    MOV EAX,dword ptr [ESP + 0x118]     ; 00432cae
    MOV dword ptr [ESP + 0x88],EAX      ; 00432cb5
    FLD float ptr [ESP + 0x84]          ; 00432cbc
        ;   Label: LAB_00432cbc
    FABS                                ; 00432cc3
    FCOMP double ptr [0x005b869e]       ; 00432cc5 | DAT_005b869e
    FNSTSW AX                           ; 00432ccb
    SAHF                                ; 00432ccd
    JBE 0x00432cdd                      ; 00432cce
        ;   XREF to: 00432cdd (CONDITIONAL_JUMP)  ; LAB_00432cdd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432cd0
    MOV dword ptr [EAX + 0x2760],0x0    ; 00432cd3
    FLD float ptr [ESP + 0x80]          ; 00432cdd
        ;   Label: LAB_00432cdd
    FABS                                ; 00432ce4
    FCOMP double ptr [0x005b86a6]       ; 00432ce6 | DAT_005b86a6
    FNSTSW AX                           ; 00432cec
    SAHF                                ; 00432cee
    JBE 0x004323c1                      ; 00432cef
        ;   XREF to: 004323c1 (CONDITIONAL_JUMP)  ; LAB_004323c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432cf5
    MOV dword ptr [EAX + 0x2760],0x0    ; 00432cf8
    JMP 0x004323d1                      ; 00432d02
        ;   XREF to: 004323d1 (UNCONDITIONAL_JUMP)  ; LAB_004323d1
    MOV ESI,0x40b00000                  ; 00432d07
        ;   Label: LAB_00432d07
    LEA EAX,[ESP + 0x194]               ; 00432d0c
    XOR EBX,EBX                         ; 00432d13
    LEA EDI,[ESP + 0x38]                ; 00432d15
    MOV dword ptr [ESP + 0x194],EBX     ; 00432d19
    PUSH EAX                            ; 00432d20
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432d21
    MOV dword ptr [ESP + 0x19c],ESI     ; 00432d24
    PUSH EAX                            ; 00432d2b
    LEA ESI,[ESP + 0x4c]                ; 00432d2c
    MOV dword ptr [ESP + 0x1a4],EBX     ; 00432d30
    CALL FUN_00408b80                   ; 00432d37
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x4c]                ; 00432d3c
    LEA EDX,[ESP + 0x40]                ; 00432d40
    ADD ESP,0x8                         ; 00432d44
    LEA EAX,[ESP + 0x98]                ; 00432d47
    MOVSD ES:EDI,ESI                    ; 00432d4e
    MOVSD ES:EDI,ESI                    ; 00432d4f
    MOVSD ES:EDI,ESI                    ; 00432d50
    CMP EAX,EDX                         ; 00432d51
    JZ 0x00432b74                       ; 00432d53
        ;   XREF to: 00432b74 (CONDITIONAL_JUMP)  ; LAB_00432b74
    MOV EAX,dword ptr [ESP + 0x38]      ; 00432d59
    MOV dword ptr [ESP + 0x98],EAX      ; 00432d5d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00432d64
    MOV dword ptr [ESP + 0x9c],EAX      ; 00432d68
    MOV EAX,dword ptr [ESP + 0x40]      ; 00432d6f
    JMP 0x00432b6d                      ; 00432d73
        ;   XREF to: 00432b6d (UNCONDITIONAL_JUMP)  ; LAB_00432b6d
    PUSH EBX                            ; 00432d78
        ;   Label: LAB_00432d78
    MOV EAX,dword ptr [EAX + 0x154]     ; 00432d79
    CALL dword ptr [EAX + 0x10c]        ; 00432d7f
    ADD ESP,0x4                         ; 00432d85
    TEST EAX,EAX                        ; 00432d88
    JNZ 0x00432e0a                      ; 00432d8a
        ;   XREF to: 00432e0a (CONDITIONAL_JUMP)  ; LAB_00432e0a
    PUSH 0x0                            ; 00432d90
        ;   Label: LAB_00432d90
    MOV EBX,dword ptr [ESP + 0x220]     ; 00432d92
    PUSH 0x5b8683                       ; 00432d99 | = "Bip01 head"
    ADD EBX,0x158                       ; 00432d9e
    PUSH EBX                            ; 00432da4
    CALL FUN_0054eac0                   ; 00432da5
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 00432daa
    PUSH EAX                            ; 00432dad
    CALL FUN_00548090                   ; 00432dae
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00432db3
    CMP EAX,-0x1                        ; 00432db6
    JNZ 0x00432ea3                      ; 00432db9
        ;   XREF to: 00432ea3 (CONDITIONAL_JUMP)  ; LAB_00432ea3
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00432dbf
    LEA EAX,[ESP + 0xb0]                ; 00432dc6
    ADD EDX,0x20                        ; 00432dcd
    CMP EAX,EDX                         ; 00432dd0
    JZ 0x00432df1                       ; 00432dd2
        ;   XREF to: 00432df1 (CONDITIONAL_JUMP)  ; LAB_00432df1
    MOV EAX,dword ptr [EDX]             ; 00432dd4
    MOV dword ptr [ESP + 0xb0],EAX      ; 00432dd6
    MOV EAX,dword ptr [EDX + 0x4]       ; 00432ddd
    MOV dword ptr [ESP + 0xb4],EAX      ; 00432de0
    MOV EAX,dword ptr [EDX + 0x8]       ; 00432de7
    MOV dword ptr [ESP + 0xb8],EAX      ; 00432dea
    FLD float ptr [ESP + 0xb4]          ; 00432df1
        ;   Label: LAB_00432df1
    FADD float ptr [0x005b8696]         ; 00432df8 | DAT_005b8696
    FSTP float ptr [ESP + 0xb4]         ; 00432dfe
    JMP 0x00432bd2                      ; 00432e05
        ;   XREF to: 00432bd2 (UNCONDITIONAL_JUMP)  ; LAB_00432bd2
    LEA EDX,[EBX + 0x158]               ; 00432e0a
        ;   Label: LAB_00432e0a
    LEA EAX,[EBX + 0x24a8]              ; 00432e10
    CMP byte ptr [EAX],0x0              ; 00432e16
    JZ 0x00432d90                       ; 00432e19
        ;   XREF to: 00432d90 (CONDITIONAL_JUMP)  ; LAB_00432d90
    PUSH 0x0                            ; 00432e1f
    PUSH EDX                            ; 00432e21
    LEA ESI,[ESP + 0x1fc]               ; 00432e22
    LEA EDI,[ESP + 0x64]                ; 00432e29
    CALL FUN_0054dcc0                   ; 00432e2d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    ADD ESP,0x8                         ; 00432e32
    LEA EAX,[ESP + 0x5c]                ; 00432e35
    LEA ESI,[ESP + 0x1f4]               ; 00432e39
    PUSH EAX                            ; 00432e40
    MOVSD ES:EDI,ESI                    ; 00432e41
    MOVSD ES:EDI,ESI                    ; 00432e42
    MOVSD ES:EDI,ESI                    ; 00432e43
    PUSH EBX                            ; 00432e44
    LEA ESI,[ESP + 0x154]               ; 00432e45
    LEA EDI,[ESP + 0x1cc]               ; 00432e4c
    CALL FUN_00408b80                   ; 00432e53
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x154]               ; 00432e58
    LEA EDX,[ESP + 0x1cc]               ; 00432e5f
    ADD ESP,0x8                         ; 00432e66
    LEA EAX,[ESP + 0xb0]                ; 00432e69
    MOVSD ES:EDI,ESI                    ; 00432e70
    MOVSD ES:EDI,ESI                    ; 00432e71
    MOVSD ES:EDI,ESI                    ; 00432e72
    CMP EAX,EDX                         ; 00432e73
    JZ 0x00432bd2                       ; 00432e75
        ;   XREF to: 00432bd2 (CONDITIONAL_JUMP)  ; LAB_00432bd2
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00432e7b
    MOV dword ptr [ESP + 0xb0],EAX      ; 00432e82
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00432e89
    MOV dword ptr [ESP + 0xb4],EAX      ; 00432e90
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00432e97
    JMP 0x00432bcb                      ; 00432e9e
        ;   XREF to: 00432bcb (UNCONDITIONAL_JUMP)  ; LAB_00432bcb
    PUSH EAX                            ; 00432ea3
        ;   Label: LAB_00432ea3
    PUSH EBX                            ; 00432ea4
    LEA ESI,[ESP + 0xc4]                ; 00432ea5
    LEA EDI,[ESP + 0x10c]               ; 00432eac
    CALL FUN_0054dcc0                   ; 00432eb3
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0xc4]                ; 00432eb8
    ADD ESP,0x8                         ; 00432ebf
    LEA EAX,[ESP + 0x104]               ; 00432ec2
    MOVSD ES:EDI,ESI                    ; 00432ec9
    MOVSD ES:EDI,ESI                    ; 00432eca
    MOVSD ES:EDI,ESI                    ; 00432ecb
    PUSH EAX                            ; 00432ecc
    MOV ESI,dword ptr [ESP + 0x220]     ; 00432ecd
    PUSH ESI                            ; 00432ed4
    LEA ESI,[ESP + 0x1d8]               ; 00432ed5
    LEA EDI,[ESP + 0x1c]                ; 00432edc
    CALL FUN_00408b80                   ; 00432ee0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x1d8]               ; 00432ee5
    LEA EDX,[ESP + 0x1c]                ; 00432eec
    ADD ESP,0x8                         ; 00432ef0
    LEA EAX,[ESP + 0xb0]                ; 00432ef3
    MOVSD ES:EDI,ESI                    ; 00432efa
    MOVSD ES:EDI,ESI                    ; 00432efb
    MOVSD ES:EDI,ESI                    ; 00432efc
    CMP EAX,EDX                         ; 00432efd
    JZ 0x00432bd2                       ; 00432eff
        ;   XREF to: 00432bd2 (CONDITIONAL_JUMP)  ; LAB_00432bd2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00432f05
    MOV dword ptr [ESP + 0xb0],EAX      ; 00432f09
    MOV EAX,dword ptr [ESP + 0x18]      ; 00432f10
    MOV dword ptr [ESP + 0xb4],EAX      ; 00432f14
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00432f1b
    JMP 0x00432bcb                      ; 00432f1f
        ;   XREF to: 00432bcb (UNCONDITIONAL_JUMP)  ; LAB_00432bcb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432f24
        ;   Label: LAB_00432f24
    MOV dword ptr [EAX + 0x276c],0x0    ; 00432f27
    MOV dword ptr [EAX + 0x2770],0x0    ; 00432f31
    MOV dword ptr [EAX + 0x2768],0x0    ; 00432f3b
    MOV ESP,EBP                         ; 00432f45
    POP EBP                             ; 00432f47
    POP EDI                             ; 00432f48
    POP ESI                             ; 00432f49
    POP EBX                             ; 00432f4a
    RET                                 ; 00432f4b
    FLD float ptr [EBP + 0x18]          ; 00432f4c
        ;   Label: LAB_00432f4c
    FDIV float ptr [0x005b86ae]         ; 00432f4f | DAT_005b86ae
    FADD float ptr [EAX + 0x2770]       ; 00432f55
    FST float ptr [EAX + 0x2770]        ; 00432f5b
    FLD1                                ; 00432f61
    FCOMPP                              ; 00432f63
    FNSTSW AX                           ; 00432f65
    SAHF                                ; 00432f67
    JNC 0x00432f77                      ; 00432f68
        ;   XREF to: 00432f77 (CONDITIONAL_JUMP)  ; LAB_00432f77
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432f6a
    MOV dword ptr [EAX + 0x2770],0x3f800000 ; 00432f6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432f77
        ;   Label: LAB_00432f77
    FLD float ptr [ESP + 0x84]          ; 00432f7a
    FSUB float ptr [EAX + 0x2768]       ; 00432f81
    SUB ESP,0x4                         ; 00432f87
    FSTP float ptr [ESP]                ; 00432f8a
    CALL FUN_0040cfa0                   ; 00432f8d
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [ESP + 0x234],EAX     ; 00432f92
    FLD float ptr [ESP + 0x234]         ; 00432f99
    ADD ESP,0x4                         ; 00432fa0
    FMUL double ptr [0x005b86b6]        ; 00432fa3 | DAT_005b86b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432fa9
    FADD float ptr [EAX + 0x2768]       ; 00432fac
    FSTP float ptr [EAX + 0x2768]       ; 00432fb2
    FLD float ptr [ESP + 0x80]          ; 00432fb8
    FSUB float ptr [EAX + 0x276c]       ; 00432fbf
    SUB ESP,0x4                         ; 00432fc5
    FSTP float ptr [ESP]                ; 00432fc8
    CALL FUN_0040cfa0                   ; 00432fcb
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [ESP + 0x234],EAX     ; 00432fd0
    FLD float ptr [ESP + 0x234]         ; 00432fd7
    ADD ESP,0x4                         ; 00432fde
    FMUL double ptr [0x005b86b6]        ; 00432fe1 | DAT_005b86b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00432fe7
    FADD float ptr [EAX + 0x276c]       ; 00432fea
    FSTP float ptr [EAX + 0x276c]       ; 00432ff0
    MOV ESP,EBP                         ; 00432ff6
    POP EBP                             ; 00432ff8
    POP EDI                             ; 00432ff9
    POP ESI                             ; 00432ffa
    POP EBX                             ; 00432ffb
    RET                                 ; 00432ffc

