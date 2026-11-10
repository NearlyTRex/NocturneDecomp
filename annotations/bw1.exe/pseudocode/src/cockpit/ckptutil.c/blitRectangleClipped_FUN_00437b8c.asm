; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_ckptutil_c_blitRectangleClipped_FUN_00437b8c(int param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f010
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00437270
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00437b8c
        ;   Label: cockpit_ckptutil.c_blitRectangleClipped_FUN_00437b8c
    PUSH EBX                            ; 00437b90
    PUSH ESI                            ; 00437b91
    PUSH EDI                            ; 00437b92
    PUSH EBP                            ; 00437b93
    SUB ESP,0x1c                        ; 00437b94
    MOV EBX,dword ptr [ESP + 0x30]      ; 00437b97
    MOV EBP,dword ptr [ESP + 0x34]      ; 00437b9b
    MOV EAX,[0x01c4f010]                ; 00437b9f | DAT_01c4f010
    SUB EAX,EBP                         ; 00437ba4
    MOV EDX,dword ptr [0x01c4354c]      ; 00437ba6 | DAT_01c4354c
    MOV dword ptr [ESP],EAX             ; 00437bac
    MOV EAX,[0x01c43550]                ; 00437baf | DAT_01c43550
    MOV ESI,dword ptr [0x01c4f008]      ; 00437bb4 | DAT_01c4f008
    SUB EAX,EDX                         ; 00437bba
    SUB ESI,EBP                         ; 00437bbc
    MOV dword ptr [ESP + 0x14],EAX      ; 00437bbe
    TEST EBX,EBX                        ; 00437bc2
    JNZ 0x00437bd8                      ; 00437bc4
        ;   XREF to: 00437bd8 (CONDITIONAL_JUMP)  ; LAB_00437bd8
    LEA EAX,[EAX]                       ; 00437bc6
    LEA EDX,[EDX]                       ; 00437bcc
    ADD ESP,0x1c                        ; 00437bd0
        ;   Label: LAB_00437bd0
    POP EBP                             ; 00437bd3
    POP EDI                             ; 00437bd4
    POP ESI                             ; 00437bd5
    POP EBX                             ; 00437bd6
    RET                                 ; 00437bd7
    CALL cockpit_ckptutil.c_FUN_00437270 ; 00437bd8
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437270()
        ;   Label: LAB_00437bd8
    MOV ECX,dword ptr [ESP + 0x38]      ; 00437bdd
    MOV EDI,dword ptr [0x0061b4a0]      ; 00437be1 | DAT_0061b4a0
    MOV dword ptr [ESP + 0x18],EAX      ; 00437be7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00437beb
    SHL ECX,0x2                         ; 00437bef
    DEC EAX                             ; 00437bf2
    CMP EDI,0x8                         ; 00437bf3
    JNZ 0x00437c5d                      ; 00437bf6
        ;   XREF to: 00437c5d (CONDITIONAL_JUMP)  ; LAB_00437c5d
    MOV EDI,dword ptr [ECX + 0x1c4354c] ; 00437bf8
    MOV ECX,EAX                         ; 00437bfe
    ADD EDI,EBP                         ; 00437c00
    XOR EBP,EBP                         ; 00437c02
    TEST ESI,ESI                        ; 00437c04
    JLE 0x00437c0e                      ; 00437c06
        ;   XREF to: 00437c0e (CONDITIONAL_JUMP)  ; LAB_00437c0e
    CMP EAX,ESI                         ; 00437c08
    JL 0x00437bd0                       ; 00437c0a
        ;   XREF to: 00437bd0 (CONDITIONAL_JUMP)  ; LAB_00437bd0
    MOV EBP,ESI                         ; 00437c0c
    MOV EDX,dword ptr [ESP]             ; 00437c0e
        ;   Label: LAB_00437c0e
    CMP ECX,EDX                         ; 00437c11
    JLE 0x00437c1b                      ; 00437c13
        ;   XREF to: 00437c1b (CONDITIONAL_JUMP)  ; LAB_00437c1b
    CMP EBP,EDX                         ; 00437c15
    JG 0x00437bd0                       ; 00437c17
        ;   XREF to: 00437bd0 (CONDITIONAL_JUMP)  ; LAB_00437bd0
    MOV ECX,EDX                         ; 00437c19
    MOV EAX,dword ptr [ESP + 0x40]      ; 00437c1b
        ;   Label: LAB_00437c1b
    XOR ESI,ESI                         ; 00437c1f
    TEST EAX,EAX                        ; 00437c21
    JLE 0x00437bd0                      ; 00437c23
        ;   XREF to: 00437bd0 (CONDITIONAL_JUMP)  ; LAB_00437bd0
    SUB ECX,EBP                         ; 00437c25
    INC ECX                             ; 00437c27
    MOV dword ptr [ESP + 0x4],ECX       ; 00437c28
    MOV ECX,dword ptr [ESP + 0x4]       ; 00437c2c
        ;   Label: LAB_00437c2c
    PUSH ECX                            ; 00437c30
    LEA EAX,[EBX + EBP*0x1]             ; 00437c31
    PUSH EAX                            ; 00437c34
    LEA EAX,[EDI + EBP*0x1]             ; 00437c35
    PUSH EAX                            ; 00437c38
    CALL dword ptr [ESP + 0x24]         ; 00437c39
    ADD ESP,0xc                         ; 00437c3d
    INC ESI                             ; 00437c40
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437c41
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00437c45
    MOV ECX,dword ptr [ESP + 0x40]      ; 00437c49
    ADD EDI,EAX                         ; 00437c4d
    ADD EBX,EDX                         ; 00437c4f
    CMP ESI,ECX                         ; 00437c51
    JL 0x00437c2c                       ; 00437c53
        ;   XREF to: 00437c2c (CONDITIONAL_JUMP)  ; LAB_00437c2c
    ADD ESP,0x1c                        ; 00437c55
    POP EBP                             ; 00437c58
    POP EDI                             ; 00437c59
    POP ESI                             ; 00437c5a
    POP EBX                             ; 00437c5b
    RET                                 ; 00437c5c
    MOV EDI,dword ptr [ECX + 0x1c4354c] ; 00437c5d
        ;   Label: LAB_00437c5d
    ADD EBP,EBP                         ; 00437c63
    MOV ECX,EAX                         ; 00437c65
    ADD EDI,EBP                         ; 00437c67
    XOR EBP,EBP                         ; 00437c69
    TEST ESI,ESI                        ; 00437c6b
    JLE 0x00437c79                      ; 00437c6d
        ;   XREF to: 00437c79 (CONDITIONAL_JUMP)  ; LAB_00437c79
    CMP EAX,ESI                         ; 00437c6f
    JL 0x00437bd0                       ; 00437c71
        ;   XREF to: 00437bd0 (CONDITIONAL_JUMP)  ; LAB_00437bd0
    MOV EBP,ESI                         ; 00437c77
    MOV EAX,dword ptr [ESP]             ; 00437c79
        ;   Label: LAB_00437c79
    CMP ECX,EAX                         ; 00437c7c
    JLE 0x00437c8a                      ; 00437c7e
        ;   XREF to: 00437c8a (CONDITIONAL_JUMP)  ; LAB_00437c8a
    CMP EBP,EAX                         ; 00437c80
    JG 0x00437bd0                       ; 00437c82
        ;   XREF to: 00437bd0 (CONDITIONAL_JUMP)  ; LAB_00437bd0
    MOV ECX,EAX                         ; 00437c88
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437c8a
        ;   Label: LAB_00437c8a
    MOV EDX,EAX                         ; 00437c8e
    SAR EDX,0x1f                        ; 00437c90
    SUB EAX,EDX                         ; 00437c93
    SAR EAX,0x1                         ; 00437c95
    MOV dword ptr [ESP + 0x14],EAX      ; 00437c97
    MOV EAX,dword ptr [ESP + 0x40]      ; 00437c9b
    XOR ESI,ESI                         ; 00437c9f
    TEST EAX,EAX                        ; 00437ca1
    JLE 0x00437bd0                      ; 00437ca3
        ;   XREF to: 00437bd0 (CONDITIONAL_JUMP)  ; LAB_00437bd0
    SUB ECX,EBP                         ; 00437ca9
    LEA EAX,[EBP + EBP*0x1]             ; 00437cab
    MOV dword ptr [ESP + 0xc],EAX       ; 00437caf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437cb3
    INC ECX                             ; 00437cb7
    ADD EAX,EAX                         ; 00437cb8
    MOV dword ptr [ESP + 0x10],ECX      ; 00437cba
    MOV dword ptr [ESP + 0x8],EAX       ; 00437cbe
    MOV EDX,dword ptr [ESP + 0x10]      ; 00437cc2
        ;   Label: LAB_00437cc2
    PUSH EDX                            ; 00437cc6
    LEA EAX,[EBX + EBP*0x1]             ; 00437cc7
    PUSH EAX                            ; 00437cca
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437ccb
    ADD EAX,EDI                         ; 00437ccf
    PUSH EAX                            ; 00437cd1
    CALL dword ptr [ESP + 0x24]         ; 00437cd2
    ADD ESP,0xc                         ; 00437cd6
    INC ESI                             ; 00437cd9
    MOV ECX,dword ptr [ESP + 0x8]       ; 00437cda
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00437cde
    MOV EDX,dword ptr [ESP + 0x40]      ; 00437ce2
    ADD EDI,ECX                         ; 00437ce6
    ADD EBX,EAX                         ; 00437ce8
    CMP ESI,EDX                         ; 00437cea
    JL 0x00437cc2                       ; 00437cec
        ;   XREF to: 00437cc2 (CONDITIONAL_JUMP)  ; LAB_00437cc2
    ADD ESP,0x1c                        ; 00437cee
    POP EBP                             ; 00437cf1
    POP EDI                             ; 00437cf2
    POP ESI                             ; 00437cf3
    POP EBX                             ; 00437cf4
    RET                                 ; 00437cf5

