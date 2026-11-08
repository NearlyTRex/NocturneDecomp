; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d8640(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5)
;
; Local Variables:
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d89f0 at 004d8a0b
;
; Referenced Globals:
;   undefined4 DAT_005c5701
;   TerminatedCString s_engine_ini_cpp_005c5704
;   TerminatedCString s_cIni_writeProfileString_005c5716
;   undefined4 DAT_005c5745
;   TerminatedCString s_engine_ini_cpp_005c5748
;   TerminatedCString s_cIni_writeProfileString_005c575a
;   TerminatedCString s_s_005c578a
;   TerminatedCString s_s_s_005c5790
;   TerminatedCString s_s_s_005c5797
;   TerminatedCString s_s_s_005c579e
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004d8470
;   FUN_004e4330
;   FUN_005a28c0
;   FUN_005a3140
;   FUN_005a3a90
;   FUN_005a3d00
;   FUN_005a3f00
;   FUN_005a43ec
;   FUN_005a54b0
;   FUN_005a5f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8640
        ;   Label: FUN_004d8640
    PUSH ESI                            ; 004d8641
    PUSH EDI                            ; 004d8642
    PUSH EBP                            ; 004d8643
    SUB ESP,0x304                       ; 004d8644
    MOV EBX,dword ptr [ESP + 0x318]     ; 004d864a
    MOV ECX,dword ptr [ESP + 0x324]     ; 004d8651
    PUSH ECX                            ; 004d8658
    MOV ESI,dword ptr [ESP + 0x32c]     ; 004d8659
    PUSH ESI                            ; 004d8660
    MOV EDI,dword ptr [ESP + 0x328]     ; 004d8661
    PUSH EDI                            ; 004d8668
    MOV EBP,dword ptr [ESP + 0x328]     ; 004d8669
    PUSH EBP                            ; 004d8670
    XOR EDX,EDX                         ; 004d8671
    PUSH EBX                            ; 004d8673
    MOV dword ptr [ESP + 0x314],EDX     ; 004d8674
    CALL FUN_004d8470                   ; 004d867b
        ;   XREF to: 004d8470 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8470()
    MOV EBP,EAX                         ; 004d8680
    MOV EAX,dword ptr [EBX]             ; 004d8682
    ADD ESP,0x14                        ; 004d8684
    TEST EAX,EAX                        ; 004d8687
    JNZ 0x004d869b                      ; 004d8689
        ;   XREF to: 004d869b (CONDITIONAL_JUMP)  ; LAB_004d869b
    MOV EAX,0x1                         ; 004d868b
    ADD ESP,0x304                       ; 004d8690
    POP EBP                             ; 004d8696
    POP EDI                             ; 004d8697
    POP ESI                             ; 004d8698
    POP EBX                             ; 004d8699
    RET                                 ; 004d869a
    PUSH 0x5c5701                       ; 004d869b | DAT_005c5701
        ;   Label: LAB_004d869b
    PUSH ESI                            ; 004d86a0
    CALL FUN_005a43ec                   ; 004d86a1
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined FUN_005a43ec()
    ADD ESP,0x8                         ; 004d86a6
    MOV EBX,EAX                         ; 004d86a9
    TEST EAX,EAX                        ; 004d86ab
    JNZ 0x004d86d2                      ; 004d86ad
        ;   XREF to: 004d86d2 (CONDITIONAL_JUMP)  ; LAB_004d86d2
    MOV ECX,0x5c5704                    ; 004d86af | = "..\\engine\\ini.cpp"
    MOV ESI,0x18b                       ; 004d86b4
    PUSH 0x5c5716                       ; 004d86b9 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01d71de0],ECX      ; 004d86be | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004d86c4 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004d86ca
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004d86cf
    MOV ESI,dword ptr [ESP + 0x328]     ; 004d86d2
        ;   Label: LAB_004d86d2
    LEA EDI,[ESP + 0x100]               ; 004d86d9
    PUSH EDI                            ; 004d86e0
    MOV AL,byte ptr [ESI]               ; 004d86e1
        ;   Label: LAB_004d86e1
    MOV byte ptr [EDI],AL               ; 004d86e3
    CMP AL,0x0                          ; 004d86e5
    JZ 0x004d86f9                       ; 004d86e7
        ;   XREF to: 004d86f9 (CONDITIONAL_JUMP)  ; LAB_004d86f9
    MOV AL,byte ptr [ESI + 0x1]         ; 004d86e9
    ADD ESI,0x2                         ; 004d86ec
    MOV byte ptr [EDI + 0x1],AL         ; 004d86ef
    ADD EDI,0x2                         ; 004d86f2
    CMP AL,0x0                          ; 004d86f5
    JNZ 0x004d86e1                      ; 004d86f7
        ;   XREF to: 004d86e1 (CONDITIONAL_JUMP)  ; LAB_004d86e1
    POP EDI                             ; 004d86f9
        ;   Label: LAB_004d86f9
    MOV EDI,dword ptr [ESP + 0x328]     ; 004d86fa
    SUB ECX,ECX                         ; 004d8701
    DEC ECX                             ; 004d8703
    XOR EAX,EAX                         ; 004d8704
    SCASB.REPNE ES:EDI                  ; 004d8706
    NOT ECX                             ; 004d8708
    DEC ECX                             ; 004d870a
    MOV AH,0x78                         ; 004d870b
    PUSH 0x5c5745                       ; 004d870d | DAT_005c5745
    MOV byte ptr [ESP + ECX*0x1 + 0x103],AH ; 004d8712
    LEA EAX,[ESP + 0x104]               ; 004d8719
    PUSH EAX                            ; 004d8720
    CALL FUN_005a43ec                   ; 004d8721
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined FUN_005a43ec()
    ADD ESP,0x8                         ; 004d8726
    MOV ESI,EAX                         ; 004d8729
    TEST EAX,EAX                        ; 004d872b
    JNZ 0x004d8751                      ; 004d872d
        ;   XREF to: 004d8751 (CONDITIONAL_JUMP)  ; LAB_004d8751
    MOV EDI,0x5c5748                    ; 004d872f | = "..\\engine\\ini.cpp"
    MOV EAX,0x18f                       ; 004d8734
    PUSH 0x5c575a                       ; 004d8739 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01d71de0],EDI      ; 004d873e | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004d8744 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004d8749
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004d874e
    TEST EBP,EBP                        ; 004d8751
        ;   Label: LAB_004d8751
    JZ 0x004d877f                       ; 004d8753
        ;   XREF to: 004d877f (CONDITIONAL_JUMP)  ; LAB_004d877f
    TEST EBP,EBP                        ; 004d8755
        ;   Label: LAB_004d8755
    JL 0x004d889e                       ; 004d8757
        ;   XREF to: 004d889e (CONDITIONAL_JUMP)  ; LAB_004d889e
    PUSH EBX                            ; 004d875d
    PUSH 0xff                           ; 004d875e
    LEA EAX,[ESP + 0x8]                 ; 004d8763
    PUSH EAX                            ; 004d8767
    CALL FUN_005a3f00                   ; 004d8768
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 004d876d
    MOV EAX,ESP                         ; 004d8770
    PUSH EAX                            ; 004d8772
    PUSH ESI                            ; 004d8773
    DEC EBP                             ; 004d8774
    CALL FUN_005a3140                   ; 004d8775
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x8                         ; 004d877a
    JMP 0x004d8755                      ; 004d877d
        ;   XREF to: 004d8755 (UNCONDITIONAL_JUMP)  ; LAB_004d8755
    MOV EDX,dword ptr [ESP + 0x31c]     ; 004d877f
        ;   Label: LAB_004d877f
    PUSH EDX                            ; 004d8786
    PUSH 0x5c578a                       ; 004d8787 | = "[%s]\n"
    LEA EAX,[ESP + 0x208]               ; 004d878c
    PUSH EAX                            ; 004d8793
    CALL FUN_005a28c0                   ; 004d8794
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    MOV DL,byte ptr [EBX + 0xc]         ; 004d8799
    ADD ESP,0xc                         ; 004d879c
    TEST DL,0x10                        ; 004d879f
    JNZ 0x004d87c6                      ; 004d87a2
        ;   XREF to: 004d87c6 (CONDITIONAL_JUMP)  ; LAB_004d87c6
    MOV EBP,dword ptr [ESP + 0x324]     ; 004d87a4
    PUSH EBX                            ; 004d87ab
        ;   Label: LAB_004d87ab
    PUSH 0xff                           ; 004d87ac
    LEA EAX,[ESP + 0x8]                 ; 004d87b1
    PUSH EAX                            ; 004d87b5
    CALL FUN_005a3f00                   ; 004d87b6
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 004d87bb
    TEST EAX,EAX                        ; 004d87be
    JNZ 0x004d8849                      ; 004d87c0
        ;   XREF to: 004d8849 (CONDITIONAL_JUMP)  ; LAB_004d8849
    CMP dword ptr [ESP + 0x300],0x0     ; 004d87c6
        ;   Label: LAB_004d87c6
    JNZ 0x004d87ff                      ; 004d87ce
        ;   XREF to: 004d87ff (CONDITIONAL_JUMP)  ; LAB_004d87ff
    LEA EAX,[ESP + 0x200]               ; 004d87d0
    PUSH EAX                            ; 004d87d7
    PUSH ESI                            ; 004d87d8
    CALL FUN_005a3140                   ; 004d87d9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x8                         ; 004d87de
    MOV EDI,dword ptr [ESP + 0x324]     ; 004d87e1
    PUSH EDI                            ; 004d87e8
    MOV EBP,dword ptr [ESP + 0x324]     ; 004d87e9
    PUSH EBP                            ; 004d87f0
    PUSH 0x5c5797                       ; 004d87f1 | = "%s=%s\n"
    PUSH ESI                            ; 004d87f6
    CALL FUN_005a3140                   ; 004d87f7
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 004d87fc
    PUSH EBX                            ; 004d87ff
        ;   Label: LAB_004d87ff
    CALL FUN_005a3a90                   ; 004d8800
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004d8805
    PUSH ESI                            ; 004d8808
    CALL FUN_005a3a90                   ; 004d8809
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004d880e
    MOV EAX,dword ptr [ESP + 0x328]     ; 004d8811
    PUSH EAX                            ; 004d8818
    CALL FUN_005a54b0                   ; 004d8819
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54b0()
    ADD ESP,0x4                         ; 004d881e
    MOV EDX,dword ptr [ESP + 0x328]     ; 004d8821
    PUSH EDX                            ; 004d8828
    LEA EAX,[ESP + 0x104]               ; 004d8829
    PUSH EAX                            ; 004d8830
    CALL FUN_005a5f20                   ; 004d8831
        ;   XREF to: 005a5f20 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5f20()
    MOV EAX,0x1                         ; 004d8836
    ADD ESP,0x8                         ; 004d883b
    ADD ESP,0x304                       ; 004d883e
    POP EBP                             ; 004d8844
    POP EDI                             ; 004d8845
    POP ESI                             ; 004d8846
    POP EBX                             ; 004d8847
    RET                                 ; 004d8848
    MOV EAX,ESP                         ; 004d8849
        ;   Label: LAB_004d8849
    PUSH EAX                            ; 004d884b
    PUSH ESI                            ; 004d884c
    CALL FUN_005a3140                   ; 004d884d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x8                         ; 004d8852
    MOV EAX,ESP                         ; 004d8855
    PUSH EAX                            ; 004d8857
    LEA EAX,[ESP + 0x204]               ; 004d8858
    PUSH EAX                            ; 004d885f
    CALL FUN_005a3d00                   ; 004d8860
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 004d8865
    TEST EAX,EAX                        ; 004d8868
    JNZ 0x004d888f                      ; 004d886a
        ;   XREF to: 004d888f (CONDITIONAL_JUMP)  ; LAB_004d888f
    PUSH EBP                            ; 004d886c
    MOV EAX,dword ptr [ESP + 0x324]     ; 004d886d
    PUSH EAX                            ; 004d8874
    PUSH 0x5c5790                       ; 004d8875 | = "%s=%s\n"
    PUSH ESI                            ; 004d887a
    CALL FUN_005a3140                   ; 004d887b
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    MOV EDX,0x1                         ; 004d8880
    ADD ESP,0x10                        ; 004d8885
    MOV dword ptr [ESP + 0x300],EDX     ; 004d8888
    TEST byte ptr [EBX + 0xc],0x10      ; 004d888f
        ;   Label: LAB_004d888f
    JNZ 0x004d87c6                      ; 004d8893
        ;   XREF to: 004d87c6 (CONDITIONAL_JUMP)  ; LAB_004d87c6
    JMP 0x004d87ab                      ; 004d8899
        ;   XREF to: 004d87ab (UNCONDITIONAL_JUMP)  ; LAB_004d87ab
    MOV ECX,dword ptr [ESP + 0x324]     ; 004d889e
        ;   Label: LAB_004d889e
    PUSH ECX                            ; 004d88a5
    MOV EDI,dword ptr [ESP + 0x324]     ; 004d88a6
    PUSH EDI                            ; 004d88ad
    PUSH 0x5c579e                       ; 004d88ae | = "%s=%s\n"
    PUSH ESI                            ; 004d88b3
    CALL FUN_005a3140                   ; 004d88b4
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 004d88b9
    PUSH EBX                            ; 004d88bc
    PUSH 0xff                           ; 004d88bd
    LEA EAX,[ESP + 0x8]                 ; 004d88c2
    PUSH EAX                            ; 004d88c6
    CALL FUN_005a3f00                   ; 004d88c7
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    MOV DH,byte ptr [EBX + 0xc]         ; 004d88cc
    ADD ESP,0xc                         ; 004d88cf
    TEST DH,0x10                        ; 004d88d2
    JNZ 0x004d87ff                      ; 004d88d5
        ;   XREF to: 004d87ff (CONDITIONAL_JUMP)  ; LAB_004d87ff
        ;   Label: LAB_004d88d5
    PUSH EBX                            ; 004d88db
    PUSH 0xff                           ; 004d88dc
    LEA EAX,[ESP + 0x8]                 ; 004d88e1
    PUSH EAX                            ; 004d88e5
    CALL FUN_005a3f00                   ; 004d88e6
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 004d88eb
    TEST EAX,EAX                        ; 004d88ee
    JZ 0x004d87ff                       ; 004d88f0
        ;   XREF to: 004d87ff (CONDITIONAL_JUMP)  ; LAB_004d87ff
    MOV EAX,ESP                         ; 004d88f6
    PUSH EAX                            ; 004d88f8
    PUSH ESI                            ; 004d88f9
    CALL FUN_005a3140                   ; 004d88fa
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    MOV CL,byte ptr [EBX + 0xc]         ; 004d88ff
    ADD ESP,0x8                         ; 004d8902
    TEST CL,0x10                        ; 004d8905
    JMP 0x004d88d5                      ; 004d8908
        ;   XREF to: 004d88d5 (UNCONDITIONAL_JUMP)  ; LAB_004d88d5

