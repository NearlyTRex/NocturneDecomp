; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042e060(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
;
; XREF[1]:
;   FUN_0042e4f0 at 0042e50e
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;
; Called Functions:
;   FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e060
        ;   Label: FUN_0042e060
    PUSH ESI                            ; 0042e061
    PUSH EDI                            ; 0042e062
    PUSH EBP                            ; 0042e063
    SUB ESP,0x28                        ; 0042e064
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0042e067
    MOV EDX,dword ptr [0x01bd2fa0]      ; 0042e06b | DAT_01bd2fa0
    MOV EAX,[0x01bd2fa4]                ; 0042e071 | DAT_01bd2fa4
    SUB EAX,EDX                         ; 0042e076
    MOV dword ptr [ESP + 0xc],EAX       ; 0042e078
    TEST EDI,EDI                        ; 0042e07c
    JNZ 0x0042e088                      ; 0042e07e
        ;   XREF to: 0042e088 (CONDITIONAL_JUMP)  ; LAB_0042e088
    ADD ESP,0x28                        ; 0042e080
        ;   Label: LAB_0042e080
    POP EBP                             ; 0042e083
    POP EDI                             ; 0042e084
    POP ESI                             ; 0042e085
    POP EBX                             ; 0042e086
    RET                                 ; 0042e087
    CALL FUN_0042d130                   ; 0042e088
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d130()
        ;   Label: LAB_0042e088
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042e08d
    MOV ESI,dword ptr [ESP + 0x48]      ; 0042e091
    MOV EBX,EDX                         ; 0042e095
    MOV ECX,dword ptr [0x005b7624]      ; 0042e097 | DAT_005b7624
    SHL EBX,0x5                         ; 0042e09d
    MOV EBP,EAX                         ; 0042e0a0
    ADD EBX,EDX                         ; 0042e0a2
    SHL ESI,0x2                         ; 0042e0a4
    SHL EBX,0x2                         ; 0042e0a7
    CMP ECX,0x8                         ; 0042e0aa
    JNZ 0x0042e159                      ; 0042e0ad
        ;   XREF to: 0042e159 (CONDITIONAL_JUMP)  ; LAB_0042e159
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042e0b3
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 0042e0b7 | DAT_01bd2fa0
    ADD EDX,EAX                         ; 0042e0bd
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042e0bf
    MOV dword ptr [ESP + 0x20],EDX      ; 0042e0c3
    TEST EAX,EAX                        ; 0042e0c7
    JLE 0x0042e080                      ; 0042e0c9
        ;   XREF to: 0042e080 (CONDITIONAL_JUMP)  ; LAB_0042e080
    XOR ECX,ECX                         ; 0042e0cb
    MOV dword ptr [ESP + 0x8],EBX       ; 0042e0cd
    MOV dword ptr [ESP + 0x10],ECX      ; 0042e0d1
    CMP dword ptr [ESP + 0x40],0x0      ; 0042e0d5
        ;   Label: LAB_0042e0d5
    JZ 0x0042e147                       ; 0042e0da
        ;   XREF to: 0042e147 (CONDITIONAL_JUMP)  ; LAB_0042e147
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042e0dc
    XOR ESI,ESI                         ; 0042e0e0
    XOR EBX,EBX                         ; 0042e0e2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042e0e4
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042e0e8
        ;   Label: LAB_0042e0e8
    ADD EAX,dword ptr [ESP + 0x1c]      ; 0042e0ec
    CMP EBX,dword ptr [EAX]             ; 0042e0f0
    JGE 0x0042e117                      ; 0042e0f2
        ;   XREF to: 0042e117 (CONDITIONAL_JUMP)  ; LAB_0042e117
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0042e0f4
    PUSH EDX                            ; 0042e0f8
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042e0f9
    ADD EDX,EDI                         ; 0042e0fd
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042e0ff
    PUSH EDX                            ; 0042e103
    MOV EDX,dword ptr [ESP + 0x28]      ; 0042e104
    LEA EAX,[EDX + ECX*0x1]             ; 0042e108
    PUSH EAX                            ; 0042e10b
    ADD ESI,0x4                         ; 0042e10c
    INC EBX                             ; 0042e10f
    CALL EBP                            ; 0042e110
    ADD ESP,0xc                         ; 0042e112
    JMP 0x0042e0e8                      ; 0042e115
        ;   XREF to: 0042e0e8 (UNCONDITIONAL_JUMP)  ; LAB_0042e0e8
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042e117
        ;   Label: LAB_0042e117
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042e11b
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042e11f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042e123
    ADD EBX,0x84                        ; 0042e127
    ADD ESI,EAX                         ; 0042e12d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042e12f
    MOV dword ptr [ESP + 0x10],EBX      ; 0042e133
    MOV dword ptr [ESP + 0x20],ESI      ; 0042e137
    ADD EDI,EAX                         ; 0042e13b
    CMP EBX,EDX                         ; 0042e13d
    JGE 0x0042e080                      ; 0042e13f
        ;   XREF to: 0042e080 (CONDITIONAL_JUMP)  ; LAB_0042e080
    JMP 0x0042e0d5                      ; 0042e145
        ;   XREF to: 0042e0d5 (UNCONDITIONAL_JUMP)  ; LAB_0042e0d5
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0042e147
        ;   Label: LAB_0042e147
    PUSH ESI                            ; 0042e14b
    PUSH EDI                            ; 0042e14c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042e14d
    PUSH EAX                            ; 0042e151
    CALL EBP                            ; 0042e152
    ADD ESP,0xc                         ; 0042e154
    JMP 0x0042e117                      ; 0042e157
        ;   XREF to: 0042e117 (UNCONDITIONAL_JUMP)  ; LAB_0042e117
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042e159
        ;   Label: LAB_0042e159
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 0042e15d | DAT_01bd2fa0
    ADD EDX,EDX                         ; 0042e163
    ADD EAX,EDX                         ; 0042e165
    MOV dword ptr [ESP + 0x24],EAX      ; 0042e167
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042e16b
    MOV EDX,EAX                         ; 0042e16f
    SAR EDX,0x1f                        ; 0042e171
    SUB EAX,EDX                         ; 0042e174
    SAR EAX,0x1                         ; 0042e176
    MOV ESI,dword ptr [ESP + 0x50]      ; 0042e178
    MOV dword ptr [ESP + 0xc],EAX       ; 0042e17c
    TEST ESI,ESI                        ; 0042e180
    JLE 0x0042e080                      ; 0042e182
        ;   XREF to: 0042e080 (CONDITIONAL_JUMP)  ; LAB_0042e080
    ADD EAX,EAX                         ; 0042e188
    MOV dword ptr [ESP],EAX             ; 0042e18a
    XOR EAX,EAX                         ; 0042e18d
    MOV dword ptr [ESP + 0x4],EBX       ; 0042e18f
    MOV dword ptr [ESP + 0x14],EAX      ; 0042e193
    CMP dword ptr [ESP + 0x40],0x0      ; 0042e197
        ;   Label: LAB_0042e197
    JZ 0x0042e209                       ; 0042e19c
        ;   XREF to: 0042e209 (CONDITIONAL_JUMP)  ; LAB_0042e209
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042e19e
    XOR ESI,ESI                         ; 0042e1a2
    XOR EBX,EBX                         ; 0042e1a4
    MOV dword ptr [ESP + 0x18],EAX      ; 0042e1a6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042e1aa
        ;   Label: LAB_0042e1aa
    ADD EAX,dword ptr [ESP + 0x18]      ; 0042e1ae
    CMP EBX,dword ptr [EAX]             ; 0042e1b2
    JGE 0x0042e1da                      ; 0042e1b4
        ;   XREF to: 0042e1da (CONDITIONAL_JUMP)  ; LAB_0042e1da
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0042e1b6
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042e1ba
    PUSH EDX                            ; 0042e1be
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042e1bf
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042e1c3
    ADD EDX,EDI                         ; 0042e1c7
    ADD EAX,EAX                         ; 0042e1c9
    PUSH EDX                            ; 0042e1cb
    ADD EAX,ECX                         ; 0042e1cc
    PUSH EAX                            ; 0042e1ce
    ADD ESI,0x4                         ; 0042e1cf
    INC EBX                             ; 0042e1d2
    CALL EBP                            ; 0042e1d3
    ADD ESP,0xc                         ; 0042e1d5
    JMP 0x0042e1aa                      ; 0042e1d8
        ;   XREF to: 0042e1aa (UNCONDITIONAL_JUMP)  ; LAB_0042e1aa
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042e1da
        ;   Label: LAB_0042e1da
    MOV EAX,dword ptr [ESP]             ; 0042e1de
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042e1e1
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0042e1e5
    MOV ESI,dword ptr [ESP + 0x4]       ; 0042e1e9
    ADD EDX,0x84                        ; 0042e1ed
    ADD ECX,EAX                         ; 0042e1f3
    ADD EDI,EBX                         ; 0042e1f5
    MOV dword ptr [ESP + 0x14],EDX      ; 0042e1f7
    MOV dword ptr [ESP + 0x24],ECX      ; 0042e1fb
    CMP EDX,ESI                         ; 0042e1ff
    JGE 0x0042e080                      ; 0042e201
        ;   XREF to: 0042e080 (CONDITIONAL_JUMP)  ; LAB_0042e080
    JMP 0x0042e197                      ; 0042e207
        ;   XREF to: 0042e197 (UNCONDITIONAL_JUMP)  ; LAB_0042e197
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0042e209
        ;   Label: LAB_0042e209
    PUSH ECX                            ; 0042e20d
    PUSH EDI                            ; 0042e20e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042e20f
    PUSH EBX                            ; 0042e213
    CALL EBP                            ; 0042e214
    ADD ESP,0xc                         ; 0042e216
    JMP 0x0042e1da                      ; 0042e219
        ;   XREF to: 0042e1da (UNCONDITIONAL_JUMP)  ; LAB_0042e1da

