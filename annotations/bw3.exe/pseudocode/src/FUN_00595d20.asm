; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00595d20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d93ad
;   undefined4 DAT_005d93b1
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0042f510
;   FUN_0046cf30
;   FUN_00583b10
;   FUN_00584450
;   FUN_00595760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595d20
        ;   Label: FUN_00595d20
    PUSH EBP                            ; 00595d21
    SUB ESP,0x60                        ; 00595d22
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00595d25
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00595d29
    JZ 0x00595e5c                       ; 00595d30
        ;   XREF to: 00595e5c (CONDITIONAL_JUMP)  ; LAB_00595e5c
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 00595d36
    JNZ 0x00595e5c                      ; 00595d3d
        ;   XREF to: 00595e5c (CONDITIONAL_JUMP)  ; LAB_00595e5c
    FLD float ptr [EBX + 0xd098]        ; 00595d43
    FLD1                                ; 00595d49
    FCOMPP                              ; 00595d4b
    FNSTSW AX                           ; 00595d4d
    SAHF                                ; 00595d4f
    JC 0x00595e64                       ; 00595d50
        ;   XREF to: 00595e64 (CONDITIONAL_JUMP)  ; LAB_00595e64
    FLD float ptr [EBX + 0xd098]        ; 00595d56
        ;   Label: LAB_00595d56
    FCOMP double ptr [0x005d93b1]       ; 00595d5c | DAT_005d93b1
    FNSTSW AX                           ; 00595d62
    SAHF                                ; 00595d64
    JA 0x00595e7b                       ; 00595d65
        ;   XREF to: 00595e7b (CONDITIONAL_JUMP)  ; LAB_00595e7b
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00595d6b
    JZ 0x00595e47                       ; 00595d72
        ;   XREF to: 00595e47 (CONDITIONAL_JUMP)  ; LAB_00595e47
    PUSH EDI                            ; 00595d78
    PUSH ESI                            ; 00595d79
    PUSH EBX                            ; 00595d7a
    CALL FUN_004087f0                   ; 00595d7b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    MOV EDX,dword ptr [EBX + 0xd068]    ; 00595d80
    LEA EAX,[EDX*0x4 + 0x0]             ; 00595d86
    SUB EAX,EDX                         ; 00595d8d
    LEA EDI,[ESP + 0xc]                 ; 00595d8f
    SHL EAX,0x4                         ; 00595d93
    MOV ECX,0xc                         ; 00595d96
    LEA ESI,[EBX + EAX*0x1 + 0xfd8]     ; 00595d9b
    ADD ESP,0x4                         ; 00595da2
    LEA EAX,[ESP + 0x8]                 ; 00595da5
    MOVSD.REP ES:EDI,ESI                ; 00595da9
    PUSH EAX                            ; 00595dab
    LEA ESI,[ESP + 0x54]                ; 00595dac
    LEA EDI,[ESP + 0x48]                ; 00595db0
    CALL FUN_00583b10                   ; 00595db4
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[ESP + 0x54]                ; 00595db9
    ADD ESP,0x4                         ; 00595dbd
    LEA EAX,[ESP + 0x8]                 ; 00595dc0
    MOVSD ES:EDI,ESI                    ; 00595dc4
    MOVSD ES:EDI,ESI                    ; 00595dc5
    MOVSD ES:EDI,ESI                    ; 00595dc6
    PUSH EAX                            ; 00595dc7
    LEA ESI,[ESP + 0x60]                ; 00595dc8
    LEA EDI,[ESP + 0x3c]                ; 00595dcc
    CALL FUN_00584450                   ; 00595dd0
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined FUN_00584450()
    ADD ESP,0x4                         ; 00595dd5
    LEA EAX,[ESP + 0x38]                ; 00595dd8
    LEA ESI,[ESP + 0x5c]                ; 00595ddc
    PUSH EAX                            ; 00595de0
    MOVSD ES:EDI,ESI                    ; 00595de1
    MOVSD ES:EDI,ESI                    ; 00595de2
    MOVSD ES:EDI,ESI                    ; 00595de3
    PUSH 0x2cfd900                      ; 00595de4 | DAT_02cfd900
    MOV EDI,dword ptr [0x005f2afc]      ; 00595de9 | DAT_005f2afc
    PUSH EDI                            ; 00595def | DAT_01bdd7e4
    CALL FUN_0046cf30                   ; 00595df0
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 00595df5
    PUSH 0x0                            ; 00595df8
    LEA EAX,[ESP + 0x48]                ; 00595dfa
    PUSH EAX                            ; 00595dfe
    MOV EBP,dword ptr [0x005f2afc]      ; 00595dff | DAT_005f2afc
    PUSH EBP                            ; 00595e05 | DAT_01bdd7e4
    CALL FUN_0046cf30                   ; 00595e06
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 00595e0b
    PUSH 0x2d24a54                      ; 00595e0e
    PUSH EBX                            ; 00595e13
    CALL FUN_00595760                   ; 00595e14
        ;   XREF to: 00595760 (UNCONDITIONAL_CALL)  ; undefined FUN_00595760()
    ADD ESP,0x8                         ; 00595e19
    PUSH 0x2d24a60                      ; 00595e1c
    PUSH EBX                            ; 00595e21
    CALL FUN_00595760                   ; 00595e22
        ;   XREF to: 00595760 (UNCONDITIONAL_CALL)  ; undefined FUN_00595760()
    ADD ESP,0x8                         ; 00595e27
    PUSH EBX                            ; 00595e2a
    CALL FUN_00408830                   ; 00595e2b
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00595e30
    PUSH EBX                            ; 00595e33
    CALL FUN_00408830                   ; 00595e34
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00595e39
    PUSH EBX                            ; 00595e3c
    CALL FUN_00408830                   ; 00595e3d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00595e42
    POP ESI                             ; 00595e45
    POP EDI                             ; 00595e46
    PUSH EBX                            ; 00595e47
        ;   Label: LAB_00595e47
    CALL FUN_0042f510                   ; 00595e48
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f510()
    ADD ESP,0x4                         ; 00595e4d
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 00595e50
    ADD ESP,0x60                        ; 00595e56
    POP EBP                             ; 00595e59
    POP EBX                             ; 00595e5a
    RET                                 ; 00595e5b
    XOR EAX,EAX                         ; 00595e5c
        ;   Label: LAB_00595e5c
    ADD ESP,0x60                        ; 00595e5e
    POP EBP                             ; 00595e61
    POP EBX                             ; 00595e62
    RET                                 ; 00595e63
    FLD float ptr [EBX + 0xd098]        ; 00595e64
        ;   Label: LAB_00595e64
    FADD float ptr [0x005d93ad]         ; 00595e6a | DAT_005d93ad
    FSTP float ptr [EBX + 0xd098]       ; 00595e70
    JMP 0x00595d56                      ; 00595e76
        ;   XREF to: 00595d56 (UNCONDITIONAL_JUMP)  ; LAB_00595d56
    PUSH EBX                            ; 00595e7b
        ;   Label: LAB_00595e7b
    CALL FUN_0042f510                   ; 00595e7c
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f510()
    ADD ESP,0x4                         ; 00595e81
    ADD ESP,0x60                        ; 00595e84
    POP EBP                             ; 00595e87
    POP EBX                             ; 00595e88
    RET                                 ; 00595e89

