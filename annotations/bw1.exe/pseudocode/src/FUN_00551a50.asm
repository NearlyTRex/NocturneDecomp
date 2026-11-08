; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00551a50(void)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   FUN_004ce580 at 004ce984
;
; Referenced Globals:
;   TerminatedCString s_d_omni_lights_005f0977
;   TerminatedCString s_d_spot_lights_005f0986
;   undefined4 DAT_00622c2c
;   undefined4 DAT_00622c30
;   undefined4 DAT_00622c34
;   undefined4 DAT_00622dac
;   undefined4 DAT_00622db0
;   undefined4 DAT_00622db4
;   undefined4 DAT_01fe4e38
;   undefined4 DAT_01fe55bc
;   undefined4 DAT_01fe5c88
;
; Called Functions:
;   FUN_00401fe0
;   FUN_00463130
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551a50
        ;   Label: FUN_00551a50
    PUSH ESI                            ; 00551a51
    PUSH EDI                            ; 00551a52
    PUSH EBP                            ; 00551a53
    SUB ESP,0x100                       ; 00551a54
    MOV EDX,dword ptr [0x01fe4e38]      ; 00551a5a | DAT_01fe4e38
    XOR ESI,ESI                         ; 00551a60
    TEST EDX,EDX                        ; 00551a62
    JLE 0x00551aa0                      ; 00551a64
        ;   XREF to: 00551aa0 (CONDITIONAL_JUMP)  ; LAB_00551aa0
    XOR EBX,EBX                         ; 00551a66
    PUSH 0x80                           ; 00551a68
        ;   Label: LAB_00551a68
    MOV ECX,dword ptr [EBX + 0x622dac]  ; 00551a6d | DAT_00622dac | DAT_00622db0
    PUSH ECX                            ; 00551a73
    MOV EDI,dword ptr [EBX + 0x622c2c]  ; 00551a74 | DAT_00622c2c | DAT_00622c30
    PUSH EDI                            ; 00551a7a
    MOV EBP,dword ptr [EBX + 0x1fe4e3c] ; 00551a7b
    PUSH EBP                            ; 00551a81
    ADD EBX,0x4                         ; 00551a82
    INC ESI                             ; 00551a85
    CALL FUN_00463130                   ; 00551a86
        ;   XREF to: 00463130 (UNCONDITIONAL_CALL)  ; undefined FUN_00463130()
    MOV EAX,[0x01fe4e38]                ; 00551a8b | DAT_01fe4e38
    ADD ESP,0x10                        ; 00551a90
    CMP ESI,EAX                         ; 00551a93
    JL 0x00551a68                       ; 00551a95
        ;   XREF to: 00551a68 (CONDITIONAL_JUMP)  ; LAB_00551a68
    LEA EAX,[EAX]                       ; 00551a97
    LEA EDX,[EDX]                       ; 00551a9d
    MOV EDX,dword ptr [0x01fe55bc]      ; 00551aa0 | DAT_01fe55bc
        ;   Label: LAB_00551aa0
    XOR EBP,EBP                         ; 00551aa6
    TEST EDX,EDX                        ; 00551aa8
    JLE 0x00551af0                      ; 00551aaa
        ;   XREF to: 00551af0 (CONDITIONAL_JUMP)  ; LAB_00551af0
    LEA EBX,[ESI*0x4 + 0x0]             ; 00551aac
    XOR EDI,EDI                         ; 00551ab3
    PUSH 0x80                           ; 00551ab5
        ;   Label: LAB_00551ab5
    MOV ECX,dword ptr [EBX + 0x622dac]  ; 00551aba | DAT_00622db0 | DAT_00622db4 | DAT_00622dac
    PUSH ECX                            ; 00551ac0
    MOV ESI,dword ptr [EBX + 0x622c2c]  ; 00551ac1 | DAT_00622c30 | DAT_00622c34 | DAT_00622c2c
    PUSH ESI                            ; 00551ac7
    MOV EAX,dword ptr [EDI + 0x1fe55c0] ; 00551ac8
    ADD EDI,0x4                         ; 00551ace
    PUSH EAX                            ; 00551ad1
    ADD EBX,0x4                         ; 00551ad2
    INC EBP                             ; 00551ad5
    CALL FUN_00463130                   ; 00551ad6
        ;   XREF to: 00463130 (UNCONDITIONAL_CALL)  ; undefined FUN_00463130()
    MOV EDX,dword ptr [0x01fe55bc]      ; 00551adb | DAT_01fe55bc
    ADD ESP,0x10                        ; 00551ae1
    CMP EBP,EDX                         ; 00551ae4
    JL 0x00551ab5                       ; 00551ae6
        ;   XREF to: 00551ab5 (CONDITIONAL_JUMP)  ; LAB_00551ab5
    LEA EAX,[EAX]                       ; 00551ae8
    MOV EDX,EDX                         ; 00551aee
    MOV ESI,dword ptr [0x01fe5c88]      ; 00551af0 | DAT_01fe5c88
        ;   Label: LAB_00551af0
    PUSH ESI                            ; 00551af6
    MOV EBX,dword ptr [0x01fe4e38]      ; 00551af7 | DAT_01fe4e38
    PUSH 0x5f0977                       ; 00551afd | = "%d omni lights"
    LEA ESI,[ESP + 0x8]                 ; 00551b02
    MOV ECX,dword ptr [0x01fe55bc]      ; 00551b06 | DAT_01fe55bc
    PUSH ESI                            ; 00551b0c
    ADD EBX,ECX                         ; 00551b0d
    CALL FUN_005bfb40                   ; 00551b0f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 00551b14
    MOV EDI,dword ptr [EBX*0x4 + 0x622dac] ; 00551b17 | DAT_00622dac
    PUSH EDI                            ; 00551b1e
    MOV EBP,dword ptr [EBX*0x4 + 0x622c2c] ; 00551b1f | DAT_00622c2c
    PUSH EBP                            ; 00551b26
    LEA ESI,[ESP + 0x8]                 ; 00551b27
    PUSH ESI                            ; 00551b2b
    CALL FUN_00401fe0                   ; 00551b2c
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00551b31
    MOV EAX,[0x01fe4e38]                ; 00551b34 | DAT_01fe4e38
    PUSH EAX                            ; 00551b39
    PUSH 0x5f0986                       ; 00551b3a | = "%d spot lights"
    LEA ESI,[ESP + 0x8]                 ; 00551b3f
    PUSH ESI                            ; 00551b43
    CALL FUN_005bfb40                   ; 00551b44
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV ESI,dword ptr [EBX*0x4 + 0x622dac] ; 00551b49 | DAT_00622dac
    ADD ESP,0xc                         ; 00551b50
    ADD ESI,0xb                         ; 00551b53
    PUSH ESI                            ; 00551b56
    MOV EDX,dword ptr [EBX*0x4 + 0x622c2c] ; 00551b57 | DAT_00622c2c
    PUSH EDX                            ; 00551b5e
    LEA EBX,[ESP + 0x8]                 ; 00551b5f
    PUSH EBX                            ; 00551b63
    CALL FUN_00401fe0                   ; 00551b64
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00551b69
    ADD ESP,0x100                       ; 00551b6c
    POP EBP                             ; 00551b72
    POP EDI                             ; 00551b73
    POP ESI                             ; 00551b74
    POP EBX                             ; 00551b75
    LEA EAX,[EAX]                       ; 00551b76
    LEA EDX,[EDX]                       ; 00551b7c
    RET                                 ; 00551b80

