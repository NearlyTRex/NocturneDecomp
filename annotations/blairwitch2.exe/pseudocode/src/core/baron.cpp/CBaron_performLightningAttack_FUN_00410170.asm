; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_performLightningAttack_FUN_00410170(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x128]:1  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_baron.cpp_CBaron_advanceMotion_FUN_00410590 at 004105c6
;
; Referenced Globals:
;   TerminatedCString s_baron_attack_wav_005cb55f
;   undefined4 DAT_005cb573
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_00614d30
;   undefined4 DAT_007bc4cc
;   undefined4 DAT_007bc4d0
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_fire.cpp_CFireEffect_createCrater_FUN_0049e630
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
;   core_hero.cpp_FUN_004d00c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   core_xform.cpp_FUN_00591530
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410170
        ;   Label: core_baron.cpp_CBaron_performLightningAttack_FUN_00410170
    PUSH EBP                            ; 00410171
    SUB ESP,0x198                       ; 00410172
    MOV EBP,dword ptr [ESP + 0x1a4]     ; 00410178
    LEA EAX,[ESP + 0x18c]               ; 0041017f
    PUSH EAX                            ; 00410186
    PUSH EBP                            ; 00410187
    CALL core_hero.cpp_FUN_004d00c0     ; 00410188
        ;   XREF to: 004d00c0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d00c0()
    ADD ESP,0x8                         ; 0041018d
    MOV EBX,EAX                         ; 00410190
    TEST EAX,EAX                        ; 00410192
    JNZ 0x0041019f                      ; 00410194
        ;   XREF to: 0041019f (CONDITIONAL_JUMP)  ; LAB_0041019f
    ADD ESP,0x198                       ; 00410196
    POP EBP                             ; 0041019c
    POP EBX                             ; 0041019d
    RET                                 ; 0041019e
    PUSH EDI                            ; 0041019f
        ;   Label: LAB_0041019f
    PUSH ESI                            ; 004101a0
    ADD EAX,0x20                        ; 004101a1
    PUSH EAX                            ; 004101a4
    PUSH EBP                            ; 004101a5
    LEA ESI,[ESP + 0x10c]               ; 004101a6
    LEA EDI,[ESP + 0x16c]               ; 004101ad
    CALL core_actor.cpp_FUN_00408de0    ; 004101b4
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x10c]               ; 004101b9
    ADD ESP,0x8                         ; 004101c0
    LEA EAX,[ESP + 0x164]               ; 004101c3
    MOVSD ES:EDI,ESI                    ; 004101ca
    MOVSD ES:EDI,ESI                    ; 004101cb
    MOVSD ES:EDI,ESI                    ; 004101cc
    PUSH EAX                            ; 004101cd
    LEA ESI,[ESP + 0x174]               ; 004101ce
    LEA EDI,[ESP + 0x150]               ; 004101d5
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004101dc
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x174]               ; 004101e1
    LEA EAX,[ESP + 0x150]               ; 004101e8
    ADD ESP,0x4                         ; 004101ef
    LEA EDX,[ESP + 0x164]               ; 004101f2
    MOVSD ES:EDI,ESI                    ; 004101f9
    MOVSD ES:EDI,ESI                    ; 004101fa
    MOVSD ES:EDI,ESI                    ; 004101fb
    CMP EDX,EAX                         ; 004101fc
    JZ 0x0041022a                       ; 004101fe
        ;   XREF to: 0041022a (CONDITIONAL_JUMP)  ; LAB_0041022a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00410200
    MOV dword ptr [ESP + 0x164],EAX     ; 00410207
    MOV EAX,dword ptr [ESP + 0x150]     ; 0041020e
    MOV dword ptr [ESP + 0x168],EAX     ; 00410215
    MOV EAX,dword ptr [ESP + 0x154]     ; 0041021c
    MOV dword ptr [ESP + 0x16c],EAX     ; 00410223
    PUSH dword ptr [ESP + 0x168]        ; 0041022a
        ;   Label: LAB_0041022a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00410231
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x1a0],EAX     ; 00410236
    FLD float ptr [ESP + 0x1a0]         ; 0041023d
    ADD ESP,0x4                         ; 00410244
    FST float ptr [ESP + 0x168]         ; 00410247
    FCOMP float ptr [0x005cb573]        ; 0041024e | DAT_005cb573
    FNSTSW AX                           ; 00410254
    SAHF                                ; 00410256
    JNC 0x00410302                      ; 00410257
        ;   XREF to: 00410302 (CONDITIONAL_JUMP)  ; LAB_00410302
    PUSH 0x0                            ; 0041025d
        ;   Label: LAB_0041025d
    PUSH 0x1                            ; 0041025f
    LEA ESI,[EBX + 0x20]                ; 00410261
    PUSH 0x41800000                     ; 00410264
    PUSH ESI                            ; 00410269
    MOV ECX,dword ptr [0x00614d30]      ; 0041026a | DAT_00614d30
    PUSH ECX                            ; 00410270
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0 ; 00410271
        ;   XREF to: 0049e6e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    ADD ESP,0x14                        ; 00410276
    PUSH 0x40800000                     ; 00410279
    PUSH ESI                            ; 0041027e
    MOV ESI,dword ptr [0x00614d30]      ; 0041027f | DAT_00614d30
    PUSH ESI                            ; 00410285
    CALL core_fire.cpp_CFireEffect_createCrater_FUN_0049e630 ; 00410286
        ;   XREF to: 0049e630 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createCrater_FUN_0049e630(CFireEffect * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 0041028b
    LEA EAX,[ESP + 0x80]                ; 0041028e
        ;   Label: LAB_0041028e
    PUSH EAX                            ; 00410295
    MOV EDI,0x6                         ; 00410296
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0041029b
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004102a0
    MOV EAX,0x42c80000                  ; 004102a3
    MOV dword ptr [ESP + 0xb0],EDI      ; 004102a8
    MOV dword ptr [ESP + 0x84],EAX      ; 004102af
    MOV dword ptr [ESP + 0xb4],EBP      ; 004102b6
    MOV EAX,dword ptr [EBP + 0x25718]   ; 004102bd
    MOV dword ptr [ESP + 0xb8],EAX      ; 004102c3
    TEST EAX,EAX                        ; 004102ca
    JNZ 0x004102d5                      ; 004102cc
        ;   XREF to: 004102d5 (CONDITIONAL_JUMP)  ; LAB_004102d5
    MOV dword ptr [ESP + 0xb8],EBP      ; 004102ce
    LEA EAX,[ESP + 0x80]                ; 004102d5
        ;   Label: LAB_004102d5
    PUSH EAX                            ; 004102dc
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004102dd
    PUSH EBX                            ; 004102e3
    CALL dword ptr [EDX + 0x110]        ; 004102e4
    ADD ESP,0x8                         ; 004102ea
    MOV dword ptr [EBX + 0x1022c],0x40400000 ; 004102ed
    POP ESI                             ; 004102f7
    POP EDI                             ; 004102f8
    ADD ESP,0x198                       ; 004102f9
    POP EBP                             ; 004102ff
    POP EBX                             ; 00410300
    RET                                 ; 00410301
    CMP dword ptr [ESP + 0x168],0x3f490fdb ; 00410302
        ;   Label: LAB_00410302
    JG 0x0041025d                       ; 0041030d
        ;   XREF to: 0041025d (CONDITIONAL_JUMP)  ; LAB_0041025d
    PUSH 0x5f22b0                       ; 00410313 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00410318
    LEA EAX,[ESP + 0x10]                ; 0041031a
    PUSH EAX                            ; 0041031e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0041031f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00410324
    LEA EAX,[ESP + 0x8]                 ; 00410327
    PUSH EAX                            ; 0041032b
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0041032c
    PUSH EBX                            ; 00410332
    CALL dword ptr [EDX + 0x5c]         ; 00410333
    ADD ESP,0x8                         ; 00410336
    MOV ESI,EAX                         ; 00410339
    MOV dword ptr [ESP + 0x198],EAX     ; 0041033b
    CALL crt_stdlib.c_rand_FUN_005b849c ; 00410342
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 00410347
    SAR EDX,0x1f                        ; 00410349
    IDIV ESI                            ; 0041034c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041034e
    SUB EAX,EDX                         ; 00410355
    LEA EDX,[ESP + 0x8]                 ; 00410357
    SHL EAX,0x2                         ; 0041035b
    ADD EAX,EDX                         ; 0041035e
    PUSH EAX                            ; 00410360
    PUSH EBX                            ; 00410361
    LEA ESI,[ESP + 0x130]               ; 00410362
    LEA EDI,[ESP + 0xf4]                ; 00410369
    CALL core_actor.cpp_FUN_00408d70    ; 00410370
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x130]               ; 00410375
    LEA EAX,[ESP + 0xf4]                ; 0041037c
    ADD ESP,0x8                         ; 00410383
    LEA EDX,[ESP + 0x158]               ; 00410386
    MOVSD ES:EDI,ESI                    ; 0041038d
    MOVSD ES:EDI,ESI                    ; 0041038e
    MOVSD ES:EDI,ESI                    ; 0041038f
    CMP EDX,EAX                         ; 00410390
    JZ 0x004103be                       ; 00410392
        ;   XREF to: 004103be (CONDITIONAL_JUMP)  ; LAB_004103be
    MOV EAX,dword ptr [ESP + 0xec]      ; 00410394
    MOV dword ptr [ESP + 0x158],EAX     ; 0041039b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004103a2
    MOV dword ptr [ESP + 0x15c],EAX     ; 004103a9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004103b0
    MOV dword ptr [ESP + 0x160],EAX     ; 004103b7
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004103be
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_004103be
    MOV EDX,EAX                         ; 004103c3
    MOV ECX,dword ptr [ESP + 0x198]     ; 004103c5
    SAR EDX,0x1f                        ; 004103cc
    IDIV ECX                            ; 004103cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004103d1
    SUB EAX,EDX                         ; 004103d8
    LEA EDX,[EAX*0x4 + 0x0]             ; 004103da
    LEA EAX,[ESP + 0x8]                 ; 004103e1
    ADD EAX,EDX                         ; 004103e5
    PUSH EAX                            ; 004103e7
    PUSH EBX                            ; 004103e8
    LEA ESI,[ESP + 0x190]               ; 004103e9
    LEA EDI,[ESP + 0xdc]                ; 004103f0
    CALL core_actor.cpp_FUN_00408d70    ; 004103f7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x190]               ; 004103fc
    LEA EAX,[ESP + 0xdc]                ; 00410403
    ADD ESP,0x8                         ; 0041040a
    LEA EDX,[ESP + 0x140]               ; 0041040d
    MOVSD ES:EDI,ESI                    ; 00410414
    MOVSD ES:EDI,ESI                    ; 00410415
    MOVSD ES:EDI,ESI                    ; 00410416
    CMP EDX,EAX                         ; 00410417
    JZ 0x00410445                       ; 00410419
        ;   XREF to: 00410445 (CONDITIONAL_JUMP)  ; LAB_00410445
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0041041b
    MOV dword ptr [ESP + 0x140],EAX     ; 00410422
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00410429
    MOV dword ptr [ESP + 0x144],EAX     ; 00410430
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00410437
    MOV dword ptr [ESP + 0x148],EAX     ; 0041043e
    MOV EDX,dword ptr [0x007bc4cc]      ; 00410445 | DAT_007bc4cc
        ;   Label: LAB_00410445
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041044b
    SUB EAX,EDX                         ; 00410452
    SHL EAX,0x4                         ; 00410454
    LEA EDX,[EBP + 0x1134]              ; 00410457
    ADD EAX,EDX                         ; 0041045d
    PUSH EAX                            ; 0041045f
    LEA ESI,[ESP + 0x180]               ; 00410460
    PUSH 0x265370c                      ; 00410467 | DAT_0265370c
    LEA EDI,[ESP + 0xc4]                ; 0041046c
    MOV dword ptr [ESP + 0x1a4],EDX     ; 00410473
    CALL core_xform.cpp_FUN_00591530    ; 0041047a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0041047f
    LEA EAX,[ESP + 0xbc]                ; 00410482
    LEA ESI,[ESP + 0x17c]               ; 00410489
    PUSH EAX                            ; 00410490
    MOVSD ES:EDI,ESI                    ; 00410491
    MOVSD ES:EDI,ESI                    ; 00410492
    MOVSD ES:EDI,ESI                    ; 00410493
    PUSH EBP                            ; 00410494
    LEA ESI,[ESP + 0x13c]               ; 00410495
    LEA EDI,[ESP + 0x100]               ; 0041049c
    CALL core_actor.cpp_FUN_00408d70    ; 004104a3
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x13c]               ; 004104a8
    MOV EDX,dword ptr [0x007bc4d0]      ; 004104af | DAT_007bc4d0
    ADD ESP,0x8                         ; 004104b5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004104b8
    MOVSD ES:EDI,ESI                    ; 004104bf
    MOVSD ES:EDI,ESI                    ; 004104c0
    MOVSD ES:EDI,ESI                    ; 004104c1
    SUB EAX,EDX                         ; 004104c2
    MOV EDI,dword ptr [ESP + 0x19c]     ; 004104c4
    SHL EAX,0x4                         ; 004104cb
    ADD EAX,EDI                         ; 004104ce
    PUSH EAX                            ; 004104d0
    PUSH 0x265370c                      ; 004104d1 | DAT_0265370c
    LEA ESI,[ESP + 0xe8]                ; 004104d6
    LEA EDI,[ESP + 0x124]               ; 004104dd
    CALL core_xform.cpp_FUN_00591530    ; 004104e4
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004104e9
    LEA EAX,[ESP + 0x11c]               ; 004104ec
    LEA ESI,[ESP + 0xe0]                ; 004104f3
    PUSH EAX                            ; 004104fa
    MOVSD ES:EDI,ESI                    ; 004104fb
    MOVSD ES:EDI,ESI                    ; 004104fc
    MOVSD ES:EDI,ESI                    ; 004104fd
    PUSH EBP                            ; 004104fe
    LEA ESI,[ESP + 0xd0]                ; 004104ff
    CALL core_actor.cpp_FUN_00408d70    ; 00410506
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041050b
    PUSH 0x40800000                     ; 0041050e
    PUSH 0x3f000000                     ; 00410513
    PUSH 0x1                            ; 00410518
    LEA EAX,[ESP + 0x164]               ; 0041051a
    PUSH EAX                            ; 00410521
    LEA EAX,[ESP + 0x108]               ; 00410522
    LEA EDI,[ESP + 0x120]               ; 00410529
    PUSH EAX                            ; 00410530
    MOV EAX,[0x00614d30]                ; 00410531 | DAT_00614d30
    LEA ESI,[ESP + 0xdc]                ; 00410536
    PUSH EAX                            ; 0041053d
    MOVSD ES:EDI,ESI                    ; 0041053e
    MOVSD ES:EDI,ESI                    ; 0041053f
    MOVSD ES:EDI,ESI                    ; 00410540
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760 ; 00410541
        ;   XREF to: 0049e760 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 00410546
    PUSH 0x40800000                     ; 00410549
    PUSH 0x3f000000                     ; 0041054e
    PUSH 0x1                            ; 00410553
    LEA EAX,[ESP + 0x164]               ; 00410555
    PUSH EAX                            ; 0041055c
    LEA EAX,[ESP + 0x120]               ; 0041055d
    PUSH EAX                            ; 00410564
    MOV EDX,dword ptr [0x00614d30]      ; 00410565 | DAT_00614d30
    PUSH EDX                            ; 0041056b
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760 ; 0041056c
        ;   XREF to: 0049e760 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 00410571
    PUSH 0x5cb55f                       ; 00410574 | = "baron-attack.wav"
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00410579
    PUSH EBP                            ; 0041057f
    CALL dword ptr [EAX + 0x34]         ; 00410580
    ADD ESP,0x8                         ; 00410583
    JMP 0x0041028e                      ; 00410586
        ;   XREF to: 0041028e (UNCONDITIONAL_JUMP)  ; LAB_0041028e

