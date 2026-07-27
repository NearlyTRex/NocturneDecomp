; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_init_FUN_0048a150(void)
;
;
; XREF[4]:
;   core_fire.cpp_CFireEffect_load_FUN_0048c7d0 at 0048c7f1
;   core_fire.cpp_FUN_0048a130 at 0048a136
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e01f
;   core_game.cpp_FUN_004a4170 at 004a4932
;
; Referenced Globals:
;   undefined4 DAT_01c0a13c
;   undefined4 DAT_01c20140
;   undefined4 DAT_01c20144
;   undefined4 DAT_01c23d48
;   undefined4 DAT_01c23d4c
;   undefined4 DAT_01c49d50
;   undefined4 DAT_01c49d6c
;   undefined4 DAT_01c49db8
;   undefined4 DAT_01c4e958
;   undefined4 DAT_01c4e9b4
;   undefined4 DAT_01c4f088
;   undefined4 DAT_01c4f0a4
;   undefined4 DAT_01c4f140
;   undefined4 DAT_01c58cb0
;   undefined4 DAT_01c58cd4
;   ... and 21 more
;
; Called Functions:
;   core_fire.cpp_CCrater_reset_FUN_004876b0
;   core_fire.cpp_CExplosion_ctor_FUN_00486d90
;   core_fire.cpp_CGunFlame_reset_FUN_00488270
;   core_fire.cpp_CLightningBolt_reset_FUN_00488b00
;   core_fire.cpp_CSmokeParticle_reset_FUN_00482770
;   core_fire.cpp_CToss_reset_FUN_004873a0
;   core_fire.cpp_CTrail_reset_FUN_004892b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a150
        ;   Label: core_fire.cpp_CFireEffect_init_FUN_0048a150
    PUSH ESI                            ; 0048a151
    PUSH EBP                            ; 0048a152
    MOV EBX,0x1c0a140                   ; 0048a153
    XOR EDX,EDX                         ; 0048a158
    LEA ESI,[EBX + 0x16000]             ; 0048a15a
    MOV dword ptr [0x01c0a13c],EDX      ; 0048a160 | DAT_01c0a13c
    PUSH EBX                            ; 0048a166
        ;   Label: LAB_0048a166
    CALL core_fire.cpp_CSmokeParticle_reset_FUN_00482770 ; 0048a167
        ;   XREF to: 00482770 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CSmokeParticle_reset_FUN_00482770()
    ADD EBX,0x2c                        ; 0048a16c
    ADD ESP,0x4                         ; 0048a16f
    CMP EBX,ESI                         ; 0048a172
    JNZ 0x0048a166                      ; 0048a174
        ;   XREF to: 0048a166 (CONDITIONAL_JUMP)  ; LAB_0048a166
    MOV EAX,0x1c49d54                   ; 0048a176
    XOR ECX,ECX                         ; 0048a17b
    XOR EBX,ESI                         ; 0048a17d
    MOV dword ptr [0x01c20144],ECX      ; 0048a17f | DAT_01c20144
    MOV dword ptr [0x01c20140],EBX      ; 0048a185 | DAT_01c20140
    MOV dword ptr [0x01c49d50],ECX      ; 0048a18b | DAT_01c49d50
    LEA EBX,[EAX + 0x4c00]              ; 0048a191
    ADD EAX,0x4c                        ; 0048a197
        ;   Label: LAB_0048a197
    MOV dword ptr [EAX + -0x34],0x0     ; 0048a19a | DAT_01c49d6c | DAT_01c49db8
    CMP EAX,EBX                         ; 0048a1a1
    JNZ 0x0048a197                      ; 0048a1a3
        ;   XREF to: 0048a197 (CONDITIONAL_JUMP)  ; LAB_0048a197
    MOV EAX,0x1c4e958                   ; 0048a1a5
    LEA EBX,[EAX + 0x730]               ; 0048a1aa
    MOV dword ptr [EAX],0x0             ; 0048a1b0 | DAT_01c4e958 | DAT_01c4e9b4
        ;   Label: LAB_0048a1b0
    ADD EAX,0x5c                        ; 0048a1b6
    CMP EAX,EBX                         ; 0048a1b9
    JNZ 0x0048a1b0                      ; 0048a1bb
        ;   XREF to: 0048a1b0 (CONDITIONAL_JUMP)  ; LAB_0048a1b0
    PUSH EDI                            ; 0048a1bd
    XOR EDI,EDI                         ; 0048a1be
    XOR EAX,EBX                         ; 0048a1c0
    MOV dword ptr [0x01c23d48],EDI      ; 0048a1c2 | DAT_01c23d48
    MOV [0x01c4f088],EAX                ; 0048a1c8 | DAT_01c4f088
    MOV EAX,0x1c4f08c                   ; 0048a1cd
    MOV dword ptr [0x01c23d4c],EDI      ; 0048a1d2 | DAT_01c23d4c
    LEA EBX,[EAX + 0x9c00]              ; 0048a1d8
    ADD EAX,0x9c                        ; 0048a1de
        ;   Label: LAB_0048a1de
    MOV dword ptr [EAX + 0xffffff7c],0x0 ; 0048a1e3 | DAT_01c4f0a4 | DAT_01c4f140
    CMP EAX,EBX                         ; 0048a1ed
    JNZ 0x0048a1de                      ; 0048a1ef
        ;   XREF to: 0048a1de (CONDITIONAL_JUMP)  ; LAB_0048a1de
    MOV EAX,0x1c58c90                   ; 0048a1f1
    LEA EBX,[EAX + 0x168]               ; 0048a1f6
    ADD EAX,0x24                        ; 0048a1fc
        ;   Label: LAB_0048a1fc
    MOV dword ptr [EAX + -0x4],0x0      ; 0048a1ff | DAT_01c58cb0 | DAT_01c58cd4
    CMP EAX,EBX                         ; 0048a206
    JNZ 0x0048a1fc                      ; 0048a208
        ;   XREF to: 0048a1fc (CONDITIONAL_JUMP)  ; LAB_0048a1fc
    XOR EDX,EDX                         ; 0048a20a
    MOV EAX,0x1c58dfc                   ; 0048a20c
    MOV dword ptr [0x01c58df8],EDX      ; 0048a211 | DAT_01c58df8
    LEA EBX,[EAX + 0x2700]              ; 0048a217
    ADD EAX,0x9c                        ; 0048a21d
        ;   Label: LAB_0048a21d
    MOV dword ptr [EAX + 0xffffff7c],0x0 ; 0048a222 | DAT_01c58e14 | DAT_01c58eb0
    CMP EAX,EBX                         ; 0048a22c
    JNZ 0x0048a21d                      ; 0048a22e
        ;   XREF to: 0048a21d (CONDITIONAL_JUMP)  ; LAB_0048a21d
    XOR ECX,ECX                         ; 0048a230
    MOV EAX,0x1c5b500                   ; 0048a232
    MOV dword ptr [0x01c5b4fc],ECX      ; 0048a237 | DAT_01c5b4fc
    LEA EBX,[EAX + 0x1200]              ; 0048a23d
    ADD EAX,0x48                        ; 0048a243
        ;   Label: LAB_0048a243
    MOV dword ptr [EAX + -0x30],0x0     ; 0048a246 | DAT_01c5b518 | DAT_01c5b560
    CMP EAX,EBX                         ; 0048a24d
    JNZ 0x0048a243                      ; 0048a24f
        ;   XREF to: 0048a243 (CONDITIONAL_JUMP)  ; LAB_0048a243
    XOR EBX,EBX                         ; 0048a251
    MOV dword ptr [0x01c5d704],EBX      ; 0048a253 | DAT_01c5d704
    MOV EBX,0x1c5d708                   ; 0048a259
    LEA ESI,[EBX + 0x118]               ; 0048a25e
    PUSH EBX                            ; 0048a264
        ;   Label: LAB_0048a264
    CALL core_fire.cpp_CExplosion_ctor_FUN_00486d90 ; 0048a265
        ;   XREF to: 00486d90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CExplosion_ctor_FUN_00486d90()
    ADD EBX,0x1c                        ; 0048a26a
    ADD ESP,0x4                         ; 0048a26d
    CMP EBX,ESI                         ; 0048a270
    JNZ 0x0048a264                      ; 0048a272
        ;   XREF to: 0048a264 (CONDITIONAL_JUMP)  ; LAB_0048a264
    XOR ESI,ESI                         ; 0048a274
    MOV EBX,0x1c5d824                   ; 0048a276
    MOV dword ptr [0x01c5d820],ESI      ; 0048a27b | DAT_01c5d820
    LEA ESI,[EBX + 0x4dd0]              ; 0048a281
    PUSH EBX                            ; 0048a287
        ;   Label: LAB_0048a287
    CALL core_fire.cpp_CToss_reset_FUN_004873a0 ; 0048a288
        ;   XREF to: 004873a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CToss_reset_FUN_004873a0()
    ADD EBX,0x3e4                       ; 0048a28d
    ADD ESP,0x4                         ; 0048a293
    CMP EBX,ESI                         ; 0048a296
    JNZ 0x0048a287                      ; 0048a298
        ;   XREF to: 0048a287 (CONDITIONAL_JUMP)  ; LAB_0048a287
    MOV EBX,0x1c625f8                   ; 0048a29a
    XOR EDI,EDI                         ; 0048a29f
    LEA ESI,[EBX + 0x8c0]               ; 0048a2a1
    MOV dword ptr [0x01c625f4],EDI      ; 0048a2a7 | DAT_01c625f4
    POP EDI                             ; 0048a2ad
    PUSH EBX                            ; 0048a2ae
        ;   Label: LAB_0048a2ae
    CALL core_fire.cpp_CCrater_reset_FUN_004876b0 ; 0048a2af
        ;   XREF to: 004876b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CCrater_reset_FUN_004876b0()
    ADD EBX,0x70                        ; 0048a2b4
    ADD ESP,0x4                         ; 0048a2b7
    CMP EBX,ESI                         ; 0048a2ba
    JNZ 0x0048a2ae                      ; 0048a2bc
        ;   XREF to: 0048a2ae (CONDITIONAL_JUMP)  ; LAB_0048a2ae
    MOV EBX,0x1c62ebc                   ; 0048a2be
    XOR EBP,EBP                         ; 0048a2c3
    LEA ESI,[EBX + 0x4650]              ; 0048a2c5
    MOV dword ptr [0x01c62eb8],EBP      ; 0048a2cb | DAT_01c62eb8
    PUSH EBX                            ; 0048a2d1
        ;   Label: LAB_0048a2d1
    CALL core_fire.cpp_CGunFlame_reset_FUN_00488270 ; 0048a2d2
        ;   XREF to: 00488270 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CGunFlame_reset_FUN_00488270()
    ADD EBX,0x24                        ; 0048a2d7
    ADD ESP,0x4                         ; 0048a2da
    CMP EBX,ESI                         ; 0048a2dd
    JNZ 0x0048a2d1                      ; 0048a2df
        ;   XREF to: 0048a2d1 (CONDITIONAL_JUMP)  ; LAB_0048a2d1
    MOV EBX,0x1c67510                   ; 0048a2e1
    XOR EAX,EAX                         ; 0048a2e6
    LEA ESI,[EBX + 0x1b8]               ; 0048a2e8
    MOV [0x01c6750c],EAX                ; 0048a2ee | DAT_01c6750c
    PUSH EBX                            ; 0048a2f3
        ;   Label: LAB_0048a2f3
    CALL core_fire.cpp_CLightningBolt_reset_FUN_00488b00 ; 0048a2f4
        ;   XREF to: 00488b00 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CLightningBolt_reset_FUN_00488b00()
    ADD EBX,0x2c                        ; 0048a2f9
    ADD ESP,0x4                         ; 0048a2fc
    CMP EBX,ESI                         ; 0048a2ff
    JNZ 0x0048a2f3                      ; 0048a301
        ;   XREF to: 0048a2f3 (CONDITIONAL_JUMP)  ; LAB_0048a2f3
    MOV EBX,0x1c676cc                   ; 0048a303
    XOR EDX,EDX                         ; 0048a308
    LEA ESI,[EBX + 0xe10]               ; 0048a30a
    MOV dword ptr [0x01c676c8],EDX      ; 0048a310 | DAT_01c676c8
    PUSH EBX                            ; 0048a316
        ;   Label: LAB_0048a316
    CALL core_fire.cpp_CTrail_reset_FUN_004892b0 ; 0048a317
        ;   XREF to: 004892b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CTrail_reset_FUN_004892b0()
    ADD EBX,0x24                        ; 0048a31c
    ADD ESP,0x4                         ; 0048a31f
    CMP EBX,ESI                         ; 0048a322
    JNZ 0x0048a316                      ; 0048a324
        ;   XREF to: 0048a316 (CONDITIONAL_JUMP)  ; LAB_0048a316
    XOR ECX,ECX                         ; 0048a326
    MOV EAX,0x1c684e0                   ; 0048a328
    MOV dword ptr [0x01c684dc],ECX      ; 0048a32d | DAT_01c684dc
    LEA EBX,[EAX + 0x1130]              ; 0048a333
    ADD EAX,0x58                        ; 0048a339
        ;   Label: LAB_0048a339
    MOV dword ptr [EAX + -0x40],0x0     ; 0048a33c | DAT_01c684f8 | DAT_01c68550
    CMP EAX,EBX                         ; 0048a343
    JNZ 0x0048a339                      ; 0048a345
        ;   XREF to: 0048a339 (CONDITIONAL_JUMP)  ; LAB_0048a339
    XOR EBX,EBX                         ; 0048a347
    MOV EAX,0x1c69614                   ; 0048a349
    MOV dword ptr [0x01c69610],EBX      ; 0048a34e | DAT_01c69610
    LEA EBX,[EAX + 0x3800]              ; 0048a354
    ADD EAX,0x38                        ; 0048a35a
        ;   Label: LAB_0048a35a
    MOV dword ptr [EAX + -0x20],0x0     ; 0048a35d | DAT_01c6962c | DAT_01c69664
    CMP EAX,EBX                         ; 0048a364
    JNZ 0x0048a35a                      ; 0048a366
        ;   XREF to: 0048a35a (CONDITIONAL_JUMP)  ; LAB_0048a35a
    XOR ESI,ESI                         ; 0048a368
    MOV EAX,0x1c6ce18                   ; 0048a36a
    MOV dword ptr [0x01c6ce14],ESI      ; 0048a36f | DAT_01c6ce14
    LEA EBX,[EAX + 0x3800]              ; 0048a375
    ADD EAX,0x38                        ; 0048a37b
        ;   Label: LAB_0048a37b
    MOV dword ptr [EAX + -0x20],0x0     ; 0048a37e | DAT_01c6ce30 | DAT_01c6ce68
    CMP EAX,EBX                         ; 0048a385
    JNZ 0x0048a37b                      ; 0048a387
        ;   XREF to: 0048a37b (CONDITIONAL_JUMP)  ; LAB_0048a37b
    POP EBP                             ; 0048a389
    POP ESI                             ; 0048a38a
    POP EBX                             ; 0048a38b
    RET                                 ; 0048a38c

