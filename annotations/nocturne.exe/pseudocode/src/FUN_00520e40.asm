; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00520e40(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_smiley_die??.wav_005920fc+1
;
; Called Functions:
;   FUN_00479f70
;   FUN_004e1660
;   FUN_004e16b0
;   FUN_00520b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520e40
        ;   Label: FUN_00520e40
    PUSH ESI                            ; 00520e41
    MOV EBX,dword ptr [ESP + 0xc]       ; 00520e42
    MOV ESI,dword ptr [ESP + 0x10]      ; 00520e46
    CMP dword ptr [EBX + 0xbd64],0x1    ; 00520e4a
    JNZ 0x00520f0e                      ; 00520e51
        ;   XREF to: 00520f0e (CONDITIONAL_JUMP)  ; LAB_00520f0e
    MOV ECX,dword ptr [ESI + 0x30]      ; 00520e57
    CMP ECX,0x4                         ; 00520e5a
    JZ 0x00520f1f                       ; 00520e5d
        ;   XREF to: 00520f1f (CONDITIONAL_JUMP)  ; LAB_00520f1f
    CMP ECX,0xb                         ; 00520e63
    JLE 0x00520e74                      ; 00520e66
        ;   XREF to: 00520e74 (CONDITIONAL_JUMP)  ; LAB_00520e74
    CMP ECX,0x6b                        ; 00520e68
    JZ 0x00520e74                       ; 00520e6b
        ;   XREF to: 00520e74 (CONDITIONAL_JUMP)  ; LAB_00520e74
    MOV dword ptr [ESI + 0x4],0x0       ; 00520e6d
        ;   Label: LAB_00520e6d
    FLD float ptr [ESI + 0x4]           ; 00520e74
        ;   Label: LAB_00520e74
    FLDZ                                ; 00520e77
    FCOMPP                              ; 00520e79
    FNSTSW AX                           ; 00520e7b
    SAHF                                ; 00520e7d
    JNC 0x00520e8a                      ; 00520e7e
        ;   XREF to: 00520e8a (CONDITIONAL_JUMP)  ; LAB_00520e8a
    PUSH ESI                            ; 00520e80
    PUSH EBX                            ; 00520e81
    CALL FUN_00520b60                   ; 00520e82
        ;   XREF to: 00520b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00520b60()
    ADD ESP,0x8                         ; 00520e87
    PUSH EDI                            ; 00520e8a
        ;   Label: LAB_00520e8a
    FLD float ptr [ESI + 0x4]           ; 00520e8b
    FSUBR float ptr [EBX + 0x2434]      ; 00520e8e
    LEA EDI,[EBX + 0x150]               ; 00520e94
    FST float ptr [EBX + 0x2434]        ; 00520e9a
    FLDZ                                ; 00520ea0
    FCOMPP                              ; 00520ea2
    FNSTSW AX                           ; 00520ea4
    SAHF                                ; 00520ea6
    JC 0x00520f2b                       ; 00520ea7
        ;   XREF to: 00520f2b (CONDITIONAL_JUMP)  ; LAB_00520f2b
    PUSH EDI                            ; 00520ead
    MOV dword ptr [EBX + 0x2434],0x0    ; 00520eae
    CALL FUN_004e1660                   ; 00520eb8
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00520ebd
    ADD ESP,0x4                         ; 00520ec0
    CMP EAX,0x8                         ; 00520ec3
    JZ 0x00520f00                       ; 00520ec6
        ;   XREF to: 00520f00 (CONDITIONAL_JUMP)  ; LAB_00520f00
    CMP EAX,0x7                         ; 00520ec8
    JZ 0x00520f00                       ; 00520ecb
        ;   XREF to: 00520f00 (CONDITIONAL_JUMP)  ; LAB_00520f00
    PUSH 0x1                            ; 00520ecd
    PUSH 0x7                            ; 00520ecf
    PUSH EDI                            ; 00520ed1
    CALL FUN_004e16b0                   ; 00520ed2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 00520ed7
    PUSH 0x0                            ; 00520eda
    PUSH 0x1                            ; 00520edc
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00520ede
    PUSH EBX                            ; 00520ee4
    CALL dword ptr [EAX + 0x120]        ; 00520ee5
    ADD ESP,0xc                         ; 00520eeb
    PUSH 0x5920fd                       ; 00520eee | s_smiley_die??.wav_005920fc+1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00520ef3
    PUSH EBX                            ; 00520ef9
    CALL dword ptr [EAX + 0x24]         ; 00520efa
    ADD ESP,0x8                         ; 00520efd
    PUSH ESI                            ; 00520f00
        ;   Label: LAB_00520f00
    PUSH EBX                            ; 00520f01
    CALL FUN_00479f70                   ; 00520f02
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 00520f07
    POP EDI                             ; 00520f0a
    POP ESI                             ; 00520f0b
    POP EBX                             ; 00520f0c
    RET                                 ; 00520f0d
    MOV dword ptr [ESI + 0x30],0x64     ; 00520f0e
        ;   Label: LAB_00520f0e
    MOV dword ptr [ESI + 0x4],0x0       ; 00520f15
    POP ESI                             ; 00520f1c
    POP EBX                             ; 00520f1d
    RET                                 ; 00520f1e
    MOV dword ptr [ESI + 0x30],0x64     ; 00520f1f
        ;   Label: LAB_00520f1f
    JMP 0x00520e6d                      ; 00520f26
        ;   XREF to: 00520e6d (UNCONDITIONAL_JUMP)  ; LAB_00520e6d
    PUSH 0x1                            ; 00520f2b
        ;   Label: LAB_00520f2b
    PUSH 0x3                            ; 00520f2d
    PUSH EDI                            ; 00520f2f
    CALL FUN_004e16b0                   ; 00520f30
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 00520f35
    PUSH ESI                            ; 00520f38
    PUSH EBX                            ; 00520f39
    CALL FUN_00479f70                   ; 00520f3a
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 00520f3f
    POP EDI                             ; 00520f42
    POP ESI                             ; 00520f43
    POP EBX                             ; 00520f44
    RET                                 ; 00520f45

