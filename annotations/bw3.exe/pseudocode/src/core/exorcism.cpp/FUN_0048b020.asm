; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_exorcism_cpp_FUN_0048b020(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_wp_nomana_wav_005bdd64+2
;   TerminatedCString s_wp_exorcism_wav_5_005bdd74
;   undefined4 DAT_005bdd8e
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01c6e35c
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364280_0x14d138
;   undefined4 g_CDemonSetInstance.field1364292_0x14d144
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_crate.cpp_FUN_004461c0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_glass.cpp_FUN_004cc040
;   core_glass.cpp_FUN_004cc5d0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90
;   core_setcolid.cpp_FUN_0053ccc0
;   core_setcolid.cpp_FUN_0053ebd0
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0
;   core_trigger.cpp_FUN_0056ede0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b020
        ;   Label: core_exorcism.cpp_FUN_0048b020
    PUSH ESI                            ; 0048b021
    PUSH EDI                            ; 0048b022
    PUSH EBP                            ; 0048b023
    MOV EBP,ESP                         ; 0048b024
    SUB ESP,0xb8                        ; 0048b026
    AND ESP,0xfffffff8                  ; 0048b02c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048b02f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b032
    PUSH EDX                            ; 0048b035
    MOV EAX,dword ptr [EAX + 0x154]     ; 0048b036
    LEA ESI,[ESP + 0x9c]                ; 0048b03c
    LEA EDI,[ESP + 0x48]                ; 0048b043
    CALL dword ptr [EAX + 0xe0]         ; 0048b047
    LEA ESI,[ESP + 0x9c]                ; 0048b04d
    ADD ESP,0x4                         ; 0048b054
    LEA EAX,[ESP + 0x44]                ; 0048b057
    MOV ECX,dword ptr [EBP + 0x14]      ; 0048b05b
    PUSH EAX                            ; 0048b05e
    MOVSD ES:EDI,ESI                    ; 0048b05f
    MOVSD ES:EDI,ESI                    ; 0048b060
    MOVSD ES:EDI,ESI                    ; 0048b061
    PUSH ECX                            ; 0048b062
    LEA ESI,[ESP + 0x88]                ; 0048b063
    LEA EDI,[ESP + 0x34]                ; 0048b06a
    CALL core_actor.cpp_FUN_00408b80    ; 0048b06e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0048b073
    LEA ESI,[ESP + 0x80]                ; 0048b076
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b07d
    MOVSD ES:EDI,ESI                    ; 0048b080
    MOVSD ES:EDI,ESI                    ; 0048b081
    MOVSD ES:EDI,ESI                    ; 0048b082
    FLDZ                                ; 0048b083
    FCOMP float ptr [EAX + 0x5a8]       ; 0048b085
    FNSTSW AX                           ; 0048b08b
    SAHF                                ; 0048b08d
    JNC 0x0048b436                      ; 0048b08e
        ;   XREF to: 0048b436 (CONDITIONAL_JUMP)  ; LAB_0048b436
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b094
        ;   Label: LAB_0048b094
    MOV EDX,dword ptr [EAX + 0x594]     ; 0048b097
    MOV dword ptr [EAX + 0x598],0x1     ; 0048b09d
    TEST EDX,EDX                        ; 0048b0a7
    JZ 0x0048b0b8                       ; 0048b0a9
        ;   XREF to: 0048b0b8 (CONDITIONAL_JUMP)  ; LAB_0048b0b8
    CMP dword ptr [EAX + 0x59c],0x0     ; 0048b0ab
    JNZ 0x0048b484                      ; 0048b0b2
        ;   XREF to: 0048b484 (CONDITIONAL_JUMP)  ; LAB_0048b484
    MOV EBX,dword ptr [0x01c6e35c]      ; 0048b0b8 | DAT_01c6e35c
        ;   Label: LAB_0048b0b8
    PUSH EBX                            ; 0048b0be
    CALL sound_sndmain.cpp_FUN_00556700 ; 0048b0bf
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0048b0c4
    TEST EAX,EAX                        ; 0048b0c7
    JZ 0x0048b490                       ; 0048b0c9
        ;   XREF to: 0048b490 (CONDITIONAL_JUMP)  ; LAB_0048b490
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b0cf
        ;   Label: LAB_0048b0cf
    MOV dword ptr [EAX + 0x59c],0x0     ; 0048b0d2
    MOV EAX,[0x01d5ba70]                ; 0048b0dc | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 0048b0e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b0e2
    MOV EDX,dword ptr [EAX + 0x304]     ; 0048b0e5
    PUSH EDX                            ; 0048b0eb
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b0ec
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048b0f1
    TEST EAX,EAX                        ; 0048b0f4
    JZ 0x0048b107                       ; 0048b0f6
        ;   XREF to: 0048b107 (CONDITIONAL_JUMP)  ; LAB_0048b107
    FLD float ptr [EAX + 0x2538]        ; 0048b0f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b0fe
    FSTP float ptr [EAX + 0x5a0]        ; 0048b101
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b107
        ;   Label: LAB_0048b107
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 0048b10a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048b110
    MOV dword ptr [ESP + 0x54],EAX      ; 0048b113
    LEA EAX,[ESP + 0x50]                ; 0048b117
    XOR ECX,ECX                         ; 0048b11b
    PUSH EAX                            ; 0048b11d
    LEA EDI,[ESP + 0x78]                ; 0048b11e
    MOV dword ptr [ESP + 0x54],ECX      ; 0048b122
    PUSH ESI                            ; 0048b126
    LEA ESI,[ESP + 0x40]                ; 0048b127
    MOV dword ptr [ESP + 0x60],ECX      ; 0048b12b
    CALL core_actor.cpp_FUN_00408b00    ; 0048b12f
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 0048b134
    LEA ESI,[ESP + 0x38]                ; 0048b137
    FLD float ptr [ESP + 0x2c]          ; 0048b13b
    FLD float ptr [ESP + 0x30]          ; 0048b13f
    FLD float ptr [ESP + 0x34]          ; 0048b143
    MOVSD ES:EDI,ESI                    ; 0048b147
    MOVSD ES:EDI,ESI                    ; 0048b148
    MOVSD ES:EDI,ESI                    ; 0048b149
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b14a
    LEA EDI,[ESP + 0x20]                ; 0048b14d
    LEA ESI,[ESP + 0x68]                ; 0048b151
    FXCH ST2                            ; 0048b155
    FADD float ptr [ESP + 0x74]         ; 0048b157
    FXCH                                ; 0048b15b
    FADD float ptr [ESP + 0x78]         ; 0048b15d
    FXCH ST2                            ; 0048b161
    FADD float ptr [ESP + 0x7c]         ; 0048b163
    FXCH                                ; 0048b167
    FSTP float ptr [ESP + 0x68]         ; 0048b169
    FXCH                                ; 0048b16d
    FSTP float ptr [ESP + 0x6c]         ; 0048b16f
    FSTP float ptr [ESP + 0x70]         ; 0048b173
    MOVSD ES:EDI,ESI                    ; 0048b177
    MOVSD ES:EDI,ESI                    ; 0048b178
    MOVSD ES:EDI,ESI                    ; 0048b179
    FLD float ptr [EAX + 0x2e8]         ; 0048b17a
    FDIVR double ptr [0x005bdd8e]       ; 0048b180 | DAT_005bdd8e
    FLD float ptr [ESP + 0x74]          ; 0048b186
    FXCH                                ; 0048b18a
    FSTP float ptr [ESP + 0xa4]         ; 0048b18c
    FMUL float ptr [ESP + 0xa4]         ; 0048b193
    FLD float ptr [ESP + 0x78]          ; 0048b19a
    FMUL float ptr [ESP + 0xa4]         ; 0048b19e
    FLD float ptr [ESP + 0x7c]          ; 0048b1a5
    FMUL float ptr [ESP + 0xa4]         ; 0048b1a9
    FLD float ptr [ESP + 0x2c]          ; 0048b1b0
    FLD float ptr [ESP + 0x30]          ; 0048b1b4
    LEA EDI,[ESP + 0x8]                 ; 0048b1b8
    LEA ESI,[ESP + 0x5c]                ; 0048b1bc
    FXCH ST4                            ; 0048b1c0
    FSTP float ptr [ESP + 0x5c]         ; 0048b1c2
    FXCH ST2                            ; 0048b1c6
    FSTP float ptr [ESP + 0x60]         ; 0048b1c8
    FSTP float ptr [ESP + 0x64]         ; 0048b1cc
    MOVSD ES:EDI,ESI                    ; 0048b1d0
    MOVSD ES:EDI,ESI                    ; 0048b1d1
    MOVSD ES:EDI,ESI                    ; 0048b1d2
    FLD float ptr [ESP + 0x34]          ; 0048b1d3
    LEA EDI,[ESP + 0x8c]                ; 0048b1d7
    LEA ESI,[ESP + 0x14]                ; 0048b1de
    FXCH                                ; 0048b1e2
    FSUB float ptr [ESP + 0x8]          ; 0048b1e4
    FXCH ST2                            ; 0048b1e8
    FSUB float ptr [ESP + 0xc]          ; 0048b1ea
    FXCH                                ; 0048b1ee
    FSUB float ptr [ESP + 0x10]         ; 0048b1f0
    FXCH ST2                            ; 0048b1f4
    FSTP float ptr [ESP + 0x14]         ; 0048b1f6
    FSTP float ptr [ESP + 0x18]         ; 0048b1fa
    FSTP float ptr [ESP + 0x1c]         ; 0048b1fe
    MOVSD ES:EDI,ESI                    ; 0048b202
    MOVSD ES:EDI,ESI                    ; 0048b203
    MOVSD ES:EDI,ESI                    ; 0048b204
    MOV EDI,dword ptr [0x00603b28]      ; 0048b205 | g_CDemonSetPtr
    PUSH EDI                            ; 0048b20b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0048b20c
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0048b211
    PUSH 0x1                            ; 0048b214
    MOV EAX,[0x00603b28]                ; 0048b216 | g_CDemonSetPtr
    PUSH EAX                            ; 0048b21b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 0048b21c
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0048b221
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048b224
    PUSH EDX                            ; 0048b227
    MOV ECX,dword ptr [0x00603b28]      ; 0048b228 | g_CDemonSetPtr
    PUSH ECX                            ; 0048b22e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0048b22f
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0048b234
    MOV EBX,dword ptr [0x00603b28]      ; 0048b237 | g_CDemonSetPtr
    PUSH EBX                            ; 0048b23d | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ebd0 ; 0048b23e
        ;   XREF to: 0053ebd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_0053ebd0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0048b243
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b246
    MOV ESI,dword ptr [EAX + 0x304]     ; 0048b249
    TEST ESI,ESI                        ; 0048b24f
    JNZ 0x0048b4b7                      ; 0048b251
        ;   XREF to: 0048b4b7 (CONDITIONAL_JUMP)  ; LAB_0048b4b7
    XOR EDX,EDX                         ; 0048b257
        ;   Label: LAB_0048b257
    MOV dword ptr [ESP + 0xac],EDX      ; 0048b259
    LEA EAX,[ESP + 0x20]                ; 0048b260
        ;   Label: LAB_0048b260
    PUSH EAX                            ; 0048b264
    LEA EAX,[ESP + 0x90]                ; 0048b265
    PUSH EAX                            ; 0048b26c
    MOV ECX,dword ptr [0x00603b28]      ; 0048b26d | g_CDemonSetPtr
    PUSH ECX                            ; 0048b273 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 0048b274
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048b279
    FLD float ptr [ESP + 0xc0]          ; 0048b280
    ADD ESP,0xc                         ; 0048b287
    FLDZ                                ; 0048b28a
    FXCH                                ; 0048b28c
    FSTP double ptr [ESP]               ; 0048b28e
    FCOMP double ptr [ESP]              ; 0048b291
    FNSTSW AX                           ; 0048b294
    SAHF                                ; 0048b296
    JA 0x0048b40f                       ; 0048b297
        ;   XREF to: 0048b40f (CONDITIONAL_JUMP)  ; LAB_0048b40f
    FLD1                                ; 0048b29d
    FCOMP double ptr [ESP]              ; 0048b29f
    FNSTSW AX                           ; 0048b2a2
    SAHF                                ; 0048b2a4
    JC 0x0048b40f                       ; 0048b2a5
        ;   XREF to: 0048b40f (CONDITIONAL_JUMP)  ; LAB_0048b40f
    MOV EBX,dword ptr [0x007e2cec]      ; 0048b2ab | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 0048b2b1 | g_CDemonSetPtr
    PUSH EBX                            ; 0048b2b6
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0048b2b7 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ESI                            ; 0048b2bd
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b2be
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048b2c3
    MOV dword ptr [ESP + 0xb0],EAX      ; 0048b2c6
    TEST EAX,EAX                        ; 0048b2cd
    JZ 0x0048b2ee                       ; 0048b2cf
        ;   XREF to: 0048b2ee (CONDITIONAL_JUMP)  ; LAB_0048b2ee
    PUSH EAX                            ; 0048b2d1
    MOV EBX,dword ptr [EAX + 0x154]     ; 0048b2d2
    CALL dword ptr [EBX + 0x10c]        ; 0048b2d8
    ADD ESP,0x4                         ; 0048b2de
    TEST EAX,EAX                        ; 0048b2e1
    JLE 0x0048b2ee                      ; 0048b2e3
        ;   XREF to: 0048b2ee (CONDITIONAL_JUMP)  ; LAB_0048b2ee
    XOR EDI,EDI                         ; 0048b2e5
    MOV dword ptr [ESP + 0xb0],EDI      ; 0048b2e7
    MOV EAX,[0x01d22e04]                ; 0048b2ee | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0048b2ee
    PUSH EAX                            ; 0048b2f3
    MOV EAX,[0x00603b28]                ; 0048b2f4 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0048b2f9 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0048b2ff
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b300
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ECX,dword ptr [0x02cfd894]      ; 0048b305 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 0048b30b
    MOV ESI,EAX                         ; 0048b30e
    MOV EAX,[0x00603b28]                ; 0048b310 | g_CDemonSetPtr
    PUSH ECX                            ; 0048b315
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 0048b316 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EBX                            ; 0048b31c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b31d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDI,dword ptr [0x007f8fc8]      ; 0048b322 | g_CCrateClassInfo.name_hash
    ADD ESP,0x8                         ; 0048b328
    MOV EBX,EAX                         ; 0048b32b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048b32d
    MOV EAX,[0x00603b28]                ; 0048b334 | g_CDemonSetPtr
    PUSH EDI                            ; 0048b339
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0048b33a | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0048b340
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b341
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ECX,dword ptr [0x01d0cf60]      ; 0048b346 | g_CFlameCanClassInfo.name_hash
    ADD ESP,0x8                         ; 0048b34c
    MOV EDI,EAX                         ; 0048b34f
    MOV EAX,[0x00603b28]                ; 0048b351 | g_CDemonSetPtr
    PUSH ECX                            ; 0048b356
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0048b357 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0048b35d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b35e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048b363
    CMP dword ptr [ESP + 0xb0],0x0      ; 0048b366
    JZ 0x0048b4cb                       ; 0048b36e
        ;   XREF to: 0048b4cb (CONDITIONAL_JUMP)  ; LAB_0048b4cb
    MOV ESI,dword ptr [0x01d5ba70]      ; 0048b374 | g_CHeroClassInfo.name_hash
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b37a
    PUSH ESI                            ; 0048b37d
    MOV EDI,dword ptr [EAX + 0x304]     ; 0048b37e
    PUSH EDI                            ; 0048b384
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b385
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048b38a
    TEST EAX,EAX                        ; 0048b38d
    JZ 0x0048b3b3                       ; 0048b38f
        ;   XREF to: 0048b3b3 (CONDITIONAL_JUMP)  ; LAB_0048b3b3
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0048b391
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0048b398
    PUSH EDX                            ; 0048b39f
    MOV EAX,dword ptr [EAX + 0x154]     ; 0048b3a0
    CALL dword ptr [EAX + 0xe0]         ; 0048b3a6
    ADD ESP,0x4                         ; 0048b3ac
    TEST EAX,EAX                        ; 0048b3af
    JNZ 0x0048b40f                      ; 0048b3b1
        ;   XREF to: 0048b40f (CONDITIONAL_JUMP)  ; LAB_0048b40f
    MOV ECX,dword ptr [0x01c5bc48]      ; 0048b3b3 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0048b3b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b3b9
    PUSH ECX                            ; 0048b3bc
    MOV EBX,dword ptr [EAX + 0x304]     ; 0048b3bd
    PUSH EBX                            ; 0048b3c3
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b3c4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048b3c9
    TEST EAX,EAX                        ; 0048b3cc
    JZ 0x0048b3eb                       ; 0048b3ce
        ;   XREF to: 0048b3eb (CONDITIONAL_JUMP)  ; LAB_0048b3eb
    MOV ESI,dword ptr [0x01c5bc48]      ; 0048b3d0 | g_CEnemyClassInfo.name_hash
    PUSH ESI                            ; 0048b3d6
    MOV EDI,dword ptr [ESP + 0xb4]      ; 0048b3d7
    PUSH EDI                            ; 0048b3de
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0048b3df
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0048b3e4
    TEST EAX,EAX                        ; 0048b3e7
    JNZ 0x0048b40f                      ; 0048b3e9
        ;   XREF to: 0048b40f (CONDITIONAL_JUMP)  ; LAB_0048b40f
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0048b3eb
        ;   Label: LAB_0048b3eb
    FLDZ                                ; 0048b3f2
    FCOMP float ptr [EAX + 0x2538]      ; 0048b3f4
    FNSTSW AX                           ; 0048b3fa
    SAHF                                ; 0048b3fc
    JNC 0x0048b40f                      ; 0048b3fd
        ;   XREF to: 0048b40f (CONDITIONAL_JUMP)  ; LAB_0048b40f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b3ff
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0048b402
    MOV dword ptr [EAX + 0x59c],EBX     ; 0048b409
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b40f
        ;   Label: LAB_0048b40f
    MOV dword ptr [EAX + 0x5a4],0x0     ; 0048b412
    MOV EAX,[0x00603b28]                ; 0048b41c | g_CDemonSetPtr
    PUSH EAX                            ; 0048b421 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0048b422
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 0048b427
    ADD ESP,0x4                         ; 0048b42c
    MOV ESP,EBP                         ; 0048b42f
    POP EBP                             ; 0048b431
    POP EDI                             ; 0048b432
    POP ESI                             ; 0048b433
    POP EBX                             ; 0048b434
    RET                                 ; 0048b435
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048b436
        ;   Label: LAB_0048b436
    PUSH EBX                            ; 0048b439
    CALL core_weapon.cpp_FUN_0057b880   ; 0048b43a
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0057b880()
    ADD ESP,0x4                         ; 0048b43f
    TEST EAX,EAX                        ; 0048b442
    JZ 0x0048b455                       ; 0048b444
        ;   XREF to: 0048b455 (CONDITIONAL_JUMP)  ; LAB_0048b455
    MOV dword ptr [EBX + 0x5a8],0x3f800000 ; 0048b446
    JMP 0x0048b094                      ; 0048b450
        ;   XREF to: 0048b094 (UNCONDITIONAL_JUMP)  ; LAB_0048b094
    LEA EAX,[ESP + 0x2c]                ; 0048b455
        ;   Label: LAB_0048b455
    PUSH EAX                            ; 0048b459
    PUSH 0x5bdd66                       ; 0048b45a | s_wp_nomana_wav_005bdd64+2
    PUSH EBX                            ; 0048b45f
    MOV EDI,dword ptr [0x006045f8]      ; 0048b460 | DAT_006045f8
    PUSH EDI                            ; 0048b466
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0048b467
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0048b46c
    MOV EAX,EBX                         ; 0048b46f
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 0048b471
    XOR EAX,EBX                         ; 0048b47b
    MOV ESP,EBP                         ; 0048b47d
    POP EBP                             ; 0048b47f
    POP EDI                             ; 0048b480
    POP ESI                             ; 0048b481
    POP EBX                             ; 0048b482
    RET                                 ; 0048b483
    MOV EAX,0x1                         ; 0048b484
        ;   Label: LAB_0048b484
    MOV ESP,EBP                         ; 0048b489
    POP EBP                             ; 0048b48b
    POP EDI                             ; 0048b48c
    POP ESI                             ; 0048b48d
    POP EBX                             ; 0048b48e
    RET                                 ; 0048b48f
    LEA EAX,[ESP + 0x2c]                ; 0048b490
        ;   Label: LAB_0048b490
    PUSH EAX                            ; 0048b494
    PUSH 0x5bdd74                       ; 0048b495 | = "wp_exorcism.wav @ .5"
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048b49a
    PUSH ESI                            ; 0048b49d
    MOV EDI,dword ptr [0x006045f8]      ; 0048b49e | DAT_006045f8
    PUSH EDI                            ; 0048b4a4
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0048b4a5
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0048b4aa
    MOV [0x01c6e35c],EAX                ; 0048b4ad | DAT_01c6e35c
    JMP 0x0048b0cf                      ; 0048b4b2
        ;   XREF to: 0048b0cf (UNCONDITIONAL_JUMP)  ; LAB_0048b0cf
    PUSH ESI                            ; 0048b4b7
        ;   Label: LAB_0048b4b7
    MOV EAX,[0x00603b28]                ; 0048b4b8 | g_CDemonSetPtr
    PUSH EAX                            ; 0048b4bd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0048b4be
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0048b4c3
    JMP 0x0048b257                      ; 0048b4c6
        ;   XREF to: 0048b257 (UNCONDITIONAL_JUMP)  ; LAB_0048b257
    TEST ESI,ESI                        ; 0048b4cb
        ;   Label: LAB_0048b4cb
    JNZ 0x0048b4f1                      ; 0048b4cd
        ;   XREF to: 0048b4f1 (CONDITIONAL_JUMP)  ; LAB_0048b4f1
    TEST EBX,EBX                        ; 0048b4cf
    JNZ 0x0048b518                      ; 0048b4d1
        ;   XREF to: 0048b518 (CONDITIONAL_JUMP)  ; LAB_0048b518
    TEST EDI,EDI                        ; 0048b4d3
    JNZ 0x0048b578                      ; 0048b4d5
        ;   XREF to: 0048b578 (CONDITIONAL_JUMP)  ; LAB_0048b578
    TEST EAX,EAX                        ; 0048b4db
    JZ 0x0048b40f                       ; 0048b4dd
        ;   XREF to: 0048b40f (CONDITIONAL_JUMP)  ; LAB_0048b40f
    PUSH EAX                            ; 0048b4e3
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 0048b4e4
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0048b4e9
    JMP 0x0048b581                      ; 0048b4ec
        ;   XREF to: 0048b581 (UNCONDITIONAL_JUMP)  ; LAB_0048b581
    PUSH ESI                            ; 0048b4f1
        ;   Label: LAB_0048b4f1
    CALL core_glass.cpp_FUN_004cc5d0    ; 0048b4f2
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0048b4f7
    TEST EAX,EAX                        ; 0048b4fa
    JZ 0x0048b40f                       ; 0048b4fc
        ;   XREF to: 0048b40f (CONDITIONAL_JUMP)  ; LAB_0048b40f
    MOV EAX,[0x00603b28]                ; 0048b502 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0048b507
    PUSH EAX                            ; 0048b50c | g_CDemonSetInstance.field1364280_0x14d138
    PUSH ESI                            ; 0048b50d
    CALL core_glass.cpp_FUN_004cc040    ; 0048b50e
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 0048b513
    JMP 0x0048b581                      ; 0048b516
        ;   XREF to: 0048b581 (UNCONDITIONAL_JUMP)  ; LAB_0048b581
    PUSH EBX                            ; 0048b518
        ;   Label: LAB_0048b518
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 0048b519
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0048b51e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048b521
    PUSH ESI                            ; 0048b524
    PUSH EBX                            ; 0048b525
    CALL core_trigger.cpp_FUN_0056ede0  ; 0048b526
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0048b52b
    TEST EAX,EAX                        ; 0048b52e
    JZ 0x0048b55f                       ; 0048b530
        ;   XREF to: 0048b55f (CONDITIONAL_JUMP)  ; LAB_0048b55f
    PUSH ESI                            ; 0048b532
    MOV EAX,dword ptr [ESI + 0x154]     ; 0048b533
    CALL dword ptr [EAX + 0xec]         ; 0048b539
    MOV dword ptr [ESP + 0xb8],EAX      ; 0048b53f
    FLD float ptr [ESP + 0xb8]          ; 0048b546
    ADD ESP,0x4                         ; 0048b54d
    SUB ESP,0x4                         ; 0048b550
    FSTP float ptr [ESP]                ; 0048b553
    PUSH EBX                            ; 0048b556
    CALL core_trigger.cpp_FUN_0056ee20  ; 0048b557
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0048b55c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0048b55f
        ;   Label: LAB_0048b55f
    PUSH EAX                            ; 0048b566
    MOV EDX,dword ptr [0x00603b28]      ; 0048b567 | g_CDemonSetPtr
    PUSH EDX                            ; 0048b56d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0048b56e
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0048b573
    JMP 0x0048b581                      ; 0048b576
        ;   XREF to: 0048b581 (UNCONDITIONAL_JUMP)  ; LAB_0048b581
    PUSH EDI                            ; 0048b578
        ;   Label: LAB_0048b578
    CALL core_crate.cpp_FUN_004461c0    ; 0048b579
        ;   XREF to: 004461c0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_004461c0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0048b57e
    MOV ECX,dword ptr [ESP + 0xac]      ; 0048b581
        ;   Label: LAB_0048b581
    INC ECX                             ; 0048b588
    MOV dword ptr [ESP + 0xac],ECX      ; 0048b589
    CMP ECX,0x4                         ; 0048b590
    JL 0x0048b260                       ; 0048b593
        ;   XREF to: 0048b260 (CONDITIONAL_JUMP)  ; LAB_0048b260
    JMP 0x0048b40f                      ; 0048b599
        ;   XREF to: 0048b40f (UNCONDITIONAL_JUMP)  ; LAB_0048b40f

