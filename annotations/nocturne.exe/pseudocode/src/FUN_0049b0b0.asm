; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049b0b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049da10 at 0049de16
;
; Referenced Globals:
;   undefined4 DAT_01c78ac4
;
; Called Functions:
;   FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b0b0
        ;   Label: FUN_0049b0b0
    PUSH ESI                            ; 0049b0b1
    PUSH EDI                            ; 0049b0b2
    PUSH EBP                            ; 0049b0b3
    MOV EBP,ESP                         ; 0049b0b4
    SUB ESP,0x18                        ; 0049b0b6
    AND ESP,0xfffffff8                  ; 0049b0b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b0bc
    FLD float ptr [EBX + 0x264]         ; 0049b0bf
    FSUBR float ptr [EBX + 0x384]       ; 0049b0c5
    FST float ptr [EBX + 0x384]         ; 0049b0cb
    FLDZ                                ; 0049b0d1
    FCOMPP                              ; 0049b0d3
    FNSTSW AX                           ; 0049b0d5
    SAHF                                ; 0049b0d7
    JA 0x0049b18f                       ; 0049b0d8
        ;   XREF to: 0049b18f (CONDITIONAL_JUMP)  ; LAB_0049b18f
    FLD float ptr [EBX + 0x264]         ; 0049b0de
        ;   Label: LAB_0049b0de
    FSUBR float ptr [0x01c78ac4]        ; 0049b0e4 | DAT_01c78ac4
    FST float ptr [0x01c78ac4]          ; 0049b0ea | DAT_01c78ac4
    FLDZ                                ; 0049b0f0
    FCOMPP                              ; 0049b0f2
    FNSTSW AX                           ; 0049b0f4
    SAHF                                ; 0049b0f6
    JBE 0x0049b101                      ; 0049b0f7
        ;   XREF to: 0049b101 (CONDITIONAL_JUMP)  ; LAB_0049b101
    XOR EDX,EDX                         ; 0049b0f9
    MOV dword ptr [0x01c78ac4],EDX      ; 0049b0fb | DAT_01c78ac4
    MOV ECX,dword ptr [EBX + 0x388]     ; 0049b101
        ;   Label: LAB_0049b101
    XOR ESI,ESI                         ; 0049b107
    TEST ECX,ECX                        ; 0049b109
    JLE 0x0049b188                      ; 0049b10b
        ;   XREF to: 0049b188 (CONDITIONAL_JUMP)  ; LAB_0049b188
    LEA EAX,[EBX + 0x38c]               ; 0049b111
    LEA EDI,[EBX + 0x88c]               ; 0049b117
    MOV dword ptr [ESP + 0x10],EAX      ; 0049b11d
    MOV dword ptr [ESP + 0x8],EDI       ; 0049b121
    ADD EAX,0x100                       ; 0049b125
    LEA EDI,[EBX + 0x8a0]               ; 0049b12a
    MOV dword ptr [ESP + 0xc],EAX       ; 0049b130
    MOV dword ptr [ESP + 0x4],EDI       ; 0049b134
    MOV EDI,EBX                         ; 0049b138
    FLD float ptr [EBX + 0x264]         ; 0049b13a
        ;   Label: LAB_0049b13a
    LEA EAX,[ESI*0x4 + 0x0]             ; 0049b140
    FSUBR float ptr [EDI + 0x8a0]       ; 0049b147
    MOV dword ptr [ESP + 0x14],EAX      ; 0049b14d
    FST float ptr [EDI + 0x8a0]         ; 0049b151
    FLDZ                                ; 0049b157
    FCOMPP                              ; 0049b159
    FNSTSW AX                           ; 0049b15b
    SAHF                                ; 0049b15d
    JNC 0x0049b19e                      ; 0049b15e
        ;   XREF to: 0049b19e (CONDITIONAL_JUMP)  ; LAB_0049b19e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049b160
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049b164
    INC ESI                             ; 0049b168
    ADD EDI,0x4                         ; 0049b169
    ADD EDX,0x100                       ; 0049b16c
    ADD ECX,0x100                       ; 0049b172
    MOV dword ptr [ESP + 0x10],EDX      ; 0049b178
    MOV dword ptr [ESP + 0xc],ECX       ; 0049b17c
    CMP ESI,dword ptr [EBX + 0x388]     ; 0049b180
    JL 0x0049b13a                       ; 0049b186
        ;   XREF to: 0049b13a (CONDITIONAL_JUMP)  ; LAB_0049b13a
    MOV ESP,EBP                         ; 0049b188
        ;   Label: LAB_0049b188
    POP EBP                             ; 0049b18a
    POP EDI                             ; 0049b18b
    POP ESI                             ; 0049b18c
    POP EBX                             ; 0049b18d
    RET                                 ; 0049b18e
    MOV dword ptr [EBX + 0x384],0x0     ; 0049b18f
        ;   Label: LAB_0049b18f
    JMP 0x0049b0de                      ; 0049b199
        ;   XREF to: 0049b0de (UNCONDITIONAL_JUMP)  ; LAB_0049b0de
    MOV EAX,dword ptr [EBX + 0x388]     ; 0049b19e
        ;   Label: LAB_0049b19e
    DEC EAX                             ; 0049b1a4
    MOV dword ptr [EBX + 0x388],EAX     ; 0049b1a5
    SUB EAX,ESI                         ; 0049b1ab
    SHL EAX,0x8                         ; 0049b1ad
    PUSH EAX                            ; 0049b1b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049b1b1
    PUSH EDX                            ; 0049b1b5
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049b1b6
    PUSH ECX                            ; 0049b1ba
    CALL FUN_00566170                   ; 0049b1bb
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    MOV EAX,dword ptr [EBX + 0x388]     ; 0049b1c0
    SUB EAX,ESI                         ; 0049b1c6
    ADD ESP,0xc                         ; 0049b1c8
    SHL EAX,0x2                         ; 0049b1cb
    PUSH EAX                            ; 0049b1ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049b1cf
    ADD EAX,0x4                         ; 0049b1d3
    MOV dword ptr [ESP + 0x4],EAX       ; 0049b1d6
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049b1da
    ADD EAX,dword ptr [ESP + 0x4]       ; 0049b1de
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049b1e2
    PUSH EAX                            ; 0049b1e6
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049b1e7
    ADD EAX,ECX                         ; 0049b1eb
    PUSH EAX                            ; 0049b1ed
    CALL FUN_00566170                   ; 0049b1ee
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    MOV EAX,dword ptr [EBX + 0x388]     ; 0049b1f3
    SUB EAX,ESI                         ; 0049b1f9
    ADD ESP,0xc                         ; 0049b1fb
    SHL EAX,0x2                         ; 0049b1fe
    MOV EDX,dword ptr [ESP]             ; 0049b201
    PUSH EAX                            ; 0049b204
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049b205
    ADD EAX,EDX                         ; 0049b209
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049b20b
    PUSH EAX                            ; 0049b20f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049b210
    ADD EAX,ECX                         ; 0049b214
    PUSH EAX                            ; 0049b216
    CALL FUN_00566170                   ; 0049b217
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    ADD ESP,0xc                         ; 0049b21c
    CMP ESI,dword ptr [EBX + 0x388]     ; 0049b21f
    JL 0x0049b13a                       ; 0049b225
        ;   XREF to: 0049b13a (CONDITIONAL_JUMP)  ; LAB_0049b13a
    MOV ESP,EBP                         ; 0049b22b
    POP EBP                             ; 0049b22d
    POP EDI                             ; 0049b22e
    POP ESI                             ; 0049b22f
    POP EBX                             ; 0049b230
    RET                                 ; 0049b231

