; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482c70(int *param_1,char *param_2,char *param_3)
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
;   FUN_0055fc60 at 0055fc78
;
; Referenced Globals:
;   TerminatedCString s_s_s_005bd6b4
;   undefined4 DAT_0060395c
;
; Called Functions:
;   FUN_00465b60
;   FUN_00465b80
;   FUN_00465ba0
;   FUN_00465c20
;   FUN_00465ca0
;   FUN_00465e50
;   FUN_00465e80
;   FUN_00482070
;   FUN_00482440
;   FUN_00482500
;   FUN_00514860
;   FUN_005148b0
;   FUN_005a28c0
;   FUN_005a3260
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482c70
        ;   Label: FUN_00482c70
    PUSH ESI                            ; 00482c71
    PUSH EDI                            ; 00482c72
    PUSH EBP                            ; 00482c73
    SUB ESP,0x834                       ; 00482c74
    MOV EBP,dword ptr [ESP + 0x848]     ; 00482c7a
    MOV EDI,dword ptr [ESP + 0x84c]     ; 00482c81
    MOV ESI,dword ptr [ESP + 0x850]     ; 00482c88
    TEST EDI,EDI                        ; 00482c8f
    JZ 0x00482e3c                       ; 00482c91
        ;   XREF to: 00482e3c (CONDITIONAL_JUMP)  ; LAB_00482e3c
    CMP byte ptr [EDI],0x0              ; 00482c97
    JZ 0x00482e3c                       ; 00482c9a
        ;   XREF to: 00482e3c (CONDITIONAL_JUMP)  ; LAB_00482e3c
    PUSH ESI                            ; 00482ca0
    PUSH EDI                            ; 00482ca1
    PUSH 0x5bd6b4                       ; 00482ca2 | = "%s\\%s"
    LEA EAX,[ESP + 0x740]               ; 00482ca7
    PUSH EAX                            ; 00482cae
    CALL FUN_005a28c0                   ; 00482caf
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 00482cb4
    MOV EDX,dword ptr [0x0060395c]      ; 00482cb7 | DAT_0060395c
        ;   Label: LAB_00482cb7
    TEST EDX,EDX                        ; 00482cbd
    JZ 0x00482d91                       ; 00482cbf
        ;   XREF to: 00482d91 (CONDITIONAL_JUMP)  ; LAB_00482d91
    MOV EAX,ESP                         ; 00482cc5
    PUSH EAX                            ; 00482cc7
    LEA EAX,[ESP + 0x738]               ; 00482cc8
    PUSH EAX                            ; 00482ccf
    PUSH EDX                            ; 00482cd0
    CALL FUN_00514860                   ; 00482cd1
        ;   XREF to: 00514860 (UNCONDITIONAL_CALL)  ; undefined FUN_00514860()
    ADD ESP,0xc                         ; 00482cd6
    CMP byte ptr [ESP],0x0              ; 00482cd9
    JZ 0x00482d91                       ; 00482cdd
        ;   XREF to: 00482d91 (CONDITIONAL_JUMP)  ; LAB_00482d91
    LEA EAX,[ESP + 0x534]               ; 00482ce3
        ;   Label: LAB_00482ce3
    PUSH EAX                            ; 00482cea
    LEA EAX,[ESP + 0x638]               ; 00482ceb
    PUSH EAX                            ; 00482cf2
    PUSH 0x0                            ; 00482cf3
    PUSH 0x0                            ; 00482cf5
    LEA EAX,[ESP + 0x10]                ; 00482cf7
    PUSH EAX                            ; 00482cfb
    CALL FUN_00465e50                   ; 00482cfc
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e50()
    ADD ESP,0x14                        ; 00482d01
    CMP byte ptr [ESP + 0x534],0x2e     ; 00482d04
    JNZ 0x00482d38                      ; 00482d0c
        ;   XREF to: 00482d38 (CONDITIONAL_JUMP)  ; LAB_00482d38
    LEA EDI,[ESP + 0x534]               ; 00482d0e
    SUB ECX,ECX                         ; 00482d15
    DEC ECX                             ; 00482d17
    XOR EAX,EAX                         ; 00482d18
    SCASB.REPNE ES:EDI                  ; 00482d1a
    NOT ECX                             ; 00482d1c
    DEC ECX                             ; 00482d1e
    PUSH ECX                            ; 00482d1f
    LEA EAX,[ESP + 0x539]               ; 00482d20
    PUSH EAX                            ; 00482d27
    LEA EAX,[ESP + 0x53c]               ; 00482d28
    PUSH EAX                            ; 00482d2f
    CALL FUN_005a54c0                   ; 00482d30
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 00482d35
    LEA EAX,[ESP + 0x534]               ; 00482d38
        ;   Label: LAB_00482d38
    PUSH EAX                            ; 00482d3f
    LEA EAX,[ESP + 0x638]               ; 00482d40
    PUSH EAX                            ; 00482d47
    PUSH 0x0                            ; 00482d48
    PUSH 0x0                            ; 00482d4a
    LEA EAX,[ESP + 0x440]               ; 00482d4c
    PUSH EAX                            ; 00482d53
    CALL FUN_00465e80                   ; 00482d54
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e80()
    ADD ESP,0x14                        ; 00482d59
    LEA EAX,[ESP + 0x430]               ; 00482d5c
    PUSH EAX                            ; 00482d63
    PUSH EBP                            ; 00482d64
    CALL FUN_00482500                   ; 00482d65
        ;   XREF to: 00482500 (UNCONDITIONAL_CALL)  ; undefined FUN_00482500()
    ADD ESP,0x8                         ; 00482d6a
    TEST EAX,EAX                        ; 00482d6d
    JL 0x00482e62                       ; 00482d6f
        ;   XREF to: 00482e62 (CONDITIONAL_JUMP)  ; LAB_00482e62
    MOV EAX,ESP                         ; 00482d75
        ;   Label: LAB_00482d75
    PUSH EAX                            ; 00482d77
    MOV EBX,dword ptr [0x0060395c]      ; 00482d78 | DAT_0060395c
    PUSH EBX                            ; 00482d7e
    CALL FUN_005148b0                   ; 00482d7f
        ;   XREF to: 005148b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005148b0()
    ADD ESP,0x8                         ; 00482d84
    CMP byte ptr [ESP],0x0              ; 00482d87
    JNZ 0x00482ce3                      ; 00482d8b
        ;   XREF to: 00482ce3 (CONDITIONAL_JUMP)  ; LAB_00482ce3
    LEA EAX,[ESP + 0x31c]               ; 00482d91
        ;   Label: LAB_00482d91
    PUSH EAX                            ; 00482d98
    MOV ESI,dword ptr [EBP]             ; 00482d99
    CALL FUN_00465b60                   ; 00482d9c
        ;   XREF to: 00465b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00465b60()
    ADD ESP,0x4                         ; 00482da1
    LEA EAX,[ESP + 0x734]               ; 00482da4
    PUSH EAX                            ; 00482dab
    LEA EAX,[ESP + 0x320]               ; 00482dac
    PUSH EAX                            ; 00482db3
    CALL FUN_00465ba0                   ; 00482db4
        ;   XREF to: 00465ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ba0()
    ADD ESP,0x8                         ; 00482db9
    CMP byte ptr [ESP + 0x31c],0x0      ; 00482dbc
    JZ 0x00482e0f                       ; 00482dc4
        ;   XREF to: 00482e0f (CONDITIONAL_JUMP)  ; LAB_00482e0f
    XOR EBX,EBX                         ; 00482dc6
        ;   Label: LAB_00482dc6
    XOR EDI,EDI                         ; 00482dc8
    TEST ESI,ESI                        ; 00482dca
    JLE 0x00482e81                      ; 00482dcc
        ;   XREF to: 00482e81 (CONDITIONAL_JUMP)  ; LAB_00482e81
    LEA EAX,[ESP + 0x31c]               ; 00482dd2
        ;   Label: LAB_00482dd2
    PUSH EAX                            ; 00482dd9
    PUSH EBX                            ; 00482dda
    PUSH EBP                            ; 00482ddb
    CALL FUN_00482440                   ; 00482ddc
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    ADD ESP,0x8                         ; 00482de1
    PUSH EAX                            ; 00482de4
    CALL FUN_005a3260                   ; 00482de5
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00482dea
    TEST EAX,EAX                        ; 00482ded
    JNZ 0x00482e78                      ; 00482def
        ;   XREF to: 00482e78 (CONDITIONAL_JUMP)  ; LAB_00482e78
    LEA EAX,[ESP + 0x31c]               ; 00482df5
        ;   Label: LAB_00482df5
    PUSH EAX                            ; 00482dfc
    CALL FUN_00465c20                   ; 00482dfd
        ;   XREF to: 00465c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00465c20()
    ADD ESP,0x4                         ; 00482e02
    CMP byte ptr [ESP + 0x31c],0x0      ; 00482e05
    JNZ 0x00482dc6                      ; 00482e0d
        ;   XREF to: 00482dc6 (CONDITIONAL_JUMP)  ; LAB_00482dc6
    LEA EAX,[ESP + 0x31c]               ; 00482e0f
        ;   Label: LAB_00482e0f
    PUSH EAX                            ; 00482e16
    CALL FUN_00465ca0                   ; 00482e17
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ca0()
    ADD ESP,0x4                         ; 00482e1c
    PUSH 0x0                            ; 00482e1f
    LEA EAX,[ESP + 0x320]               ; 00482e21
    PUSH EAX                            ; 00482e28
    CALL FUN_00465b80                   ; 00482e29
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00465b80()
    ADD ESP,0x8                         ; 00482e2e
    ADD ESP,0x834                       ; 00482e31
    POP EBP                             ; 00482e37
    POP EDI                             ; 00482e38
    POP ESI                             ; 00482e39
    POP EBX                             ; 00482e3a
    RET                                 ; 00482e3b
    LEA EDI,[ESP + 0x734]               ; 00482e3c
        ;   Label: LAB_00482e3c
    PUSH EDI                            ; 00482e43
    MOV AL,byte ptr [ESI]               ; 00482e44
        ;   Label: LAB_00482e44
    MOV byte ptr [EDI],AL               ; 00482e46
    CMP AL,0x0                          ; 00482e48
    JZ 0x00482e5c                       ; 00482e4a
        ;   XREF to: 00482e5c (CONDITIONAL_JUMP)  ; LAB_00482e5c
    MOV AL,byte ptr [ESI + 0x1]         ; 00482e4c
    ADD ESI,0x2                         ; 00482e4f
    MOV byte ptr [EDI + 0x1],AL         ; 00482e52
    ADD EDI,0x2                         ; 00482e55
    CMP AL,0x0                          ; 00482e58
    JNZ 0x00482e44                      ; 00482e5a
        ;   XREF to: 00482e44 (CONDITIONAL_JUMP)  ; LAB_00482e44
    POP EDI                             ; 00482e5c
        ;   Label: LAB_00482e5c
    JMP 0x00482cb7                      ; 00482e5d
        ;   XREF to: 00482cb7 (UNCONDITIONAL_JUMP)  ; LAB_00482cb7
    LEA EAX,[ESP + 0x430]               ; 00482e62
        ;   Label: LAB_00482e62
    PUSH EAX                            ; 00482e69
    PUSH EBP                            ; 00482e6a
    CALL FUN_00482070                   ; 00482e6b
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; undefined FUN_00482070()
    ADD ESP,0x8                         ; 00482e70
    JMP 0x00482d75                      ; 00482e73
        ;   XREF to: 00482d75 (UNCONDITIONAL_JUMP)  ; LAB_00482d75
    INC EBX                             ; 00482e78
        ;   Label: LAB_00482e78
    CMP EBX,ESI                         ; 00482e79
    JL 0x00482dd2                       ; 00482e7b
        ;   XREF to: 00482dd2 (CONDITIONAL_JUMP)  ; LAB_00482dd2
    TEST EDI,EDI                        ; 00482e81
        ;   Label: LAB_00482e81
    JNZ 0x00482df5                      ; 00482e83
        ;   XREF to: 00482df5 (CONDITIONAL_JUMP)  ; LAB_00482df5
    LEA EAX,[ESP + 0x31c]               ; 00482e89
    PUSH EAX                            ; 00482e90
    PUSH EBP                            ; 00482e91
    CALL FUN_00482070                   ; 00482e92
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; undefined FUN_00482070()
    ADD ESP,0x8                         ; 00482e97
    JMP 0x00482df5                      ; 00482e9a
        ;   XREF to: 00482df5 (UNCONDITIONAL_JUMP)  ; LAB_00482df5

