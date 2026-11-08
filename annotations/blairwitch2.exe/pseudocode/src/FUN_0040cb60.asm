; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040cb60(int param_1,float *param_2,int param_3,float param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_005caee6
;   TerminatedCString s_FeetAreWet_005caeec
;   TerminatedCString s_CShadow_005caef7
;   TerminatedCString s_footstep_s0_005caeff
;   undefined4 DAT_005caf0e
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   undefined4 DAT_006167e0
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0061c068
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fc783c
;   undefined4 DAT_01fc7840
;   undefined4 DAT_01fc7844
;
; Called Functions:
;   FUN_0040c840
;   FUN_0040cf60
;   FUN_0040cfc0
;   FUN_004894f0
;   FUN_0049d600
;   FUN_004c9d00
;   FUN_004c9d80
;   FUN_004ca7c0
;   FUN_00538180
;   FUN_0055ae50
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cb60
        ;   Label: FUN_0040cb60
    PUSH ESI                            ; 0040cb61
    PUSH EDI                            ; 0040cb62
    PUSH EBP                            ; 0040cb63
    SUB ESP,0xc0                        ; 0040cb64
    MOV EBP,dword ptr [ESP + 0xd4]      ; 0040cb6a
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0040cb71
    LEA EDI,[ESP + 0x7c]                ; 0040cb78
    MOV ESI,0x1fc783c                   ; 0040cb7c
    MOVSD ES:EDI,ESI                    ; 0040cb81 | DAT_01fc783c
    MOVSD ES:EDI,ESI                    ; 0040cb82 | DAT_01fc7840
    MOVSD ES:EDI,ESI                    ; 0040cb83 | DAT_01fc7844
    LEA EDI,[ESP + 0x70]                ; 0040cb84
    LEA ESI,[ESP + 0x7c]                ; 0040cb88
    MOVSD ES:EDI,ESI                    ; 0040cb8c
    MOVSD ES:EDI,ESI                    ; 0040cb8d
    MOVSD ES:EDI,ESI                    ; 0040cb8e
    FLD float ptr [EBX]                 ; 0040cb8f
    FSUB float ptr [ESP + 0x70]         ; 0040cb91
    FMUL ST0                            ; 0040cb95
    FLD float ptr [EBX + 0x4]           ; 0040cb97
    FSUB float ptr [ESP + 0x74]         ; 0040cb9a
    FMUL ST0                            ; 0040cb9e
    FLD float ptr [EBX + 0x8]           ; 0040cba0
    FXCH                                ; 0040cba3
    FADDP ST2,ST0                       ; 0040cba5
    FSUB float ptr [ESP + 0x78]         ; 0040cba7
    FMUL ST0                            ; 0040cbab
    FADDP                               ; 0040cbad
    FCOMP float ptr [0x005caf0e]        ; 0040cbaf | DAT_005caf0e
    FNSTSW AX                           ; 0040cbb5
    SAHF                                ; 0040cbb7
    JBE 0x0040cbc7                      ; 0040cbb8
        ;   XREF to: 0040cbc7 (CONDITIONAL_JUMP)  ; LAB_0040cbc7
    XOR EAX,EAX                         ; 0040cbba
    ADD ESP,0xc0                        ; 0040cbbc
    POP EBP                             ; 0040cbc2
    POP EDI                             ; 0040cbc3
    POP ESI                             ; 0040cbc4
    POP EBX                             ; 0040cbc5
    RET                                 ; 0040cbc6
    PUSH EBX                            ; 0040cbc7
        ;   Label: LAB_0040cbc7
    MOV EDX,dword ptr [0x0061b5a8]      ; 0040cbc8 | DAT_0061b5a8
    PUSH EDX                            ; 0040cbce | DAT_01e661b8
    CALL FUN_00538180                   ; 0040cbcf
        ;   XREF to: 00538180 (UNCONDITIONAL_CALL)  ; undefined FUN_00538180()
    ADD ESP,0x8                         ; 0040cbd4
    TEST EAX,EAX                        ; 0040cbd7
    JZ 0x0040cc0d                       ; 0040cbd9
        ;   XREF to: 0040cc0d (CONDITIONAL_JUMP)  ; LAB_0040cc0d
    PUSH 0x5caee6                       ; 0040cbdb | = "CHero"
    MOV ECX,0x6                         ; 0040cbe0
    PUSH EBP                            ; 0040cbe5
    MOV dword ptr [ESP + 0xe4],ECX      ; 0040cbe6
    CALL FUN_0040c840                   ; 0040cbed
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0040cbf2
    TEST EAX,EAX                        ; 0040cbf5
    JZ 0x0040cc0d                       ; 0040cbf7
        ;   XREF to: 0040cc0d (CONDITIONAL_JUMP)  ; LAB_0040cc0d
    PUSH 0x5caeec                       ; 0040cbf9 | = "FeetAreWet"
    MOV ESI,dword ptr [0x006141f0]      ; 0040cbfe | DAT_006141f0
    PUSH ESI                            ; 0040cc04
    CALL FUN_004894f0                   ; 0040cc05
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 0040cc0a
    LEA EAX,[EBP + 0x118]               ; 0040cc0d
        ;   Label: LAB_0040cc0d
    PUSH EAX                            ; 0040cc13
    PUSH EBX                            ; 0040cc14
    MOV EDI,dword ptr [0x006167e0]      ; 0040cc15 | DAT_006167e0
    PUSH EDI                            ; 0040cc1b
    CALL FUN_004c9d80                   ; 0040cc1c
        ;   XREF to: 004c9d80 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9d80()
    ADD ESP,0xc                         ; 0040cc21
    TEST EAX,EAX                        ; 0040cc24
    JZ 0x0040cde6                       ; 0040cc26
        ;   XREF to: 0040cde6 (CONDITIONAL_JUMP)  ; LAB_0040cde6
    CMP dword ptr [EBP + 0x2ac],0x0     ; 0040cc2c
    JZ 0x0040cde6                       ; 0040cc33
        ;   XREF to: 0040cde6 (CONDITIONAL_JUMP)  ; LAB_0040cde6
    MOV dword ptr [EBP + 0x114],0xffff  ; 0040cc39
    MOV EDI,dword ptr [EBP + 0x118]     ; 0040cc43
        ;   Label: LAB_0040cc43
    PUSH EDI                            ; 0040cc49
    MOV EAX,dword ptr [EBP + 0x114]     ; 0040cc4a
    PUSH EAX                            ; 0040cc50
    PUSH 0xb                            ; 0040cc51
    LEA EAX,[EBP + 0x30]                ; 0040cc53
    PUSH EAX                            ; 0040cc56
    PUSH EBX                            ; 0040cc57
    MOV EDX,dword ptr [0x006167e0]      ; 0040cc58 | DAT_006167e0
    PUSH EDX                            ; 0040cc5e
    CALL FUN_004c9d00                   ; 0040cc5f
        ;   XREF to: 004c9d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9d00()
    MOV ECX,dword ptr [EBP + 0x114]     ; 0040cc64
    SUB ECX,0x2000                      ; 0040cc6a
    ADD ESP,0x18                        ; 0040cc70
    MOV dword ptr [EBP + 0x114],ECX     ; 0040cc73
    TEST ECX,ECX                        ; 0040cc79
    JL 0x0040ce24                       ; 0040cc7b
        ;   XREF to: 0040ce24 (CONDITIONAL_JUMP)  ; LAB_0040ce24
    CMP dword ptr [ESP + 0xdc],0xe      ; 0040cc81
        ;   Label: LAB_0040cc81
    JNZ 0x0040cd95                      ; 0040cc89
        ;   XREF to: 0040cd95 (CONDITIONAL_JUMP)  ; LAB_0040cd95
    PUSH 0x5caef7                       ; 0040cc8f | = "CShadow"
    PUSH EBP                            ; 0040cc94
    CALL FUN_0040c840                   ; 0040cc95
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0040cc9a
    TEST EAX,EAX                        ; 0040cc9d
    JZ 0x0040ce33                       ; 0040cc9f
        ;   XREF to: 0040ce33 (CONDITIONAL_JUMP)  ; LAB_0040ce33
    PUSH 0x9                            ; 0040cca5
    PUSH 0x3                            ; 0040cca7
    CALL FUN_0040cfc0                   ; 0040cca9
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
        ;   Label: LAB_0040cca9
    ADD ESP,0x8                         ; 0040ccae
    MOV dword ptr [EBP + 0x11c],EAX     ; 0040ccb1
    MOV EAX,dword ptr [EBP + 0x11c]     ; 0040ccb7
    XOR ESI,ESI                         ; 0040ccbd
    TEST EAX,EAX                        ; 0040ccbf
    JLE 0x0040cd95                      ; 0040ccc1
        ;   XREF to: 0040cd95 (CONDITIONAL_JUMP)  ; LAB_0040cd95
    PUSH 0x3fc90fdb                     ; 0040ccc7
        ;   Label: LAB_0040ccc7
    PUSH 0x3f490fdb                     ; 0040cccc
    CALL FUN_0040cf60                   ; 0040ccd1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc4],EAX      ; 0040ccd6
    FLD float ptr [ESP + 0xc4]          ; 0040ccdd
    ADD ESP,0x8                         ; 0040cce4
    PUSH 0x40c90fdb                     ; 0040cce7
    PUSH 0x0                            ; 0040ccec
    FSTP float ptr [ESP + 0xc0]         ; 0040ccee
    CALL FUN_0040cf60                   ; 0040ccf5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc4],EAX      ; 0040ccfa
    FLD float ptr [ESP + 0xc4]          ; 0040cd01
    ADD ESP,0x8                         ; 0040cd08
    FLD float ptr [ESP + 0xb8]          ; 0040cd0b
    FCOS                                ; 0040cd12
    FLD ST1                             ; 0040cd14
    FCOS                                ; 0040cd16
    FXCH ST2                            ; 0040cd18
    FSIN                                ; 0040cd1a
    FXCH ST2                            ; 0040cd1c
    FMUL ST1                            ; 0040cd1e
    FXCH ST2                            ; 0040cd20
    FMULP                               ; 0040cd22
    XOR EDI,EDI                         ; 0040cd24
    MOV EAX,0x41700000                  ; 0040cd26
    MOV dword ptr [ESP + 0x8c],EDI      ; 0040cd2b
    MOV dword ptr [ESP + 0xb4],EAX      ; 0040cd32
    LEA EAX,[ESP + 0x64]                ; 0040cd39
    FXCH                                ; 0040cd3d
    FSTP float ptr [ESP + 0x88]         ; 0040cd3f
    FSTP float ptr [ESP + 0x90]         ; 0040cd46
    CMP EAX,EBX                         ; 0040cd4d
    JZ 0x0040cd65                       ; 0040cd4f
        ;   XREF to: 0040cd65 (CONDITIONAL_JUMP)  ; LAB_0040cd65
    MOV EAX,dword ptr [EBX]             ; 0040cd51
    MOV dword ptr [ESP + 0x64],EAX      ; 0040cd53
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040cd57
    MOV dword ptr [ESP + 0x68],EAX      ; 0040cd5a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040cd5e
    MOV dword ptr [ESP + 0x6c],EAX      ; 0040cd61
    PUSH dword ptr [ESP + 0xb4]         ; 0040cd65
        ;   Label: LAB_0040cd65
    PUSH 0x0                            ; 0040cd6c
    LEA EAX,[ESP + 0x90]                ; 0040cd6e
    PUSH EAX                            ; 0040cd75
    PUSH EBX                            ; 0040cd76
    MOV EDX,dword ptr [0x00614d30]      ; 0040cd77 | DAT_00614d30
    PUSH EDX                            ; 0040cd7d
    INC ESI                             ; 0040cd7e
    CALL FUN_0049d600                   ; 0040cd7f
        ;   XREF to: 0049d600 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d600()
    MOV ECX,dword ptr [EBP + 0x11c]     ; 0040cd84
    ADD ESP,0x14                        ; 0040cd8a
    CMP ESI,ECX                         ; 0040cd8d
    JL 0x0040ccc7                       ; 0040cd8f
        ;   XREF to: 0040ccc7 (CONDITIONAL_JUMP)  ; LAB_0040ccc7
    FLD float ptr [ESP + 0xe0]          ; 0040cd95
        ;   Label: LAB_0040cd95
    SUB ESP,0x8                         ; 0040cd9c
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0040cd9f
    FSTP double ptr [ESP]               ; 0040cda6
    PUSH EDX                            ; 0040cda9
    CALL FUN_004ca7c0                   ; 0040cdaa
        ;   XREF to: 004ca7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca7c0()
    ADD ESP,0x4                         ; 0040cdaf
    PUSH EAX                            ; 0040cdb2
    PUSH 0x5caeff                       ; 0040cdb3 | = "footstep%s0?"
    LEA EAX,[ESP + 0x10]                ; 0040cdb8
    PUSH EAX                            ; 0040cdbc
    CALL FUN_005b7790                   ; 0040cdbd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x14                        ; 0040cdc2
    PUSH EBX                            ; 0040cdc5
    LEA EAX,[ESP + 0x4]                 ; 0040cdc6
    PUSH EAX                            ; 0040cdca
    PUSH EBP                            ; 0040cdcb
    MOV ECX,dword ptr [0x0061c068]      ; 0040cdcc | DAT_0061c068
    PUSH ECX                            ; 0040cdd2
    CALL FUN_0055ae50                   ; 0040cdd3
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 0040cdd8
    ADD ESP,0xc0                        ; 0040cddb
    POP EBP                             ; 0040cde1
    POP EDI                             ; 0040cde2
    POP ESI                             ; 0040cde3
    POP EBX                             ; 0040cde4
    RET                                 ; 0040cde5
    CMP dword ptr [EBP + 0x114],0x0     ; 0040cde6
        ;   Label: LAB_0040cde6
    JG 0x0040cc43                       ; 0040cded
        ;   XREF to: 0040cc43 (CONDITIONAL_JUMP)  ; LAB_0040cc43
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0040cdf3
    CMP ECX,0x3                         ; 0040cdfa
    JNZ 0x0040cc81                      ; 0040cdfd
        ;   XREF to: 0040cc81 (CONDITIONAL_JUMP)  ; LAB_0040cc81
    PUSH 0x0                            ; 0040ce03
    PUSH 0x4000                         ; 0040ce05
    PUSH ECX                            ; 0040ce0a
    LEA EAX,[EBP + 0x30]                ; 0040ce0b
    PUSH EAX                            ; 0040ce0e
    PUSH EBX                            ; 0040ce0f
    MOV ESI,dword ptr [0x006167e0]      ; 0040ce10 | DAT_006167e0
    PUSH ESI                            ; 0040ce16
    CALL FUN_004c9d00                   ; 0040ce17
        ;   XREF to: 004c9d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9d00()
    ADD ESP,0x18                        ; 0040ce1c
    JMP 0x0040cc81                      ; 0040ce1f
        ;   XREF to: 0040cc81 (UNCONDITIONAL_JUMP)  ; LAB_0040cc81
    MOV dword ptr [EBP + 0x114],0x0     ; 0040ce24
        ;   Label: LAB_0040ce24
    JMP 0x0040cc81                      ; 0040ce2e
        ;   XREF to: 0040cc81 (UNCONDITIONAL_JUMP)  ; LAB_0040cc81
    PUSH 0x3                            ; 0040ce33
        ;   Label: LAB_0040ce33
    PUSH 0x1                            ; 0040ce35
    JMP 0x0040cca9                      ; 0040ce37
        ;   XREF to: 0040cca9 (UNCONDITIONAL_JUMP)  ; LAB_0040cca9

