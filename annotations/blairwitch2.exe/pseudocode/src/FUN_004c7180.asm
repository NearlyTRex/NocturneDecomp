; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c7180(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d9422
;   undefined4 DAT_005d942a
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141c8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c37770
;
; Called Functions:
;   FUN_00409830
;   FUN_0046ca00
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7180
        ;   Label: FUN_004c7180
    PUSH ESI                            ; 004c7181
    PUSH EDI                            ; 004c7182
    PUSH EBP                            ; 004c7183
    SUB ESP,0x14                        ; 004c7184
    MOV EBX,dword ptr [ESP + 0x28]      ; 004c7187
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004c718b
    PUSH ESI                            ; 004c718f
    PUSH EBX                            ; 004c7190
    CALL FUN_00409830                   ; 004c7191
        ;   XREF to: 00409830 (UNCONDITIONAL_CALL)  ; undefined FUN_00409830()
    MOV EDX,dword ptr [EBX + 0x344]     ; 004c7196
    ADD ESP,0x8                         ; 004c719c
    TEST EDX,EDX                        ; 004c719f
    JZ 0x004c729b                       ; 004c71a1
        ;   XREF to: 004c729b (CONDITIONAL_JUMP)  ; LAB_004c729b
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004c71a7
    JNZ 0x004c71bf                      ; 004c71ae
        ;   XREF to: 004c71bf (CONDITIONAL_JUMP)  ; LAB_004c71bf
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004c71b0
    ADD ESP,0x14                        ; 004c71b7
        ;   Label: LAB_004c71b7
    POP EBP                             ; 004c71ba
    POP EDI                             ; 004c71bb
    POP ESI                             ; 004c71bc
    POP EBX                             ; 004c71bd
    RET                                 ; 004c71be
    FLD float ptr [ESI + 0x30]          ; 004c71bf
        ;   Label: LAB_004c71bf
    FDIV float ptr [EBX + 0x2b8]        ; 004c71c2
    FLD float ptr [ESI + 0x2c]          ; 004c71c8
    FDIV float ptr [EBX + 0x2b4]        ; 004c71cb
    ADD EBX,0x4d0                       ; 004c71d1
    PUSH EBX                            ; 004c71d7
    FLD1                                ; 004c71d8
    FXCH                                ; 004c71da
    FADD double ptr [0x005d942a]        ; 004c71dc | DAT_005d942a
    MOV EBX,dword ptr [0x0060b280]      ; 004c71e2 | DAT_0060b280
    FSTP float ptr [ESP + 0x8]          ; 004c71e8
    FSUBRP                              ; 004c71ec
    PUSH EBX                            ; 004c71ee | DAT_01ba5c50
    FSTP float ptr [ESP + 0x10]         ; 004c71ef
    CALL FUN_0046ca00                   ; 004c71f3
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 004c71f8
    FILD dword ptr [0x006141c8]         ; 004c71fb | DAT_006141c8
    FLD float ptr [ESP + 0x4]           ; 004c7201
    FMUL ST1                            ; 004c7205
    FLD float ptr [ESP + 0x8]           ; 004c7207
    FMULP ST2                           ; 004c720b
    CALL FUN_005b7ff0                   ; 004c720d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 004c7212
    CALL FUN_005b7ff0                   ; 004c7214
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 004c7219
    FISTP dword ptr [ESP + 0xc]         ; 004c721b
    MOV EDI,dword ptr [ESP + 0xc]       ; 004c721f
    FISTP dword ptr [ESP + 0x10]        ; 004c7223
    TEST EDI,EDI                        ; 004c7227
    JL 0x004c728b                       ; 004c7229
        ;   XREF to: 004c728b (CONDITIONAL_JUMP)  ; LAB_004c728b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c722b
        ;   Label: LAB_004c722b
    MOV EDX,dword ptr [0x006141c8]      ; 004c722f | DAT_006141c8
    CMP EAX,EDX                         ; 004c7235
    JL 0x004c7240                       ; 004c7237
        ;   XREF to: 004c7240 (CONDITIONAL_JUMP)  ; LAB_004c7240
    LEA EAX,[EDX + -0x1]                ; 004c7239
    MOV dword ptr [ESP + 0xc],EAX       ; 004c723c
    CMP dword ptr [ESP + 0x10],0x0      ; 004c7240
        ;   Label: LAB_004c7240
    JL 0x004c7293                       ; 004c7245
        ;   XREF to: 004c7293 (CONDITIONAL_JUMP)  ; LAB_004c7293
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c7247
        ;   Label: LAB_004c7247
    MOV EDI,dword ptr [0x006141c8]      ; 004c724b | DAT_006141c8
    CMP EAX,EDI                         ; 004c7251
    JL 0x004c725c                       ; 004c7253
        ;   XREF to: 004c725c (CONDITIONAL_JUMP)  ; LAB_004c725c
    LEA EAX,[EDI + -0x1]                ; 004c7255
    MOV dword ptr [ESP + 0x10],EAX      ; 004c7258
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c725c
        ;   Label: LAB_004c725c
    IMUL EAX,dword ptr [0x006141c8]     ; 004c7260 | DAT_006141c8
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c7267
    ADD EBX,EAX                         ; 004c726b
    MOV EAX,[0x01c37770]                ; 004c726d | DAT_01c37770
    CMP byte ptr [EBX + EAX*0x1],0x0    ; 004c7272
    JNZ 0x004c71b7                      ; 004c7276
        ;   XREF to: 004c71b7 (CONDITIONAL_JUMP)  ; LAB_004c71b7
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004c727c
    ADD ESP,0x14                        ; 004c7283
    POP EBP                             ; 004c7286
    POP EDI                             ; 004c7287
    POP ESI                             ; 004c7288
    POP EBX                             ; 004c7289
    RET                                 ; 004c728a
    XOR EBP,EBP                         ; 004c728b
        ;   Label: LAB_004c728b
    MOV dword ptr [ESP + 0xc],EBP       ; 004c728d
    JMP 0x004c722b                      ; 004c7291
        ;   XREF to: 004c722b (UNCONDITIONAL_JUMP)  ; LAB_004c722b
    XOR EBX,EBX                         ; 004c7293
        ;   Label: LAB_004c7293
    MOV dword ptr [ESP + 0x10],EBX      ; 004c7295
    JMP 0x004c7247                      ; 004c7299
        ;   XREF to: 004c7247 (UNCONDITIONAL_JUMP)  ; LAB_004c7247
    FILD dword ptr [EBX + 0x2d8]        ; 004c729b
        ;   Label: LAB_004c729b
    FMUL double ptr [0x005d9422]        ; 004c72a1 | DAT_005d9422
    FLD1                                ; 004c72a7
    FSUBRP                              ; 004c72a9
    FSTP float ptr [ESI + 0x48]         ; 004c72ab
    ADD ESP,0x14                        ; 004c72ae
    POP EBP                             ; 004c72b1
    POP EDI                             ; 004c72b2
    POP ESI                             ; 004c72b3
    POP EBX                             ; 004c72b4
    RET                                 ; 004c72b5

