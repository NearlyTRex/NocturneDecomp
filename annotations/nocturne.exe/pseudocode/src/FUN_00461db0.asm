; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461db0(int param_1)
;
;
; XREF[7]:
;   FUN_004110f0 at 0041126c
;   FUN_00414340 at 004144cd
;   FUN_00419c20 at 00419cbb
;   FUN_0045a260 at 0045a3fc
;   FUN_004c0b40 at 004c0f07
;   FUN_004dfea0 at 004dff7f
;   FUN_00550210 at 0055032f
;
; Referenced Globals:
;   undefined4 DAT_01b4d7ac
;   undefined4 DAT_01b4d7b4
;   undefined4 DAT_01b4d7b8
;
; Called Functions:
;   FUN_0045f5e0
;   FUN_00460fb0
;   FUN_00461eb0
;   FUN_00563db8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00461db0
        ;   Label: FUN_00461db0
    MOV EBP,dword ptr [ESP + 0x8]       ; 00461db1
    CMP dword ptr [EBP + 0x4],0x0       ; 00461db5
    JNZ 0x00461e93                      ; 00461db9
        ;   XREF to: 00461e93 (CONDITIONAL_JUMP)  ; LAB_00461e93
    PUSH EDI                            ; 00461dbf
    PUSH ESI                            ; 00461dc0
    PUSH EBX                            ; 00461dc1
    MOV ECX,dword ptr [0x01b4d7ac]      ; 00461dc2 | DAT_01b4d7ac
    TEST ECX,ECX                        ; 00461dc8
    JLE 0x00461df0                      ; 00461dca
        ;   XREF to: 00461df0 (CONDITIONAL_JUMP)  ; LAB_00461df0
    MOV EBX,0x1b4d7b4                   ; 00461dcc
    LEA ESI,[ECX*0x4 + 0x0]             ; 00461dd1
    XOR EAX,EAX                         ; 00461dd8
    MOV dword ptr [EAX + 0x1b748b4],EBX ; 00461dda
        ;   Label: LAB_00461dda
    ADD EAX,0x4                         ; 00461de0
    ADD EBX,0x20                        ; 00461de3
    CMP EAX,ESI                         ; 00461de6
    JL 0x00461dda                       ; 00461de8
        ;   XREF to: 00461dda (CONDITIONAL_JUMP)  ; LAB_00461dda
    LEA EAX,[EAX]                       ; 00461dea
    CMP dword ptr [EBP + 0x1c],0x1      ; 00461df0
        ;   Label: LAB_00461df0
    JZ 0x00461e95                       ; 00461df4
        ;   XREF to: 00461e95 (CONDITIONAL_JUMP)  ; LAB_00461e95
    PUSH 0x461d50                       ; 00461dfa | LAB_00461d50
    PUSH 0x4                            ; 00461dff
    MOV ESI,dword ptr [0x01b4d7ac]      ; 00461e01 | DAT_01b4d7ac
    PUSH ESI                            ; 00461e07
    PUSH 0x1b748b4                      ; 00461e08
        ;   Label: LAB_00461e08
    CALL FUN_00563db8                   ; 00461e0d
        ;   XREF to: 00563db8 (UNCONDITIONAL_CALL)  ; undefined FUN_00563db8()
    ADD ESP,0x10                        ; 00461e12
    MOV EAX,dword ptr [EBP + 0x10]      ; 00461e15
    MOV dword ptr [EBP + 0x1c],0x0      ; 00461e18
    TEST EAX,EAX                        ; 00461e1f
    JZ 0x00461e2e                       ; 00461e21
        ;   XREF to: 00461e2e (CONDITIONAL_JUMP)  ; LAB_00461e2e
    PUSH 0x1                            ; 00461e23
    PUSH EBP                            ; 00461e25
    CALL FUN_00460fb0                   ; 00461e26
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460fb0()
    ADD ESP,0x8                         ; 00461e2b
    MOV EDI,0xffffffff                  ; 00461e2e
        ;   Label: LAB_00461e2e
    MOV EDX,dword ptr [0x01b4d7ac]      ; 00461e33 | DAT_01b4d7ac
    XOR ESI,ESI                         ; 00461e39
    TEST EDX,EDX                        ; 00461e3b
    JLE 0x00461e85                      ; 00461e3d
        ;   XREF to: 00461e85 (CONDITIONAL_JUMP)  ; LAB_00461e85
    XOR EBX,EBX                         ; 00461e3f
    MOV EAX,dword ptr [EBX + 0x1b748b4] ; 00461e41
        ;   Label: LAB_00461e41
    MOV EDX,dword ptr [EAX]             ; 00461e47 | DAT_01b4d7b4
    CMP EDI,EDX                         ; 00461e49
    JZ 0x00461e61                       ; 00461e4b
        ;   XREF to: 00461e61 (CONDITIONAL_JUMP)  ; LAB_00461e61
    MOV EDI,EDX                         ; 00461e4d
    IMUL EAX,EDX,0x48                   ; 00461e4f
    ADD EAX,0x1b796d4                   ; 00461e52
    PUSH EAX                            ; 00461e57
    PUSH EBP                            ; 00461e58
    CALL FUN_00461eb0                   ; 00461e59
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 00461e5e
    MOV EAX,dword ptr [EBX + 0x1b748b4] ; 00461e61
        ;   Label: LAB_00461e61
    MOV ECX,dword ptr [EAX + 0x4]       ; 00461e67 | DAT_01b4d7b8
    PUSH ECX                            ; 00461e6a
    ADD EAX,0xc                         ; 00461e6b
    PUSH EAX                            ; 00461e6e
    PUSH EBP                            ; 00461e6f
    ADD EBX,0x4                         ; 00461e70
    INC ESI                             ; 00461e73
    CALL FUN_0045f5e0                   ; 00461e74
        ;   XREF to: 0045f5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f5e0()
    MOV EAX,[0x01b4d7ac]                ; 00461e79 | DAT_01b4d7ac
    ADD ESP,0xc                         ; 00461e7e
    CMP ESI,EAX                         ; 00461e81
    JL 0x00461e41                       ; 00461e83
        ;   XREF to: 00461e41 (CONDITIONAL_JUMP)  ; LAB_00461e41
    PUSH 0x0                            ; 00461e85
        ;   Label: LAB_00461e85
    PUSH EBP                            ; 00461e87
    CALL FUN_00460fb0                   ; 00461e88
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460fb0()
    ADD ESP,0x8                         ; 00461e8d
    POP EBX                             ; 00461e90
    POP ESI                             ; 00461e91
    POP EDI                             ; 00461e92
    POP EBP                             ; 00461e93
        ;   Label: LAB_00461e93
    RET                                 ; 00461e94
    PUSH 0x461d80                       ; 00461e95 | LAB_00461d80
        ;   Label: LAB_00461e95
    PUSH 0x4                            ; 00461e9a
    MOV EDI,dword ptr [0x01b4d7ac]      ; 00461e9c | DAT_01b4d7ac
    PUSH EDI                            ; 00461ea2
    JMP 0x00461e08                      ; 00461ea3
        ;   XREF to: 00461e08 (UNCONDITIONAL_JUMP)  ; LAB_00461e08

