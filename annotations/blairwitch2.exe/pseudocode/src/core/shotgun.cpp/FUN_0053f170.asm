; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_shotgun_cpp_FUN_0053f170(CWeapon *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_005e67d2
;   TerminatedCString s_shotgun_wav_005e67e5
;   undefined4 DAT_005e67f1
;   undefined4 DAT_005e67f5
;   undefined4 DAT_005e67fd
;   undefined4 DAT_005e6805
;   undefined4 DAT_005e680d
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040cfc0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_crate.cpp_FUN_0043a350
;   core_fire.cpp_FUN_0049cd50
;   core_fire.cpp_FUN_0049d120
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
;   core_glass.cpp_FUN_004c6d40
;   core_glass.cpp_FUN_004c72d0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f170
        ;   Label: core_shotgun.cpp_FUN_0053f170
    PUSH ESI                            ; 0053f171
    PUSH EDI                            ; 0053f172
    PUSH EBP                            ; 0053f173
    MOV EBP,ESP                         ; 0053f174
    SUB ESP,0x180                       ; 0053f176
    AND ESP,0xfffffff8                  ; 0053f17c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053f17f
    PUSH EBX                            ; 0053f182
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053f183
    LEA ESI,[ESP + 0x130]               ; 0053f189
    LEA EDI,[ESP + 0x124]               ; 0053f190
    CALL dword ptr [EAX + 0xe8]         ; 0053f197
    ADD ESP,0x4                         ; 0053f19d
    LEA EAX,[ESP + 0x120]               ; 0053f1a0
    LEA ESI,[ESP + 0x12c]               ; 0053f1a7
    PUSH EAX                            ; 0053f1ae
    MOVSD ES:EDI,ESI                    ; 0053f1af
    MOVSD ES:EDI,ESI                    ; 0053f1b0
    MOVSD ES:EDI,ESI                    ; 0053f1b1
    PUSH EBX                            ; 0053f1b2
    LEA ESI,[ESP + 0x98]                ; 0053f1b3
    CALL core_actor.cpp_FUN_00408d70    ; 0053f1ba
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0053f1bf
    LEA EDI,[ESP + 0xa8]                ; 0053f1c2
    LEA ESI,[ESP + 0x90]                ; 0053f1c9
    PUSH EBX                            ; 0053f1d0
    MOVSD ES:EDI,ESI                    ; 0053f1d1
    MOVSD ES:EDI,ESI                    ; 0053f1d2
    MOVSD ES:EDI,ESI                    ; 0053f1d3
    CALL core_weapon.cpp_CWeapon_fire_FUN_0058a290 ; 0053f1d4
        ;   XREF to: 0058a290 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0058a290(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0053f1d9
    TEST EAX,EAX                        ; 0053f1dc
    JZ 0x0053f51b                       ; 0053f1de
        ;   XREF to: 0053f51b (CONDITIONAL_JUMP)  ; LAB_0053f51b
    FLD float ptr [EBX + 0x6d4]         ; 0053f1e4
    FMUL float ptr [0x005e67f1]         ; 0053f1ea | DAT_005e67f1
    FMUL double ptr [0x005e67f5]        ; 0053f1f0 | DAT_005e67f5
    FPTAN                               ; 0053f1f6
    FSTP ST0                            ; 0053f1f8
    PUSH 0xf                            ; 0053f1fa
    FMUL float ptr [EBX + 0x444]        ; 0053f1fc
    PUSH 0xa                            ; 0053f202
    FSTP float ptr [ESP + 0x154]        ; 0053f204
    CALL core_actor.cpp_FUN_0040cfc0    ; 0053f20b
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053f210
    XOR ECX,ECX                         ; 0053f213
    MOV dword ptr [ESP + 0x15c],EAX     ; 0053f215
    MOV dword ptr [ESP + 0x150],ECX     ; 0053f21c
    TEST EAX,EAX                        ; 0053f223
    JLE 0x0053f49a                      ; 0053f225
        ;   XREF to: 0053f49a (CONDITIONAL_JUMP)  ; LAB_0053f49a
    PUSH 0x40c90fdb                     ; 0053f22b
        ;   Label: LAB_0053f22b
    PUSH 0x0                            ; 0053f230
    CALL core_actor.cpp_FUN_0040cf60    ; 0053f232
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x184],EAX     ; 0053f237
    FLD float ptr [ESP + 0x184]         ; 0053f23e
    ADD ESP,0x8                         ; 0053f245
    PUSH dword ptr [ESP + 0x14c]        ; 0053f248
    PUSH 0x0                            ; 0053f24f
    FSTP float ptr [ESP + 0x160]        ; 0053f251
    CALL core_actor.cpp_FUN_0040cf60    ; 0053f258
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x184],EAX     ; 0053f25d
    FLD float ptr [ESP + 0x184]         ; 0053f264
    ADD ESP,0x8                         ; 0053f26b
    FLD float ptr [ESP + 0x158]         ; 0053f26e
    FLD ST0                             ; 0053f275
    FCOS                                ; 0053f277
    FXCH                                ; 0053f279
    FSIN                                ; 0053f27b
    FXCH                                ; 0053f27d
    FMUL ST2                            ; 0053f27f
    FXCH                                ; 0053f281
    FMULP ST2                           ; 0053f283
    FSTP float ptr [ESP + 0x108]        ; 0053f285
    FSTP float ptr [ESP + 0x10c]        ; 0053f28c
    MOV EAX,dword ptr [EBX + 0x444]     ; 0053f293
    MOV dword ptr [ESP + 0x110],EAX     ; 0053f299
    LEA EAX,[ESP + 0x108]               ; 0053f2a0
    PUSH EAX                            ; 0053f2a7
    PUSH EBX                            ; 0053f2a8
    LEA ESI,[ESP + 0xa4]                ; 0053f2a9
    LEA EDI,[ESP + 0x68]                ; 0053f2b0
    CALL core_actor.cpp_FUN_00408cf0    ; 0053f2b4
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xa4]                ; 0053f2b9
    ADD ESP,0x8                         ; 0053f2c0
    MOVSD ES:EDI,ESI                    ; 0053f2c3
    MOVSD ES:EDI,ESI                    ; 0053f2c4
    MOVSD ES:EDI,ESI                    ; 0053f2c5
    LEA EAX,[ESP + 0x60]                ; 0053f2c6
    LEA ESI,[ESP + 0x108]               ; 0053f2ca
    CMP ESI,EAX                         ; 0053f2d1
    JZ 0x0053f2f6                       ; 0053f2d3
        ;   XREF to: 0053f2f6 (CONDITIONAL_JUMP)  ; LAB_0053f2f6
    MOV EAX,dword ptr [ESP + 0x60]      ; 0053f2d5
    MOV dword ptr [ESP + 0x108],EAX     ; 0053f2d9
    MOV EAX,dword ptr [ESP + 0x64]      ; 0053f2e0
    MOV dword ptr [ESP + 0x10c],EAX     ; 0053f2e4
    MOV EAX,dword ptr [ESP + 0x68]      ; 0053f2eb
    MOV dword ptr [ESP + 0x110],EAX     ; 0053f2ef
    FLD float ptr [ESP + 0xa8]          ; 0053f2f6
        ;   Label: LAB_0053f2f6
    FLD float ptr [ESP + 0xac]          ; 0053f2fd
    FLD float ptr [ESP + 0xb0]          ; 0053f304
    LEA EDI,[ESP + 0xcc]                ; 0053f30b
    LEA ESI,[ESP + 0x6c]                ; 0053f312
    FXCH ST2                            ; 0053f316
    FADD float ptr [ESP + 0x108]        ; 0053f318
    FXCH                                ; 0053f31f
    FADD float ptr [ESP + 0x10c]        ; 0053f321
    FXCH ST2                            ; 0053f328
    FADD float ptr [ESP + 0x110]        ; 0053f32a
    FXCH                                ; 0053f331
    FSTP float ptr [ESP + 0x6c]         ; 0053f333
    FXCH                                ; 0053f337
    FSTP float ptr [ESP + 0x70]         ; 0053f339
    FSTP float ptr [ESP + 0x74]         ; 0053f33d
    MOVSD ES:EDI,ESI                    ; 0053f341
    MOVSD ES:EDI,ESI                    ; 0053f342
    MOVSD ES:EDI,ESI                    ; 0053f343
    FLD float ptr [EBX + 0x444]         ; 0053f344
    FDIVR double ptr [0x005e6805]       ; 0053f34a | DAT_005e6805
    FLD float ptr [ESP + 0x108]         ; 0053f350
    FXCH                                ; 0053f357
    FSTP float ptr [ESP + 0x154]        ; 0053f359
    FMUL float ptr [ESP + 0x154]        ; 0053f360
    FLD float ptr [ESP + 0x10c]         ; 0053f367
    FMUL float ptr [ESP + 0x154]        ; 0053f36e
    FLD float ptr [ESP + 0x110]         ; 0053f375
    FMUL float ptr [ESP + 0x154]        ; 0053f37c
    FLD float ptr [ESP + 0xa8]          ; 0053f383
    FLD float ptr [ESP + 0xac]          ; 0053f38a
    LEA EDI,[ESP + 0x48]                ; 0053f391
    LEA ESI,[ESP + 0xf0]                ; 0053f395
    FXCH ST4                            ; 0053f39c
    FSTP float ptr [ESP + 0xf0]         ; 0053f39e
    FXCH ST2                            ; 0053f3a5
    FSTP float ptr [ESP + 0xf4]         ; 0053f3a7
    FSTP float ptr [ESP + 0xf8]         ; 0053f3ae
    MOVSD ES:EDI,ESI                    ; 0053f3b5
    MOVSD ES:EDI,ESI                    ; 0053f3b6
    MOVSD ES:EDI,ESI                    ; 0053f3b7
    FLD float ptr [ESP + 0xb0]          ; 0053f3b8
    LEA EDI,[ESP + 0x78]                ; 0053f3bf
    LEA ESI,[ESP + 0x114]               ; 0053f3c3
    FXCH                                ; 0053f3ca
    FSUB float ptr [ESP + 0x48]         ; 0053f3cc
    FXCH ST2                            ; 0053f3d0
    FSUB float ptr [ESP + 0x4c]         ; 0053f3d2
    FXCH                                ; 0053f3d6
    FSUB float ptr [ESP + 0x50]         ; 0053f3d8
    FXCH ST2                            ; 0053f3dc
    FSTP float ptr [ESP + 0x114]        ; 0053f3de
    FSTP float ptr [ESP + 0x118]        ; 0053f3e5
    FSTP float ptr [ESP + 0x11c]        ; 0053f3ec
    MOVSD ES:EDI,ESI                    ; 0053f3f3
    MOVSD ES:EDI,ESI                    ; 0053f3f4
    MOVSD ES:EDI,ESI                    ; 0053f3f5
    MOV ESI,dword ptr [0x0061b5a8]      ; 0053f3f6 | g_CDemonSetPtr
    PUSH ESI                            ; 0053f3fc | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0053f3fd
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053f402
    PUSH 0x1                            ; 0053f405
    MOV EDI,dword ptr [0x0061b5a8]      ; 0053f407 | g_CDemonSetPtr
    PUSH EDI                            ; 0053f40d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 0053f40e
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0053f413
    PUSH EBX                            ; 0053f416
    MOV EAX,[0x0061b5a8]                ; 0053f417 | g_CDemonSetPtr
    PUSH EAX                            ; 0053f41c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0053f41d
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBX + 0x460]     ; 0053f422
    ADD ESP,0x8                         ; 0053f428
    TEST EDX,EDX                        ; 0053f42b
    JNZ 0x0053f541                      ; 0053f42d
        ;   XREF to: 0053f541 (CONDITIONAL_JUMP)  ; LAB_0053f541
    XOR EDI,EDI                         ; 0053f433
        ;   Label: LAB_0053f433
    MOV dword ptr [ESP + 0x170],EDI     ; 0053f435
    LEA EAX,[ESP + 0xcc]                ; 0053f43c
        ;   Label: LAB_0053f43c
    PUSH EAX                            ; 0053f443
    LEA EAX,[ESP + 0x7c]                ; 0053f444
    PUSH EAX                            ; 0053f448
    MOV EAX,[0x0061b5a8]                ; 0053f449 | g_CDemonSetPtr
    PUSH EAX                            ; 0053f44e | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0053f44f
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x188],EAX     ; 0053f454
    FLD float ptr [ESP + 0x188]         ; 0053f45b
    ADD ESP,0xc                         ; 0053f462
    FLDZ                                ; 0053f465
    FXCH                                ; 0053f467
    FST float ptr [ESP + 0x8]           ; 0053f469
    FSTP double ptr [ESP]               ; 0053f46d
    FCOMP double ptr [ESP]              ; 0053f470
    FNSTSW AX                           ; 0053f473
    SAHF                                ; 0053f475
    JBE 0x0053f556                      ; 0053f476
        ;   XREF to: 0053f556 (CONDITIONAL_JUMP)  ; LAB_0053f556
    MOV ESI,dword ptr [ESP + 0x150]     ; 0053f47c
        ;   Label: LAB_0053f47c
    INC ESI                             ; 0053f483
    MOV EDI,dword ptr [ESP + 0x15c]     ; 0053f484
    MOV dword ptr [ESP + 0x150],ESI     ; 0053f48b
    CMP ESI,EDI                         ; 0053f492
    JL 0x0053f22b                       ; 0053f494
        ;   XREF to: 0053f22b (CONDITIONAL_JUMP)  ; LAB_0053f22b
    MOV EAX,[0x0061b5a8]                ; 0053f49a | g_CDemonSetPtr
        ;   Label: LAB_0053f49a
    PUSH EAX                            ; 0053f49f | g_CDemonSetInstance
    LEA EDI,[ESP + 0xe8]                ; 0053f4a0
    LEA ESI,[ESP + 0xac]                ; 0053f4a7
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0053f4ae
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053f4b3
    LEA EAX,[EBX + 0x3c]                ; 0053f4b6
    MOV EDX,dword ptr [0x00614d30]      ; 0053f4b9 | DAT_00614d30
    PUSH EAX                            ; 0053f4bf
    MOVSD ES:EDI,ESI                    ; 0053f4c0
    MOVSD ES:EDI,ESI                    ; 0053f4c1
    MOVSD ES:EDI,ESI                    ; 0053f4c2
    LEA EAX,[ESP + 0xe8]                ; 0053f4c3
    FLD float ptr [ESP + 0xec]          ; 0053f4ca
    PUSH EAX                            ; 0053f4d1
    FADD float ptr [0x005e67fd]         ; 0053f4d2 | DAT_005e67fd
    PUSH EDX                            ; 0053f4d8
    FSTP float ptr [ESP + 0xf4]         ; 0053f4d9
    CALL core_fire.cpp_FUN_0049d120     ; 0053f4e0
        ;   XREF to: 0049d120 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d120(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 0053f4e5
    LEA EAX,[ESP + 0xa8]                ; 0053f4e8
    PUSH EAX                            ; 0053f4ef
    PUSH 0x5e67e5                       ; 0053f4f0 | = "shotgun.wav"
    PUSH EBX                            ; 0053f4f5
    MOV ECX,dword ptr [0x0061c068]      ; 0053f4f6 | DAT_0061c068
    PUSH ECX                            ; 0053f4fc
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0053f4fd
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 0053f502
    ADD ESP,0x10                        ; 0053f507
    MOV dword ptr [EBX + 0x45c],0x3f2a7efa ; 0053f50a
    MOV ESP,EBP                         ; 0053f514
    POP EBP                             ; 0053f516
    POP EDI                             ; 0053f517
    POP ESI                             ; 0053f518
    POP EBX                             ; 0053f519
    RET                                 ; 0053f51a
    LEA EAX,[ESP + 0xa8]                ; 0053f51b
        ;   Label: LAB_0053f51b
    PUSH EAX                            ; 0053f522
    PUSH 0x5e67d2                       ; 0053f523 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 0053f528
    MOV EDX,dword ptr [0x0061c068]      ; 0053f529 | DAT_0061c068
    PUSH EDX                            ; 0053f52f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0053f530
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0053f535
    XOR EAX,EAX                         ; 0053f538
    MOV ESP,EBP                         ; 0053f53a
    POP EBP                             ; 0053f53c
    POP EDI                             ; 0053f53d
    POP ESI                             ; 0053f53e
    POP EBX                             ; 0053f53f
    RET                                 ; 0053f540
    PUSH EDX                            ; 0053f541
        ;   Label: LAB_0053f541
    MOV ESI,dword ptr [0x0061b5a8]      ; 0053f542 | g_CDemonSetPtr
    PUSH ESI                            ; 0053f548 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0053f549
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053f54e
    JMP 0x0053f433                      ; 0053f551
        ;   XREF to: 0053f433 (UNCONDITIONAL_JUMP)  ; LAB_0053f433
    FLD1                                ; 0053f556
        ;   Label: LAB_0053f556
    FCOMP double ptr [ESP]              ; 0053f558
    FNSTSW AX                           ; 0053f55b
    SAHF                                ; 0053f55d
    JC 0x0053f47c                       ; 0053f55e
        ;   XREF to: 0053f47c (CONDITIONAL_JUMP)  ; LAB_0053f47c
    MOV EDX,dword ptr [0x007bdc94]      ; 0053f564 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 0053f56a | g_CDemonSetPtr
    PUSH EDX                            ; 0053f56f
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0053f570 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ECX                            ; 0053f576
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053f577
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0053f57c
    MOV dword ptr [ESP + 0x178],EAX     ; 0053f57f
    TEST EAX,EAX                        ; 0053f586
    JZ 0x0053f5a7                       ; 0053f588
        ;   XREF to: 0053f5a7 (CONDITIONAL_JUMP)  ; LAB_0053f5a7
    PUSH EAX                            ; 0053f58a
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0053f58b
    CALL dword ptr [ESI + 0x114]        ; 0053f591
    ADD ESP,0x4                         ; 0053f597
    TEST EAX,EAX                        ; 0053f59a
    JLE 0x0053f5a7                      ; 0053f59c
        ;   XREF to: 0053f5a7 (CONDITIONAL_JUMP)  ; LAB_0053f5a7
    XOR ESI,ESI                         ; 0053f59e
    MOV dword ptr [ESP + 0x178],ESI     ; 0053f5a0
    MOV EDI,dword ptr [0x01cb8280]      ; 0053f5a7 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0053f5a7
    MOV EAX,[0x0061b5a8]                ; 0053f5ad | g_CDemonSetPtr
    PUSH EDI                            ; 0053f5b2
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0053f5b3 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0053f5b9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053f5ba
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ECX,dword ptr [0x02653628]      ; 0053f5bf | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 0053f5c5
    MOV EDI,EAX                         ; 0053f5c8
    MOV EAX,[0x0061b5a8]                ; 0053f5ca | g_CDemonSetPtr
    PUSH ECX                            ; 0053f5cf
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0053f5d0 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ESI                            ; 0053f5d6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053f5d7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0053f5dc
    MOV ESI,EAX                         ; 0053f5df
    MOV dword ptr [ESP + 0x160],EAX     ; 0053f5e1
    MOV EAX,[0x007c2670]                ; 0053f5e8 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 0053f5ed
    MOV EAX,[0x0061b5a8]                ; 0053f5ee | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0053f5f3 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0053f5f9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053f5fa
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x174],EAX     ; 0053f5ff
    ADD ESP,0x8                         ; 0053f606
    MOV ECX,dword ptr [0x01cab6f8]      ; 0053f609 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 0053f60f | g_CDemonSetPtr
    PUSH ECX                            ; 0053f614
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0053f615 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0053f61b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053f61c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0053f621
    ADD ESP,0x8                         ; 0053f628
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053f62b
    PUSH EBX                            ; 0053f631
    CALL dword ptr [EAX + 0xf4]         ; 0053f632
    MOV dword ptr [ESP + 0x180],EAX     ; 0053f638
    FLD float ptr [ESP + 0x180]         ; 0053f63f
    ADD ESP,0x4                         ; 0053f646
    FLD1                                ; 0053f649
    FSUB float ptr [ESP + 0x8]          ; 0053f64b
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0053f64f
    FMULP                               ; 0053f656
    MOV dword ptr [ESP + 0x17c],EAX     ; 0053f658
    FILD dword ptr [ESP + 0x17c]        ; 0053f65f
    FDIVP                               ; 0053f666
    MOV ECX,dword ptr [ESP + 0x178]     ; 0053f668
    FSTP float ptr [ESP + 0x168]        ; 0053f66f
    TEST ECX,ECX                        ; 0053f676
    JNZ 0x0053f6cd                      ; 0053f678
        ;   XREF to: 0053f6cd (CONDITIONAL_JUMP)  ; LAB_0053f6cd
    TEST EDI,EDI                        ; 0053f67a
    JNZ 0x0053f8e8                      ; 0053f67c
        ;   XREF to: 0053f8e8 (CONDITIONAL_JUMP)  ; LAB_0053f8e8
    TEST ESI,ESI                        ; 0053f682
    JZ 0x0053f90f                       ; 0053f684
        ;   XREF to: 0053f90f (CONDITIONAL_JUMP)  ; LAB_0053f90f
    PUSH ESI                            ; 0053f68a
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550 ; 0053f68b
        ;   XREF to: 00578550 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0053f690
    PUSH EBX                            ; 0053f693
    PUSH ESI                            ; 0053f694
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 0053f695
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053f69a
    TEST EAX,EAX                        ; 0053f69d
    JZ 0x0053f6b1                       ; 0053f69f
        ;   XREF to: 0053f6b1 (CONDITIONAL_JUMP)  ; LAB_0053f6b1
    PUSH dword ptr [ESP + 0x168]        ; 0053f6a1
    PUSH ESI                            ; 0053f6a8
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 0053f6a9
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0053f6ae
    MOV EDX,dword ptr [ESP + 0x160]     ; 0053f6b1
        ;   Label: LAB_0053f6b1
    PUSH EDX                            ; 0053f6b8
    MOV ECX,dword ptr [0x0061b5a8]      ; 0053f6b9 | g_CDemonSetPtr
    PUSH ECX                            ; 0053f6bf | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0053f6c0
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053f6c5
    JMP 0x0053f939                      ; 0053f6c8
        ;   XREF to: 0053f939 (UNCONDITIONAL_JUMP)  ; LAB_0053f939
    PUSH ECX                            ; 0053f6cd
        ;   Label: LAB_0053f6cd
    MOV EAX,dword ptr [ECX + 0x2b0]     ; 0053f6ce
    CALL dword ptr [EAX + 0xe8]         ; 0053f6d4
    ADD ESP,0x4                         ; 0053f6da
    TEST EAX,EAX                        ; 0053f6dd
    JNZ 0x0053f47c                      ; 0053f6df
        ;   XREF to: 0053f47c (CONDITIONAL_JUMP)  ; LAB_0053f47c
    LEA EAX,[ESP + 0xc]                 ; 0053f6e5
    PUSH EAX                            ; 0053f6e9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0053f6ea
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV ESI,dword ptr [0x0061b5a8]      ; 0053f6ef | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0053f6f5
    MOV EAX,dword ptr [ESI + 0x14d148]  ; 0053f6f8 | g_CDemonSetInstance.field1364296_0x14d148
    MOV dword ptr [ESP + 0xc],EAX       ; 0053f6fe
    MOV EAX,dword ptr [ESP + 0x168]     ; 0053f702
    MOV EDI,0x3ecccccd                  ; 0053f709
    MOV dword ptr [ESP + 0x10],EAX      ; 0053f70e
    LEA EAX,[ESI + 0x14d11c]            ; 0053f712
    MOV dword ptr [ESP + 0x14],EDI      ; 0053f718
    LEA EDI,[ESP + 0xd8]                ; 0053f71c
    FLD float ptr [EAX]                 ; 0053f723 | g_CDemonSetInstance.field1364252_0x14d11c
    FLD float ptr [EAX + 0x4]           ; 0053f725 | g_CDemonSetInstance.field1364256_0x14d120
    FLD float ptr [EAX + 0x8]           ; 0053f728 | g_CDemonSetInstance.field1364260_0x14d124
    FXCH ST2                            ; 0053f72b
    FSUB float ptr [ESI + 0x14d110]     ; 0053f72d | g_CDemonSetInstance.field1364240_0x14d110
    FXCH                                ; 0053f733
    FSUB float ptr [ESI + 0x14d114]     ; 0053f735 | g_CDemonSetInstance.field1364244_0x14d114
    FXCH ST2                            ; 0053f73b
    FSUB float ptr [ESI + 0x14d118]     ; 0053f73d | g_CDemonSetInstance.field1364248_0x14d118
    FXCH                                ; 0053f743
    FSTP float ptr [ESP + 0x84]         ; 0053f745
    FXCH                                ; 0053f74c
    FSTP float ptr [ESP + 0x88]         ; 0053f74e
    LEA ESI,[ESP + 0x84]                ; 0053f755
    FSTP float ptr [ESP + 0x8c]         ; 0053f75c
    MOVSD ES:EDI,ESI                    ; 0053f763
    MOVSD ES:EDI,ESI                    ; 0053f764
    MOVSD ES:EDI,ESI                    ; 0053f765
    FLD float ptr [ESP + 0xdc]          ; 0053f766
    FMUL ST0                            ; 0053f76d
    FLD float ptr [ESP + 0xd8]          ; 0053f76f
    FMUL ST0                            ; 0053f776
    FADDP                               ; 0053f778
    FLD float ptr [ESP + 0xe0]          ; 0053f77a
    FMUL ST0                            ; 0053f781
    FADDP                               ; 0053f783
    FSQRT                               ; 0053f785
    FDIVR double ptr [0x005e680d]       ; 0053f787 | DAT_005e680d
    FLD float ptr [ESP + 0xd8]          ; 0053f78d
    FXCH                                ; 0053f794
    FSTP float ptr [ESP + 0x174]        ; 0053f796
    FMUL float ptr [ESP + 0x174]        ; 0053f79d
    FLD float ptr [ESP + 0xdc]          ; 0053f7a4
    FMUL float ptr [ESP + 0x174]        ; 0053f7ab
    FLD float ptr [ESP + 0xe0]          ; 0053f7b2
    FMUL float ptr [ESP + 0x174]        ; 0053f7b9
    LEA EDI,[ESP + 0x54]                ; 0053f7c0
    LEA ESI,[ESP + 0xfc]                ; 0053f7c4
    FXCH ST2                            ; 0053f7cb
    FSTP float ptr [ESP + 0xfc]         ; 0053f7cd
    FSTP float ptr [ESP + 0x100]        ; 0053f7d4
    FSTP float ptr [ESP + 0x104]        ; 0053f7db
    MOVSD ES:EDI,ESI                    ; 0053f7e2
    MOVSD ES:EDI,ESI                    ; 0053f7e3
    MOVSD ES:EDI,ESI                    ; 0053f7e4
    LEA EAX,[ESP + 0x54]                ; 0053f7e5
    LEA ESI,[ESP + 0x18]                ; 0053f7e9
    CMP ESI,EAX                         ; 0053f7ed
    JZ 0x0053f809                       ; 0053f7ef
        ;   XREF to: 0053f809 (CONDITIONAL_JUMP)  ; LAB_0053f809
    MOV EAX,dword ptr [ESP + 0x54]      ; 0053f7f1
    MOV dword ptr [ESP + 0x18],EAX      ; 0053f7f5
    MOV EAX,dword ptr [ESP + 0x58]      ; 0053f7f9
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053f7fd
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0053f801
    MOV dword ptr [ESP + 0x20],EAX      ; 0053f805
    MOV EAX,[0x0061b5a8]                ; 0053f809 | g_CDemonSetPtr
        ;   Label: LAB_0053f809
    ADD EAX,0x14d138                    ; 0053f80e
    PUSH EAX                            ; 0053f813 | g_CDemonSetInstance.field1364280_0x14d138
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0053f814
    PUSH EAX                            ; 0053f81b
    LEA ESI,[ESP + 0xc8]                ; 0053f81c
    LEA EDI,[ESP + 0xbc]                ; 0053f823
    CALL core_actor.cpp_FUN_00408de0    ; 0053f82a
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xc8]                ; 0053f82f
    ADD ESP,0x8                         ; 0053f836
    MOVSD ES:EDI,ESI                    ; 0053f839
    MOVSD ES:EDI,ESI                    ; 0053f83a
    MOVSD ES:EDI,ESI                    ; 0053f83b
    LEA EAX,[ESP + 0xb4]                ; 0053f83c
    LEA ESI,[ESP + 0x28]                ; 0053f843
    CMP ESI,EAX                         ; 0053f847
    JZ 0x0053f86c                       ; 0053f849
        ;   XREF to: 0053f86c (CONDITIONAL_JUMP)  ; LAB_0053f86c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0053f84b
    MOV dword ptr [ESP + 0x28],EAX      ; 0053f852
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0053f856
    MOV dword ptr [ESP + 0x2c],EAX      ; 0053f85d
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053f861
    MOV dword ptr [ESP + 0x30],EAX      ; 0053f868
    MOV EDX,0x65                        ; 0053f86c
        ;   Label: LAB_0053f86c
    MOV EAX,dword ptr [EBX + 0x6c8]     ; 0053f871
    MOV ECX,0x3e19999a                  ; 0053f877
    MOV dword ptr [ESP + 0x34],EAX      ; 0053f87c
    MOV dword ptr [ESP + 0x3c],EDX      ; 0053f880
    MOV dword ptr [ESP + 0x38],ECX      ; 0053f884
    MOV dword ptr [ESP + 0x40],EBX      ; 0053f888
    PUSH EBX                            ; 0053f88c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053f88d
    CALL dword ptr [EAX + 0x9c]         ; 0053f893
    ADD ESP,0x4                         ; 0053f899
    MOV dword ptr [ESP + 0x44],EAX      ; 0053f89c
    LEA EAX,[ESP + 0xc]                 ; 0053f8a0
    MOV ESI,dword ptr [ESP + 0x178]     ; 0053f8a4
    PUSH EAX                            ; 0053f8ab
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0053f8ac
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 0053f8b3
    PUSH EDI                            ; 0053f8b9
    CALL dword ptr [ESI + 0x110]        ; 0053f8ba
    MOV EAX,dword ptr [EBX + 0x440]     ; 0053f8c0
    ADD ESP,0x8                         ; 0053f8c6
    TEST EAX,EAX                        ; 0053f8c9
    JZ 0x0053f47c                       ; 0053f8cb
        ;   XREF to: 0053f47c (CONDITIONAL_JUMP)  ; LAB_0053f47c
    MOV EAX,[0x0061b5a8]                ; 0053f8d1 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0053f8d6 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0053f8dc
    PUSH EAX                            ; 0053f8dd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0053f8de
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053f8e3
    JMP 0x0053f939                      ; 0053f8e6
        ;   XREF to: 0053f939 (UNCONDITIONAL_JUMP)  ; LAB_0053f939
    PUSH EDI                            ; 0053f8e8
        ;   Label: LAB_0053f8e8
    CALL core_glass.cpp_FUN_004c72d0    ; 0053f8e9
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0053f8ee
    TEST EAX,EAX                        ; 0053f8f1
    JZ 0x0053f47c                       ; 0053f8f3
        ;   XREF to: 0053f47c (CONDITIONAL_JUMP)  ; LAB_0053f47c
    MOV EAX,[0x0061b5a8]                ; 0053f8f9 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0053f8fe
    PUSH EAX                            ; 0053f903 | g_CDemonSetInstance.field1364280_0x14d138
    PUSH EDI                            ; 0053f904
    CALL core_glass.cpp_FUN_004c6d40    ; 0053f905
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 0053f90a
    JMP 0x0053f939                      ; 0053f90d
        ;   XREF to: 0053f939 (UNCONDITIONAL_JUMP)  ; LAB_0053f939
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0053f90f
        ;   Label: LAB_0053f90f
    TEST ESI,ESI                        ; 0053f916
    JNZ 0x0053f930                      ; 0053f918
        ;   XREF to: 0053f930 (CONDITIONAL_JUMP)  ; LAB_0053f930
    MOV EDI,dword ptr [ESP + 0x164]     ; 0053f91a
    TEST EDI,EDI                        ; 0053f921
    JZ 0x0053f956                       ; 0053f923
        ;   XREF to: 0053f956 (CONDITIONAL_JUMP)  ; LAB_0053f956
    PUSH EDI                            ; 0053f925
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 0053f926
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0053f92b
    JMP 0x0053f939                      ; 0053f92e
        ;   XREF to: 0053f939 (UNCONDITIONAL_JUMP)  ; LAB_0053f939
    PUSH ESI                            ; 0053f930
        ;   Label: LAB_0053f930
    CALL core_crate.cpp_FUN_0043a350    ; 0053f931
        ;   XREF to: 0043a350 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_0043a350(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0053f936
    MOV ECX,dword ptr [ESP + 0x170]     ; 0053f939
        ;   Label: LAB_0053f939
    INC ECX                             ; 0053f940
    MOV dword ptr [ESP + 0x170],ECX     ; 0053f941
    CMP ECX,0x4                         ; 0053f948
    JL 0x0053f43c                       ; 0053f94b
        ;   XREF to: 0053f43c (CONDITIONAL_JUMP)  ; LAB_0053f43c
    JMP 0x0053f47c                      ; 0053f951
        ;   XREF to: 0053f47c (UNCONDITIONAL_JUMP)  ; LAB_0053f47c
    MOV EAX,[0x0061b5a8]                ; 0053f956 | g_CDemonSetPtr
        ;   Label: LAB_0053f956
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0053f95b | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0053f961
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 0053f962 | g_CDemonSetInstance.field1364276_0x14d134
    PUSH ECX                            ; 0053f968
    LEA ESI,[EAX + 0x14d128]            ; 0053f969
    PUSH ESI                            ; 0053f96f | g_CDemonSetInstance.field1364264_0x14d128
    ADD EAX,0x14d138                    ; 0053f970
    PUSH EAX                            ; 0053f975 | g_CDemonSetInstance.field1364280_0x14d138
    MOV ESI,dword ptr [0x00614d30]      ; 0053f976 | DAT_00614d30
    PUSH ESI                            ; 0053f97c
    CALL core_fire.cpp_FUN_0049cd50     ; 0053f97d
        ;   XREF to: 0049cd50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049cd50(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 0053f982
    JMP 0x0053f47c                      ; 0053f985
        ;   XREF to: 0053f47c (UNCONDITIONAL_JUMP)  ; LAB_0053f47c

