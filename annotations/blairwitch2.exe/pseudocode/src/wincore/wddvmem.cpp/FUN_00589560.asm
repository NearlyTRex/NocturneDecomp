; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589560(void)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[35]:
;   FUN_0047b1f0 at 0047b437
;   FUN_0047b800 at 0047ba76
;   FUN_0047be90 at 0047bf3f
;   FUN_0047c0f0 at 0047c6fe
;   FUN_0047d270 at 0047d4c4
;   FUN_0047dc40 at 0047e0ed
;   FUN_00482250 at 004822e9
;   FUN_004b60c0 at 004b6143
;   FUN_004b6170 at 004b6d7a
;   FUN_004bcbf0 at 004bcdfb
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005ee43c
;   TerminatedCString s_Unable_to_unlock_front_b_005ee453
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_0061e98c
;   undefined4 DAT_00622010
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661af4
;   ... and 1 more
;
; Called Functions:
;   FUN_004e4500
;   FUN_0055ff40
;   FUN_005890c0
;   FUN_00589170
;   FUN_005897e0
;   FUN_0058f270
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589560
        ;   Label: FUN_00589560
    PUSH ESI                            ; 00589561
    PUSH EDI                            ; 00589562
    PUSH EBP                            ; 00589563
    MOV EBP,ESP                         ; 00589564
    SUB ESP,0x7c                        ; 00589566
    CMP dword ptr [0x0061e98c],0x0      ; 00589569 | DAT_0061e98c
    JZ 0x00589632                       ; 00589570
        ;   XREF to: 00589632 (CONDITIONAL_JUMP)  ; LAB_00589632
    MOV ECX,dword ptr [0x01c37788]      ; 00589576 | DAT_01c37788
    TEST ECX,ECX                        ; 0058957c
    JNZ 0x00589646                      ; 0058957e
        ;   XREF to: 00589646 (CONDITIONAL_JUMP)  ; LAB_00589646
    MOV EBX,dword ptr [0x02661af4]      ; 00589584 | DAT_02661af4
    TEST EBX,EBX                        ; 0058958a
    JNZ 0x0058960e                      ; 0058958c
        ;   XREF to: 0058960e (CONDITIONAL_JUMP)  ; LAB_0058960e
    CMP dword ptr [0x02661afc],0x0      ; 00589592 | DAT_02661afc
    JZ 0x00589664                       ; 00589599
        ;   XREF to: 00589664 (CONDITIONAL_JUMP)  ; LAB_00589664
    MOV ESI,dword ptr [0x00622010]      ; 0058959f | DAT_00622010
    MOV dword ptr [0x02661afc],ECX      ; 005895a5 | DAT_02661afc
    CALL FUN_005890c0                   ; 005895ab
        ;   XREF to: 005890c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005890c0()
    MOV EAX,[0x006141bc]                ; 005895b0 | DAT_006141bc
    XOR EDI,EDI                         ; 005895b5
    TEST EAX,EAX                        ; 005895b7
    JLE 0x005895fe                      ; 005895b9
        ;   XREF to: 005895fe (CONDITIONAL_JUMP)  ; LAB_005895fe
    XOR ECX,ECX                         ; 005895bb
    MOV EBX,dword ptr [0x006141b8]      ; 005895bd | DAT_006141b8
        ;   Label: LAB_005895bd
    MOV EAX,dword ptr [ECX + 0x1c2a38c] ; 005895c3 | DAT_01c2a38c | DAT_01c2a390
    XOR EDX,EDX                         ; 005895c9
    TEST EBX,EBX                        ; 005895cb
    JLE 0x005895f0                      ; 005895cd
        ;   XREF to: 005895f0 (CONDITIONAL_JUMP)  ; LAB_005895f0
    MOV BL,byte ptr [ESI]               ; 005895cf
        ;   Label: LAB_005895cf
    MOV byte ptr [EAX],BL               ; 005895d1
    MOV BL,byte ptr [ESI + 0x1]         ; 005895d3
    ADD ESI,0x4                         ; 005895d6
    MOV byte ptr [EAX + 0x1],BL         ; 005895d9
    MOV BL,byte ptr [ESI + -0x2]        ; 005895dc
    INC EDX                             ; 005895df
    MOV byte ptr [EAX + 0x2],BL         ; 005895e0
    MOV EBX,dword ptr [0x006141b8]      ; 005895e3 | DAT_006141b8
    ADD EAX,0x3                         ; 005895e9
    CMP EDX,EBX                         ; 005895ec
    JL 0x005895cf                       ; 005895ee
        ;   XREF to: 005895cf (CONDITIONAL_JUMP)  ; LAB_005895cf
    MOV EBX,dword ptr [0x006141bc]      ; 005895f0 | DAT_006141bc
        ;   Label: LAB_005895f0
    INC EDI                             ; 005895f6
    ADD ECX,0x4                         ; 005895f7
    CMP EDI,EBX                         ; 005895fa
    JL 0x005895bd                       ; 005895fc
        ;   XREF to: 005895bd (CONDITIONAL_JUMP)  ; LAB_005895bd
    MOV ESI,0x1                         ; 005895fe
        ;   Label: LAB_005895fe
    CALL FUN_00589170                   ; 00589603
        ;   XREF to: 00589170 (UNCONDITIONAL_CALL)  ; undefined FUN_00589170()
    MOV dword ptr [0x02661afc],ESI      ; 00589608 | DAT_02661afc
    MOV ESI,dword ptr [0x02661ae4]      ; 0058960e | DAT_02661ae4
        ;   Label: LAB_0058960e
    TEST ESI,ESI                        ; 00589614
    JZ 0x00589632                       ; 00589616
        ;   XREF to: 00589632 (CONDITIONAL_JUMP)  ; LAB_00589632
    PUSH 0x1                            ; 00589618
    PUSH 0x0                            ; 0058961a
    MOV EDX,dword ptr [ESI]             ; 0058961c
    PUSH ESI                            ; 0058961e
    CALL dword ptr [EDX + 0x2c]         ; 0058961f
    TEST EAX,EAX                        ; 00589622
    JZ 0x00589632                       ; 00589624
        ;   XREF to: 00589632 (CONDITIONAL_JUMP)  ; LAB_00589632
    CMP EAX,0x887601c2                  ; 00589626
    JNZ 0x00589632                      ; 0058962b
        ;   XREF to: 00589632 (CONDITIONAL_JUMP)  ; LAB_00589632
    CALL FUN_005897e0                   ; 0058962d
        ;   XREF to: 005897e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005897e0()
    XOR EDI,EDI                         ; 00589632
        ;   Label: LAB_00589632
    MOV dword ptr [0x02661af4],EDI      ; 00589634 | DAT_02661af4
    CALL FUN_0058f270                   ; 0058963a
        ;   XREF to: 0058f270 (UNCONDITIONAL_CALL)  ; undefined FUN_0058f270()
    MOV ESP,EBP                         ; 0058963f
    POP EBP                             ; 00589641
    POP EDI                             ; 00589642
    POP ESI                             ; 00589643
    POP EBX                             ; 00589644
    RET                                 ; 00589645
    PUSH 0x0                            ; 00589646
        ;   Label: LAB_00589646
    CALL FUN_0055ff40                   ; 00589648
        ;   XREF to: 0055ff40 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ff40()
    ADD ESP,0x4                         ; 0058964d
    XOR EDI,EDI                         ; 00589650
    MOV dword ptr [0x02661af4],EDI      ; 00589652 | DAT_02661af4
    CALL FUN_0058f270                   ; 00589658
        ;   XREF to: 0058f270 (UNCONDITIONAL_CALL)  ; undefined FUN_0058f270()
    MOV ESP,EBP                         ; 0058965d
    POP EBP                             ; 0058965f
    POP EDI                             ; 00589660
    POP ESI                             ; 00589661
    POP EBX                             ; 00589662
    RET                                 ; 00589663
    MOV EAX,[0x00622010]                ; 00589664 | DAT_00622010
        ;   Label: LAB_00589664
    MOV dword ptr [EBP + -0x10],EAX     ; 00589669
    MOV EAX,[0x006141c0]                ; 0058966c | DAT_006141c0
    MOV EDX,EAX                         ; 00589671
    SAR EDX,0x1f                        ; 00589673
    SHL EDX,0x3                         ; 00589676
    SBB EAX,EDX                         ; 00589679
    SAR EAX,0x3                         ; 0058967b
    MOV EDX,dword ptr [0x006141b8]      ; 0058967e | DAT_006141b8
    IMUL EDX,EAX                        ; 00589684
    PUSH 0x6c                           ; 00589687
    PUSH ECX                            ; 00589689
    MOV dword ptr [EBP + -0xc],EDX      ; 0058968a
    LEA EAX,[EBP + -0x7c]               ; 0058968d
    PUSH EAX                            ; 00589690
    CALL FUN_005b77c0                   ; 00589691
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00589696
    PUSH EBX                            ; 00589699
    PUSH 0x1                            ; 0058969a
    LEA ECX,[EBP + -0x7c]               ; 0058969c
    MOV EDI,0x6c                        ; 0058969f
    PUSH ECX                            ; 005896a4
    MOV EAX,[0x02661ae4]                ; 005896a5 | DAT_02661ae4
    MOV dword ptr [EBP + -0x7c],EDI     ; 005896aa
    PUSH EBX                            ; 005896ad
    MOV EDX,dword ptr [EAX]             ; 005896ae
    PUSH EAX                            ; 005896b0
    CALL dword ptr [EDX + 0x64]         ; 005896b1
    MOV EDX,EAX                         ; 005896b4
    MOV EAX,dword ptr [EBP + -0x58]     ; 005896b6
    MOV dword ptr [EBP + -0x8],EAX      ; 005896b9
    TEST EDX,EDX                        ; 005896bc
    JNZ 0x00589632                      ; 005896be
        ;   XREF to: 00589632 (CONDITIONAL_JUMP)  ; LAB_00589632
    CMP dword ptr [EBP + -0x8],0x0      ; 005896c4
    JZ 0x00589632                       ; 005896c8
        ;   XREF to: 00589632 (CONDITIONAL_JUMP)  ; LAB_00589632
    MOV ECX,dword ptr [0x006141bc]      ; 005896ce | DAT_006141bc
    MOV dword ptr [EBP + -0x4],EBX      ; 005896d4
    TEST ECX,ECX                        ; 005896d7
    JLE 0x00589742                      ; 005896d9
        ;   XREF to: 00589742 (CONDITIONAL_JUMP)  ; LAB_00589742
    CMP dword ptr [0x01c38b40],0x0      ; 005896db | DAT_01c38b40
        ;   Label: LAB_005896db
    JZ 0x00589790                       ; 005896e2
        ;   XREF to: 00589790 (CONDITIONAL_JUMP)  ; LAB_00589790
    MOV ECX,dword ptr [EBP + 0xfffffff4] ; 005896e8
    MOV ESI,dword ptr [EBP + 0xfffffff0] ; 005896ee
    MOV EDI,dword ptr [EBP + 0xfffffff8] ; 005896f4
    MOVQ MM0,qword ptr [ESI]            ; 005896fa
        ;   Label: LAB_005896fa
    MOVQ MM1,qword ptr [ESI + 0x8]      ; 005896fd
    MOVQ MM2,qword ptr [ESI + 0x10]     ; 00589701
    MOVQ MM3,qword ptr [ESI + 0x18]     ; 00589705
    MOVQ qword ptr [EDI],MM0            ; 00589709
    MOVQ qword ptr [EDI + 0x8],MM1      ; 0058970c
    MOVQ qword ptr [EDI + 0x10],MM2     ; 00589710
    MOVQ qword ptr [EDI + 0x18],MM3     ; 00589714
    ADD ESI,0x20                        ; 00589718
    ADD EDI,0x20                        ; 0058971b
    SUB ECX,0x20                        ; 0058971e
    JG 0x005896fa                       ; 00589721
        ;   XREF to: 005896fa (CONDITIONAL_JUMP)  ; LAB_005896fa
    EMMS                                ; 00589723
    MOV EAX,dword ptr [EBP + -0xc]      ; 00589725
        ;   Label: LAB_00589725
    ADD dword ptr [EBP + -0x10],EAX     ; 00589728
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0058972b
    ADD dword ptr [EBP + -0x8],EAX      ; 0058972e
    MOV EBX,dword ptr [EBP + -0x4]      ; 00589731
    INC EBX                             ; 00589734
    MOV ESI,dword ptr [0x006141bc]      ; 00589735 | DAT_006141bc
    MOV dword ptr [EBP + -0x4],EBX      ; 0058973b
    CMP EBX,ESI                         ; 0058973e
    JL 0x005896db                       ; 00589740
        ;   XREF to: 005896db (CONDITIONAL_JUMP)  ; LAB_005896db
    PUSH 0x0                            ; 00589742
        ;   Label: LAB_00589742
    MOV EAX,[0x02661ae4]                ; 00589744 | DAT_02661ae4
    PUSH EAX                            ; 00589749
    MOV EDX,dword ptr [EAX]             ; 0058974a
    CALL dword ptr [EDX + 0x80]         ; 0058974c
    TEST EAX,EAX                        ; 00589752
    JZ 0x00589632                       ; 00589754
        ;   XREF to: 00589632 (CONDITIONAL_JUMP)  ; LAB_00589632
    MOV EDI,0x5ee43c                    ; 0058975a | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0x356                       ; 0058975f
    PUSH 0x5ee453                       ; 00589764 | = "Unable to unlock front buffer"
    MOV dword ptr [0x01d046a0],EDI      ; 00589769 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0058976f | DAT_01d046a4
    CALL FUN_004e4500                   ; 00589774
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00589779
    XOR EDI,EDI                         ; 0058977c
    MOV dword ptr [0x02661af4],EDI      ; 0058977e | DAT_02661af4
    CALL FUN_0058f270                   ; 00589784
        ;   XREF to: 0058f270 (UNCONDITIONAL_CALL)  ; undefined FUN_0058f270()
    MOV ESP,EBP                         ; 00589789
    POP EBP                             ; 0058978b
    POP EDI                             ; 0058978c
    POP ESI                             ; 0058978d
    POP EBX                             ; 0058978e
    RET                                 ; 0058978f
    MOV ECX,dword ptr [EBP + -0xc]      ; 00589790
        ;   Label: LAB_00589790
    MOV ESI,dword ptr [EBP + -0x10]     ; 00589793
    MOV EDI,dword ptr [EBP + -0x8]      ; 00589796
    PUSH EDI                            ; 00589799
    MOV EAX,ECX                         ; 0058979a
    SHR ECX,0x2                         ; 0058979c
    MOVSD.REP ES:EDI,ESI                ; 0058979f
    MOV CL,AL                           ; 005897a1
    AND CL,0x3                          ; 005897a3
    MOVSB.REP ES:EDI,ESI                ; 005897a6
    POP EDI                             ; 005897a8
    JMP 0x00589725                      ; 005897a9
        ;   XREF to: 00589725 (UNCONDITIONAL_JUMP)  ; LAB_00589725

