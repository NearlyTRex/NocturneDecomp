; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00442820(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00440760 at 00440778
;
; Referenced Globals:
;   undefined4 DAT_00609fa4
;   undefined4 DAT_00609fa8
;   undefined4 DAT_00609fac
;   undefined4 DAT_006141c0
;   undefined4 DAT_00b6649c
;   undefined4 DAT_01308800
;   undefined4 DAT_01308804
;   undefined4 DAT_01326d18
;   undefined4 DAT_01326d1c
;   undefined4 DAT_01465920
;   undefined4 DAT_01465924
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   ... and 2 more
;
; Called Functions:
;   FUN_0043b380
;   FUN_0043fef0
;   FUN_004432c0
;   FUN_00443360
;   FUN_0046f9bc
;   FUN_0046fe9a
;   FUN_004708e1
;   FUN_00470dd5
;   FUN_00471103
;   FUN_00471650
;   FUN_00471a60
;   FUN_00471fc4
;
; *****************************************************************************

section .text

    ADD ESP,0x18                        ; 0043fcd1
        ;   Label: LAB_0043fcd1
    POP EBP                             ; 0043fcd4
    POP EDI                             ; 0043fcd5
    POP ESI                             ; 0043fcd6
    POP EBX                             ; 0043fcd7
    RET                                 ; 0043fcd8
    PUSH EBX                            ; 00442820
        ;   Label: FUN_00442820
    PUSH ESI                            ; 00442821
    PUSH EDI                            ; 00442822
    PUSH EBP                            ; 00442823
    SUB ESP,0x18                        ; 00442824
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00442827
    MOV EAX,[0x01c2a370]                ; 0044282b | DAT_01c2a370
    MOV EDX,dword ptr [0x01465924]      ; 00442830 | DAT_01465924
    SHL EAX,0x2                         ; 00442836
    ADD EDX,EAX                         ; 00442839
    XOR ESI,ESI                         ; 0044283b
    MOV dword ptr [0x01465924],EDX      ; 0044283d | DAT_01465924
    CMP EDX,0x10000                     ; 00442843
    JLE 0x0044288a                      ; 00442849
        ;   XREF to: 0044288a (CONDITIONAL_JUMP)  ; LAB_0044288a
    MOV EBP,dword ptr [0x01465920]      ; 0044284b | DAT_01465920
    LEA EBX,[EDX + 0xffff0000]          ; 00442851
    INC EBP                             ; 00442857
    MOV dword ptr [0x01465924],EBX      ; 00442858 | DAT_01465924
    MOV dword ptr [0x01465920],EBP      ; 0044285e | DAT_01465920
    CMP EBP,0x10                        ; 00442864
    JL 0x0044286f                       ; 00442867
        ;   XREF to: 0044286f (CONDITIONAL_JUMP)  ; LAB_0044286f
    MOV dword ptr [0x01465920],ESI      ; 00442869 | DAT_01465920
    MOV ECX,dword ptr [0x01465924]      ; 0044286f | DAT_01465924
        ;   Label: LAB_0044286f
    PUSH ECX                            ; 00442875
    MOV EBX,dword ptr [0x01465920]      ; 00442876 | DAT_01465920
    PUSH EBX                            ; 0044287c
    PUSH 0x146592c                      ; 0044287d
    CALL FUN_0043b380                   ; 00442882
        ;   XREF to: 0043b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b380()
    ADD ESP,0xc                         ; 00442887
    PUSH EDI                            ; 0044288a
        ;   Label: LAB_0044288a
    CALL FUN_0043fef0                   ; 0044288b
        ;   XREF to: 0043fef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043fef0()
    MOV EAX,[0x00609fac]                ; 00442890 | DAT_00609fac
    MOV EBX,dword ptr [EAX*0x4 + 0xb6639c] ; 00442895 | DAT_00b6649c
    MOV EAX,[0x00609fa8]                ; 0044289c | DAT_00609fa8
    MOV EDX,dword ptr [0x006141c0]      ; 004428a1 | DAT_006141c0
    MOV EBP,dword ptr [EAX*0x4 + 0xb6639c] ; 004428a7 | DAT_00b6649c
    MOV EAX,[0x00609fa4]                ; 004428ae | DAT_00609fa4
    ADD ESP,0x4                         ; 004428b3
    AND EBX,0xff                        ; 004428b6
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 004428bc | DAT_00b6649c
    AND EBP,0xff                        ; 004428c3
    AND EAX,0xff                        ; 004428c9
    CMP EDX,0x20                        ; 004428ce
    JNZ 0x004429c2                      ; 004428d1
        ;   XREF to: 004429c2 (CONDITIONAL_JUMP)  ; LAB_004429c2
    MOV CL,byte ptr [0x01c35814]        ; 004428d7 | DAT_01c35814
    SHL EAX,CL                          ; 004428dd
    MOV CL,byte ptr [0x01c35820]        ; 004428df | DAT_01c35820
    SHL EBP,CL                          ; 004428e5
    MOV CL,byte ptr [0x01c3582c]        ; 004428e7 | DAT_01c3582c
    SHL EBX,CL                          ; 004428ed
    OR EAX,EBP                          ; 004428ef
    MOV ECX,EBX                         ; 004428f1
    OR ECX,EAX                          ; 004428f3
    MOV dword ptr [0x01c38b5c],ECX      ; 004428f5 | DAT_01c38b5c
        ;   Label: LAB_004428f5
    CMP dword ptr [0x006141c0],0x10     ; 004428fb | DAT_006141c0
    JNZ 0x00442a7d                      ; 00442902
        ;   XREF to: 00442a7d (CONDITIONAL_JUMP)  ; LAB_00442a7d
    MOV EBP,0x1                         ; 00442908
    MOV EAX,dword ptr [EDI + 0x148]     ; 0044290d
        ;   Label: LAB_0044290d
    DEC EAX                             ; 00442913
    CMP EBP,EAX                         ; 00442914
    JGE 0x0043fcd1                      ; 00442916
        ;   XREF to: 0043fcd1 (CONDITIONAL_JUMP)  ; LAB_0043fcd1
    MOV ECX,dword ptr [0x01326d1c]      ; 0044291c | DAT_01326d1c
    MOV EBX,EBP                         ; 00442922
    MOV EAX,[0x01326d18]                ; 00442924 | DAT_01326d18
    SUB EBX,ECX                         ; 00442929
    ADD EAX,EAX                         ; 0044292b
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0044292d | DAT_01c2a38c
    ADD EBX,EAX                         ; 00442934
    MOV EAX,dword ptr [EDI + 0x144]     ; 00442936
    IMUL EAX,EBP                        ; 0044293c
    MOV dword ptr [ESP + 0x10],EBX      ; 0044293f
    MOV EBX,dword ptr [EDI + 0x158]     ; 00442943
    SHL EAX,0x2                         ; 00442949
    MOV CL,byte ptr [0x01308800]        ; 0044294c | DAT_01308800
    ADD EBX,EAX                         ; 00442952
    MOV EAX,EBP                         ; 00442954
    SAR EAX,CL                          ; 00442956
    IMUL EAX,EAX,0x140                  ; 00442958
    MOV dword ptr [ESP + 0x8],EBX       ; 0044295e
    MOV ECX,0x1326d20                   ; 00442962
    MOV EBX,0xb07f58                    ; 00442967
    ADD ECX,EAX                         ; 0044296c
    ADD EBX,EAX                         ; 0044296e
    MOV dword ptr [ESP + 0x4],ECX       ; 00442970
    TEST EBP,0x1                        ; 00442974
    JNZ 0x004429f4                      ; 0044297a
        ;   XREF to: 004429f4 (CONDITIONAL_JUMP)  ; LAB_004429f4
    CMP dword ptr [EDI + 0x14c],0x1     ; 00442980
    JNZ 0x004429a4                      ; 00442987
        ;   XREF to: 004429a4 (CONDITIONAL_JUMP)  ; LAB_004429a4
    MOV EDX,dword ptr [EDI + 0x144]     ; 00442989
    PUSH EDX                            ; 0044298f
    PUSH ECX                            ; 00442990
    PUSH EBX                            ; 00442991
    MOV EAX,dword ptr [ESP + 0x14]      ; 00442992
    PUSH EAX                            ; 00442996
    MOV EDX,dword ptr [ESP + 0x20]      ; 00442997
    PUSH EDX                            ; 0044299b
    CALL FUN_00471a60                   ; 0044299c
        ;   XREF to: 00471a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00471a60()
    ADD ESP,0x14                        ; 004429a1
    CMP dword ptr [EDI + 0x14c],0x2     ; 004429a4
        ;   Label: LAB_004429a4
    JZ 0x004429d3                       ; 004429ab
        ;   XREF to: 004429d3 (CONDITIONAL_JUMP)  ; LAB_004429d3
    IMUL EBX,ESI,0xc                    ; 004429ad
        ;   Label: LAB_004429ad
    CMP ESI,dword ptr [0x01308804]      ; 004429b0 | DAT_01308804
    JL 0x00442a45                       ; 004429b6
        ;   XREF to: 00442a45 (CONDITIONAL_JUMP)  ; LAB_00442a45
    INC EBP                             ; 004429bc
        ;   Label: LAB_004429bc
    JMP 0x0044290d                      ; 004429bd
        ;   XREF to: 0044290d (UNCONDITIONAL_JUMP)  ; LAB_0044290d
    MOV ECX,EAX                         ; 004429c2
        ;   Label: LAB_004429c2
    SHL EBP,0x8                         ; 004429c4
    SHL ECX,0x10                        ; 004429c7
    OR ECX,EBP                          ; 004429ca
    OR ECX,EBX                          ; 004429cc
    JMP 0x004428f5                      ; 004429ce
        ;   XREF to: 004428f5 (UNCONDITIONAL_JUMP)  ; LAB_004428f5
    MOV EAX,dword ptr [EDI + 0x144]     ; 004429d3
        ;   Label: LAB_004429d3
    PUSH EAX                            ; 004429d9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004429da
    PUSH EDX                            ; 004429de
    PUSH EBX                            ; 004429df
    MOV ECX,dword ptr [ESP + 0x14]      ; 004429e0
    PUSH ECX                            ; 004429e4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004429e5
    PUSH EBX                            ; 004429e9
    CALL FUN_00471103                   ; 004429ea
        ;   XREF to: 00471103 (UNCONDITIONAL_CALL)  ; undefined FUN_00471103()
    ADD ESP,0x14                        ; 004429ef
    JMP 0x004429ad                      ; 004429f2
        ;   XREF to: 004429ad (UNCONDITIONAL_JUMP)  ; LAB_004429ad
    CMP dword ptr [EDI + 0x14c],0x1     ; 004429f4
        ;   Label: LAB_004429f4
    JNZ 0x00442a18                      ; 004429fb
        ;   XREF to: 00442a18 (CONDITIONAL_JUMP)  ; LAB_00442a18
    MOV EDX,dword ptr [EDI + 0x144]     ; 004429fd
    PUSH EDX                            ; 00442a03
    PUSH ECX                            ; 00442a04
    PUSH EBX                            ; 00442a05
    MOV EAX,dword ptr [ESP + 0x14]      ; 00442a06
    PUSH EAX                            ; 00442a0a
    MOV EDX,dword ptr [ESP + 0x20]      ; 00442a0b
    PUSH EDX                            ; 00442a0f
    CALL FUN_00471fc4                   ; 00442a10
        ;   XREF to: 00471fc4 (UNCONDITIONAL_CALL)  ; undefined FUN_00471fc4()
    ADD ESP,0x14                        ; 00442a15
    CMP dword ptr [EDI + 0x14c],0x2     ; 00442a18
        ;   Label: LAB_00442a18
    JNZ 0x004429ad                      ; 00442a1f
        ;   XREF to: 004429ad (CONDITIONAL_JUMP)  ; LAB_004429ad
    MOV EAX,dword ptr [EDI + 0x144]     ; 00442a21
    PUSH EAX                            ; 00442a27
    MOV EDX,dword ptr [ESP + 0x8]       ; 00442a28
    PUSH EDX                            ; 00442a2c
    PUSH EBX                            ; 00442a2d
    MOV ECX,dword ptr [ESP + 0x14]      ; 00442a2e
    PUSH ECX                            ; 00442a32
    MOV EBX,dword ptr [ESP + 0x20]      ; 00442a33
    PUSH EBX                            ; 00442a37
    CALL FUN_00471650                   ; 00442a38
        ;   XREF to: 00471650 (UNCONDITIONAL_CALL)  ; undefined FUN_00471650()
    ADD ESP,0x14                        ; 00442a3d
    JMP 0x004429ad                      ; 00442a40
        ;   XREF to: 004429ad (UNCONDITIONAL_JUMP)  ; LAB_004429ad
    MOV EDX,dword ptr [EBX + 0x1308810] ; 00442a45
        ;   Label: LAB_00442a45
    CMP EBP,EDX                         ; 00442a4b
    JNZ 0x004429bc                      ; 00442a4d
        ;   XREF to: 004429bc (CONDITIONAL_JUMP)  ; LAB_004429bc
    MOV ECX,dword ptr [EBX + 0x1308808] ; 00442a53
    PUSH ECX                            ; 00442a59
    PUSH EDX                            ; 00442a5a
    MOV EDX,dword ptr [EBX + 0x130880c] ; 00442a5b
    PUSH EDX                            ; 00442a61
    PUSH EDI                            ; 00442a62
    ADD EBX,0xc                         ; 00442a63
    INC ESI                             ; 00442a66
    CALL FUN_00443360                   ; 00442a67
        ;   XREF to: 00443360 (UNCONDITIONAL_CALL)  ; undefined FUN_00443360()
    ADD ESP,0x10                        ; 00442a6c
    CMP ESI,dword ptr [0x01308804]      ; 00442a6f | DAT_01308804
    JL 0x00442a45                       ; 00442a75
        ;   XREF to: 00442a45 (CONDITIONAL_JUMP)  ; LAB_00442a45
    INC EBP                             ; 00442a77
    JMP 0x0044290d                      ; 00442a78
        ;   XREF to: 0044290d (UNCONDITIONAL_JUMP)  ; LAB_0044290d
    MOV EBP,0x1                         ; 00442a7d
        ;   Label: LAB_00442a7d
    MOV EAX,dword ptr [EDI + 0x148]     ; 00442a82
        ;   Label: LAB_00442a82
    DEC EAX                             ; 00442a88
    CMP EBP,EAX                         ; 00442a89
    JGE 0x0043fcd1                      ; 00442a8b
        ;   XREF to: 0043fcd1 (CONDITIONAL_JUMP)  ; LAB_0043fcd1
    MOV EBX,dword ptr [0x01326d1c]      ; 00442a91 | DAT_01326d1c
    MOV EAX,EBP                         ; 00442a97
    SUB EAX,EBX                         ; 00442a99
    LEA EBX,[EAX*0x4 + 0x0]             ; 00442a9b
    MOV EAX,[0x01326d18]                ; 00442aa2 | DAT_01326d18
    MOV EBX,dword ptr [EBX + 0x1c2a38c] ; 00442aa7 | DAT_01c2a38c
    SHL EAX,0x2                         ; 00442aad
    ADD EBX,EAX                         ; 00442ab0
    MOV EAX,dword ptr [EDI + 0x144]     ; 00442ab2
    IMUL EAX,EBP                        ; 00442ab8
    MOV dword ptr [ESP + 0xc],EBX       ; 00442abb
    MOV EBX,dword ptr [EDI + 0x158]     ; 00442abf
    SHL EAX,0x2                         ; 00442ac5
    MOV CL,byte ptr [0x01308800]        ; 00442ac8 | DAT_01308800
    ADD EBX,EAX                         ; 00442ace
    MOV EAX,EBP                         ; 00442ad0
    SAR EAX,CL                          ; 00442ad2
    IMUL EAX,EAX,0x140                  ; 00442ad4
    MOV dword ptr [ESP],EBX             ; 00442ada
    MOV ECX,0x1326d20                   ; 00442add
    MOV EBX,0xb07f58                    ; 00442ae2
    ADD ECX,EAX                         ; 00442ae7
    ADD EBX,EAX                         ; 00442ae9
    MOV dword ptr [ESP + 0x14],ECX      ; 00442aeb
    TEST EBP,0x1                        ; 00442aef
    JNZ 0x00442b5a                      ; 00442af5
        ;   XREF to: 00442b5a (CONDITIONAL_JUMP)  ; LAB_00442b5a
    CMP dword ptr [EDI + 0x14c],0x1     ; 00442af7
    JNZ 0x00442b1b                      ; 00442afe
        ;   XREF to: 00442b1b (CONDITIONAL_JUMP)  ; LAB_00442b1b
    MOV EDX,dword ptr [EDI + 0x144]     ; 00442b00
    PUSH EDX                            ; 00442b06
    PUSH ECX                            ; 00442b07
    PUSH EBX                            ; 00442b08
    MOV EAX,dword ptr [ESP + 0xc]       ; 00442b09
    PUSH EAX                            ; 00442b0d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00442b0e
    PUSH EDX                            ; 00442b12
    CALL FUN_004708e1                   ; 00442b13
        ;   XREF to: 004708e1 (UNCONDITIONAL_CALL)  ; undefined FUN_004708e1()
    ADD ESP,0x14                        ; 00442b18
    CMP dword ptr [EDI + 0x14c],0x2     ; 00442b1b
        ;   Label: LAB_00442b1b
    JZ 0x00442b39                       ; 00442b22
        ;   XREF to: 00442b39 (CONDITIONAL_JUMP)  ; LAB_00442b39
    IMUL EBX,ESI,0xc                    ; 00442b24
        ;   Label: LAB_00442b24
    CMP ESI,dword ptr [0x01308804]      ; 00442b27 | DAT_01308804
    JL 0x00442bab                       ; 00442b2d
        ;   XREF to: 00442bab (CONDITIONAL_JUMP)  ; LAB_00442bab
    INC EBP                             ; 00442b33
        ;   Label: LAB_00442b33
    JMP 0x00442a82                      ; 00442b34
        ;   XREF to: 00442a82 (UNCONDITIONAL_JUMP)  ; LAB_00442a82
    MOV EAX,dword ptr [EDI + 0x144]     ; 00442b39
        ;   Label: LAB_00442b39
    PUSH EAX                            ; 00442b3f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00442b40
    PUSH EDX                            ; 00442b44
    PUSH EBX                            ; 00442b45
    MOV ECX,dword ptr [ESP + 0xc]       ; 00442b46
    PUSH ECX                            ; 00442b4a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00442b4b
    PUSH EBX                            ; 00442b4f
    CALL FUN_0046f9bc                   ; 00442b50
        ;   XREF to: 0046f9bc (UNCONDITIONAL_CALL)  ; undefined FUN_0046f9bc()
    ADD ESP,0x14                        ; 00442b55
    JMP 0x00442b24                      ; 00442b58
        ;   XREF to: 00442b24 (UNCONDITIONAL_JUMP)  ; LAB_00442b24
    CMP dword ptr [EDI + 0x14c],0x1     ; 00442b5a
        ;   Label: LAB_00442b5a
    JNZ 0x00442b7e                      ; 00442b61
        ;   XREF to: 00442b7e (CONDITIONAL_JUMP)  ; LAB_00442b7e
    MOV EDX,dword ptr [EDI + 0x144]     ; 00442b63
    PUSH EDX                            ; 00442b69
    PUSH ECX                            ; 00442b6a
    PUSH EBX                            ; 00442b6b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00442b6c
    PUSH EAX                            ; 00442b70
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00442b71
    PUSH EDX                            ; 00442b75
    CALL FUN_00470dd5                   ; 00442b76
        ;   XREF to: 00470dd5 (UNCONDITIONAL_CALL)  ; undefined FUN_00470dd5()
    ADD ESP,0x14                        ; 00442b7b
    CMP dword ptr [EDI + 0x14c],0x2     ; 00442b7e
        ;   Label: LAB_00442b7e
    JNZ 0x00442b24                      ; 00442b85
        ;   XREF to: 00442b24 (CONDITIONAL_JUMP)  ; LAB_00442b24
    MOV EAX,dword ptr [EDI + 0x144]     ; 00442b87
    PUSH EAX                            ; 00442b8d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00442b8e
    PUSH EDX                            ; 00442b92
    PUSH EBX                            ; 00442b93
    MOV ECX,dword ptr [ESP + 0xc]       ; 00442b94
    PUSH ECX                            ; 00442b98
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00442b99
    PUSH EBX                            ; 00442b9d
    CALL FUN_0046fe9a                   ; 00442b9e
        ;   XREF to: 0046fe9a (UNCONDITIONAL_CALL)  ; undefined FUN_0046fe9a()
    ADD ESP,0x14                        ; 00442ba3
    JMP 0x00442b24                      ; 00442ba6
        ;   XREF to: 00442b24 (UNCONDITIONAL_JUMP)  ; LAB_00442b24
    MOV EDX,dword ptr [EBX + 0x1308810] ; 00442bab
        ;   Label: LAB_00442bab
    CMP EBP,EDX                         ; 00442bb1
    JNZ 0x00442b33                      ; 00442bb3
        ;   XREF to: 00442b33 (CONDITIONAL_JUMP)  ; LAB_00442b33
    MOV ECX,dword ptr [EBX + 0x1308808] ; 00442bb9
    PUSH ECX                            ; 00442bbf
    PUSH EDX                            ; 00442bc0
    MOV EDX,dword ptr [EBX + 0x130880c] ; 00442bc1
    PUSH EDX                            ; 00442bc7
    PUSH EDI                            ; 00442bc8
    ADD EBX,0xc                         ; 00442bc9
    INC ESI                             ; 00442bcc
    CALL FUN_004432c0                   ; 00442bcd
        ;   XREF to: 004432c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004432c0()
    ADD ESP,0x10                        ; 00442bd2
    CMP ESI,dword ptr [0x01308804]      ; 00442bd5 | DAT_01308804
    JL 0x00442bab                       ; 00442bdb
        ;   XREF to: 00442bab (CONDITIONAL_JUMP)  ; LAB_00442bab
    INC EBP                             ; 00442bdd
    JMP 0x00442a82                      ; 00442bde
        ;   XREF to: 00442a82 (UNCONDITIONAL_JUMP)  ; LAB_00442a82

