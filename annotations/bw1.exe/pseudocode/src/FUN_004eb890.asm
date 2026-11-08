; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004eb890(int param_1)
;
; Local Variables:
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[3]:
;   FUN_004c65f0 at 004c78e7
;   FUN_004eca10 at 004ecb0b
;   FUN_00591120 at 00591315
;
; Referenced Globals:
;   undefined4 DAT_005e48c9
;   undefined4 DAT_005e48cd
;   undefined4 DAT_005e48d5
;   undefined4 DAT_005e48dd
;   undefined4 DAT_00622c18
;   undefined4 DAT_007c5094
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;
; Called Functions:
;   FUN_00408b40
;   FUN_00408bb0
;   FUN_0040c600
;   FUN_0040cd60
;   FUN_00432c40
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb890
        ;   Label: FUN_004eb890
    PUSH ESI                            ; 004eb891
    PUSH EDI                            ; 004eb892
    PUSH EBP                            ; 004eb893
    MOV EBP,ESP                         ; 004eb894
    SUB ESP,0xec                        ; 004eb896
    AND ESP,0xfffffff8                  ; 004eb89c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004eb89f
    PUSH EDX                            ; 004eb8a2
    CALL FUN_00432c40                   ; 004eb8a3
        ;   XREF to: 00432c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00432c40()
    ADD ESP,0x4                         ; 004eb8a8
    TEST EAX,EAX                        ; 004eb8ab
    JNZ 0x004eb93b                      ; 004eb8ad
        ;   XREF to: 004eb93b (CONDITIONAL_JUMP)  ; LAB_004eb93b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb8b3
    MOV ECX,dword ptr [EAX + 0x1ff7c]   ; 004eb8b6
    TEST ECX,ECX                        ; 004eb8bc
    JNZ 0x004eb92d                      ; 004eb8be
        ;   XREF to: 004eb92d (CONDITIONAL_JUMP)  ; LAB_004eb92d
    MOV dword ptr [ESP + 0xe0],ECX      ; 004eb8c0
    MOV dword ptr [ESP + 0xe4],ECX      ; 004eb8c7
    MOV EBX,dword ptr [0x00622c18]      ; 004eb8ce | DAT_00622c18
        ;   Label: LAB_004eb8ce
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004eb8d4
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004eb8db | DAT_01fcf2cc
    JL 0x004eb96b                       ; 004eb8e1
        ;   XREF to: 004eb96b (CONDITIONAL_JUMP)  ; LAB_004eb96b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb8e7
        ;   Label: LAB_004eb8e7
    MOV ECX,dword ptr [EAX + 0x1ff7c]   ; 004eb8ea
    TEST ECX,ECX                        ; 004eb8f0
    JZ 0x004eb93b                       ; 004eb8f2
        ;   XREF to: 004eb93b (CONDITIONAL_JUMP)  ; LAB_004eb93b
    MOV EBX,dword ptr [0x007c5094]      ; 004eb8f4 | DAT_007c5094
    PUSH EBX                            ; 004eb8fa
    PUSH ECX                            ; 004eb8fb
    CALL FUN_0040c600                   ; 004eb8fc
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV EBX,EAX                         ; 004eb901
    ADD ESP,0x8                         ; 004eb903
    TEST EAX,EAX                        ; 004eb906
    JZ 0x004eb92d                       ; 004eb908
        ;   XREF to: 004eb92d (CONDITIONAL_JUMP)  ; LAB_004eb92d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb90a
    MOV dword ptr [EBX + 0x320],EAX     ; 004eb90d
    LEA EAX,[EBX + 0x32c]               ; 004eb913
    PUSH EAX                            ; 004eb919
    MOV ESI,dword ptr [EBX + 0x154]     ; 004eb91a
    PUSH EBX                            ; 004eb920
    CALL dword ptr [ESI + 0x30]         ; 004eb921
    ADD ESP,0x8                         ; 004eb924
    MOV dword ptr [EBX + 0x328],EAX     ; 004eb927
    MOV ESI,0x1                         ; 004eb92d
        ;   Label: LAB_004eb92d
    MOV EAX,ESI                         ; 004eb932
    MOV ESP,EBP                         ; 004eb934
    POP EBP                             ; 004eb936
    POP EDI                             ; 004eb937
    POP ESI                             ; 004eb938
    POP EBX                             ; 004eb939
    RET                                 ; 004eb93a
    XOR ESI,ESI                         ; 004eb93b
        ;   Label: LAB_004eb93b
    MOV EAX,ESI                         ; 004eb93d
    MOV ESP,EBP                         ; 004eb93f
    POP EBP                             ; 004eb941
    POP EDI                             ; 004eb942
    POP ESI                             ; 004eb943
    POP EBX                             ; 004eb944
    RET                                 ; 004eb945
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004eb946
        ;   Label: LAB_004eb946
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004eb94d
    INC EAX                             ; 004eb954
    ADD EDI,0x4                         ; 004eb955
    MOV dword ptr [ESP + 0xe0],EAX      ; 004eb958
    MOV dword ptr [ESP + 0xe4],EDI      ; 004eb95f
    JMP 0x004eb8ce                      ; 004eb966
        ;   XREF to: 004eb8ce (UNCONDITIONAL_JUMP)  ; LAB_004eb8ce
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004eb96b
        ;   Label: LAB_004eb96b
    MOV EAX,[0x007c5094]                ; 004eb972 | DAT_007c5094
    ADD EBX,EDX                         ; 004eb977
    PUSH EAX                            ; 004eb979
    MOV ECX,dword ptr [EBX + 0x14d168]  ; 004eb97a | DAT_01fcf2d0
    PUSH ECX                            ; 004eb980
    CALL FUN_0040c600                   ; 004eb981
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV EBX,EAX                         ; 004eb986
    ADD ESP,0x8                         ; 004eb988
    TEST EAX,EAX                        ; 004eb98b
    JZ 0x004eb946                       ; 004eb98d
        ;   XREF to: 004eb946 (CONDITIONAL_JUMP)  ; LAB_004eb946
    CMP dword ptr [EAX + 0x31c],0x0     ; 004eb98f
    JZ 0x004eb946                       ; 004eb996
        ;   XREF to: 004eb946 (CONDITIONAL_JUMP)  ; LAB_004eb946
    CMP dword ptr [EAX + 0x320],0x0     ; 004eb998
    JNZ 0x004eb946                      ; 004eb99f
        ;   XREF to: 004eb946 (CONDITIONAL_JUMP)  ; LAB_004eb946
    PUSH EBX                            ; 004eb9a1
    MOV EAX,dword ptr [EAX + 0x154]     ; 004eb9a2
    LEA ESI,[ESP + 0x24]                ; 004eb9a8
    LEA EDI,[ESP + 0xc]                 ; 004eb9ac
    CALL dword ptr [EAX + 0x1c]         ; 004eb9b0
    MOV ECX,0x6                         ; 004eb9b3
    LEA ESI,[ESP + 0x24]                ; 004eb9b8
    ADD ESP,0x4                         ; 004eb9bc
    MOVSD.REP ES:EDI,ESI                ; 004eb9bf
    FLD float ptr [ESP + 0x8]           ; 004eb9c1
    FLD float ptr [ESP + 0xc]           ; 004eb9c5
    FLD float ptr [ESP + 0x10]          ; 004eb9c9
    LEA EDI,[ESP + 0xb0]                ; 004eb9cd
    LEA ESI,[ESP + 0x38]                ; 004eb9d4
    FXCH ST2                            ; 004eb9d8
    FADD float ptr [ESP + 0x14]         ; 004eb9da
    FXCH                                ; 004eb9de
    FADD float ptr [ESP + 0x18]         ; 004eb9e0
    FXCH ST2                            ; 004eb9e4
    FADD float ptr [ESP + 0x1c]         ; 004eb9e6
    FXCH                                ; 004eb9ea
    FSTP float ptr [ESP + 0x38]         ; 004eb9ec
    FXCH                                ; 004eb9f0
    FSTP float ptr [ESP + 0x3c]         ; 004eb9f2
    FSTP float ptr [ESP + 0x40]         ; 004eb9f6
    MOVSD ES:EDI,ESI                    ; 004eb9fa
    MOVSD ES:EDI,ESI                    ; 004eb9fb
    MOVSD ES:EDI,ESI                    ; 004eb9fc
    FLD float ptr [ESP + 0xb0]          ; 004eb9fd
    FMUL float ptr [0x005e48c9]         ; 004eba04 | DAT_005e48c9
    FLD float ptr [ESP + 0xb4]          ; 004eba0a
    FMUL float ptr [0x005e48c9]         ; 004eba11 | DAT_005e48c9
    FLD float ptr [ESP + 0xb8]          ; 004eba17
    FMUL float ptr [0x005e48c9]         ; 004eba1e | DAT_005e48c9
    LEA EDI,[ESP + 0xd4]                ; 004eba24
    LEA ESI,[ESP + 0xbc]                ; 004eba2b
    FXCH ST2                            ; 004eba32
    FSTP float ptr [ESP + 0xbc]         ; 004eba34
    FSTP float ptr [ESP + 0xc0]         ; 004eba3b
    FSTP float ptr [ESP + 0xc4]         ; 004eba42
    MOVSD ES:EDI,ESI                    ; 004eba49
    MOVSD ES:EDI,ESI                    ; 004eba4a
    MOVSD ES:EDI,ESI                    ; 004eba4b
    LEA ESI,[ESP + 0xd4]                ; 004eba4c
    PUSH ESI                            ; 004eba53
    PUSH EBX                            ; 004eba54
    LEA ESI,[ESP + 0x70]                ; 004eba55
    LEA EDI,[ESP + 0x58]                ; 004eba59
    CALL FUN_00408b40                   ; 004eba5d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 004eba62
    LEA EAX,[ESP + 0x50]                ; 004eba65
    LEA ESI,[ESP + 0x68]                ; 004eba69
    PUSH EAX                            ; 004eba6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eba6e
    MOVSD ES:EDI,ESI                    ; 004eba71
    MOVSD ES:EDI,ESI                    ; 004eba72
    MOVSD ES:EDI,ESI                    ; 004eba73
    PUSH EAX                            ; 004eba74
    LEA ESI,[ESP + 0xd0]                ; 004eba75
    LEA EDI,[ESP + 0x64]                ; 004eba7c
    CALL FUN_00408bb0                   ; 004eba80
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    ADD ESP,0x8                         ; 004eba85
    LEA ESI,[ESP + 0xc8]                ; 004eba88
    FLD float ptr [ESP + 0x14]          ; 004eba8f
    FLD float ptr [ESP + 0x18]          ; 004eba93
    MOVSD ES:EDI,ESI                    ; 004eba97
    MOVSD ES:EDI,ESI                    ; 004eba98
    MOVSD ES:EDI,ESI                    ; 004eba99
    FLD float ptr [ESP + 0x1c]          ; 004eba9a
    LEA EDI,[ESP + 0x44]                ; 004eba9e
    LEA ESI,[ESP + 0xa4]                ; 004ebaa2
    FXCH ST2                            ; 004ebaa9
    FSUB float ptr [ESP + 0x8]          ; 004ebaab
    FXCH                                ; 004ebaaf
    FSUB float ptr [ESP + 0xc]          ; 004ebab1
    FXCH ST2                            ; 004ebab5
    FSUB float ptr [ESP + 0x10]         ; 004ebab7
    FXCH                                ; 004ebabb
    FSTP float ptr [ESP + 0xa4]         ; 004ebabd
    FXCH                                ; 004ebac4
    FSTP float ptr [ESP + 0xa8]         ; 004ebac6
    FSTP float ptr [ESP + 0xac]         ; 004ebacd
    MOVSD ES:EDI,ESI                    ; 004ebad4
    MOVSD ES:EDI,ESI                    ; 004ebad5
    MOVSD ES:EDI,ESI                    ; 004ebad6
    FLD float ptr [ESP + 0x44]          ; 004ebad7
    FMUL float ptr [0x005e48c9]         ; 004ebadb | DAT_005e48c9
    FLD float ptr [ESP + 0x48]          ; 004ebae1
    FMUL float ptr [0x005e48c9]         ; 004ebae5 | DAT_005e48c9
    FLD float ptr [ESP + 0x4c]          ; 004ebaeb
    FMUL float ptr [0x005e48c9]         ; 004ebaef | DAT_005e48c9
    LEA EDI,[ESP + 0x98]                ; 004ebaf5
    LEA ESI,[ESP + 0x8c]                ; 004ebafc
    FXCH ST2                            ; 004ebb03
    FSTP float ptr [ESP + 0x8c]         ; 004ebb05
    FSTP float ptr [ESP + 0x90]         ; 004ebb0c
    FSTP float ptr [ESP + 0x94]         ; 004ebb13
    MOVSD ES:EDI,ESI                    ; 004ebb1a
    MOVSD ES:EDI,ESI                    ; 004ebb1b
    MOVSD ES:EDI,ESI                    ; 004ebb1c
    FLD float ptr [ESP + 0x98]          ; 004ebb1d
    FMUL ST0                            ; 004ebb24
    FLD float ptr [ESP + 0xa0]          ; 004ebb26
    FMUL ST0                            ; 004ebb2d
    FADDP                               ; 004ebb2f
    FSQRT                               ; 004ebb31
    XOR EDX,EDX                         ; 004ebb33
    FSUBR float ptr [ESP + 0x64]        ; 004ebb35
    MOV dword ptr [ESP + 0x9c],EDX      ; 004ebb39
    FCOMP double ptr [0x005e48cd]       ; 004ebb40 | DAT_005e48cd
    FNSTSW AX                           ; 004ebb46
    SAHF                                ; 004ebb48
    JA 0x004eb946                       ; 004ebb49
        ;   XREF to: 004eb946 (CONDITIONAL_JUMP)  ; LAB_004eb946
    FLD float ptr [ESP + 0x60]          ; 004ebb4f
    FLD1                                ; 004ebb53
    FXCH                                ; 004ebb55
    FSTP double ptr [ESP]               ; 004ebb57
    FCOMP double ptr [ESP]              ; 004ebb5a
    FNSTSW AX                           ; 004ebb5d
    SAHF                                ; 004ebb5f
    JA 0x004eb946                       ; 004ebb60
        ;   XREF to: 004eb946 (CONDITIONAL_JUMP)  ; LAB_004eb946
    FLD double ptr [ESP]                ; 004ebb66
    FCOMP double ptr [0x005e48d5]       ; 004ebb69 | DAT_005e48d5
    FNSTSW AX                           ; 004ebb6f
    SAHF                                ; 004ebb71
    JA 0x004eb946                       ; 004ebb72
        ;   XREF to: 004eb946 (CONDITIONAL_JUMP)  ; LAB_004eb946
    LEA ESI,[ESP + 0x5c]                ; 004ebb78
    PUSH ESI                            ; 004ebb7c
    LEA ESI,[ESP + 0x78]                ; 004ebb7d
    LEA EDI,[ESP + 0x84]                ; 004ebb81
    CALL FUN_005a7520                   ; 004ebb88
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x78]                ; 004ebb8d
    ADD ESP,0x4                         ; 004ebb91
    MOVSD ES:EDI,ESI                    ; 004ebb94
    MOVSD ES:EDI,ESI                    ; 004ebb95
    MOVSD ES:EDI,ESI                    ; 004ebb96
    PUSH dword ptr [ESP + 0x84]         ; 004ebb97
    CALL FUN_0040cd60                   ; 004ebb9e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xec],EAX      ; 004ebba3
    FLD float ptr [ESP + 0xec]          ; 004ebbaa
    FABS                                ; 004ebbb1
    ADD ESP,0x4                         ; 004ebbb3
    FCOMP double ptr [0x005e48dd]       ; 004ebbb6 | DAT_005e48dd
    FNSTSW AX                           ; 004ebbbc
    SAHF                                ; 004ebbbe
    JA 0x004eb946                       ; 004ebbbf
        ;   XREF to: 004eb946 (CONDITIONAL_JUMP)  ; LAB_004eb946
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebbc5
    MOV dword ptr [EAX + 0x1ff7c],EBX   ; 004ebbc8
    JMP 0x004eb8e7                      ; 004ebbce
        ;   XREF to: 004eb8e7 (UNCONDITIONAL_JUMP)  ; LAB_004eb8e7

