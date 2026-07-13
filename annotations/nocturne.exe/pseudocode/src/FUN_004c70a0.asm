; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c70a0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00587a5d
;   undefined4 DAT_005be368
;
; Called Functions:
;   FUN_0040a240
;   FUN_0040d7e0
;   FUN_0050fb00
;   FUN_005113e0
;   FUN_00511590
;   FUN_00511780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c70a0
        ;   Label: FUN_004c70a0
    PUSH ESI                            ; 004c70a1
    PUSH EDI                            ; 004c70a2
    PUSH EBP                            ; 004c70a3
    SUB ESP,0x3c                        ; 004c70a4
    MOV EDI,dword ptr [ESP + 0x50]      ; 004c70a7
    MOV ESI,dword ptr [ESP + 0x54]      ; 004c70ab
    MOV EDX,dword ptr [0x005be368]      ; 004c70af | DAT_005be368
    PUSH EDX                            ; 004c70b5
    CALL FUN_005113e0                   ; 004c70b6
        ;   XREF to: 005113e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005113e0()
    ADD ESP,0x4                         ; 004c70bb
    MOV EAX,ESP                         ; 004c70be
    PUSH EAX                            ; 004c70c0
    MOV EBX,dword ptr [ESI + 0x14c]     ; 004c70c1
    PUSH ESI                            ; 004c70c7
    CALL dword ptr [EBX + 0x14]         ; 004c70c8
    LEA EBX,[EAX + 0xc]                 ; 004c70cb
    FLD float ptr [EAX]                 ; 004c70ce
    FADD float ptr [EBX]                ; 004c70d0
    ADD ESP,0x8                         ; 004c70d2
    FST float ptr [ESP + 0x30]          ; 004c70d5
    FLD float ptr [EAX + 0x4]           ; 004c70d9
    FADD float ptr [EBX + 0x4]          ; 004c70dc
    FXCH                                ; 004c70df
    FLD float ptr [0x00587a5d]          ; 004c70e1 | DAT_00587a5d
    FXCH                                ; 004c70e7
    FMUL ST1                            ; 004c70e9
    FXCH ST2                            ; 004c70eb
    FST float ptr [ESP + 0x34]          ; 004c70ed
    FLD float ptr [EAX + 0x8]           ; 004c70f1
    FADD float ptr [EBX + 0x8]          ; 004c70f4
    FXCH                                ; 004c70f7
    FMUL ST2                            ; 004c70f9
    FXCH                                ; 004c70fb
    FST float ptr [ESP + 0x38]          ; 004c70fd
    FMULP ST2                           ; 004c7101
    LEA EAX,[ESP + 0x18]                ; 004c7103
    XOR EBP,EBP                         ; 004c7107
    PUSH EAX                            ; 004c7109
    LEA EAX,[ESP + 0x28]                ; 004c710a
    FXCH ST2                            ; 004c710e
    FSTP float ptr [ESP + 0x1c]         ; 004c7110
    PUSH EAX                            ; 004c7114
    FXCH                                ; 004c7115
    FSTP float ptr [ESP + 0x24]         ; 004c7117
    XOR EBX,EBX                         ; 004c711b
    PUSH ESI                            ; 004c711d
    FSTP float ptr [ESP + 0x2c]         ; 004c711e
    CALL FUN_0040a240                   ; 004c7122
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 004c7127
    LEA EAX,[ESP + 0x24]                ; 004c712a
        ;   Label: LAB_004c712a
    PUSH EAX                            ; 004c712e
    PUSH EDI                            ; 004c712f
    MOV ECX,dword ptr [0x005be368]      ; 004c7130 | DAT_005be368
    PUSH ECX                            ; 004c7136
    CALL FUN_0050fb00                   ; 004c7137
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fb00()
    MOV EAX,[0x005be368]                ; 004c713c | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 004c7141
    ADD ESP,0xc                         ; 004c7147
    TEST EDX,EDX                        ; 004c714a
    JZ 0x004c717f                       ; 004c714c
        ;   XREF to: 004c717f (CONDITIONAL_JUMP)  ; LAB_004c717f
    CMP ESI,EDX                         ; 004c714e
    JZ 0x004c7198                       ; 004c7150
        ;   XREF to: 004c7198 (CONDITIONAL_JUMP)  ; LAB_004c7198
    PUSH 0x587a48                       ; 004c7152
    PUSH EDX                            ; 004c7157
    CALL FUN_0040d7e0                   ; 004c7158
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c715d
    TEST EAX,EAX                        ; 004c7160
    JZ 0x004c717f                       ; 004c7162
        ;   XREF to: 004c717f (CONDITIONAL_JUMP)  ; LAB_004c717f
    MOV EAX,[0x005be368]                ; 004c7164 | DAT_005be368
    MOV ECX,dword ptr [EAX + 0x14cd5c]  ; 004c7169
    PUSH ECX                            ; 004c716f
    PUSH EAX                            ; 004c7170
    INC EBX                             ; 004c7171
    CALL FUN_00511780                   ; 004c7172
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined FUN_00511780()
    ADD ESP,0x8                         ; 004c7177
    CMP EBX,0x3                         ; 004c717a
    JL 0x004c712a                       ; 004c717d
        ;   XREF to: 004c712a (CONDITIONAL_JUMP)  ; LAB_004c712a
    MOV EBX,dword ptr [0x005be368]      ; 004c717f | DAT_005be368
        ;   Label: LAB_004c717f
    PUSH EBX                            ; 004c7185
    CALL FUN_00511590                   ; 004c7186
        ;   XREF to: 00511590 (UNCONDITIONAL_CALL)  ; undefined FUN_00511590()
    ADD ESP,0x4                         ; 004c718b
    MOV EAX,EBP                         ; 004c718e
    ADD ESP,0x3c                        ; 004c7190
    POP EBP                             ; 004c7193
    POP EDI                             ; 004c7194
    POP ESI                             ; 004c7195
    POP EBX                             ; 004c7196
    RET                                 ; 004c7197
    MOV EBP,0x1                         ; 004c7198
        ;   Label: LAB_004c7198
    JMP 0x004c717f                      ; 004c719d
        ;   XREF to: 004c717f (UNCONDITIONAL_JUMP)  ; LAB_004c717f

