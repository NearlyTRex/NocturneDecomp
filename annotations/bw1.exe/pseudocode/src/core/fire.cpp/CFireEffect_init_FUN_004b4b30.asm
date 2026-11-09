; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_init_FUN_004b4b30(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_event.cpp_FUN_004a1d00 at 004a4bb8
;   core_fire.cpp_CFireEffect_load_FUN_004b7370 at 004b7391
;   core_fire.cpp_FUN_004b4b10 at 004b4b16
;   core_game.cpp_FUN_004cf5e0 at 004cfd3d
;   core_game.cpp_FUN_004d6990 at 004d7097
;
; Referenced Globals:
;   undefined4 DAT_01c58a9c
;   undefined4 DAT_01c6eaa0
;   undefined4 DAT_01c6eaa4
;   undefined4 DAT_01c726a8
;   undefined4 DAT_01c726ac
;   undefined4 DAT_01c986b0
;   undefined4 g_SparkPool[0].field36_0x24
;   undefined4 g_SparkPool[1].field36_0x24
;   undefined4 DAT_01c9dab4
;   undefined4 CFirefly_ARRAY_01c9dab8[0].field36_0x24
;   undefined4 CFirefly_ARRAY_01c9dab8[1].field36_0x24
;   undefined4 DAT_01c9f1bc
;   undefined4 DAT_01c9f218
;   undefined4 DAT_01c9f8ec
;   undefined4 g_GlassParticlePool[0].field36_0x24
;   ... and 27 more
;
; Called Functions:
;   core_fire.cpp_CExplosion_ctor_FUN_004b1620
;   core_fire.cpp_CLightningBolt_reset_FUN_004b3480
;   core_fire.cpp_CToss_reset_FUN_004b1c40
;   core_fire.cpp_CTrail_reset_FUN_004b3c70
;   core_fire.cpp_FUN_004abea0
;   core_fire.cpp_FUN_004b1f90
;   core_fire.cpp_FUN_004b2b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4b30
        ;   Label: core_fire.cpp_CFireEffect_init_FUN_004b4b30
    PUSH ESI                            ; 004b4b31
    PUSH EBP                            ; 004b4b32
    MOV EBX,0x1c58aa0                   ; 004b4b33
    XOR EDX,EDX                         ; 004b4b38
    LEA ESI,[EBX + 0x16000]             ; 004b4b3a
    MOV dword ptr [0x01c58a9c],EDX      ; 004b4b40 | DAT_01c58a9c
    PUSH EBX                            ; 004b4b46
        ;   Label: LAB_004b4b46
    CALL core_fire.cpp_FUN_004abea0     ; 004b4b47
        ;   XREF to: 004abea0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004abea0(CSmokeParticle * this_ptr)
    ADD EBX,0x2c                        ; 004b4b4c
    ADD ESP,0x4                         ; 004b4b4f
    CMP EBX,ESI                         ; 004b4b52
    JNZ 0x004b4b46                      ; 004b4b54
        ;   XREF to: 004b4b46 (CONDITIONAL_JUMP)  ; LAB_004b4b46
    MOV EAX,0x1c986b4                   ; 004b4b56
    XOR ECX,ECX                         ; 004b4b5b
    XOR EBX,ESI                         ; 004b4b5d
    MOV dword ptr [0x01c6eaa4],ECX      ; 004b4b5f | DAT_01c6eaa4
    MOV dword ptr [0x01c6eaa0],EBX      ; 004b4b65 | DAT_01c6eaa0
    MOV dword ptr [0x01c986b0],ECX      ; 004b4b6b | DAT_01c986b0
    LEA EBX,[EAX + 0x5400]              ; 004b4b71
    ADD EAX,0x54                        ; 004b4b77
        ;   Label: LAB_004b4b77
    MOV dword ptr [EAX + -0x30],0x0     ; 004b4b7a | g_SparkPool[0].field36_0x24 | g_SparkPool[1].field36_0x24
    CMP EAX,EBX                         ; 004b4b81
    JNZ 0x004b4b77                      ; 004b4b83
        ;   XREF to: 004b4b77 (CONDITIONAL_JUMP)  ; LAB_004b4b77
    MOV EAX,0x1c9dab8                   ; 004b4b85
    LEA EBX,[EAX + 0x1700]              ; 004b4b8a
    ADD EAX,0x5c                        ; 004b4b90
        ;   Label: LAB_004b4b90
    MOV dword ptr [EAX + -0x38],0x0     ; 004b4b93 | CFirefly_ARRAY_01c9dab8[0].field36_0x24 | CFirefly_ARRAY_01c9dab8[1].field36_0x24
    CMP EAX,EBX                         ; 004b4b9a
    JNZ 0x004b4b90                      ; 004b4b9c
        ;   XREF to: 004b4b90 (CONDITIONAL_JUMP)  ; LAB_004b4b90
    MOV EAX,0x1c9f1bc                   ; 004b4b9e
    LEA EBX,[EAX + 0x730]               ; 004b4ba3
    MOV dword ptr [EAX],0x0             ; 004b4ba9 | DAT_01c9f1bc | DAT_01c9f218
        ;   Label: LAB_004b4ba9
    ADD EAX,0x5c                        ; 004b4baf
    CMP EAX,EBX                         ; 004b4bb2
    JNZ 0x004b4ba9                      ; 004b4bb4
        ;   XREF to: 004b4ba9 (CONDITIONAL_JUMP)  ; LAB_004b4ba9
    PUSH EDI                            ; 004b4bb6
    XOR EDI,EDI                         ; 004b4bb7
    XOR EAX,EBX                         ; 004b4bb9
    MOV dword ptr [0x01c726a8],EDI      ; 004b4bbb | DAT_01c726a8
    MOV [0x01c9f8ec],EAX                ; 004b4bc1 | DAT_01c9f8ec
    MOV EAX,0x1c9f8f0                   ; 004b4bc6
    MOV dword ptr [0x01c726ac],EDI      ; 004b4bcb | DAT_01c726ac
    LEA EBX,[EAX + 0xa400]              ; 004b4bd1
    ADD EAX,0xa4                        ; 004b4bd7
        ;   Label: LAB_004b4bd7
    MOV dword ptr [EAX + -0x80],0x0     ; 004b4bdc | g_GlassParticlePool[0].field36_0x24 | g_GlassParticlePool[1].field36_0x24
    CMP EAX,EBX                         ; 004b4be3
    JNZ 0x004b4bd7                      ; 004b4be5
        ;   XREF to: 004b4bd7 (CONDITIONAL_JUMP)  ; LAB_004b4bd7
    MOV EAX,0x1ca9cf4                   ; 004b4be7
    LEA EBX,[EAX + 0x168]               ; 004b4bec
    ADD EAX,0x24                        ; 004b4bf2
        ;   Label: LAB_004b4bf2
    MOV dword ptr [EAX + -0x4],0x0      ; 004b4bf5 | DAT_01ca9d14 | DAT_01ca9d38
    CMP EAX,EBX                         ; 004b4bfc
    JNZ 0x004b4bf2                      ; 004b4bfe
        ;   XREF to: 004b4bf2 (CONDITIONAL_JUMP)  ; LAB_004b4bf2
    XOR EDX,EDX                         ; 004b4c00
    MOV EAX,0x1ca9e60                   ; 004b4c02
    MOV dword ptr [0x01ca9e5c],EDX      ; 004b4c07 | DAT_01ca9e5c
    LEA EBX,[EAX + 0x2900]              ; 004b4c0d
    ADD EAX,0xa4                        ; 004b4c13
        ;   Label: LAB_004b4c13
    MOV dword ptr [EAX + -0x80],0x0     ; 004b4c18 | g_FireballPool[0].field36_0x24 | g_FireballPool[1].field36_0x24
    CMP EAX,EBX                         ; 004b4c1f
    JNZ 0x004b4c13                      ; 004b4c21
        ;   XREF to: 004b4c13 (CONDITIONAL_JUMP)  ; LAB_004b4c13
    XOR ECX,ECX                         ; 004b4c23
    MOV EAX,0x1cac764                   ; 004b4c25
    MOV dword ptr [0x01cac760],ECX      ; 004b4c2a | DAT_01cac760
    LEA EBX,[EAX + 0x1400]              ; 004b4c30
    ADD EAX,0x50                        ; 004b4c36
        ;   Label: LAB_004b4c36
    MOV dword ptr [EAX + -0x2c],0x0     ; 004b4c39 | g_RockPool[0].field36_0x24 | g_RockPool[1].field36_0x24
    CMP EAX,EBX                         ; 004b4c40
    JNZ 0x004b4c36                      ; 004b4c42
        ;   XREF to: 004b4c36 (CONDITIONAL_JUMP)  ; LAB_004b4c36
    XOR EBX,EBX                         ; 004b4c44
    MOV EAX,0x1cadb68                   ; 004b4c46
    MOV dword ptr [0x01cadb64],EBX      ; 004b4c4b | DAT_01cadb64
    LEA EBX,[EAX + 0x1500]              ; 004b4c51
    ADD EAX,0x54                        ; 004b4c57
        ;   Label: LAB_004b4c57
    MOV dword ptr [EAX + -0x30],0x0     ; 004b4c5a | CLeaf_ARRAY_01cadb68[0].field36_0x24 | CLeaf_ARRAY_01cadb68[1].field36_0x24
    CMP EAX,EBX                         ; 004b4c61
    JNZ 0x004b4c57                      ; 004b4c63
        ;   XREF to: 004b4c57 (CONDITIONAL_JUMP)  ; LAB_004b4c57
    XOR ESI,ESI                         ; 004b4c65
    MOV EAX,0x1c9dab8                   ; 004b4c67
    MOV dword ptr [0x01c9dab4],ESI      ; 004b4c6c | DAT_01c9dab4
    LEA EBX,[EAX + 0x1700]              ; 004b4c72
    ADD EAX,0x5c                        ; 004b4c78
        ;   Label: LAB_004b4c78
    MOV dword ptr [EAX + -0x38],0x0     ; 004b4c7b | CFirefly_ARRAY_01c9dab8[0].field36_0x24 | CFirefly_ARRAY_01c9dab8[1].field36_0x24
    CMP EAX,EBX                         ; 004b4c82
    JNZ 0x004b4c78                      ; 004b4c84
        ;   XREF to: 004b4c78 (CONDITIONAL_JUMP)  ; LAB_004b4c78
    MOV EBX,0x1cb0070                   ; 004b4c86
    XOR EDI,EDI                         ; 004b4c8b
    LEA ESI,[EBX + 0x118]               ; 004b4c8d
    MOV dword ptr [0x01cb006c],EDI      ; 004b4c93 | DAT_01cb006c
    PUSH EBX                            ; 004b4c99
        ;   Label: LAB_004b4c99
    CALL core_fire.cpp_CExplosion_ctor_FUN_004b1620 ; 004b4c9a
        ;   XREF to: 004b1620 (UNCONDITIONAL_CALL)  ; CExplosion * core_fire.cpp_CExplosion_ctor_FUN_004b1620(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 004b4c9f
    ADD ESP,0x4                         ; 004b4ca2
    CMP EBX,ESI                         ; 004b4ca5
    JNZ 0x004b4c99                      ; 004b4ca7
        ;   XREF to: 004b4c99 (CONDITIONAL_JUMP)  ; LAB_004b4c99
    MOV EBX,0x1cb018c                   ; 004b4ca9
    XOR EBP,EBP                         ; 004b4cae
    LEA ESI,[EBX + 0x4dd0]              ; 004b4cb0
    MOV dword ptr [0x01cb0188],EBP      ; 004b4cb6 | DAT_01cb0188
    PUSH EBX                            ; 004b4cbc
        ;   Label: LAB_004b4cbc
    CALL core_fire.cpp_CToss_reset_FUN_004b1c40 ; 004b4cbd
        ;   XREF to: 004b1c40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_reset_FUN_004b1c40(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 004b4cc2
    ADD ESP,0x4                         ; 004b4cc8
    CMP EBX,ESI                         ; 004b4ccb
    JNZ 0x004b4cbc                      ; 004b4ccd
        ;   XREF to: 004b4cbc (CONDITIONAL_JUMP)  ; LAB_004b4cbc
    MOV EBX,0x1cb4f60                   ; 004b4ccf
    XOR EAX,EAX                         ; 004b4cd4
    LEA ESI,[EBX + 0x8c0]               ; 004b4cd6
    MOV [0x01cb4f5c],EAX                ; 004b4cdc | DAT_01cb4f5c
    PUSH EBX                            ; 004b4ce1
        ;   Label: LAB_004b4ce1
    CALL core_fire.cpp_FUN_004b1f90     ; 004b4ce2
        ;   XREF to: 004b1f90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b1f90(CCrater * this_ptr)
    ADD EBX,0x70                        ; 004b4ce7
    ADD ESP,0x4                         ; 004b4cea
    CMP EBX,ESI                         ; 004b4ced
    JNZ 0x004b4ce1                      ; 004b4cef
        ;   XREF to: 004b4ce1 (CONDITIONAL_JUMP)  ; LAB_004b4ce1
    MOV EBX,0x1cb5824                   ; 004b4cf1
    XOR EDX,EDX                         ; 004b4cf6
    LEA ESI,[EBX + 0x4650]              ; 004b4cf8
    MOV dword ptr [0x01cb5820],EDX      ; 004b4cfe | DAT_01cb5820
    PUSH EBX                            ; 004b4d04
        ;   Label: LAB_004b4d04
    CALL core_fire.cpp_FUN_004b2b40     ; 004b4d05
        ;   XREF to: 004b2b40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b2b40(CGunFlame * this_ptr)
    ADD EBX,0x24                        ; 004b4d0a
    ADD ESP,0x4                         ; 004b4d0d
    CMP EBX,ESI                         ; 004b4d10
    JNZ 0x004b4d04                      ; 004b4d12
        ;   XREF to: 004b4d04 (CONDITIONAL_JUMP)  ; LAB_004b4d04
    MOV EBX,0x1cb9e78                   ; 004b4d14
    XOR ECX,ECX                         ; 004b4d19
    LEA ESI,[EBX + 0x1b8]               ; 004b4d1b
    MOV dword ptr [0x01cb9e74],ECX      ; 004b4d21 | DAT_01cb9e74
    PUSH EBX                            ; 004b4d27
        ;   Label: LAB_004b4d27
    CALL core_fire.cpp_CLightningBolt_reset_FUN_004b3480 ; 004b4d28
        ;   XREF to: 004b3480 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_reset_FUN_004b3480(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 004b4d2d
    ADD ESP,0x4                         ; 004b4d30
    CMP EBX,ESI                         ; 004b4d33
    JNZ 0x004b4d27                      ; 004b4d35
        ;   XREF to: 004b4d27 (CONDITIONAL_JUMP)  ; LAB_004b4d27
    XOR EBX,ESI                         ; 004b4d37
    MOV dword ptr [0x01cba030],EBX      ; 004b4d39 | DAT_01cba030
    MOV EBX,0x1cba034                   ; 004b4d3f
    LEA ESI,[EBX + 0xe10]               ; 004b4d44
    PUSH EBX                            ; 004b4d4a
        ;   Label: LAB_004b4d4a
    CALL core_fire.cpp_CTrail_reset_FUN_004b3c70 ; 004b4d4b
        ;   XREF to: 004b3c70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_reset_FUN_004b3c70(CTrail * this_ptr)
    ADD EBX,0x24                        ; 004b4d50
    ADD ESP,0x4                         ; 004b4d53
    CMP EBX,ESI                         ; 004b4d56
    JNZ 0x004b4d4a                      ; 004b4d58
        ;   XREF to: 004b4d4a (CONDITIONAL_JUMP)  ; LAB_004b4d4a
    XOR ESI,ESI                         ; 004b4d5a
    MOV EAX,0x1cbae48                   ; 004b4d5c
    MOV dword ptr [0x01cbae44],ESI      ; 004b4d61 | DAT_01cbae44
    LEA EBX,[EAX + 0x12c0]              ; 004b4d67
    ADD EAX,0x60                        ; 004b4d6d
        ;   Label: LAB_004b4d6d
    MOV dword ptr [EAX + -0x3c],0x0     ; 004b4d70 | g_ShellPool[0].field36_0x24 | g_ShellPool[1].field36_0x24
    CMP EAX,EBX                         ; 004b4d77
    JNZ 0x004b4d6d                      ; 004b4d79
        ;   XREF to: 004b4d6d (CONDITIONAL_JUMP)  ; LAB_004b4d6d
    XOR EDI,EDI                         ; 004b4d7b
    MOV EAX,0x1cbc10c                   ; 004b4d7d
    MOV dword ptr [0x01cbc108],EDI      ; 004b4d82 | DAT_01cbc108
    LEA EBX,[EAX + 0x4000]              ; 004b4d88
    POP EDI                             ; 004b4d8e
    ADD EAX,0x40                        ; 004b4d8f
        ;   Label: LAB_004b4d8f
    MOV dword ptr [EAX + -0x1c],0x0     ; 004b4d92 | g_PopcornPool[0].field36_0x24 | g_PopcornPool[1].field36_0x24
    CMP EAX,EBX                         ; 004b4d99
    JNZ 0x004b4d8f                      ; 004b4d9b
        ;   XREF to: 004b4d8f (CONDITIONAL_JUMP)  ; LAB_004b4d8f
    XOR EBP,EBP                         ; 004b4d9d
    MOV EAX,0x1cc0110                   ; 004b4d9f
    MOV dword ptr [0x01cc010c],EBP      ; 004b4da4 | DAT_01cc010c
    LEA EBX,[EAX + 0x4000]              ; 004b4daa
    ADD EAX,0x40                        ; 004b4db0
        ;   Label: LAB_004b4db0
    MOV dword ptr [EAX + -0x1c],0x0     ; 004b4db3 | g_RainDropPool[0].field36_0x24 | g_RainDropPool[1].field36_0x24
    CMP EAX,EBX                         ; 004b4dba
    JNZ 0x004b4db0                      ; 004b4dbc
        ;   XREF to: 004b4db0 (CONDITIONAL_JUMP)  ; LAB_004b4db0
    POP EBP                             ; 004b4dbe
    POP ESI                             ; 004b4dbf
    POP EBX                             ; 004b4dc0
    RET                                 ; 004b4dc1

