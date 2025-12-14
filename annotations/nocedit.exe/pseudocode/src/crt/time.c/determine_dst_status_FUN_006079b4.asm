; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_time.c_determine_dst_status_FUN_006079b4(tm * timeptr)
;
; Parameters:
; tm *             Stack[0x4]:4   timeptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_time.c_localtime_r_FUN_00600230 at 00600258
;   crt_time.c_mktime_FUN_00600f80 at 006010b0
;
; Referenced Globals:
;   undefined4 DAT_00665f34+2
;   short g_DaysInMonth_Normal = 0x0
;   undefined4 DAT_00665f3a
;   undefined4 DAT_00665f50
;   short g_DaysInMonth_Leap = 0x0
;   dst_rule g_DstStartRule
;   undefined4 DAT_00685080
;   undefined4 DAT_00685084
;   undefined4 DAT_0068508c
;   undefined4 DAT_00685090
;   undefined4 DAT_00685094
;   int g_DstTransitionSecond = 0x0
;   undefined4 DAT_006850a4
;   undefined4 DAT_006850a8
;   undefined4 DAT_006850b0
;   ... and 4 more
;
; Called Functions:
;   crt_time.c_is_leap_year_FUN_00607820
;   crt_unknown.c_FUN_00607958
;   crt_unknown.c_FUN_00607c88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006079b4
        ;   Label: crt_time.c_determine_dst_status_FUN_006079b4
    PUSH ESI                            ; 006079b5
    PUSH EDI                            ; 006079b6
    PUSH EBP                            ; 006079b7
    SUB ESP,0x1c                        ; 006079b8
    MOV EBX,dword ptr [ESP + 0x30]      ; 006079bb
    MOV EAX,[0x006851c4]                ; 006079bf | = "EDT" | PTR_s_EDT_006851c4
    MOV DL,byte ptr [EAX]               ; 006079c4 | = "EDT"
    XOR ESI,ESI                         ; 006079c6
    TEST DL,DL                          ; 006079c8
    JZ 0x00607c7b                       ; 006079ca
        ;   XREF to: 00607c7b (CONDITIONAL_JUMP)  ; LAB_00607c7b
    MOV EDX,dword ptr [EBX + 0x14]      ; 006079d0
    PUSH EDX                            ; 006079d3
    PUSH 0x685098                       ; 006079d4 | g_DstTransitionSecond
    PUSH 0x685074                       ; 006079d9 | g_DstStartRule
    CALL crt_unknown.c_FUN_00607958     ; 006079de
        ;   XREF to: 00607958 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00607958()
    ADD ESP,0xc                         ; 006079e3
    MOV dword ptr [ESP + 0x10],EAX      ; 006079e6
    TEST EAX,EAX                        ; 006079ea
    JZ 0x006079fa                       ; 006079ec
        ;   XREF to: 006079fa (CONDITIONAL_JUMP)  ; LAB_006079fa
    MOV EBP,0x685098                    ; 006079ee | g_DstTransitionSecond
    MOV EDI,0x685074                    ; 006079f3 | g_DstStartRule
    JMP 0x00607a04                      ; 006079f8
        ;   XREF to: 00607a04 (UNCONDITIONAL_JUMP)  ; LAB_00607a04
    MOV EBP,0x685074                    ; 006079fa | g_DstStartRule
        ;   Label: LAB_006079fa
    MOV EDI,0x685098                    ; 006079ff | g_DstTransitionSecond
    MOV EAX,dword ptr [EBX + 0x10]      ; 00607a04
        ;   Label: LAB_00607a04
    MOV dword ptr [ESP + 0x14],EAX      ; 00607a07
    MOV EAX,dword ptr [EBX + 0x14]      ; 00607a0b
    ADD EAX,0x76c                       ; 00607a0e
    PUSH EAX                            ; 00607a13
    CALL crt_time.c_is_leap_year_FUN_00607820 ; 00607a14
        ;   XREF to: 00607820 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_00607820(int year)
    ADD ESP,0x4                         ; 00607a19
    MOV EDX,EAX                         ; 00607a1c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00607a1e
    ADD EAX,EAX                         ; 00607a22
    TEST EDX,EDX                        ; 00607a24
    JZ 0x00607a36                       ; 00607a26
        ;   XREF to: 00607a36 (CONDITIONAL_JUMP)  ; LAB_00607a36
    MOV EDX,dword ptr [EAX + 0x665f52]  ; 00607a28 | g_DaysInMonth_Leap
    MOV EAX,dword ptr [EAX + 0x665f50]  ; 00607a2e | DAT_00665f50
    JMP 0x00607a42                      ; 00607a34
        ;   XREF to: 00607a42 (UNCONDITIONAL_JUMP)  ; LAB_00607a42
    MOV EDX,dword ptr [EAX + 0x665f38]  ; 00607a36 | g_DaysInMonth_Normal
        ;   Label: LAB_00607a36
    MOV EAX,dword ptr [EAX + 0x665f36]  ; 00607a3c | DAT_00665f34+2
    SAR EDX,0x10                        ; 00607a42
        ;   Label: LAB_00607a42
    SAR EAX,0x10                        ; 00607a45
    SUB EDX,EAX                         ; 00607a48
    MOV dword ptr [ESP + 0xc],EDX       ; 00607a4a
    XOR ECX,ECX                         ; 00607a4e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00607a50 | DAT_006850b8
    MOV dword ptr [ESP + 0x4],ECX       ; 00607a53
    TEST EAX,EAX                        ; 00607a57
    JNZ 0x00607afd                      ; 00607a59
        ;   XREF to: 00607afd (CONDITIONAL_JUMP)  ; LAB_00607afd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00607a5f
    MOV ECX,dword ptr [EBP + 0x10]      ; 00607a63 | DAT_006850a8
    CMP EAX,ECX                         ; 00607a66
    JLE 0x00607a74                      ; 00607a68
        ;   XREF to: 00607a74 (CONDITIONAL_JUMP)  ; LAB_00607a74
    MOV ESI,0x1                         ; 00607a6a
    JMP 0x00607b4e                      ; 00607a6f
        ;   XREF to: 00607b4e (UNCONDITIONAL_JUMP)  ; LAB_00607b4e
    JNZ 0x00607b4e                      ; 00607a74
        ;   XREF to: 00607b4e (CONDITIONAL_JUMP)  ; LAB_00607b4e
        ;   Label: LAB_00607a74
    MOV EDX,dword ptr [EBX + 0x18]      ; 00607a7a
    MOV ECX,dword ptr [EBP + 0x18]      ; 00607a7d | DAT_006850b0
    ADD EDX,0x7                         ; 00607a80
    SUB EDX,ECX                         ; 00607a83
    MOV ECX,0x7                         ; 00607a85
    MOV EAX,EDX                         ; 00607a8a
    SAR EDX,0x1f                        ; 00607a8c
    IDIV ECX                            ; 00607a8f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00607a91
    SUB EAX,EDX                         ; 00607a94
    MOV EDX,dword ptr [EBX + 0x18]      ; 00607a96
    MOV dword ptr [ESP + 0x8],EAX       ; 00607a99
    ADD EDX,0x6                         ; 00607a9d
    MOV EAX,dword ptr [EBP + 0x18]      ; 00607aa0 | DAT_006850b0
    SUB EDX,EAX                         ; 00607aa3
    MOV EAX,EDX                         ; 00607aa5
    SAR EDX,0x1f                        ; 00607aa7
    IDIV ECX                            ; 00607aaa
    MOV ECX,dword ptr [EBX + 0xc]       ; 00607aac
    DEC ECX                             ; 00607aaf
    SUB ECX,EDX                         ; 00607ab0
    MOV EDX,dword ptr [EBP + 0xc]       ; 00607ab2 | DAT_006850a4
    CMP EDX,0x5                         ; 00607ab5
    JNZ 0x00607adf                      ; 00607ab8
        ;   XREF to: 00607adf (CONDITIONAL_JUMP)  ; LAB_00607adf
    MOV EAX,dword ptr [ESP + 0xc]       ; 00607aba
    MOV EDX,dword ptr [ESP + 0x8]       ; 00607abe
    SUB EAX,0x7                         ; 00607ac2
    CMP EAX,EDX                         ; 00607ac5
    JGE 0x00607b4e                      ; 00607ac7
        ;   XREF to: 00607b4e (CONDITIONAL_JUMP)  ; LAB_00607b4e
    MOV ESI,0x1                         ; 00607acd
    CMP ECX,EAX                         ; 00607ad2
    JG 0x00607b4e                       ; 00607ad4
        ;   XREF to: 00607b4e (CONDITIONAL_JUMP)  ; LAB_00607b4e
    JMP 0x00607b55                      ; 00607ada
        ;   XREF to: 00607b55 (UNCONDITIONAL_JUMP)  ; LAB_00607b55
    DEC EDX                             ; 00607adf
        ;   Label: LAB_00607adf
    LEA EAX,[EDX*0x8 + 0x0]             ; 00607ae0
    SUB EAX,EDX                         ; 00607ae7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00607ae9
    INC EAX                             ; 00607aed
    CMP EAX,EDX                         ; 00607aee
    JG 0x00607b4e                       ; 00607af0
        ;   XREF to: 00607b4e (CONDITIONAL_JUMP)  ; LAB_00607b4e
    MOV ESI,0x1                         ; 00607af2
    CMP ECX,EAX                         ; 00607af7
    JGE 0x00607b4e                      ; 00607af9
        ;   XREF to: 00607b4e (CONDITIONAL_JUMP)  ; LAB_00607b4e
    JMP 0x00607b55                      ; 00607afb
        ;   XREF to: 00607b55 (UNCONDITIONAL_JUMP)  ; LAB_00607b55
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00607afd | DAT_006850b4
        ;   Label: LAB_00607afd
    MOV EDX,dword ptr [EBP + 0x20]      ; 00607b00 | DAT_006850b8
    MOV dword ptr [ESP + 0x18],EAX      ; 00607b03
    CMP EDX,0x1                         ; 00607b07
    JNZ 0x00607b3c                      ; 00607b0a
        ;   XREF to: 00607b3c (CONDITIONAL_JUMP)  ; LAB_00607b3c
    MOV EAX,dword ptr [EBX + 0x14]      ; 00607b0c
    ADD EAX,0x76c                       ; 00607b0f
    PUSH EAX                            ; 00607b14
    CALL crt_time.c_is_leap_year_FUN_00607820 ; 00607b15
        ;   XREF to: 00607820 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_00607820(int year)
    ADD ESP,0x4                         ; 00607b1a
    TEST EAX,EAX                        ; 00607b1d
    JZ 0x00607b38                       ; 00607b1f
        ;   XREF to: 00607b38 (CONDITIONAL_JUMP)  ; LAB_00607b38
    MOV EAX,[0x00665f3a]                ; 00607b21 | DAT_00665f3a
    MOV ECX,dword ptr [ESP + 0x18]      ; 00607b26
    SAR EAX,0x10                        ; 00607b2a
    CMP EAX,ECX                         ; 00607b2d
    JGE 0x00607b38                      ; 00607b2f
        ;   XREF to: 00607b38 (CONDITIONAL_JUMP)  ; LAB_00607b38
    LEA EAX,[ECX + 0x1]                 ; 00607b31
    MOV dword ptr [ESP + 0x18],EAX      ; 00607b34
    DEC dword ptr [ESP + 0x18]          ; 00607b38
        ;   Label: LAB_00607b38
    MOV ECX,dword ptr [ESP + 0x18]      ; 00607b3c
        ;   Label: LAB_00607b3c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00607b40
    CMP EAX,ECX                         ; 00607b43
    JL 0x00607b4e                       ; 00607b45
        ;   XREF to: 00607b4e (CONDITIONAL_JUMP)  ; LAB_00607b4e
    MOV ESI,0x1                         ; 00607b47
    JZ 0x00607b55                       ; 00607b4c
        ;   XREF to: 00607b55 (CONDITIONAL_JUMP)  ; LAB_00607b55
    CMP dword ptr [ESP + 0x4],0x0       ; 00607b4e
        ;   Label: LAB_00607b4e
    JZ 0x00607b6c                       ; 00607b53
        ;   XREF to: 00607b6c (CONDITIONAL_JUMP)  ; LAB_00607b6c
    PUSH EBP                            ; 00607b55 | g_DstTransitionSecond
        ;   Label: LAB_00607b55
    PUSH EBX                            ; 00607b56
    CALL crt_unknown.c_FUN_00607c88     ; 00607b57
        ;   XREF to: 00607c88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00607c88()
    ADD ESP,0x8                         ; 00607b5c
    TEST EAX,EAX                        ; 00607b5f
    SETZ AL                             ; 00607b61
    MOV ESI,EAX                         ; 00607b64
    AND ESI,0xff                        ; 00607b66
    TEST ESI,ESI                        ; 00607b6c
        ;   Label: LAB_00607b6c
    JNZ 0x00607b83                      ; 00607b6e
        ;   XREF to: 00607b83 (CONDITIONAL_JUMP)  ; LAB_00607b83
    MOV EDX,dword ptr [ESP + 0x10]      ; 00607b70
    TEST EDX,EDX                        ; 00607b74
    JZ 0x00607c7b                       ; 00607b76
        ;   XREF to: 00607c7b (CONDITIONAL_JUMP)  ; LAB_00607c7b
    MOV ESI,EDX                         ; 00607b7c
    JMP 0x00607c7b                      ; 00607b7e
        ;   XREF to: 00607c7b (UNCONDITIONAL_JUMP)  ; LAB_00607c7b
    XOR EBP,EBP                         ; 00607b83
        ;   Label: LAB_00607b83
    MOV EAX,dword ptr [EDI + 0x20]      ; 00607b85 | DAT_00685094
    MOV dword ptr [ESP],EBP             ; 00607b88
    TEST EAX,EAX                        ; 00607b8b
    JNZ 0x00607c25                      ; 00607b8d
        ;   XREF to: 00607c25 (CONDITIONAL_JUMP)  ; LAB_00607c25
    MOV EAX,dword ptr [ESP + 0x14]      ; 00607b93
    MOV EDX,dword ptr [EDI + 0x10]      ; 00607b97 | DAT_00685084
    CMP EAX,EDX                         ; 00607b9a
    JLE 0x00607ba5                      ; 00607b9c
        ;   XREF to: 00607ba5 (CONDITIONAL_JUMP)  ; LAB_00607ba5
    XOR ESI,ESI                         ; 00607b9e
    JMP 0x00607c5d                      ; 00607ba0
        ;   XREF to: 00607c5d (UNCONDITIONAL_JUMP)  ; LAB_00607c5d
    JNZ 0x00607c5d                      ; 00607ba5
        ;   XREF to: 00607c5d (CONDITIONAL_JUMP)  ; LAB_00607c5d
        ;   Label: LAB_00607ba5
    MOV EDX,dword ptr [EBX + 0x18]      ; 00607bab
    MOV EBP,dword ptr [EDI + 0x18]      ; 00607bae | DAT_0068508c
    ADD EDX,0x7                         ; 00607bb1
    SUB EDX,EBP                         ; 00607bb4
    MOV ECX,0x7                         ; 00607bb6
    MOV EAX,EDX                         ; 00607bbb
    SAR EDX,0x1f                        ; 00607bbd
    IDIV ECX                            ; 00607bc0
    MOV EBP,dword ptr [EBX + 0xc]       ; 00607bc2
    SUB EBP,EDX                         ; 00607bc5
    MOV EDX,dword ptr [EBX + 0x18]      ; 00607bc7
    MOV EAX,dword ptr [EDI + 0x18]      ; 00607bca | DAT_0068508c
    ADD EDX,0x6                         ; 00607bcd
    SUB EDX,EAX                         ; 00607bd0
    MOV EAX,EDX                         ; 00607bd2
    SAR EDX,0x1f                        ; 00607bd4
    IDIV ECX                            ; 00607bd7
    MOV EAX,dword ptr [EBX + 0xc]       ; 00607bd9
    DEC EAX                             ; 00607bdc
    XOR ESI,ESI                         ; 00607bdd
    SUB EAX,EDX                         ; 00607bdf
    MOV ECX,dword ptr [EDI + 0xc]       ; 00607be1 | DAT_00685080
    MOV EDX,EAX                         ; 00607be4
    CMP ECX,0x5                         ; 00607be6
    JNZ 0x00607c09                      ; 00607be9
        ;   XREF to: 00607c09 (CONDITIONAL_JUMP)  ; LAB_00607c09
    MOV EAX,dword ptr [ESP + 0xc]       ; 00607beb
    SUB EAX,0x7                         ; 00607bef
    CMP EBP,EAX                         ; 00607bf2
    JG 0x00607c00                       ; 00607bf4
        ;   XREF to: 00607c00 (CONDITIONAL_JUMP)  ; LAB_00607c00
    MOV ESI,0x1                         ; 00607bf6
    JMP 0x00607c5d                      ; 00607bfb
        ;   XREF to: 00607c5d (UNCONDITIONAL_JUMP)  ; LAB_00607c5d
    CMP EDX,EAX                         ; 00607c00
        ;   Label: LAB_00607c00
    JG 0x00607c5d                       ; 00607c02
        ;   XREF to: 00607c5d (CONDITIONAL_JUMP)  ; LAB_00607c5d
    JMP 0x00607c63                      ; 00607c04
        ;   XREF to: 00607c63 (UNCONDITIONAL_JUMP)  ; LAB_00607c63
    DEC ECX                             ; 00607c09
        ;   Label: LAB_00607c09
    LEA EAX,[ECX*0x8 + 0x0]             ; 00607c0a
    SUB EAX,ECX                         ; 00607c11
    INC EAX                             ; 00607c13
    CMP EBP,EAX                         ; 00607c14
    JGE 0x00607c1f                      ; 00607c16
        ;   XREF to: 00607c1f (CONDITIONAL_JUMP)  ; LAB_00607c1f
    MOV ESI,0x1                         ; 00607c18
    JMP 0x00607c5d                      ; 00607c1d
        ;   XREF to: 00607c5d (UNCONDITIONAL_JUMP)  ; LAB_00607c5d
    CMP EDX,EAX                         ; 00607c1f
        ;   Label: LAB_00607c1f
    JGE 0x00607c5d                      ; 00607c21
        ;   XREF to: 00607c5d (CONDITIONAL_JUMP)  ; LAB_00607c5d
    JMP 0x00607c63                      ; 00607c23
        ;   XREF to: 00607c63 (UNCONDITIONAL_JUMP)  ; LAB_00607c63
    MOV EBP,dword ptr [EDI + 0x1c]      ; 00607c25 | DAT_00685090
        ;   Label: LAB_00607c25
    CMP EAX,0x1                         ; 00607c28
    JNZ 0x00607c50                      ; 00607c2b
        ;   XREF to: 00607c50 (CONDITIONAL_JUMP)  ; LAB_00607c50
    MOV EAX,dword ptr [EBX + 0x14]      ; 00607c2d
    ADD EAX,0x76c                       ; 00607c30
    PUSH EAX                            ; 00607c35
    CALL crt_time.c_is_leap_year_FUN_00607820 ; 00607c36
        ;   XREF to: 00607820 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_00607820(int year)
    ADD ESP,0x4                         ; 00607c3b
    TEST EAX,EAX                        ; 00607c3e
    JZ 0x00607c4f                       ; 00607c40
        ;   XREF to: 00607c4f (CONDITIONAL_JUMP)  ; LAB_00607c4f
    MOV EAX,[0x00665f3a]                ; 00607c42 | DAT_00665f3a
    SAR EAX,0x10                        ; 00607c47
    CMP EBP,EAX                         ; 00607c4a
    JLE 0x00607c4f                      ; 00607c4c
        ;   XREF to: 00607c4f (CONDITIONAL_JUMP)  ; LAB_00607c4f
    INC EBP                             ; 00607c4e
    DEC EBP                             ; 00607c4f
        ;   Label: LAB_00607c4f
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00607c50
        ;   Label: LAB_00607c50
    CMP EBP,ECX                         ; 00607c53
    JG 0x00607c5d                       ; 00607c55
        ;   XREF to: 00607c5d (CONDITIONAL_JUMP)  ; LAB_00607c5d
    XOR ESI,ESI                         ; 00607c57
    CMP EBP,ECX                         ; 00607c59
    JZ 0x00607c63                       ; 00607c5b
        ;   XREF to: 00607c63 (CONDITIONAL_JUMP)  ; LAB_00607c63
    CMP dword ptr [ESP],0x0             ; 00607c5d
        ;   Label: LAB_00607c5d
    JZ 0x00607c6f                       ; 00607c61
        ;   XREF to: 00607c6f (CONDITIONAL_JUMP)  ; LAB_00607c6f
    PUSH EDI                            ; 00607c63 | g_DstStartRule
        ;   Label: LAB_00607c63
    PUSH EBX                            ; 00607c64
    CALL crt_unknown.c_FUN_00607c88     ; 00607c65
        ;   XREF to: 00607c88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00607c88()
    ADD ESP,0x8                         ; 00607c6a
    MOV ESI,EAX                         ; 00607c6d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00607c6f
        ;   Label: LAB_00607c6f
    TEST EAX,EAX                        ; 00607c73
    JZ 0x00607c7b                       ; 00607c75
        ;   XREF to: 00607c7b (CONDITIONAL_JUMP)  ; LAB_00607c7b
    SUB EAX,ESI                         ; 00607c77
    MOV ESI,EAX                         ; 00607c79
    MOV EAX,ESI                         ; 00607c7b
        ;   Label: LAB_00607c7b
    MOV dword ptr [EBX + 0x20],ESI      ; 00607c7d
    ADD ESP,0x1c                        ; 00607c80
    POP EBP                             ; 00607c83
    POP EDI                             ; 00607c84
    POP ESI                             ; 00607c85
    POP EBX                             ; 00607c86
    RET                                 ; 00607c87

