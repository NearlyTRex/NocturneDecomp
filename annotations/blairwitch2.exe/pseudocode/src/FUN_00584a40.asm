; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00584a40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616494
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cb6b5c
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_00408d70
;   FUN_0041a840
;   FUN_0041b700
;   FUN_0044d060
;   FUN_0044fcc0
;   FUN_0046b350
;   FUN_0046b960
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584a40
        ;   Label: FUN_00584a40
    PUSH ESI                            ; 00584a41
    PUSH EDI                            ; 00584a42
    PUSH EBP                            ; 00584a43
    SUB ESP,0xb0                        ; 00584a44
    MOV EDX,dword ptr [ESP + 0xc4]      ; 00584a4a
    PUSH EDX                            ; 00584a51
    CALL FUN_004089d0                   ; 00584a52
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 00584a57
    PUSH 0x0                            ; 00584a5a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00584a5c
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00584a63
    PUSH ECX                            ; 00584a6a
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00584a6b
    LEA ESI,[ESP + 0x38]                ; 00584a71
    LEA EDI,[ESP + 0x8]                 ; 00584a75
    CALL dword ptr [EAX + 0x24]         ; 00584a79
    MOV ECX,0x6                         ; 00584a7c
    ADD ESP,0x4                         ; 00584a81
    LEA EAX,[ESP + 0x4]                 ; 00584a84
    LEA ESI,[ESP + 0x34]                ; 00584a88
    PUSH EAX                            ; 00584a8c
    MOVSD.REP ES:EDI,ESI                ; 00584a8d
    CALL FUN_0041a840                   ; 00584a8f
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 00584a94
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00584a97
    MOV dword ptr [ESP + 0xa8],EAX      ; 00584a9e
    MOV dword ptr [EBX + 0x11c8],EAX    ; 00584aa5
    TEST EAX,EAX                        ; 00584aab
    JZ 0x00584b20                       ; 00584aad
        ;   XREF to: 00584b20 (CONDITIONAL_JUMP)  ; LAB_00584b20
    MOV EBX,dword ptr [0x0060b280]      ; 00584aaf | DAT_0060b280
    PUSH EBX                            ; 00584ab5 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00584ab6
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00584abb
    TEST EAX,EAX                        ; 00584abe
    JZ 0x00584b56                       ; 00584ac0
        ;   XREF to: 00584b56 (CONDITIONAL_JUMP)  ; LAB_00584b56
    MOV EAX,[0x00616494]                ; 00584ac6 | DAT_00616494
    CMP dword ptr [EAX + 0x25c],0x0     ; 00584acb | DAT_01cb6b5c
    JNZ 0x00584b56                      ; 00584ad2
        ;   XREF to: 00584b56 (CONDITIONAL_JUMP)  ; LAB_00584b56
    MOV EBP,dword ptr [ESP + 0xc4]      ; 00584ad8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00584adf
    PUSH EBP                            ; 00584ae6
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00584ae7
    LEA ESI,[ESP + 0x4c]                ; 00584aed
    LEA EDI,[ESP + 0x1c]                ; 00584af1
    CALL dword ptr [EAX + 0x24]         ; 00584af5
    MOV ECX,0x6                         ; 00584af8
    ADD ESP,0x4                         ; 00584afd
    LEA EAX,[ESP + 0x18]                ; 00584b00
    LEA ESI,[ESP + 0x48]                ; 00584b04
    PUSH EAX                            ; 00584b08
    MOVSD.REP ES:EDI,ESI                ; 00584b09
    CALL FUN_0041b700                   ; 00584b0b
        ;   XREF to: 0041b700 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b700()
    ADD ESP,0x4                         ; 00584b10
    LEA EAX,[EAX]                       ; 00584b13
    LEA EDX,[EDX]                       ; 00584b19
    NOP                                 ; 00584b1f
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00584b20
        ;   Label: LAB_00584b20
    PUSH ECX                            ; 00584b27
    CALL FUN_00408a10                   ; 00584b28
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00584b2d
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00584b30
    CMP dword ptr [EAX + 0x11c8],0x0    ; 00584b37
    JNZ 0x00584c3c                      ; 00584b3e
        ;   XREF to: 00584c3c (CONDITIONAL_JUMP)  ; LAB_00584c3c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00584b44
        ;   Label: LAB_00584b44
    ADD ESP,0xb0                        ; 00584b4b
    POP EBP                             ; 00584b51
    POP EDI                             ; 00584b52
    POP ESI                             ; 00584b53
    POP EBX                             ; 00584b54
    RET                                 ; 00584b55
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00584b56
        ;   Label: LAB_00584b56
    PUSH -0x1                           ; 00584b5d
    ADD EAX,0x2b4                       ; 00584b5f
    PUSH 0x0                            ; 00584b64
    PUSH EAX                            ; 00584b66
    CALL FUN_0044fcc0                   ; 00584b67
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 00584b6c
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00584b6f
    MOV EDI,dword ptr [EAX + 0xa94]     ; 00584b76
    XOR ESI,ESI                         ; 00584b7c
    TEST EDI,EDI                        ; 00584b7e
    JLE 0x00584b20                      ; 00584b80
        ;   XREF to: 00584b20 (CONDITIONAL_JUMP)  ; LAB_00584b20
    LEA EBX,[EAX + 0xaac]               ; 00584b82
    LEA EBP,[EAX + 0xc28]               ; 00584b88
    MOV EDI,dword ptr [ESP + 0xc4]      ; 00584b8e
    ADD EAX,0xc40                       ; 00584b95
    ADD EDI,0xc34                       ; 00584b9a
    MOV dword ptr [ESP + 0xac],EAX      ; 00584ba0
    PUSH EDI                            ; 00584ba7
        ;   Label: LAB_00584ba7
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00584ba8
    PUSH EAX                            ; 00584baf
    MOV EDX,dword ptr [0x0060b280]      ; 00584bb0 | DAT_0060b280
    PUSH EDX                            ; 00584bb6 | DAT_01ba5c50
    CALL FUN_0046b350                   ; 00584bb7
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 00584bbc
    PUSH 0x0                            ; 00584bbf
    PUSH EBP                            ; 00584bc1
    MOV ECX,dword ptr [0x0060b280]      ; 00584bc2 | DAT_0060b280
    PUSH ECX                            ; 00584bc8 | DAT_01ba5c50
    CALL FUN_0046b350                   ; 00584bc9
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 00584bce
    PUSH -0x1                           ; 00584bd1
    PUSH 0x0                            ; 00584bd3
    PUSH EBX                            ; 00584bd5
    CALL FUN_0044fcc0                   ; 00584bd6
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 00584bdb
    MOV EAX,[0x0060b280]                ; 00584bde | DAT_0060b280
    PUSH EAX                            ; 00584be3 | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 00584be4
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00584be9
    MOV EDX,dword ptr [0x0060b280]      ; 00584bec | DAT_0060b280
    PUSH EDX                            ; 00584bf2 | DAT_01ba5c50
    INC ESI                             ; 00584bf3
    ADD EDI,0x1b4                       ; 00584bf4
    CALL thunk_FUN_004e9810             ; 00584bfa
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00584bff
    ADD EBP,0x1b4                       ; 00584c02
    MOV ECX,dword ptr [ESP + 0xac]      ; 00584c08
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00584c0f
    ADD EBX,0x1b4                       ; 00584c16
    ADD ECX,0x1b4                       ; 00584c1c
    MOV EDX,dword ptr [EAX + 0xa94]     ; 00584c22
    MOV dword ptr [ESP + 0xac],ECX      ; 00584c28
    CMP ESI,EDX                         ; 00584c2f
    JL 0x00584ba7                       ; 00584c31
        ;   XREF to: 00584ba7 (CONDITIONAL_JUMP)  ; LAB_00584ba7
    JMP 0x00584b20                      ; 00584c37
        ;   XREF to: 00584b20 (UNCONDITIONAL_JUMP)  ; LAB_00584b20
    MOV ESI,dword ptr [0x0060b280]      ; 00584c3c | DAT_0060b280
        ;   Label: LAB_00584c3c
    PUSH ESI                            ; 00584c42 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00584c43
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00584c48
    TEST EAX,EAX                        ; 00584c4b
    JNZ 0x00584b44                      ; 00584c4d
        ;   XREF to: 00584b44 (CONDITIONAL_JUMP)  ; LAB_00584b44
    MOV EDI,0x3f91eb85                  ; 00584c53
    MOV EBP,0xbe27ef9e                  ; 00584c58
    MOV EAX,0x40c00000                  ; 00584c5d
    MOV EDX,0xbf91eb85                  ; 00584c62
    MOV ESI,dword ptr [ESP + 0xc4]      ; 00584c67
    MOV dword ptr [ESP + 0x80],EAX      ; 00584c6e
    MOV dword ptr [ESP + 0x98],EAX      ; 00584c75
    LEA EAX,[ESP + 0x78]                ; 00584c7c
    MOV dword ptr [ESP + 0x78],EDI      ; 00584c80
    PUSH EAX                            ; 00584c84
    MOV dword ptr [ESP + 0x80],EBP      ; 00584c85
    MOV dword ptr [ESP + 0x94],EDX      ; 00584c8c
    PUSH ESI                            ; 00584c93
    LEA ESI,[ESP + 0xa4]                ; 00584c94
    MOV dword ptr [ESP + 0x9c],EBP      ; 00584c9b
    CALL FUN_00408d70                   ; 00584ca2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00584ca7
    PUSH 0x41200000                     ; 00584caa
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00584caf
    PUSH 0x42600000                     ; 00584cb6
    ADD EAX,0x30                        ; 00584cbb
    LEA EDI,[ESP + 0x8c]                ; 00584cbe
    PUSH EAX                            ; 00584cc5
    LEA EAX,[ESP + 0x90]                ; 00584cc6
    LEA ESI,[ESP + 0xa8]                ; 00584ccd
    PUSH EAX                            ; 00584cd4
    MOVSD ES:EDI,ESI                    ; 00584cd5
    MOVSD ES:EDI,ESI                    ; 00584cd6
    MOVSD ES:EDI,ESI                    ; 00584cd7
    CALL FUN_0044d060                   ; 00584cd8
        ;   XREF to: 0044d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d060()
    ADD ESP,0x10                        ; 00584cdd
    LEA EAX,[ESP + 0x90]                ; 00584ce0
    PUSH EAX                            ; 00584ce7
    MOV EDI,dword ptr [ESP + 0xc8]      ; 00584ce8
    PUSH EDI                            ; 00584cef
    LEA ESI,[ESP + 0x74]                ; 00584cf0
    LEA EBX,[ESP + 0x68]                ; 00584cf4
    CALL FUN_00408d70                   ; 00584cf8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA EDI,[ESP + 0x68]                ; 00584cfd
    LEA ESI,[ESP + 0x74]                ; 00584d01
    ADD ESP,0x8                         ; 00584d05
    LEA EAX,[ESP + 0x84]                ; 00584d08
    MOVSD ES:EDI,ESI                    ; 00584d0f
    MOVSD ES:EDI,ESI                    ; 00584d10
    MOVSD ES:EDI,ESI                    ; 00584d11
    CMP EAX,EBX                         ; 00584d12
    JZ 0x00584d37                       ; 00584d14
        ;   XREF to: 00584d37 (CONDITIONAL_JUMP)  ; LAB_00584d37
    MOV EAX,dword ptr [ESP + 0x60]      ; 00584d16
    MOV dword ptr [ESP + 0x84],EAX      ; 00584d1a
    MOV EAX,dword ptr [ESP + 0x64]      ; 00584d21
    MOV dword ptr [ESP + 0x88],EAX      ; 00584d25
    MOV EAX,dword ptr [ESP + 0x68]      ; 00584d2c
    MOV dword ptr [ESP + 0x8c],EAX      ; 00584d30
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00584d37
        ;   Label: LAB_00584d37
    PUSH 0x41200000                     ; 00584d3e
    ADD EAX,0x30                        ; 00584d43
    PUSH 0x42600000                     ; 00584d46
    PUSH EAX                            ; 00584d4b
    LEA EAX,[ESP + 0x90]                ; 00584d4c
    PUSH EAX                            ; 00584d53
    CALL FUN_0044d060                   ; 00584d54
        ;   XREF to: 0044d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d060()
    ADD ESP,0x10                        ; 00584d59
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00584d5c
    ADD ESP,0xb0                        ; 00584d63
    POP EBP                             ; 00584d69
    POP EDI                             ; 00584d6a
    POP ESI                             ; 00584d6b
    POP EBX                             ; 00584d6c
    RET                                 ; 00584d6d

