; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005830d0(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_00408ac0
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005830d0
        ;   Label: FUN_005830d0
    PUSH ESI                            ; 005830d1
    PUSH EDI                            ; 005830d2
    SUB ESP,0x40                        ; 005830d3
    MOV EBX,dword ptr [ESP + 0x50]      ; 005830d6
    LEA EAX,[EBX + 0x158]               ; 005830da
    PUSH EAX                            ; 005830e0
    CALL FUN_004688e0                   ; 005830e1
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 005830e6
    PUSH EBX                            ; 005830e9
    CALL FUN_00408850                   ; 005830ea
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    FLD float ptr [EBX + 0x2ec]         ; 005830ef
    FMUL float ptr [EBX + 0x55c]        ; 005830f5
    ADD ESP,0x4                         ; 005830fb
    FSTP float ptr [ESP + 0x3c]         ; 005830fe
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00583102
    MOV dword ptr [ESP + 0x20],EAX      ; 00583106
    LEA EAX,[ESP + 0x18]                ; 0058310a
    LEA ESI,[ESP + 0x24]                ; 0058310e
    PUSH EAX                            ; 00583112
    LEA EDI,[ESP + 0x10]                ; 00583113
    XOR EDX,EDX                         ; 00583117
    PUSH EBX                            ; 00583119
    MOV dword ptr [ESP + 0x20],EDX      ; 0058311a
    MOV dword ptr [ESP + 0x24],EDX      ; 0058311e
    CALL FUN_00408ac0                   ; 00583122
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0x2c]                ; 00583127
    ADD ESP,0x8                         ; 0058312b
    LEA EAX,[EBX + 0x20]                ; 0058312e
    MOVSD ES:EDI,ESI                    ; 00583131
    MOVSD ES:EDI,ESI                    ; 00583132
    MOVSD ES:EDI,ESI                    ; 00583133
    LEA EDX,[EBX + 0x2e0]               ; 00583134
    FLD float ptr [EAX + 0x4]           ; 0058313a
    FLD float ptr [EAX + 0x8]           ; 0058313d
    FLD float ptr [EAX]                 ; 00583140
    LEA EDI,[ESP + 0x30]                ; 00583142
    MOV ESI,ESP                         ; 00583146
    LEA EAX,[ESP + 0x30]                ; 00583148
    FSUB float ptr [ESP + 0xc]          ; 0058314c
    FXCH ST2                            ; 00583150
    FSUB float ptr [ESP + 0x10]         ; 00583152
    FXCH                                ; 00583156
    FSUB float ptr [ESP + 0x14]         ; 00583158
    FXCH ST2                            ; 0058315c
    FSTP float ptr [ESP]                ; 0058315e
    FSTP float ptr [ESP + 0x4]          ; 00583161
    FSTP float ptr [ESP + 0x8]          ; 00583165
    MOVSD ES:EDI,ESI                    ; 00583169
    MOVSD ES:EDI,ESI                    ; 0058316a
    MOVSD ES:EDI,ESI                    ; 0058316b
    CMP EDX,EAX                         ; 0058316c
    JNZ 0x00583181                      ; 0058316e
        ;   XREF to: 00583181 (CONDITIONAL_JUMP)  ; LAB_00583181
    MOV dword ptr [EBX + 0x488],0x0     ; 00583170
    ADD ESP,0x40                        ; 0058317a
    POP EDI                             ; 0058317d
    POP ESI                             ; 0058317e
    POP EBX                             ; 0058317f
    RET                                 ; 00583180
    MOV EAX,dword ptr [ESP + 0x30]      ; 00583181
        ;   Label: LAB_00583181
    MOV dword ptr [EDX],EAX             ; 00583185
    MOV EAX,dword ptr [ESP + 0x34]      ; 00583187
    MOV dword ptr [EDX + 0x4],EAX       ; 0058318b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058318e
    MOV dword ptr [EDX + 0x8],EAX       ; 00583192
    MOV dword ptr [EBX + 0x488],0x0     ; 00583195
    ADD ESP,0x40                        ; 0058319f
    POP EDI                             ; 005831a2
    POP ESI                             ; 005831a3
    POP EBX                             ; 005831a4
    RET                                 ; 005831a5

