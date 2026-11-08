; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477160(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005380c0 at 0053812a
;
; Referenced Globals:
;   undefined4 DAT_005d1d43
;   undefined4 DAT_005d1d4b
;
; Called Functions:
;   FUN_00449280
;   FUN_00449530
;   FUN_00477550
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477160
        ;   Label: FUN_00477160
    PUSH ESI                            ; 00477161
    PUSH EDI                            ; 00477162
    PUSH EBP                            ; 00477163
    MOV EBP,ESP                         ; 00477164
    SUB ESP,0xac                        ; 00477166
    AND ESP,0xfffffff8                  ; 0047716c
    MOV EBX,dword ptr [EBP + 0x24]      ; 0047716f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00477172
    PUSH EDX                            ; 00477175
    LEA EAX,[ESP + 0x10]                ; 00477176
    PUSH EAX                            ; 0047717a
    LEA EDI,[ESP + 0x6c]                ; 0047717b
    LEA ESI,[ESP + 0x48]                ; 0047717f
    CALL FUN_00449280                   ; 00477183
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    FLD float ptr [EBX]                 ; 00477188
    ADD ESP,0x8                         ; 0047718a
    FLD float ptr [EBX + 0x4]           ; 0047718d
    MOV EAX,dword ptr [EBP + 0x20]      ; 00477190
    FLD float ptr [EBX + 0x8]           ; 00477193
    FXCH ST2                            ; 00477196
    FSUB float ptr [EAX]                ; 00477198
    FXCH                                ; 0047719a
    FSUB float ptr [EAX + 0x4]          ; 0047719c
    FXCH ST2                            ; 0047719f
    FSUB float ptr [EAX + 0x8]          ; 004771a1
    FXCH                                ; 004771a4
    FSTP float ptr [ESP + 0x40]         ; 004771a6
    FXCH                                ; 004771aa
    FSTP float ptr [ESP + 0x44]         ; 004771ac
    FSTP float ptr [ESP + 0x48]         ; 004771b0
    MOVSD ES:EDI,ESI                    ; 004771b4
    MOVSD ES:EDI,ESI                    ; 004771b5
    MOVSD ES:EDI,ESI                    ; 004771b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004771b7
    FLD float ptr [ESP + 0x64]          ; 004771ba
    FDIV float ptr [EAX + 0x34]         ; 004771be
    FLD float ptr [ESP + 0x68]          ; 004771c1
    FDIV float ptr [EAX + 0x38]         ; 004771c5
    FLD float ptr [ESP + 0x6c]          ; 004771c8
    FDIV float ptr [EAX + 0x3c]         ; 004771cc
    FXCH ST2                            ; 004771cf
    FLD double ptr [0x005d1d43]         ; 004771d1 | DAT_005d1d43
    FXCH                                ; 004771d7
    FMUL ST1                            ; 004771d9
    FLD1                                ; 004771db
    FADDP                               ; 004771dd
    CALL FUN_005b7ff0                   ; 004771df
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 004771e4
    MOV EAX,dword ptr [ESP + 0x94]      ; 004771eb
    MOV dword ptr [ESP + 0xa8],EAX      ; 004771f2
    FILD dword ptr [ESP + 0xa8]         ; 004771f9
    FDIVR float ptr [ESP + 0x64]        ; 00477200
    FXCH ST2                            ; 00477204
    FMUL ST1                            ; 00477206
    FLD1                                ; 00477208
    FADDP                               ; 0047720a
    CALL FUN_005b7ff0                   ; 0047720c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x98]        ; 00477211
    MOV EAX,dword ptr [ESP + 0x98]      ; 00477218
    MOV dword ptr [ESP + 0xa8],EAX      ; 0047721f
    FILD dword ptr [ESP + 0xa8]         ; 00477226
    FDIVR float ptr [ESP + 0x68]        ; 0047722d
    FXCH ST3                            ; 00477231
    FMULP                               ; 00477233
    FLD1                                ; 00477235
    FADDP                               ; 00477237
    CALL FUN_005b7ff0                   ; 00477239
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa0]        ; 0047723e
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00477245
    MOV dword ptr [ESP + 0xa8],EAX      ; 0047724c
    FILD dword ptr [ESP + 0xa8]         ; 00477253
    FDIVR float ptr [ESP + 0x6c]        ; 0047725a
    XOR ECX,ECX                         ; 0047725e
    MOV dword ptr [ESP + 0x9c],ECX      ; 00477260
    MOV EBX,dword ptr [ESP + 0x94]      ; 00477267
    FXCH                                ; 0047726e
    FSTP float ptr [ESP]                ; 00477270
    FXCH                                ; 00477273
    FSTP float ptr [ESP + 0x4]          ; 00477275
    FSTP float ptr [ESP + 0x8]          ; 00477279
    TEST EBX,EBX                        ; 0047727d
    JLE 0x00477424                      ; 0047727f
        ;   XREF to: 00477424 (CONDITIONAL_JUMP)  ; LAB_00477424
    XOR EAX,EAX                         ; 00477285
        ;   Label: LAB_00477285
    MOV EDX,dword ptr [ESP + 0x98]      ; 00477287
    MOV dword ptr [ESP + 0xa4],EAX      ; 0047728e
    TEST EDX,EDX                        ; 00477295
    JLE 0x00477406                      ; 00477297
        ;   XREF to: 00477406 (CONDITIONAL_JUMP)  ; LAB_00477406
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0047729d
        ;   Label: LAB_0047729d
    XOR EBX,EBX                         ; 004772a4
    TEST ESI,ESI                        ; 004772a6
    JLE 0x004773e8                      ; 004772a8
        ;   XREF to: 004773e8 (CONDITIONAL_JUMP)  ; LAB_004773e8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004772ae
        ;   Label: LAB_004772ae
    MOV dword ptr [ESP + 0xa8],EAX      ; 004772b5
    FLD float ptr [ESP]                 ; 004772bc
    FILD dword ptr [ESP + 0xa8]         ; 004772bf
    FMUL ST1                            ; 004772c6
    MOV EAX,dword ptr [EBP + 0x20]      ; 004772c8
    FADD float ptr [EAX]                ; 004772cb
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004772cd
    MOV dword ptr [ESP + 0xa8],EAX      ; 004772d4
    FXCH                                ; 004772db
    FLD double ptr [0x005d1d4b]         ; 004772dd | DAT_005d1d4b
    FXCH                                ; 004772e3
    FMUL ST1                            ; 004772e5
    FLD float ptr [ESP + 0x4]           ; 004772e7
    FILD dword ptr [ESP + 0xa8]         ; 004772eb
    FMUL ST1                            ; 004772f2
    FXCH ST2                            ; 004772f4
    FADDP ST4,ST0                       ; 004772f6
    MOV EAX,dword ptr [EBP + 0x20]      ; 004772f8
    FXCH ST3                            ; 004772fb
    FSTP float ptr [ESP + 0x34]         ; 004772fd
    FADD float ptr [EAX + 0x4]          ; 00477301
    MOV dword ptr [ESP + 0xa8],EBX      ; 00477304
    FXCH ST2                            ; 0047730b
    FMUL ST1                            ; 0047730d
    FILD dword ptr [ESP + 0xa8]         ; 0047730f
    FXCH                                ; 00477316
    FADDP ST3,ST0                       ; 00477318
    FLD float ptr [ESP + 0x8]           ; 0047731a
    FXCH                                ; 0047731e
    FMUL ST1                            ; 00477320
    FXCH ST3                            ; 00477322
    FSTP float ptr [ESP + 0x38]         ; 00477324
    FXCH ST2                            ; 00477328
    FADD float ptr [EAX + 0x8]          ; 0047732a
    FXCH ST2                            ; 0047732d
    FMULP                               ; 0047732f
    LEA ESI,[ESP + 0x58]                ; 00477331
    LEA EAX,[ESP + 0x34]                ; 00477335
    LEA EDI,[ESP + 0x7c]                ; 00477339
    PUSH EAX                            ; 0047733d
    LEA EAX,[ESP + 0x10]                ; 0047733e
    FADDP                               ; 00477342
    PUSH EAX                            ; 00477344
    FSTP float ptr [ESP + 0x44]         ; 00477345
    CALL FUN_00449530                   ; 00477349
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x60]                ; 0047734e
    ADD ESP,0x8                         ; 00477352
    MOVSD ES:EDI,ESI                    ; 00477355
    MOVSD ES:EDI,ESI                    ; 00477356
    MOVSD ES:EDI,ESI                    ; 00477357
    MOV EAX,dword ptr [EBP + 0x18]      ; 00477358
    FLD float ptr [ESP + 0x7c]          ; 0047735b
    FLD float ptr [ESP + 0x80]          ; 0047735f
    FLD float ptr [ESP + 0x84]          ; 00477366
    LEA EDI,[ESP + 0x4c]                ; 0047736d
    LEA ESI,[ESP + 0x70]                ; 00477371
    FXCH ST2                            ; 00477375
    FADD float ptr [EAX]                ; 00477377
    FXCH                                ; 00477379
    FADD float ptr [EAX + 0x4]          ; 0047737b
    FXCH ST2                            ; 0047737e
    FADD float ptr [EAX + 0x8]          ; 00477380
    FXCH                                ; 00477383
    FSTP float ptr [ESP + 0x70]         ; 00477385
    FXCH                                ; 00477389
    FSTP float ptr [ESP + 0x74]         ; 0047738b
    FSTP float ptr [ESP + 0x78]         ; 0047738f
    MOVSD ES:EDI,ESI                    ; 00477393
    MOVSD ES:EDI,ESI                    ; 00477394
    MOVSD ES:EDI,ESI                    ; 00477395
    LEA EAX,[ESP + 0x4c]                ; 00477396
    LEA ESI,[ESP + 0x88]                ; 0047739a
    CMP ESI,EAX                         ; 004773a1
    JZ 0x004773c6                       ; 004773a3
        ;   XREF to: 004773c6 (CONDITIONAL_JUMP)  ; LAB_004773c6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004773a5
    MOV dword ptr [ESP + 0x88],EAX      ; 004773a9
    MOV EAX,dword ptr [ESP + 0x50]      ; 004773b0
    MOV dword ptr [ESP + 0x8c],EAX      ; 004773b4
    MOV EAX,dword ptr [ESP + 0x54]      ; 004773bb
    MOV dword ptr [ESP + 0x90],EAX      ; 004773bf
    LEA EAX,[ESP + 0x88]                ; 004773c6
        ;   Label: LAB_004773c6
    PUSH EAX                            ; 004773cd
    MOV EDI,dword ptr [EBP + 0x14]      ; 004773ce
    PUSH EDI                            ; 004773d1
    CALL FUN_00477550                   ; 004773d2
        ;   XREF to: 00477550 (UNCONDITIONAL_CALL)  ; undefined FUN_00477550()
    ADD ESP,0x8                         ; 004773d7
    INC EBX                             ; 004773da
    CMP EBX,dword ptr [ESP + 0xa0]      ; 004773db
    JL 0x004772ae                       ; 004773e2
        ;   XREF to: 004772ae (CONDITIONAL_JUMP)  ; LAB_004772ae
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004773e8
        ;   Label: LAB_004773e8
    INC ECX                             ; 004773ef
    MOV EBX,dword ptr [ESP + 0x98]      ; 004773f0
    MOV dword ptr [ESP + 0xa4],ECX      ; 004773f7
    CMP ECX,EBX                         ; 004773fe
    JL 0x0047729d                       ; 00477400
        ;   XREF to: 0047729d (CONDITIONAL_JUMP)  ; LAB_0047729d
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00477406
        ;   Label: LAB_00477406
    INC ESI                             ; 0047740d
    MOV EDI,dword ptr [ESP + 0x94]      ; 0047740e
    MOV dword ptr [ESP + 0x9c],ESI      ; 00477415
    CMP ESI,EDI                         ; 0047741c
    JL 0x00477285                       ; 0047741e
        ;   XREF to: 00477285 (CONDITIONAL_JUMP)  ; LAB_00477285
    MOV ESP,EBP                         ; 00477424
        ;   Label: LAB_00477424
    POP EBP                             ; 00477426
    POP EDI                             ; 00477427
    POP ESI                             ; 00477428
    POP EBX                             ; 00477429
    RET                                 ; 0047742a

