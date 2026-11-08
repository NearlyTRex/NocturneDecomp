; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005be020(int param_1)
;
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_004301e0
;   FUN_00465890
;   FUN_00568e30
;   FUN_005a7520
;   FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be020
        ;   Label: FUN_005be020
    PUSH ESI                            ; 005be021
    PUSH EDI                            ; 005be022
    PUSH EBP                            ; 005be023
    MOV EBP,ESP                         ; 005be024
    SUB ESP,0x144                       ; 005be026
    SUB EBP,0x7e                        ; 005be02c
    MOV EBX,dword ptr [EBP + 0x92]      ; 005be02f
    CMP dword ptr [EBX + 0x27bc],0x0    ; 005be035
    JZ 0x005be1b1                       ; 005be03c
        ;   XREF to: 005be1b1 (CONDITIONAL_JUMP)  ; LAB_005be1b1
    CMP dword ptr [EBX + 0xc2ec],0x0    ; 005be042
    JZ 0x005be1b1                       ; 005be049
        ;   XREF to: 005be1b1 (CONDITIONAL_JUMP)  ; LAB_005be1b1
    MOV ESI,dword ptr [EBX + 0xc2f8]    ; 005be04f
    PUSH ESI                            ; 005be055
    LEA EAX,[EBX + 0x158]               ; 005be056
    PUSH EAX                            ; 005be05c
    LEA ESI,[EBP + 0xffffff6a]          ; 005be05d
    LEA EDI,[EBP + 0xffffff3a]          ; 005be063
    CALL FUN_00568e30                   ; 005be069
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e30()
    MOV ECX,0xc                         ; 005be06e
    ADD ESP,0x8                         ; 005be073
    LEA EAX,[EBP + 0xffffff3a]          ; 005be076
    LEA ESI,[EBP + 0xffffff6a]          ; 005be07c
    PUSH EAX                            ; 005be082
    MOVSD.REP ES:EDI,ESI                ; 005be083
    MOV EAX,0x3f000000                  ; 005be085
    LEA ESI,[EBP + -0x2a]               ; 005be08a
    MOV dword ptr [EBP + -0x4a],EAX     ; 005be08d
    MOV dword ptr [EBP + -0x46],EAX     ; 005be090
    LEA EAX,[EBP + -0x4e]               ; 005be093
    XOR EDI,EDI                         ; 005be096
    PUSH EAX                            ; 005be098
    MOV dword ptr [EBP + -0x4e],EDI     ; 005be099
    LEA EDI,[EBP + -0x66]               ; 005be09c
    CALL FUN_005b5080                   ; 005be09f
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 005be0a4
    LEA EAX,[EBP + -0x66]               ; 005be0a7
    LEA ESI,[EBP + -0x2a]               ; 005be0aa
    PUSH EAX                            ; 005be0ad
    MOVSD ES:EDI,ESI                    ; 005be0ae
    MOVSD ES:EDI,ESI                    ; 005be0af
    MOVSD ES:EDI,ESI                    ; 005be0b0
    PUSH EBX                            ; 005be0b1
    LEA ESI,[EBP + -0x1e]               ; 005be0b2
    LEA EDI,[EBP + -0x5a]               ; 005be0b5
    CALL FUN_00408b40                   ; 005be0b8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[EBP + -0x1e]               ; 005be0bd
    ADD ESP,0x8                         ; 005be0c0
    LEA EAX,[EBP + 0xffffff3a]          ; 005be0c3
    XOR ECX,ECX                         ; 005be0c9
    PUSH EAX                            ; 005be0cb
    MOV dword ptr [EBP + -0x6],ECX      ; 005be0cc
    MOV dword ptr [EBP + -0x2],ECX      ; 005be0cf
    MOV dword ptr [EBP + 0x2],ECX       ; 005be0d2
    LEA EAX,[EBP + -0x6]                ; 005be0d5
    MOVSD ES:EDI,ESI                    ; 005be0d8
    MOVSD ES:EDI,ESI                    ; 005be0d9
    MOVSD ES:EDI,ESI                    ; 005be0da
    PUSH EAX                            ; 005be0db
    LEA ESI,[EBP + -0x12]               ; 005be0dc
    LEA EDI,[EBP + 0x1e]                ; 005be0df
    CALL FUN_005b5080                   ; 005be0e2
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 005be0e7
    LEA EAX,[EBP + 0x1e]                ; 005be0ea
    LEA ESI,[EBP + -0x12]               ; 005be0ed
    PUSH EAX                            ; 005be0f0
    MOVSD ES:EDI,ESI                    ; 005be0f1
    MOVSD ES:EDI,ESI                    ; 005be0f2
    MOVSD ES:EDI,ESI                    ; 005be0f3
    PUSH EBX                            ; 005be0f4
    LEA ESI,[EBP + 0x66]                ; 005be0f5
    LEA EDI,[EBP + -0x42]               ; 005be0f8
    CALL FUN_00408ac0                   ; 005be0fb
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[EBP + 0x66]                ; 005be100
    ADD ESP,0x8                         ; 005be103
    LEA EAX,[EBP + 0xffffff3a]          ; 005be106
    MOV ECX,0x3f800000                  ; 005be10c
    PUSH EAX                            ; 005be111
    XOR EAX,EAX                         ; 005be112
    MOV dword ptr [EBP + -0x2e],ECX     ; 005be114
    MOV dword ptr [EBP + -0x36],EAX     ; 005be117
    MOV dword ptr [EBP + -0x32],EAX     ; 005be11a
    LEA EAX,[EBP + -0x36]               ; 005be11d
    MOVSD ES:EDI,ESI                    ; 005be120
    MOVSD ES:EDI,ESI                    ; 005be121
    MOVSD ES:EDI,ESI                    ; 005be122
    PUSH EAX                            ; 005be123
    LEA ESI,[EBP + 0x6]                 ; 005be124
    LEA EDI,[EBP + 0x5a]                ; 005be127
    CALL FUN_005b5080                   ; 005be12a
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 005be12f
    LEA EAX,[EBP + 0x5a]                ; 005be132
    LEA ESI,[EBP + 0x6]                 ; 005be135
    PUSH EAX                            ; 005be138
    MOVSD ES:EDI,ESI                    ; 005be139
    MOVSD ES:EDI,ESI                    ; 005be13a
    MOVSD ES:EDI,ESI                    ; 005be13b
    PUSH EBX                            ; 005be13c
    LEA ESI,[EBP + 0x12]                ; 005be13d
    LEA EDI,[EBP + 0x72]                ; 005be140
    CALL FUN_00408ac0                   ; 005be143
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[EBP + 0x12]                ; 005be148
    LEA EAX,[EBP + 0x36]                ; 005be14b
    MOVSD ES:EDI,ESI                    ; 005be14e
    MOVSD ES:EDI,ESI                    ; 005be14f
    MOVSD ES:EDI,ESI                    ; 005be150
    ADD ESP,0x8                         ; 005be151
    FLD float ptr [EBP + 0x72]          ; 005be154
    FLD float ptr [EBP + 0x76]          ; 005be157
    FLD float ptr [EBP + 0x7a]          ; 005be15a
    LEA EDI,[EBP + 0x36]                ; 005be15d
    LEA ESI,[EBP + 0x42]                ; 005be160
    FXCH ST2                            ; 005be163
    FSUB float ptr [EBP + -0x42]        ; 005be165
    FXCH                                ; 005be168
    FSUB float ptr [EBP + -0x3e]        ; 005be16a
    FXCH ST2                            ; 005be16d
    FSUB float ptr [EBP + -0x3a]        ; 005be16f
    FXCH                                ; 005be172
    FSTP float ptr [EBP + 0x42]         ; 005be174
    FXCH                                ; 005be177
    FSTP float ptr [EBP + 0x46]         ; 005be179
    FSTP float ptr [EBP + 0x4a]         ; 005be17c
    MOVSD ES:EDI,ESI                    ; 005be17f
    MOVSD ES:EDI,ESI                    ; 005be180
    MOVSD ES:EDI,ESI                    ; 005be181
    PUSH EAX                            ; 005be182
    LEA ESI,[EBP + 0x4e]                ; 005be183
    CALL FUN_005a7520                   ; 005be186
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    ADD ESP,0x4                         ; 005be18b
    PUSH 0x40c00000                     ; 005be18e
    LEA EAX,[EBP + 0x2a]                ; 005be193
    PUSH 0x42600000                     ; 005be196
    LEA EDI,[EBP + 0x2a]                ; 005be19b
    PUSH EAX                            ; 005be19e
    LEA EAX,[EBP + -0x5a]               ; 005be19f
    LEA ESI,[EBP + 0x4e]                ; 005be1a2
    PUSH EAX                            ; 005be1a5
    MOVSD ES:EDI,ESI                    ; 005be1a6
    MOVSD ES:EDI,ESI                    ; 005be1a7
    MOVSD ES:EDI,ESI                    ; 005be1a8
    CALL FUN_00465890                   ; 005be1a9
        ;   XREF to: 00465890 (UNCONDITIONAL_CALL)  ; undefined FUN_00465890()
    ADD ESP,0x10                        ; 005be1ae
    CMP dword ptr [EBX + 0x27bc],0x0    ; 005be1b1
        ;   Label: LAB_005be1b1
    JNZ 0x005be1c8                      ; 005be1b8
        ;   XREF to: 005be1c8 (CONDITIONAL_JUMP)  ; LAB_005be1c8
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 005be1ba
    LEA ESP,[EBP + 0x7e]                ; 005be1c0
    POP EBP                             ; 005be1c3
    POP EDI                             ; 005be1c4
    POP ESI                             ; 005be1c5
    POP EBX                             ; 005be1c6
    RET                                 ; 005be1c7
    PUSH EBX                            ; 005be1c8
        ;   Label: LAB_005be1c8
    CALL FUN_004301e0                   ; 005be1c9
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004301e0()
    ADD ESP,0x4                         ; 005be1ce
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 005be1d1
    LEA ESP,[EBP + 0x7e]                ; 005be1d7
    POP EBP                             ; 005be1da
    POP EDI                             ; 005be1db
    POP ESI                             ; 005be1dc
    POP EBX                             ; 005be1dd
    RET                                 ; 005be1de

