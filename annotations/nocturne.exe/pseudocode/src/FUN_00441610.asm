; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441610(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   FUN_00441c50 at 00442098
;   FUN_00444920 at 00444b76
;   FUN_00445750 at 0044579e
;   FUN_004a37e0 at 004a3743
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01410280
;   undefined4 DAT_01410284
;   undefined4 DAT_01410288
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_004613b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441610
        ;   Label: FUN_00441610
    PUSH EDI                            ; 00441611
    PUSH EBP                            ; 00441612
    SUB ESP,0x24                        ; 00441613
    MOV EDI,dword ptr [ESP + 0x38]      ; 00441616
    MOV EBP,ESI                         ; 0044161a
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044161c
    MOV EDX,dword ptr [0x005ae704]      ; 00441620 | DAT_005ae704
    PUSH EDX                            ; 00441626 | DAT_01b4d738
    CALL FUN_004613b0                   ; 00441627
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004613b0()
    MOV ECX,EAX                         ; 0044162c
    ADD ESP,0x4                         ; 0044162e
    TEST EAX,EAX                        ; 00441631
    JNZ 0x00441754                      ; 00441633
        ;   XREF to: 00441754 (CONDITIONAL_JUMP)  ; LAB_00441754
    MOV EAX,dword ptr [EDI]             ; 00441639
    SUB EAX,dword ptr [ESI + 0x16c]     ; 0044163b
    MOV EDX,dword ptr [ESI + 0x170]     ; 00441641
    MOV dword ptr [ESP + 0xc],EAX       ; 00441647
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044164b
    SUB EAX,EDX                         ; 0044164e
    MOV ECX,dword ptr [ESI + 0x174]     ; 00441650
    MOV dword ptr [ESP + 0x10],EAX      ; 00441656
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044165a
    SUB EAX,ECX                         ; 0044165d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044165f
    MOV dword ptr [ESP + 0x14],EAX      ; 00441663
    MOV EAX,dword ptr [ESI + 0x180]     ; 00441667
    IMUL EDX                            ; 0044166d
    SHRD EAX,EDX,0x10                   ; 0044166f
    MOV EDX,dword ptr [ESP + 0x10]      ; 00441673
    MOV ECX,EAX                         ; 00441677
    MOV EAX,dword ptr [ESI + 0x18c]     ; 00441679
    IMUL EDX                            ; 0044167f
    SHRD EAX,EDX,0x10                   ; 00441681
    MOV EDX,dword ptr [ESP + 0x14]      ; 00441685
    ADD ECX,EAX                         ; 00441689
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044168b
    IMUL EDX                            ; 00441691
    SHRD EAX,EDX,0x10                   ; 00441693
    ADD ECX,EAX                         ; 00441697
    MOV dword ptr [ESP + 0x20],ECX      ; 00441699
    TEST ECX,ECX                        ; 0044169d
    JG 0x004416bb                       ; 0044169f
        ;   XREF to: 004416bb (CONDITIONAL_JUMP)  ; LAB_004416bb
    MOV EDI,ESP                         ; 004416a1
        ;   Label: LAB_004416a1
    MOV ESI,0x1410280                   ; 004416a3
    MOVSD ES:EDI,ESI                    ; 004416a8 | DAT_01410280
    MOVSD ES:EDI,ESI                    ; 004416a9 | DAT_01410284
    MOVSD ES:EDI,ESI                    ; 004416aa | DAT_01410288
    MOV ESI,ESP                         ; 004416ab
    MOV EDI,EBP                         ; 004416ad
    MOVSD ES:EDI,ESI                    ; 004416af
    MOVSD ES:EDI,ESI                    ; 004416b0
    MOVSD ES:EDI,ESI                    ; 004416b1
    MOV EAX,EBP                         ; 004416b2
    ADD ESP,0x24                        ; 004416b4
    POP EBP                             ; 004416b7
    POP EDI                             ; 004416b8
    POP EBX                             ; 004416b9
    RET                                 ; 004416ba
    MOV EDX,dword ptr [ESP + 0xc]       ; 004416bb
        ;   Label: LAB_004416bb
    MOV EAX,dword ptr [ESI + 0x178]     ; 004416bf
    IMUL EDX                            ; 004416c5
    SHRD EAX,EDX,0x10                   ; 004416c7
    MOV EDX,dword ptr [ESP + 0x10]      ; 004416cb
    MOV ECX,EAX                         ; 004416cf
    MOV EAX,dword ptr [ESI + 0x184]     ; 004416d1
    IMUL EDX                            ; 004416d7
    SHRD EAX,EDX,0x10                   ; 004416d9
    MOV EDX,dword ptr [ESP + 0x14]      ; 004416dd
    ADD ECX,EAX                         ; 004416e1
    MOV EAX,dword ptr [ESI + 0x190]     ; 004416e3
    IMUL EDX                            ; 004416e9
    SHRD EAX,EDX,0x10                   ; 004416eb
    ADD ECX,EAX                         ; 004416ef
    MOV EDI,dword ptr [ESP + 0x20]      ; 004416f1
    MOV dword ptr [ESP + 0x18],ECX      ; 004416f5
    CMP ECX,EDI                         ; 004416f9
    JGE 0x004416a1                      ; 004416fb
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    MOV EBX,EDI                         ; 004416fd
    NEG EBX                             ; 004416ff
    CMP EBX,ECX                         ; 00441701
    JGE 0x004416a1                      ; 00441703
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00441705
    MOV EAX,dword ptr [ESI + 0x17c]     ; 00441709
    IMUL EDX                            ; 0044170f
    SHRD EAX,EDX,0x10                   ; 00441711
    MOV EDX,dword ptr [ESP + 0x10]      ; 00441715
    MOV ECX,EAX                         ; 00441719
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044171b
    IMUL EDX                            ; 00441721
    SHRD EAX,EDX,0x10                   ; 00441723
    MOV EDX,dword ptr [ESP + 0x14]      ; 00441727
    ADD ECX,EAX                         ; 0044172b
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044172d
    IMUL EDX                            ; 00441733
    SHRD EAX,EDX,0x10                   ; 00441735
    ADD ECX,EAX                         ; 00441739
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044173b
    CMP ECX,EDI                         ; 0044173f
    JGE 0x004416a1                      ; 00441741
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    CMP EBX,ECX                         ; 00441747
    JL 0x00441872                       ; 00441749
        ;   XREF to: 00441872 (CONDITIONAL_JUMP)  ; LAB_00441872
    JMP 0x004416a1                      ; 0044174f
        ;   XREF to: 004416a1 (UNCONDITIONAL_JUMP)  ; LAB_004416a1
    SHL EAX,0x2                         ; 00441754
        ;   Label: LAB_00441754
    SUB EAX,ECX                         ; 00441757
    SHL EAX,0x2                         ; 00441759
    LEA EDX,[ESI + EAX*0x1]             ; 0044175c
    MOV EAX,dword ptr [EDI]             ; 0044175f
    MOV EBX,dword ptr [EDX + 0x11ec]    ; 00441761
    SUB EAX,EBX                         ; 00441767
    MOV dword ptr [ESP + 0xc],EAX       ; 00441769
    MOV EBX,dword ptr [EDX + 0x11f0]    ; 0044176d
    MOV EAX,dword ptr [EDI + 0x4]       ; 00441773
    SUB EAX,EBX                         ; 00441776
    SHL ECX,0x2                         ; 00441778
    MOV dword ptr [ESP + 0x10],EAX      ; 0044177b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044177f
    MOV EDI,dword ptr [EDX + 0x11f4]    ; 00441782
    ADD ECX,ESI                         ; 00441788
    SUB EAX,EDI                         ; 0044178a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044178c
    MOV dword ptr [ESP + 0x14],EAX      ; 00441790
    MOV EAX,dword ptr [ECX + 0x128c]    ; 00441794
    IMUL EDX                            ; 0044179a
    SHRD EAX,EDX,0x10                   ; 0044179c
    MOV EDX,dword ptr [ESP + 0x10]      ; 004417a0
    MOV EDI,EAX                         ; 004417a4
    MOV EAX,dword ptr [ECX + 0x12ec]    ; 004417a6
    IMUL EDX                            ; 004417ac
    SHRD EAX,EDX,0x10                   ; 004417ae
    MOV EDX,dword ptr [ESP + 0x14]      ; 004417b2
    ADD EDI,EAX                         ; 004417b6
    MOV EAX,dword ptr [ECX + 0x134c]    ; 004417b8
    IMUL EDX                            ; 004417be
    SHRD EAX,EDX,0x10                   ; 004417c0
    ADD EDI,EAX                         ; 004417c4
    MOV dword ptr [ESP + 0x20],EDI      ; 004417c6
    TEST EDI,EDI                        ; 004417ca
    JLE 0x004416a1                      ; 004417cc
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004417d2
    MOV EAX,dword ptr [ECX + 0x124c]    ; 004417d6
    IMUL EDX                            ; 004417dc
    SHRD EAX,EDX,0x10                   ; 004417de
    MOV EDX,dword ptr [ESP + 0x10]      ; 004417e2
    MOV EDI,EAX                         ; 004417e6
    MOV EAX,dword ptr [ECX + 0x12ac]    ; 004417e8
    IMUL EDX                            ; 004417ee
    SHRD EAX,EDX,0x10                   ; 004417f0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004417f4
    ADD EDI,EAX                         ; 004417f8
    MOV EAX,dword ptr [ECX + 0x130c]    ; 004417fa
    IMUL EDX                            ; 00441800
    SHRD EAX,EDX,0x10                   ; 00441802
    ADD EDI,EAX                         ; 00441806
    MOV EDX,dword ptr [ESP + 0x20]      ; 00441808
    MOV dword ptr [ESP + 0x18],EDI      ; 0044180c
    CMP EDI,EDX                         ; 00441810
    JGE 0x004416a1                      ; 00441812
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    MOV EBX,EDX                         ; 00441818
    NEG EBX                             ; 0044181a
    CMP EBX,EDI                         ; 0044181c
    JGE 0x004416a1                      ; 0044181e
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00441824
    MOV EAX,dword ptr [ECX + 0x126c]    ; 00441828
    IMUL EDX                            ; 0044182e
    SHRD EAX,EDX,0x10                   ; 00441830
    MOV EDX,dword ptr [ESP + 0x10]      ; 00441834
    MOV EDI,EAX                         ; 00441838
    MOV EAX,dword ptr [ECX + 0x12cc]    ; 0044183a
    IMUL EDX                            ; 00441840
    SHRD EAX,EDX,0x10                   ; 00441842
    MOV EDX,dword ptr [ESP + 0x14]      ; 00441846
    ADD EDI,EAX                         ; 0044184a
    MOV EAX,dword ptr [ECX + 0x132c]    ; 0044184c
    IMUL EDX                            ; 00441852
    SHRD EAX,EDX,0x10                   ; 00441854
    ADD EDI,EAX                         ; 00441858
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044185a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0044185e
    CMP EDI,EDX                         ; 00441862
    JGE 0x004416a1                      ; 00441864
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    CMP EBX,EDI                         ; 0044186a
    JGE 0x004416a1                      ; 0044186c
        ;   XREF to: 004416a1 (CONDITIONAL_JUMP)  ; LAB_004416a1
    MOV EBX,dword ptr [ESP + 0x20]      ; 00441872
        ;   Label: LAB_00441872
    MOV EAX,dword ptr [ESP + 0x18]      ; 00441876
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044187a
    IMUL EDX                            ; 00441880
    IDIV EBX                            ; 00441882
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 00441884
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044188a
    ADD EDX,EAX                         ; 0044188e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00441890
    MOV dword ptr [ESP + 0x18],EDX      ; 00441894
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 00441898
    IMUL EDX                            ; 0044189e
    IDIV EBX                            ; 004418a0
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 004418a2
    MOV EDI,ESP                         ; 004418a8
    ADD EDX,EAX                         ; 004418aa
    LEA ESI,[ESP + 0x18]                ; 004418ac
    MOV dword ptr [ESP + 0x1c],EDX      ; 004418b0
    MOVSD ES:EDI,ESI                    ; 004418b4
    MOVSD ES:EDI,ESI                    ; 004418b5
    MOVSD ES:EDI,ESI                    ; 004418b6
    MOV ESI,ESP                         ; 004418b7
    MOV EDI,EBP                         ; 004418b9
    MOVSD ES:EDI,ESI                    ; 004418bb
    MOVSD ES:EDI,ESI                    ; 004418bc
    MOVSD ES:EDI,ESI                    ; 004418bd
    MOV EAX,EBP                         ; 004418be
    ADD ESP,0x24                        ; 004418c0
    POP EBP                             ; 004418c3
    POP EDI                             ; 004418c4
    POP EBX                             ; 004418c5
    RET                                 ; 004418c6

