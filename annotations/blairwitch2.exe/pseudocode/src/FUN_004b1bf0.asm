; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1bf0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_gb_die_1_6_wav_005d7193
;   TerminatedCString s_gb_hit_1_6_wav_005d71a3
;   undefined4 DAT_005d71b3
;   undefined4 DAT_005f7344
;   undefined4 DAT_00616494
;   undefined4 DAT_006167e0
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb69d4
;   undefined4 DAT_01cb6aec
;   undefined4 DAT_01cb6b48
;
; Called Functions:
;   FUN_0040cf60
;   FUN_00427fb0
;   FUN_004bb8b0
;   FUN_004c9cc0
;   FUN_005035c0
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1bf0
        ;   Label: FUN_004b1bf0
    PUSH ESI                            ; 004b1bf1
    PUSH EDI                            ; 004b1bf2
    PUSH EBP                            ; 004b1bf3
    MOV EBP,ESP                         ; 004b1bf4
    SUB ESP,0x4                         ; 004b1bf6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b1bf9
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b1bfc
    TEST dword ptr [EBX + 0x10a60],0x7fffffff ; 004b1bff
    JNZ 0x004b1d57                      ; 004b1c09
        ;   XREF to: 004b1d57 (CONDITIONAL_JUMP)  ; LAB_004b1d57
    MOV EAX,[0x00616494]                ; 004b1c0f | DAT_00616494
        ;   Label: LAB_004b1c0f
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004b1c14 | DAT_01cb6aec
    JZ 0x004b1c24                       ; 004b1c1b
        ;   XREF to: 004b1c24 (CONDITIONAL_JUMP)  ; LAB_004b1c24
    MOV dword ptr [ESI + 0x4],0x0       ; 004b1c1d
    MOV EAX,[0x00616494]                ; 004b1c24 | DAT_00616494
        ;   Label: LAB_004b1c24
    MOV EDI,dword ptr [EAX + 0x248]     ; 004b1c29 | DAT_01cb6b48
    TEST EDI,EDI                        ; 004b1c2f
    JZ 0x004b1d63                       ; 004b1c31
        ;   XREF to: 004b1d63 (CONDITIONAL_JUMP)  ; LAB_004b1d63
    MOV EAX,[0x005f7344]                ; 004b1c37 | DAT_005f7344
        ;   Label: LAB_004b1c37
    MOV dword ptr [EBX + 0x10a60],EAX   ; 004b1c3c
    FLD float ptr [ESI + 0x4]           ; 004b1c42
    FSUBR float ptr [EBX + 0x25a8]      ; 004b1c45
    LEA EDI,[EBX + 0x2b4]               ; 004b1c4b
    FST float ptr [EBX + 0x25a8]        ; 004b1c51
    FLDZ                                ; 004b1c57
    FCOMPP                              ; 004b1c59
    FNSTSW AX                           ; 004b1c5b
    SAHF                                ; 004b1c5d
    JC 0x004b1d6b                       ; 004b1c5e
        ;   XREF to: 004b1d6b (CONDITIONAL_JUMP)  ; LAB_004b1d6b
    PUSH EDI                            ; 004b1c64
    MOV dword ptr [EBX + 0x25a8],0x0    ; 004b1c65
    CALL FUN_005035c0                   ; 004b1c6f
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b1c74
    ADD ESP,0x4                         ; 004b1c77
    CMP EAX,0xc                         ; 004b1c7a
    JZ 0x004b1d36                       ; 004b1c7d
        ;   XREF to: 004b1d36 (CONDITIONAL_JUMP)  ; LAB_004b1d36
    PUSH EDI                            ; 004b1c83
    CALL FUN_005035c0                   ; 004b1c84
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b1c89
    ADD ESP,0x4                         ; 004b1c8c
    CMP EAX,0xb                         ; 004b1c8f
    JZ 0x004b1d36                       ; 004b1c92
        ;   XREF to: 004b1d36 (CONDITIONAL_JUMP)  ; LAB_004b1d36
    PUSH 0x1                            ; 004b1c98
    PUSH 0x42c80000                     ; 004b1c9a
    PUSH 0x0                            ; 004b1c9f
    MOV dword ptr [EBX + 0x276c],0x0    ; 004b1ca1
    CALL FUN_0040cf60                   ; 004b1cab
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + -0x4],EAX      ; 004b1cb0
    ADD ESP,0x8                         ; 004b1cb3
    FLD float ptr [EBP + -0x4]          ; 004b1cb6
    FCOMP float ptr [0x005d71b3]        ; 004b1cb9 | DAT_005d71b3
    FNSTSW AX                           ; 004b1cbf
    SAHF                                ; 004b1cc1
    SETBE AL                            ; 004b1cc2
    AND EAX,0xff                        ; 004b1cc5
    ADD EAX,0x9                         ; 004b1cca
    PUSH EAX                            ; 004b1ccd
    LEA EAX,[EBX + 0x2b4]               ; 004b1cce
    PUSH EAX                            ; 004b1cd4
    CALL FUN_00503620                   ; 004b1cd5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    MOV EAX,[0x00616494]                ; 004b1cda | DAT_00616494
    MOV ECX,dword ptr [EAX + 0xd4]      ; 004b1cdf | DAT_01cb69d4
    ADD ESP,0xc                         ; 004b1ce5
    CMP ECX,0x2                         ; 004b1ce8
    JZ 0x004b1d1d                       ; 004b1ceb
        ;   XREF to: 004b1d1d (CONDITIONAL_JUMP)  ; LAB_004b1d1d
    PUSH 0x3ecccccd                     ; 004b1ced
    PUSH 0x3e800000                     ; 004b1cf2
    MOV EDI,dword ptr [EBX + 0x2b0]     ; 004b1cf7
    CALL FUN_0040cf60                   ; 004b1cfd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 004b1d02
    MOV dword ptr [EBP + -0x4],EAX      ; 004b1d05
    SUB ESP,0x4                         ; 004b1d08
    MOV EAX,dword ptr [EBP + -0x4]      ; 004b1d0b
    MOV dword ptr [ESP],EAX             ; 004b1d0e
    PUSH 0x5d7193                       ; 004b1d11 | = "gb-die[1,6].wav"
    PUSH EBX                            ; 004b1d16
    CALL dword ptr [EDI + 0x3c]         ; 004b1d17
    ADD ESP,0xc                         ; 004b1d1a
    PUSH 0x0                            ; 004b1d1d
        ;   Label: LAB_004b1d1d
    PUSH 0x42480000                     ; 004b1d1f
    PUSH 0x32                           ; 004b1d24
    PUSH EBX                            ; 004b1d26
    MOV EDI,dword ptr [0x006167e0]      ; 004b1d27 | DAT_006167e0
    PUSH EDI                            ; 004b1d2d
    CALL FUN_004c9cc0                   ; 004b1d2e
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9cc0()
    ADD ESP,0x14                        ; 004b1d33
    FLD float ptr [ESI + 0x4]           ; 004b1d36
        ;   Label: LAB_004b1d36
    FLDZ                                ; 004b1d39
    FCOMPP                              ; 004b1d3b
    FNSTSW AX                           ; 004b1d3d
    SAHF                                ; 004b1d3f
    JC 0x004b1dd2                       ; 004b1d40
        ;   XREF to: 004b1dd2 (CONDITIONAL_JUMP)  ; LAB_004b1dd2
    PUSH ESI                            ; 004b1d46
    PUSH EBX                            ; 004b1d47
    CALL FUN_00427fb0                   ; 004b1d48
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427fb0()
    ADD ESP,0x8                         ; 004b1d4d
    MOV ESP,EBP                         ; 004b1d50
    POP EBP                             ; 004b1d52
    POP EDI                             ; 004b1d53
    POP ESI                             ; 004b1d54
    POP EBX                             ; 004b1d55
    RET                                 ; 004b1d56
    MOV dword ptr [ESI + 0x4],0x0       ; 004b1d57
        ;   Label: LAB_004b1d57
    JMP 0x004b1c0f                      ; 004b1d5e
        ;   XREF to: 004b1c0f (UNCONDITIONAL_JUMP)  ; LAB_004b1c0f
    MOV dword ptr [ESI + 0x4],EDI       ; 004b1d63
        ;   Label: LAB_004b1d63
    JMP 0x004b1c37                      ; 004b1d66
        ;   XREF to: 004b1c37 (UNCONDITIONAL_JUMP)  ; LAB_004b1c37
    FLD float ptr [ESI + 0x4]           ; 004b1d6b
        ;   Label: LAB_004b1d6b
    FLDZ                                ; 004b1d6e
    FCOMPP                              ; 004b1d70
    FNSTSW AX                           ; 004b1d72
    SAHF                                ; 004b1d74
    JNC 0x004b1d36                      ; 004b1d75
        ;   XREF to: 004b1d36 (CONDITIONAL_JUMP)  ; LAB_004b1d36
    CMP dword ptr [EBX + 0x25614],0x0   ; 004b1d77
    JZ 0x004b1dc3                       ; 004b1d7e
        ;   XREF to: 004b1dc3 (CONDITIONAL_JUMP)  ; LAB_004b1dc3
    MOV EAX,[0x00616494]                ; 004b1d80 | DAT_00616494
        ;   Label: LAB_004b1d80
    CMP dword ptr [EAX + 0xd4],0x2      ; 004b1d85 | DAT_01cb69d4
    JZ 0x004b1d36                       ; 004b1d8c
        ;   XREF to: 004b1d36 (CONDITIONAL_JUMP)  ; LAB_004b1d36
    PUSH 0x3ecccccd                     ; 004b1d8e
    PUSH 0x3e800000                     ; 004b1d93
    MOV EDI,dword ptr [EBX + 0x2b0]     ; 004b1d98
    CALL FUN_0040cf60                   ; 004b1d9e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 004b1da3
    MOV dword ptr [EBP + -0x4],EAX      ; 004b1da6
    SUB ESP,0x4                         ; 004b1da9
    MOV EAX,dword ptr [EBP + -0x4]      ; 004b1dac
    MOV dword ptr [ESP],EAX             ; 004b1daf
    PUSH 0x5d71a3                       ; 004b1db2 | = "gb-hit[1,6].wav"
    PUSH EBX                            ; 004b1db7
    CALL dword ptr [EDI + 0x3c]         ; 004b1db8
    ADD ESP,0xc                         ; 004b1dbb
    JMP 0x004b1d36                      ; 004b1dbe
        ;   XREF to: 004b1d36 (UNCONDITIONAL_JUMP)  ; LAB_004b1d36
    PUSH 0x1                            ; 004b1dc3
        ;   Label: LAB_004b1dc3
    PUSH 0x8                            ; 004b1dc5
    PUSH EDI                            ; 004b1dc7
    CALL FUN_00503620                   ; 004b1dc8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004b1dcd
    JMP 0x004b1d80                      ; 004b1dd0
        ;   XREF to: 004b1d80 (UNCONDITIONAL_JUMP)  ; LAB_004b1d80
    MOV EAX,[0x00616494]                ; 004b1dd2 | DAT_00616494
        ;   Label: LAB_004b1dd2
    PUSH EAX                            ; 004b1dd7 | DAT_01cb6900
    CALL FUN_004bb8b0                   ; 004b1dd8
        ;   XREF to: 004bb8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb8b0()
    ADD ESP,0x4                         ; 004b1ddd
    PUSH ESI                            ; 004b1de0
    PUSH EBX                            ; 004b1de1
    CALL FUN_00427fb0                   ; 004b1de2
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427fb0()
    ADD ESP,0x8                         ; 004b1de7
    MOV ESP,EBP                         ; 004b1dea
    POP EBP                             ; 004b1dec
    POP EDI                             ; 004b1ded
    POP ESI                             ; 004b1dee
    POP EBX                             ; 004b1def
    RET                                 ; 004b1df0

