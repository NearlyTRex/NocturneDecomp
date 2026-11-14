; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00438ca0(byte *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438ca0
        ;   Label: cockpit_ckptutil.c_FUN_00438ca0
    PUSH ESI                            ; 00438ca1
    PUSH EDI                            ; 00438ca2
    PUSH EBP                            ; 00438ca3
    SUB ESP,0x120                       ; 00438ca4
    MOV EDX,dword ptr [ESP + 0x148]     ; 00438caa
    CMP EDX,0xff                        ; 00438cb1
    JA 0x00438e99                       ; 00438cb7
        ;   XREF to: 00438e99 (CONDITIONAL_JUMP)  ; LAB_00438e99
    XOR EDI,EDI                         ; 00438cbd
        ;   Label: LAB_00438cbd
    MOV EBP,dword ptr [ESP + 0x144]     ; 00438cbf
    MOV dword ptr [ESP + 0x110],EDI     ; 00438cc6
    TEST EBP,EBP                        ; 00438ccd
    JLE 0x00438e8e                      ; 00438ccf
        ;   XREF to: 00438e8e (CONDITIONAL_JUMP)  ; LAB_00438e8e
    MOV EAX,dword ptr [ESP + 0x140]     ; 00438cd5
    DEC EAX                             ; 00438cdc
    MOV dword ptr [ESP + 0x100],EAX     ; 00438cdd
    MOV EAX,dword ptr [ESP + 0x140]     ; 00438ce4
    MOV dword ptr [ESP + 0x104],EAX     ; 00438ceb
    IMUL EAX,EDI                        ; 00438cf2
    MOV EDX,dword ptr [ESP + 0x134]     ; 00438cf5
    ADD EAX,EDX                         ; 00438cfc
    MOV dword ptr [ESP + 0x10c],EAX     ; 00438cfe
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00438d05
    MOV dword ptr [ESP + 0x108],EDI     ; 00438d0c
    MOV dword ptr [ESP + 0x114],EAX     ; 00438d13
    MOV ESI,dword ptr [ESP + 0x140]     ; 00438d1a
        ;   Label: LAB_00438d1a
    XOR EBX,EBX                         ; 00438d21
    XOR EAX,EAX                         ; 00438d23
    MOV dword ptr [ESP + 0x11c],EBX     ; 00438d25
    TEST ESI,ESI                        ; 00438d2c
    JLE 0x00438d9b                      ; 00438d2e
        ;   XREF to: 00438d9b (CONDITIONAL_JUMP)  ; LAB_00438d9b
    MOV EDX,dword ptr [ESP + 0x108]     ; 00438d30
    MOV ESI,0xffffffff                  ; 00438d37
    XOR EDI,EDI                         ; 00438d3c
    MOV dword ptr [ESP + 0x118],EDX     ; 00438d3e
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00438d45
    MOV ECX,dword ptr [ESP + 0x13c]     ; 00438d4c
        ;   Label: LAB_00438d4c
    ADD ECX,dword ptr [ESP + 0x118]     ; 00438d53
    ADD ECX,EDI                         ; 00438d5a
    TEST EBX,EBX                        ; 00438d5c
    JZ 0x00438ed2                       ; 00438d5e
        ;   XREF to: 00438ed2 (CONDITIONAL_JUMP)  ; LAB_00438ed2
    MOVZX EBP,byte ptr [EDX]            ; 00438d64
    CMP EBP,dword ptr [ESP + 0x148]     ; 00438d67
    JNZ 0x00438d8d                      ; 00438d6e
        ;   XREF to: 00438d8d (CONDITIONAL_JUMP)  ; LAB_00438d8d
    MOV EBP,ESI                         ; 00438d70
    SUB EBP,dword ptr [ECX + 0x4]       ; 00438d72
    INC EBP                             ; 00438d75
    MOV dword ptr [ECX + 0x44],EBP      ; 00438d76
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00438d79
    ADD EDI,0x4                         ; 00438d80
    INC ECX                             ; 00438d83
    XOR EBX,EBX                         ; 00438d84
    MOV dword ptr [ESP + 0x11c],ECX     ; 00438d86
    MOV EBP,dword ptr [ESP + 0x140]     ; 00438d8d
        ;   Label: LAB_00438d8d
    INC EDX                             ; 00438d94
    INC EAX                             ; 00438d95
    INC ESI                             ; 00438d96
    CMP EAX,EBP                         ; 00438d97
    JL 0x00438d4c                       ; 00438d99
        ;   XREF to: 00438d4c (CONDITIONAL_JUMP)  ; LAB_00438d4c
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00438d9b
        ;   Label: LAB_00438d9b
    CMP EAX,0x10                        ; 00438da2
    JL 0x00438deb                       ; 00438da5
        ;   XREF to: 00438deb (CONDITIONAL_JUMP)  ; LAB_00438deb
    MOV EDX,dword ptr [ESP + 0x110]     ; 00438da7
    PUSH EDX                            ; 00438dae
    PUSH EAX                            ; 00438daf
    MOV ESI,dword ptr [ESP + 0x140]     ; 00438db0
    PUSH ESI                            ; 00438db7
    PUSH 0x5b8e49                       ; 00438db8
    LEA EAX,[ESP + 0x10]                ; 00438dbd
    PUSH EAX                            ; 00438dc1
    MOV EDI,0x5b8e7a                    ; 00438dc2
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00438dc7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00438dcc
    MOV EAX,ESP                         ; 00438dcf
    MOV EBP,0x969                       ; 00438dd1
    PUSH EAX                            ; 00438dd6
    MOV dword ptr [0x01d71de0],EDI      ; 00438dd7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00438ddd | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00438de3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00438de8
    CMP EBX,0x1                         ; 00438deb
        ;   Label: LAB_00438deb
    JNZ 0x00438e21                      ; 00438dee
        ;   XREF to: 00438e21 (CONDITIONAL_JUMP)  ; LAB_00438e21
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00438df0
    MOV EDX,dword ptr [ESP + 0x114]     ; 00438df7
    SHL EAX,0x2                         ; 00438dfe
    ADD EAX,EDX                         ; 00438e01
    MOV EDX,dword ptr [ESP + 0x100]     ; 00438e03
    SUB EDX,dword ptr [EAX + 0x4]       ; 00438e0a
    ADD EDX,EBX                         ; 00438e0d
    MOV EBX,dword ptr [ESP + 0x11c]     ; 00438e0f
    INC EBX                             ; 00438e16
    MOV dword ptr [EAX + 0x44],EDX      ; 00438e17
    MOV dword ptr [ESP + 0x11c],EBX     ; 00438e1a
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00438e21
        ;   Label: LAB_00438e21
    MOV EDX,dword ptr [ESP + 0x114]     ; 00438e28
    MOV ECX,dword ptr [ESP + 0x114]     ; 00438e2f
    MOV EBX,dword ptr [ESP + 0x108]     ; 00438e36
    MOV ESI,dword ptr [ESP + 0x110]     ; 00438e3d
    MOV EDI,dword ptr [ESP + 0x144]     ; 00438e44
    ADD ECX,0x84                        ; 00438e4b
    ADD EBX,0x84                        ; 00438e51
    INC ESI                             ; 00438e57
    MOV dword ptr [EDX],EAX             ; 00438e58
    MOV EAX,dword ptr [ESP + 0x104]     ; 00438e5a
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00438e61
    MOV dword ptr [ESP + 0x114],ECX     ; 00438e68
    MOV dword ptr [ESP + 0x108],EBX     ; 00438e6f
    ADD EDX,EAX                         ; 00438e76
    MOV dword ptr [ESP + 0x110],ESI     ; 00438e78
    MOV dword ptr [ESP + 0x10c],EDX     ; 00438e7f
    CMP ESI,EDI                         ; 00438e86
    JL 0x00438d1a                       ; 00438e88
        ;   XREF to: 00438d1a (CONDITIONAL_JUMP)  ; LAB_00438d1a
    ADD ESP,0x120                       ; 00438e8e
        ;   Label: LAB_00438e8e
    POP EBP                             ; 00438e94
    POP EDI                             ; 00438e95
    POP ESI                             ; 00438e96
    POP EBX                             ; 00438e97
    RET                                 ; 00438e98
    PUSH EDX                            ; 00438e99
        ;   Label: LAB_00438e99
    PUSH 0x5b8e0f                       ; 00438e9a
    LEA EAX,[ESP + 0x8]                 ; 00438e9f
    PUSH EAX                            ; 00438ea3
    MOV EBX,0x5b8e33                    ; 00438ea4
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00438ea9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00438eae
    MOV EAX,ESP                         ; 00438eb1
    MOV ESI,0x939                       ; 00438eb3
    PUSH EAX                            ; 00438eb8
    MOV dword ptr [0x01d71de0],EBX      ; 00438eb9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00438ebf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00438ec5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00438eca
    JMP 0x00438cbd                      ; 00438ecd
        ;   XREF to: 00438cbd (UNCONDITIONAL_JUMP)  ; LAB_00438cbd
    MOVZX EBP,byte ptr [EDX]            ; 00438ed2
        ;   Label: LAB_00438ed2
    CMP EBP,dword ptr [ESP + 0x148]     ; 00438ed5
    JZ 0x00438d8d                       ; 00438edc
        ;   XREF to: 00438d8d (CONDITIONAL_JUMP)  ; LAB_00438d8d
    MOV EBX,0x1                         ; 00438ee2
    MOV dword ptr [ECX + 0x4],EAX       ; 00438ee7
    JMP 0x00438d8d                      ; 00438eea
        ;   XREF to: 00438d8d (UNCONDITIONAL_JUMP)  ; LAB_00438d8d

