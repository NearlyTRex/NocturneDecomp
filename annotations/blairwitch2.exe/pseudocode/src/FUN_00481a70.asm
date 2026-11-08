; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481a70(int *param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined        Stack[-0x528]:1  local_528
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x310]:1  local_310
; undefined        Stack[-0x30f]:1  local_30f
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[1]:
;   FUN_0055a100 at 0055a118
;
; Referenced Globals:
;   TerminatedCString s_s_s_005d285e
;   undefined4 DAT_0061b40c
;
; Called Functions:
;   FUN_00460e10
;   FUN_00460e30
;   FUN_00460e50
;   FUN_00460ed0
;   FUN_00460f50
;   FUN_00461070
;   FUN_004610a0
;   FUN_00480e70
;   FUN_00481240
;   FUN_00481300
;   FUN_0051b580
;   FUN_0051b5d0
;   FUN_005b7790
;   FUN_005b8130
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481a70
        ;   Label: FUN_00481a70
    PUSH ESI                            ; 00481a71
    PUSH EDI                            ; 00481a72
    PUSH EBP                            ; 00481a73
    SUB ESP,0x834                       ; 00481a74
    MOV EBP,dword ptr [ESP + 0x848]     ; 00481a7a
    MOV EDI,dword ptr [ESP + 0x84c]     ; 00481a81
    MOV ESI,dword ptr [ESP + 0x850]     ; 00481a88
    TEST EDI,EDI                        ; 00481a8f
    JZ 0x00481c3c                       ; 00481a91
        ;   XREF to: 00481c3c (CONDITIONAL_JUMP)  ; LAB_00481c3c
    CMP byte ptr [EDI],0x0              ; 00481a97
    JZ 0x00481c3c                       ; 00481a9a
        ;   XREF to: 00481c3c (CONDITIONAL_JUMP)  ; LAB_00481c3c
    PUSH ESI                            ; 00481aa0
    PUSH EDI                            ; 00481aa1
    PUSH 0x5d285e                       ; 00481aa2 | = "%s\\%s"
    LEA EAX,[ESP + 0x740]               ; 00481aa7
    PUSH EAX                            ; 00481aae
    CALL FUN_005b7790                   ; 00481aaf
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00481ab4
    MOV EDX,dword ptr [0x0061b40c]      ; 00481ab7 | DAT_0061b40c
        ;   Label: LAB_00481ab7
    TEST EDX,EDX                        ; 00481abd
    JZ 0x00481b91                       ; 00481abf
        ;   XREF to: 00481b91 (CONDITIONAL_JUMP)  ; LAB_00481b91
    MOV EAX,ESP                         ; 00481ac5
    PUSH EAX                            ; 00481ac7
    LEA EAX,[ESP + 0x738]               ; 00481ac8
    PUSH EAX                            ; 00481acf
    PUSH EDX                            ; 00481ad0
    CALL FUN_0051b580                   ; 00481ad1
        ;   XREF to: 0051b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b580()
    ADD ESP,0xc                         ; 00481ad6
    CMP byte ptr [ESP],0x0              ; 00481ad9
    JZ 0x00481b91                       ; 00481add
        ;   XREF to: 00481b91 (CONDITIONAL_JUMP)  ; LAB_00481b91
    LEA EAX,[ESP + 0x534]               ; 00481ae3
        ;   Label: LAB_00481ae3
    PUSH EAX                            ; 00481aea
    LEA EAX,[ESP + 0x638]               ; 00481aeb
    PUSH EAX                            ; 00481af2
    PUSH 0x0                            ; 00481af3
    PUSH 0x0                            ; 00481af5
    LEA EAX,[ESP + 0x10]                ; 00481af7
    PUSH EAX                            ; 00481afb
    CALL FUN_00461070                   ; 00481afc
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 00481b01
    CMP byte ptr [ESP + 0x534],0x2e     ; 00481b04
    JNZ 0x00481b38                      ; 00481b0c
        ;   XREF to: 00481b38 (CONDITIONAL_JUMP)  ; LAB_00481b38
    LEA EDI,[ESP + 0x534]               ; 00481b0e
    SUB ECX,ECX                         ; 00481b15
    DEC ECX                             ; 00481b17
    XOR EAX,EAX                         ; 00481b18
    SCASB.REPNE ES:EDI                  ; 00481b1a
    NOT ECX                             ; 00481b1c
    DEC ECX                             ; 00481b1e
    PUSH ECX                            ; 00481b1f
    LEA EAX,[ESP + 0x539]               ; 00481b20
    PUSH EAX                            ; 00481b27
    LEA EAX,[ESP + 0x53c]               ; 00481b28
    PUSH EAX                            ; 00481b2f
    CALL FUN_005ba1f0                   ; 00481b30
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 00481b35
    LEA EAX,[ESP + 0x534]               ; 00481b38
        ;   Label: LAB_00481b38
    PUSH EAX                            ; 00481b3f
    LEA EAX,[ESP + 0x638]               ; 00481b40
    PUSH EAX                            ; 00481b47
    PUSH 0x0                            ; 00481b48
    PUSH 0x0                            ; 00481b4a
    LEA EAX,[ESP + 0x440]               ; 00481b4c
    PUSH EAX                            ; 00481b53
    CALL FUN_004610a0                   ; 00481b54
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004610a0()
    ADD ESP,0x14                        ; 00481b59
    LEA EAX,[ESP + 0x430]               ; 00481b5c
    PUSH EAX                            ; 00481b63
    PUSH EBP                            ; 00481b64
    CALL FUN_00481300                   ; 00481b65
        ;   XREF to: 00481300 (UNCONDITIONAL_CALL)  ; undefined FUN_00481300()
    ADD ESP,0x8                         ; 00481b6a
    TEST EAX,EAX                        ; 00481b6d
    JL 0x00481c62                       ; 00481b6f
        ;   XREF to: 00481c62 (CONDITIONAL_JUMP)  ; LAB_00481c62
    MOV EAX,ESP                         ; 00481b75
        ;   Label: LAB_00481b75
    PUSH EAX                            ; 00481b77
    MOV EBX,dword ptr [0x0061b40c]      ; 00481b78 | DAT_0061b40c
    PUSH EBX                            ; 00481b7e
    CALL FUN_0051b5d0                   ; 00481b7f
        ;   XREF to: 0051b5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b5d0()
    ADD ESP,0x8                         ; 00481b84
    CMP byte ptr [ESP],0x0              ; 00481b87
    JNZ 0x00481ae3                      ; 00481b8b
        ;   XREF to: 00481ae3 (CONDITIONAL_JUMP)  ; LAB_00481ae3
    LEA EAX,[ESP + 0x31c]               ; 00481b91
        ;   Label: LAB_00481b91
    PUSH EAX                            ; 00481b98
    MOV ESI,dword ptr [EBP]             ; 00481b99
    CALL FUN_00460e10                   ; 00481b9c
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 00481ba1
    LEA EAX,[ESP + 0x734]               ; 00481ba4
    PUSH EAX                            ; 00481bab
    LEA EAX,[ESP + 0x320]               ; 00481bac
    PUSH EAX                            ; 00481bb3
    CALL FUN_00460e50                   ; 00481bb4
        ;   XREF to: 00460e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e50()
    ADD ESP,0x8                         ; 00481bb9
    CMP byte ptr [ESP + 0x31c],0x0      ; 00481bbc
    JZ 0x00481c0f                       ; 00481bc4
        ;   XREF to: 00481c0f (CONDITIONAL_JUMP)  ; LAB_00481c0f
    XOR EBX,EBX                         ; 00481bc6
        ;   Label: LAB_00481bc6
    XOR EDI,EDI                         ; 00481bc8
    TEST ESI,ESI                        ; 00481bca
    JLE 0x00481c81                      ; 00481bcc
        ;   XREF to: 00481c81 (CONDITIONAL_JUMP)  ; LAB_00481c81
    LEA EAX,[ESP + 0x31c]               ; 00481bd2
        ;   Label: LAB_00481bd2
    PUSH EAX                            ; 00481bd9
    PUSH EBX                            ; 00481bda
    PUSH EBP                            ; 00481bdb
    CALL FUN_00481240                   ; 00481bdc
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; undefined FUN_00481240()
    ADD ESP,0x8                         ; 00481be1
    PUSH EAX                            ; 00481be4
    CALL FUN_005b8130                   ; 00481be5
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00481bea
    TEST EAX,EAX                        ; 00481bed
    JNZ 0x00481c78                      ; 00481bef
        ;   XREF to: 00481c78 (CONDITIONAL_JUMP)  ; LAB_00481c78
    LEA EAX,[ESP + 0x31c]               ; 00481bf5
        ;   Label: LAB_00481bf5
    PUSH EAX                            ; 00481bfc
    CALL FUN_00460ed0                   ; 00481bfd
        ;   XREF to: 00460ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460ed0()
    ADD ESP,0x4                         ; 00481c02
    CMP byte ptr [ESP + 0x31c],0x0      ; 00481c05
    JNZ 0x00481bc6                      ; 00481c0d
        ;   XREF to: 00481bc6 (CONDITIONAL_JUMP)  ; LAB_00481bc6
    LEA EAX,[ESP + 0x31c]               ; 00481c0f
        ;   Label: LAB_00481c0f
    PUSH EAX                            ; 00481c16
    CALL FUN_00460f50                   ; 00481c17
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f50()
    ADD ESP,0x4                         ; 00481c1c
    PUSH 0x0                            ; 00481c1f
    LEA EAX,[ESP + 0x320]               ; 00481c21
    PUSH EAX                            ; 00481c28
    CALL FUN_00460e30                   ; 00481c29
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e30()
    ADD ESP,0x8                         ; 00481c2e
    ADD ESP,0x834                       ; 00481c31
    POP EBP                             ; 00481c37
    POP EDI                             ; 00481c38
    POP ESI                             ; 00481c39
    POP EBX                             ; 00481c3a
    RET                                 ; 00481c3b
    LEA EDI,[ESP + 0x734]               ; 00481c3c
        ;   Label: LAB_00481c3c
    PUSH EDI                            ; 00481c43
    MOV AL,byte ptr [ESI]               ; 00481c44
        ;   Label: LAB_00481c44
    MOV byte ptr [EDI],AL               ; 00481c46
    CMP AL,0x0                          ; 00481c48
    JZ 0x00481c5c                       ; 00481c4a
        ;   XREF to: 00481c5c (CONDITIONAL_JUMP)  ; LAB_00481c5c
    MOV AL,byte ptr [ESI + 0x1]         ; 00481c4c
    ADD ESI,0x2                         ; 00481c4f
    MOV byte ptr [EDI + 0x1],AL         ; 00481c52
    ADD EDI,0x2                         ; 00481c55
    CMP AL,0x0                          ; 00481c58
    JNZ 0x00481c44                      ; 00481c5a
        ;   XREF to: 00481c44 (CONDITIONAL_JUMP)  ; LAB_00481c44
    POP EDI                             ; 00481c5c
        ;   Label: LAB_00481c5c
    JMP 0x00481ab7                      ; 00481c5d
        ;   XREF to: 00481ab7 (UNCONDITIONAL_JUMP)  ; LAB_00481ab7
    LEA EAX,[ESP + 0x430]               ; 00481c62
        ;   Label: LAB_00481c62
    PUSH EAX                            ; 00481c69
    PUSH EBP                            ; 00481c6a
    CALL FUN_00480e70                   ; 00481c6b
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 00481c70
    JMP 0x00481b75                      ; 00481c73
        ;   XREF to: 00481b75 (UNCONDITIONAL_JUMP)  ; LAB_00481b75
    INC EBX                             ; 00481c78
        ;   Label: LAB_00481c78
    CMP EBX,ESI                         ; 00481c79
    JL 0x00481bd2                       ; 00481c7b
        ;   XREF to: 00481bd2 (CONDITIONAL_JUMP)  ; LAB_00481bd2
    TEST EDI,EDI                        ; 00481c81
        ;   Label: LAB_00481c81
    JNZ 0x00481bf5                      ; 00481c83
        ;   XREF to: 00481bf5 (CONDITIONAL_JUMP)  ; LAB_00481bf5
    LEA EAX,[ESP + 0x31c]               ; 00481c89
    PUSH EAX                            ; 00481c90
    PUSH EBP                            ; 00481c91
    CALL FUN_00480e70                   ; 00481c92
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 00481c97
    JMP 0x00481bf5                      ; 00481c9a
        ;   XREF to: 00481bf5 (UNCONDITIONAL_JUMP)  ; LAB_00481bf5

