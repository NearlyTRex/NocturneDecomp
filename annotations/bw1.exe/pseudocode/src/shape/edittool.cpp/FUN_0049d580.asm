; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049d580(int param_1,int param_2)
;
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xdb]:1  local_db
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   shape_edittool.cpp_FUN_00494690 at 00494cdc
;   shape_edittool.cpp_FUN_0049b830 at 0049ba72
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493fa9
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493933
;
; Referenced Globals:
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f5b8
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005c12b0
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_font.cpp_FUN_004c1dd0
;   engine_font.cpp_FUN_004c3ea0
;   engine_font.cpp_FUN_004c3f50
;   engine_font.cpp_FUN_004c44e0
;   engine_font.cpp_FUN_004c4510
;   engine_font.cpp_FUN_004c4540
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_005182e0
;   shape_edittool.cpp_FUN_00492a40
;   shape_edittool.cpp_FUN_0049c500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d580
        ;   Label: shape_edittool.cpp_FUN_0049d580
    PUSH ESI                            ; 0049d581
    PUSH EDI                            ; 0049d582
    PUSH EBP                            ; 0049d583
    SUB ESP,0xcc                        ; 0049d584
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0049d58a
    MOV EDX,dword ptr [EBX + 0x18]      ; 0049d591
    PUSH EDX                            ; 0049d594
    MOV ECX,dword ptr [EBX + 0x14]      ; 0049d595
    PUSH ECX                            ; 0049d598
    MOV EDI,dword ptr [EBX + 0x10]      ; 0049d599
    PUSH EDI                            ; 0049d59c
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049d59d
    MOV ESI,dword ptr [0x01c4f00c]      ; 0049d5a0 | DAT_01c4f00c
    PUSH EAX                            ; 0049d5a6
    MOV [0x01c4f00c],EAX                ; 0049d5a7 | DAT_01c4f00c
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d5ac
    PUSH EAX                            ; 0049d5af
    CALL shape_edittool.cpp_FUN_0049c500 ; 0049d5b0
        ;   XREF to: 0049c500 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049c500()
    ADD ESP,0x14                        ; 0049d5b5
    MOV dword ptr [0x01c4f00c],ESI      ; 0049d5b8 | DAT_01c4f00c
    LEA ESI,[EBX + 0x1c]                ; 0049d5be
    PUSH ESI                            ; 0049d5c1
    MOV EDX,dword ptr [0x01c3eb50]      ; 0049d5c2 | DAT_01c3eb50
    PUSH EDX                            ; 0049d5c8
    CALL engine_font.cpp_FUN_004c3ea0   ; 0049d5c9
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0049d5ce
    PUSH ESI                            ; 0049d5d1
    MOV ECX,dword ptr [0x01c3eb50]      ; 0049d5d2 | DAT_01c3eb50
    PUSH ECX                            ; 0049d5d8
    MOV EBP,EAX                         ; 0049d5d9
    CALL engine_font.cpp_FUN_004c3f50   ; 0049d5db
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0049d5e0
    PUSH 0x41                           ; 0049d5e3
    MOV EDI,EAX                         ; 0049d5e5
    MOV EAX,[0x01c3eb50]                ; 0049d5e7 | DAT_01c3eb50
    PUSH EAX                            ; 0049d5ec
    CALL engine_font.cpp_FUN_004c4540   ; 0049d5ed
        ;   XREF to: 004c4540 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4540()
    MOV EDX,dword ptr [EBX + 0x10]      ; 0049d5f2
    ADD EDI,EAX                         ; 0049d5f5
    ADD EDX,dword ptr [EBX + 0x8]       ; 0049d5f7
    SUB EDX,EBP                         ; 0049d5fa
    MOV EAX,EDX                         ; 0049d5fc
    SAR EDX,0x1f                        ; 0049d5fe
    SUB EAX,EDX                         ; 0049d601
    SAR EAX,0x1                         ; 0049d603
    MOV ECX,dword ptr [EBX + 0x14]      ; 0049d605
    MOV EDX,dword ptr [EBX + 0xc]       ; 0049d608
    ADD EDX,ECX                         ; 0049d60b
    MOV EBP,dword ptr [EBX + 0x18]      ; 0049d60d
    SUB EDX,EDI                         ; 0049d610
    ADD EBP,EAX                         ; 0049d612
    MOV EAX,EDX                         ; 0049d614
    SAR EDX,0x1f                        ; 0049d616
    SUB EAX,EDX                         ; 0049d619
    SAR EAX,0x1                         ; 0049d61b
    ADD ESP,0x8                         ; 0049d61d
    PUSH -0x1                           ; 0049d620
    MOV EDI,dword ptr [0x01c3f5b8]      ; 0049d622 | DAT_01c3f5b8
    MOV EDX,dword ptr [EBX + 0x18]      ; 0049d628
    PUSH EDI                            ; 0049d62b
    ADD EDX,EAX                         ; 0049d62c
    PUSH EDX                            ; 0049d62e
    PUSH EBP                            ; 0049d62f
    PUSH ESI                            ; 0049d630
    MOV dword ptr [ESP + 0xdc],EDX      ; 0049d631
    MOV EDX,dword ptr [0x01c3eb50]      ; 0049d638 | DAT_01c3eb50
    PUSH EDX                            ; 0049d63e
    CALL engine_font.cpp_FUN_004c1dd0   ; 0049d63f
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    MOV EAX,[0x01c3f5b8]                ; 0049d644 | DAT_01c3f5b8
    MOV ECX,dword ptr [0x01c3f544]      ; 0049d649 | DAT_01c3f544
    ADD ESP,0x18                        ; 0049d64f
    TEST ECX,ECX                        ; 0049d652
    JNZ 0x0049d6b3                      ; 0049d654
        ;   XREF to: 0049d6b3 (CONDITIONAL_JUMP)  ; LAB_0049d6b3
    MOV [0x01c4f020],EAX                ; 0049d656 | DAT_01c4f020
    CMP dword ptr [ESP + 0xe4],0x0      ; 0049d65b
        ;   Label: LAB_0049d65b
    JNZ 0x0049d6f2                      ; 0049d663
        ;   XREF to: 0049d6f2 (CONDITIONAL_JUMP)  ; LAB_0049d6f2
    MOV EDI,ESP                         ; 0049d669
        ;   Label: LAB_0049d669
    LEA ESI,[EBX + 0x1c]                ; 0049d66b
    PUSH EDI                            ; 0049d66e
    MOV AL,byte ptr [ESI]               ; 0049d66f
        ;   Label: LAB_0049d66f
    MOV byte ptr [EDI],AL               ; 0049d671
    CMP AL,0x0                          ; 0049d673
    JZ 0x0049d687                       ; 0049d675
        ;   XREF to: 0049d687 (CONDITIONAL_JUMP)  ; LAB_0049d687
    MOV AL,byte ptr [ESI + 0x1]         ; 0049d677
    ADD ESI,0x2                         ; 0049d67a
    MOV byte ptr [EDI + 0x1],AL         ; 0049d67d
    ADD EDI,0x2                         ; 0049d680
    CMP AL,0x0                          ; 0049d683
    JNZ 0x0049d66f                      ; 0049d685
        ;   XREF to: 0049d66f (CONDITIONAL_JUMP)  ; LAB_0049d66f
    POP EDI                             ; 0049d687
        ;   Label: LAB_0049d687
    XOR ESI,ESI                         ; 0049d688
    MOV EDI,ESP                         ; 0049d68a
        ;   Label: LAB_0049d68a
    SUB ECX,ECX                         ; 0049d68c
    DEC ECX                             ; 0049d68e
    XOR EAX,EAX                         ; 0049d68f
    SCASB.REPNE ES:EDI                  ; 0049d691
    NOT ECX                             ; 0049d693
    DEC ECX                             ; 0049d695
    CMP ESI,ECX                         ; 0049d696
    JNC 0x0049d71d                      ; 0049d698
        ;   XREF to: 0049d71d (CONDITIONAL_JUMP)  ; LAB_0049d71d
    XOR EAX,EAX                         ; 0049d69e
    MOV AL,byte ptr [ESP + ESI*0x1]     ; 0049d6a0
    PUSH EAX                            ; 0049d6a3
    INC ESI                             ; 0049d6a4
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0049d6a5
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 0049d6aa
    MOV byte ptr [ESP + ESI*0x1 + -0x1],AL ; 0049d6ad
    JMP 0x0049d68a                      ; 0049d6b1
        ;   XREF to: 0049d68a (UNCONDITIONAL_JUMP)  ; LAB_0049d68a
    AND EAX,0xff                        ; 0049d6b3
        ;   Label: LAB_0049d6b3
    MOV EDX,EAX                         ; 0049d6b8
    SHL EAX,0x2                         ; 0049d6ba
    SUB EAX,EDX                         ; 0049d6bd
    XOR ECX,ECX                         ; 0049d6bf
    XOR EDX,EDX                         ; 0049d6c1
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 0049d6c3 | DAT_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049d6c9 | DAT_01c4e9f9
    SHL ECX,0x10                        ; 0049d6cf
    SHL EDX,0x8                         ; 0049d6d2
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049d6d5 | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049d6db
    AND EAX,0xff                        ; 0049d6dd
    OR EAX,EDX                          ; 0049d6e2
    PUSH EAX                            ; 0049d6e4
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049d6e5
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049d6ea
    JMP 0x0049d65b                      ; 0049d6ed
        ;   XREF to: 0049d65b (UNCONDITIONAL_JUMP)  ; LAB_0049d65b
    MOV EAX,dword ptr [EBX + 0x14]      ; 0049d6f2
        ;   Label: LAB_0049d6f2
    PUSH 0x1                            ; 0049d6f5
    SUB EAX,0x4                         ; 0049d6f7
    PUSH EAX                            ; 0049d6fa
    MOV EAX,dword ptr [EBX + 0x10]      ; 0049d6fb
    SUB EAX,0x5                         ; 0049d6fe
    PUSH EAX                            ; 0049d701
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049d702
    ADD EAX,0x3                         ; 0049d705
    PUSH EAX                            ; 0049d708
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d709
    ADD EAX,0x3                         ; 0049d70c
    PUSH EAX                            ; 0049d70f
    CALL shape_edittool.cpp_FUN_00492a40 ; 0049d710
        ;   XREF to: 00492a40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00492a40()
    ADD ESP,0x14                        ; 0049d715
    JMP 0x0049d669                      ; 0049d718
        ;   XREF to: 0049d669 (UNCONDITIONAL_JUMP)  ; LAB_0049d669
    XOR EAX,EAX                         ; 0049d71d
        ;   Label: LAB_0049d71d
    MOV AL,byte ptr [EBX + 0x4]         ; 0049d71f
    PUSH EAX                            ; 0049d722
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0049d723
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 0049d728
    MOV ESI,ESP                         ; 0049d72b
    MOV DL,AL                           ; 0049d72d
    MOV AL,byte ptr [ESI]               ; 0049d72f
        ;   Label: LAB_0049d72f
    CMP AL,DL                           ; 0049d731
    JZ 0x0049d747                       ; 0049d733
        ;   XREF to: 0049d747 (CONDITIONAL_JUMP)  ; LAB_0049d747
    CMP AL,0x0                          ; 0049d735
    JZ 0x0049d745                       ; 0049d737
        ;   XREF to: 0049d745 (CONDITIONAL_JUMP)  ; LAB_0049d745
    INC ESI                             ; 0049d739
    MOV AL,byte ptr [ESI]               ; 0049d73a
    CMP AL,DL                           ; 0049d73c
    JZ 0x0049d747                       ; 0049d73e
        ;   XREF to: 0049d747 (CONDITIONAL_JUMP)  ; LAB_0049d747
    INC ESI                             ; 0049d740
    CMP AL,0x0                          ; 0049d741
    JNZ 0x0049d72f                      ; 0049d743
        ;   XREF to: 0049d72f (CONDITIONAL_JUMP)  ; LAB_0049d72f
    SUB ESI,ESI                         ; 0049d745
        ;   Label: LAB_0049d745
    MOV EDX,ESI                         ; 0049d747
        ;   Label: LAB_0049d747
    TEST ESI,ESI                        ; 0049d749
    JNZ 0x0049d758                      ; 0049d74b
        ;   XREF to: 0049d758 (CONDITIONAL_JUMP)  ; LAB_0049d758
    ADD ESP,0xcc                        ; 0049d74d
    POP EBP                             ; 0049d753
    POP EDI                             ; 0049d754
    POP ESI                             ; 0049d755
    POP EBX                             ; 0049d756
    RET                                 ; 0049d757
    MOV EDI,ESP                         ; 0049d758
        ;   Label: LAB_0049d758
    LEA ESI,[EBX + 0x1c]                ; 0049d75a
    PUSH EDI                            ; 0049d75d
    MOV AL,byte ptr [ESI]               ; 0049d75e
        ;   Label: LAB_0049d75e
    MOV byte ptr [EDI],AL               ; 0049d760
    CMP AL,0x0                          ; 0049d762
    JZ 0x0049d776                       ; 0049d764
        ;   XREF to: 0049d776 (CONDITIONAL_JUMP)  ; LAB_0049d776
    MOV AL,byte ptr [ESI + 0x1]         ; 0049d766
    ADD ESI,0x2                         ; 0049d769
    MOV byte ptr [EDI + 0x1],AL         ; 0049d76c
    ADD EDI,0x2                         ; 0049d76f
    CMP AL,0x0                          ; 0049d772
    JNZ 0x0049d75e                      ; 0049d774
        ;   XREF to: 0049d75e (CONDITIONAL_JUMP)  ; LAB_0049d75e
    POP EDI                             ; 0049d776
        ;   Label: LAB_0049d776
    MOV EAX,ESP                         ; 0049d777
    PUSH EAX                            ; 0049d779
    MOV EDI,dword ptr [0x01c3eb50]      ; 0049d77a | DAT_01c3eb50
    PUSH EDI                            ; 0049d780
    MOV byte ptr [EDX],0x0              ; 0049d781
    CALL engine_font.cpp_FUN_004c3ea0   ; 0049d784
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,dword ptr [0x01c3eb50]      ; 0049d789 | DAT_01c3eb50
    MOV EDX,dword ptr [EDX + 0x41f4]    ; 0049d78f
    LEA EDI,[EAX + EDX*0x1]             ; 0049d795
    XOR EAX,EAX                         ; 0049d798
    ADD ESP,0x8                         ; 0049d79a
    MOV AL,byte ptr [EBX + 0x4]         ; 0049d79d
    PUSH EAX                            ; 0049d7a0
    MOVZX ESI,byte ptr [EBX + 0x1c]     ; 0049d7a1
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0049d7a5
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 0049d7aa
    CMP EAX,ESI                         ; 0049d7ad
    JNZ 0x0049d866                      ; 0049d7af
        ;   XREF to: 0049d866 (CONDITIONAL_JUMP)  ; LAB_0049d866
    XOR EAX,ESI                         ; 0049d7b5
    PUSH 0x41                           ; 0049d7b7
        ;   Label: LAB_0049d7b7
    ADD EBP,EAX                         ; 0049d7b9
    MOV EAX,[0x01c3eb50]                ; 0049d7bb | DAT_01c3eb50
    PUSH EAX                            ; 0049d7c0
    CALL engine_font.cpp_FUN_004c4510   ; 0049d7c1
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049d7c6
    INC EAX                             ; 0049d7c9
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0049d7ca
    MOV ECX,dword ptr [0x01c3f544]      ; 0049d7d1 | DAT_01c3f544
    ADD EDX,EAX                         ; 0049d7d7
    MOV EAX,[0x01c3f5b8]                ; 0049d7d9 | DAT_01c3f5b8
    MOV dword ptr [ESP + 0xc8],EDX      ; 0049d7de
    TEST ECX,ECX                        ; 0049d7e5
    JZ 0x0049d86d                       ; 0049d7e7
        ;   XREF to: 0049d86d (CONDITIONAL_JUMP)  ; LAB_0049d86d
    AND EAX,0xff                        ; 0049d7ed
    MOV EDX,EAX                         ; 0049d7f2
    SHL EAX,0x2                         ; 0049d7f4
    SUB EAX,EDX                         ; 0049d7f7
    XOR ECX,ECX                         ; 0049d7f9
    XOR EDX,EDX                         ; 0049d7fb
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 0049d7fd | DAT_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049d803 | DAT_01c4e9f9
    SHL ECX,0x10                        ; 0049d809
    SHL EDX,0x8                         ; 0049d80c
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049d80f | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049d815
    AND EAX,0xff                        ; 0049d817
    OR EAX,EDX                          ; 0049d81c
    PUSH EAX                            ; 0049d81e
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049d81f
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049d824
    XOR EAX,EAX                         ; 0049d827
        ;   Label: LAB_0049d827
    MOV AL,byte ptr [EBX + 0x4]         ; 0049d829
    PUSH EAX                            ; 0049d82c
    MOV EBX,dword ptr [0x01c3eb50]      ; 0049d82d | DAT_01c3eb50
    PUSH EBX                            ; 0049d833
    CALL engine_font.cpp_FUN_004c44e0   ; 0049d834
        ;   XREF to: 004c44e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c44e0(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c3f544]      ; 0049d839 | DAT_01c3f544
    ADD EAX,EBP                         ; 0049d83f
    ADD ESP,0x8                         ; 0049d841
    DEC EAX                             ; 0049d844
    TEST ESI,ESI                        ; 0049d845
    JZ 0x0049d874                       ; 0049d847
        ;   XREF to: 0049d874 (CONDITIONAL_JUMP)  ; LAB_0049d874
    PUSH EAX                            ; 0049d849
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0049d84a
    PUSH EAX                            ; 0049d851
    PUSH EBP                            ; 0049d852
    CALL engine_mini3d.cpp_FUN_005182e0 ; 0049d853
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005182e0()
    ADD ESP,0xc                         ; 0049d858
    ADD ESP,0xcc                        ; 0049d85b
    POP EBP                             ; 0049d861
    POP EDI                             ; 0049d862
    POP ESI                             ; 0049d863
    POP EBX                             ; 0049d864
    RET                                 ; 0049d865
    MOV EAX,EDI                         ; 0049d866
        ;   Label: LAB_0049d866
    JMP 0x0049d7b7                      ; 0049d868
        ;   XREF to: 0049d7b7 (UNCONDITIONAL_JUMP)  ; LAB_0049d7b7
    MOV [0x01c4f020],EAX                ; 0049d86d | DAT_01c4f020
        ;   Label: LAB_0049d86d
    JMP 0x0049d827                      ; 0049d872
        ;   XREF to: 0049d827 (UNCONDITIONAL_JUMP)  ; LAB_0049d827
    PUSH EAX                            ; 0049d874
        ;   Label: LAB_0049d874
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0049d875
    PUSH EDI                            ; 0049d87c
    PUSH EBP                            ; 0049d87d
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0049d87e
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0049d883
    ADD ESP,0xcc                        ; 0049d886
    POP EBP                             ; 0049d88c
    POP EDI                             ; 0049d88d
    POP ESI                             ; 0049d88e
    POP EBX                             ; 0049d88f
    RET                                 ; 0049d890

