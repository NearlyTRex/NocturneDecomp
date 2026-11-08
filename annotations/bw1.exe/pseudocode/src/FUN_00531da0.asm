; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00531da0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004ef300 at 004ef383
;
; Referenced Globals:
;   undefined4 DAT_005ec7dc
;   undefined4 DAT_005ec7e0
;   TerminatedCString s_DAMAGE_005ec7e5
;   undefined4 DAT_005ec7ec
;
; Called Functions:
;   FUN_004319e0
;   FUN_004328c0
;   FUN_00531cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531da0
        ;   Label: FUN_00531da0
    PUSH ESI                            ; 00531da1
    PUSH EDI                            ; 00531da2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00531da3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00531da7
    PUSH EBX                            ; 00531dab
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531dac
    CALL dword ptr [EAX + 0xcc]         ; 00531db2
    ADD ESP,0x4                         ; 00531db8
    CMP EAX,0x1d8136c                   ; 00531dbb
    JNZ 0x00531e19                      ; 00531dc0
        ;   XREF to: 00531e19 (CONDITIONAL_JUMP)  ; LAB_00531e19
    FLD float ptr [EDI + 0x4]           ; 00531dc2
    FSUBR float ptr [EBX + 0x2538]      ; 00531dc5
    LEA ESI,[EBX + 0x158]               ; 00531dcb
    FST float ptr [EBX + 0x2538]        ; 00531dd1
    FLDZ                                ; 00531dd7
    FCOMPP                              ; 00531dd9
    FNSTSW AX                           ; 00531ddb
    SAHF                                ; 00531ddd
    JNC 0x00531e27                      ; 00531dde
        ;   XREF to: 00531e27 (CONDITIONAL_JUMP)  ; LAB_00531e27
    FLD float ptr [EDI + 0x4]           ; 00531de0
    FLDZ                                ; 00531de3
    FCOMPP                              ; 00531de5
    FNSTSW AX                           ; 00531de7
    SAHF                                ; 00531de9
    JNC 0x00531e19                      ; 00531dea
        ;   XREF to: 00531e19 (CONDITIONAL_JUMP)  ; LAB_00531e19
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00531dec
    JNZ 0x00531e19                      ; 00531df3
        ;   XREF to: 00531e19 (CONDITIONAL_JUMP)  ; LAB_00531e19
    PUSH 0x5ec7e0                       ; 00531df5 | DAT_005ec7e0
    PUSH ESI                            ; 00531dfa
    CALL FUN_00531cc0                   ; 00531dfb
        ;   XREF to: 00531cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531cc0()
    ADD ESP,0x8                         ; 00531e00
    TEST EAX,EAX                        ; 00531e03
    JNZ 0x00531e19                      ; 00531e05
        ;   XREF to: 00531e19 (CONDITIONAL_JUMP)  ; LAB_00531e19
    PUSH 0x5ec7e5                       ; 00531e07 | = "DAMAGE"
    PUSH ESI                            ; 00531e0c
    CALL FUN_00531cc0                   ; 00531e0d
        ;   XREF to: 00531cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531cc0()
    ADD ESP,0x8                         ; 00531e12
    TEST EAX,EAX                        ; 00531e15
    JZ 0x00531e61                       ; 00531e17
        ;   XREF to: 00531e61 (CONDITIONAL_JUMP)  ; LAB_00531e61
    PUSH EDI                            ; 00531e19
        ;   Label: LAB_00531e19
    PUSH EBX                            ; 00531e1a
    CALL FUN_004319e0                   ; 00531e1b
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00531e20
    POP EDI                             ; 00531e23
    POP ESI                             ; 00531e24
    POP EBX                             ; 00531e25
    RET                                 ; 00531e26
    PUSH 0x41c80000                     ; 00531e27
        ;   Label: LAB_00531e27
    PUSH 0x32                           ; 00531e2c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531e2e
    PUSH EBX                            ; 00531e34
    MOV dword ptr [EBX + 0x2538],0x0    ; 00531e35
    CALL dword ptr [EAX + 0xa8]         ; 00531e3f
    ADD ESP,0xc                         ; 00531e45
    PUSH EBX                            ; 00531e48
    CALL FUN_004328c0                   ; 00531e49
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004328c0()
    ADD ESP,0x4                         ; 00531e4e
    PUSH 0x5ec7dc                       ; 00531e51 | DAT_005ec7dc
    PUSH ESI                            ; 00531e56
    CALL FUN_00531cc0                   ; 00531e57
        ;   XREF to: 00531cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531cc0()
    ADD ESP,0x8                         ; 00531e5c
    JMP 0x00531e19                      ; 00531e5f
        ;   XREF to: 00531e19 (UNCONDITIONAL_JUMP)  ; LAB_00531e19
    PUSH 0x5ec7ec                       ; 00531e61 | DAT_005ec7ec
        ;   Label: LAB_00531e61
    PUSH ESI                            ; 00531e66
    CALL FUN_00531cc0                   ; 00531e67
        ;   XREF to: 00531cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531cc0()
    ADD ESP,0x8                         ; 00531e6c
    PUSH EDI                            ; 00531e6f
    PUSH EBX                            ; 00531e70
    CALL FUN_004319e0                   ; 00531e71
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00531e76
    POP EDI                             ; 00531e79
    POP ESI                             ; 00531e7a
    POP EBX                             ; 00531e7b
    RET                                 ; 00531e7c

