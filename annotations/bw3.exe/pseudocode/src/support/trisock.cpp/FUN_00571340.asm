; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00571340(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00571308 = 00571440
;   undefined1* PTR_caseD_fffffffb_00571310 = 00571440
;   undefined1* PTR_caseD_fffffffb_00571314 = 00571440
;   undefined1* PTR_caseD_2_00571324 = 00571c01
;   TerminatedCString s_Looking_up_s_005d6d45
;   TerminatedCString s_Contacting_s_005d6d56
;   TerminatedCString s_Requesting_s_005d6d67
;   TerminatedCString s_Received_d_of_s_005d6d78
;   TerminatedCString s_Receiving_s_005d6d90
;   undefined1 DAT_005d6da0
;   undefined1 DAT_005d6da1
;   undefined1 DAT_005d6da2
;   undefined1 DAT_005d6da3
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;   support_trisock.cpp_formatSocketAddress_FUN_0056f820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571340
        ;   Label: support_trisock.cpp_FUN_00571340
    PUSH ESI                            ; 00571341
    PUSH EDI                            ; 00571342
    PUSH EBP                            ; 00571343
    SUB ESP,0x9f0                       ; 00571344
    MOV EBP,dword ptr [ESP + 0xa04]     ; 0057134a
    MOV EDX,dword ptr [EBP + 0xd28]     ; 00571351
    LEA EAX,[EDX + -0x1]                ; 00571357
    CMP EAX,0x3                         ; 0057135a
    JA 0x0057142b                       ; 0057135d
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; LAB_0057142b
    JMP dword ptr [EAX*0x4 + 0x5712f8]  ; 00571363
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0057142b
        ;   Label: LAB_0057142b
    ADD EAX,0x5                         ; 00571431
    CMP EAX,0xa                         ; 00571434
    JA 0x00571440                       ; 00571437
        ;   XREF to: 00571440 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x571308]  ; 00571439 | caseD_ffffffff | caseD_0 | caseD_1
        ;   Label: switchD
    LEA EAX,[EBP + 0xd2c]               ; 00571440
        ;   Label: caseD_fffffffb
    PUSH EAX                            ; 00571446
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 00571447
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057144c
    LEA ESI,[EBP + 0xa18]               ; 0057144f
    MOV EDI,dword ptr [ESP + 0xa08]     ; 00571455
        ;   Label: LAB_00571455
    PUSH EDI                            ; 0057145c
    MOV AL,byte ptr [ESI]               ; 0057145d | DAT_005d6da0 | DAT_005d6da2
        ;   Label: LAB_0057145d
    MOV byte ptr [EDI],AL               ; 0057145f
    CMP AL,0x0                          ; 00571461
    JZ 0x00571475                       ; 00571463
        ;   XREF to: 00571475 (CONDITIONAL_JUMP)  ; LAB_00571475
    MOV AL,byte ptr [ESI + 0x1]         ; 00571465 | DAT_005d6da1 | DAT_005d6da3
    ADD ESI,0x2                         ; 00571468
    MOV byte ptr [EDI + 0x1],AL         ; 0057146b
    ADD EDI,0x2                         ; 0057146e
    CMP AL,0x0                          ; 00571471
    JNZ 0x0057145d                      ; 00571473
        ;   XREF to: 0057145d (CONDITIONAL_JUMP)  ; LAB_0057145d
    POP EDI                             ; 00571475
        ;   Label: LAB_00571475
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571476
    ADD ESP,0x9f0                       ; 0057147c
    POP EBP                             ; 00571482
    POP EDI                             ; 00571483
    POP ESI                             ; 00571484
    POP EBX                             ; 00571485
    RET                                 ; 00571486
    MOV EAX,dword ptr [ESP + 0xa08]     ; 00571bb9
        ;   Label: caseD_0
    MOV byte ptr [EAX],0x0              ; 00571bc0
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571bc3
    ADD ESP,0x9f0                       ; 00571bc9
    POP EBP                             ; 00571bcf
    POP EDI                             ; 00571bd0
    POP ESI                             ; 00571bd1
    POP EBX                             ; 00571bd2
    RET                                 ; 00571bd3
    LEA EAX,[EBP + 0x400]               ; 00571bd4
        ;   Label: caseD_1
    PUSH EAX                            ; 00571bda
    PUSH 0x5d6d45                       ; 00571bdb | = "Looking up %s..."
    MOV EDX,dword ptr [ESP + 0xa10]     ; 00571be0
    PUSH EDX                            ; 00571be7
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571be8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571bed
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571bf0
    ADD ESP,0x9f0                       ; 00571bf6
    POP EBP                             ; 00571bfc
    POP EDI                             ; 00571bfd
    POP ESI                             ; 00571bfe
    POP EBX                             ; 00571bff
    RET                                 ; 00571c00
    LEA EAX,[ESP + 0x9b8]               ; 00571c01
        ;   Label: caseD_2
    PUSH EAX                            ; 00571c08
    LEA EAX,[EBP + 0x600]               ; 00571c09
    PUSH EAX                            ; 00571c0f
    CALL support_trisock.cpp_formatSocketAddress_FUN_0056f820 ; 00571c10
        ;   XREF to: 0056f820 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatSocketAddress_FUN_0056f820(SNetworkAddr * network_addr, char * output_buffer)
    ADD ESP,0x8                         ; 00571c15
    LEA EAX,[ESP + 0x9b8]               ; 00571c18
    PUSH EAX                            ; 00571c1f
    PUSH 0x5d6d56                       ; 00571c20 | = "Contacting %s..."
    MOV EAX,dword ptr [ESP + 0xa10]     ; 00571c25
    PUSH EAX                            ; 00571c2c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571c2d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571c32
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571c35
    ADD ESP,0x9f0                       ; 00571c3b
    POP EBP                             ; 00571c41
    POP EDI                             ; 00571c42
    POP ESI                             ; 00571c43
    POP EBX                             ; 00571c44
    RET                                 ; 00571c45
    LEA EAX,[EBP + 0x500]               ; 00571c46
        ;   Label: caseD_3
    PUSH EAX                            ; 00571c4c
    PUSH 0x5d6d67                       ; 00571c4d | = "Requesting %s..."
    MOV EDI,dword ptr [ESP + 0xa10]     ; 00571c52
    PUSH EDI                            ; 00571c59
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571c5a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571c5f
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571c62
    ADD ESP,0x9f0                       ; 00571c68
    POP EBP                             ; 00571c6e
    POP EDI                             ; 00571c6f
    POP ESI                             ; 00571c70
    POP EBX                             ; 00571c71
    RET                                 ; 00571c72
    MOV EDI,dword ptr [EBP + 0x60c]     ; 00571c73
        ;   Label: caseD_4
    MOV EAX,0xffffffff                  ; 00571c79
    TEST EDI,EDI                        ; 00571c7e
    JLE 0x00571ca0                      ; 00571c80
        ;   XREF to: 00571ca0 (CONDITIONAL_JUMP)  ; LAB_00571ca0
    MOV EDX,dword ptr [EBP + 0x608]     ; 00571c82
    LEA EAX,[EDX*0x4 + 0x0]             ; 00571c88
    SUB EAX,EDX                         ; 00571c8f
    SHL EAX,0x3                         ; 00571c91
    ADD EDX,EAX                         ; 00571c94
    SHL EDX,0x2                         ; 00571c96
    MOV EAX,EDX                         ; 00571c99
    SAR EDX,0x1f                        ; 00571c9b
    IDIV EDI                            ; 00571c9e
    TEST EAX,EAX                        ; 00571ca0
        ;   Label: LAB_00571ca0
    JLE 0x00571cd7                      ; 00571ca2
        ;   XREF to: 00571cd7 (CONDITIONAL_JUMP)  ; LAB_00571cd7
    CMP EAX,0x64                        ; 00571ca4
    JGE 0x00571cd7                      ; 00571ca7
        ;   XREF to: 00571cd7 (CONDITIONAL_JUMP)  ; LAB_00571cd7
    LEA EDX,[EBP + 0x500]               ; 00571ca9
    PUSH EDX                            ; 00571caf
    PUSH EAX                            ; 00571cb0
    PUSH 0x5d6d78                       ; 00571cb1 | = "Received %d%% of %s... "
    MOV ESI,dword ptr [ESP + 0xa14]     ; 00571cb6
    PUSH ESI                            ; 00571cbd
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571cbe
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00571cc3
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571cc6
    ADD ESP,0x9f0                       ; 00571ccc
    POP EBP                             ; 00571cd2
    POP EDI                             ; 00571cd3
    POP ESI                             ; 00571cd4
    POP EBX                             ; 00571cd5
    RET                                 ; 00571cd6
    LEA EAX,[EBP + 0x500]               ; 00571cd7
        ;   Label: LAB_00571cd7
    PUSH EAX                            ; 00571cdd
    PUSH 0x5d6d90                       ; 00571cde | = "Receiving %s..."
    MOV EBX,dword ptr [ESP + 0xa10]     ; 00571ce3
    PUSH EBX                            ; 00571cea
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571ceb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571cf0
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571cf3
    ADD ESP,0x9f0                       ; 00571cf9
    POP EBP                             ; 00571cff
    POP EDI                             ; 00571d00
    POP ESI                             ; 00571d01
    POP EBX                             ; 00571d02
    RET                                 ; 00571d03
    MOV ESI,0x5d6da0                    ; 00571d04 | DAT_005d6da0
        ;   Label: caseD_5
    JMP 0x00571455                      ; 00571d09
        ;   XREF to: 00571455 (UNCONDITIONAL_JUMP)  ; LAB_00571455

