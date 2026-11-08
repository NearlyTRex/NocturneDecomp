; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b8ac0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005df6df
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01cc4148
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_0040c600
;   FUN_004207b0
;   FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8ac0
        ;   Label: FUN_004b8ac0
    PUSH ESI                            ; 004b8ac1
    PUSH EDI                            ; 004b8ac2
    PUSH EBP                            ; 004b8ac3
    MOV EBP,ESP                         ; 004b8ac4
    SUB ESP,0x54                        ; 004b8ac6
    AND ESP,0xfffffff8                  ; 004b8ac9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8acc
    MOV EDX,dword ptr [0x00612560]      ; 004b8acf | DAT_00612560
    MOV dword ptr [EAX + 0x2a0],0x0     ; 004b8ad5
    PUSH EDX                            ; 004b8adf | DAT_01bc120c
    MOV dword ptr [EAX + 0x298],0x0     ; 004b8ae0
    CALL FUN_00483e60                   ; 004b8aea
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 004b8aef
    TEST EAX,EAX                        ; 004b8af2
    JNZ 0x004b8afc                      ; 004b8af4
        ;   XREF to: 004b8afc (CONDITIONAL_JUMP)  ; LAB_004b8afc
    CMP dword ptr [EBP + 0x18],0x0      ; 004b8af6
    JNZ 0x004b8b03                      ; 004b8afa
        ;   XREF to: 004b8b03 (CONDITIONAL_JUMP)  ; LAB_004b8b03
    MOV ESP,EBP                         ; 004b8afc
        ;   Label: LAB_004b8afc
    POP EBP                             ; 004b8afe
    POP EDI                             ; 004b8aff
    POP ESI                             ; 004b8b00
    POP EBX                             ; 004b8b01
    RET                                 ; 004b8b02
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b8b03
        ;   Label: LAB_004b8b03
    PUSH EBX                            ; 004b8b06
    CALL FUN_004087b0                   ; 004b8b07
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 004b8b0c
    PUSH 0x0                            ; 004b8b0f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004b8b11
    PUSH EBX                            ; 004b8b17
    LEA ESI,[ESP + 0x20]                ; 004b8b18
    LEA EDI,[ESP + 0x8]                 ; 004b8b1c
    CALL dword ptr [EAX + 0x1c]         ; 004b8b20
    MOV ECX,0x6                         ; 004b8b23
    ADD ESP,0x4                         ; 004b8b28
    LEA EAX,[ESP + 0x4]                 ; 004b8b2b
    LEA ESI,[ESP + 0x1c]                ; 004b8b2f
    PUSH EAX                            ; 004b8b33
    MOVSD.REP ES:EDI,ESI                ; 004b8b34
    CALL FUN_004207b0                   ; 004b8b36
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004b8b3b
    PUSH EBX                            ; 004b8b3e
    MOV dword ptr [EBX + 0x290],EAX     ; 004b8b3f
    CALL FUN_004087f0                   ; 004b8b45
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    MOV EDX,dword ptr [EBX + 0x290]     ; 004b8b4a
    ADD ESP,0x4                         ; 004b8b50
    TEST EDX,EDX                        ; 004b8b53
    JZ 0x004b8afc                       ; 004b8b55
        ;   XREF to: 004b8afc (CONDITIONAL_JUMP)  ; LAB_004b8afc
    FLD float ptr [EBX + 0x15c]         ; 004b8b57
    FMUL ST0                            ; 004b8b5d
    FLD float ptr [EBX + 0x158]         ; 004b8b5f
    FMUL ST0                            ; 004b8b65
    FADDP                               ; 004b8b67
    FLD float ptr [EBX + 0x160]         ; 004b8b69
    FMUL ST0                            ; 004b8b6f
    FADDP                               ; 004b8b71
    FSQRT                               ; 004b8b73
    FLD1                                ; 004b8b75
    FCOMPP                              ; 004b8b77
    FNSTSW AX                           ; 004b8b79
    SAHF                                ; 004b8b7b
    JNC 0x004b8afc                      ; 004b8b7c
        ;   XREF to: 004b8afc (CONDITIONAL_JUMP)  ; LAB_004b8afc
    FLD float ptr [EBX + 0x1ac]         ; 004b8b82
    FLDZ                                ; 004b8b88
    FCOMPP                              ; 004b8b8a
    FNSTSW AX                           ; 004b8b8c
    SAHF                                ; 004b8b8e
    JNC 0x004b8afc                      ; 004b8b8f
        ;   XREF to: 004b8afc (CONDITIONAL_JUMP)  ; LAB_004b8afc
    MOV ECX,dword ptr [EBX + 0x1a8]     ; 004b8b95
    TEST ECX,ECX                        ; 004b8b9b
    JNZ 0x004b8afc                      ; 004b8b9d
        ;   XREF to: 004b8afc (CONDITIONAL_JUMP)  ; LAB_004b8afc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8ba3
    MOV dword ptr [ESP + 0x48],ECX      ; 004b8ba6
    MOV dword ptr [ESP + 0x50],ECX      ; 004b8baa
    ADD EAX,0x20                        ; 004b8bae
    XOR EBX,EBX                         ; 004b8bb1
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b8bb3
    MOV EAX,[0x00622c18]                ; 004b8bb7 | DAT_00622c18 | DAT_01e82168
        ;   Label: LAB_004b8bb7
    MOV EDX,dword ptr [ESP + 0x50]      ; 004b8bbc
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004b8bc0 | DAT_01fcf2cc
    JL 0x004b8bf5                       ; 004b8bc6
        ;   XREF to: 004b8bf5 (CONDITIONAL_JUMP)  ; LAB_004b8bf5
    CMP dword ptr [ESP + 0x48],0x0      ; 004b8bc8
    JNZ 0x004b8afc                      ; 004b8bcd
        ;   XREF to: 004b8afc (CONDITIONAL_JUMP)  ; LAB_004b8afc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8bd3
    MOV dword ptr [EAX + 0x2a0],0x1     ; 004b8bd6
    MOV ESP,EBP                         ; 004b8be0
    POP EBP                             ; 004b8be2
    POP EDI                             ; 004b8be3
    POP ESI                             ; 004b8be4
    POP EBX                             ; 004b8be5
    RET                                 ; 004b8be6
    MOV EDI,dword ptr [ESP + 0x50]      ; 004b8be7
        ;   Label: LAB_004b8be7
    INC EDI                             ; 004b8beb
    ADD EBX,0x4                         ; 004b8bec
    MOV dword ptr [ESP + 0x50],EDI      ; 004b8bef
    JMP 0x004b8bb7                      ; 004b8bf3
        ;   XREF to: 004b8bb7 (UNCONDITIONAL_JUMP)  ; LAB_004b8bb7
    MOV EDX,dword ptr [0x01cc4148]      ; 004b8bf5 | DAT_01cc4148
        ;   Label: LAB_004b8bf5
    PUSH EDX                            ; 004b8bfb
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004b8bfc | DAT_01fcf2d0
    PUSH ECX                            ; 004b8c03
    CALL FUN_0040c600                   ; 004b8c04
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV EDX,EAX                         ; 004b8c09
    ADD ESP,0x8                         ; 004b8c0b
    TEST EAX,EAX                        ; 004b8c0e
    JZ 0x004b8be7                       ; 004b8c10
        ;   XREF to: 004b8be7 (CONDITIONAL_JUMP)  ; LAB_004b8be7
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004b8c12
    LEA EDI,[ESP + 0x30]                ; 004b8c16
    FLD float ptr [ESI + 0x4]           ; 004b8c1a
    FLD float ptr [ESI + 0x8]           ; 004b8c1d
    FLD float ptr [ESI]                 ; 004b8c20
    LEA ESI,[ESP + 0x3c]                ; 004b8c22
    FSUB float ptr [EAX + 0x20]         ; 004b8c26
    FXCH ST2                            ; 004b8c29
    FSUB float ptr [EAX + 0x24]         ; 004b8c2b
    FXCH                                ; 004b8c2e
    FSUB float ptr [EAX + 0x28]         ; 004b8c30
    FXCH ST2                            ; 004b8c33
    FSTP float ptr [ESP + 0x3c]         ; 004b8c35
    FSTP float ptr [ESP + 0x40]         ; 004b8c39
    FSTP float ptr [ESP + 0x44]         ; 004b8c3d
    MOVSD ES:EDI,ESI                    ; 004b8c41
    MOVSD ES:EDI,ESI                    ; 004b8c42
    MOVSD ES:EDI,ESI                    ; 004b8c43
    FLD float ptr [ESP + 0x34]          ; 004b8c44
    FMUL ST0                            ; 004b8c48
    FLD float ptr [ESP + 0x30]          ; 004b8c4a
    FMUL ST0                            ; 004b8c4e
    FADDP                               ; 004b8c50
    FLD float ptr [ESP + 0x38]          ; 004b8c52
    FMUL ST0                            ; 004b8c56
    FADDP                               ; 004b8c58
    ADD EAX,0x20                        ; 004b8c5a
    FSQRT                               ; 004b8c5d
    FCOMP double ptr [0x005df6df]       ; 004b8c5f | DAT_005df6df
    FNSTSW AX                           ; 004b8c65
    SAHF                                ; 004b8c67
    JNC 0x004b8be7                      ; 004b8c68
        ;   XREF to: 004b8be7 (CONDITIONAL_JUMP)  ; LAB_004b8be7
    CMP dword ptr [EDX + 0x2a0],0x1     ; 004b8c6e
    JNZ 0x004b8be7                      ; 004b8c75
        ;   XREF to: 004b8be7 (CONDITIONAL_JUMP)  ; LAB_004b8be7
    MOV ESP,EBP                         ; 004b8c7b
    POP EBP                             ; 004b8c7d
    POP EDI                             ; 004b8c7e
    POP ESI                             ; 004b8c7f
    POP EBX                             ; 004b8c80
    RET                                 ; 004b8c81

