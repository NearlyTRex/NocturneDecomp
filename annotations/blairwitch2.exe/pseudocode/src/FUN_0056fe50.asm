; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056fe50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc3d8
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_00424bd0
;   FUN_0046b960
;   FUN_0046bc80
;   FUN_005042e0
;   FUN_00547170
;   FUN_005b17d0
;   FUN_005b7150
;   FUN_005b7190
;   FUN_005b76a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fe50
        ;   Label: FUN_0056fe50
    PUSH EBP                            ; 0056fe51
    SUB ESP,0x34                        ; 0056fe52
    MOV EBX,dword ptr [ESP + 0x40]      ; 0056fe55
    MOV EDX,dword ptr [0x0060b280]      ; 0056fe59 | DAT_0060b280
    PUSH EDX                            ; 0056fe5f | DAT_01ba5c50
    CALL FUN_0046bc80                   ; 0056fe60
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0046bc80()
    ADD ESP,0x4                         ; 0056fe65
    MOV dword ptr [ESP + 0x30],EAX      ; 0056fe68
    TEST EAX,EAX                        ; 0056fe6c
    JZ 0x0056ff4e                       ; 0056fe6e
        ;   XREF to: 0056ff4e (CONDITIONAL_JUMP)  ; LAB_0056ff4e
    CMP dword ptr [EBX + 0x2568],0x0    ; 0056fe74
        ;   Label: LAB_0056fe74
    JNZ 0x0056ff59                      ; 0056fe7b
        ;   XREF to: 0056ff59 (CONDITIONAL_JUMP)  ; LAB_0056ff59
    PUSH EDI                            ; 0056fe81
    PUSH ESI                            ; 0056fe82
    PUSH EBX                            ; 0056fe83
    CALL FUN_004089d0                   ; 0056fe84
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 0056fe89
    PUSH 0x0                            ; 0056fe8c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056fe8e
    PUSH EBX                            ; 0056fe94
    LEA ESI,[ESP + 0x10]                ; 0056fe95
    LEA EDI,[ESP + 0x28]                ; 0056fe99
    CALL dword ptr [EAX + 0x24]         ; 0056fe9d
    MOV ECX,0x6                         ; 0056fea0
    ADD ESP,0x4                         ; 0056fea5
    LEA EAX,[ESP + 0x24]                ; 0056fea8
    LEA ESI,[ESP + 0xc]                 ; 0056feac
    PUSH EAX                            ; 0056feb0
    MOVSD.REP ES:EDI,ESI                ; 0056feb1
    CALL FUN_0041a840                   ; 0056feb3
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 0056feb8
    MOV EBP,EAX                         ; 0056febb
    TEST EAX,EAX                        ; 0056febd
    JZ 0x0056ff3b                       ; 0056febf
        ;   XREF to: 0056ff3b (CONDITIONAL_JUMP)  ; LAB_0056ff3b
    MOV ESI,dword ptr [ESP + 0x38]      ; 0056fec5
    LEA EDI,[EBX + 0x10af8]             ; 0056fec9
    MOV dword ptr [EBX + 0x2828],0x1    ; 0056fecf
    TEST ESI,ESI                        ; 0056fed9
    JZ 0x0056ff61                       ; 0056fedb
        ;   XREF to: 0056ff61 (CONDITIONAL_JUMP)  ; LAB_0056ff61
    PUSH 0x0                            ; 0056fee1
    PUSH 0x1                            ; 0056fee3
    PUSH -0x1                           ; 0056fee5
    PUSH -0x1                           ; 0056fee7
    PUSH EDI                            ; 0056fee9
    CALL FUN_00547170                   ; 0056feea
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; undefined FUN_00547170()
    ADD ESP,0x14                        ; 0056feef
    PUSH EDI                            ; 0056fef2
    LEA EAX,[EBX + 0x12dac]             ; 0056fef3
    PUSH EAX                            ; 0056fef9
    CALL FUN_005b17d0                   ; 0056fefa
        ;   XREF to: 005b17d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b17d0()
    ADD ESP,0x8                         ; 0056feff
        ;   Label: LAB_0056feff
    CMP dword ptr [0x01d1cdc8],0x0      ; 0056ff02 | DAT_01d1cdc8
        ;   Label: LAB_0056ff02
    JZ 0x0056ff3b                       ; 0056ff09
        ;   XREF to: 0056ff3b (CONDITIONAL_JUMP)  ; LAB_0056ff3b
    MOV EDI,dword ptr [0x0060b280]      ; 0056ff0b | DAT_0060b280
    PUSH EDI                            ; 0056ff11 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 0056ff12
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0056ff17
    TEST EAX,EAX                        ; 0056ff1a
    JNZ 0x0056ff3b                      ; 0056ff1c
        ;   XREF to: 0056ff3b (CONDITIONAL_JUMP)  ; LAB_0056ff3b
    PUSH EBX                            ; 0056ff1e
    LEA EAX,[EBX + 0x2b4]               ; 0056ff1f
    PUSH EAX                            ; 0056ff25
    CALL FUN_005042e0                   ; 0056ff26
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005042e0()
    ADD ESP,0x8                         ; 0056ff2b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056ff2e
    PUSH EBX                            ; 0056ff34
    CALL dword ptr [EAX + 0x60]         ; 0056ff35
    ADD ESP,0x4                         ; 0056ff38
    PUSH EBX                            ; 0056ff3b
        ;   Label: LAB_0056ff3b
    CALL FUN_00408a10                   ; 0056ff3c
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 0056ff41
    MOV EAX,EBP                         ; 0056ff44
    POP ESI                             ; 0056ff46
    POP EDI                             ; 0056ff47
    ADD ESP,0x34                        ; 0056ff48
    POP EBP                             ; 0056ff4b
    POP EBX                             ; 0056ff4c
    RET                                 ; 0056ff4d
    MOV dword ptr [EBX + 0x2828],EAX    ; 0056ff4e
        ;   Label: LAB_0056ff4e
    JMP 0x0056fe74                      ; 0056ff54
        ;   XREF to: 0056fe74 (UNCONDITIONAL_JUMP)  ; LAB_0056fe74
    XOR EAX,EAX                         ; 0056ff59
        ;   Label: LAB_0056ff59
    ADD ESP,0x34                        ; 0056ff5b
    POP EBP                             ; 0056ff5e
    POP EBX                             ; 0056ff5f
    RET                                 ; 0056ff60
    CMP dword ptr [EBX + 0x12f70],0x0   ; 0056ff61
        ;   Label: LAB_0056ff61
    JZ 0x0056ffd9                       ; 0056ff68
        ;   XREF to: 0056ffd9 (CONDITIONAL_JUMP)  ; LAB_0056ffd9
    PUSH ESI                            ; 0056ff6a
    LEA EAX,[EBX + 0x2b4]               ; 0056ff6b
    PUSH EAX                            ; 0056ff71
    PUSH ESI                            ; 0056ff72
    LEA ESI,[EBX + 0x12f78]             ; 0056ff73
    PUSH ESI                            ; 0056ff79
    CALL FUN_005b7150                   ; 0056ff7a
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7150()
    ADD ESP,0x10                        ; 0056ff7f
    PUSH 0x0                            ; 0056ff82
    PUSH EDI                            ; 0056ff84
    PUSH 0x1                            ; 0056ff85
    PUSH ESI                            ; 0056ff87
    CALL FUN_005b7150                   ; 0056ff88
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7150()
    ADD ESP,0x10                        ; 0056ff8d
    PUSH 0x1                            ; 0056ff90
    PUSH 0x0                            ; 0056ff92
    MOV EDX,dword ptr [EBX + 0x12f40]   ; 0056ff94
    PUSH EDX                            ; 0056ff9a
    PUSH 0x1                            ; 0056ff9b
    PUSH ESI                            ; 0056ff9d
    CALL FUN_005b7190                   ; 0056ff9e
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7190()
    ADD ESP,0x14                        ; 0056ffa3
    PUSH 0x2                            ; 0056ffa6
    PUSH 0x0                            ; 0056ffa8
    MOV ECX,dword ptr [EBX + 0x12f40]   ; 0056ffaa
    PUSH ECX                            ; 0056ffb0
    PUSH 0x1                            ; 0056ffb1
    PUSH ESI                            ; 0056ffb3
    CALL FUN_005b7190                   ; 0056ffb4
        ;   XREF to: 005b7190 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7190()
    FLD float ptr [EBX + 0x12f74]       ; 0056ffb9
    FDIV float ptr [0x005fc3d8]         ; 0056ffbf | DAT_005fc3d8
    ADD ESP,0x14                        ; 0056ffc5
    SUB ESP,0x4                         ; 0056ffc8
    FSTP float ptr [ESP]                ; 0056ffcb
    PUSH ESI                            ; 0056ffce
    CALL FUN_005b76a0                   ; 0056ffcf
        ;   XREF to: 005b76a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b76a0()
    JMP 0x0056feff                      ; 0056ffd4
        ;   XREF to: 0056feff (UNCONDITIONAL_JUMP)  ; LAB_0056feff
    PUSH EBX                            ; 0056ffd9
        ;   Label: LAB_0056ffd9
    CALL FUN_00424bd0                   ; 0056ffda
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00424bd0()
    ADD ESP,0x4                         ; 0056ffdf
    JMP 0x0056ff02                      ; 0056ffe2
        ;   XREF to: 0056ff02 (UNCONDITIONAL_JUMP)  ; LAB_0056ff02

