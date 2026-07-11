; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052d120(undefined4 param_1,char *param_2,float param_3,float param_4,float param_5,float *param_6)
;
; Local Variables:
; undefined8       Stack[-0x190]:8  local_190
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined        Stack[-0x170]:1  local_170
; undefined1       Stack[-0x16f]:1  local_16f
; undefined        Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
; undefined        Stack[-0xa8]:1  local_a8
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_0052ea40 at 0052ea54
;   FUN_0052ea60 at 0052ea7a
;   FUN_0052ea90 at 0052eaa8
;   FUN_0052eb00 at 0052eb32
;   FUN_0052eb50 at 0052eb7f
;
; Referenced Globals:
;   string s_[%d,%d]%n_00594a1a
;   string s_..\\core\\sound.cpp_00594a24
;   string s_Invalid_sfx_string:_%s_00594a36
;   undefined4 DAT_00594a4d
;   undefined4 DAT_00594a4f
;   undefined1 DAT_00594a51
;   undefined1 DAT_00594a52
;   undefined1 DAT_00594a53
;   undefined1 DAT_00594a54
;   string s_Can't_find_wav:_%s_00594a56
;   string s_@%f%n_00594a6a
;   string s_..\\core\\sound.cpp_00594a70
;   string s_Invalid_sfx_string:_%s_00594a82
;   string s_*%f%n_00594a99
;   string s_..\\core\\sound.cpp_00594a9f
;   ... and 13 more
;
; Called Functions:
;   FUN_0043ac60
;   FUN_004c8440
;   FUN_0050d1c0
;   FUN_00525f50
;   FUN_00525fc0
;   FUN_005260f0
;   FUN_00526120
;   FUN_00526150
;   FUN_00526240
;   FUN_00526340
;   FUN_005263c0
;   FUN_005265a0
;   FUN_00526ca0
;   FUN_0052d030
;   FUN_00563c90
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d120
        ;   Label: FUN_0052d120
    PUSH ESI                            ; 0052d121
    PUSH EDI                            ; 0052d122
    PUSH EBP                            ; 0052d123
    MOV EBP,ESP                         ; 0052d124
    SUB ESP,0x168                       ; 0052d126
    AND ESP,0xfffffff8                  ; 0052d12c
    CALL FUN_00526ca0                   ; 0052d12f
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00526ca0()
    TEST EAX,EAX                        ; 0052d134
    JNZ 0x0052d36f                      ; 0052d136
        ;   XREF to: 0052d36f (CONDITIONAL_JUMP)  ; LAB_0052d36f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052d13c
    TEST EDX,EDX                        ; 0052d13f
    JZ 0x0052d368                       ; 0052d141
        ;   XREF to: 0052d368 (CONDITIONAL_JUMP)  ; LAB_0052d368
    CMP byte ptr [EDX],0x0              ; 0052d147
    JZ 0x0052d368                       ; 0052d14a
        ;   XREF to: 0052d368 (CONDITIONAL_JUMP)  ; LAB_0052d368
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d150
    LEA ESI,[ESP + 0x8]                 ; 0052d153
    MOV DH,byte ptr [EAX]               ; 0052d157
    MOV dword ptr [ESP + 0x164],EAX     ; 0052d159
    TEST DH,DH                          ; 0052d160
    JZ 0x0052d181                       ; 0052d162
        ;   XREF to: 0052d181 (CONDITIONAL_JUMP)  ; LAB_0052d181
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d164
        ;   Label: LAB_0052d164
    MOV AL,byte ptr [EAX]               ; 0052d16b
    INC AL                              ; 0052d16d
    AND EAX,0xff                        ; 0052d16f
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0052d174 | DAT_005c168c
    JZ 0x0052d378                       ; 0052d17b
        ;   XREF to: 0052d378 (CONDITIONAL_JUMP)  ; LAB_0052d378
    MOV DL,0x2e                         ; 0052d181
        ;   Label: LAB_0052d181
    MOV byte ptr [ESI],0x0              ; 0052d183
    LEA ESI,[ESP + 0x8]                 ; 0052d186
    MOV AL,byte ptr [ESI]               ; 0052d18a
        ;   Label: LAB_0052d18a
    CMP AL,DL                           ; 0052d18c
    JZ 0x0052d1a2                       ; 0052d18e
        ;   XREF to: 0052d1a2 (CONDITIONAL_JUMP)  ; LAB_0052d1a2
    CMP AL,0x0                          ; 0052d190
    JZ 0x0052d1a0                       ; 0052d192
        ;   XREF to: 0052d1a0 (CONDITIONAL_JUMP)  ; LAB_0052d1a0
    INC ESI                             ; 0052d194
    MOV AL,byte ptr [ESI]               ; 0052d195
    CMP AL,DL                           ; 0052d197
    JZ 0x0052d1a2                       ; 0052d199
        ;   XREF to: 0052d1a2 (CONDITIONAL_JUMP)  ; LAB_0052d1a2
    INC ESI                             ; 0052d19b
    CMP AL,0x0                          ; 0052d19c
    JNZ 0x0052d18a                      ; 0052d19e
        ;   XREF to: 0052d18a (CONDITIONAL_JUMP)  ; LAB_0052d18a
    SUB ESI,ESI                         ; 0052d1a0
        ;   Label: LAB_0052d1a0
    TEST ESI,ESI                        ; 0052d1a2
        ;   Label: LAB_0052d1a2
    JNZ 0x0052d1d1                      ; 0052d1a4
        ;   XREF to: 0052d1d1 (CONDITIONAL_JUMP)  ; LAB_0052d1d1
    MOV ESI,0x594a51                    ; 0052d1a6 | DAT_00594a51
    LEA EDI,[ESP + 0x8]                 ; 0052d1ab
    PUSH EDI                            ; 0052d1af
    SUB ECX,ECX                         ; 0052d1b0
    DEC ECX                             ; 0052d1b2
    MOV AL,0x0                          ; 0052d1b3
    SCASB.REPNE ES:EDI                  ; 0052d1b5
    DEC EDI                             ; 0052d1b7
    MOV AL,byte ptr [ESI]               ; 0052d1b8 | DAT_00594a51 | DAT_00594a53
        ;   Label: LAB_0052d1b8
    MOV byte ptr [EDI],AL               ; 0052d1ba
    CMP AL,0x0                          ; 0052d1bc
    JZ 0x0052d1d0                       ; 0052d1be
        ;   XREF to: 0052d1d0 (CONDITIONAL_JUMP)  ; LAB_0052d1d0
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d1c0 | DAT_00594a52 | DAT_00594a54
    ADD ESI,0x2                         ; 0052d1c3
    MOV byte ptr [EDI + 0x1],AL         ; 0052d1c6
    ADD EDI,0x2                         ; 0052d1c9
    CMP AL,0x0                          ; 0052d1cc
    JNZ 0x0052d1b8                      ; 0052d1ce
        ;   XREF to: 0052d1b8 (CONDITIONAL_JUMP)  ; LAB_0052d1b8
    POP EDI                             ; 0052d1d0
        ;   Label: LAB_0052d1d0
    MOV ECX,0x19                        ; 0052d1d1
        ;   Label: LAB_0052d1d1
    LEA EDI,[ESP + 0xd0]                ; 0052d1d6
    MOV ESI,0x5bef20                    ; 0052d1dd | DAT_005bef20
    MOVSD.REP ES:EDI,ESI                ; 0052d1e2 | DAT_005bef20 | DAT_005bef24
    MOV DL,0x21                         ; 0052d1e4
    LEA ESI,[ESP + 0x8]                 ; 0052d1e6
    MOV AL,byte ptr [ESI]               ; 0052d1ea
        ;   Label: LAB_0052d1ea
    CMP AL,DL                           ; 0052d1ec
    JZ 0x0052d202                       ; 0052d1ee
        ;   XREF to: 0052d202 (CONDITIONAL_JUMP)  ; LAB_0052d202
    CMP AL,0x0                          ; 0052d1f0
    JZ 0x0052d200                       ; 0052d1f2
        ;   XREF to: 0052d200 (CONDITIONAL_JUMP)  ; LAB_0052d200
    INC ESI                             ; 0052d1f4
    MOV AL,byte ptr [ESI]               ; 0052d1f5
    CMP AL,DL                           ; 0052d1f7
    JZ 0x0052d202                       ; 0052d1f9
        ;   XREF to: 0052d202 (CONDITIONAL_JUMP)  ; LAB_0052d202
    INC ESI                             ; 0052d1fb
    CMP AL,0x0                          ; 0052d1fc
    JNZ 0x0052d1ea                      ; 0052d1fe
        ;   XREF to: 0052d1ea (CONDITIONAL_JUMP)  ; LAB_0052d1ea
    SUB ESI,ESI                         ; 0052d200
        ;   Label: LAB_0052d200
    TEST ESI,ESI                        ; 0052d202
        ;   Label: LAB_0052d202
    JZ 0x0052d53d                       ; 0052d204
        ;   XREF to: 0052d53d (CONDITIONAL_JUMP)  ; LAB_0052d53d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0052d20a
    MOV dword ptr [ESP + 0x134],EAX     ; 0052d20d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0052d214
    MOV dword ptr [ESP + 0x138],EAX     ; 0052d217
    MOV EAX,dword ptr [EBP + 0x24]      ; 0052d21e
    MOV EBX,dword ptr [EBP + 0x28]      ; 0052d221
    MOV dword ptr [ESP + 0x13c],EAX     ; 0052d224
    TEST EBX,EBX                        ; 0052d22b
    JNZ 0x0052d479                      ; 0052d22d
        ;   XREF to: 0052d479 (CONDITIONAL_JUMP)  ; LAB_0052d479
    LEA EAX,[ESP + 0x134]               ; 0052d233
        ;   Label: LAB_0052d233
    PUSH EAX                            ; 0052d23a
    MOV ESI,dword ptr [0x005be368]      ; 0052d23b | DAT_005be368
    PUSH ESI                            ; 0052d241 | DAT_01e57284
    CALL FUN_0050d1c0                   ; 0052d242
        ;   XREF to: 0050d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d1c0()
    ADD ESP,0x8                         ; 0052d247
    MOV dword ptr [ESP + 0x150],EAX     ; 0052d24a
    MOV dword ptr [ESP + 0x15c],EAX     ; 0052d251
    ADD EAX,0x5                         ; 0052d258
    MOV dword ptr [ESP + 0x160],EAX     ; 0052d25b
    MOV BH,0x21                         ; 0052d262
    MOV EDI,dword ptr [ESP + 0x15c]     ; 0052d264
        ;   Label: LAB_0052d264
    MOV EAX,dword ptr [ESP + 0x150]     ; 0052d26b
    XOR ESI,ESI                         ; 0052d272
    MOV dword ptr [ESP + 0x140],EAX     ; 0052d274
    TEST ESI,ESI                        ; 0052d27b
        ;   Label: LAB_0052d27b
    JNZ 0x0052d4da                      ; 0052d27d
        ;   XREF to: 0052d4da (CONDITIONAL_JUMP)  ; LAB_0052d4da
    MOV ECX,EDI                         ; 0052d283
    TEST ECX,ECX                        ; 0052d285
        ;   Label: LAB_0052d285
    JL 0x0052d292                       ; 0052d287
        ;   XREF to: 0052d292 (CONDITIONAL_JUMP)  ; LAB_0052d292
    CMP ECX,0x5                         ; 0052d289
    JLE 0x0052d4e6                      ; 0052d28c
        ;   XREF to: 0052d4e6 (CONDITIONAL_JUMP)  ; LAB_0052d4e6
    INC ESI                             ; 0052d292
        ;   Label: LAB_0052d292
    CMP ESI,0x2                         ; 0052d293
    JL 0x0052d27b                       ; 0052d296
        ;   XREF to: 0052d27b (CONDITIONAL_JUMP)  ; LAB_0052d27b
    CMP byte ptr [ESP + 0xd0],0x0       ; 0052d298
        ;   Label: LAB_0052d298
    JZ 0x0052d4a8                       ; 0052d2a0
        ;   XREF to: 0052d4a8 (CONDITIONAL_JUMP)  ; LAB_0052d4a8
    CMP byte ptr [ESP + 0xd0],0x0       ; 0052d2a6
        ;   Label: LAB_0052d2a6
    JZ 0x0052d55e                       ; 0052d2ae
        ;   XREF to: 0052d55e (CONDITIONAL_JUMP)  ; LAB_0052d55e
    MOV EDI,0x3f800000                  ; 0052d2b4
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d2b9
    MOV dword ptr [ESP + 0x4],EDI       ; 0052d2c0
    MOV dword ptr [ESP],EDI             ; 0052d2c4
    CMP byte ptr [EAX],0x0              ; 0052d2c7
    JZ 0x0052d305                       ; 0052d2ca
        ;   XREF to: 0052d305 (CONDITIONAL_JUMP)  ; LAB_0052d305
    MOV ESI,0xffffffff                  ; 0052d2cc
    MOV EBX,0x2                         ; 0052d2d1
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d2d6
        ;   Label: LAB_0052d2d6
    MOV AL,byte ptr [EAX]               ; 0052d2dd
    INC AL                              ; 0052d2df
    AND EAX,0xff                        ; 0052d2e1
    TEST byte ptr [EAX + 0x5c168c],BL   ; 0052d2e6 | DAT_005c168c
    JZ 0x0052d580                       ; 0052d2ec
        ;   XREF to: 0052d580 (CONDITIONAL_JUMP)  ; LAB_0052d580
    INC dword ptr [ESP + 0x164]         ; 0052d2f2
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d2f9
        ;   Label: LAB_0052d2f9
    CMP byte ptr [EAX],0x0              ; 0052d300
    JNZ 0x0052d2d6                      ; 0052d303
        ;   XREF to: 0052d2d6 (CONDITIONAL_JUMP)  ; LAB_0052d2d6
    MOV EBX,dword ptr [EBP + 0x28]      ; 0052d305
        ;   Label: LAB_0052d305
    CALL FUN_00526340                   ; 0052d308
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    TEST EBX,EBX                        ; 0052d30d
    JZ 0x0052d6dd                       ; 0052d30f
        ;   XREF to: 0052d6dd (CONDITIONAL_JUMP)  ; LAB_0052d6dd
    PUSH EBX                            ; 0052d315
    CALL FUN_00525fc0                   ; 0052d316
        ;   XREF to: 00525fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525fc0()
    ADD ESP,0x4                         ; 0052d31b
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0052d31e
        ;   Label: LAB_0052d31e
    PUSH EDI                            ; 0052d321
    CALL FUN_00526240                   ; 0052d322
        ;   XREF to: 00526240 (UNCONDITIONAL_CALL)  ; undefined FUN_00526240()
    ADD ESP,0x4                         ; 0052d327
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d32a
    PUSH EAX                            ; 0052d32d
    PUSH 0x0                            ; 0052d32e
    CALL FUN_00526150                   ; 0052d330
        ;   XREF to: 00526150 (UNCONDITIONAL_CALL)  ; undefined FUN_00526150()
    ADD ESP,0x8                         ; 0052d335
    PUSH dword ptr [ESP]                ; 0052d338
    CALL FUN_005260f0                   ; 0052d33b
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005260f0()
    ADD ESP,0x4                         ; 0052d340
    PUSH dword ptr [ESP + 0x4]          ; 0052d343
    CALL FUN_00526120                   ; 0052d347
        ;   XREF to: 00526120 (UNCONDITIONAL_CALL)  ; undefined FUN_00526120()
    ADD ESP,0x4                         ; 0052d34c
    LEA EAX,[ESP + 0xd0]                ; 0052d34f
    PUSH EAX                            ; 0052d356
    CALL FUN_005265a0                   ; 0052d357
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 0052d35c
    MOV ESI,EAX                         ; 0052d35f
    CALL FUN_005263c0                   ; 0052d361
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    MOV EAX,ESI                         ; 0052d366
    MOV ESP,EBP                         ; 0052d368
        ;   Label: LAB_0052d368
    POP EBP                             ; 0052d36a
    POP EDI                             ; 0052d36b
    POP ESI                             ; 0052d36c
    POP EBX                             ; 0052d36d
    RET                                 ; 0052d36e
    XOR EAX,EAX                         ; 0052d36f
        ;   Label: LAB_0052d36f
    MOV ESP,EBP                         ; 0052d371
    POP EBP                             ; 0052d373
    POP EDI                             ; 0052d374
    POP ESI                             ; 0052d375
    POP EBX                             ; 0052d376
    RET                                 ; 0052d377
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d378
        ;   Label: LAB_0052d378
    MOV BH,byte ptr [EAX]               ; 0052d37f
    CMP BH,0x40                         ; 0052d381
    JZ 0x0052d181                       ; 0052d384
        ;   XREF to: 0052d181 (CONDITIONAL_JUMP)  ; LAB_0052d181
    CMP BH,0x2a                         ; 0052d38a
    JZ 0x0052d181                       ; 0052d38d
        ;   XREF to: 0052d181 (CONDITIONAL_JUMP)  ; LAB_0052d181
    CMP BH,0x5b                         ; 0052d393
    JNZ 0x0052d469                      ; 0052d396
        ;   XREF to: 0052d469 (CONDITIONAL_JUMP)  ; LAB_0052d469
    LEA EAX,[ESP + 0x144]               ; 0052d39c
    PUSH EAX                            ; 0052d3a3
    LEA EAX,[ESP + 0x150]               ; 0052d3a4
    PUSH EAX                            ; 0052d3ab
    LEA EAX,[ESP + 0x150]               ; 0052d3ac
    PUSH EAX                            ; 0052d3b3
    PUSH 0x594a1a                       ; 0052d3b4 | = "[%d,%d]%n"
    MOV EDI,dword ptr [ESP + 0x174]     ; 0052d3b9
    MOV EBX,0xffffffff                  ; 0052d3c0
    PUSH EDI                            ; 0052d3c5
    MOV dword ptr [ESP + 0x158],EBX     ; 0052d3c6
    CALL FUN_00566b5c                   ; 0052d3cd
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined FUN_00566b5c()
    ADD ESP,0x14                        ; 0052d3d2
    CMP dword ptr [ESP + 0x144],0x5     ; 0052d3d5
    JGE 0x0052d453                      ; 0052d3dd
        ;   XREF to: 0052d453 (CONDITIONAL_JUMP)  ; LAB_0052d453
    MOV EDI,dword ptr [EBP + 0x18]      ; 0052d3df
        ;   Label: LAB_0052d3df
    PUSH EDI                            ; 0052d3e2
    MOV ECX,0x594a24                    ; 0052d3e3 | = "..\\core\\sound.cpp"
    MOV EBX,0x137                       ; 0052d3e8
    PUSH 0x594a36                       ; 0052d3ed | = "Invalid sfx string: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 0052d3f2 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0052d3f8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052d3fe
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0052d403
    PUSH 0x594a4d                       ; 0052d406 | DAT_00594a4d
        ;   Label: LAB_0052d406
    PUSH ESI                            ; 0052d40b
    CALL FUN_00563c90                   ; 0052d40c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x8                         ; 0052d411
    ADD ESI,EAX                         ; 0052d414
    CMP dword ptr [ESP + 0x14c],0x9     ; 0052d416
    JLE 0x0052d430                      ; 0052d41e
        ;   XREF to: 0052d430 (CONDITIONAL_JUMP)  ; LAB_0052d430
    PUSH 0x594a4f                       ; 0052d420 | DAT_00594a4f
    PUSH ESI                            ; 0052d425
    CALL FUN_00563c90                   ; 0052d426
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x8                         ; 0052d42b
    ADD ESI,EAX                         ; 0052d42e
    MOV EAX,dword ptr [ESP + 0x144]     ; 0052d430
        ;   Label: LAB_0052d430
    ADD dword ptr [ESP + 0x164],EAX     ; 0052d437
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d43e
        ;   Label: LAB_0052d43e
    CMP byte ptr [EAX],0x0              ; 0052d445
    JNZ 0x0052d164                      ; 0052d448
        ;   XREF to: 0052d164 (CONDITIONAL_JUMP)  ; LAB_0052d164
    JMP 0x0052d181                      ; 0052d44e
        ;   XREF to: 0052d181 (UNCONDITIONAL_JUMP)  ; LAB_0052d181
    MOV EAX,dword ptr [ESP + 0x148]     ; 0052d453
        ;   Label: LAB_0052d453
    CMP EAX,dword ptr [ESP + 0x14c]     ; 0052d45a
    JG 0x0052d3df                       ; 0052d461
        ;   XREF to: 0052d3df (CONDITIONAL_JUMP)  ; LAB_0052d3df
    JMP 0x0052d406                      ; 0052d467
        ;   XREF to: 0052d406 (UNCONDITIONAL_JUMP)  ; LAB_0052d406
    INC ESI                             ; 0052d469
        ;   Label: LAB_0052d469
    LEA ECX,[EAX + 0x1]                 ; 0052d46a
    MOV byte ptr [ESI + -0x1],BH        ; 0052d46d
    MOV dword ptr [ESP + 0x164],ECX     ; 0052d470
    JMP 0x0052d43e                      ; 0052d477
        ;   XREF to: 0052d43e (UNCONDITIONAL_JUMP)  ; LAB_0052d43e
    FLD float ptr [EBP + 0x1c]          ; 0052d479
        ;   Label: LAB_0052d479
    FADD float ptr [EBX]                ; 0052d47c
    FLD float ptr [EBP + 0x20]          ; 0052d47e
    FXCH                                ; 0052d481
    FSTP float ptr [ESP + 0x134]        ; 0052d483
    FADD float ptr [EBX + 0x4]          ; 0052d48a
    FLD float ptr [EBP + 0x24]          ; 0052d48d
    FXCH                                ; 0052d490
    FSTP float ptr [ESP + 0x138]        ; 0052d492
    FADD float ptr [EBX + 0x8]          ; 0052d499
    FSTP float ptr [ESP + 0x13c]        ; 0052d49c
    JMP 0x0052d233                      ; 0052d4a3
        ;   XREF to: 0052d233 (UNCONDITIONAL_JUMP)  ; LAB_0052d233
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0052d4a8
        ;   Label: LAB_0052d4a8
    MOV EDX,dword ptr [ESP + 0x150]     ; 0052d4af
    MOV ESI,dword ptr [ESP + 0x160]     ; 0052d4b6
    INC ECX                             ; 0052d4bd
    DEC EDX                             ; 0052d4be
    MOV dword ptr [ESP + 0x15c],ECX     ; 0052d4bf
    MOV dword ptr [ESP + 0x150],EDX     ; 0052d4c6
    CMP ECX,ESI                         ; 0052d4cd
    JL 0x0052d264                       ; 0052d4cf
        ;   XREF to: 0052d264 (CONDITIONAL_JUMP)  ; LAB_0052d264
    JMP 0x0052d2a6                      ; 0052d4d5
        ;   XREF to: 0052d2a6 (UNCONDITIONAL_JUMP)  ; LAB_0052d2a6
    MOV ECX,dword ptr [ESP + 0x140]     ; 0052d4da
        ;   Label: LAB_0052d4da
    JMP 0x0052d285                      ; 0052d4e1
        ;   XREF to: 0052d285 (UNCONDITIONAL_JUMP)  ; LAB_0052d285
    LEA EAX,[ESP + 0x8]                 ; 0052d4e6
        ;   Label: LAB_0052d4e6
    MOV BL,byte ptr [ESP + 0x8]         ; 0052d4ea
    LEA EDX,[ESP + 0x6c]                ; 0052d4ee
    TEST BL,BL                          ; 0052d4f2
    JZ 0x0052d50c                       ; 0052d4f4
        ;   XREF to: 0052d50c (CONDITIONAL_JUMP)  ; LAB_0052d50c
    MOV BL,byte ptr [EAX]               ; 0052d4f6
        ;   Label: LAB_0052d4f6
    CMP BH,BL                           ; 0052d4f8
    JNZ 0x0052d501                      ; 0052d4fa
        ;   XREF to: 0052d501 (CONDITIONAL_JUMP)  ; LAB_0052d501
    MOV BL,CL                           ; 0052d4fc
    ADD BL,0x30                         ; 0052d4fe
    MOV byte ptr [EDX],BL               ; 0052d501
        ;   Label: LAB_0052d501
    INC EDX                             ; 0052d503
    MOV BL,byte ptr [EAX + 0x1]         ; 0052d504
    INC EAX                             ; 0052d507
    TEST BL,BL                          ; 0052d508
    JNZ 0x0052d4f6                      ; 0052d50a
        ;   XREF to: 0052d4f6 (CONDITIONAL_JUMP)  ; LAB_0052d4f6
    LEA EAX,[ESP + 0x6c]                ; 0052d50c
        ;   Label: LAB_0052d50c
    PUSH EAX                            ; 0052d510
    LEA EAX,[ESP + 0xd4]                ; 0052d511
    PUSH EAX                            ; 0052d518
    MOV EAX,[0x005bed68]                ; 0052d519 | DAT_005bed68
    PUSH EAX                            ; 0052d51e
    MOV byte ptr [EDX],0x0              ; 0052d51f
    CALL FUN_0052d030                   ; 0052d522
        ;   XREF to: 0052d030 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d030()
    ADD ESP,0xc                         ; 0052d527
    CMP byte ptr [ESP + 0xd0],0x0       ; 0052d52a
    JNZ 0x0052d298                      ; 0052d532
        ;   XREF to: 0052d298 (CONDITIONAL_JUMP)  ; LAB_0052d298
    JMP 0x0052d292                      ; 0052d538
        ;   XREF to: 0052d292 (UNCONDITIONAL_JUMP)  ; LAB_0052d292
    LEA EAX,[ESP + 0x8]                 ; 0052d53d
        ;   Label: LAB_0052d53d
    PUSH EAX                            ; 0052d541
    LEA EAX,[ESP + 0xd4]                ; 0052d542
    PUSH EAX                            ; 0052d549
    MOV ECX,dword ptr [0x005bed68]      ; 0052d54a | DAT_005bed68
    PUSH ECX                            ; 0052d550
    CALL FUN_0052d030                   ; 0052d551
        ;   XREF to: 0052d030 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d030()
    ADD ESP,0xc                         ; 0052d556
    JMP 0x0052d2a6                      ; 0052d559
        ;   XREF to: 0052d2a6 (UNCONDITIONAL_JUMP)  ; LAB_0052d2a6
    LEA EAX,[ESP + 0x8]                 ; 0052d55e
        ;   Label: LAB_0052d55e
    PUSH EAX                            ; 0052d562
    PUSH 0x594a56                       ; 0052d563 | = "Can't find wav: %s\n"
    MOV EDX,dword ptr [0x005ad350]      ; 0052d568 | PTR_DAT_005ad350
    PUSH EDX                            ; 0052d56e | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 0052d56f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0xc                         ; 0052d574
    XOR EAX,EAX                         ; 0052d577
    MOV ESP,EBP                         ; 0052d579
    POP EBP                             ; 0052d57b
    POP EDI                             ; 0052d57c
    POP ESI                             ; 0052d57d
    POP EBX                             ; 0052d57e
    RET                                 ; 0052d57f
    MOV EAX,dword ptr [ESP + 0x164]     ; 0052d580
        ;   Label: LAB_0052d580
    MOV CL,byte ptr [EAX]               ; 0052d587
    CMP CL,0x40                         ; 0052d589
    JNZ 0x0052d61d                      ; 0052d58c
        ;   XREF to: 0052d61d (CONDITIONAL_JUMP)  ; LAB_0052d61d
    LEA EAX,[ESP + 0x154]               ; 0052d592
    PUSH EAX                            ; 0052d599
    LEA EAX,[ESP + 0x4]                 ; 0052d59a
    PUSH EAX                            ; 0052d59e
    PUSH 0x594a6a                       ; 0052d59f | = "@%f%n"
    MOV EDI,dword ptr [ESP + 0x170]     ; 0052d5a4
    PUSH EDI                            ; 0052d5ab
    MOV dword ptr [ESP + 0x164],ESI     ; 0052d5ac
    CALL FUN_00566b5c                   ; 0052d5b3
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined FUN_00566b5c()
    ADD ESP,0x10                        ; 0052d5b8
    CMP EBX,dword ptr [ESP + 0x154]     ; 0052d5bb
    JLE 0x0052d5fe                      ; 0052d5c2
        ;   XREF to: 0052d5fe (CONDITIONAL_JUMP)  ; LAB_0052d5fe
    MOV EDI,dword ptr [EBP + 0x18]      ; 0052d5c4
        ;   Label: LAB_0052d5c4
    PUSH EDI                            ; 0052d5c7
    MOV EDX,0x594a70                    ; 0052d5c8 | = "..\\core\\sound.cpp"
    MOV ECX,0x1a4                       ; 0052d5cd
    PUSH 0x594a82                       ; 0052d5d2 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01cc4800],EDX      ; 0052d5d7 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0052d5dd | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052d5e3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0052d5e8
    MOV EAX,dword ptr [ESP + 0x154]     ; 0052d5eb
    ADD dword ptr [ESP + 0x164],EAX     ; 0052d5f2
    JMP 0x0052d2f9                      ; 0052d5f9
        ;   XREF to: 0052d2f9 (UNCONDITIONAL_JUMP)  ; LAB_0052d2f9
    FLD float ptr [ESP]                 ; 0052d5fe
        ;   Label: LAB_0052d5fe
    FLDZ                                ; 0052d601
    FCOMPP                              ; 0052d603
    FNSTSW AX                           ; 0052d605
    SAHF                                ; 0052d607
    JA 0x0052d5c4                       ; 0052d608
        ;   XREF to: 0052d5c4 (CONDITIONAL_JUMP)  ; LAB_0052d5c4
    MOV EAX,dword ptr [ESP + 0x154]     ; 0052d60a
    ADD dword ptr [ESP + 0x164],EAX     ; 0052d611
    JMP 0x0052d2f9                      ; 0052d618
        ;   XREF to: 0052d2f9 (UNCONDITIONAL_JUMP)  ; LAB_0052d2f9
    CMP CL,0x2a                         ; 0052d61d
        ;   Label: LAB_0052d61d
    JNZ 0x0052d6b1                      ; 0052d620
        ;   XREF to: 0052d6b1 (CONDITIONAL_JUMP)  ; LAB_0052d6b1
    LEA EAX,[ESP + 0x158]               ; 0052d626
    PUSH EAX                            ; 0052d62d
    LEA EAX,[ESP + 0x8]                 ; 0052d62e
    PUSH EAX                            ; 0052d632
    PUSH 0x594a99                       ; 0052d633 | = "*%f%n"
    MOV EDX,dword ptr [ESP + 0x170]     ; 0052d638
    PUSH EDX                            ; 0052d63f
    MOV dword ptr [ESP + 0x168],ESI     ; 0052d640
    CALL FUN_00566b5c                   ; 0052d647
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined FUN_00566b5c()
    ADD ESP,0x10                        ; 0052d64c
    CMP EBX,dword ptr [ESP + 0x158]     ; 0052d64f
    JLE 0x0052d691                      ; 0052d656
        ;   XREF to: 0052d691 (CONDITIONAL_JUMP)  ; LAB_0052d691
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052d658
        ;   Label: LAB_0052d658
    PUSH EDX                            ; 0052d65b
    MOV EDI,0x594a9f                    ; 0052d65c | = "..\\core\\sound.cpp"
    MOV EAX,0x1aa                       ; 0052d661
    PUSH 0x594ab1                       ; 0052d666 | = "Invalid sfx string: %s"
    MOV dword ptr [0x01cc4800],EDI      ; 0052d66b | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0052d671 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052d676
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0052d67b
    MOV EAX,dword ptr [ESP + 0x158]     ; 0052d67e
    ADD dword ptr [ESP + 0x164],EAX     ; 0052d685
    JMP 0x0052d2f9                      ; 0052d68c
        ;   XREF to: 0052d2f9 (UNCONDITIONAL_JUMP)  ; LAB_0052d2f9
    FLD float ptr [ESP + 0x4]           ; 0052d691
        ;   Label: LAB_0052d691
    FLDZ                                ; 0052d695
    FCOMPP                              ; 0052d697
    FNSTSW AX                           ; 0052d699
    SAHF                                ; 0052d69b
    JNC 0x0052d658                      ; 0052d69c
        ;   XREF to: 0052d658 (CONDITIONAL_JUMP)  ; LAB_0052d658
    MOV EAX,dword ptr [ESP + 0x158]     ; 0052d69e
    ADD dword ptr [ESP + 0x164],EAX     ; 0052d6a5
    JMP 0x0052d2f9                      ; 0052d6ac
        ;   XREF to: 0052d2f9 (UNCONDITIONAL_JUMP)  ; LAB_0052d2f9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d6b1
        ;   Label: LAB_0052d6b1
    PUSH EAX                            ; 0052d6b4
    MOV ECX,0x594ac8                    ; 0052d6b5 | = "..\\core\\sound.cpp"
    MOV EDI,0x1ad                       ; 0052d6ba
    PUSH 0x594ada                       ; 0052d6bf | = "Invalid sfx string: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 0052d6c4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0052d6ca | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052d6d0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0052d6d5
    JMP 0x0052d2f9                      ; 0052d6d8
        ;   XREF to: 0052d2f9 (UNCONDITIONAL_JUMP)  ; LAB_0052d2f9
    FLD float ptr [EBP + 0x24]          ; 0052d6dd
        ;   Label: LAB_0052d6dd
    SUB ESP,0x8                         ; 0052d6e0
    FSTP double ptr [ESP]               ; 0052d6e3
    FLD float ptr [EBP + 0x20]          ; 0052d6e6
    SUB ESP,0x8                         ; 0052d6e9
    FSTP double ptr [ESP]               ; 0052d6ec
    FLD float ptr [EBP + 0x1c]          ; 0052d6ef
    SUB ESP,0x8                         ; 0052d6f2
    FSTP double ptr [ESP]               ; 0052d6f5
    CALL FUN_00525f50                   ; 0052d6f8
        ;   XREF to: 00525f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f50()
    ADD ESP,0x18                        ; 0052d6fd
    JMP 0x0052d31e                      ; 0052d700
        ;   XREF to: 0052d31e (UNCONDITIONAL_JUMP)  ; LAB_0052d31e

