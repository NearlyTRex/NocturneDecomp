; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00422930(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00487eb0 at 00487eb5
;   FUN_004ce4a0 at 004ce4b5
;   FUN_00510510 at 00510519
;
; Referenced Globals:
;   TerminatedCString s_stake_b_kfm_005ccab6
;   TerminatedCString s_core_charactr_cpp_005ccac2
;   TerminatedCString s_s_is_carrying_s_but_s_th_005ccad7
;   TerminatedCString s_bip01_head_005ccb12
;   TerminatedCString s_shadow_dfm_005ccb1d
;   undefined4 DAT_005f4084
;   undefined4 DAT_007bdadc
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00408a50
;   FUN_00408a80
;   FUN_00425bb0
;   FUN_00429390
;   FUN_0042a3d0
;   FUN_0044fd00
;   FUN_0044fd70
;   FUN_004e4500
;   FUN_00540e80
;   FUN_00547480
;   FUN_00547890
;   FUN_005b14a0
;   FUN_005b1740
;   FUN_005b1780
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422930
        ;   Label: FUN_00422930
    PUSH ESI                            ; 00422931
    PUSH EDI                            ; 00422932
    PUSH EBP                            ; 00422933
    MOV EBP,ESP                         ; 00422934
    SUB ESP,0x4                         ; 00422936
    MOV EDX,dword ptr [EBP + 0x14]      ; 00422939
    PUSH EDX                            ; 0042293c
    CALL FUN_00408a80                   ; 0042293d
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 00422942
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422945
    PUSH 0x5ccab6                       ; 00422948 | = "stake_b.kfm"
    FLD float ptr [0x005f4084]          ; 0042294d | DAT_005f4084
    PUSH 0x7bdadc                       ; 00422953 | DAT_007bdadc
    FSTP float ptr [EAX + 0x2574]       ; 00422958
    MOV dword ptr [EAX + 0x3448],0x0    ; 0042295e
    CALL FUN_0044fd70                   ; 00422968
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0042296d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00422970
    PUSH 0x7bdadc                       ; 00422973 | DAT_007bdadc
    LEA EDI,[ESI + 0xf0]                ; 00422978
    CALL FUN_0044fd00                   ; 0042297e
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00422983
    MOV EBX,dword ptr [ESI + 0x2620]    ; 00422986
        ;   Label: LAB_00422986
    TEST EBX,EBX                        ; 0042298c
    JNZ 0x00422b2f                      ; 0042298e
        ;   XREF to: 00422b2f (CONDITIONAL_JUMP)  ; LAB_00422b2f
    ADD ESI,0x78                        ; 00422994
        ;   Label: LAB_00422994
    CMP ESI,EDI                         ; 00422997
    JNZ 0x00422986                      ; 00422999
        ;   XREF to: 00422986 (CONDITIONAL_JUMP)  ; LAB_00422986
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042299b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042299e
    MOV DL,byte ptr [EAX + 0x2514]      ; 004229a1
    ADD EBX,0x2b4                       ; 004229a7
    TEST DL,DL                          ; 004229ad
    JZ 0x004229e8                       ; 004229af
        ;   XREF to: 004229e8 (CONDITIONAL_JUMP)  ; LAB_004229e8
    FLD float ptr [EAX + 0x2824]        ; 004229b1
    PUSH EBX                            ; 004229b7
    FSTP float ptr [EAX + 0x308]        ; 004229b8
    CALL FUN_00547480                   ; 004229be
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 004229c3
    PUSH 0x0                            ; 004229c6
    PUSH 0x5ccb12                       ; 004229c8 | = "bip01 head"
    PUSH EBX                            ; 004229cd
    CALL FUN_00547890                   ; 004229ce
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004229d3
    PUSH EAX                            ; 004229d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004229d7
    CALL FUN_00540e80                   ; 004229da
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004229df
    MOV dword ptr [EBX + 0x27e0],EAX    ; 004229e2
    MOV ECX,dword ptr [EBP + 0x14]      ; 004229e8
        ;   Label: LAB_004229e8
    PUSH ECX                            ; 004229eb
    CALL FUN_00429390                   ; 004229ec
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; undefined FUN_00429390()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004229f1
    MOV EBX,dword ptr [EAX + 0x2810]    ; 004229f4
    ADD ESP,0x4                         ; 004229fa
    TEST EBX,EBX                        ; 004229fd
    JZ 0x00422ab0                       ; 004229ff
        ;   XREF to: 00422ab0 (CONDITIONAL_JUMP)  ; LAB_00422ab0
    ADD EAX,0x2b4                       ; 00422a05
    PUSH EAX                            ; 00422a0a
    CALL FUN_00547890                   ; 00422a0b
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 00422a10
    MOV ESI,EAX                         ; 00422a13
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422a15
    PUSH 0x5ccb1d                       ; 00422a18 | = "shadow.dfm"
    ADD EAX,0x2514                      ; 00422a1d
    PUSH EAX                            ; 00422a22
    XOR EDI,EDI                         ; 00422a23
    MOV dword ptr [EAX + 0x1054],0x4    ; 00422a25
    CALL FUN_005b8130                   ; 00422a2f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00422a34
    TEST EAX,EAX                        ; 00422a37
    JNZ 0x00422a40                      ; 00422a39
        ;   XREF to: 00422a40 (CONDITIONAL_JUMP)  ; LAB_00422a40
    MOV EDI,0x10                        ; 00422a3b
    MOV EAX,dword ptr [ESI + 0x1d1f8]   ; 00422a40
        ;   Label: LAB_00422a40
    MOV EBX,EDI                         ; 00422a46
    CMP EDI,EAX                         ; 00422a48
    JGE 0x00422a70                      ; 00422a4a
        ;   XREF to: 00422a70 (CONDITIONAL_JUMP)  ; LAB_00422a70
    PUSH EBX                            ; 00422a4c
        ;   Label: LAB_00422a4c
    PUSH ESI                            ; 00422a4d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00422a4e
    PUSH EDX                            ; 00422a51
    INC EBX                             ; 00422a52
    CALL FUN_00425bb0                   ; 00422a53
        ;   XREF to: 00425bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00425bb0()
    MOV ECX,dword ptr [ESI + 0x1d1f8]   ; 00422a58
    ADD ESP,0xc                         ; 00422a5e
    CMP EBX,ECX                         ; 00422a61
    JL 0x00422a4c                       ; 00422a63
        ;   XREF to: 00422a4c (CONDITIONAL_JUMP)  ; LAB_00422a4c
    LEA EAX,[EAX]                       ; 00422a65
    LEA EDX,[EDX]                       ; 00422a6b
    MOV EBX,EBX                         ; 00422a6e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422a70
        ;   Label: LAB_00422a70
    MOV EBX,dword ptr [EAX + 0x3564]    ; 00422a73
    XOR ESI,ESI                         ; 00422a79
    TEST EBX,EBX                        ; 00422a7b
    JLE 0x00422ab0                      ; 00422a7d
        ;   XREF to: 00422ab0 (CONDITIONAL_JUMP)  ; LAB_00422ab0
    MOV EDI,dword ptr [EBP + 0x14]      ; 00422a7f
    MOV EBX,EAX                         ; 00422a82
    ADD EBX,0x18                        ; 00422a84
        ;   Label: LAB_00422a84
    MOV dword ptr [EAX + 0x3d24],0x4    ; 00422a87
    MOV dword ptr [EBX + 0x356c],0x40000000 ; 00422a91
    INC ESI                             ; 00422a9b
    MOV EDX,dword ptr [EDI + 0x3564]    ; 00422a9c
    ADD EAX,0x400                       ; 00422aa2
    CMP ESI,EDX                         ; 00422aa7
    JL 0x00422a84                       ; 00422aa9
        ;   XREF to: 00422a84 (CONDITIONAL_JUMP)  ; LAB_00422a84
    LEA EAX,[EAX]                       ; 00422aab
    MOV ECX,ECX                         ; 00422aae
    MOV EBX,dword ptr [EBP + 0x14]      ; 00422ab0
        ;   Label: LAB_00422ab0
    ADD EBX,0x2d0c                      ; 00422ab3
    PUSH EBX                            ; 00422ab9
    CALL FUN_005b14a0                   ; 00422aba
        ;   XREF to: 005b14a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b14a0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422abf
    ADD ESP,0x4                         ; 00422ac2
    ADD EAX,0x2b4                       ; 00422ac5
    MOV ESI,dword ptr [EBP + 0x14]      ; 00422aca
    PUSH EAX                            ; 00422acd
    ADD ESI,0x30                        ; 00422ace
    MOV EDI,dword ptr [EBP + 0x14]      ; 00422ad1
    PUSH ESI                            ; 00422ad4
    ADD EDI,0x20                        ; 00422ad5
    PUSH EDI                            ; 00422ad8
    PUSH EBX                            ; 00422ad9
    MOV dword ptr [EBP + -0x4],EAX      ; 00422ada
    CALL FUN_005b1740                   ; 00422add
        ;   XREF to: 005b1740 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1740()
    ADD ESP,0x10                        ; 00422ae2
    MOV EAX,dword ptr [EBP + -0x4]      ; 00422ae5
    PUSH EAX                            ; 00422ae8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422ae9
    PUSH dword ptr [EAX + 0x2574]       ; 00422aec
    PUSH 0x41200000                     ; 00422af2
    PUSH ESI                            ; 00422af7
    PUSH EDI                            ; 00422af8
    PUSH EBX                            ; 00422af9
    CALL FUN_005b1780                   ; 00422afa
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1780()
    ADD ESP,0x18                        ; 00422aff
    MOV EDX,dword ptr [EBP + 0x14]      ; 00422b02
    PUSH EDX                            ; 00422b05
    CALL FUN_0042a3d0                   ; 00422b06
        ;   XREF to: 0042a3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a3d0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422b0b
    MOV DH,byte ptr [EAX + 0x25b4]      ; 00422b0e
    ADD ESP,0x4                         ; 00422b14
    TEST DH,DH                          ; 00422b17
    JZ 0x00422b94                       ; 00422b19
        ;   XREF to: 00422b94 (CONDITIONAL_JUMP)  ; LAB_00422b94
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422b1b
    MOV dword ptr [EAX + 0x10220],0x0   ; 00422b1e
    MOV ESP,EBP                         ; 00422b28
    POP EBP                             ; 00422b2a
    POP EDI                             ; 00422b2b
    POP ESI                             ; 00422b2c
    POP EBX                             ; 00422b2d
    RET                                 ; 00422b2e
    PUSH EBX                            ; 00422b2f
        ;   Label: LAB_00422b2f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00422b30
    CALL dword ptr [EAX + 0x9c]         ; 00422b36
    ADD ESP,0x4                         ; 00422b3c
    TEST EAX,EAX                        ; 00422b3f
    JZ 0x00422b7b                       ; 00422b41
        ;   XREF to: 00422b7b (CONDITIONAL_JUMP)  ; LAB_00422b7b
    CMP EAX,dword ptr [EBP + 0x14]      ; 00422b43
    JZ 0x00422994                       ; 00422b46
        ;   XREF to: 00422994 (CONDITIONAL_JUMP)  ; LAB_00422994
    PUSH EAX                            ; 00422b4c
    PUSH EBX                            ; 00422b4d
    PUSH EBX                            ; 00422b4e
    MOV EBX,dword ptr [EBP + 0x14]      ; 00422b4f
    PUSH EBX                            ; 00422b52
    MOV EDX,0x5ccac2                    ; 00422b53 | = "..\\core\\charactr.cpp"
    MOV ECX,0x151                       ; 00422b58
    PUSH 0x5ccad7                       ; 00422b5d | = "%s is carrying %s, but %s thinks it i..."
    MOV dword ptr [0x01d046a0],EDX      ; 00422b62 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00422b68 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00422b6e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x14                        ; 00422b73
    JMP 0x00422994                      ; 00422b76
        ;   XREF to: 00422994 (UNCONDITIONAL_JUMP)  ; LAB_00422994
    MOV EDX,dword ptr [EBP + 0x14]      ; 00422b7b
        ;   Label: LAB_00422b7b
    PUSH EDX                            ; 00422b7e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00422b7f
    PUSH EBX                            ; 00422b85
    CALL dword ptr [EAX + 0x90]         ; 00422b86
    ADD ESP,0x8                         ; 00422b8c
    JMP 0x00422994                      ; 00422b8f
        ;   XREF to: 00422994 (UNCONDITIONAL_JUMP)  ; LAB_00422994
    PUSH EAX                            ; 00422b94
        ;   Label: LAB_00422b94
    MOV EDI,dword ptr [EBP + 0x14]      ; 00422b95
    CALL FUN_00408a50                   ; 00422b98
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a50()
    ADD ESP,0x4                         ; 00422b9d
    LEA ESI,[EAX + 0x1]                 ; 00422ba0
    ADD EDI,0x25b4                      ; 00422ba3
    PUSH EDI                            ; 00422ba9
    MOV AL,byte ptr [ESI]               ; 00422baa
        ;   Label: LAB_00422baa
    MOV byte ptr [EDI],AL               ; 00422bac
    CMP AL,0x0                          ; 00422bae
    JZ 0x00422bc2                       ; 00422bb0
        ;   XREF to: 00422bc2 (CONDITIONAL_JUMP)  ; LAB_00422bc2
    MOV AL,byte ptr [ESI + 0x1]         ; 00422bb2
    ADD ESI,0x2                         ; 00422bb5
    MOV byte ptr [EDI + 0x1],AL         ; 00422bb8
    ADD EDI,0x2                         ; 00422bbb
    CMP AL,0x0                          ; 00422bbe
    JNZ 0x00422baa                      ; 00422bc0
        ;   XREF to: 00422baa (CONDITIONAL_JUMP)  ; LAB_00422baa
    POP EDI                             ; 00422bc2
        ;   Label: LAB_00422bc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422bc3
    MOV dword ptr [EAX + 0x10220],0x0   ; 00422bc6
    MOV ESP,EBP                         ; 00422bd0
    POP EBP                             ; 00422bd2
    POP EDI                             ; 00422bd3
    POP ESI                             ; 00422bd4
    POP EBX                             ; 00422bd5
    RET                                 ; 00422bd6

