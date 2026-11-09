; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_time_c__strftime_FUN_005ba3a4(int param_1,uint param_2,char *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x9f]:1  local_9f
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00481620 at 0048172d
;   shape_edittool.cpp_FUN_0047cb1e at 0047cf49
;
; Referenced Globals:
;   TerminatedCString s_a_b_d_H_M_S_Y_005f1908
;   TerminatedCString s_m_d_y_005f1920
;   undefined1 DAT_005f192c
;   TerminatedCString s_I_M_S_p_005f1930
;   undefined1 DAT_005f193c
;   undefined1 DAT_005f1940
;   undefined1 DAT_005f1944
;   TerminatedCString s_a_b_d_Y_005f1948
;   TerminatedCString s_H_M_S_005f1958
;   undefined4 DAT_0061eeb8
;   undefined1* PTR_s_Sunday_0061eed4 = 005f1858
;   undefined4 DAT_0061eef0
;   undefined1* PTR_s_January_0061ef20 = 005f189c
;   void* PTR_DAT_0061f630 = 0061f52c
;
; Called Functions:
;   crt_stdio.c_IntegerToString_FUN_005bafd8
;   crt_unknown.c_FUN_005ba370
;   crt_unknown.c_FUN_005c1168
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba3a4
        ;   Label: crt_time.c__strftime_FUN_005ba3a4
    PUSH ESI                            ; 005ba3a5
    PUSH EDI                            ; 005ba3a6
    PUSH EBP                            ; 005ba3a7
    SUB ESP,0x90                        ; 005ba3a8
    MOV EBP,dword ptr [ESP + 0xac]      ; 005ba3ae
    MOV EBX,dword ptr [ESP + 0xb0]      ; 005ba3b5
    XOR EDX,EDX                         ; 005ba3bc
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005ba3be
    MOV dword ptr [ESP + 0x84],EDX      ; 005ba3c5
    MOV dword ptr [ESP + 0x88],EAX      ; 005ba3cc
    MOV dword ptr [ESP + 0x8c],EDX      ; 005ba3d3
    MOV AH,byte ptr [EBP]               ; 005ba3da | = "%a %b %d, %Y" | s_I_M_S_p_005f1930 | s_a_b_d_H_M_S_Y_005f1908
        ;   Label: LAB_005ba3da
    MOV ESI,ESP                         ; 005ba3dd
    TEST AH,AH                          ; 005ba3df
    JNZ 0x005ba400                      ; 005ba3e1
        ;   XREF to: 005ba400 (CONDITIONAL_JUMP)  ; LAB_005ba400
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005ba3e3
    TEST EDI,EDI                        ; 005ba3ea
    JZ 0x005ba7ff                       ; 005ba3ec
        ;   XREF to: 005ba7ff (CONDITIONAL_JUMP)  ; LAB_005ba7ff
    XOR EAX,EAX                         ; 005ba3f2
    LEA EBP,[EDI + 0x1]                 ; 005ba3f4
    MOV dword ptr [ESP + 0x8c],EAX      ; 005ba3f7
    JMP 0x005ba3da                      ; 005ba3fe
        ;   XREF to: 005ba3da (UNCONDITIONAL_JUMP)  ; LAB_005ba3da
    CMP AH,0x25                         ; 005ba400
        ;   Label: LAB_005ba400
    JZ 0x005ba415                       ; 005ba403
        ;   XREF to: 005ba415 (CONDITIONAL_JUMP)  ; LAB_005ba415
    MOV AL,AH                           ; 005ba405
    MOV byte ptr [ESP],AH               ; 005ba407
    XOR AL,AH                           ; 005ba40a
    MOV byte ptr [ESP + 0x1],AL         ; 005ba40c
    JMP 0x005ba790                      ; 005ba410
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV AL,byte ptr [EBP + 0x1]         ; 005ba415
        ;   Label: LAB_005ba415
    INC EBP                             ; 005ba418
    CMP AL,0x61                         ; 005ba419
    JC 0x005ba4c1                       ; 005ba41b
        ;   XREF to: 005ba4c1 (CONDITIONAL_JUMP)  ; LAB_005ba4c1
    JBE 0x005ba551                      ; 005ba421
        ;   XREF to: 005ba551 (CONDITIONAL_JUMP)  ; LAB_005ba551
    CMP AL,0x6e                         ; 005ba427
    JC 0x005ba47a                       ; 005ba429
        ;   XREF to: 005ba47a (CONDITIONAL_JUMP)  ; LAB_005ba47a
    JBE 0x005ba641                      ; 005ba42b
        ;   XREF to: 005ba641 (CONDITIONAL_JUMP)  ; LAB_005ba641
    CMP AL,0x77                         ; 005ba431
    JC 0x005ba456                       ; 005ba433
        ;   XREF to: 005ba456 (CONDITIONAL_JUMP)  ; LAB_005ba456
    JBE 0x005ba6bf                      ; 005ba435
        ;   XREF to: 005ba6bf (CONDITIONAL_JUMP)  ; LAB_005ba6bf
    CMP AL,0x79                         ; 005ba43b
    JC 0x005ba718                       ; 005ba43d
        ;   XREF to: 005ba718 (CONDITIONAL_JUMP)  ; LAB_005ba718
    JBE 0x005ba73a                      ; 005ba443
        ;   XREF to: 005ba73a (CONDITIONAL_JUMP)  ; LAB_005ba73a
    CMP AL,0x7a                         ; 005ba449
    JZ 0x005ba773                       ; 005ba44b
        ;   XREF to: 005ba773 (CONDITIONAL_JUMP)  ; LAB_005ba773
    JMP 0x005ba784                      ; 005ba451
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x72                         ; 005ba456
        ;   Label: LAB_005ba456
    JC 0x005ba46d                       ; 005ba458
        ;   XREF to: 005ba46d (CONDITIONAL_JUMP)  ; LAB_005ba46d
    JBE 0x005ba64b                      ; 005ba45a
        ;   XREF to: 005ba64b (CONDITIONAL_JUMP)  ; LAB_005ba64b
    CMP AL,0x74                         ; 005ba460
    JZ 0x005ba68b                       ; 005ba462
        ;   XREF to: 005ba68b (CONDITIONAL_JUMP)  ; LAB_005ba68b
    JMP 0x005ba784                      ; 005ba468
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x70                         ; 005ba46d
        ;   Label: LAB_005ba46d
    JZ 0x005ba65c                       ; 005ba46f
        ;   XREF to: 005ba65c (CONDITIONAL_JUMP)  ; LAB_005ba65c
    JMP 0x005ba784                      ; 005ba475
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x64                         ; 005ba47a
        ;   Label: LAB_005ba47a
    JC 0x005ba4a8                       ; 005ba47c
        ;   XREF to: 005ba4a8 (CONDITIONAL_JUMP)  ; LAB_005ba4a8
    JBE 0x005ba592                      ; 005ba47e
        ;   XREF to: 005ba592 (CONDITIONAL_JUMP)  ; LAB_005ba592
    CMP AL,0x6a                         ; 005ba484
    JC 0x005ba49b                       ; 005ba486
        ;   XREF to: 005ba49b (CONDITIONAL_JUMP)  ; LAB_005ba49b
    JBE 0x005ba5f6                      ; 005ba488
        ;   XREF to: 005ba5f6 (CONDITIONAL_JUMP)  ; LAB_005ba5f6
    CMP AL,0x6d                         ; 005ba48e
    JZ 0x005ba614                       ; 005ba490
        ;   XREF to: 005ba614 (CONDITIONAL_JUMP)  ; LAB_005ba614
    JMP 0x005ba784                      ; 005ba496
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x68                         ; 005ba49b
        ;   Label: LAB_005ba49b
    JZ 0x005ba572                       ; 005ba49d
        ;   XREF to: 005ba572 (CONDITIONAL_JUMP)  ; LAB_005ba572
    JMP 0x005ba784                      ; 005ba4a3
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x62                         ; 005ba4a8
        ;   Label: LAB_005ba4a8
    JBE 0x005ba572                      ; 005ba4aa
        ;   XREF to: 005ba572 (CONDITIONAL_JUMP)  ; LAB_005ba572
    MOV dword ptr [ESP + 0x8c],EBP      ; 005ba4b0
    MOV EBP,0x5f1908                    ; 005ba4b7 | = "%a %b %d %H:%M:%S %Y"
    JMP 0x005ba3da                      ; 005ba4bc
        ;   XREF to: 005ba3da (UNCONDITIONAL_JUMP)  ; LAB_005ba3da
    CMP AL,0x4d                         ; 005ba4c1
        ;   Label: LAB_005ba4c1
    JC 0x005ba514                       ; 005ba4c3
        ;   XREF to: 005ba514 (CONDITIONAL_JUMP)  ; LAB_005ba514
    JBE 0x005ba62b                      ; 005ba4c5
        ;   XREF to: 005ba62b (CONDITIONAL_JUMP)  ; LAB_005ba62b
    CMP AL,0x57                         ; 005ba4cb
    JC 0x005ba4f0                       ; 005ba4cd
        ;   XREF to: 005ba4f0 (CONDITIONAL_JUMP)  ; LAB_005ba4f0
    JBE 0x005ba6d2                      ; 005ba4cf
        ;   XREF to: 005ba6d2 (CONDITIONAL_JUMP)  ; LAB_005ba6d2
    CMP AL,0x59                         ; 005ba4d5
    JC 0x005ba729                       ; 005ba4d7
        ;   XREF to: 005ba729 (CONDITIONAL_JUMP)  ; LAB_005ba729
    JBE 0x005ba759                      ; 005ba4dd
        ;   XREF to: 005ba759 (CONDITIONAL_JUMP)  ; LAB_005ba759
    CMP AL,0x5a                         ; 005ba4e3
    JZ 0x005ba773                       ; 005ba4e5
        ;   XREF to: 005ba773 (CONDITIONAL_JUMP)  ; LAB_005ba773
    JMP 0x005ba784                      ; 005ba4eb
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x54                         ; 005ba4f0
        ;   Label: LAB_005ba4f0
    JC 0x005ba507                       ; 005ba4f2
        ;   XREF to: 005ba507 (CONDITIONAL_JUMP)  ; LAB_005ba507
    JBE 0x005ba729                      ; 005ba4f4
        ;   XREF to: 005ba729 (CONDITIONAL_JUMP)  ; LAB_005ba729
    CMP AL,0x55                         ; 005ba4fa
    JZ 0x005ba695                       ; 005ba4fc
        ;   XREF to: 005ba695 (CONDITIONAL_JUMP)  ; LAB_005ba695
    JMP 0x005ba784                      ; 005ba502
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x53                         ; 005ba507
        ;   Label: LAB_005ba507
    JZ 0x005ba676                       ; 005ba509
        ;   XREF to: 005ba676 (CONDITIONAL_JUMP)  ; LAB_005ba676
    JMP 0x005ba784                      ; 005ba50f
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x42                         ; 005ba514
        ;   Label: LAB_005ba514
    JC 0x005ba53a                       ; 005ba516
        ;   XREF to: 005ba53a (CONDITIONAL_JUMP)  ; LAB_005ba53a
    JBE 0x005ba583                      ; 005ba518
        ;   XREF to: 005ba583 (CONDITIONAL_JUMP)  ; LAB_005ba583
    CMP AL,0x48                         ; 005ba51a
    JC 0x005ba531                       ; 005ba51c
        ;   XREF to: 005ba531 (CONDITIONAL_JUMP)  ; LAB_005ba531
    JBE 0x005ba5b9                      ; 005ba51e
        ;   XREF to: 005ba5b9 (CONDITIONAL_JUMP)  ; LAB_005ba5b9
    CMP AL,0x49                         ; 005ba524
    JZ 0x005ba5cf                       ; 005ba526
        ;   XREF to: 005ba5cf (CONDITIONAL_JUMP)  ; LAB_005ba5cf
    JMP 0x005ba784                      ; 005ba52c
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x44                         ; 005ba531
        ;   Label: LAB_005ba531
    JZ 0x005ba5a8                       ; 005ba533
        ;   XREF to: 005ba5a8 (CONDITIONAL_JUMP)  ; LAB_005ba5a8
    JMP 0x005ba784                      ; 005ba535
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,AH                           ; 005ba53a
        ;   Label: LAB_005ba53a
    JC 0x005ba784                       ; 005ba53c
        ;   XREF to: 005ba784 (CONDITIONAL_JUMP)  ; LAB_005ba784
    JBE 0x005ba784                      ; 005ba542
        ;   XREF to: 005ba784 (CONDITIONAL_JUMP)  ; LAB_005ba784
    CMP AL,0x41                         ; 005ba548
    JZ 0x005ba563                       ; 005ba54a
        ;   XREF to: 005ba563 (CONDITIONAL_JUMP)  ; LAB_005ba563
    JMP 0x005ba784                      ; 005ba54c
        ;   XREF to: 005ba784 (UNCONDITIONAL_JUMP)  ; LAB_005ba784
    MOV EAX,dword ptr [EBX + 0x18]      ; 005ba551
        ;   Label: LAB_005ba551
    MOV ESI,0x61eeb8                    ; 005ba554 | DAT_0061eeb8
    SHL EAX,0x2                         ; 005ba559
    ADD ESI,EAX                         ; 005ba55c
    JMP 0x005ba790                      ; 005ba55e
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV ESI,dword ptr [EBX + 0x18]      ; 005ba563
        ;   Label: LAB_005ba563
    MOV ESI,dword ptr [ESI*0x4 + 0x61eed4] ; 005ba566 | PTR_s_Sunday_0061eed4
    JMP 0x005ba790                      ; 005ba56d
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV ESI,dword ptr [EBX + 0x10]      ; 005ba572
        ;   Label: LAB_005ba572
    SHL ESI,0x2                         ; 005ba575
    ADD ESI,0x61eef0                    ; 005ba578 | DAT_0061eef0
    JMP 0x005ba790                      ; 005ba57e
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV ESI,dword ptr [EBX + 0x10]      ; 005ba583
        ;   Label: LAB_005ba583
    MOV ESI,dword ptr [ESI*0x4 + 0x61ef20] ; 005ba586 | PTR_s_January_0061ef20
    JMP 0x005ba790                      ; 005ba58d
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV EDI,dword ptr [EBX + 0xc]       ; 005ba592
        ;   Label: LAB_005ba592
    PUSH EDI                            ; 005ba595
    LEA EAX,[ESP + 0x4]                 ; 005ba596
    PUSH EAX                            ; 005ba59a
    CALL crt_unknown.c_FUN_005ba370     ; 005ba59b
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba5a0
    JMP 0x005ba790                      ; 005ba5a3
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV dword ptr [ESP + 0x8c],EBP      ; 005ba5a8
        ;   Label: LAB_005ba5a8
    MOV EBP,0x5f1920                    ; 005ba5af | = "%m/%d/%y"
    JMP 0x005ba3da                      ; 005ba5b4
        ;   XREF to: 005ba3da (UNCONDITIONAL_JUMP)  ; LAB_005ba3da
    MOV ECX,dword ptr [EBX + 0x8]       ; 005ba5b9
        ;   Label: LAB_005ba5b9
    PUSH ECX                            ; 005ba5bc
    LEA EAX,[ESP + 0x4]                 ; 005ba5bd
    PUSH EAX                            ; 005ba5c1
    CALL crt_unknown.c_FUN_005ba370     ; 005ba5c2
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba5c7
    JMP 0x005ba790                      ; 005ba5ca
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ba5cf
        ;   Label: LAB_005ba5cf
    CMP EAX,0xc                         ; 005ba5d2
    JLE 0x005ba5da                      ; 005ba5d5
        ;   XREF to: 005ba5da (CONDITIONAL_JUMP)  ; LAB_005ba5da
    SUB EAX,0xc                         ; 005ba5d7
    TEST EAX,EAX                        ; 005ba5da
        ;   Label: LAB_005ba5da
    JNZ 0x005ba5e3                      ; 005ba5dc
        ;   XREF to: 005ba5e3 (CONDITIONAL_JUMP)  ; LAB_005ba5e3
    MOV EAX,0xc                         ; 005ba5de
    PUSH EAX                            ; 005ba5e3
        ;   Label: LAB_005ba5e3
    LEA EAX,[ESP + 0x4]                 ; 005ba5e4
    PUSH EAX                            ; 005ba5e8
    CALL crt_unknown.c_FUN_005ba370     ; 005ba5e9
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba5ee
    JMP 0x005ba790                      ; 005ba5f1
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    PUSH 0xa                            ; 005ba5f6
        ;   Label: LAB_005ba5f6
    LEA EAX,[ESP + 0x4]                 ; 005ba5f8
    PUSH EAX                            ; 005ba5fc
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005ba5fd
    ADD EAX,0x65                        ; 005ba600
    PUSH EAX                            ; 005ba603
    CALL crt_stdio.c_IntegerToString_FUN_005bafd8 ; 005ba604
        ;   XREF to: 005bafd8 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_005bafd8(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 005ba609
    DEC byte ptr [ESP]                  ; 005ba60c
    JMP 0x005ba790                      ; 005ba60f
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV EAX,dword ptr [EBX + 0x10]      ; 005ba614
        ;   Label: LAB_005ba614
    INC EAX                             ; 005ba617
    PUSH EAX                            ; 005ba618
    LEA EAX,[ESP + 0x4]                 ; 005ba619
    PUSH EAX                            ; 005ba61d
    CALL crt_unknown.c_FUN_005ba370     ; 005ba61e
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba623
    JMP 0x005ba790                      ; 005ba626
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV EDX,dword ptr [EBX + 0x4]       ; 005ba62b
        ;   Label: LAB_005ba62b
    PUSH EDX                            ; 005ba62e
    LEA EAX,[ESP + 0x4]                 ; 005ba62f
    PUSH EAX                            ; 005ba633
    CALL crt_unknown.c_FUN_005ba370     ; 005ba634
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba639
    JMP 0x005ba790                      ; 005ba63c
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV ESI,0x5f192c                    ; 005ba641 | DAT_005f192c
        ;   Label: LAB_005ba641
    JMP 0x005ba790                      ; 005ba646
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV dword ptr [ESP + 0x8c],EBP      ; 005ba64b
        ;   Label: LAB_005ba64b
    MOV EBP,0x5f1930                    ; 005ba652 | = "%I:%M:%S %p"
    JMP 0x005ba3da                      ; 005ba657
        ;   XREF to: 005ba3da (UNCONDITIONAL_JUMP)  ; LAB_005ba3da
    CMP dword ptr [EBX + 0x8],0xc       ; 005ba65c
        ;   Label: LAB_005ba65c
    JGE 0x005ba66c                      ; 005ba660
        ;   XREF to: 005ba66c (CONDITIONAL_JUMP)  ; LAB_005ba66c
    MOV ESI,0x5f193c                    ; 005ba662 | DAT_005f193c
    JMP 0x005ba790                      ; 005ba667
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV ESI,0x5f1940                    ; 005ba66c | DAT_005f1940
        ;   Label: LAB_005ba66c
    JMP 0x005ba790                      ; 005ba671
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV EAX,dword ptr [EBX]             ; 005ba676
        ;   Label: LAB_005ba676
    PUSH EAX                            ; 005ba678
    LEA EAX,[ESP + 0x4]                 ; 005ba679
    PUSH EAX                            ; 005ba67d
    CALL crt_unknown.c_FUN_005ba370     ; 005ba67e
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba683
    JMP 0x005ba790                      ; 005ba686
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV ESI,0x5f1944                    ; 005ba68b | DAT_005f1944
        ;   Label: LAB_005ba68b
    JMP 0x005ba790                      ; 005ba690
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005ba695
        ;   Label: LAB_005ba695
    MOV EDI,dword ptr [EBX + 0x18]      ; 005ba698
    ADD EDX,0x7                         ; 005ba69b
    SUB EDX,EDI                         ; 005ba69e
    MOV ECX,0x7                         ; 005ba6a0
    MOV EAX,EDX                         ; 005ba6a5
    SAR EDX,0x1f                        ; 005ba6a7
    IDIV ECX                            ; 005ba6aa
    PUSH EAX                            ; 005ba6ac
    LEA EAX,[ESP + 0x4]                 ; 005ba6ad
    PUSH EAX                            ; 005ba6b1
    CALL crt_unknown.c_FUN_005ba370     ; 005ba6b2
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba6b7
    JMP 0x005ba790                      ; 005ba6ba
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV AL,byte ptr [EBX + 0x18]        ; 005ba6bf
        ;   Label: LAB_005ba6bf
    XOR DH,DH                           ; 005ba6c2
    ADD AL,0x30                         ; 005ba6c4
    MOV byte ptr [ESP + 0x1],DH         ; 005ba6c6
    MOV byte ptr [ESP],AL               ; 005ba6ca
    JMP 0x005ba790                      ; 005ba6cd
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005ba6d2
        ;   Label: LAB_005ba6d2
    MOV EDX,EAX                         ; 005ba6d5
    MOV ECX,0x7                         ; 005ba6d7
    SAR EDX,0x1f                        ; 005ba6dc
    IDIV ECX                            ; 005ba6df
    SUB EDX,dword ptr [EBX + 0x18]      ; 005ba6e1
    ADD EDX,ECX                         ; 005ba6e4
    MOV EAX,EDX                         ; 005ba6e6
    SAR EDX,0x1f                        ; 005ba6e8
    IDIV ECX                            ; 005ba6eb
    MOV EAX,0x6                         ; 005ba6ed
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005ba6f2
    SUB EAX,EDX                         ; 005ba6f5
    ADD EAX,ECX                         ; 005ba6f7
    MOV EDX,EAX                         ; 005ba6f9
    MOV ECX,0x7                         ; 005ba6fb
    SAR EDX,0x1f                        ; 005ba700
    IDIV ECX                            ; 005ba703
    PUSH EAX                            ; 005ba705
    LEA EAX,[ESP + 0x4]                 ; 005ba706
    PUSH EAX                            ; 005ba70a
    CALL crt_unknown.c_FUN_005ba370     ; 005ba70b
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba710
    JMP 0x005ba790                      ; 005ba713
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV dword ptr [ESP + 0x8c],EBP      ; 005ba718
        ;   Label: LAB_005ba718
    MOV EBP,0x5f1948                    ; 005ba71f | = "%a %b %d, %Y"
    JMP 0x005ba3da                      ; 005ba724
        ;   XREF to: 005ba3da (UNCONDITIONAL_JUMP)  ; LAB_005ba3da
    MOV dword ptr [ESP + 0x8c],EBP      ; 005ba729
        ;   Label: LAB_005ba729
    MOV EBP,0x5f1958                    ; 005ba730 | = "%H:%M:%S"
    JMP 0x005ba3da                      ; 005ba735
        ;   XREF to: 005ba3da (UNCONDITIONAL_JUMP)  ; LAB_005ba3da
    MOV EAX,dword ptr [EBX + 0x14]      ; 005ba73a
        ;   Label: LAB_005ba73a
    MOV EDX,EAX                         ; 005ba73d
    MOV ECX,0x64                        ; 005ba73f
    SAR EDX,0x1f                        ; 005ba744
    IDIV ECX                            ; 005ba747
    PUSH EDX                            ; 005ba749
    LEA EAX,[ESP + 0x4]                 ; 005ba74a
    PUSH EAX                            ; 005ba74e
    CALL crt_unknown.c_FUN_005ba370     ; 005ba74f
        ;   XREF to: 005ba370 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba370()
    ADD ESP,0x8                         ; 005ba754
    JMP 0x005ba790                      ; 005ba757
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    PUSH 0xa                            ; 005ba759
        ;   Label: LAB_005ba759
    LEA EAX,[ESP + 0x4]                 ; 005ba75b
    PUSH EAX                            ; 005ba75f
    MOV EAX,dword ptr [EBX + 0x14]      ; 005ba760
    ADD EAX,0x76c                       ; 005ba763
    PUSH EAX                            ; 005ba768
    CALL crt_stdio.c_IntegerToString_FUN_005bafd8 ; 005ba769
        ;   XREF to: 005bafd8 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_005bafd8(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 005ba76e
    JMP 0x005ba790                      ; 005ba771
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    CALL crt_unknown.c_FUN_005c1168     ; 005ba773
        ;   XREF to: 005c1168 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1168()
        ;   Label: LAB_005ba773
    MOV ESI,dword ptr [EBX + 0x20]      ; 005ba778
    MOV ESI,dword ptr [ESI*0x4 + 0x61f630] ; 005ba77b | PTR_DAT_0061f630
    JMP 0x005ba790                      ; 005ba782
        ;   XREF to: 005ba790 (UNCONDITIONAL_JUMP)  ; LAB_005ba790
    MOV AL,byte ptr [EBP]               ; 005ba784
        ;   Label: LAB_005ba784
    XOR CH,CH                           ; 005ba787
    MOV byte ptr [ESP],AL               ; 005ba789
    MOV byte ptr [ESP + 0x1],CH         ; 005ba78c
    MOV EDI,ESI                         ; 005ba790
        ;   Label: LAB_005ba790
    INC EBP                             ; 005ba792
    PUSH ES                             ; 005ba793
    MOV AX,DS                           ; 005ba794
    MOV ES,AX                           ; 005ba796
    SUB ECX,ECX                         ; 005ba798
    DEC ECX                             ; 005ba79a
    XOR EAX,EAX                         ; 005ba79b
    SCASB.REPNE ES:EDI                  ; 005ba79d | DAT_005f1944 | DAT_005f193c | DAT_005f1940
    NOT ECX                             ; 005ba79f
    DEC ECX                             ; 005ba7a1
    POP ES                              ; 005ba7a2
    MOV EDI,dword ptr [ESP + 0x88]      ; 005ba7a3
    MOV EDX,ECX                         ; 005ba7aa
    CMP ECX,EDI                         ; 005ba7ac
    JBE 0x005ba7b2                      ; 005ba7ae
        ;   XREF to: 005ba7b2 (CONDITIONAL_JUMP)  ; LAB_005ba7b2
    MOV EDX,EDI                         ; 005ba7b0
    MOV EDI,dword ptr [ESP + 0xa4]      ; 005ba7b2
        ;   Label: LAB_005ba7b2
    MOV EAX,dword ptr [ESP + 0x84]      ; 005ba7b9
    MOV ECX,EDX                         ; 005ba7c0
    ADD EDI,EAX                         ; 005ba7c2
    PUSH ES                             ; 005ba7c4
    MOV AX,DS                           ; 005ba7c5
    MOV ES,AX                           ; 005ba7c7
    PUSH EDI                            ; 005ba7c9
    MOV EAX,ECX                         ; 005ba7ca
    SHR ECX,0x2                         ; 005ba7cc
    MOVSD.REP ES:EDI,ESI                ; 005ba7cf
    MOV CL,AL                           ; 005ba7d1
    AND CL,0x3                          ; 005ba7d3
    MOVSB.REP ES:EDI,ESI                ; 005ba7d6
    POP EDI                             ; 005ba7d8
    POP ES                              ; 005ba7d9
    MOV ECX,dword ptr [ESP + 0x88]      ; 005ba7da
    MOV ESI,dword ptr [ESP + 0x84]      ; 005ba7e1
    SUB ECX,EDX                         ; 005ba7e8
    ADD ESI,EDX                         ; 005ba7ea
    MOV dword ptr [ESP + 0x88],ECX      ; 005ba7ec
    MOV dword ptr [ESP + 0x84],ESI      ; 005ba7f3
    JMP 0x005ba3da                      ; 005ba7fa
        ;   XREF to: 005ba3da (UNCONDITIONAL_JUMP)  ; LAB_005ba3da
    MOV EAX,dword ptr [ESP + 0x84]      ; 005ba7ff
        ;   Label: LAB_005ba7ff
    CMP EAX,dword ptr [ESP + 0xa8]      ; 005ba806
    JNC 0x005ba826                      ; 005ba80d
        ;   XREF to: 005ba826 (CONDITIONAL_JUMP)  ; LAB_005ba826
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005ba80f
    MOV EBX,dword ptr [ESP + 0x84]      ; 005ba816
    ADD EAX,EBX                         ; 005ba81d
    MOV byte ptr [EAX],0x0              ; 005ba81f
    MOV EAX,EBX                         ; 005ba822
    JMP 0x005ba828                      ; 005ba824
        ;   XREF to: 005ba828 (UNCONDITIONAL_JUMP)  ; LAB_005ba828
    XOR EAX,EAX                         ; 005ba826
        ;   Label: LAB_005ba826
    ADD ESP,0x90                        ; 005ba828
        ;   Label: LAB_005ba828
    POP EBP                             ; 005ba82e
    POP EDI                             ; 005ba82f
    POP ESI                             ; 005ba830
    POP EBX                             ; 005ba831
    RET                                 ; 005ba832

