; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416970(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[2]:
;   FUN_00415740 at 00415753
;   FUN_004157c0 at 00415d2f
;
; Referenced Globals:
;   undefined4 DAT_005b6cd6
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   FUN_00408b80
;   FUN_00414910
;   FUN_0041ae00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416970
        ;   Label: FUN_00416970
    SUB ESP,0x90                        ; 00416971
    MOV EBX,dword ptr [ESP + 0x98]      ; 00416977
    CMP dword ptr [EBX + 0x174],0x3     ; 0041697e
    JL 0x00416990                       ; 00416985
        ;   XREF to: 00416990 (CONDITIONAL_JUMP)  ; LAB_00416990
    CMP dword ptr [EBX + 0x180],0x1     ; 00416987
    JGE 0x004169f1                      ; 0041698e
        ;   XREF to: 004169f1 (CONDITIONAL_JUMP)  ; LAB_004169f1
    PUSH 0x0                            ; 00416990
        ;   Label: LAB_00416990
    PUSH 0x0                            ; 00416992
    PUSH EBX                            ; 00416994
    MOV dword ptr [EBX + 0x70],0x2      ; 00416995
    CALL FUN_00414910                   ; 0041699c
        ;   XREF to: 00414910 (UNCONDITIONAL_CALL)  ; undefined FUN_00414910()
    LEA EAX,[EBX + 0x168]               ; 004169a1
    ADD ESP,0xc                         ; 004169a7
    MOV EDX,EAX                         ; 004169aa
    CMP EAX,0x2cfd900                   ; 004169ac
    JZ 0x004169cd                       ; 004169b1
        ;   XREF to: 004169cd (CONDITIONAL_JUMP)  ; LAB_004169cd
    MOV ECX,dword ptr [0x02cfd900]      ; 004169b3 | DAT_02cfd900
    MOV dword ptr [EAX],ECX             ; 004169b9
    MOV ECX,dword ptr [0x02cfd904]      ; 004169bb | DAT_02cfd904
    MOV dword ptr [EAX + 0x4],ECX       ; 004169c1
    MOV ECX,dword ptr [0x02cfd908]      ; 004169c4 | DAT_02cfd908
    MOV dword ptr [EAX + 0x8],ECX       ; 004169ca
    ADD EBX,0x15c                       ; 004169cd
        ;   Label: LAB_004169cd
    CMP EBX,EDX                         ; 004169d3
    JNZ 0x004169df                      ; 004169d5
        ;   XREF to: 004169df (CONDITIONAL_JUMP)  ; LAB_004169df
    ADD ESP,0x90                        ; 004169d7
        ;   Label: LAB_004169d7
    POP EBX                             ; 004169dd
    RET                                 ; 004169de
    MOV EAX,dword ptr [EDX]             ; 004169df
        ;   Label: LAB_004169df
    MOV dword ptr [EBX],EAX             ; 004169e1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004169e3
    MOV dword ptr [EBX + 0x4],EAX       ; 004169e6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004169e9
    MOV dword ptr [EBX + 0x8],EAX       ; 004169ec
    JMP 0x004169d7                      ; 004169ef
        ;   XREF to: 004169d7 (UNCONDITIONAL_JUMP)  ; LAB_004169d7
    PUSH EDI                            ; 004169f1
        ;   Label: LAB_004169f1
    PUSH ESI                            ; 004169f2
    PUSH EBX                            ; 004169f3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004169f4
    LEA ESI,[ESP + 0xc]                 ; 004169fa
    LEA EDI,[ESP + 0x24]                ; 004169fe
    CALL dword ptr [EAX + 0x1c]         ; 00416a02
    MOV ECX,0x6                         ; 00416a05
    LEA ESI,[ESP + 0xc]                 ; 00416a0a
    ADD ESP,0x4                         ; 00416a0e
    MOVSD.REP ES:EDI,ESI                ; 00416a11
    FLD float ptr [ESP + 0x20]          ; 00416a13
    FLD float ptr [ESP + 0x24]          ; 00416a17
    FLD float ptr [ESP + 0x28]          ; 00416a1b
    LEA EDI,[ESP + 0x50]                ; 00416a1f
    LEA ESI,[ESP + 0x68]                ; 00416a23
    FXCH ST2                            ; 00416a27
    FADD float ptr [ESP + 0x2c]         ; 00416a29
    FXCH                                ; 00416a2d
    FADD float ptr [ESP + 0x30]         ; 00416a2f
    FXCH ST2                            ; 00416a33
    FADD float ptr [ESP + 0x34]         ; 00416a35
    FXCH                                ; 00416a39
    FSTP float ptr [ESP + 0x68]         ; 00416a3b
    FXCH                                ; 00416a3f
    FSTP float ptr [ESP + 0x6c]         ; 00416a41
    FSTP float ptr [ESP + 0x70]         ; 00416a45
    MOVSD ES:EDI,ESI                    ; 00416a49
    MOVSD ES:EDI,ESI                    ; 00416a4a
    MOVSD ES:EDI,ESI                    ; 00416a4b
    FLD float ptr [0x005b6cd6]          ; 00416a4c | DAT_005b6cd6
    FLD float ptr [ESP + 0x50]          ; 00416a52
    FMUL ST1                            ; 00416a56
    FLD float ptr [ESP + 0x54]          ; 00416a58
    FMUL ST2                            ; 00416a5c
    LEA EAX,[ESP + 0x44]                ; 00416a5e
    FLD float ptr [ESP + 0x58]          ; 00416a62
    FMULP ST3                           ; 00416a66
    PUSH EAX                            ; 00416a68
    LEA EDI,[ESP + 0x48]                ; 00416a69
    LEA ESI,[ESP + 0x90]                ; 00416a6d
    FXCH                                ; 00416a74
    FSTP float ptr [ESP + 0x90]         ; 00416a76
    FSTP float ptr [ESP + 0x94]         ; 00416a7d
    FSTP float ptr [ESP + 0x98]         ; 00416a84
    MOVSD ES:EDI,ESI                    ; 00416a8b
    MOVSD ES:EDI,ESI                    ; 00416a8c
    MOVSD ES:EDI,ESI                    ; 00416a8d
    PUSH EBX                            ; 00416a8e
    LEA ESI,[ESP + 0x40]                ; 00416a8f
    LEA EDI,[ESP + 0x64]                ; 00416a93
    CALL FUN_00408b80                   ; 00416a97
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x40]                ; 00416a9c
    ADD ESP,0x8                         ; 00416aa0
    LEA EAX,[ESP + 0x74]                ; 00416aa3
    FLD float ptr [ESP + 0x2c]          ; 00416aa7
    FLD float ptr [ESP + 0x30]          ; 00416aab
    PUSH 0x40a00000                     ; 00416aaf
    FLD float ptr [ESP + 0x38]          ; 00416ab4
    MOVSD ES:EDI,ESI                    ; 00416ab8
    MOVSD ES:EDI,ESI                    ; 00416ab9
    MOVSD ES:EDI,ESI                    ; 00416aba
    PUSH EAX                            ; 00416abb
    LEA EDI,[ESP + 0x7c]                ; 00416abc
    LEA ESI,[ESP + 0x88]                ; 00416ac0
    FXCH ST2                            ; 00416ac7
    FSUB float ptr [ESP + 0x28]         ; 00416ac9
    FXCH                                ; 00416acd
    FSUB float ptr [ESP + 0x2c]         ; 00416acf
    FXCH ST2                            ; 00416ad3
    FSUB float ptr [ESP + 0x30]         ; 00416ad5
    FXCH                                ; 00416ad9
    FSTP float ptr [ESP + 0x88]         ; 00416adb
    LEA EAX,[EBX + 0x30]                ; 00416ae2
    FXCH                                ; 00416ae5
    FSTP float ptr [ESP + 0x8c]         ; 00416ae7
    PUSH EAX                            ; 00416aee
    LEA EAX,[ESP + 0x68]                ; 00416aef
    ADD EBX,0xcd0                       ; 00416af3
    PUSH EAX                            ; 00416af9
    FSTP float ptr [ESP + 0x98]         ; 00416afa
    PUSH EBX                            ; 00416b01
    MOVSD ES:EDI,ESI                    ; 00416b02
    MOVSD ES:EDI,ESI                    ; 00416b03
    MOVSD ES:EDI,ESI                    ; 00416b04
    CALL FUN_0041ae00                   ; 00416b05
        ;   XREF to: 0041ae00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ae00()
    ADD ESP,0x14                        ; 00416b0a
    POP ESI                             ; 00416b0d
    POP EDI                             ; 00416b0e
    ADD ESP,0x90                        ; 00416b0f
    POP EBX                             ; 00416b15
    RET                                 ; 00416b16

