; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049eb30(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc91f
;   undefined4 DAT_005dc923
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_00483e60
;   FUN_004b60e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049eb30
        ;   Label: FUN_0049eb30
    PUSH ESI                            ; 0049eb31
    PUSH EDI                            ; 0049eb32
    PUSH EBP                            ; 0049eb33
    MOV EBP,ESP                         ; 0049eb34
    SUB ESP,0xb0                        ; 0049eb36
    AND ESP,0xfffffff8                  ; 0049eb3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049eb3f
    MOV EDX,dword ptr [0x00612560]      ; 0049eb42 | DAT_00612560
    PUSH EDX                            ; 0049eb48 | DAT_01bc120c
    CALL FUN_00483e60                   ; 0049eb49
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0049eb4e
    TEST EAX,EAX                        ; 0049eb51
    JZ 0x0049eb5c                       ; 0049eb53
        ;   XREF to: 0049eb5c (CONDITIONAL_JUMP)  ; LAB_0049eb5c
    MOV ESP,EBP                         ; 0049eb55
    POP EBP                             ; 0049eb57
    POP EDI                             ; 0049eb58
    POP ESI                             ; 0049eb59
    POP EBX                             ; 0049eb5a
    RET                                 ; 0049eb5b
    PUSH EBX                            ; 0049eb5c
        ;   Label: LAB_0049eb5c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049eb5d
    LEA ESI,[ESP + 0x88]                ; 0049eb63
    LEA EDI,[ESP + 0x28]                ; 0049eb6a
    CALL dword ptr [EAX + 0xe0]         ; 0049eb6e
    ADD ESP,0x4                         ; 0049eb74
    LEA EAX,[ESP + 0x24]                ; 0049eb77
    LEA ESI,[ESP + 0x84]                ; 0049eb7b
    PUSH EAX                            ; 0049eb82
    MOVSD ES:EDI,ESI                    ; 0049eb83
    MOVSD ES:EDI,ESI                    ; 0049eb84
    MOVSD ES:EDI,ESI                    ; 0049eb85
    PUSH EBX                            ; 0049eb86
    LEA ESI,[ESP + 0x14]                ; 0049eb87
    LEA EDI,[ESP + 0x8]                 ; 0049eb8b
    CALL FUN_00408b40                   ; 0049eb8f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 0049eb94
    ADD ESP,0x8                         ; 0049eb98
    MOVSD ES:EDI,ESI                    ; 0049eb9b
    MOVSD ES:EDI,ESI                    ; 0049eb9c
    MOVSD ES:EDI,ESI                    ; 0049eb9d
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 0049eb9e
    MOV dword ptr [ESP + 0x38],EAX      ; 0049eba4
    LEA EAX,[ESP + 0x30]                ; 0049eba8
    XOR ECX,ECX                         ; 0049ebac
    PUSH EAX                            ; 0049ebae
    LEA ESI,[ESP + 0xa0]                ; 0049ebaf
    LEA EDI,[ESP + 0x58]                ; 0049ebb6
    PUSH EBX                            ; 0049ebba
    MOV dword ptr [ESP + 0x38],ECX      ; 0049ebbb
    MOV dword ptr [ESP + 0x3c],ECX      ; 0049ebbf
    CALL FUN_00408ac0                   ; 0049ebc3
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    ADD ESP,0x8                         ; 0049ebc8
    LEA ESI,[ESP + 0x9c]                ; 0049ebcb
    FLD float ptr [ESP]                 ; 0049ebd2
    FLD float ptr [ESP + 0x4]           ; 0049ebd5
    MOVSD ES:EDI,ESI                    ; 0049ebd9
    MOVSD ES:EDI,ESI                    ; 0049ebda
    MOVSD ES:EDI,ESI                    ; 0049ebdb
    FLD float ptr [ESP + 0x8]           ; 0049ebdc
    FLD float ptr [ESP + 0x54]          ; 0049ebe0
    FLD float ptr [ESP + 0x58]          ; 0049ebe4
    FLD float ptr [ESP + 0x5c]          ; 0049ebe8
    LEA EDI,[ESP + 0x60]                ; 0049ebec
    LEA ESI,[ESP + 0x90]                ; 0049ebf0
    FXCH ST2                            ; 0049ebf7
    FCHS                                ; 0049ebf9
    FXCH                                ; 0049ebfb
    FCHS                                ; 0049ebfd
    FXCH ST2                            ; 0049ebff
    FCHS                                ; 0049ec01
    FXCH ST5                            ; 0049ec03
    FADD float ptr [ESP + 0x54]         ; 0049ec05
    FXCH ST4                            ; 0049ec09
    FADD float ptr [ESP + 0x58]         ; 0049ec0b
    FXCH ST3                            ; 0049ec0f
    FADD float ptr [ESP + 0x5c]         ; 0049ec11
    FXCH                                ; 0049ec15
    FSTP float ptr [ESP + 0x78]         ; 0049ec17
    FXCH ST3                            ; 0049ec1b
    FSTP float ptr [ESP + 0x90]         ; 0049ec1d
    FXCH                                ; 0049ec24
    FSTP float ptr [ESP + 0x94]         ; 0049ec26
    FXCH                                ; 0049ec2d
    FSTP float ptr [ESP + 0x98]         ; 0049ec2f
    MOVSD ES:EDI,ESI                    ; 0049ec36
    MOVSD ES:EDI,ESI                    ; 0049ec37
    MOVSD ES:EDI,ESI                    ; 0049ec38
    FSTP float ptr [ESP + 0x7c]         ; 0049ec39
    LEA EDI,[ESP + 0x3c]                ; 0049ec3d
    LEA ESI,[ESP + 0x78]                ; 0049ec41
    FSTP float ptr [ESP + 0x80]         ; 0049ec45
    MOVSD ES:EDI,ESI                    ; 0049ec4c
    MOVSD ES:EDI,ESI                    ; 0049ec4d
    MOVSD ES:EDI,ESI                    ; 0049ec4e
    LEA EAX,[ESP + 0x48]                ; 0049ec4f
    LEA ESI,[ESP + 0x3c]                ; 0049ec53
    CMP EAX,ESI                         ; 0049ec57
    JZ 0x0049ec73                       ; 0049ec59
        ;   XREF to: 0049ec73 (CONDITIONAL_JUMP)  ; LAB_0049ec73
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049ec5b
    MOV dword ptr [ESP + 0x48],EAX      ; 0049ec5f
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049ec63
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049ec67
    MOV EAX,dword ptr [ESP + 0x44]      ; 0049ec6b
    MOV dword ptr [ESP + 0x50],EAX      ; 0049ec6f
    FLD float ptr [ESP + 0x4c]          ; 0049ec73
        ;   Label: LAB_0049ec73
    FMUL ST0                            ; 0049ec77
    FLD float ptr [ESP + 0x48]          ; 0049ec79
    FMUL ST0                            ; 0049ec7d
    FADDP                               ; 0049ec7f
    FLD float ptr [ESP + 0x50]          ; 0049ec81
    FMUL ST0                            ; 0049ec85
    FADDP                               ; 0049ec87
    FSQRT                               ; 0049ec89
    FLDZ                                ; 0049ec8b
    FXCH                                ; 0049ec8d
    FSTP float ptr [ESP + 0xa8]         ; 0049ec8f
    FCOMP float ptr [ESP + 0xa8]        ; 0049ec96
    FNSTSW AX                           ; 0049ec9d
    SAHF                                ; 0049ec9f
    JNC 0x0049ed79                      ; 0049eca0
        ;   XREF to: 0049ed79 (CONDITIONAL_JUMP)  ; LAB_0049ed79
    FLD1                                ; 0049eca6
    FLD float ptr [ESP + 0x48]          ; 0049eca8
    FXCH                                ; 0049ecac
    FDIV float ptr [ESP + 0xa8]         ; 0049ecae
    FXCH                                ; 0049ecb5
    FMUL ST1                            ; 0049ecb7
    FLD float ptr [ESP + 0x4c]          ; 0049ecb9
    FMUL ST2                            ; 0049ecbd
    FLD float ptr [ESP + 0x50]          ; 0049ecbf
    FMULP ST3                           ; 0049ecc3
    FXCH                                ; 0049ecc5
    FSTP float ptr [ESP + 0x48]         ; 0049ecc7
    FSTP float ptr [ESP + 0x4c]         ; 0049eccb
    FSTP float ptr [ESP + 0x50]         ; 0049eccf
    FLD float ptr [EBX + 0x578]         ; 0049ecd3
        ;   Label: LAB_0049ecd3
    FMUL float ptr [0x005dc91f]         ; 0049ecd9 | DAT_005dc91f
    FMUL float ptr [0x005dc923]         ; 0049ecdf | DAT_005dc923
    SUB ESP,0x4                         ; 0049ece5
    FSTP float ptr [ESP]                ; 0049ece8
    PUSH 0x0                            ; 0049eceb
    PUSH 0xff                           ; 0049eced
    PUSH 0x0                            ; 0049ecf2
    LEA EAX,[ESP + 0x70]                ; 0049ecf4
    PUSH 0x3f800000                     ; 0049ecf8
    PUSH EAX                            ; 0049ecfd
    LEA EAX,[ESP + 0x18]                ; 0049ecfe
    PUSH EAX                            ; 0049ed02
    MOV ECX,dword ptr [0x0061c010]      ; 0049ed03 | DAT_0061c010
    PUSH ECX                            ; 0049ed09
    LEA EDI,[ESP + 0x38]                ; 0049ed0a
    CALL FUN_004b60e0                   ; 0049ed0e
        ;   XREF to: 004b60e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b60e0()
    ADD ESP,0x20                        ; 0049ed13
    MOV dword ptr [EBX + 0x57c],0x1     ; 0049ed16
    LEA ESI,[ESP + 0x6c]                ; 0049ed20
    FLD float ptr [ESP + 0x60]          ; 0049ed24
    FLD float ptr [ESP + 0x64]          ; 0049ed28
    FLD float ptr [ESP + 0x68]          ; 0049ed2c
    FXCH ST2                            ; 0049ed30
    FSUB float ptr [ESP]                ; 0049ed32
    FXCH                                ; 0049ed35
    FSUB float ptr [ESP + 0x4]          ; 0049ed37
    FXCH ST2                            ; 0049ed3b
    FSUB float ptr [ESP + 0x8]          ; 0049ed3d
    FXCH                                ; 0049ed41
    FSTP float ptr [ESP + 0x6c]         ; 0049ed43
    FXCH                                ; 0049ed47
    FSTP float ptr [ESP + 0x70]         ; 0049ed49
    FSTP float ptr [ESP + 0x74]         ; 0049ed4d
    MOVSD ES:EDI,ESI                    ; 0049ed51
    MOVSD ES:EDI,ESI                    ; 0049ed52
    MOVSD ES:EDI,ESI                    ; 0049ed53
    FLD float ptr [ESP + 0x1c]          ; 0049ed54
    FMUL ST0                            ; 0049ed58
    FLD float ptr [ESP + 0x18]          ; 0049ed5a
    FMUL ST0                            ; 0049ed5e
    FADDP                               ; 0049ed60
    FLD float ptr [ESP + 0x20]          ; 0049ed62
    FMUL ST0                            ; 0049ed66
    FADDP                               ; 0049ed68
    FSQRT                               ; 0049ed6a
    FSTP float ptr [EBX + 0x580]        ; 0049ed6c
    MOV ESP,EBP                         ; 0049ed72
    POP EBP                             ; 0049ed74
    POP EDI                             ; 0049ed75
    POP ESI                             ; 0049ed76
    POP EBX                             ; 0049ed77
    RET                                 ; 0049ed78
    XOR EDI,EDI                         ; 0049ed79
        ;   Label: LAB_0049ed79
    MOV dword ptr [ESP + 0x4c],EDI      ; 0049ed7b
    MOV dword ptr [ESP + 0x48],EDI      ; 0049ed7f
    MOV dword ptr [ESP + 0x50],EDI      ; 0049ed83
    JMP 0x0049ecd3                      ; 0049ed87
        ;   XREF to: 0049ecd3 (UNCONDITIONAL_JUMP)  ; LAB_0049ecd3

