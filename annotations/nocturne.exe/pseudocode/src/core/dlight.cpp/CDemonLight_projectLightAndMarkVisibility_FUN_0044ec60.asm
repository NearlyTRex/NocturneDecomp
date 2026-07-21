; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60(int param_1,int *param_2,byte param_3,byte param_4)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50 at 004420d1
;
; Referenced Globals:
;   undefined4 DAT_005ae450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ec60
        ;   Label: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60
    PUSH ESI                            ; 0044ec61
    PUSH EDI                            ; 0044ec62
    PUSH EBP                            ; 0044ec63
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044ec64
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044ec68
    MOV CL,byte ptr [ESP + 0x1c]        ; 0044ec6c
    XOR EDX,EDX                         ; 0044ec70
    XOR EAX,EAX                         ; 0044ec72
    TEST CL,0x1                         ; 0044ec74
    JZ 0x0044ec80                       ; 0044ec77
        ;   XREF to: 0044ec80 (CONDITIONAL_JUMP)  ; LAB_0044ec80
    MOV EAX,0x4000                      ; 0044ec79
    MOV EDX,EAX                         ; 0044ec7e
    TEST byte ptr [ESP + 0x20],0x1      ; 0044ec80
        ;   Label: LAB_0044ec80
    JZ 0x0044ec8d                       ; 0044ec85
        ;   XREF to: 0044ec8d (CONDITIONAL_JUMP)  ; LAB_0044ec8d
    OR DH,0x80                          ; 0044ec87
    OR AH,0x80                          ; 0044ec8a
    CMP dword ptr [ESI + 0x8],0x0       ; 0044ec8d
        ;   Label: LAB_0044ec8d
    JLE 0x0044ecd4                      ; 0044ec91
        ;   XREF to: 0044ecd4 (CONDITIONAL_JUMP)  ; LAB_0044ecd4
    MOV EDI,dword ptr [ESI]             ; 0044ec93
    MOV EBP,dword ptr [ESI + 0x4]       ; 0044ec95
    LEA ECX,[EAX + EDI*0x1]             ; 0044ec98
    LEA ESI,[EDX + EBP*0x1]             ; 0044ec9b
    SAR ECX,0x10                        ; 0044ec9e
    MOV EAX,dword ptr [EBX + 0x1cb8]    ; 0044eca1
    SAR ESI,0x10                        ; 0044eca7
    TEST EAX,EAX                        ; 0044ecaa
    JZ 0x0044ecdb                       ; 0044ecac
        ;   XREF to: 0044ecdb (CONDITIONAL_JUMP)  ; LAB_0044ecdb
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044ecae
    MOV EDX,EAX                         ; 0044ecb4
    SAR EDX,0x1f                        ; 0044ecb6
    SUB EAX,EDX                         ; 0044ecb9
    SAR EAX,0x1                         ; 0044ecbb
    MOV EDI,ECX                         ; 0044ecbd
    SUB EDI,EAX                         ; 0044ecbf
    IMUL EDI,EDI                        ; 0044ecc1
    MOV EDX,ESI                         ; 0044ecc4
    SUB EDX,EAX                         ; 0044ecc6
    IMUL EDX,EDX                        ; 0044ecc8
    IMUL EAX,EAX                        ; 0044eccb
    ADD EDX,EDI                         ; 0044ecce
    CMP EDX,EAX                         ; 0044ecd0
    JLE 0x0044ecf3                      ; 0044ecd2
        ;   XREF to: 0044ecf3 (CONDITIONAL_JUMP)  ; LAB_0044ecf3
    XOR EAX,EAX                         ; 0044ecd4
        ;   Label: LAB_0044ecd4
    POP EBP                             ; 0044ecd6
        ;   Label: LAB_0044ecd6
    POP EDI                             ; 0044ecd7
    POP ESI                             ; 0044ecd8
    POP EBX                             ; 0044ecd9
    RET                                 ; 0044ecda
    TEST ECX,ECX                        ; 0044ecdb
        ;   Label: LAB_0044ecdb
    JL 0x0044ecd6                       ; 0044ecdd
        ;   XREF to: 0044ecd6 (CONDITIONAL_JUMP)  ; LAB_0044ecd6
    CMP ECX,dword ptr [EBX + 0x1cc0]    ; 0044ecdf
    JGE 0x0044ecd6                      ; 0044ece5
        ;   XREF to: 0044ecd6 (CONDITIONAL_JUMP)  ; LAB_0044ecd6
    TEST ESI,ESI                        ; 0044ece7
    JL 0x0044ecd6                       ; 0044ece9
        ;   XREF to: 0044ecd6 (CONDITIONAL_JUMP)  ; LAB_0044ecd6
    CMP ESI,dword ptr [EBX + 0x1cc4]    ; 0044eceb
    JGE 0x0044ecd6                      ; 0044ecf1
        ;   XREF to: 0044ecd6 (CONDITIONAL_JUMP)  ; LAB_0044ecd6
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0044ecf3
        ;   Label: LAB_0044ecf3
    IMUL EDX,ESI                        ; 0044ecf9
    MOV EAX,EDX                         ; 0044ecfc
    SAR EDX,0x1f                        ; 0044ecfe
    SHL EDX,0x3                         ; 0044ed01
    SBB EAX,EDX                         ; 0044ed04
    SAR EAX,0x3                         ; 0044ed06
    MOV EDI,EAX                         ; 0044ed09
    MOV EDX,ECX                         ; 0044ed0b
    MOV EAX,ECX                         ; 0044ed0d
    SAR EDX,0x1f                        ; 0044ed0f
    SHL EDX,0x3                         ; 0044ed12
    SBB EAX,EDX                         ; 0044ed15
    SAR EAX,0x3                         ; 0044ed17
    ADD EDI,EAX                         ; 0044ed1a
    MOV EAX,dword ptr [EBX + 0x2fa0]    ; 0044ed1c
    ADD EAX,EDI                         ; 0044ed22
    MOV EDI,ECX                         ; 0044ed24
    AND EDI,0x7                         ; 0044ed26
    MOV DL,byte ptr [EDI + 0x5ae450]    ; 0044ed29 | DAT_005ae450
    OR byte ptr [EAX],DL                ; 0044ed2f
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 0044ed31
    ADD ECX,ESI                         ; 0044ed38
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 0044ed3a
    ADD ECX,ECX                         ; 0044ed40
    ADD EAX,ECX                         ; 0044ed42
    POP EBP                             ; 0044ed44
    POP EDI                             ; 0044ed45
    POP ESI                             ; 0044ed46
    POP EBX                             ; 0044ed47
    RET                                 ; 0044ed48

