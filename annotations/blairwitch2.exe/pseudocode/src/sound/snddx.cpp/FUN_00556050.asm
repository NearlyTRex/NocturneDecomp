; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00556050(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_sound_snddx_cpp_005e9c48
;   TerminatedCString s_DirectSoundDevice_lockSa_005e9c5b
;   TerminatedCString s_Lock_hw_sample_buffer_005e9c8b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005549c0
;   FUN_00554ad0
;   FUN_005b7790
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556050
        ;   Label: FUN_00556050
    PUSH ESI                            ; 00556051
    PUSH EDI                            ; 00556052
    PUSH EBP                            ; 00556053
    SUB ESP,0x198                       ; 00556054
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0055605a
    TEST EAX,EAX                        ; 00556061
    JLE 0x0055606a                      ; 00556063
        ;   XREF to: 0055606a (CONDITIONAL_JUMP)  ; LAB_0055606a
    CMP EAX,0x41                        ; 00556065
    JL 0x00556077                       ; 00556068
        ;   XREF to: 00556077 (CONDITIONAL_JUMP)  ; LAB_00556077
    XOR EAX,EAX                         ; 0055606a
        ;   Label: LAB_0055606a
    ADD ESP,0x198                       ; 0055606c
    POP EBP                             ; 00556072
    POP EDI                             ; 00556073
    POP ESI                             ; 00556074
    POP EBX                             ; 00556075
    RET                                 ; 00556076
    LEA EBX,[EAX*0x4 + 0x0]             ; 00556077
        ;   Label: LAB_00556077
    SUB EBX,EAX                         ; 0055607e
    SHL EBX,0x3                         ; 00556080
    CMP dword ptr [EBX + 0x264a5f4],0x0 ; 00556083
    JZ 0x0055606a                       ; 0055608a
        ;   XREF to: 0055606a (CONDITIONAL_JUMP)  ; LAB_0055606a
    CMP dword ptr [EBX + 0x264a5fc],0x1 ; 0055608c
    JL 0x0055606a                       ; 00556093
        ;   XREF to: 0055606a (CONDITIONAL_JUMP)  ; LAB_0055606a
    LEA EBX,[EAX*0x4 + 0x0]             ; 00556095
    SUB EBX,EAX                         ; 0055609c
    SHL EBX,0x3                         ; 0055609e
    ADD EBX,0x264a5f4                   ; 005560a1
    CMP dword ptr [EBX + 0x10],0x0      ; 005560a7
    JZ 0x005560d0                       ; 005560ab
        ;   XREF to: 005560d0 (CONDITIONAL_JUMP)  ; LAB_005560d0
    MOV EDI,0x5e9c48                    ; 005560ad | = "..\\sound\\snddx.cpp"
    MOV EBP,0x440                       ; 005560b2
    PUSH 0x5e9c5b                       ; 005560b7 | = "DirectSoundDevice::lockSample - alrea..."
    MOV dword ptr [0x01d046a0],EDI      ; 005560bc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 005560c2 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005560c8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005560cd
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 005560d0
        ;   Label: LAB_005560d0
    MOV EAX,dword ptr [EBX + 0x8]       ; 005560d7
    IMUL EDX,EAX                        ; 005560da
    MOV EAX,EDX                         ; 005560dd
    SAR EDX,0x1f                        ; 005560df
    SHL EDX,0x8                         ; 005560e2
    SBB EAX,EDX                         ; 005560e5
    SAR EAX,0x8                         ; 005560e7
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 005560ea
    ADD EDI,0x1f                        ; 005560f1
    MOV ESI,EAX                         ; 005560f4
    MOV EBP,EAX                         ; 005560f6
    AND SI,0xffe0                       ; 005560f8
    MOV EAX,dword ptr [EBX + 0xc]       ; 005560fc
    AND DI,0xffe0                       ; 005560ff
    SUB EAX,ESI                         ; 00556103
    CMP EDI,EAX                         ; 00556105
    JLE 0x0055610b                      ; 00556107
        ;   XREF to: 0055610b (CONDITIONAL_JUMP)  ; LAB_0055610b
    MOV EDI,EAX                         ; 00556109
    PUSH 0x0                            ; 0055610b
        ;   Label: LAB_0055610b
    LEA ECX,[ESP + 0x198]               ; 0055610d
    PUSH ECX                            ; 00556114
    LEA ECX,[ESP + 0x198]               ; 00556115
    PUSH ECX                            ; 0055611c
    LEA ECX,[EBX + 0x14]                ; 0055611d
    PUSH ECX                            ; 00556120
    LEA ECX,[EBX + 0x10]                ; 00556121
    PUSH ECX                            ; 00556124
    PUSH EDI                            ; 00556125
    MOV EAX,dword ptr [EBX]             ; 00556126
    PUSH ESI                            ; 00556128
    MOV EDX,dword ptr [EAX]             ; 00556129
    PUSH EAX                            ; 0055612b
    CALL dword ptr [EDX + 0x2c]         ; 0055612c
    TEST EAX,EAX                        ; 0055612f
    JNZ 0x00556169                      ; 00556131
        ;   XREF to: 00556169 (CONDITIONAL_JUMP)  ; LAB_00556169
    MOV EAX,dword ptr [EBX + 0xc]       ; 00556133
    ADD EDI,ESI                         ; 00556136
    SUB EAX,0x20                        ; 00556138
    CMP EDI,EAX                         ; 0055613b
    JL 0x00556157                       ; 0055613d
        ;   XREF to: 00556157 (CONDITIONAL_JUMP)  ; LAB_00556157
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055613f
    ADD EAX,dword ptr [EBX + 0xc]       ; 00556142
    PUSH 0x20                           ; 00556145
    SUB EAX,ESI                         ; 00556147
    PUSH 0x0                            ; 00556149
    SUB EAX,0x20                        ; 0055614b
    PUSH EAX                            ; 0055614e
    CALL FUN_005b77c0                   ; 0055614f
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00556154
    MOV EAX,dword ptr [EBX + 0x10]      ; 00556157
        ;   Label: LAB_00556157
    ADD EAX,EBP                         ; 0055615a
    SUB EAX,ESI                         ; 0055615c
    ADD ESP,0x198                       ; 0055615e
    POP EBP                             ; 00556164
    POP EDI                             ; 00556165
    POP ESI                             ; 00556166
    POP EBX                             ; 00556167
    RET                                 ; 00556168
    PUSH EAX                            ; 00556169
        ;   Label: LAB_00556169
    CALL FUN_00554ad0                   ; 0055616a
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 0055616f
    PUSH EAX                            ; 00556172
    PUSH 0x5e9c8b                       ; 00556173 | = "Lock hw sample buffer"
    PUSH 0x5e9a3b                       ; 00556178 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055617d
    PUSH EAX                            ; 00556181
    CALL FUN_005b7790                   ; 00556182
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00556187
    MOV EAX,ESP                         ; 0055618a
    PUSH EAX                            ; 0055618c
    CALL FUN_005549c0                   ; 0055618d
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 00556192
    XOR EAX,EAX                         ; 00556195
    ADD ESP,0x198                       ; 00556197
    POP EBP                             ; 0055619d
    POP EDI                             ; 0055619e
    POP ESI                             ; 0055619f
    POP EBX                             ; 005561a0
    RET                                 ; 005561a1

