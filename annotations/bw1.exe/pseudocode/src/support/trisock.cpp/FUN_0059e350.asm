; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0059e350(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0059e318 = 0059e450
;   undefined1* PTR_caseD_fffffffb_0059e320 = 0059e450
;   undefined1* PTR_caseD_fffffffb_0059e324 = 0059e450
;   undefined1* PTR_caseD_2_0059e334 = 0059ec11
;   TerminatedCString s_Looking_up_s_005f87d6
;   TerminatedCString s_Contacting_s_005f87e7
;   TerminatedCString s_Requesting_s_005f87f8
;   TerminatedCString s_Received_d_of_s_005f8809
;   TerminatedCString s_Receiving_s_005f8821
;   undefined1 DAT_005f8831
;   undefined1 DAT_005f8832
;   undefined1 DAT_005f8833
;   undefined1 DAT_005f8834
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;   support_trisock.cpp_formatSocketAddress_FUN_0059c830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e350
        ;   Label: support_trisock.cpp_FUN_0059e350
    PUSH ESI                            ; 0059e351
    PUSH EDI                            ; 0059e352
    PUSH EBP                            ; 0059e353
    SUB ESP,0x9f0                       ; 0059e354
    MOV EBP,dword ptr [ESP + 0xa04]     ; 0059e35a
    MOV EDX,dword ptr [EBP + 0xd28]     ; 0059e361
    LEA EAX,[EDX + -0x1]                ; 0059e367
    CMP EAX,0x3                         ; 0059e36a
    JA 0x0059e43b                       ; 0059e36d
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; LAB_0059e43b
    JMP dword ptr [EAX*0x4 + 0x59e308]  ; 0059e373
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059e43b
        ;   Label: LAB_0059e43b
    ADD EAX,0x5                         ; 0059e441
    CMP EAX,0xa                         ; 0059e444
    JA 0x0059e450                       ; 0059e447
        ;   XREF to: 0059e450 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x59e318]  ; 0059e449 | caseD_ffffffff | caseD_0 | caseD_1
        ;   Label: switchD
    LEA EAX,[EBP + 0xd2c]               ; 0059e450
        ;   Label: caseD_fffffffb
    PUSH EAX                            ; 0059e456
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059e457
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059e45c
    LEA ESI,[EBP + 0xa18]               ; 0059e45f
    MOV EDI,dword ptr [ESP + 0xa08]     ; 0059e465
        ;   Label: LAB_0059e465
    PUSH EDI                            ; 0059e46c
    MOV AL,byte ptr [ESI]               ; 0059e46d | DAT_005f8831 | DAT_005f8833
        ;   Label: LAB_0059e46d
    MOV byte ptr [EDI],AL               ; 0059e46f
    CMP AL,0x0                          ; 0059e471
    JZ 0x0059e485                       ; 0059e473
        ;   XREF to: 0059e485 (CONDITIONAL_JUMP)  ; LAB_0059e485
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e475 | DAT_005f8832 | DAT_005f8834
    ADD ESI,0x2                         ; 0059e478
    MOV byte ptr [EDI + 0x1],AL         ; 0059e47b
    ADD EDI,0x2                         ; 0059e47e
    CMP AL,0x0                          ; 0059e481
    JNZ 0x0059e46d                      ; 0059e483
        ;   XREF to: 0059e46d (CONDITIONAL_JUMP)  ; LAB_0059e46d
    POP EDI                             ; 0059e485
        ;   Label: LAB_0059e485
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059e486
    ADD ESP,0x9f0                       ; 0059e48c
    POP EBP                             ; 0059e492
    POP EDI                             ; 0059e493
    POP ESI                             ; 0059e494
    POP EBX                             ; 0059e495
    RET                                 ; 0059e496
    MOV EAX,dword ptr [ESP + 0xa08]     ; 0059ebc9
        ;   Label: caseD_0
    MOV byte ptr [EAX],0x0              ; 0059ebd0
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ebd3
    ADD ESP,0x9f0                       ; 0059ebd9
    POP EBP                             ; 0059ebdf
    POP EDI                             ; 0059ebe0
    POP ESI                             ; 0059ebe1
    POP EBX                             ; 0059ebe2
    RET                                 ; 0059ebe3
    LEA EAX,[EBP + 0x400]               ; 0059ebe4
        ;   Label: caseD_1
    PUSH EAX                            ; 0059ebea
    PUSH 0x5f87d6                       ; 0059ebeb | = "Looking up %s..."
    MOV EDX,dword ptr [ESP + 0xa10]     ; 0059ebf0
    PUSH EDX                            ; 0059ebf7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ebf8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ebfd
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ec00
    ADD ESP,0x9f0                       ; 0059ec06
    POP EBP                             ; 0059ec0c
    POP EDI                             ; 0059ec0d
    POP ESI                             ; 0059ec0e
    POP EBX                             ; 0059ec0f
    RET                                 ; 0059ec10
    LEA EAX,[ESP + 0x9b8]               ; 0059ec11
        ;   Label: caseD_2
    PUSH EAX                            ; 0059ec18
    LEA EAX,[EBP + 0x600]               ; 0059ec19
    PUSH EAX                            ; 0059ec1f
    CALL support_trisock.cpp_formatSocketAddress_FUN_0059c830 ; 0059ec20
        ;   XREF to: 0059c830 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_formatSocketAddress_FUN_0059c830()
    ADD ESP,0x8                         ; 0059ec25
    LEA EAX,[ESP + 0x9b8]               ; 0059ec28
    PUSH EAX                            ; 0059ec2f
    PUSH 0x5f87e7                       ; 0059ec30 | = "Contacting %s..."
    MOV EAX,dword ptr [ESP + 0xa10]     ; 0059ec35
    PUSH EAX                            ; 0059ec3c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ec3d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ec42
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ec45
    ADD ESP,0x9f0                       ; 0059ec4b
    POP EBP                             ; 0059ec51
    POP EDI                             ; 0059ec52
    POP ESI                             ; 0059ec53
    POP EBX                             ; 0059ec54
    RET                                 ; 0059ec55
    LEA EAX,[EBP + 0x500]               ; 0059ec56
        ;   Label: caseD_3
    PUSH EAX                            ; 0059ec5c
    PUSH 0x5f87f8                       ; 0059ec5d | = "Requesting %s..."
    MOV EDI,dword ptr [ESP + 0xa10]     ; 0059ec62
    PUSH EDI                            ; 0059ec69
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ec6a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ec6f
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ec72
    ADD ESP,0x9f0                       ; 0059ec78
    POP EBP                             ; 0059ec7e
    POP EDI                             ; 0059ec7f
    POP ESI                             ; 0059ec80
    POP EBX                             ; 0059ec81
    RET                                 ; 0059ec82
    MOV EDI,dword ptr [EBP + 0x60c]     ; 0059ec83
        ;   Label: caseD_4
    MOV EAX,0xffffffff                  ; 0059ec89
    TEST EDI,EDI                        ; 0059ec8e
    JLE 0x0059ecb0                      ; 0059ec90
        ;   XREF to: 0059ecb0 (CONDITIONAL_JUMP)  ; LAB_0059ecb0
    MOV EDX,dword ptr [EBP + 0x608]     ; 0059ec92
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059ec98
    SUB EAX,EDX                         ; 0059ec9f
    SHL EAX,0x3                         ; 0059eca1
    ADD EDX,EAX                         ; 0059eca4
    SHL EDX,0x2                         ; 0059eca6
    MOV EAX,EDX                         ; 0059eca9
    SAR EDX,0x1f                        ; 0059ecab
    IDIV EDI                            ; 0059ecae
    TEST EAX,EAX                        ; 0059ecb0
        ;   Label: LAB_0059ecb0
    JLE 0x0059ece7                      ; 0059ecb2
        ;   XREF to: 0059ece7 (CONDITIONAL_JUMP)  ; LAB_0059ece7
    CMP EAX,0x64                        ; 0059ecb4
    JGE 0x0059ece7                      ; 0059ecb7
        ;   XREF to: 0059ece7 (CONDITIONAL_JUMP)  ; LAB_0059ece7
    LEA EDX,[EBP + 0x500]               ; 0059ecb9
    PUSH EDX                            ; 0059ecbf
    PUSH EAX                            ; 0059ecc0
    PUSH 0x5f8809                       ; 0059ecc1 | = "Received %d%% of %s... "
    MOV ESI,dword ptr [ESP + 0xa14]     ; 0059ecc6
    PUSH ESI                            ; 0059eccd
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ecce
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0059ecd3
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ecd6
    ADD ESP,0x9f0                       ; 0059ecdc
    POP EBP                             ; 0059ece2
    POP EDI                             ; 0059ece3
    POP ESI                             ; 0059ece4
    POP EBX                             ; 0059ece5
    RET                                 ; 0059ece6
    LEA EAX,[EBP + 0x500]               ; 0059ece7
        ;   Label: LAB_0059ece7
    PUSH EAX                            ; 0059eced
    PUSH 0x5f8821                       ; 0059ecee | = "Receiving %s..."
    MOV EBX,dword ptr [ESP + 0xa10]     ; 0059ecf3
    PUSH EBX                            ; 0059ecfa
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ecfb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ed00
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ed03
    ADD ESP,0x9f0                       ; 0059ed09
    POP EBP                             ; 0059ed0f
    POP EDI                             ; 0059ed10
    POP ESI                             ; 0059ed11
    POP EBX                             ; 0059ed12
    RET                                 ; 0059ed13
    MOV ESI,0x5f8831                    ; 0059ed14 | DAT_005f8831
        ;   Label: caseD_5
    JMP 0x0059e465                      ; 0059ed19
        ;   XREF to: 0059e465 (UNCONDITIONAL_JUMP)  ; LAB_0059e465

