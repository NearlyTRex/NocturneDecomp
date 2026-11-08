; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045c020(int param_1)
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

    PUSH EBX                            ; 0045c020
        ;   Label: FUN_0045c020
    PUSH ESI                            ; 0045c021
    PUSH EDI                            ; 0045c022
    PUSH EBP                            ; 0045c023
    MOV EBP,ESP                         ; 0045c024
    SUB ESP,0x144                       ; 0045c026
    SUB EBP,0x7e                        ; 0045c02c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0045c02f
    CMP dword ptr [EBX + 0x27bc],0x0    ; 0045c035
    JZ 0x0045c1b1                       ; 0045c03c
        ;   XREF to: 0045c1b1 (CONDITIONAL_JUMP)  ; LAB_0045c1b1
    CMP dword ptr [EBX + 0xc2ec],0x0    ; 0045c042
    JZ 0x0045c1b1                       ; 0045c049
        ;   XREF to: 0045c1b1 (CONDITIONAL_JUMP)  ; LAB_0045c1b1
    MOV ESI,dword ptr [EBX + 0xc2fc]    ; 0045c04f
    PUSH ESI                            ; 0045c055
    LEA EAX,[EBX + 0x158]               ; 0045c056
    PUSH EAX                            ; 0045c05c
    LEA ESI,[EBP + 0xffffff6a]          ; 0045c05d
    LEA EDI,[EBP + 0xffffff3a]          ; 0045c063
    CALL FUN_00568e30                   ; 0045c069
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e30()
    MOV ECX,0xc                         ; 0045c06e
    ADD ESP,0x8                         ; 0045c073
    LEA EAX,[EBP + 0xffffff3a]          ; 0045c076
    LEA ESI,[EBP + 0xffffff6a]          ; 0045c07c
    PUSH EAX                            ; 0045c082
    MOVSD.REP ES:EDI,ESI                ; 0045c083
    MOV EAX,0x3f000000                  ; 0045c085
    LEA ESI,[EBP + -0x2a]               ; 0045c08a
    MOV dword ptr [EBP + -0x4a],EAX     ; 0045c08d
    MOV dword ptr [EBP + -0x46],EAX     ; 0045c090
    LEA EAX,[EBP + -0x4e]               ; 0045c093
    XOR EDI,EDI                         ; 0045c096
    PUSH EAX                            ; 0045c098
    MOV dword ptr [EBP + -0x4e],EDI     ; 0045c099
    LEA EDI,[EBP + -0x66]               ; 0045c09c
    CALL FUN_005b5080                   ; 0045c09f
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0045c0a4
    LEA EAX,[EBP + -0x66]               ; 0045c0a7
    LEA ESI,[EBP + -0x2a]               ; 0045c0aa
    PUSH EAX                            ; 0045c0ad
    MOVSD ES:EDI,ESI                    ; 0045c0ae
    MOVSD ES:EDI,ESI                    ; 0045c0af
    MOVSD ES:EDI,ESI                    ; 0045c0b0
    PUSH EBX                            ; 0045c0b1
    LEA ESI,[EBP + -0x1e]               ; 0045c0b2
    LEA EDI,[EBP + -0x5a]               ; 0045c0b5
    CALL FUN_00408b40                   ; 0045c0b8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[EBP + -0x1e]               ; 0045c0bd
    ADD ESP,0x8                         ; 0045c0c0
    LEA EAX,[EBP + 0xffffff3a]          ; 0045c0c3
    XOR ECX,ECX                         ; 0045c0c9
    PUSH EAX                            ; 0045c0cb
    MOV dword ptr [EBP + -0x6],ECX      ; 0045c0cc
    MOV dword ptr [EBP + -0x2],ECX      ; 0045c0cf
    MOV dword ptr [EBP + 0x2],ECX       ; 0045c0d2
    LEA EAX,[EBP + -0x6]                ; 0045c0d5
    MOVSD ES:EDI,ESI                    ; 0045c0d8
    MOVSD ES:EDI,ESI                    ; 0045c0d9
    MOVSD ES:EDI,ESI                    ; 0045c0da
    PUSH EAX                            ; 0045c0db
    LEA ESI,[EBP + -0x12]               ; 0045c0dc
    LEA EDI,[EBP + 0x1e]                ; 0045c0df
    CALL FUN_005b5080                   ; 0045c0e2
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0045c0e7
    LEA EAX,[EBP + 0x1e]                ; 0045c0ea
    LEA ESI,[EBP + -0x12]               ; 0045c0ed
    PUSH EAX                            ; 0045c0f0
    MOVSD ES:EDI,ESI                    ; 0045c0f1
    MOVSD ES:EDI,ESI                    ; 0045c0f2
    MOVSD ES:EDI,ESI                    ; 0045c0f3
    PUSH EBX                            ; 0045c0f4
    LEA ESI,[EBP + 0x66]                ; 0045c0f5
    LEA EDI,[EBP + -0x42]               ; 0045c0f8
    CALL FUN_00408ac0                   ; 0045c0fb
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[EBP + 0x66]                ; 0045c100
    ADD ESP,0x8                         ; 0045c103
    LEA EAX,[EBP + 0xffffff3a]          ; 0045c106
    MOV ECX,0x3f800000                  ; 0045c10c
    PUSH EAX                            ; 0045c111
    XOR EAX,EAX                         ; 0045c112
    MOV dword ptr [EBP + -0x2e],ECX     ; 0045c114
    MOV dword ptr [EBP + -0x36],EAX     ; 0045c117
    MOV dword ptr [EBP + -0x32],EAX     ; 0045c11a
    LEA EAX,[EBP + -0x36]               ; 0045c11d
    MOVSD ES:EDI,ESI                    ; 0045c120
    MOVSD ES:EDI,ESI                    ; 0045c121
    MOVSD ES:EDI,ESI                    ; 0045c122
    PUSH EAX                            ; 0045c123
    LEA ESI,[EBP + 0x6]                 ; 0045c124
    LEA EDI,[EBP + 0x5a]                ; 0045c127
    CALL FUN_005b5080                   ; 0045c12a
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0045c12f
    LEA EAX,[EBP + 0x5a]                ; 0045c132
    LEA ESI,[EBP + 0x6]                 ; 0045c135
    PUSH EAX                            ; 0045c138
    MOVSD ES:EDI,ESI                    ; 0045c139
    MOVSD ES:EDI,ESI                    ; 0045c13a
    MOVSD ES:EDI,ESI                    ; 0045c13b
    PUSH EBX                            ; 0045c13c
    LEA ESI,[EBP + 0x12]                ; 0045c13d
    LEA EDI,[EBP + 0x72]                ; 0045c140
    CALL FUN_00408ac0                   ; 0045c143
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[EBP + 0x12]                ; 0045c148
    LEA EAX,[EBP + 0x36]                ; 0045c14b
    MOVSD ES:EDI,ESI                    ; 0045c14e
    MOVSD ES:EDI,ESI                    ; 0045c14f
    MOVSD ES:EDI,ESI                    ; 0045c150
    ADD ESP,0x8                         ; 0045c151
    FLD float ptr [EBP + 0x72]          ; 0045c154
    FLD float ptr [EBP + 0x76]          ; 0045c157
    FLD float ptr [EBP + 0x7a]          ; 0045c15a
    LEA EDI,[EBP + 0x36]                ; 0045c15d
    LEA ESI,[EBP + 0x42]                ; 0045c160
    FXCH ST2                            ; 0045c163
    FSUB float ptr [EBP + -0x42]        ; 0045c165
    FXCH                                ; 0045c168
    FSUB float ptr [EBP + -0x3e]        ; 0045c16a
    FXCH ST2                            ; 0045c16d
    FSUB float ptr [EBP + -0x3a]        ; 0045c16f
    FXCH                                ; 0045c172
    FSTP float ptr [EBP + 0x42]         ; 0045c174
    FXCH                                ; 0045c177
    FSTP float ptr [EBP + 0x46]         ; 0045c179
    FSTP float ptr [EBP + 0x4a]         ; 0045c17c
    MOVSD ES:EDI,ESI                    ; 0045c17f
    MOVSD ES:EDI,ESI                    ; 0045c180
    MOVSD ES:EDI,ESI                    ; 0045c181
    PUSH EAX                            ; 0045c182
    LEA ESI,[EBP + 0x4e]                ; 0045c183
    CALL FUN_005a7520                   ; 0045c186
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    ADD ESP,0x4                         ; 0045c18b
    PUSH 0x40c00000                     ; 0045c18e
    LEA EAX,[EBP + 0x2a]                ; 0045c193
    PUSH 0x42600000                     ; 0045c196
    LEA EDI,[EBP + 0x2a]                ; 0045c19b
    PUSH EAX                            ; 0045c19e
    LEA EAX,[EBP + -0x5a]               ; 0045c19f
    LEA ESI,[EBP + 0x4e]                ; 0045c1a2
    PUSH EAX                            ; 0045c1a5
    MOVSD ES:EDI,ESI                    ; 0045c1a6
    MOVSD ES:EDI,ESI                    ; 0045c1a7
    MOVSD ES:EDI,ESI                    ; 0045c1a8
    CALL FUN_00465890                   ; 0045c1a9
        ;   XREF to: 00465890 (UNCONDITIONAL_CALL)  ; undefined FUN_00465890()
    ADD ESP,0x10                        ; 0045c1ae
    CMP dword ptr [EBX + 0x27bc],0x0    ; 0045c1b1
        ;   Label: LAB_0045c1b1
    JNZ 0x0045c1c8                      ; 0045c1b8
        ;   XREF to: 0045c1c8 (CONDITIONAL_JUMP)  ; LAB_0045c1c8
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0045c1ba
    LEA ESP,[EBP + 0x7e]                ; 0045c1c0
    POP EBP                             ; 0045c1c3
    POP EDI                             ; 0045c1c4
    POP ESI                             ; 0045c1c5
    POP EBX                             ; 0045c1c6
    RET                                 ; 0045c1c7
    PUSH EBX                            ; 0045c1c8
        ;   Label: LAB_0045c1c8
    CALL FUN_004301e0                   ; 0045c1c9
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004301e0()
    ADD ESP,0x4                         ; 0045c1ce
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0045c1d1
    LEA ESP,[EBP + 0x7e]                ; 0045c1d7
    POP EBP                             ; 0045c1da
    POP EDI                             ; 0045c1db
    POP ESI                             ; 0045c1dc
    POP EBX                             ; 0045c1dd
    RET                                 ; 0045c1de

