; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0057ad10(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0057acd8 = 0057ae10
;   undefined1* PTR_caseD_fffffffb_0057ace0 = 0057ae10
;   undefined1* PTR_caseD_fffffffb_0057ace4 = 0057ae10
;   undefined1* PTR_caseD_2_0057acf4 = 0057b4f5
;   TerminatedCString s_Looking_up_s_005ed4be
;   TerminatedCString s_Contacting_s_005ed4cf
;   TerminatedCString s_Requesting_s_005ed4e0
;   TerminatedCString s_Received_d_of_s_005ed4f1
;   TerminatedCString s_Receiving_s_005ed509
;   undefined1 DAT_005ed519
;   undefined1 DAT_005ed51a
;   undefined1 DAT_005ed51b
;   undefined1 DAT_005ed51c
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;   support_trisock.cpp_formatSocketAddress_FUN_00578f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ad10
        ;   Label: support_trisock.cpp_FUN_0057ad10
    PUSH ESI                            ; 0057ad11
    PUSH EDI                            ; 0057ad12
    PUSH EBP                            ; 0057ad13
    SUB ESP,0x7f8                       ; 0057ad14
    MOV EBX,dword ptr [ESP + 0x80c]     ; 0057ad1a
    MOV EDX,dword ptr [EBX + 0xd28]     ; 0057ad21
    LEA EAX,[EDX + -0x1]                ; 0057ad27
    CMP EAX,0x3                         ; 0057ad2a
    JA 0x0057adfb                       ; 0057ad2d
        ;   XREF to: 0057adfb (CONDITIONAL_JUMP)  ; LAB_0057adfb
    JMP dword ptr [EAX*0x4 + 0x57acc8]  ; 0057ad33
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057adfb
        ;   Label: LAB_0057adfb
    ADD EAX,0x5                         ; 0057ae01
    CMP EAX,0xa                         ; 0057ae04
    JA 0x0057ae10                       ; 0057ae07
        ;   XREF to: 0057ae10 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x57acd8]  ; 0057ae09 | caseD_ffffffff | caseD_0 | caseD_1
        ;   Label: switchD
    LEA EAX,[EBX + 0xd2c]               ; 0057ae10
        ;   Label: caseD_fffffffb
    PUSH EAX                            ; 0057ae16
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 0057ae17
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057ae1c
    LEA ESI,[EBX + 0xa18]               ; 0057ae1f
    MOV EDI,dword ptr [ESP + 0x810]     ; 0057ae25
        ;   Label: LAB_0057ae25
    PUSH EDI                            ; 0057ae2c
    MOV AL,byte ptr [ESI]               ; 0057ae2d | DAT_005ed519 | DAT_005ed51b
        ;   Label: LAB_0057ae2d
    MOV byte ptr [EDI],AL               ; 0057ae2f
    CMP AL,0x0                          ; 0057ae31
    JZ 0x0057ae45                       ; 0057ae33
        ;   XREF to: 0057ae45 (CONDITIONAL_JUMP)  ; LAB_0057ae45
    MOV AL,byte ptr [ESI + 0x1]         ; 0057ae35 | DAT_005ed51a | DAT_005ed51c
    ADD ESI,0x2                         ; 0057ae38
    MOV byte ptr [EDI + 0x1],AL         ; 0057ae3b
    ADD EDI,0x2                         ; 0057ae3e
    CMP AL,0x0                          ; 0057ae41
    JNZ 0x0057ae2d                      ; 0057ae43
        ;   XREF to: 0057ae2d (CONDITIONAL_JUMP)  ; LAB_0057ae2d
    POP EDI                             ; 0057ae45
        ;   Label: LAB_0057ae45
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057ae46
    ADD ESP,0x7f8                       ; 0057ae4c
    POP EBP                             ; 0057ae52
    POP EDI                             ; 0057ae53
    POP ESI                             ; 0057ae54
    POP EBX                             ; 0057ae55
    RET                                 ; 0057ae56
    MOV EAX,dword ptr [ESP + 0x810]     ; 0057b4ad
        ;   Label: caseD_0
    MOV byte ptr [EAX],0x0              ; 0057b4b4
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b4b7
    ADD ESP,0x7f8                       ; 0057b4bd
    POP EBP                             ; 0057b4c3
    POP EDI                             ; 0057b4c4
    POP ESI                             ; 0057b4c5
    POP EBX                             ; 0057b4c6
    RET                                 ; 0057b4c7
    LEA EAX,[EBX + 0x400]               ; 0057b4c8
        ;   Label: caseD_1
    PUSH EAX                            ; 0057b4ce
    PUSH 0x5ed4be                       ; 0057b4cf | = "Looking up %s..."
    MOV EDI,dword ptr [ESP + 0x818]     ; 0057b4d4
    PUSH EDI                            ; 0057b4db
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b4dc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b4e1
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b4e4
    ADD ESP,0x7f8                       ; 0057b4ea
    POP EBP                             ; 0057b4f0
    POP EDI                             ; 0057b4f1
    POP ESI                             ; 0057b4f2
    POP EBX                             ; 0057b4f3
    RET                                 ; 0057b4f4
    LEA EAX,[ESP + 0x7b8]               ; 0057b4f5
        ;   Label: caseD_2
    PUSH EAX                            ; 0057b4fc
    LEA EAX,[EBX + 0x600]               ; 0057b4fd
    PUSH EAX                            ; 0057b503
    CALL support_trisock.cpp_formatSocketAddress_FUN_00578f50 ; 0057b504
        ;   XREF to: 00578f50 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatSocketAddress_FUN_00578f50(SNetworkAddr * network_addr, char * output_buffer)
    ADD ESP,0x8                         ; 0057b509
    LEA EAX,[ESP + 0x7b8]               ; 0057b50c
    PUSH EAX                            ; 0057b513
    PUSH 0x5ed4cf                       ; 0057b514 | = "Contacting %s..."
    MOV ESI,dword ptr [ESP + 0x818]     ; 0057b519
    PUSH ESI                            ; 0057b520
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b521
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b526
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b529
    ADD ESP,0x7f8                       ; 0057b52f
    POP EBP                             ; 0057b535
    POP EDI                             ; 0057b536
    POP ESI                             ; 0057b537
    POP EBX                             ; 0057b538
    RET                                 ; 0057b539
    LEA EAX,[EBX + 0x500]               ; 0057b53a
        ;   Label: caseD_3
    PUSH EAX                            ; 0057b540
    PUSH 0x5ed4e0                       ; 0057b541 | = "Requesting %s..."
    MOV ECX,dword ptr [ESP + 0x818]     ; 0057b546
    PUSH ECX                            ; 0057b54d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b54e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b553
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b556
    ADD ESP,0x7f8                       ; 0057b55c
    POP EBP                             ; 0057b562
    POP EDI                             ; 0057b563
    POP ESI                             ; 0057b564
    POP EBX                             ; 0057b565
    RET                                 ; 0057b566
    MOV EDI,dword ptr [EBX + 0x60c]     ; 0057b567
        ;   Label: caseD_4
    MOV EAX,0xffffffff                  ; 0057b56d
    TEST EDI,EDI                        ; 0057b572
    JLE 0x0057b594                      ; 0057b574
        ;   XREF to: 0057b594 (CONDITIONAL_JUMP)  ; LAB_0057b594
    MOV EDX,dword ptr [EBX + 0x608]     ; 0057b576
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057b57c
    SUB EAX,EDX                         ; 0057b583
    SHL EAX,0x3                         ; 0057b585
    ADD EDX,EAX                         ; 0057b588
    SHL EDX,0x2                         ; 0057b58a
    MOV EAX,EDX                         ; 0057b58d
    SAR EDX,0x1f                        ; 0057b58f
    IDIV EDI                            ; 0057b592
    TEST EAX,EAX                        ; 0057b594
        ;   Label: LAB_0057b594
    JLE 0x0057b5cb                      ; 0057b596
        ;   XREF to: 0057b5cb (CONDITIONAL_JUMP)  ; LAB_0057b5cb
    CMP EAX,0x64                        ; 0057b598
    JGE 0x0057b5cb                      ; 0057b59b
        ;   XREF to: 0057b5cb (CONDITIONAL_JUMP)  ; LAB_0057b5cb
    LEA EDX,[EBX + 0x500]               ; 0057b59d
    PUSH EDX                            ; 0057b5a3
    PUSH EAX                            ; 0057b5a4
    PUSH 0x5ed4f1                       ; 0057b5a5 | = "Received %d%% of %s... "
    MOV EDX,dword ptr [ESP + 0x81c]     ; 0057b5aa
    PUSH EDX                            ; 0057b5b1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b5b2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057b5b7
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b5ba
    ADD ESP,0x7f8                       ; 0057b5c0
    POP EBP                             ; 0057b5c6
    POP EDI                             ; 0057b5c7
    POP ESI                             ; 0057b5c8
    POP EBX                             ; 0057b5c9
    RET                                 ; 0057b5ca
    LEA EAX,[EBX + 0x500]               ; 0057b5cb
        ;   Label: LAB_0057b5cb
    PUSH EAX                            ; 0057b5d1
    PUSH 0x5ed509                       ; 0057b5d2 | = "Receiving %s..."
    MOV EAX,dword ptr [ESP + 0x818]     ; 0057b5d7
    PUSH EAX                            ; 0057b5de
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057b5df
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057b5e4
    MOV EAX,dword ptr [EBX + 0xd28]     ; 0057b5e7
    ADD ESP,0x7f8                       ; 0057b5ed
    POP EBP                             ; 0057b5f3
    POP EDI                             ; 0057b5f4
    POP ESI                             ; 0057b5f5
    POP EBX                             ; 0057b5f6
    RET                                 ; 0057b5f7
    MOV ESI,0x5ed519                    ; 0057b5f8 | DAT_005ed519
        ;   Label: caseD_5
    JMP 0x0057ae25                      ; 0057b5fd
        ;   XREF to: 0057ae25 (UNCONDITIONAL_JUMP)  ; LAB_0057ae25

