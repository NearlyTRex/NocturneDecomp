; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_terrain_cpp_FUN_0057bb80(int *param_1,byte *param_2,int *param_3)
;
;
; XREF[1]:
;   core_terrain.cpp_FUN_0057ba20 at 0057ba3a
;
; Referenced Globals:
;   undefined1* switchdataD_0057ba4c = 0057bdf0
;   undefined1* switchdataD_0057baa8 = 0057bd43
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   core_terrain.cpp_FUN_0057ccc0
;   crt_ctype.c_toupper_FUN_005b8e40
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c__strtod_FUN_005bae68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057bb80
        ;   Label: core_terrain.cpp_FUN_0057bb80
    PUSH ESI                            ; 0057bb81
    PUSH EDI                            ; 0057bb82
    PUSH EBP                            ; 0057bb83
    MOV EBP,ESP                         ; 0057bb84
    SUB ESP,0xd8                        ; 0057bb86
    AND ESP,0xfffffff8                  ; 0057bb8c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0057bb8f
    XOR EDX,EDX                         ; 0057bb92
    MOV AH,byte ptr [EBX]               ; 0057bb94
    MOV dword ptr [ESP + 0xbc],EDX      ; 0057bb96
    MOV dword ptr [ESP + 0xd0],EDX      ; 0057bb9d
    MOV dword ptr [ESP + 0xd4],EDX      ; 0057bba4
    MOV dword ptr [ESP + 0xc0],EDX      ; 0057bbab
    TEST AH,AH                          ; 0057bbb2
    JZ 0x0057bbf4                       ; 0057bbb4
        ;   XREF to: 0057bbf4 (CONDITIONAL_JUMP)  ; LAB_0057bbf4
    CMP dword ptr [ESP + 0xd0],0x0      ; 0057bbb6
        ;   Label: LAB_0057bbb6
    JNZ 0x0057bbf4                      ; 0057bbbe
        ;   XREF to: 0057bbf4 (CONDITIONAL_JUMP)  ; LAB_0057bbf4
    MOV AL,byte ptr [EBX]               ; 0057bbc0
    XOR ECX,ECX                         ; 0057bbc2
    INC AL                              ; 0057bbc4
    MOV CL,AL                           ; 0057bbc6
    MOV DH,byte ptr [ECX + 0x61ed94]    ; 0057bbc8 | DAT_0061ed94
    LEA EAX,[EBX + 0x1]                 ; 0057bbce
    TEST DH,0x2                         ; 0057bbd1
    JZ 0x0057bc3b                       ; 0057bbd4
        ;   XREF to: 0057bc3b (CONDITIONAL_JUMP)  ; LAB_0057bc3b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057bbd6
    PUSH EDX                            ; 0057bbd9
    MOV EBX,EAX                         ; 0057bbda
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057bbdc
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057bbe1
    TEST EAX,EAX                        ; 0057bbe4
    JL 0x0057bc32                       ; 0057bbe6
        ;   XREF to: 0057bc32 (CONDITIONAL_JUMP)  ; LAB_0057bc32
    ADD dword ptr [ESP + 0xd4],EAX      ; 0057bbe8
    CMP byte ptr [EBX],0x0              ; 0057bbef
        ;   Label: LAB_0057bbef
    JNZ 0x0057bbb6                      ; 0057bbf2
        ;   XREF to: 0057bbb6 (CONDITIONAL_JUMP)  ; LAB_0057bbb6
    MOV EBX,dword ptr [ESP + 0xd0]      ; 0057bbf4
        ;   Label: LAB_0057bbf4
    CMP EBX,-0x1                        ; 0057bbfb
    JL 0x0057bc24                       ; 0057bbfe
        ;   XREF to: 0057bc24 (CONDITIONAL_JUMP)  ; LAB_0057bc24
    TEST EBX,EBX                        ; 0057bc00
    JZ 0x0057cc04                       ; 0057bc02
        ;   XREF to: 0057cc04 (CONDITIONAL_JUMP)  ; LAB_0057cc04
    CMP dword ptr [ESP + 0xc0],0x0      ; 0057bc08
    JNZ 0x0057cc04                      ; 0057bc10
        ;   XREF to: 0057cc04 (CONDITIONAL_JUMP)  ; LAB_0057cc04
    CMP dword ptr [ESP + 0xbc],0x0      ; 0057bc16
    JNZ 0x0057cc04                      ; 0057bc1e
        ;   XREF to: 0057cc04 (CONDITIONAL_JUMP)  ; LAB_0057cc04
    MOV EDI,0xffffffff                  ; 0057bc24
        ;   Label: LAB_0057bc24
    MOV EAX,EDI                         ; 0057bc29
    MOV ESP,EBP                         ; 0057bc2b
    POP EBP                             ; 0057bc2d
    POP EDI                             ; 0057bc2e
    POP ESI                             ; 0057bc2f
    POP EBX                             ; 0057bc30
    RET                                 ; 0057bc31
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057bc32
        ;   Label: LAB_0057bc32
    JMP 0x0057bbf4                      ; 0057bc39
        ;   XREF to: 0057bbf4 (UNCONDITIONAL_JUMP)  ; LAB_0057bbf4
    MOV CL,byte ptr [EBX]               ; 0057bc3b
        ;   Label: LAB_0057bc3b
    CMP CL,0x25                         ; 0057bc3d
    JNZ 0x0057bc4a                      ; 0057bc40
        ;   XREF to: 0057bc4a (CONDITIONAL_JUMP)  ; LAB_0057bc4a
    MOV CH,byte ptr [EAX]               ; 0057bc42
    MOV EBX,EAX                         ; 0057bc44
    CMP CH,CL                           ; 0057bc46
    JNZ 0x0057bcab                      ; 0057bc48
        ;   XREF to: 0057bcab (CONDITIONAL_JUMP)  ; LAB_0057bcab
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057bc4a
        ;   Label: LAB_0057bc4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bc4d
    PUSH ESI                            ; 0057bc50
    MOV EAX,dword ptr [EAX]             ; 0057bc51
    CALL dword ptr [EAX + 0x4]          ; 0057bc53
    MOVZX ESI,byte ptr [EBX]            ; 0057bc56
    ADD ESP,0x4                         ; 0057bc59
    CMP EAX,ESI                         ; 0057bc5c
    JNZ 0x0057bc75                      ; 0057bc5e
        ;   XREF to: 0057bc75 (CONDITIONAL_JUMP)  ; LAB_0057bc75
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057bc60
    INC EAX                             ; 0057bc67
    INC EBX                             ; 0057bc68
    MOV dword ptr [ESP + 0xd4],EAX      ; 0057bc69
    JMP 0x0057bbef                      ; 0057bc70
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    TEST EAX,EAX                        ; 0057bc75
        ;   Label: LAB_0057bc75
    JGE 0x0057bc85                      ; 0057bc77
        ;   XREF to: 0057bc85 (CONDITIONAL_JUMP)  ; LAB_0057bc85
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057bc79
    JMP 0x0057bbf4                      ; 0057bc80
        ;   XREF to: 0057bbf4 (UNCONDITIONAL_JUMP)  ; LAB_0057bbf4
    PUSH EAX                            ; 0057bc85
        ;   Label: LAB_0057bc85
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057bc86
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057bc89
    PUSH EDI                            ; 0057bc8c
    MOV EDX,dword ptr [EDX]             ; 0057bc8d
    CALL dword ptr [EDX + 0x8]          ; 0057bc8f
    ADD ESP,0x8                         ; 0057bc92
    TEST EAX,EAX                        ; 0057bc95
    JNZ 0x0057bbf4                      ; 0057bc97
        ;   XREF to: 0057bbf4 (CONDITIONAL_JUMP)  ; LAB_0057bbf4
    MOV EDI,0xffffffff                  ; 0057bc9d
    MOV EAX,EDI                         ; 0057bca2
    MOV ESP,EBP                         ; 0057bca4
    POP EBP                             ; 0057bca6
    POP EDI                             ; 0057bca7
    POP ESI                             ; 0057bca8
    POP EBX                             ; 0057bca9
    RET                                 ; 0057bcaa
    MOV ECX,0x1                         ; 0057bcab
        ;   Label: LAB_0057bcab
    XOR EDX,EDX                         ; 0057bcb0
    MOV EDI,0x7fffffff                  ; 0057bcb2
    MOV dword ptr [ESP + 0x9c],EDX      ; 0057bcb7
    MOV dword ptr [ESP + 0xc4],EDX      ; 0057bcbe
    MOV dword ptr [ESP + 0xa0],EDX      ; 0057bcc5
    MOV dword ptr [ESP + 0x98],EDX      ; 0057bccc
    MOV DL,byte ptr [EAX]               ; 0057bcd3
    MOV dword ptr [ESP + 0xc8],ECX      ; 0057bcd5
    TEST DL,DL                          ; 0057bcdc
    JZ 0x0057bd24                       ; 0057bcde
        ;   XREF to: 0057bd24 (CONDITIONAL_JUMP)  ; LAB_0057bd24
    XOR EAX,EAX                         ; 0057bce0
        ;   Label: LAB_0057bce0
    MOV AL,byte ptr [EBX]               ; 0057bce2
    XOR ESI,ESI                         ; 0057bce4
    CMP EAX,0x4c                        ; 0057bce6
    JNC 0x0057be59                      ; 0057bce9
        ;   XREF to: 0057be59 (CONDITIONAL_JUMP)  ; LAB_0057be59
    CMP EAX,0x2a                        ; 0057bcef
    JNC 0x0057be76                      ; 0057bcf2
        ;   XREF to: 0057be76 (CONDITIONAL_JUMP)  ; LAB_0057be76
    MOV CL,AL                           ; 0057bcf8
        ;   Label: LAB_0057bcf8
    INC CL                              ; 0057bcfa
    AND ECX,0xff                        ; 0057bcfc
    TEST byte ptr [ECX + 0x61ed94],0x20 ; 0057bd02 | DAT_0061ed94
    JZ 0x0057bd24                       ; 0057bd09
        ;   XREF to: 0057bd24 (CONDITIONAL_JUMP)  ; LAB_0057bd24
    SUB EAX,0x30                        ; 0057bd0b
    CMP EDI,0x7fffffff                  ; 0057bd0e
    JNZ 0x0057be4f                      ; 0057bd14
        ;   XREF to: 0057be4f (CONDITIONAL_JUMP)  ; LAB_0057be4f
    MOV EDI,EAX                         ; 0057bd1a
    TEST ESI,ESI                        ; 0057bd1c
        ;   Label: LAB_0057bd1c
    JZ 0x0057be82                       ; 0057bd1e
        ;   XREF to: 0057be82 (CONDITIONAL_JUMP)  ; LAB_0057be82
    XOR EAX,EAX                         ; 0057bd24
        ;   Label: LAB_0057bd24
    MOV AL,byte ptr [EBX]               ; 0057bd26
    MOV dword ptr [ESP + 0xb0],EAX      ; 0057bd28
    SUB EAX,0x44                        ; 0057bd2f
    INC EBX                             ; 0057bd32
    CMP EAX,0x34                        ; 0057bd33
    JA 0x0057cbfe                       ; 0057bd36
        ;   XREF to: 0057cbfe (CONDITIONAL_JUMP)  ; caseD_77
    JMP dword ptr [EAX*0x4 + 0x57baa8]  ; 0057bd3c | caseD_64 | caseD_67 | caseD_77
        ;   Label: switchD
    MOV dword ptr [ESP + 0xcc],0xa      ; 0057bd43
        ;   Label: caseD_44
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057bd4e
        ;   Label: LAB_0057bd4e
    PUSH EDX                            ; 0057bd51
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057bd52
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057bd57
    TEST EAX,EAX                        ; 0057bd5a
    JL 0x0057c3b4                       ; 0057bd5c
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    ADD dword ptr [ESP + 0xd4],EAX      ; 0057bd62
    TEST EDI,EDI                        ; 0057bd69
    JLE 0x0057bdad                      ; 0057bd6b
        ;   XREF to: 0057bdad (CONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057bd6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bd70
    PUSH ESI                            ; 0057bd73
    MOV EAX,dword ptr [EAX]             ; 0057bd74
    CALL dword ptr [EAX + 0x4]          ; 0057bd76
    ADD ESP,0x4                         ; 0057bd79
    TEST EAX,EAX                        ; 0057bd7c
    JL 0x0057c3b4                       ; 0057bd7e
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0057bd84
    LEA EDX,[EDI + -0x1]                ; 0057bd8b
    INC ECX                             ; 0057bd8e
    CMP EAX,0x2d                        ; 0057bd8f
    JNZ 0x0057c4ea                      ; 0057bd92
        ;   XREF to: 0057c4ea (CONDITIONAL_JUMP)  ; LAB_0057c4ea
    MOV ESI,0x1                         ; 0057bd98
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057bd9d
    MOV EDI,EDX                         ; 0057bda4
    MOV dword ptr [ESP + 0xc4],ESI      ; 0057bda6
    TEST EDI,EDI                        ; 0057bdad
        ;   Label: LAB_0057bdad
    JLE 0x0057c526                      ; 0057bdaf
        ;   XREF to: 0057c526 (CONDITIONAL_JUMP)  ; LAB_0057c526
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057bdb5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bdb8
    PUSH EDX                            ; 0057bdbb
    MOV EAX,dword ptr [EAX]             ; 0057bdbc
    CALL dword ptr [EAX + 0x4]          ; 0057bdbe
    ADD ESP,0x4                         ; 0057bdc1
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057bdc4
    TEST EAX,EAX                        ; 0057bdcb
    JL 0x0057c51f                       ; 0057bdcd
        ;   XREF to: 0057c51f (CONDITIONAL_JUMP)  ; LAB_0057c51f
    PUSH EAX                            ; 0057bdd3
    MOV ESI,0x63                        ; 0057bdd4
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 0057bdd9
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    SUB EAX,0x30                        ; 0057bdde
    ADD ESP,0x4                         ; 0057bde1
    CMP EAX,0x16                        ; 0057bde4
    JA 0x0057bdf2                       ; 0057bde7
        ;   XREF to: 0057bdf2 (CONDITIONAL_JUMP)  ; caseD_40
    JMP dword ptr [EAX*0x4 + 0x57ba4c]  ; 0057bde9 | caseD_30 | caseD_31 | caseD_32
        ;   Label: switchD
    XOR ESI,ESI                         ; 0057bdf0
        ;   Label: caseD_30
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0057bdf2
        ;   Label: caseD_3a
    CMP ESI,ECX                         ; 0057bdf9
    JG 0x0057c639                       ; 0057bdfb
        ;   XREF to: 0057c639 (CONDITIONAL_JUMP)  ; LAB_0057c639
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0057be01
    IMUL EAX,ECX                        ; 0057be08
    MOV ECX,0x1                         ; 0057be0b
    ADD EAX,ESI                         ; 0057be10
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0057be12
    MOV dword ptr [ESP + 0x9c],EAX      ; 0057be19
    MOV dword ptr [ESP + 0xa0],ECX      ; 0057be20
    ADD ESI,ECX                         ; 0057be27
    SUB EDI,ECX                         ; 0057be29
    MOV dword ptr [ESP + 0xd4],ESI      ; 0057be2b
    JMP 0x0057bdad                      ; 0057be32
        ;   XREF to: 0057bdad (UNCONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV dword ptr [ESP + 0x98],EAX      ; 0057be37
        ;   Label: LAB_0057be37
    JMP 0x0057bd1c                      ; 0057be3e
        ;   XREF to: 0057bd1c (UNCONDITIONAL_JUMP)  ; LAB_0057bd1c
    MOV dword ptr [ESP + 0xc8],ESI      ; 0057be43
        ;   Label: LAB_0057be43
    JMP 0x0057bd1c                      ; 0057be4a
        ;   XREF to: 0057bd1c (UNCONDITIONAL_JUMP)  ; LAB_0057bd1c
    IMUL EDI,EDI,0xa                    ; 0057be4f
        ;   Label: LAB_0057be4f
    ADD EDI,EAX                         ; 0057be52
    JMP 0x0057bd1c                      ; 0057be54
        ;   XREF to: 0057bd1c (UNCONDITIONAL_JUMP)  ; LAB_0057bd1c
    JBE 0x0057be37                      ; 0057be59
        ;   XREF to: 0057be37 (CONDITIONAL_JUMP)  ; LAB_0057be37
        ;   Label: LAB_0057be59
    CMP EAX,0x68                        ; 0057be5b
    JNC 0x0057be6a                      ; 0057be5e
        ;   XREF to: 0057be6a (CONDITIONAL_JUMP)  ; LAB_0057be6a
    CMP EAX,0x4e                        ; 0057be60
    JZ 0x0057be37                       ; 0057be63
        ;   XREF to: 0057be37 (CONDITIONAL_JUMP)  ; LAB_0057be37
    JMP 0x0057bcf8                      ; 0057be65
        ;   XREF to: 0057bcf8 (UNCONDITIONAL_JUMP)  ; LAB_0057bcf8
    JBE 0x0057be37                      ; 0057be6a
        ;   XREF to: 0057be37 (CONDITIONAL_JUMP)  ; LAB_0057be37
        ;   Label: LAB_0057be6a
    CMP EAX,0x6c                        ; 0057be6c
    JZ 0x0057be37                       ; 0057be6f
        ;   XREF to: 0057be37 (CONDITIONAL_JUMP)  ; LAB_0057be37
    JMP 0x0057bcf8                      ; 0057be71
        ;   XREF to: 0057bcf8 (UNCONDITIONAL_JUMP)  ; LAB_0057bcf8
    JBE 0x0057be43                      ; 0057be76
        ;   XREF to: 0057be43 (CONDITIONAL_JUMP)  ; LAB_0057be43
        ;   Label: LAB_0057be76
    CMP EAX,0x46                        ; 0057be78
    JZ 0x0057be37                       ; 0057be7b
        ;   XREF to: 0057be37 (CONDITIONAL_JUMP)  ; LAB_0057be37
    JMP 0x0057bcf8                      ; 0057be7d
        ;   XREF to: 0057bcf8 (UNCONDITIONAL_JUMP)  ; LAB_0057bcf8
    MOV DH,byte ptr [EBX + 0x1]         ; 0057be82
        ;   Label: LAB_0057be82
    INC EBX                             ; 0057be85
    TEST DH,DH                          ; 0057be86
    JNZ 0x0057bce0                      ; 0057be88
        ;   XREF to: 0057bce0 (CONDITIONAL_JUMP)  ; LAB_0057bce0
    JMP 0x0057bd24                      ; 0057be8e
        ;   XREF to: 0057bd24 (UNCONDITIONAL_JUMP)  ; LAB_0057bd24
    CMP EDI,0x7fffffff                  ; 0057be93
        ;   Label: caseD_63
    JNZ 0x0057bea0                      ; 0057be99
        ;   XREF to: 0057bea0 (CONDITIONAL_JUMP)  ; LAB_0057bea0
    MOV EDI,0x1                         ; 0057be9b
    PUSH 0x20                           ; 0057bea0
        ;   Label: LAB_0057bea0
    PUSH 0xff                           ; 0057bea2
    LEA EAX,[ESP + 0x74]                ; 0057bea7
    PUSH EAX                            ; 0057beab
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057beac
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057beb1
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0057beb4
        ;   Label: LAB_0057beb4
    XOR ESI,ESI                         ; 0057bebb
    TEST EAX,EAX                        ; 0057bebd
    JNZ 0x0057c0ec                      ; 0057bebf
        ;   XREF to: 0057c0ec (CONDITIONAL_JUMP)  ; LAB_0057c0ec
    TEST EDI,EDI                        ; 0057bec5
        ;   Label: LAB_0057bec5
    JLE 0x0057c105                      ; 0057bec7
        ;   XREF to: 0057c105 (CONDITIONAL_JUMP)  ; LAB_0057c105
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057becd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bed0
    PUSH ECX                            ; 0057bed3
    MOV EAX,dword ptr [EAX]             ; 0057bed4
    CALL dword ptr [EAX + 0x4]          ; 0057bed6
    ADD ESP,0x4                         ; 0057bed9
    DEC EDI                             ; 0057bedc
    MOV dword ptr [ESP + 0xac],EAX      ; 0057bedd
    TEST EAX,EAX                        ; 0057bee4
    JL 0x0057c0fe                       ; 0057bee6
        ;   XREF to: 0057c0fe (CONDITIONAL_JUMP)  ; LAB_0057c0fe
    MOV EDX,EAX                         ; 0057beec
    SHR EDX,0x3                         ; 0057beee
    MOV DL,byte ptr [ESP + EDX*0x1 + 0x6c] ; 0057bef1
    AND EDX,0xff                        ; 0057bef5
    MOV ECX,EAX                         ; 0057befb
    MOV dword ptr [ESP + 0xa8],EDX      ; 0057befd
    AND ECX,0x7                         ; 0057bf04
    MOV EDX,0x1                         ; 0057bf07
    SHL EDX,CL                          ; 0057bf0c
    MOV ECX,EDX                         ; 0057bf0e
    TEST dword ptr [ESP + 0xa8],ECX     ; 0057bf10
    JZ 0x0057c13b                       ; 0057bf17
        ;   XREF to: 0057c13b (CONDITIONAL_JUMP)  ; LAB_0057c13b
    INC dword ptr [ESP + 0xd4]          ; 0057bf1d
    TEST ESI,ESI                        ; 0057bf24
    JNZ 0x0057c15c                      ; 0057bf26
        ;   XREF to: 0057c15c (CONDITIONAL_JUMP)  ; LAB_0057c15c
    MOV dword ptr [ESP + 0xa0],0x1      ; 0057bf2c
    JMP 0x0057bec5                      ; 0057bf37
        ;   XREF to: 0057bec5 (UNCONDITIONAL_JUMP)  ; LAB_0057bec5
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057bf39
        ;   Label: caseD_73
    PUSH ECX                            ; 0057bf3c
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057bf3d
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057bf42
    TEST EAX,EAX                        ; 0057bf45
    JL 0x0057bfbb                       ; 0057bf47
        ;   XREF to: 0057bfbb (CONDITIONAL_JUMP)  ; LAB_0057bfbb
    PUSH 0x20                           ; 0057bf49
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0057bf4b
    PUSH 0xff                           ; 0057bf52
    ADD ESI,EAX                         ; 0057bf57
    LEA EAX,[ESP + 0x74]                ; 0057bf59
    PUSH EAX                            ; 0057bf5d
    MOV dword ptr [ESP + 0xe0],ESI      ; 0057bf5e
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057bf65
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057bf6a
    MOV DH,byte ptr [ESP + 0x70]        ; 0057bf6d
    MOV EAX,0x9                         ; 0057bf71
    AND DH,0xfe                         ; 0057bf76
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057bf79
    MOV byte ptr [ESP + 0x70],DH        ; 0057bf80
    MOV CL,byte ptr [ESP + 0xa4]        ; 0057bf84
        ;   Label: LAB_0057bf84
    MOV DL,0x1                          ; 0057bf8b
    AND CL,0x7                          ; 0057bf8d
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057bf90
    SHL DL,CL                           ; 0057bf97
    SAR EAX,0x3                         ; 0057bf99
    NOT DL                              ; 0057bf9c
    AND byte ptr [ESP + EAX*0x1 + 0x6c],DL ; 0057bf9e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057bfa2
    INC EAX                             ; 0057bfa9
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057bfaa
    CMP EAX,0xd                         ; 0057bfb1
    JLE 0x0057bf84                      ; 0057bfb4
        ;   XREF to: 0057bf84 (CONDITIONAL_JUMP)  ; LAB_0057bf84
    JMP 0x0057beb4                      ; 0057bfb6
        ;   XREF to: 0057beb4 (UNCONDITIONAL_JUMP)  ; LAB_0057beb4
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057bfbb
        ;   Label: LAB_0057bfbb
    JMP 0x0057bbef                      ; 0057bfc2
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP byte ptr [EBX],0x5e             ; 0057bfc7
        ;   Label: caseD_5b
    JNZ 0x0057c001                      ; 0057bfca
        ;   XREF to: 0057c001 (CONDITIONAL_JUMP)  ; LAB_0057c001
    PUSH 0x20                           ; 0057bfcc
    PUSH 0xff                           ; 0057bfce
    LEA EAX,[ESP + 0x74]                ; 0057bfd3
    PUSH EAX                            ; 0057bfd7
    INC EBX                             ; 0057bfd8
    XOR ESI,ESI                         ; 0057bfd9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057bfdb
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
        ;   Label: LAB_0057bfdb
    ADD ESP,0xc                         ; 0057bfe0
    CMP byte ptr [EBX],0x5d             ; 0057bfe3
    JZ 0x0057c011                       ; 0057bfe6
        ;   XREF to: 0057c011 (CONDITIONAL_JUMP)  ; LAB_0057c011
    MOV DH,byte ptr [EBX]               ; 0057bfe8
        ;   Label: LAB_0057bfe8
    TEST DH,DH                          ; 0057bfea
    JZ 0x0057beb4                       ; 0057bfec
        ;   XREF to: 0057beb4 (CONDITIONAL_JUMP)  ; LAB_0057beb4
    LEA EAX,[EBX + 0x1]                 ; 0057bff2
    CMP DH,0x5d                         ; 0057bff5
    JNZ 0x0057c024                      ; 0057bff8
        ;   XREF to: 0057c024 (CONDITIONAL_JUMP)  ; LAB_0057c024
    MOV EBX,EAX                         ; 0057bffa
    JMP 0x0057beb4                      ; 0057bffc
        ;   XREF to: 0057beb4 (UNCONDITIONAL_JUMP)  ; LAB_0057beb4
    PUSH 0x20                           ; 0057c001
        ;   Label: LAB_0057c001
    PUSH 0x0                            ; 0057c003
    LEA EAX,[ESP + 0x74]                ; 0057c005
    PUSH EAX                            ; 0057c009
    MOV ESI,0x1                         ; 0057c00a
    JMP 0x0057bfdb                      ; 0057c00f
        ;   XREF to: 0057bfdb (UNCONDITIONAL_JUMP)  ; LAB_0057bfdb
    TEST ESI,ESI                        ; 0057c011
        ;   Label: LAB_0057c011
    JZ 0x0057c01d                       ; 0057c013
        ;   XREF to: 0057c01d (CONDITIONAL_JUMP)  ; LAB_0057c01d
    OR byte ptr [ESP + 0x77],0x20       ; 0057c015
    INC EBX                             ; 0057c01a
        ;   Label: LAB_0057c01a
    JMP 0x0057bfe8                      ; 0057c01b
        ;   XREF to: 0057bfe8 (UNCONDITIONAL_JUMP)  ; LAB_0057bfe8
    AND byte ptr [ESP + 0x77],0xdf      ; 0057c01d
        ;   Label: LAB_0057c01d
    JMP 0x0057c01a                      ; 0057c022
        ;   XREF to: 0057c01a (UNCONDITIONAL_JUMP)  ; LAB_0057c01a
    CMP DH,0x2d                         ; 0057c024
        ;   Label: LAB_0057c024
    JNZ 0x0057c0b0                      ; 0057c027
        ;   XREF to: 0057c0b0 (CONDITIONAL_JUMP)  ; LAB_0057c0b0
    XOR EDX,EDX                         ; 0057c02d
    MOV DL,byte ptr [EBX + 0x1]         ; 0057c02f
    MOV EBX,EAX                         ; 0057c032
    TEST EDX,EDX                        ; 0057c034
    JZ 0x0057beb4                       ; 0057c036
        ;   XREF to: 0057beb4 (CONDITIONAL_JUMP)  ; LAB_0057beb4
    MOV AL,byte ptr [EAX + -0x2]        ; 0057c03c
    AND EAX,0xff                        ; 0057c03f
    CMP EDX,EAX                         ; 0057c044
    JGE 0x0057c058                      ; 0057c046
        ;   XREF to: 0057c058 (CONDITIONAL_JUMP)  ; LAB_0057c058
    MOV dword ptr [ESP + 0xa4],EDX      ; 0057c048
    MOV EDX,EAX                         ; 0057c04f
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057c051
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c058
        ;   Label: LAB_0057c058
    CMP EAX,EDX                         ; 0057c05f
    JG 0x0057bfe8                       ; 0057c061
        ;   XREF to: 0057bfe8 (CONDITIONAL_JUMP)  ; LAB_0057bfe8
    MOV CL,byte ptr [ESP + 0xa4]        ; 0057c063
        ;   Label: LAB_0057c063
    MOV AL,0x1                          ; 0057c06a
    AND CL,0x7                          ; 0057c06c
    SHL AL,CL                           ; 0057c06f
    MOV CL,AL                           ; 0057c071
    TEST ESI,ESI                        ; 0057c073
    JZ 0x0057c09e                       ; 0057c075
        ;   XREF to: 0057c09e (CONDITIONAL_JUMP)  ; LAB_0057c09e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057c077
    SHR EAX,0x3                         ; 0057c07e
    OR byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 0057c081
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057c085
        ;   Label: LAB_0057c085
    INC EAX                             ; 0057c08c
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c08d
    CMP EDX,EAX                         ; 0057c094
    JL 0x0057bfe8                       ; 0057c096
        ;   XREF to: 0057bfe8 (CONDITIONAL_JUMP)  ; LAB_0057bfe8
    JMP 0x0057c063                      ; 0057c09c
        ;   XREF to: 0057c063 (UNCONDITIONAL_JUMP)  ; LAB_0057c063
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057c09e
        ;   Label: LAB_0057c09e
    SAR EAX,0x3                         ; 0057c0a5
    NOT CL                              ; 0057c0a8
    AND byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 0057c0aa
    JMP 0x0057c085                      ; 0057c0ae
        ;   XREF to: 0057c085 (UNCONDITIONAL_JUMP)  ; LAB_0057c085
    TEST ESI,ESI                        ; 0057c0b0
        ;   Label: LAB_0057c0b0
    JZ 0x0057c0ce                       ; 0057c0b2
        ;   XREF to: 0057c0ce (CONDITIONAL_JUMP)  ; LAB_0057c0ce
    XOR EAX,EAX                         ; 0057c0b4
    MOV CL,DH                           ; 0057c0b6
    MOV AL,DH                           ; 0057c0b8
    AND CL,0x7                          ; 0057c0ba
    MOV DL,0x1                          ; 0057c0bd
    SHR EAX,0x3                         ; 0057c0bf
    SHL DL,CL                           ; 0057c0c2
    OR byte ptr [ESP + EAX*0x1 + 0x6c],DL ; 0057c0c4
    INC EBX                             ; 0057c0c8
    JMP 0x0057bfe8                      ; 0057c0c9
        ;   XREF to: 0057bfe8 (UNCONDITIONAL_JUMP)  ; LAB_0057bfe8
    XOR EAX,EAX                         ; 0057c0ce
        ;   Label: LAB_0057c0ce
    MOV CL,DH                           ; 0057c0d0
    MOV AL,DH                           ; 0057c0d2
    AND CL,0x7                          ; 0057c0d4
    MOV DL,0x1                          ; 0057c0d7
    SHL DL,CL                           ; 0057c0d9
    MOV CL,DL                           ; 0057c0db
    SAR EAX,0x3                         ; 0057c0dd
    NOT CL                              ; 0057c0e0
    AND byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 0057c0e2
    INC EBX                             ; 0057c0e6
    JMP 0x0057bfe8                      ; 0057c0e7
        ;   XREF to: 0057bfe8 (UNCONDITIONAL_JUMP)  ; LAB_0057bfe8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057c0ec
        ;   Label: LAB_0057c0ec
    MOV EDX,dword ptr [EAX]             ; 0057c0ef
    ADD EDX,0x4                         ; 0057c0f1
    MOV dword ptr [EAX],EDX             ; 0057c0f4
    MOV ESI,dword ptr [EDX + -0x4]      ; 0057c0f6
    JMP 0x0057bec5                      ; 0057c0f9
        ;   XREF to: 0057bec5 (UNCONDITIONAL_JUMP)  ; LAB_0057bec5
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057c0fe
        ;   Label: LAB_0057c0fe
    CMP dword ptr [ESP + 0xb0],0x63     ; 0057c105
        ;   Label: LAB_0057c105
    JZ 0x0057c116                       ; 0057c10d
        ;   XREF to: 0057c116 (CONDITIONAL_JUMP)  ; LAB_0057c116
    TEST ESI,ESI                        ; 0057c10f
    JZ 0x0057c116                       ; 0057c111
        ;   XREF to: 0057c116 (CONDITIONAL_JUMP)  ; LAB_0057c116
    MOV byte ptr [ESI],0x0              ; 0057c113
    CMP dword ptr [ESP + 0xa0],0x0      ; 0057c116
        ;   Label: LAB_0057c116
    JZ 0x0057bbef                       ; 0057c11e
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    TEST ESI,ESI                        ; 0057c124
    JZ 0x0057c12f                       ; 0057c126
        ;   XREF to: 0057c12f (CONDITIONAL_JUMP)  ; LAB_0057c12f
    INC dword ptr [ESP + 0xc0]          ; 0057c128
    INC dword ptr [ESP + 0xbc]          ; 0057c12f
        ;   Label: LAB_0057c12f
    JMP 0x0057bbef                      ; 0057c136
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    PUSH EAX                            ; 0057c13b
        ;   Label: LAB_0057c13b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c13c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c13f
    PUSH ECX                            ; 0057c142
    MOV EDX,dword ptr [EDX]             ; 0057c143
    CALL dword ptr [EDX + 0x8]          ; 0057c145
    ADD ESP,0x8                         ; 0057c148
    TEST EAX,EAX                        ; 0057c14b
    JNZ 0x0057c105                      ; 0057c14d
        ;   XREF to: 0057c105 (CONDITIONAL_JUMP)  ; LAB_0057c105
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c14f
    JMP 0x0057c105                      ; 0057c15a
        ;   XREF to: 0057c105 (UNCONDITIONAL_JUMP)  ; LAB_0057c105
    INC ESI                             ; 0057c15c
        ;   Label: LAB_0057c15c
    MOV AL,byte ptr [ESP + 0xac]        ; 0057c15d
    MOV byte ptr [ESI + -0x1],AL        ; 0057c164
    MOV dword ptr [ESP + 0xa0],0x1      ; 0057c167
    JMP 0x0057bec5                      ; 0057c172
        ;   XREF to: 0057bec5 (UNCONDITIONAL_JUMP)  ; LAB_0057bec5
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057c177
        ;   Label: caseD_69
    PUSH ESI                            ; 0057c17a
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057c17b
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057c180
    TEST EAX,EAX                        ; 0057c183
    JL 0x0057c22e                       ; 0057c185
        ;   XREF to: 0057c22e (CONDITIONAL_JUMP)  ; LAB_0057c22e
    ADD dword ptr [ESP + 0xd4],EAX      ; 0057c18b
    TEST EDI,EDI                        ; 0057c192
    JLE 0x0057c1d0                      ; 0057c194
        ;   XREF to: 0057c1d0 (CONDITIONAL_JUMP)  ; LAB_0057c1d0
    PUSH ESI                            ; 0057c196
    MOV EAX,dword ptr [ESI]             ; 0057c197
    CALL dword ptr [EAX + 0x4]          ; 0057c199
    ADD ESP,0x4                         ; 0057c19c
    TEST EAX,EAX                        ; 0057c19f
    JL 0x0057c22e                       ; 0057c1a1
        ;   XREF to: 0057c22e (CONDITIONAL_JUMP)  ; LAB_0057c22e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c1a7
    LEA ECX,[EDI + -0x1]                ; 0057c1ae
    INC EDX                             ; 0057c1b1
    CMP EAX,0x2d                        ; 0057c1b2
    JNZ 0x0057c23a                      ; 0057c1b5
        ;   XREF to: 0057c23a (CONDITIONAL_JUMP)  ; LAB_0057c23a
    MOV EAX,0x1                         ; 0057c1bb
    MOV dword ptr [ESP + 0xd4],EDX      ; 0057c1c0
    MOV EDI,ECX                         ; 0057c1c7
    MOV dword ptr [ESP + 0xc4],EAX      ; 0057c1c9
    TEST EDI,EDI                        ; 0057c1d0
        ;   Label: LAB_0057c1d0
    JLE 0x0057bdad                      ; 0057c1d2
        ;   XREF to: 0057bdad (CONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c1d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c1db
    PUSH EDX                            ; 0057c1de
    MOV EAX,dword ptr [EAX]             ; 0057c1df
    CALL dword ptr [EAX + 0x4]          ; 0057c1e1
    ADD ESP,0x4                         ; 0057c1e4
    TEST EAX,EAX                        ; 0057c1e7
    JL 0x0057c22e                       ; 0057c1e9
        ;   XREF to: 0057c22e (CONDITIONAL_JUMP)  ; LAB_0057c22e
    CMP EAX,0x30                        ; 0057c1eb
    JNZ 0x0057c2c9                      ; 0057c1ee
        ;   XREF to: 0057c2c9 (CONDITIONAL_JUMP)  ; LAB_0057c2c9
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c1f4
    MOV EAX,0x8                         ; 0057c1fb
    DEC EDI                             ; 0057c200
    INC EDX                             ; 0057c201
    MOV dword ptr [ESP + 0xcc],EAX      ; 0057c202
    MOV dword ptr [ESP + 0xd4],EDX      ; 0057c209
    TEST EDI,EDI                        ; 0057c210
    JLE 0x0057bdad                      ; 0057c212
        ;   XREF to: 0057bdad (CONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c218
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c21b
    PUSH ECX                            ; 0057c21e
    MOV EAX,dword ptr [EAX]             ; 0057c21f
    CALL dword ptr [EAX + 0x4]          ; 0057c221
    MOV ESI,EAX                         ; 0057c224
    ADD ESP,0x4                         ; 0057c226
    CMP EAX,-0x1                        ; 0057c229
    JGE 0x0057c26c                      ; 0057c22c
        ;   XREF to: 0057c26c (CONDITIONAL_JUMP)  ; LAB_0057c26c
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057c22e
        ;   Label: LAB_0057c22e
    JMP 0x0057bbef                      ; 0057c235
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP EAX,0x2b                        ; 0057c23a
        ;   Label: LAB_0057c23a
    JNZ 0x0057c24a                      ; 0057c23d
        ;   XREF to: 0057c24a (CONDITIONAL_JUMP)  ; LAB_0057c24a
    MOV EDI,ECX                         ; 0057c23f
    MOV dword ptr [ESP + 0xd4],EDX      ; 0057c241
    JMP 0x0057c1d0                      ; 0057c248
        ;   XREF to: 0057c1d0 (UNCONDITIONAL_JUMP)  ; LAB_0057c1d0
    PUSH EAX                            ; 0057c24a
        ;   Label: LAB_0057c24a
    MOV EDX,dword ptr [ESI]             ; 0057c24b
    PUSH ESI                            ; 0057c24d
    CALL dword ptr [EDX + 0x8]          ; 0057c24e
    ADD ESP,0x8                         ; 0057c251
    TEST EAX,EAX                        ; 0057c254
    JNZ 0x0057c1d0                      ; 0057c256
        ;   XREF to: 0057c1d0 (CONDITIONAL_JUMP)  ; LAB_0057c1d0
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c25c
    JMP 0x0057bbef                      ; 0057c267
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    JLE 0x0057bdad                      ; 0057c26c
        ;   XREF to: 0057bdad (CONDITIONAL_JUMP)  ; LAB_0057bdad
        ;   Label: LAB_0057c26c
    PUSH EAX                            ; 0057c272
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 0057c273
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 0057c278
    CMP EAX,0x58                        ; 0057c27b
    JNZ 0x0057c2a1                      ; 0057c27e
        ;   XREF to: 0057c2a1 (CONDITIONAL_JUMP)  ; LAB_0057c2a1
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c280
    MOV EAX,0x10                        ; 0057c287
    DEC EDI                             ; 0057c28c
    INC EDX                             ; 0057c28d
    MOV dword ptr [ESP + 0xcc],EAX      ; 0057c28e
    MOV dword ptr [ESP + 0xd4],EDX      ; 0057c295
    JMP 0x0057bdad                      ; 0057c29c
        ;   XREF to: 0057bdad (UNCONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c2a1
        ;   Label: LAB_0057c2a1
    PUSH ESI                            ; 0057c2a4
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057c2a5
    MOV EAX,dword ptr [EAX]             ; 0057c2a8
    PUSH ESI                            ; 0057c2aa
    CALL dword ptr [EAX + 0x8]          ; 0057c2ab
    ADD ESP,0x8                         ; 0057c2ae
    TEST EAX,EAX                        ; 0057c2b1
    JNZ 0x0057bdad                      ; 0057c2b3
        ;   XREF to: 0057bdad (CONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c2b9
    JMP 0x0057bbef                      ; 0057c2c4
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    PUSH EAX                            ; 0057c2c9
        ;   Label: LAB_0057c2c9
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c2ca
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c2cd
    PUSH ECX                            ; 0057c2d0
    MOV EDX,dword ptr [EDX]             ; 0057c2d1
    CALL dword ptr [EDX + 0x8]          ; 0057c2d3
    ADD ESP,0x8                         ; 0057c2d6
    TEST EAX,EAX                        ; 0057c2d9
    JNZ 0x0057bdad                      ; 0057c2db
        ;   XREF to: 0057bdad (CONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c2e1
    JMP 0x0057bbef                      ; 0057c2ec
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c2f1
        ;   Label: caseD_58
    PUSH ECX                            ; 0057c2f4
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057c2f5
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057c2fa
    TEST EAX,EAX                        ; 0057c2fd
    JL 0x0057c3b4                       ; 0057c2ff
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0057c305
    ADD ESI,EAX                         ; 0057c30c
    MOV dword ptr [ESP + 0xd4],ESI      ; 0057c30e
    TEST EDI,EDI                        ; 0057c315
    JLE 0x0057c354                      ; 0057c317
        ;   XREF to: 0057c354 (CONDITIONAL_JUMP)  ; LAB_0057c354
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c319
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c31c
    PUSH EDX                            ; 0057c31f
    MOV EAX,dword ptr [EAX]             ; 0057c320
    CALL dword ptr [EAX + 0x4]          ; 0057c322
    ADD ESP,0x4                         ; 0057c325
    TEST EAX,EAX                        ; 0057c328
    JL 0x0057c3b4                       ; 0057c32a
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    LEA ECX,[ESI + 0x1]                 ; 0057c330
    LEA EDX,[EDI + -0x1]                ; 0057c333
    CMP EAX,0x2d                        ; 0057c336
    JNZ 0x0057c3c0                      ; 0057c339
        ;   XREF to: 0057c3c0 (CONDITIONAL_JUMP)  ; LAB_0057c3c0
    MOV EDI,0x1                         ; 0057c33f
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057c344
    MOV dword ptr [ESP + 0xc4],EDI      ; 0057c34b
    MOV EDI,EDX                         ; 0057c352
    TEST EDI,EDI                        ; 0057c354
        ;   Label: LAB_0057c354
    JLE 0x0057c418                      ; 0057c356
        ;   XREF to: 0057c418 (CONDITIONAL_JUMP)  ; LAB_0057c418
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c35c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c35f
    PUSH EDX                            ; 0057c362
    MOV EAX,dword ptr [EAX]             ; 0057c363
    CALL dword ptr [EAX + 0x4]          ; 0057c365
    ADD ESP,0x4                         ; 0057c368
    TEST EAX,EAX                        ; 0057c36b
    JL 0x0057c3b4                       ; 0057c36d
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    CMP EAX,0x30                        ; 0057c36f
    JNZ 0x0057c44c                      ; 0057c372
        ;   XREF to: 0057c44c (CONDITIONAL_JUMP)  ; LAB_0057c44c
    MOV EAX,0x1                         ; 0057c378
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c37d
    MOV dword ptr [ESP + 0xa0],EAX      ; 0057c384
    ADD EDX,EAX                         ; 0057c38b
    SUB EDI,EAX                         ; 0057c38d
    MOV dword ptr [ESP + 0xd4],EDX      ; 0057c38f
    TEST EDI,EDI                        ; 0057c396
    JLE 0x0057c418                      ; 0057c398
        ;   XREF to: 0057c418 (CONDITIONAL_JUMP)  ; LAB_0057c418
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c39e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c3a1
    PUSH ECX                            ; 0057c3a4
    MOV EAX,dword ptr [EAX]             ; 0057c3a5
    CALL dword ptr [EAX + 0x4]          ; 0057c3a7
    MOV ESI,EAX                         ; 0057c3aa
    ADD ESP,0x4                         ; 0057c3ac
    CMP EAX,-0x1                        ; 0057c3af
    JGE 0x0057c3f8                      ; 0057c3b2
        ;   XREF to: 0057c3f8 (CONDITIONAL_JUMP)  ; LAB_0057c3f8
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057c3b4
        ;   Label: LAB_0057c3b4
    JMP 0x0057bbef                      ; 0057c3bb
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP EAX,0x2b                        ; 0057c3c0
        ;   Label: LAB_0057c3c0
    JNZ 0x0057c3d0                      ; 0057c3c3
        ;   XREF to: 0057c3d0 (CONDITIONAL_JUMP)  ; LAB_0057c3d0
    MOV EDI,EDX                         ; 0057c3c5
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057c3c7
    JMP 0x0057c354                      ; 0057c3ce
        ;   XREF to: 0057c354 (UNCONDITIONAL_JUMP)  ; LAB_0057c354
    PUSH EAX                            ; 0057c3d0
        ;   Label: LAB_0057c3d0
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c3d1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c3d4
    PUSH ECX                            ; 0057c3d7
    MOV EDX,dword ptr [EDX]             ; 0057c3d8
    CALL dword ptr [EDX + 0x8]          ; 0057c3da
    ADD ESP,0x8                         ; 0057c3dd
    TEST EAX,EAX                        ; 0057c3e0
    JNZ 0x0057c354                      ; 0057c3e2
        ;   XREF to: 0057c354 (CONDITIONAL_JUMP)  ; LAB_0057c354
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c3e8
    JMP 0x0057bbef                      ; 0057c3f3
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    JLE 0x0057c418                      ; 0057c3f8
        ;   XREF to: 0057c418 (CONDITIONAL_JUMP)  ; LAB_0057c418
        ;   Label: LAB_0057c3f8
    PUSH EAX                            ; 0057c3fa
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 0057c3fb
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 0057c400
    CMP EAX,0x58                        ; 0057c403
    JNZ 0x0057c428                      ; 0057c406
        ;   XREF to: 0057c428 (CONDITIONAL_JUMP)  ; LAB_0057c428
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057c408
    INC EAX                             ; 0057c40f
    DEC EDI                             ; 0057c410
    MOV dword ptr [ESP + 0xd4],EAX      ; 0057c411
    MOV dword ptr [ESP + 0xcc],0x10     ; 0057c418
        ;   Label: LAB_0057c418
    JMP 0x0057bdad                      ; 0057c423
        ;   XREF to: 0057bdad (UNCONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c428
        ;   Label: LAB_0057c428
    PUSH ESI                            ; 0057c42b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057c42c
    MOV EAX,dword ptr [EAX]             ; 0057c42f
    PUSH ESI                            ; 0057c431
    CALL dword ptr [EAX + 0x8]          ; 0057c432
    ADD ESP,0x8                         ; 0057c435
    TEST EAX,EAX                        ; 0057c438
    JNZ 0x0057c418                      ; 0057c43a
        ;   XREF to: 0057c418 (CONDITIONAL_JUMP)  ; LAB_0057c418
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c43c
    JMP 0x0057bbef                      ; 0057c447
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    PUSH EAX                            ; 0057c44c
        ;   Label: LAB_0057c44c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c44d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c450
    PUSH ECX                            ; 0057c453
    MOV EDX,dword ptr [EDX]             ; 0057c454
    CALL dword ptr [EDX + 0x8]          ; 0057c456
    ADD ESP,0x8                         ; 0057c459
    TEST EAX,EAX                        ; 0057c45c
    JNZ 0x0057c418                      ; 0057c45e
        ;   XREF to: 0057c418 (CONDITIONAL_JUMP)  ; LAB_0057c418
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c460
    JMP 0x0057bbef                      ; 0057c46b
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c470
        ;   Label: caseD_50
    PUSH EDX                            ; 0057c473
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057c474
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057c479
    TEST EAX,EAX                        ; 0057c47c
    JL 0x0057c3b4                       ; 0057c47e
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0057c484
    MOV ESI,0x10                        ; 0057c48b
    ADD ECX,EAX                         ; 0057c490
    MOV dword ptr [ESP + 0xcc],ESI      ; 0057c492
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057c499
    JMP 0x0057bdad                      ; 0057c4a0
        ;   XREF to: 0057bdad (UNCONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c4a5
        ;   Label: caseD_55
    PUSH ECX                            ; 0057c4a8
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057c4a9
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057c4ae
    TEST EAX,EAX                        ; 0057c4b1
    JL 0x0057c3b4                       ; 0057c4b3
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0057c4b9
    ADD ESI,EAX                         ; 0057c4c0
    MOV EAX,0xa                         ; 0057c4c2
    MOV dword ptr [ESP + 0xd4],ESI      ; 0057c4c7
    MOV dword ptr [ESP + 0xcc],EAX      ; 0057c4ce
    JMP 0x0057bdad                      ; 0057c4d5
        ;   XREF to: 0057bdad (UNCONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV dword ptr [ESP + 0xcc],0x8      ; 0057c4da
        ;   Label: caseD_4f
    JMP 0x0057bd4e                      ; 0057c4e5
        ;   XREF to: 0057bd4e (UNCONDITIONAL_JUMP)  ; LAB_0057bd4e
    CMP EAX,0x2b                        ; 0057c4ea
        ;   Label: LAB_0057c4ea
    JNZ 0x0057c4fd                      ; 0057c4ed
        ;   XREF to: 0057c4fd (CONDITIONAL_JUMP)  ; LAB_0057c4fd
    MOV EDI,EDX                         ; 0057c4ef
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057c4f1
    JMP 0x0057bdad                      ; 0057c4f8
        ;   XREF to: 0057bdad (UNCONDITIONAL_JUMP)  ; LAB_0057bdad
    PUSH EAX                            ; 0057c4fd
        ;   Label: LAB_0057c4fd
    MOV EDX,dword ptr [ESI]             ; 0057c4fe
    PUSH ESI                            ; 0057c500
    CALL dword ptr [EDX + 0x8]          ; 0057c501
    ADD ESP,0x8                         ; 0057c504
    TEST EAX,EAX                        ; 0057c507
    JNZ 0x0057bdad                      ; 0057c509
        ;   XREF to: 0057bdad (CONDITIONAL_JUMP)  ; LAB_0057bdad
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c50f
    JMP 0x0057bbef                      ; 0057c51a
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057c51f
        ;   Label: LAB_0057c51f
    CMP dword ptr [ESP + 0xd0],-0x1     ; 0057c526
        ;   Label: LAB_0057c526
    JL 0x0057bbef                       ; 0057c52e
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP dword ptr [ESP + 0xa0],0x0      ; 0057c534
    JZ 0x0057bbef                       ; 0057c53c
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0057c542
    INC EAX                             ; 0057c549
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0057c54a
    MOV dword ptr [ESP + 0xbc],EAX      ; 0057c551
    TEST EDX,EDX                        ; 0057c558
    JZ 0x0057bbef                       ; 0057c55a
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP dword ptr [ESP + 0xc4],0x0      ; 0057c560
    JZ 0x0057c571                       ; 0057c568
        ;   XREF to: 0057c571 (CONDITIONAL_JUMP)  ; LAB_0057c571
    NEG dword ptr [ESP + 0x9c]          ; 0057c56a
    MOV EDI,dword ptr [ESP + 0x98]      ; 0057c571
        ;   Label: LAB_0057c571
    CMP EDI,0x48                        ; 0057c578
    JNC 0x0057c69d                      ; 0057c57b
        ;   XREF to: 0057c69d (CONDITIONAL_JUMP)  ; LAB_0057c69d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057c581
        ;   Label: LAB_0057c581
    MOV ECX,dword ptr [EAX]             ; 0057c584
    ADD ECX,0x4                         ; 0057c586
    MOV dword ptr [EAX],ECX             ; 0057c589
    MOV EAX,dword ptr [ECX + -0x4]      ; 0057c58b
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0057c58e
        ;   Label: LAB_0057c58e
    MOV dword ptr [EAX],EDX             ; 0057c595
    INC dword ptr [ESP + 0xc0]          ; 0057c597
    JMP 0x0057bbef                      ; 0057c59e
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV ESI,0x1                         ; 0057c5a3
        ;   Label: caseD_31
    JMP 0x0057bdf2                      ; 0057c5a8
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x2                         ; 0057c5ad
        ;   Label: caseD_32
    JMP 0x0057bdf2                      ; 0057c5b2
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x3                         ; 0057c5b7
        ;   Label: caseD_33
    JMP 0x0057bdf2                      ; 0057c5bc
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x4                         ; 0057c5c1
        ;   Label: caseD_34
    JMP 0x0057bdf2                      ; 0057c5c6
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x5                         ; 0057c5cb
        ;   Label: caseD_35
    JMP 0x0057bdf2                      ; 0057c5d0
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x6                         ; 0057c5d5
        ;   Label: caseD_36
    JMP 0x0057bdf2                      ; 0057c5da
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x7                         ; 0057c5df
        ;   Label: caseD_37
    JMP 0x0057bdf2                      ; 0057c5e4
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x8                         ; 0057c5e9
        ;   Label: caseD_38
    JMP 0x0057bdf2                      ; 0057c5ee
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x9                         ; 0057c5f3
        ;   Label: caseD_39
    JMP 0x0057bdf2                      ; 0057c5f8
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xa                         ; 0057c5fd
        ;   Label: caseD_41
    JMP 0x0057bdf2                      ; 0057c602
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xb                         ; 0057c607
        ;   Label: caseD_42
    JMP 0x0057bdf2                      ; 0057c60c
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xc                         ; 0057c611
        ;   Label: caseD_43
    JMP 0x0057bdf2                      ; 0057c616
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xd                         ; 0057c61b
        ;   Label: caseD_44
    JMP 0x0057bdf2                      ; 0057c620
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xe                         ; 0057c625
        ;   Label: caseD_45
    JMP 0x0057bdf2                      ; 0057c62a
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xf                         ; 0057c62f
        ;   Label: caseD_46
    JMP 0x0057bdf2                      ; 0057c634
        ;   XREF to: 0057bdf2 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV EDI,dword ptr [ESP + 0xa4]      ; 0057c639
        ;   Label: LAB_0057c639
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c640
    PUSH EDI                            ; 0057c643
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c644
    MOV EAX,dword ptr [EAX]             ; 0057c647
    PUSH EDX                            ; 0057c649
    CALL dword ptr [EAX + 0x8]          ; 0057c64a
    ADD ESP,0x8                         ; 0057c64d
    TEST EAX,EAX                        ; 0057c650
    JNZ 0x0057c526                      ; 0057c652
        ;   XREF to: 0057c526 (CONDITIONAL_JUMP)  ; LAB_0057c526
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c658
    JMP 0x0057bbef                      ; 0057c663
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057c668
        ;   Label: LAB_0057c668
    MOV EDX,dword ptr [EAX]             ; 0057c66b
    ADD EDX,0x4                         ; 0057c66d
    MOV dword ptr [EAX],EDX             ; 0057c670
    MOV EAX,dword ptr [EDX + -0x4]      ; 0057c672
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0057c675
    MOV word ptr [EAX],DX               ; 0057c67c
    INC dword ptr [ESP + 0xc0]          ; 0057c67f
    JMP 0x0057bbef                      ; 0057c686
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057c68b
        ;   Label: LAB_0057c68b
    MOV EDI,dword ptr [EAX]             ; 0057c68e
    ADD EDI,0x4                         ; 0057c690
    MOV dword ptr [EAX],EDI             ; 0057c693
    MOV EAX,dword ptr [EDI + -0x4]      ; 0057c695
    JMP 0x0057c58e                      ; 0057c698
        ;   XREF to: 0057c58e (UNCONDITIONAL_JUMP)  ; LAB_0057c58e
    JBE 0x0057c668                      ; 0057c69d
        ;   XREF to: 0057c668 (CONDITIONAL_JUMP)  ; LAB_0057c668
        ;   Label: LAB_0057c69d
    CMP EDI,0x68                        ; 0057c69f
    JC 0x0057c581                       ; 0057c6a2
        ;   XREF to: 0057c581 (CONDITIONAL_JUMP)  ; LAB_0057c581
    JBE 0x0057c668                      ; 0057c6a8
        ;   XREF to: 0057c668 (CONDITIONAL_JUMP)  ; LAB_0057c668
    CMP EDI,0x6c                        ; 0057c6aa
    JZ 0x0057c68b                       ; 0057c6ad
        ;   XREF to: 0057c68b (CONDITIONAL_JUMP)  ; LAB_0057c68b
    JMP 0x0057c581                      ; 0057c6af
        ;   XREF to: 0057c581 (UNCONDITIONAL_JUMP)  ; LAB_0057c581
    CMP dword ptr [ESP + 0xc8],0x0      ; 0057c6b4
        ;   Label: caseD_6e
    JZ 0x0057bbef                       ; 0057c6bc
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057c6c2
    MOV ECX,dword ptr [EAX]             ; 0057c6c5
    ADD ECX,0x4                         ; 0057c6c7
    MOV dword ptr [EAX],ECX             ; 0057c6ca
    MOV EAX,dword ptr [ECX + -0x4]      ; 0057c6cc
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c6cf
    MOV dword ptr [EAX],EDX             ; 0057c6d6
    JMP 0x0057bbef                      ; 0057c6d8
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c6dd
        ;   Label: caseD_45
    PUSH EDX                            ; 0057c6e0
    CALL core_terrain.cpp_FUN_0057ccc0  ; 0057c6e1
        ;   XREF to: 0057ccc0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057ccc0()
    ADD ESP,0x4                         ; 0057c6e6
    TEST EAX,EAX                        ; 0057c6e9
    JL 0x0057c3b4                       ; 0057c6eb
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0057c6f1
    ADD ECX,EAX                         ; 0057c6f8
    LEA ESI,[ESP + 0x8]                 ; 0057c6fa
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057c6fe
    CMP EDI,0x63                        ; 0057c705
    JBE 0x0057c7cd                      ; 0057c708
        ;   XREF to: 0057c7cd (CONDITIONAL_JUMP)  ; LAB_0057c7cd
    MOV EDI,0x63                        ; 0057c70e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c713
        ;   Label: LAB_0057c713
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c716
    PUSH EDX                            ; 0057c719
    MOV EAX,dword ptr [EAX]             ; 0057c71a
    CALL dword ptr [EAX + 0x4]          ; 0057c71c
    ADD ESP,0x4                         ; 0057c71f
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c722
    TEST EAX,EAX                        ; 0057c729
    JL 0x0057c3b4                       ; 0057c72b
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c731
    INC EDX                             ; 0057c738
    MOV dword ptr [ESP + 0xb4],EDX      ; 0057c739
    LEA EDX,[EDI + -0x1]                ; 0057c740
    CMP EAX,0x2d                        ; 0057c743
    JNZ 0x0057c7d7                      ; 0057c746
        ;   XREF to: 0057c7d7 (CONDITIONAL_JUMP)  ; LAB_0057c7d7
    INC ESI                             ; 0057c74c
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057c74d
    MOV byte ptr [ESI + -0x1],AL        ; 0057c754
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0057c757
        ;   Label: LAB_0057c757
    MOV EDI,EDX                         ; 0057c75e
    MOV dword ptr [ESP + 0xd4],EAX      ; 0057c760
        ;   Label: LAB_0057c760
    TEST EDI,EDI                        ; 0057c767
        ;   Label: LAB_0057c767
    JLE 0x0057c80f                      ; 0057c769
        ;   XREF to: 0057c80f (CONDITIONAL_JUMP)  ; LAB_0057c80f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c76f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c772
    PUSH ECX                            ; 0057c775
    MOV EAX,dword ptr [EAX]             ; 0057c776
    CALL dword ptr [EAX + 0x4]          ; 0057c778
    ADD ESP,0x4                         ; 0057c77b
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c77e
    TEST EAX,EAX                        ; 0057c785
    JL 0x0057c808                       ; 0057c787
        ;   XREF to: 0057c808 (CONDITIONAL_JUMP)  ; LAB_0057c808
    MOV CL,byte ptr [ESP + 0xa4]        ; 0057c78d
    INC CL                              ; 0057c794
    AND ECX,0xff                        ; 0057c796
    TEST byte ptr [ECX + 0x61ed94],0x20 ; 0057c79c | DAT_0061ed94
    JZ 0x0057c9f6                       ; 0057c7a3
        ;   XREF to: 0057c9f6 (CONDITIONAL_JUMP)  ; LAB_0057c9f6
    MOV ECX,0x1                         ; 0057c7a9
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057c7ae
    MOV dword ptr [ESP + 0xa0],ECX      ; 0057c7b5
    MOV byte ptr [ESI],AL               ; 0057c7bc
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057c7be
    SUB EDI,ECX                         ; 0057c7c5
    ADD EAX,ECX                         ; 0057c7c7
    ADD ESI,ECX                         ; 0057c7c9
    JMP 0x0057c760                      ; 0057c7cb
        ;   XREF to: 0057c760 (UNCONDITIONAL_JUMP)  ; LAB_0057c760
    TEST EDI,EDI                        ; 0057c7cd
        ;   Label: LAB_0057c7cd
    JG 0x0057c713                       ; 0057c7cf
        ;   XREF to: 0057c713 (CONDITIONAL_JUMP)  ; LAB_0057c713
    JMP 0x0057c767                      ; 0057c7d5
        ;   XREF to: 0057c767 (UNCONDITIONAL_JUMP)  ; LAB_0057c767
    CMP EAX,0x2b                        ; 0057c7d7
        ;   Label: LAB_0057c7d7
    JZ 0x0057c757                       ; 0057c7da
        ;   XREF to: 0057c757 (CONDITIONAL_JUMP)  ; LAB_0057c757
    PUSH EAX                            ; 0057c7e0
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c7e1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c7e4
    PUSH ECX                            ; 0057c7e7
    MOV EDX,dword ptr [EDX]             ; 0057c7e8
    CALL dword ptr [EDX + 0x8]          ; 0057c7ea
    ADD ESP,0x8                         ; 0057c7ed
    TEST EAX,EAX                        ; 0057c7f0
    JNZ 0x0057c767                      ; 0057c7f2
        ;   XREF to: 0057c767 (CONDITIONAL_JUMP)  ; LAB_0057c767
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057c7f8
    JMP 0x0057bbef                      ; 0057c803
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057c808
        ;   Label: LAB_0057c808
    CMP dword ptr [ESP + 0xd0],-0x1     ; 0057c80f
        ;   Label: LAB_0057c80f
    JL 0x0057bbef                       ; 0057c817
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    TEST EDI,EDI                        ; 0057c81d
    JLE 0x0057c8d2                      ; 0057c81f
        ;   XREF to: 0057c8d2 (CONDITIONAL_JUMP)  ; LAB_0057c8d2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c825
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c828
    PUSH ECX                            ; 0057c82b
    MOV EAX,dword ptr [EAX]             ; 0057c82c
    CALL dword ptr [EAX + 0x4]          ; 0057c82e
    ADD ESP,0x4                         ; 0057c831
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c834
    TEST EAX,EAX                        ; 0057c83b
    JL 0x0057ca1e                       ; 0057c83d
        ;   XREF to: 0057ca1e (CONDITIONAL_JUMP)  ; LAB_0057ca1e
    CMP EAX,0x2e                        ; 0057c843
    JNZ 0x0057ca52                      ; 0057c846
        ;   XREF to: 0057ca52 (CONDITIONAL_JUMP)  ; LAB_0057ca52
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0057c84c
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057c853
    INC ESI                             ; 0057c85a
    DEC EDI                             ; 0057c85b
    INC ECX                             ; 0057c85c
    MOV byte ptr [ESI + -0x1],AL        ; 0057c85d
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057c860
    TEST EDI,EDI                        ; 0057c867
    JLE 0x0057c8d2                      ; 0057c869
        ;   XREF to: 0057c8d2 (CONDITIONAL_JUMP)  ; LAB_0057c8d2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c86b
        ;   Label: LAB_0057c86b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c86e
    PUSH ECX                            ; 0057c871
    MOV EAX,dword ptr [EAX]             ; 0057c872
    CALL dword ptr [EAX + 0x4]          ; 0057c874
    ADD ESP,0x4                         ; 0057c877
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c87a
    TEST EAX,EAX                        ; 0057c881
    JL 0x0057ca1e                       ; 0057c883
        ;   XREF to: 0057ca1e (CONDITIONAL_JUMP)  ; LAB_0057ca1e
    MOV CL,byte ptr [ESP + 0xa4]        ; 0057c889
    INC CL                              ; 0057c890
    AND ECX,0xff                        ; 0057c892
    TEST byte ptr [ECX + 0x61ed94],0x20 ; 0057c898 | DAT_0061ed94
    JZ 0x0057ca2a                       ; 0057c89f
        ;   XREF to: 0057ca2a (CONDITIONAL_JUMP)  ; LAB_0057ca2a
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057c8a5
    MOV byte ptr [ESI],AL               ; 0057c8ac
    MOV EAX,0x1                         ; 0057c8ae
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c8b3
    MOV dword ptr [ESP + 0xa0],EAX      ; 0057c8ba
    SUB EDI,EAX                         ; 0057c8c1
    ADD EDX,EAX                         ; 0057c8c3
    ADD ESI,EAX                         ; 0057c8c5
    MOV dword ptr [ESP + 0xd4],EDX      ; 0057c8c7
    TEST EDI,EDI                        ; 0057c8ce
    JG 0x0057c86b                       ; 0057c8d0
        ;   XREF to: 0057c86b (CONDITIONAL_JUMP)  ; LAB_0057c86b
    CMP dword ptr [ESP + 0xd0],-0x1     ; 0057c8d2
        ;   Label: LAB_0057c8d2
    JL 0x0057bbef                       ; 0057c8da
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP dword ptr [ESP + 0xa0],0x0      ; 0057c8e0
    JZ 0x0057ca81                       ; 0057c8e8
        ;   XREF to: 0057ca81 (CONDITIONAL_JUMP)  ; LAB_0057ca81
    TEST EDI,EDI                        ; 0057c8ee
    JLE 0x0057ca81                      ; 0057c8f0
        ;   XREF to: 0057ca81 (CONDITIONAL_JUMP)  ; LAB_0057ca81
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c8f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c8f9
    PUSH EDX                            ; 0057c8fc
    MOV EAX,dword ptr [EAX]             ; 0057c8fd
    CALL dword ptr [EAX + 0x4]          ; 0057c8ff
    MOV dword ptr [ESP + 0x98],EAX      ; 0057c902
    ADD ESP,0x4                         ; 0057c909
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c90c
    TEST EAX,EAX                        ; 0057c913
    JL 0x0057ca7a                       ; 0057c915
        ;   XREF to: 0057ca7a (CONDITIONAL_JUMP)  ; LAB_0057ca7a
    PUSH EAX                            ; 0057c91b
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 0057c91c
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 0057c921
    CMP EAX,0x45                        ; 0057c924
    JNZ 0x0057cb6a                      ; 0057c927
        ;   XREF to: 0057cb6a (CONDITIONAL_JUMP)  ; LAB_0057cb6a
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057c92d
    MOV byte ptr [ESI],AL               ; 0057c934
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057c936
    DEC EDI                             ; 0057c93d
    INC EAX                             ; 0057c93e
    INC ESI                             ; 0057c93f
    MOV dword ptr [ESP + 0xd4],EAX      ; 0057c940
    TEST EDI,EDI                        ; 0057c947
    JLE 0x0057c99f                      ; 0057c949
        ;   XREF to: 0057c99f (CONDITIONAL_JUMP)  ; LAB_0057c99f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c94b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c94e
    PUSH EDX                            ; 0057c951
    MOV EAX,dword ptr [EAX]             ; 0057c952
    CALL dword ptr [EAX + 0x4]          ; 0057c954
    ADD ESP,0x4                         ; 0057c957
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c95a
    TEST EAX,EAX                        ; 0057c961
    JL 0x0057c3b4                       ; 0057c963
        ;   XREF to: 0057c3b4 (CONDITIONAL_JUMP)  ; LAB_0057c3b4
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057c969
    INC EDX                             ; 0057c970
    MOV dword ptr [ESP + 0xb8],EDX      ; 0057c971
    LEA EDX,[EDI + -0x1]                ; 0057c978
    CMP EAX,0x2d                        ; 0057c97b
    JNZ 0x0057cb11                      ; 0057c97e
        ;   XREF to: 0057cb11 (CONDITIONAL_JUMP)  ; LAB_0057cb11
    INC ESI                             ; 0057c984
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057c985
    MOV byte ptr [ESI + -0x1],AL        ; 0057c98c
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0057c98f
        ;   Label: LAB_0057c98f
    MOV EDI,EDX                         ; 0057c996
    MOV dword ptr [ESP + 0xd4],EAX      ; 0057c998
        ;   Label: LAB_0057c998
    TEST EDI,EDI                        ; 0057c99f
        ;   Label: LAB_0057c99f
    JLE 0x0057ca81                      ; 0057c9a1
        ;   XREF to: 0057ca81 (CONDITIONAL_JUMP)  ; LAB_0057ca81
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c9a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c9aa
    PUSH EDX                            ; 0057c9ad
    MOV EAX,dword ptr [EAX]             ; 0057c9ae
    CALL dword ptr [EAX + 0x4]          ; 0057c9b0
    ADD ESP,0x4                         ; 0057c9b3
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057c9b6
    TEST EAX,EAX                        ; 0057c9bd
    JL 0x0057ca7a                       ; 0057c9bf
        ;   XREF to: 0057ca7a (CONDITIONAL_JUMP)  ; LAB_0057ca7a
    MOV CL,byte ptr [ESP + 0xa4]        ; 0057c9c5
    INC CL                              ; 0057c9cc
    AND ECX,0xff                        ; 0057c9ce
    TEST byte ptr [ECX + 0x61ed94],0x20 ; 0057c9d4 | DAT_0061ed94
    JZ 0x0057cb42                       ; 0057c9db
        ;   XREF to: 0057cb42 (CONDITIONAL_JUMP)  ; LAB_0057cb42
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057c9e1
    MOV byte ptr [ESI],AL               ; 0057c9e8
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057c9ea
    DEC EDI                             ; 0057c9f1
    INC EAX                             ; 0057c9f2
    INC ESI                             ; 0057c9f3
    JMP 0x0057c998                      ; 0057c9f4
        ;   XREF to: 0057c998 (UNCONDITIONAL_JUMP)  ; LAB_0057c998
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c9f6
        ;   Label: LAB_0057c9f6
    PUSH EAX                            ; 0057c9f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c9fa
    MOV EDX,dword ptr [EDX]             ; 0057c9fd
    PUSH EAX                            ; 0057c9ff
    CALL dword ptr [EDX + 0x8]          ; 0057ca00
    ADD ESP,0x8                         ; 0057ca03
    TEST EAX,EAX                        ; 0057ca06
    JNZ 0x0057c80f                      ; 0057ca08
        ;   XREF to: 0057c80f (CONDITIONAL_JUMP)  ; LAB_0057c80f
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057ca0e
    JMP 0x0057bbef                      ; 0057ca19
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057ca1e
        ;   Label: LAB_0057ca1e
    JMP 0x0057c8d2                      ; 0057ca25
        ;   XREF to: 0057c8d2 (UNCONDITIONAL_JUMP)  ; LAB_0057c8d2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057ca2a
        ;   Label: LAB_0057ca2a
    PUSH EAX                            ; 0057ca2d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ca2e
    MOV EDX,dword ptr [EDX]             ; 0057ca31
    PUSH EAX                            ; 0057ca33
    CALL dword ptr [EDX + 0x8]          ; 0057ca34
    ADD ESP,0x8                         ; 0057ca37
    TEST EAX,EAX                        ; 0057ca3a
    JNZ 0x0057c8d2                      ; 0057ca3c
        ;   XREF to: 0057c8d2 (CONDITIONAL_JUMP)  ; LAB_0057c8d2
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057ca42
    JMP 0x0057bbef                      ; 0057ca4d
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057ca52
        ;   Label: LAB_0057ca52
    PUSH EAX                            ; 0057ca55
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057ca56
    MOV EDX,dword ptr [EDX]             ; 0057ca59
    PUSH EAX                            ; 0057ca5b
    CALL dword ptr [EDX + 0x8]          ; 0057ca5c
    ADD ESP,0x8                         ; 0057ca5f
    TEST EAX,EAX                        ; 0057ca62
    JNZ 0x0057c8d2                      ; 0057ca64
        ;   XREF to: 0057c8d2 (CONDITIONAL_JUMP)  ; LAB_0057c8d2
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057ca6a
    JMP 0x0057bbef                      ; 0057ca75
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057ca7a
        ;   Label: LAB_0057ca7a
    CMP dword ptr [ESP + 0xd0],-0x1     ; 0057ca81
        ;   Label: LAB_0057ca81
    JL 0x0057bbef                       ; 0057ca89
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP dword ptr [ESP + 0xa0],0x0      ; 0057ca8f
    JZ 0x0057bbef                       ; 0057ca97
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EDI,dword ptr [ESP + 0xbc]      ; 0057ca9d
    INC EDI                             ; 0057caa4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0057caa5
    MOV dword ptr [ESP + 0xbc],EDI      ; 0057caac
    TEST EAX,EAX                        ; 0057cab3
    JZ 0x0057bbef                       ; 0057cab5
        ;   XREF to: 0057bbef (CONDITIONAL_JUMP)  ; LAB_0057bbef
    LEA EAX,[ESP + 0x8]                 ; 0057cabb
    PUSH EAX                            ; 0057cabf
    MOV byte ptr [ESI],0x0              ; 0057cac0
    CALL crt_unknown.c__strtod_FUN_005bae68 ; 0057cac3
        ;   XREF to: 005bae68 (UNCONDITIONAL_CALL)  ; double crt_unknown.c__strtod_FUN_005bae68(char * str)
    MOV dword ptr [ESP + 0x90],EAX      ; 0057cac8
    MOV dword ptr [ESP + 0x94],EDX      ; 0057cacf
    FLD double ptr [ESP + 0x90]         ; 0057cad6
    ADD ESP,0x4                         ; 0057cadd
    MOV EDX,dword ptr [ESP + 0x98]      ; 0057cae0
    FSTP double ptr [ESP]               ; 0057cae7
    CMP EDX,0x4c                        ; 0057caea
    JNC 0x0057cbe3                      ; 0057caed
        ;   XREF to: 0057cbe3 (CONDITIONAL_JUMP)  ; LAB_0057cbe3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057caf3
        ;   Label: LAB_0057caf3
    MOV ESI,dword ptr [EAX]             ; 0057caf6
    ADD ESI,0x4                         ; 0057caf8
    MOV dword ptr [EAX],ESI             ; 0057cafb
    MOV EAX,dword ptr [ESI + -0x4]      ; 0057cafd
    FLD double ptr [ESP]                ; 0057cb00
    FSTP float ptr [EAX]                ; 0057cb03
    INC dword ptr [ESP + 0xc0]          ; 0057cb05
    JMP 0x0057bbef                      ; 0057cb0c
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    CMP EAX,0x2b                        ; 0057cb11
        ;   Label: LAB_0057cb11
    JZ 0x0057c98f                       ; 0057cb14
        ;   XREF to: 0057c98f (CONDITIONAL_JUMP)  ; LAB_0057c98f
    PUSH EAX                            ; 0057cb1a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057cb1b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057cb1e
    PUSH ECX                            ; 0057cb21
    MOV EDX,dword ptr [EDX]             ; 0057cb22
    CALL dword ptr [EDX + 0x8]          ; 0057cb24
    ADD ESP,0x8                         ; 0057cb27
    TEST EAX,EAX                        ; 0057cb2a
    JNZ 0x0057c99f                      ; 0057cb2c
        ;   XREF to: 0057c99f (CONDITIONAL_JUMP)  ; LAB_0057c99f
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057cb32
    JMP 0x0057bbef                      ; 0057cb3d
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    PUSH EAX                            ; 0057cb42
        ;   Label: LAB_0057cb42
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057cb43
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057cb46
    PUSH ECX                            ; 0057cb49
    MOV EDX,dword ptr [EDX]             ; 0057cb4a
    CALL dword ptr [EDX + 0x8]          ; 0057cb4c
    ADD ESP,0x8                         ; 0057cb4f
    TEST EAX,EAX                        ; 0057cb52
    JNZ 0x0057ca81                      ; 0057cb54
        ;   XREF to: 0057ca81 (CONDITIONAL_JUMP)  ; LAB_0057ca81
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057cb5a
    JMP 0x0057bbef                      ; 0057cb65
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EDX,dword ptr [ESP + 0x94]      ; 0057cb6a
        ;   Label: LAB_0057cb6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057cb71
    PUSH EDX                            ; 0057cb74
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057cb75
    MOV EAX,dword ptr [EAX]             ; 0057cb78
    PUSH ECX                            ; 0057cb7a
    CALL dword ptr [EAX + 0x8]          ; 0057cb7b
    ADD ESP,0x8                         ; 0057cb7e
    TEST EAX,EAX                        ; 0057cb81
    JNZ 0x0057ca81                      ; 0057cb83
        ;   XREF to: 0057ca81 (CONDITIONAL_JUMP)  ; LAB_0057ca81
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057cb89
    JMP 0x0057bbef                      ; 0057cb94
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057cb99
        ;   Label: LAB_0057cb99
    MOV EDX,dword ptr [EAX]             ; 0057cb9c
    ADD EDX,0x4                         ; 0057cb9e
    MOV dword ptr [EAX],EDX             ; 0057cba1
    MOV EAX,dword ptr [EDX + -0x4]      ; 0057cba3
    MOV EDX,dword ptr [ESP]             ; 0057cba6
    MOV dword ptr [EAX],EDX             ; 0057cba9
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057cbab
    MOV dword ptr [EAX + 0x4],EDX       ; 0057cbaf
    INC dword ptr [ESP + 0xc0]          ; 0057cbb2
    JMP 0x0057bbef                      ; 0057cbb9
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057cbbe
        ;   Label: LAB_0057cbbe
    MOV ECX,dword ptr [EAX]             ; 0057cbc1
    ADD ECX,0x4                         ; 0057cbc3
    MOV dword ptr [EAX],ECX             ; 0057cbc6
    MOV EAX,dword ptr [ECX + -0x4]      ; 0057cbc8
    MOV EDX,dword ptr [ESP]             ; 0057cbcb
    MOV dword ptr [EAX],EDX             ; 0057cbce
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057cbd0
    MOV dword ptr [EAX + 0x4],EDX       ; 0057cbd4
    INC dword ptr [ESP + 0xc0]          ; 0057cbd7
    JMP 0x0057bbef                      ; 0057cbde
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    JBE 0x0057cbbe                      ; 0057cbe3
        ;   XREF to: 0057cbbe (CONDITIONAL_JUMP)  ; LAB_0057cbbe
        ;   Label: LAB_0057cbe3
    CMP EDX,0x68                        ; 0057cbe5
    JC 0x0057caf3                       ; 0057cbe8
        ;   XREF to: 0057caf3 (CONDITIONAL_JUMP)  ; LAB_0057caf3
    JBE 0x0057caf3                      ; 0057cbee
        ;   XREF to: 0057caf3 (CONDITIONAL_JUMP)  ; LAB_0057caf3
    CMP EDX,0x6c                        ; 0057cbf4
    JZ 0x0057cb99                       ; 0057cbf7
        ;   XREF to: 0057cb99 (CONDITIONAL_JUMP)  ; LAB_0057cb99
    JMP 0x0057caf3                      ; 0057cbf9
        ;   XREF to: 0057caf3 (UNCONDITIONAL_JUMP)  ; LAB_0057caf3
    DEC EBX                             ; 0057cbfe
        ;   Label: caseD_48
    JMP 0x0057bbef                      ; 0057cbff
        ;   XREF to: 0057bbef (UNCONDITIONAL_JUMP)  ; LAB_0057bbef
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0057cc04
        ;   Label: LAB_0057cc04
    MOV EAX,EDI                         ; 0057cc0b
    MOV ESP,EBP                         ; 0057cc0d
    POP EBP                             ; 0057cc0f
    POP EDI                             ; 0057cc10
    POP ESI                             ; 0057cc11
    POP EBX                             ; 0057cc12
    RET                                 ; 0057cc13

