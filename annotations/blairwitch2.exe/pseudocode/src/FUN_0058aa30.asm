; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058aa30(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   FUN_00489670 at 0048bf80
;   FUN_004e38d0 at 004e3a20
;   FUN_0058a660 at 0058a93d
;
; Referenced Globals:
;   undefined4 s_BnoLightningFlash_005ee595+1
;   TerminatedCString s_light_wav_005ee5a7
;   undefined4 DAT_005ee5b2
;   undefined4 DAT_005ee5ba
;   undefined4 DAT_005ee5c2
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   undefined4 DAT_0061c068
;   undefined4 DAT_01fc8a20
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_0040cf60
;   FUN_00441e80
;   FUN_00449280
;   FUN_00449530
;   FUN_00476d20
;   FUN_00476d40
;   FUN_0048e340
;   FUN_0049e6e0
;   FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058aa30
        ;   Label: FUN_0058aa30
    PUSH ESI                            ; 0058aa31
    PUSH EDI                            ; 0058aa32
    PUSH EBP                            ; 0058aa33
    MOV EBP,ESP                         ; 0058aa34
    SUB ESP,0xac                        ; 0058aa36
    AND ESP,0xfffffff8                  ; 0058aa3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058aa3f
    PUSH 0x41a00000                     ; 0058aa42
    PUSH 0x41200000                     ; 0058aa47
    CALL FUN_0040cf60                   ; 0058aa4c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0058aa51
    FLD float ptr [ESP + 0xb0]          ; 0058aa58
    ADD ESP,0x8                         ; 0058aa5f
    PUSH dword ptr [EBX + 0x34]         ; 0058aa62
    PUSH 0x40000000                     ; 0058aa65
    FSTP float ptr [EBX + 0x20]         ; 0058aa6a
    CALL FUN_0040cf60                   ; 0058aa6d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0058aa72
    LEA ESI,[ESP + 0x94]                ; 0058aa79
    FLD float ptr [ESP + 0xb0]          ; 0058aa80
    ADD ESP,0x8                         ; 0058aa87
    MOV dword ptr [EBX + 0x24],0x1      ; 0058aa8a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058aa91
    LEA EDI,[ESP + 0x5c]                ; 0058aa94
    MOV dword ptr [EBX + 0x28],EAX      ; 0058aa98
    PUSH 0x1fc9c68                      ; 0058aa9b | DAT_01fc9c68
    FSTP float ptr [EBX + 0x2c]         ; 0058aaa0
    CALL FUN_00476d20                   ; 0058aaa3
        ;   XREF to: 00476d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00476d20()
    LEA ESI,[ESP + 0x90]                ; 0058aaa8
    ADD ESP,0x4                         ; 0058aaaf
    MOVSD ES:EDI,ESI                    ; 0058aab2
    MOVSD ES:EDI,ESI                    ; 0058aab3
    MOVSD ES:EDI,ESI                    ; 0058aab4
    PUSH 0x1fc9c68                      ; 0058aab5 | DAT_01fc9c68
    LEA ESI,[ESP + 0x54]                ; 0058aaba
    LEA EDI,[ESP + 0x3c]                ; 0058aabe
    CALL FUN_00476d40                   ; 0058aac2
        ;   XREF to: 00476d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00476d40()
    LEA ESI,[ESP + 0x54]                ; 0058aac7
    ADD ESP,0x4                         ; 0058aacb
    MOVSD ES:EDI,ESI                    ; 0058aace
    MOVSD ES:EDI,ESI                    ; 0058aacf
    MOVSD ES:EDI,ESI                    ; 0058aad0
    FLD float ptr [ESP + 0x38]          ; 0058aad1
    FSUB float ptr [ESP + 0x5c]         ; 0058aad5
    FMUL double ptr [0x005ee5b2]        ; 0058aad9 | DAT_005ee5b2
    XOR EDX,EDX                         ; 0058aadf
    FLDZ                                ; 0058aae1
    MOV dword ptr [ESP + 0xa4],EDX      ; 0058aae3
    FXCH                                ; 0058aaea
    FSTP float ptr [ESP + 0x9c]         ; 0058aaec
    FCOMP float ptr [ESP + 0x9c]        ; 0058aaf3
    FNSTSW AX                           ; 0058aafa
    SAHF                                ; 0058aafc
    JC 0x0058ac77                       ; 0058aafd
        ;   XREF to: 0058ac77 (CONDITIONAL_JUMP)  ; LAB_0058ac77
    FLD float ptr [ESP + 0x3c]          ; 0058ab03
        ;   Label: LAB_0058ab03
    FSUB float ptr [ESP + 0x60]         ; 0058ab07
    FST float ptr [ESP + 0x98]          ; 0058ab0b
    FCOMP float ptr [ESP + 0xa4]        ; 0058ab12
    FNSTSW AX                           ; 0058ab19
    SAHF                                ; 0058ab1b
    JBE 0x0058ab2c                      ; 0058ab1c
        ;   XREF to: 0058ab2c (CONDITIONAL_JUMP)  ; LAB_0058ab2c
    MOV EAX,dword ptr [ESP + 0x98]      ; 0058ab1e
    MOV dword ptr [ESP + 0xa4],EAX      ; 0058ab25
    FLD float ptr [ESP + 0x40]          ; 0058ab2c
        ;   Label: LAB_0058ab2c
    FSUB float ptr [ESP + 0x64]         ; 0058ab30
    FMUL double ptr [0x005ee5b2]        ; 0058ab34 | DAT_005ee5b2
    FST float ptr [ESP + 0xa0]          ; 0058ab3a
    FCOMP float ptr [ESP + 0xa4]        ; 0058ab41
    FNSTSW AX                           ; 0058ab48
    SAHF                                ; 0058ab4a
    JBE 0x0058ab5b                      ; 0058ab4b
        ;   XREF to: 0058ab5b (CONDITIONAL_JUMP)  ; LAB_0058ab5b
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0058ab4d
    MOV dword ptr [ESP + 0xa4],EAX      ; 0058ab54
    LEA EAX,[EBX + 0x14]                ; 0058ab5b
        ;   Label: LAB_0058ab5b
    PUSH EAX                            ; 0058ab5e
    LEA EAX,[ESP + 0x8]                 ; 0058ab5f
    PUSH EAX                            ; 0058ab63
    CALL FUN_00449280                   ; 0058ab64
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0058ab69
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0058ab6c
    LEA ESI,[ESP + 0x68]                ; 0058ab73
    MOV dword ptr [ESP + 0x4c],EAX      ; 0058ab77
    LEA EAX,[ESP + 0x44]                ; 0058ab7b
    LEA EDI,[ESP + 0x80]                ; 0058ab7f
    PUSH EAX                            ; 0058ab86
    LEA EAX,[ESP + 0x8]                 ; 0058ab87
    XOR ECX,ECX                         ; 0058ab8b
    PUSH EAX                            ; 0058ab8d
    MOV dword ptr [ESP + 0x4c],ECX      ; 0058ab8e
    MOV dword ptr [ESP + 0x50],ECX      ; 0058ab92
    CALL FUN_00449530                   ; 0058ab96
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x70]                ; 0058ab9b
    ADD ESP,0x8                         ; 0058ab9f
    MOVSD ES:EDI,ESI                    ; 0058aba2
    MOVSD ES:EDI,ESI                    ; 0058aba3
    MOVSD ES:EDI,ESI                    ; 0058aba4
    LEA EAX,[EBX + 0x8]                 ; 0058aba5
    FLD float ptr [ESP + 0x80]          ; 0058aba8
    FLD float ptr [ESP + 0x84]          ; 0058abaf
    FLD float ptr [ESP + 0x88]          ; 0058abb6
    LEA EDI,[ESP + 0x2c]                ; 0058abbd
    LEA ESI,[ESP + 0x74]                ; 0058abc1
    FXCH ST2                            ; 0058abc5
    FADD float ptr [EAX]                ; 0058abc7
    FXCH                                ; 0058abc9
    FADD float ptr [EAX + 0x4]          ; 0058abcb
    FXCH ST2                            ; 0058abce
    FADD float ptr [EAX + 0x8]          ; 0058abd0
    FXCH                                ; 0058abd3
    FSTP float ptr [ESP + 0x74]         ; 0058abd5
    FXCH                                ; 0058abd9
    FSTP float ptr [ESP + 0x78]         ; 0058abdb
    FSTP float ptr [ESP + 0x7c]         ; 0058abdf
    MOVSD ES:EDI,ESI                    ; 0058abe3
    MOVSD ES:EDI,ESI                    ; 0058abe4
    MOVSD ES:EDI,ESI                    ; 0058abe5
    LEA EAX,[ESP + 0x2c]                ; 0058abe6
    LEA ESI,[ESP + 0x44]                ; 0058abea
    CMP ESI,EAX                         ; 0058abee
    JZ 0x0058ac0a                       ; 0058abf0
        ;   XREF to: 0058ac0a (CONDITIONAL_JUMP)  ; LAB_0058ac0a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058abf2
    MOV dword ptr [ESP + 0x44],EAX      ; 0058abf6
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058abfa
    MOV dword ptr [ESP + 0x48],EAX      ; 0058abfe
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058ac02
    MOV dword ptr [ESP + 0x4c],EAX      ; 0058ac06
    CMP dword ptr [EBP + 0x1c],0x0      ; 0058ac0a
        ;   Label: LAB_0058ac0a
    JZ 0x0058ac2e                       ; 0058ac0e
        ;   XREF to: 0058ac2e (CONDITIONAL_JUMP)  ; LAB_0058ac2e
    PUSH 0x0                            ; 0058ac10
    PUSH 0x0                            ; 0058ac12
    LEA EAX,[ESP + 0x4c]                ; 0058ac14
    PUSH dword ptr [ESP + 0xac]         ; 0058ac18
    PUSH EAX                            ; 0058ac1f
    MOV EAX,[0x00614d30]                ; 0058ac20 | DAT_00614d30
    PUSH EAX                            ; 0058ac25
    CALL FUN_0049e6e0                   ; 0058ac26
        ;   XREF to: 0049e6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e6e0()
    ADD ESP,0x14                        ; 0058ac2b
    MOV EAX,[0x01fc8a20]                ; 0058ac2e | DAT_01fc8a20
        ;   Label: LAB_0058ac2e
    MOV dword ptr [ESP + 0xa8],EAX      ; 0058ac33
    FILD dword ptr [ESP + 0xa8]         ; 0058ac3a
    FMUL double ptr [0x005ee5ba]        ; 0058ac41 | DAT_005ee5ba
    PUSH 0x5ee596                       ; 0058ac47 | s_BnoLightningFlash_005ee595+1
    MOV EDX,dword ptr [0x006141f0]      ; 0058ac4c | DAT_006141f0
    FSTP float ptr [ESP + 0x4]          ; 0058ac52
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058ac56
    PUSH EDX                            ; 0058ac5a
    MOV dword ptr [EBX + 0x30],EAX      ; 0058ac5b
    CALL FUN_0048e340                   ; 0058ac5e
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0058ac63
    TEST EAX,EAX                        ; 0058ac66
    JZ 0x0058ac8a                       ; 0058ac68
        ;   XREF to: 0058ac8a (CONDITIONAL_JUMP)  ; LAB_0058ac8a
    CMP dword ptr [EBP + 0x1c],0x0      ; 0058ac6a
    JNZ 0x0058acc3                      ; 0058ac6e
        ;   XREF to: 0058acc3 (CONDITIONAL_JUMP)  ; LAB_0058acc3
    MOV ESP,EBP                         ; 0058ac70
    POP EBP                             ; 0058ac72
    POP EDI                             ; 0058ac73
    POP ESI                             ; 0058ac74
    POP EBX                             ; 0058ac75
    RET                                 ; 0058ac76
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058ac77
        ;   Label: LAB_0058ac77
    MOV dword ptr [ESP + 0xa4],EAX      ; 0058ac7e
    JMP 0x0058ab03                      ; 0058ac85
        ;   XREF to: 0058ab03 (UNCONDITIONAL_JUMP)  ; LAB_0058ab03
    FLD float ptr [ESP]                 ; 0058ac8a
        ;   Label: LAB_0058ac8a
    FADD float ptr [0x005ee5c2]         ; 0058ac8d | DAT_005ee5c2
    FST float ptr [ESP]                 ; 0058ac93
    FLD1                                ; 0058ac96
    FCOMPP                              ; 0058ac98
    FNSTSW AX                           ; 0058ac9a
    SAHF                                ; 0058ac9c
    JNC 0x0058aca6                      ; 0058ac9d
        ;   XREF to: 0058aca6 (CONDITIONAL_JUMP)  ; LAB_0058aca6
    MOV dword ptr [ESP],0x3f800000      ; 0058ac9f
    PUSH dword ptr [ESP]                ; 0058aca6
        ;   Label: LAB_0058aca6
    PUSH 0x1fc7838                      ; 0058aca9
    CALL FUN_00441e80                   ; 0058acae
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00441e80()
    ADD ESP,0x8                         ; 0058acb3
    CMP dword ptr [EBP + 0x1c],0x0      ; 0058acb6
    JNZ 0x0058acc3                      ; 0058acba
        ;   XREF to: 0058acc3 (CONDITIONAL_JUMP)  ; LAB_0058acc3
    MOV ESP,EBP                         ; 0058acbc
    POP EBP                             ; 0058acbe
    POP EDI                             ; 0058acbf
    POP ESI                             ; 0058acc0
    POP EBX                             ; 0058acc1
    RET                                 ; 0058acc2
    LEA EAX,[ESP + 0x44]                ; 0058acc3
        ;   Label: LAB_0058acc3
    PUSH EAX                            ; 0058acc7
    PUSH 0x5ee5a7                       ; 0058acc8 | = "light?.wav"
    PUSH EBX                            ; 0058accd
    MOV EDI,dword ptr [0x0061c068]      ; 0058acce | DAT_0061c068
    PUSH EDI                            ; 0058acd4
    CALL FUN_0055ae50                   ; 0058acd5
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 0058acda
    MOV ESP,EBP                         ; 0058acdd
    POP EBP                             ; 0058acdf
    POP EDI                             ; 0058ace0
    POP ESI                             ; 0058ace1
    POP EBX                             ; 0058ace2
    RET                                 ; 0058ace3

