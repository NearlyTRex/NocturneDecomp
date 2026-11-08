; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c00d0(LPCSTR param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_005ba358
;   FUN_005c036c
;   FUN_005c4030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c00d0
        ;   Label: FUN_005c00d0
    PUSH ESI                            ; 005c00d1
    PUSH EDI                            ; 005c00d2
    SUB ESP,0x48                        ; 005c00d3
    MOV EDI,dword ptr [ESP + 0x5c]      ; 005c00d6
    PUSH 0x0                            ; 005c00da
    PUSH 0x0                            ; 005c00dc
    PUSH 0x3                            ; 005c00de
    PUSH 0x0                            ; 005c00e0
    PUSH 0x0                            ; 005c00e2
    PUSH 0xc0000000                     ; 005c00e4
    MOV EDX,dword ptr [ESP + 0x70]      ; 005c00e9
    PUSH EDX                            ; 005c00ed
    CALL dword ptr CS:[0x5c8518]        ; 005c00ee
    MOV EBX,EAX                         ; 005c00f5
    MOV ESI,EAX                         ; 005c00f7
    CMP EAX,-0x1                        ; 005c00f9
    JNZ 0x005c0108                      ; 005c00fc
        ;   XREF to: 005c0108 (CONDITIONAL_JUMP)  ; LAB_005c0108
    CALL FUN_005c036c                   ; 005c00fe
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined FUN_005c036c()
    JMP 0x005c023f                      ; 005c0103
        ;   XREF to: 005c023f (UNCONDITIONAL_JUMP)  ; LAB_005c023f
    LEA EAX,[ESP + 0x20]                ; 005c0108
        ;   Label: LAB_005c0108
    PUSH EAX                            ; 005c010c
    LEA EAX,[ESP + 0x44]                ; 005c010d
    PUSH EAX                            ; 005c0111
    LEA EAX,[ESP + 0x38]                ; 005c0112
    PUSH EAX                            ; 005c0116
    PUSH EBX                            ; 005c0117
    CALL dword ptr CS:[0x5c8594]        ; 005c0118
    TEST EAX,EAX                        ; 005c011f
    JNZ 0x005c0137                      ; 005c0121
        ;   XREF to: 005c0137 (CONDITIONAL_JUMP)  ; LAB_005c0137
    PUSH EBX                            ; 005c0123
    CALL dword ptr CS:[0x5c850c]        ; 005c0124
    CALL FUN_005c036c                   ; 005c012b
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined FUN_005c036c()
    ADD ESP,0x48                        ; 005c0130
    POP EDI                             ; 005c0133
    POP ESI                             ; 005c0134
    POP EBX                             ; 005c0135
    RET                                 ; 005c0136
    TEST EDI,EDI                        ; 005c0137
        ;   Label: LAB_005c0137
    JNZ 0x005c0150                      ; 005c0139
        ;   XREF to: 005c0150 (CONDITIONAL_JUMP)  ; LAB_005c0150
    PUSH EDI                            ; 005c013b
    CALL FUN_005c4030                   ; 005c013c
        ;   XREF to: 005c4030 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4030()
    ADD ESP,0x4                         ; 005c0141
    LEA EDI,[ESP + 0x38]                ; 005c0144
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c0148
    MOV dword ptr [ESP + 0x38],EAX      ; 005c014c
    LEA EAX,[EDI + 0x4]                 ; 005c0150
        ;   Label: LAB_005c0150
    PUSH EAX                            ; 005c0153
    CALL FUN_005ba358                   ; 005c0154
        ;   XREF to: 005ba358 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba358()
    MOV EDX,EAX                         ; 005c0159
    MOV AX,word ptr [EAX + 0x14]        ; 005c015b
    ADD ESP,0x4                         ; 005c015f
    ADD EAX,0x76c                       ; 005c0162
    MOV word ptr [ESP + 0x10],AX        ; 005c0167
    MOV word ptr [ESP],AX               ; 005c016c
    MOV AX,word ptr [EDX + 0x10]        ; 005c0170
    INC EAX                             ; 005c0174
    MOV word ptr [ESP + 0x12],AX        ; 005c0175
    MOV word ptr [ESP + 0x2],AX         ; 005c017a
    MOV AX,word ptr [EDX + 0xc]         ; 005c017f
    MOV word ptr [ESP + 0x16],AX        ; 005c0183
    MOV word ptr [ESP + 0x6],AX         ; 005c0188
    MOV AX,word ptr [EDX + 0x8]         ; 005c018d
    MOV word ptr [ESP + 0x18],AX        ; 005c0191
    MOV word ptr [ESP + 0x8],AX         ; 005c0196
    MOV AX,word ptr [EDX + 0x4]         ; 005c019b
    MOV word ptr [ESP + 0x1a],AX        ; 005c019f
    MOV word ptr [ESP + 0xa],AX         ; 005c01a4
    MOV AX,word ptr [EDX]               ; 005c01a9
    MOV word ptr [ESP + 0x1c],AX        ; 005c01ac
    MOV word ptr [ESP + 0xc],AX         ; 005c01b1
    LEA EAX,[ESP + 0x28]                ; 005c01b6
    PUSH EAX                            ; 005c01ba
    LEA EAX,[ESP + 0x4]                 ; 005c01bb
    XOR EDX,EDX                         ; 005c01bf
    PUSH EAX                            ; 005c01c1
    MOV word ptr [ESP + 0x26],DX        ; 005c01c2
    MOV word ptr [ESP + 0x16],DX        ; 005c01c7
    CALL dword ptr CS:[0x5c8648]        ; 005c01cc
    LEA EAX,[ESP + 0x20]                ; 005c01d3
    PUSH EAX                            ; 005c01d7
    LEA EAX,[ESP + 0x2c]                ; 005c01d8
    PUSH EAX                            ; 005c01dc
    CALL dword ptr CS:[0x5c85e8]        ; 005c01dd
    LEA EAX,[ESP + 0x28]                ; 005c01e4
    PUSH EAX                            ; 005c01e8
    LEA EAX,[ESP + 0x14]                ; 005c01e9
    PUSH EAX                            ; 005c01ed
    CALL dword ptr CS:[0x5c8648]        ; 005c01ee
    LEA EAX,[ESP + 0x40]                ; 005c01f5
    PUSH EAX                            ; 005c01f9
    LEA EAX,[ESP + 0x2c]                ; 005c01fa
    PUSH EAX                            ; 005c01fe
    CALL dword ptr CS:[0x5c85e8]        ; 005c01ff
    LEA EAX,[ESP + 0x20]                ; 005c0206
    PUSH EAX                            ; 005c020a
    LEA EAX,[ESP + 0x44]                ; 005c020b
    PUSH EAX                            ; 005c020f
    LEA EAX,[ESP + 0x38]                ; 005c0210
    PUSH EAX                            ; 005c0214
    PUSH ESI                            ; 005c0215
    CALL dword ptr CS:[0x5c8630]        ; 005c0216
    TEST EAX,EAX                        ; 005c021d
    JNZ 0x005c0235                      ; 005c021f
        ;   XREF to: 005c0235 (CONDITIONAL_JUMP)  ; LAB_005c0235
    PUSH ESI                            ; 005c0221
    CALL dword ptr CS:[0x5c850c]        ; 005c0222
    CALL FUN_005c036c                   ; 005c0229
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined FUN_005c036c()
    ADD ESP,0x48                        ; 005c022e
    POP EDI                             ; 005c0231
    POP ESI                             ; 005c0232
    POP EBX                             ; 005c0233
    RET                                 ; 005c0234
    PUSH ESI                            ; 005c0235
        ;   Label: LAB_005c0235
    CALL dword ptr CS:[0x5c850c]        ; 005c0236
    XOR EAX,EAX                         ; 005c023d
    ADD ESP,0x48                        ; 005c023f
        ;   Label: LAB_005c023f
    POP EDI                             ; 005c0242
    POP ESI                             ; 005c0243
    POP EBX                             ; 005c0244
    RET                                 ; 005c0245

