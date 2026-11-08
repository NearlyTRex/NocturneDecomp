; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b0e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_0040fac0 at 0040fac7
;   FUN_00489110 at 00489115
;   FUN_004d26b0 at 004d26c5
;   FUN_004f8bb0 at 004f8bfe
;   FUN_00509020 at 0050902c
;   FUN_005992f0 at 005992f9
;
; Referenced Globals:
;   TerminatedCString s_stake_b_kfm_005b7fae
;   TerminatedCString s_core_charactr_cpp_005b7fba
;   TerminatedCString s_s_is_carrying_s_but_s_th_005b7fcf
;   TerminatedCString s_bip01_head_005b800a
;   TerminatedCString s_shadow_dfm_005b8015
;   undefined4 DAT_005dd234
;   undefined4 DAT_007e2b34
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00408870
;   FUN_00408890
;   FUN_0040ce40
;   FUN_0042e4b0
;   FUN_004322a0
;   FUN_00433880
;   FUN_0043f920
;   FUN_0043fbc0
;   FUN_0043fc00
;   FUN_00462580
;   FUN_004625f0
;   FUN_004e4330
;   FUN_00548090
;   FUN_0054e6b0
;   FUN_0054eac0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b0e0
        ;   Label: FUN_0042b0e0
    PUSH ESI                            ; 0042b0e1
    PUSH EDI                            ; 0042b0e2
    PUSH EBP                            ; 0042b0e3
    MOV EBP,ESP                         ; 0042b0e4
    SUB ESP,0x4                         ; 0042b0e6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042b0e9
    PUSH EDX                            ; 0042b0ec
    CALL FUN_00408890                   ; 0042b0ed
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0042b0f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b0f5
    PUSH 0x5b7fae                       ; 0042b0f8 | = "stake_b.kfm"
    FLD float ptr [0x005dd234]          ; 0042b0fd | DAT_005dd234
    PUSH 0x7e2b34                       ; 0042b103 | DAT_007e2b34
    FSTP float ptr [EAX + 0x2504]       ; 0042b108
    MOV dword ptr [EAX + 0x3284],0x0    ; 0042b10e
    CALL FUN_004625f0                   ; 0042b118
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0042b11d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042b120
    PUSH 0x7e2b34                       ; 0042b123 | DAT_007e2b34
    LEA EDI,[ESI + 0xf0]                ; 0042b128
    CALL FUN_00462580                   ; 0042b12e
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0042b133
    MOV EBX,dword ptr [ESI + 0x25b0]    ; 0042b136
        ;   Label: LAB_0042b136
    TEST EBX,EBX                        ; 0042b13c
    JNZ 0x0042b399                      ; 0042b13e
        ;   XREF to: 0042b399 (CONDITIONAL_JUMP)  ; LAB_0042b399
    ADD ESI,0x78                        ; 0042b144
        ;   Label: LAB_0042b144
    CMP ESI,EDI                         ; 0042b147
    JNZ 0x0042b136                      ; 0042b149
        ;   XREF to: 0042b136 (CONDITIONAL_JUMP)  ; LAB_0042b136
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b14b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b14e
    MOV DL,byte ptr [EAX + 0x24a8]      ; 0042b151
    ADD EBX,0x158                       ; 0042b157
    TEST DL,DL                          ; 0042b15d
    JZ 0x0042b198                       ; 0042b15f
        ;   XREF to: 0042b198 (CONDITIONAL_JUMP)  ; LAB_0042b198
    FLD float ptr [EAX + 0x27b8]        ; 0042b161
    PUSH EBX                            ; 0042b167
    FSTP float ptr [EAX + 0x1ac]        ; 0042b168
    CALL FUN_0054e6b0                   ; 0042b16e
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 0042b173
    PUSH 0x0                            ; 0042b176
    PUSH 0x5b800a                       ; 0042b178 | = "bip01 head"
    PUSH EBX                            ; 0042b17d
    CALL FUN_0054eac0                   ; 0042b17e
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0042b183
    PUSH EAX                            ; 0042b186
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b187
    CALL FUN_00548090                   ; 0042b18a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0042b18f
    MOV dword ptr [EBX + 0x2774],EAX    ; 0042b192
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042b198
        ;   Label: LAB_0042b198
    PUSH ECX                            ; 0042b19b
    CALL FUN_004322a0                   ; 0042b19c
        ;   XREF to: 004322a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004322a0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b1a1
    MOV EBX,dword ptr [EAX + 0x27a4]    ; 0042b1a4
    ADD ESP,0x4                         ; 0042b1aa
    TEST EBX,EBX                        ; 0042b1ad
    JZ 0x0042b260                       ; 0042b1af
        ;   XREF to: 0042b260 (CONDITIONAL_JUMP)  ; LAB_0042b260
    ADD EAX,0x158                       ; 0042b1b5
    PUSH EAX                            ; 0042b1ba
    CALL FUN_0054eac0                   ; 0042b1bb
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0042b1c0
    MOV ESI,EAX                         ; 0042b1c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b1c5
    PUSH 0x5b8015                       ; 0042b1c8 | = "shadow.dfm"
    ADD EAX,0x24a8                      ; 0042b1cd
    PUSH EAX                            ; 0042b1d2
    XOR EDI,EDI                         ; 0042b1d3
    MOV dword ptr [EAX + 0xefc],0x4     ; 0042b1d5
    CALL FUN_005a3260                   ; 0042b1df
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0042b1e4
    TEST EAX,EAX                        ; 0042b1e7
    JNZ 0x0042b1f0                      ; 0042b1e9
        ;   XREF to: 0042b1f0 (CONDITIONAL_JUMP)  ; LAB_0042b1f0
    MOV EDI,0x10                        ; 0042b1eb
    MOV EAX,dword ptr [ESI + 0x1de78]   ; 0042b1f0
        ;   Label: LAB_0042b1f0
    MOV EBX,EDI                         ; 0042b1f6
    CMP EDI,EAX                         ; 0042b1f8
    JGE 0x0042b220                      ; 0042b1fa
        ;   XREF to: 0042b220 (CONDITIONAL_JUMP)  ; LAB_0042b220
    PUSH EBX                            ; 0042b1fc
        ;   Label: LAB_0042b1fc
    PUSH ESI                            ; 0042b1fd
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042b1fe
    PUSH EDX                            ; 0042b201
    INC EBX                             ; 0042b202
    CALL FUN_0042e4b0                   ; 0042b203
        ;   XREF to: 0042e4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e4b0()
    MOV ECX,dword ptr [ESI + 0x1de78]   ; 0042b208
    ADD ESP,0xc                         ; 0042b20e
    CMP EBX,ECX                         ; 0042b211
    JL 0x0042b1fc                       ; 0042b213
        ;   XREF to: 0042b1fc (CONDITIONAL_JUMP)  ; LAB_0042b1fc
    LEA EAX,[EAX]                       ; 0042b215
    LEA EDX,[EDX]                       ; 0042b21b
    MOV EBX,EBX                         ; 0042b21e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b220
        ;   Label: LAB_0042b220
    MOV EBX,dword ptr [EAX + 0x33a0]    ; 0042b223
    XOR ESI,ESI                         ; 0042b229
    TEST EBX,EBX                        ; 0042b22b
    JLE 0x0042b260                      ; 0042b22d
        ;   XREF to: 0042b260 (CONDITIONAL_JUMP)  ; LAB_0042b260
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042b22f
    MOV EBX,EAX                         ; 0042b232
    ADD EBX,0x18                        ; 0042b234
        ;   Label: LAB_0042b234
    MOV dword ptr [EAX + 0x3a04],0x4    ; 0042b237
    MOV dword ptr [EBX + 0x33a8],0x40000000 ; 0042b241
    INC ESI                             ; 0042b24b
    MOV EDX,dword ptr [EDI + 0x33a0]    ; 0042b24c
    ADD EAX,0x2a4                       ; 0042b252
    CMP ESI,EDX                         ; 0042b257
    JL 0x0042b234                       ; 0042b259
        ;   XREF to: 0042b234 (CONDITIONAL_JUMP)  ; LAB_0042b234
    LEA EAX,[EAX]                       ; 0042b25b
    MOV ECX,ECX                         ; 0042b25e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b260
        ;   Label: LAB_0042b260
    ADD EBX,0x2f08                      ; 0042b263
    PUSH EBX                            ; 0042b269
    CALL FUN_0043f920                   ; 0042b26a
        ;   XREF to: 0043f920 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f920()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b26f
    ADD ESP,0x4                         ; 0042b272
    ADD EAX,0x158                       ; 0042b275
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042b27a
    PUSH EAX                            ; 0042b27d
    ADD ESI,0x30                        ; 0042b27e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042b281
    PUSH ESI                            ; 0042b284
    ADD EDI,0x20                        ; 0042b285
    PUSH EDI                            ; 0042b288
    PUSH EBX                            ; 0042b289
    MOV dword ptr [EBP + -0x4],EAX      ; 0042b28a
    CALL FUN_0043fbc0                   ; 0042b28d
        ;   XREF to: 0043fbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043fbc0()
    ADD ESP,0x10                        ; 0042b292
    MOV EAX,dword ptr [EBP + -0x4]      ; 0042b295
    PUSH EAX                            ; 0042b298
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b299
    PUSH dword ptr [EAX + 0x2504]       ; 0042b29c
    PUSH 0x3d4ccccd                     ; 0042b2a2
    PUSH ESI                            ; 0042b2a7
    PUSH EDI                            ; 0042b2a8
    PUSH EBX                            ; 0042b2a9
    CALL FUN_0043fc00                   ; 0042b2aa
        ;   XREF to: 0043fc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0043fc00()
    ADD ESP,0x18                        ; 0042b2af
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042b2b2
    PUSH EDX                            ; 0042b2b5
    CALL FUN_00433880                   ; 0042b2b6
        ;   XREF to: 00433880 (UNCONDITIONAL_CALL)  ; undefined FUN_00433880()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b2bb
    MOV DH,byte ptr [EAX + 0x2544]      ; 0042b2be
    ADD ESP,0x4                         ; 0042b2c4
    TEST DH,DH                          ; 0042b2c7
    JNZ 0x0042b2fa                      ; 0042b2c9
        ;   XREF to: 0042b2fa (CONDITIONAL_JUMP)  ; LAB_0042b2fa
    PUSH EAX                            ; 0042b2cb
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042b2cc
    CALL FUN_00408870                   ; 0042b2cf
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; undefined FUN_00408870()
    ADD ESP,0x4                         ; 0042b2d4
    LEA ESI,[EAX + 0x1]                 ; 0042b2d7
    ADD EDI,0x2544                      ; 0042b2da
    PUSH EDI                            ; 0042b2e0
    MOV AL,byte ptr [ESI]               ; 0042b2e1
        ;   Label: LAB_0042b2e1
    MOV byte ptr [EDI],AL               ; 0042b2e3
    CMP AL,0x0                          ; 0042b2e5
    JZ 0x0042b2f9                       ; 0042b2e7
        ;   XREF to: 0042b2f9 (CONDITIONAL_JUMP)  ; LAB_0042b2f9
    MOV AL,byte ptr [ESI + 0x1]         ; 0042b2e9
    ADD ESI,0x2                         ; 0042b2ec
    MOV byte ptr [EDI + 0x1],AL         ; 0042b2ef
    ADD EDI,0x2                         ; 0042b2f2
    CMP AL,0x0                          ; 0042b2f5
    JNZ 0x0042b2e1                      ; 0042b2f7
        ;   XREF to: 0042b2e1 (CONDITIONAL_JUMP)  ; LAB_0042b2e1
    POP EDI                             ; 0042b2f9
        ;   Label: LAB_0042b2f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b2fa
        ;   Label: LAB_0042b2fa
    MOV EBX,dword ptr [EAX + 0xcdc4]    ; 0042b2fd
    MOV dword ptr [EAX + 0xbc64],0x0    ; 0042b303
    TEST EBX,EBX                        ; 0042b30d
    JZ 0x0042b325                       ; 0042b30f
        ;   XREF to: 0042b325 (CONDITIONAL_JUMP)  ; LAB_0042b325
    MOV dword ptr [EAX + 0xf8],0x0      ; 0042b311
    MOV dword ptr [EAX + 0xfc],0x1      ; 0042b31b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b325
        ;   Label: LAB_0042b325
    MOV dword ptr [EAX + 0x2764],0x0    ; 0042b328
    PUSH 0x3f800000                     ; 0042b332
    MOV dword ptr [EAX + 0x273c],0x0    ; 0042b337
    PUSH 0x3f000000                     ; 0042b341
    MOV dword ptr [EAX + 0x2760],0x0    ; 0042b346
    CALL FUN_0040ce40                   ; 0042b350
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [EBP + -0x4],EAX      ; 0042b355
    ADD ESP,0x8                         ; 0042b358
    FLD float ptr [EBP + -0x4]          ; 0042b35b
    PUSH 0x3f800000                     ; 0042b35e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b363
    PUSH 0x3f000000                     ; 0042b366
    FSTP float ptr [EAX + 0x30c4]       ; 0042b36b
    CALL FUN_0040ce40                   ; 0042b371
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [EBP + -0x4],EAX      ; 0042b376
    ADD ESP,0x8                         ; 0042b379
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b37c
    MOV EDX,dword ptr [EBP + -0x4]      ; 0042b37f
    MOV dword ptr [EAX + 0x30c8],EDX    ; 0042b382
    MOV dword ptr [EAX + 0x30cc],0x0    ; 0042b388
    MOV ESP,EBP                         ; 0042b392
    POP EBP                             ; 0042b394
    POP EDI                             ; 0042b395
    POP ESI                             ; 0042b396
    POP EBX                             ; 0042b397
    RET                                 ; 0042b398
    PUSH EBX                            ; 0042b399
        ;   Label: LAB_0042b399
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b39a
    CALL dword ptr [EAX + 0x94]         ; 0042b3a0
    ADD ESP,0x4                         ; 0042b3a6
    TEST EAX,EAX                        ; 0042b3a9
    JZ 0x0042b3e5                       ; 0042b3ab
        ;   XREF to: 0042b3e5 (CONDITIONAL_JUMP)  ; LAB_0042b3e5
    CMP EAX,dword ptr [EBP + 0x14]      ; 0042b3ad
    JZ 0x0042b144                       ; 0042b3b0
        ;   XREF to: 0042b144 (CONDITIONAL_JUMP)  ; LAB_0042b144
    PUSH EAX                            ; 0042b3b6
    PUSH EBX                            ; 0042b3b7
    PUSH EBX                            ; 0042b3b8
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b3b9
    PUSH EBX                            ; 0042b3bc
    MOV EDX,0x5b7fba                    ; 0042b3bd | = "..\\core\\charactr.cpp"
    MOV ECX,0x145                       ; 0042b3c2
    PUSH 0x5b7fcf                       ; 0042b3c7 | = "%s is carrying %s, but %s thinks it i..."
    MOV dword ptr [0x01d71de0],EDX      ; 0042b3cc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0042b3d2 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0042b3d8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x14                        ; 0042b3dd
    JMP 0x0042b144                      ; 0042b3e0
        ;   XREF to: 0042b144 (UNCONDITIONAL_JUMP)  ; LAB_0042b144
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042b3e5
        ;   Label: LAB_0042b3e5
    PUSH EDX                            ; 0042b3e8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b3e9
    PUSH EBX                            ; 0042b3ef
    CALL dword ptr [EAX + 0x88]         ; 0042b3f0
    ADD ESP,0x8                         ; 0042b3f6
    JMP 0x0042b144                      ; 0042b3f9
        ;   XREF to: 0042b144 (UNCONDITIONAL_JUMP)  ; LAB_0042b144

