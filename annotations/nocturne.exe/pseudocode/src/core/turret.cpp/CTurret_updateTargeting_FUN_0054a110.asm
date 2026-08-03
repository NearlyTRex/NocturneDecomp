; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0xb4]:1  local_b4
;
; XREF[1]:
;   core_turret.cpp_CTurret_process_FUN_005497f0 at 005499e6
;
; Referenced Globals:
;   TerminatedCString s_s_has_no_guard_trigger_00596e78
;   float FLOAT_00596e95 = -15
;   float FLOAT_00596e99 = 15
;   float FLOAT_00596e9d = 0.5
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   float FLOAT_005a379c = -0.5235988
;   float FLOAT_005a37a0 = 1.221730
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CConsole g_CConsole_0077ad0c
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;   undefined4 g_CDemonSet_01e57284.actors[1]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
;   core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640
;   core_turret.cpp_CTurret_updatePatrol_FUN_0054a920
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c___arrinit_FUN_005644a7
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a110
        ;   Label: core_turret.cpp_CTurret_updateTargeting_FUN_0054a110
    PUSH ESI                            ; 0054a111
    PUSH EDI                            ; 0054a112
    PUSH EBP                            ; 0054a113
    SUB ESP,0x14c                       ; 0054a114
    MOV ESI,dword ptr [ESP + 0x160]     ; 0054a11a
    MOV EDX,dword ptr [ESI + 0x778]     ; 0054a121
    TEST EDX,EDX                        ; 0054a127
    JZ 0x0054a29c                       ; 0054a129
        ;   XREF to: 0054a29c (CONDITIONAL_JUMP)  ; LAB_0054a29c
    MOV EAX,EDX                         ; 0054a12f
    MOV EBX,dword ptr [EDX + 0x14c]     ; 0054a131
    LEA EDX,[ESP + 0xa8]                ; 0054a137
    PUSH EDX                            ; 0054a13e
    PUSH EAX                            ; 0054a13f
    CALL dword ptr [EBX + 0x14]         ; 0054a140
    ADD ESP,0x8                         ; 0054a143
    LEA EAX,[ESP + 0x90]                ; 0054a146
    PUSH EAX                            ; 0054a14d
    XOR EBX,EBX                         ; 0054a14e
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0 ; 0054a150
        ;   XREF to: 0041dbc0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0054a155
    PUSH EBX                            ; 0054a158
        ;   Label: LAB_0054a158
    LEA EAX,[ESP + 0xe8]                ; 0054a159
    PUSH EAX                            ; 0054a160
    LEA EAX,[ESP + 0xb0]                ; 0054a161
    PUSH EAX                            ; 0054a168
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 0054a169
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0054a16e
    PUSH EAX                            ; 0054a171
    LEA EAX,[ESP + 0xf4]                ; 0054a172
    PUSH EAX                            ; 0054a179
    MOV EDI,dword ptr [ESI + 0x778]     ; 0054a17a
    PUSH EDI                            ; 0054a180
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054a181
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0054a186
    PUSH EAX                            ; 0054a189
    LEA EAX,[ESP + 0x94]                ; 0054a18a
    PUSH EAX                            ; 0054a191
    INC EBX                             ; 0054a192
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0054a193
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0054a198
    CMP EBX,0x8                         ; 0054a19b
    JL 0x0054a158                       ; 0054a19e
        ;   XREF to: 0054a158 (CONDITIONAL_JUMP)  ; LAB_0054a158
    FLD float ptr [ESP + 0x90]          ; 0054a1a0
    FLD float ptr [ESP + 0x94]          ; 0054a1a7
    FLD float ptr [ESP + 0x98]          ; 0054a1ae
    FLD float ptr [ESP + 0x9c]          ; 0054a1b5
    FLD float ptr [ESP + 0xa0]          ; 0054a1bc
    FLD float ptr [ESP + 0xa4]          ; 0054a1c3
    MOV EBP,0x41700000                  ; 0054a1ca
    MOV ECX,0x4479c000                  ; 0054a1cf
    LEA EAX,[ESI + 0x77c]               ; 0054a1d4
    MOV dword ptr [ESP + 0xc0],EBP      ; 0054a1da
    MOV dword ptr [ESP + 0xc4],EBP      ; 0054a1e1
    MOV dword ptr [ESP + 0xc8],EBP      ; 0054a1e8
    MOV dword ptr [ESP + 0xcc],ECX      ; 0054a1ef
    MOV dword ptr [ESP + 0xd0],ECX      ; 0054a1f6
    MOV EDI,ECX                         ; 0054a1fd
    MOV dword ptr [ESP + 0xd4],ECX      ; 0054a1ff
    MOV dword ptr [ESP + 0x148],EAX     ; 0054a206
    FXCH ST5                            ; 0054a20d
    FLD float ptr [0x00596e95]          ; 0054a20f | FLOAT_00596e95
    FXCH                                ; 0054a215
    FADD ST0,ST1                        ; 0054a217
    FXCH ST5                            ; 0054a219
    FADD ST0,ST1                        ; 0054a21b
    FXCH ST4                            ; 0054a21d
    FADDP                               ; 0054a21f
    FXCH ST2                            ; 0054a221
    FLD float ptr [0x00596e99]          ; 0054a223 | FLOAT_00596e99
    FXCH                                ; 0054a229
    FADD ST0,ST1                        ; 0054a22b
    FXCH ST2                            ; 0054a22d
    FADD ST0,ST1                        ; 0054a22f
    FXCH ST6                            ; 0054a231
    FADDP                               ; 0054a233
    FXCH ST4                            ; 0054a235
    FSTP float ptr [ESP + 0x90]         ; 0054a237
    FXCH ST2                            ; 0054a23e
    FSTP float ptr [ESP + 0x94]         ; 0054a240
    FSTP float ptr [ESP + 0x98]         ; 0054a247
    FSTP float ptr [ESP + 0x9c]         ; 0054a24e
    FXCH                                ; 0054a255
    FSTP float ptr [ESP + 0xa0]         ; 0054a257
    FSTP float ptr [ESP + 0xa4]         ; 0054a25e
    XOR EDI,ECX                         ; 0054a265
    XOR EBP,EBP                         ; 0054a267
    MOV EAX,[0x005be368]                ; 0054a269 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0054a269
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 0054a26e | g_CDemonSet_01e57284.actor_count
    JGE 0x0054a5c0                      ; 0054a274
        ;   XREF to: 0054a5c0 (CONDITIONAL_JUMP)  ; LAB_0054a5c0
    MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14cd70] ; 0054a27a | g_CDemonSet_01e57284.actors[0] | g_CDemonSet_01e57284.actors[1]
    MOV EAX,dword ptr [ESP + 0x148]     ; 0054a281
    PUSH EAX                            ; 0054a288
    PUSH EBX                            ; 0054a289
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0054a28a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0054a28f
    TEST EAX,EAX                        ; 0054a292
    JNZ 0x0054a2bc                      ; 0054a294
        ;   XREF to: 0054a2bc (CONDITIONAL_JUMP)  ; LAB_0054a2bc
    INC EDI                             ; 0054a296
        ;   Label: LAB_0054a296
    ADD EBP,0x4                         ; 0054a297
    JMP 0x0054a269                      ; 0054a29a
        ;   XREF to: 0054a269 (UNCONDITIONAL_JUMP)  ; LAB_0054a269
    PUSH ESI                            ; 0054a29c
        ;   Label: LAB_0054a29c
    PUSH 0x596e78                       ; 0054a29d | = "%s has no guard trigger!\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0054a2a2 | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 0054a2a8 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0054a2a9
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0054a2ae
    ADD ESP,0x14c                       ; 0054a2b1
    POP EBP                             ; 0054a2b7
    POP EDI                             ; 0054a2b8
    POP ESI                             ; 0054a2b9
    POP EBX                             ; 0054a2ba
    RET                                 ; 0054a2bb
    LEA EDX,[EBX + 0x20]                ; 0054a2bc
        ;   Label: LAB_0054a2bc
    FLD float ptr [ESP + 0x90]          ; 0054a2bf
    FCOMP float ptr [EDX]               ; 0054a2c6
    FNSTSW AX                           ; 0054a2c8
    SAHF                                ; 0054a2ca
    JA 0x0054a296                       ; 0054a2cb
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0x94]          ; 0054a2cd
    FCOMP float ptr [EDX + 0x4]         ; 0054a2d4
    FNSTSW AX                           ; 0054a2d7
    SAHF                                ; 0054a2d9
    JA 0x0054a296                       ; 0054a2da
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0x98]          ; 0054a2dc
    FCOMP float ptr [EDX + 0x8]         ; 0054a2e3
    FNSTSW AX                           ; 0054a2e6
    SAHF                                ; 0054a2e8
    JA 0x0054a296                       ; 0054a2e9
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0x9c]          ; 0054a2eb
    FCOMP float ptr [EDX]               ; 0054a2f2
    FNSTSW AX                           ; 0054a2f4
    SAHF                                ; 0054a2f6
    JC 0x0054a296                       ; 0054a2f7
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0xa0]          ; 0054a2f9
    FCOMP float ptr [EDX + 0x4]         ; 0054a300
    FNSTSW AX                           ; 0054a303
    SAHF                                ; 0054a305
    JC 0x0054a296                       ; 0054a306
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0xa4]          ; 0054a308
    FCOMP float ptr [EDX + 0x8]         ; 0054a30f
    FNSTSW AX                           ; 0054a312
    SAHF                                ; 0054a314
    JC 0x0054a296                       ; 0054a315
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    PUSH EBX                            ; 0054a31b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054a31c
    CALL dword ptr [EAX + 0x54]         ; 0054a322
    ADD ESP,0x4                         ; 0054a325
    TEST EAX,EAX                        ; 0054a328
    JZ 0x0054a296                       ; 0054a32a
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    PUSH 0x5993b0                       ; 0054a330 | g_CVectorTypeInfo_005993b0
    PUSH 0xa                            ; 0054a335
    LEA EAX,[ESP + 0x8]                 ; 0054a337
    PUSH EAX                            ; 0054a33b
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0054a33c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0054a341
    MOV EAX,ESP                         ; 0054a344
    PUSH EAX                            ; 0054a346
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0054a347
    PUSH EBX                            ; 0054a34d
    CALL dword ptr [EDX + 0x4c]         ; 0054a34e
    ADD ESP,0x8                         ; 0054a351
    CMP EAX,0x1                         ; 0054a354
    JGE 0x0054a3f3                      ; 0054a357
        ;   XREF to: 0054a3f3 (CONDITIONAL_JUMP)  ; LAB_0054a3f3
    LEA EDX,[ESP + 0x78]                ; 0054a35d
    PUSH EDX                            ; 0054a361
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054a362
    PUSH EBX                            ; 0054a368
    CALL dword ptr [EAX + 0x14]         ; 0054a369
    LEA EDX,[EAX + 0xc]                 ; 0054a36c
    FLD float ptr [EAX]                 ; 0054a36f
    FADD float ptr [EDX]                ; 0054a371
    ADD ESP,0x8                         ; 0054a373
    FST float ptr [ESP + 0x12c]         ; 0054a376
    FLD float ptr [EAX + 0x4]           ; 0054a37d
    FADD float ptr [EDX + 0x4]          ; 0054a380
    FXCH                                ; 0054a383
    FLD float ptr [0x00596e9d]          ; 0054a385 | FLOAT_00596e9d
    FXCH                                ; 0054a38b
    FMUL ST1                            ; 0054a38d
    FXCH ST2                            ; 0054a38f
    FST float ptr [ESP + 0x130]         ; 0054a391
    FLD float ptr [EAX + 0x8]           ; 0054a398
    FADD float ptr [EDX + 0x8]          ; 0054a39b
    FXCH                                ; 0054a39e
    FMUL ST2                            ; 0054a3a0
    FXCH                                ; 0054a3a2
    FST float ptr [ESP + 0x134]         ; 0054a3a4
    FMULP ST2                           ; 0054a3ab
    LEA EAX,[ESP + 0xfc]                ; 0054a3ad
    FXCH ST2                            ; 0054a3b4
    FSTP float ptr [ESP + 0xfc]         ; 0054a3b6
    FXCH                                ; 0054a3bd
    FSTP float ptr [ESP + 0x100]        ; 0054a3bf
    MOV EDX,ESP                         ; 0054a3c6
    FSTP float ptr [ESP + 0x104]        ; 0054a3c8
    CMP EDX,EAX                         ; 0054a3cf
    JZ 0x0054a3f3                       ; 0054a3d1
        ;   XREF to: 0054a3f3 (CONDITIONAL_JUMP)  ; LAB_0054a3f3
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0054a3d3
    MOV dword ptr [ESP],EAX             ; 0054a3da
    MOV EAX,dword ptr [ESP + 0x100]     ; 0054a3dd
    MOV dword ptr [ESP + 0x4],EAX       ; 0054a3e4
    MOV EAX,dword ptr [ESP + 0x104]     ; 0054a3e8
    MOV dword ptr [ESP + 0x8],EAX       ; 0054a3ef
    MOV EAX,ESP                         ; 0054a3f3
        ;   Label: LAB_0054a3f3
    PUSH EAX                            ; 0054a3f5
    LEA EAX,[ESP + 0x10c]               ; 0054a3f6
    PUSH EAX                            ; 0054a3fd
    PUSH EBX                            ; 0054a3fe
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054a3ff
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0054a404
    LEA EAX,[ESP + 0x108]               ; 0054a407
    PUSH EAX                            ; 0054a40e
    LEA EAX,[ESP + 0x13c]               ; 0054a40f
    PUSH EAX                            ; 0054a416
    MOV EDX,dword ptr [ESI + 0x778]     ; 0054a417
    PUSH EDX                            ; 0054a41d
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0054a41e
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0054a423
    MOV EBX,EAX                         ; 0054a426
    FLD float ptr [ESP + 0xa8]          ; 0054a428
    FCOMP float ptr [EAX]               ; 0054a42f
    FNSTSW AX                           ; 0054a431
    SAHF                                ; 0054a433
    JA 0x0054a296                       ; 0054a434
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0xac]          ; 0054a43a
    FCOMP float ptr [EBX + 0x4]         ; 0054a441
    FNSTSW AX                           ; 0054a444
    SAHF                                ; 0054a446
    JA 0x0054a296                       ; 0054a447
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0xb0]          ; 0054a44d
    FCOMP float ptr [EBX + 0x8]         ; 0054a454
    FNSTSW AX                           ; 0054a457
    SAHF                                ; 0054a459
    JA 0x0054a296                       ; 0054a45a
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0xb4]          ; 0054a460
    FCOMP float ptr [EBX]               ; 0054a467
    FNSTSW AX                           ; 0054a469
    SAHF                                ; 0054a46b
    JC 0x0054a296                       ; 0054a46c
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0xb8]          ; 0054a472
    FCOMP float ptr [EBX + 0x4]         ; 0054a479
    FNSTSW AX                           ; 0054a47c
    SAHF                                ; 0054a47e
    JC 0x0054a296                       ; 0054a47f
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0xbc]          ; 0054a485
    FCOMP float ptr [EBX + 0x8]         ; 0054a48c
    FNSTSW AX                           ; 0054a48f
    SAHF                                ; 0054a491
    JC 0x0054a296                       ; 0054a492
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    LEA EAX,[ESP + 0x108]               ; 0054a498
    PUSH EAX                            ; 0054a49f
    LEA EAX,[ESP + 0xdc]                ; 0054a4a0
    PUSH EAX                            ; 0054a4a7
    PUSH ESI                            ; 0054a4a8
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0054a4a9
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0054a4ae
    PUSH EAX                            ; 0054a4b1
    LEA EAX,[ESP + 0x118]               ; 0054a4b2
    PUSH EAX                            ; 0054a4b9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0054a4ba
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0054a4bf
    FLD float ptr [ESP + 0x114]         ; 0054a4c2
    FCOMP float ptr [0x005a379c]        ; 0054a4c9 | FLOAT_005a379c
    FNSTSW AX                           ; 0054a4cf
    SAHF                                ; 0054a4d1
    JC 0x0054a296                       ; 0054a4d2
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0x114]         ; 0054a4d8
    FCOMP float ptr [0x005a37a0]        ; 0054a4df | FLOAT_005a37a0
    FNSTSW AX                           ; 0054a4e5
    SAHF                                ; 0054a4e7
    JA 0x0054a296                       ; 0054a4e8
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    FLD float ptr [ESP + 0x118]         ; 0054a4ee
    FMUL ST0                            ; 0054a4f5
    FLD float ptr [ESP + 0x114]         ; 0054a4f7
    FMUL ST0                            ; 0054a4fe
    FADDP                               ; 0054a500
    FLD float ptr [ESP + 0x11c]         ; 0054a502
    FMUL ST0                            ; 0054a509
    FADDP                               ; 0054a50b
    FSQRT                               ; 0054a50d
    FLD float ptr [ESP + 0xd0]          ; 0054a50f
    FMUL ST0                            ; 0054a516
    FLD float ptr [ESP + 0xcc]          ; 0054a518
    FMUL ST0                            ; 0054a51f
    FADDP                               ; 0054a521
    FLD float ptr [ESP + 0xd4]          ; 0054a523
    FMUL ST0                            ; 0054a52a
    FADDP                               ; 0054a52c
    FSQRT                               ; 0054a52e
    FCOMPP                              ; 0054a530
    FNSTSW AX                           ; 0054a532
    SAHF                                ; 0054a534
    JC 0x0054a296                       ; 0054a535
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    LEA EDX,[ESP + 0xcc]                ; 0054a53b
    LEA EAX,[ESP + 0x114]               ; 0054a542
    CMP EDX,EAX                         ; 0054a549
    JZ 0x0054a577                       ; 0054a54b
        ;   XREF to: 0054a577 (CONDITIONAL_JUMP)  ; LAB_0054a577
    MOV EAX,dword ptr [ESP + 0x114]     ; 0054a54d
    MOV dword ptr [ESP + 0xcc],EAX      ; 0054a554
    MOV EAX,dword ptr [ESP + 0x118]     ; 0054a55b
    MOV dword ptr [ESP + 0xd0],EAX      ; 0054a562
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0054a569
    MOV dword ptr [ESP + 0xd4],EAX      ; 0054a570
    LEA EDX,[ESP + 0x120]               ; 0054a577
        ;   Label: LAB_0054a577
    LEA EAX,[ESP + 0x108]               ; 0054a57e
    CMP EDX,EAX                         ; 0054a585
    JZ 0x0054a296                       ; 0054a587
        ;   XREF to: 0054a296 (CONDITIONAL_JUMP)  ; LAB_0054a296
    MOV EAX,dword ptr [ESP + 0x108]     ; 0054a58d
    MOV dword ptr [ESP + 0x120],EAX     ; 0054a594
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0054a59b
    MOV dword ptr [ESP + 0x124],EAX     ; 0054a5a2
    MOV EAX,dword ptr [ESP + 0x110]     ; 0054a5a9
    MOV dword ptr [ESP + 0x128],EAX     ; 0054a5b0
    INC EDI                             ; 0054a5b7
    ADD EBP,0x4                         ; 0054a5b8
    JMP 0x0054a269                      ; 0054a5bb
        ;   XREF to: 0054a269 (UNCONDITIONAL_JUMP)  ; LAB_0054a269
    CMP dword ptr [ESP + 0xd0],0x42c60000 ; 0054a5c0
        ;   Label: LAB_0054a5c0
    JG 0x0054a619                       ; 0054a5cb
        ;   XREF to: 0054a619 (CONDITIONAL_JUMP)  ; LAB_0054a619
    LEA EAX,[ESP + 0x120]               ; 0054a5cd
    PUSH dword ptr [ESP + 0x164]        ; 0054a5d4
    PUSH EAX                            ; 0054a5db
    PUSH ESI                            ; 0054a5dc
    CALL core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640 ; 0054a5dd
        ;   XREF to: 0054a640 (UNCONDITIONAL_CALL)  ; int core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640(CTurret * this_ptr, CVector3f * target_pos, float delta_time)
    FLD float ptr [ESI + 0x2f8]         ; 0054a5e2
    FLDZ                                ; 0054a5e8
    ADD ESP,0xc                         ; 0054a5ea
    FCOMPP                              ; 0054a5ed
    FNSTSW AX                           ; 0054a5ef
    SAHF                                ; 0054a5f1
    JC 0x0054a604                       ; 0054a5f2
        ;   XREF to: 0054a604 (CONDITIONAL_JUMP)  ; LAB_0054a604
    PUSH ESI                            ; 0054a5f4
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054a5f5
    CALL dword ptr [EAX + 0xdc]         ; 0054a5fb
    ADD ESP,0x4                         ; 0054a601
    MOV dword ptr [ESI + 0x864],0x3f800000 ; 0054a604
        ;   Label: LAB_0054a604
    ADD ESP,0x14c                       ; 0054a60e
    POP EBP                             ; 0054a614
    POP EDI                             ; 0054a615
    POP ESI                             ; 0054a616
    POP EBX                             ; 0054a617
    RET                                 ; 0054a618
    PUSH dword ptr [ESP + 0x164]        ; 0054a619
        ;   Label: LAB_0054a619
    PUSH ESI                            ; 0054a620
    CALL core_turret.cpp_CTurret_updatePatrol_FUN_0054a920 ; 0054a621
        ;   XREF to: 0054a920 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updatePatrol_FUN_0054a920(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0054a626
    ADD ESP,0x14c                       ; 0054a629
    POP EBP                             ; 0054a62f
    POP EDI                             ; 0054a630
    POP ESI                             ; 0054a631
    POP EBX                             ; 0054a632
    RET                                 ; 0054a633

