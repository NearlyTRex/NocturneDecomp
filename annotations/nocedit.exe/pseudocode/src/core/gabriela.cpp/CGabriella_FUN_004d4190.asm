; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4190(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x12c]:4  local_12c
; undefined8       Stack[-0x128]:8  local_128
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined1       Stack[-0xfc]:1  local_fc
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d370f
;
; Referenced Globals:
;   double DOUBLE_0062aefd = 4
;   double DOUBLE_0062af05 = 0.318309886192889
;   double DOUBLE_0062af0d = 10
;   double DOUBLE_0062af15 = 30
;   double DOUBLE_0062af1d = -0.0500000000000000
;   double DOUBLE_0062af25 = 0.0500000000000000
;   float FLOAT_0062af2d = 0.5
;   float FLOAT_0062af31 = 3
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032613bc
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_hero.cpp_CHero_FUN_004f3960
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4190
        ;   Label: core_gabriela.cpp_CGabriella_FUN_004d4190
    PUSH ESI                            ; 004d4191
    PUSH EDI                            ; 004d4192
    PUSH EBP                            ; 004d4193
    MOV EBP,ESP                         ; 004d4194
    SUB ESP,0x114                       ; 004d4196
    AND ESP,0xfffffff8                  ; 004d419c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d419f
    PUSH 0x2c                           ; 004d41a2
    PUSH 0x0                            ; 004d41a4
    LEA EAX,[EBX + 0xbe2c]              ; 004d41a6
    MOV EDX,0x3e800000                  ; 004d41ac
    PUSH EAX                            ; 004d41b1
    MOV dword ptr [ESP + 0x118],EDX     ; 004d41b2
    CALL crt_memory.c_memset_FUN_005fde40 ; 004d41b9
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ECX,dword ptr [EBX + 0x1fbd0]   ; 004d41be
    ADD ESP,0xc                         ; 004d41c4
    TEST ECX,ECX                        ; 004d41c7
    JZ 0x004d4395                       ; 004d41c9
        ;   XREF to: 004d4395 (CONDITIONAL_JUMP)  ; LAB_004d4395
    MOV EAX,[0x02db87d0]                ; 004d41cf | g_LocalHeroIndex
    LEA EDX,[EBX + 0x20]                ; 004d41d4
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004d41d7 | g_HeroActors
    FLD float ptr [EDX]                 ; 004d41de
    FSUB float ptr [EAX + 0x20]         ; 004d41e0
    FSTP float ptr [ESP + 0xa4]         ; 004d41e3
    FLD float ptr [EDX + 0x4]           ; 004d41ea
    FSUB float ptr [EAX + 0x24]         ; 004d41ed
    FST float ptr [ESP + 0xa8]          ; 004d41f0
    FMUL float ptr [ESP + 0xa8]         ; 004d41f7
    FLD float ptr [ESP + 0xa4]          ; 004d41fe
    FMUL ST0                            ; 004d4205
    FLD float ptr [EDX + 0x8]           ; 004d4207
    FSUB float ptr [EAX + 0x28]         ; 004d420a
    FXCH                                ; 004d420d
    FADDP ST2,ST0                       ; 004d420f
    FST float ptr [ESP + 0xac]          ; 004d4211
    FMUL float ptr [ESP + 0xac]         ; 004d4218
    FADDP                               ; 004d421f
    FSQRT                               ; 004d4221
    MOV ESI,dword ptr [EBX + 0x1fbd0]   ; 004d4223
    FSTP float ptr [ESP + 0x8]          ; 004d4229
    CMP ESI,0x3                         ; 004d422d
    JZ 0x004d439c                       ; 004d4230
        ;   XREF to: 004d439c (CONDITIONAL_JUMP)  ; LAB_004d439c
    FLD float ptr [ESP + 0x8]           ; 004d4236
        ;   Label: LAB_004d4236
    FCOMP double ptr [0x0062aefd]       ; 004d423a | DOUBLE_0062aefd
    FNSTSW AX                           ; 004d4240
    SAHF                                ; 004d4242
    JNC 0x004d46d7                      ; 004d4243
        ;   XREF to: 004d46d7 (CONDITIONAL_JUMP)  ; LAB_004d46d7
    MOV dword ptr [ESP + 0xc],0x461c3f9a ; 004d4249
    MOV ECX,dword ptr [EBX + 0x1fbd0]   ; 004d4251
    XOR ESI,ESI                         ; 004d4257
    CMP ECX,0x2                         ; 004d4259
    JZ 0x004d4263                       ; 004d425c
        ;   XREF to: 004d4263 (CONDITIONAL_JUMP)  ; LAB_004d4263
    CMP ECX,0x3                         ; 004d425e
    JNZ 0x004d4273                      ; 004d4261
        ;   XREF to: 004d4273 (CONDITIONAL_JUMP)  ; LAB_004d4273
    LEA EAX,[ESP + 0xc]                 ; 004d4263
        ;   Label: LAB_004d4263
    PUSH EAX                            ; 004d4267
    PUSH EBX                            ; 004d4268
    CALL core_hero.cpp_CHero_FUN_004f3960 ; 004d4269
        ;   XREF to: 004f3960 (UNCONDITIONAL_CALL)  ; float core_hero.cpp_CHero_FUN_004f3960(CHero * this_ptr)
    ADD ESP,0x8                         ; 004d426e
    MOV ESI,EAX                         ; 004d4271
    TEST ESI,ESI                        ; 004d4273
        ;   Label: LAB_004d4273
    JZ 0x004d469f                       ; 004d4275
        ;   XREF to: 004d469f (CONDITIONAL_JUMP)  ; LAB_004d469f
    FLD float ptr [ESP + 0xc]           ; 004d427b
    FCOMP double ptr [0x0062af15]       ; 004d427f | DOUBLE_0062af15
    FNSTSW AX                           ; 004d4285
    SAHF                                ; 004d4287
    JNC 0x004d469f                      ; 004d4288
        ;   XREF to: 004d469f (CONDITIONAL_JUMP)  ; LAB_004d469f
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004d428e
    JNZ 0x004d42b7                      ; 004d4295
        ;   XREF to: 004d42b7 (CONDITIONAL_JUMP)  ; LAB_004d42b7
    LEA EAX,[EBX + 0x158]               ; 004d4297
    PUSH EAX                            ; 004d429d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d429e
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d42a3
    ADD ESP,0x4                         ; 004d42a6
    TEST EAX,EAX                        ; 004d42a9
    JNZ 0x004d42b7                      ; 004d42ab
        ;   XREF to: 004d42b7 (CONDITIONAL_JUMP)  ; LAB_004d42b7
    MOV dword ptr [EBX + 0xbe44],0x1    ; 004d42ad
    LEA EDX,[ESI + 0x20]                ; 004d42b7
        ;   Label: LAB_004d42b7
    LEA EAX,[EBX + 0x20]                ; 004d42ba
    FLD float ptr [EDX]                 ; 004d42bd
    FSUB float ptr [EAX]                ; 004d42bf
    FSTP float ptr [ESP + 0xbc]         ; 004d42c1
    FLD float ptr [EDX + 0x4]           ; 004d42c8
    FSUB float ptr [EAX + 0x4]          ; 004d42cb
    FSTP float ptr [ESP + 0xc0]         ; 004d42ce
    FLD float ptr [EDX + 0x8]           ; 004d42d5
    FSUB float ptr [EAX + 0x8]          ; 004d42d8
    LEA EAX,[ESP + 0xbc]                ; 004d42db
    PUSH EAX                            ; 004d42e2
    LEA EAX,[ESP + 0x48]                ; 004d42e3
    PUSH EAX                            ; 004d42e7
    FSTP float ptr [ESP + 0xcc]         ; 004d42e8
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d42ef
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004d42f4
    ADD ESP,0x8                         ; 004d42f7
    FSUB float ptr [EBX + 0x34]         ; 004d42fa
    SUB ESP,0x4                         ; 004d42fd
    FSTP float ptr [ESP]                ; 004d4300
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d4303
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x114],EAX     ; 004d4308
    FLD float ptr [ESP + 0x114]         ; 004d430f
    FMUL double ptr [0x0062af05]        ; 004d4316 | DOUBLE_0062af05
    ADD ESP,0x4                         ; 004d431c
    FMUL double ptr [0x0062aefd]        ; 004d431f | DOUBLE_0062aefd
    FLD float ptr [ESP + 0x10c]         ; 004d4325
    FCHS                                ; 004d432c
    FSTP float ptr [ESP + 0x104]        ; 004d432e
    FST float ptr [EBX + 0xbe50]        ; 004d4335
    FCOMP float ptr [ESP + 0x104]       ; 004d433b
    FNSTSW AX                           ; 004d4342
    SAHF                                ; 004d4344
    JNC 0x004d4354                      ; 004d4345
        ;   XREF to: 004d4354 (CONDITIONAL_JUMP)  ; LAB_004d4354
    MOV EAX,dword ptr [ESP + 0x104]     ; 004d4347
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004d434e
    FLD float ptr [EBX + 0xbe50]        ; 004d4354
        ;   Label: LAB_004d4354
    FCOMP float ptr [ESP + 0x10c]       ; 004d435a
    FNSTSW AX                           ; 004d4361
    SAHF                                ; 004d4363
    JBE 0x004d4373                      ; 004d4364
        ;   XREF to: 004d4373 (CONDITIONAL_JUMP)  ; LAB_004d4373
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004d4366
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004d436d
    FLD float ptr [EBX + 0xbe50]        ; 004d4373
        ;   Label: LAB_004d4373
    FST double ptr [ESP]                ; 004d4379
    FCOMP double ptr [0x0062af1d]       ; 004d437c | DOUBLE_0062af1d
    FNSTSW AX                           ; 004d4382
    SAHF                                ; 004d4384
    JBE 0x004d4395                      ; 004d4385
        ;   XREF to: 004d4395 (CONDITIONAL_JUMP)  ; LAB_004d4395
    FLD double ptr [ESP]                ; 004d4387
    FCOMP double ptr [0x0062af25]       ; 004d438a | DOUBLE_0062af25
    FNSTSW AX                           ; 004d4390
    SAHF                                ; 004d4392
    JC 0x004d43a7                       ; 004d4393
        ;   XREF to: 004d43a7 (CONDITIONAL_JUMP)  ; LAB_004d43a7
    MOV ESP,EBP                         ; 004d4395
        ;   Label: LAB_004d4395
    POP EBP                             ; 004d4397
    POP EDI                             ; 004d4398
    POP ESI                             ; 004d4399
    POP EBX                             ; 004d439a
    RET                                 ; 004d439b
    XOR EDI,EDI                         ; 004d439c
        ;   Label: LAB_004d439c
    MOV dword ptr [ESP + 0x8],EDI       ; 004d439e
    JMP 0x004d4236                      ; 004d43a2
        ;   XREF to: 004d4236 (UNCONDITIONAL_JUMP)  ; LAB_004d4236
    LEA EDX,[ESP + 0x2c]                ; 004d43a7
        ;   Label: LAB_004d43a7
    PUSH EDX                            ; 004d43ab
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d43ac
    PUSH EBX                            ; 004d43b2
    CALL dword ptr [EAX + 0x14]         ; 004d43b3
    LEA EDX,[EAX + 0xc]                 ; 004d43b6
    FLD float ptr [EAX]                 ; 004d43b9
    FADD float ptr [EDX]                ; 004d43bb
    ADD ESP,0x8                         ; 004d43bd
    FST float ptr [ESP + 0x50]          ; 004d43c0
    FLD float ptr [EAX + 0x4]           ; 004d43c4
    FADD float ptr [EDX + 0x4]          ; 004d43c7
    FXCH                                ; 004d43ca
    FMUL float ptr [0x0062af2d]         ; 004d43cc | FLOAT_0062af2d
    FXCH                                ; 004d43d2
    FST float ptr [ESP + 0x54]          ; 004d43d4
    FLD float ptr [EAX + 0x8]           ; 004d43d8
    FADD float ptr [EDX + 0x8]          ; 004d43db
    FXCH                                ; 004d43de
    FMUL float ptr [0x0062af2d]         ; 004d43e0 | FLOAT_0062af2d
    FXCH                                ; 004d43e6
    FST float ptr [ESP + 0x58]          ; 004d43e8
    FMUL float ptr [0x0062af2d]         ; 004d43ec | FLOAT_0062af2d
    LEA EAX,[EBX + 0x20]                ; 004d43f2
    FXCH ST2                            ; 004d43f5
    FSTP float ptr [ESP + 0xd4]         ; 004d43f7
    FSTP float ptr [ESP + 0xd8]         ; 004d43fe
    FSTP float ptr [ESP + 0xdc]         ; 004d4405
    FLD float ptr [EAX]                 ; 004d440c
    FADD float ptr [ESP + 0xd4]         ; 004d440e
    FSTP float ptr [ESP + 0xb0]         ; 004d4415
    FLD float ptr [EAX + 0x4]           ; 004d441c
    FADD float ptr [ESP + 0xd8]         ; 004d441f
    FSTP float ptr [ESP + 0xb4]         ; 004d4426
    FLD float ptr [EAX + 0x8]           ; 004d442d
    LEA EAX,[ESP + 0x14]                ; 004d4430
    PUSH EAX                            ; 004d4434
    FADD float ptr [ESP + 0xe0]         ; 004d4435
    PUSH ESI                            ; 004d443c
    FSTP float ptr [ESP + 0xc0]         ; 004d443d
    MOV EDX,dword ptr [ESI + 0x154]     ; 004d4444
    CALL dword ptr [EDX + 0x14]         ; 004d444a
    LEA EDX,[EAX + 0xc]                 ; 004d444d
    FLD float ptr [EAX]                 ; 004d4450
    FADD float ptr [EDX]                ; 004d4452
    ADD ESP,0x8                         ; 004d4454
    FST float ptr [ESP + 0xf8]          ; 004d4457
    FLD float ptr [EAX + 0x4]           ; 004d445e
    FADD float ptr [EDX + 0x4]          ; 004d4461
    FXCH                                ; 004d4464
    FMUL float ptr [0x0062af2d]         ; 004d4466 | FLOAT_0062af2d
    FXCH                                ; 004d446c
    FST float ptr [ESP + 0xfc]          ; 004d446e
    FLD float ptr [EAX + 0x8]           ; 004d4475
    FADD float ptr [EDX + 0x8]          ; 004d4478
    FXCH                                ; 004d447b
    FMUL float ptr [0x0062af2d]         ; 004d447d | FLOAT_0062af2d
    FXCH                                ; 004d4483
    FST float ptr [ESP + 0x100]         ; 004d4485
    FMUL float ptr [0x0062af2d]         ; 004d448c | FLOAT_0062af2d
    LEA EAX,[ESI + 0x20]                ; 004d4492
    FXCH ST2                            ; 004d4495
    FSTP float ptr [ESP + 0xc8]         ; 004d4497
    FSTP float ptr [ESP + 0xcc]         ; 004d449e
    FSTP float ptr [ESP + 0xd0]         ; 004d44a5
    FLD float ptr [EAX]                 ; 004d44ac
    FADD float ptr [ESP + 0xc8]         ; 004d44ae
    FST float ptr [ESP + 0xe0]          ; 004d44b5
    FLD float ptr [EAX + 0x4]           ; 004d44bc
    FADD float ptr [ESP + 0xcc]         ; 004d44bf
    FXCH                                ; 004d44c6
    FSUB float ptr [ESP + 0xb0]         ; 004d44c8
    FXCH                                ; 004d44cf
    FST float ptr [ESP + 0xe4]          ; 004d44d1
    FSUB float ptr [ESP + 0xb4]         ; 004d44d8
    FLD float ptr [EAX + 0x8]           ; 004d44df
    FXCH                                ; 004d44e2
    FST float ptr [ESP + 0x60]          ; 004d44e4
    FMUL float ptr [ESP + 0x60]         ; 004d44e8
    FXCH ST2                            ; 004d44ec
    FSTP float ptr [ESP + 0x5c]         ; 004d44ee
    FADD float ptr [ESP + 0xd0]         ; 004d44f2
    FLD float ptr [ESP + 0x5c]          ; 004d44f9
    FMUL ST0                            ; 004d44fd
    FXCH                                ; 004d44ff
    FST float ptr [ESP + 0xe8]          ; 004d4501
    FSUB float ptr [ESP + 0xb8]         ; 004d4508
    FXCH                                ; 004d450f
    FADDP ST2,ST0                       ; 004d4511
    FST float ptr [ESP + 0x64]          ; 004d4513
    FMUL float ptr [ESP + 0x64]         ; 004d4517
    FADDP                               ; 004d451b
    FSQRT                               ; 004d451d
    FST float ptr [ESP + 0x10]          ; 004d451f
    FLDZ                                ; 004d4523
    FCOMPP                              ; 004d4525
    FNSTSW AX                           ; 004d4527
    SAHF                                ; 004d4529
    JNC 0x004d468c                      ; 004d452a
        ;   XREF to: 004d468c (CONDITIONAL_JUMP)  ; LAB_004d468c
    FLD1                                ; 004d4530
    FLD float ptr [ESP + 0x5c]          ; 004d4532
    FXCH                                ; 004d4536
    FDIV float ptr [ESP + 0x10]         ; 004d4538
    FXCH                                ; 004d453c
    FMUL ST1                            ; 004d453e
    FLD float ptr [ESP + 0x60]          ; 004d4540
    FMUL ST2                            ; 004d4544
    FLD float ptr [ESP + 0x64]          ; 004d4546
    FMULP ST3                           ; 004d454a
    FXCH                                ; 004d454c
    FSTP float ptr [ESP + 0x5c]         ; 004d454e
    FSTP float ptr [ESP + 0x60]         ; 004d4552
    FSTP float ptr [ESP + 0x64]         ; 004d4556
    FLD float ptr [0x0062af31]          ; 004d455a | FLOAT_0062af31
        ;   Label: LAB_004d455a
    FLD float ptr [ESP + 0x5c]          ; 004d4560
    FMUL ST1                            ; 004d4564
    FLD float ptr [ESP + 0x60]          ; 004d4566
    FMUL ST2                            ; 004d456a
    FLD float ptr [ESP + 0x64]          ; 004d456c
    FMULP ST3                           ; 004d4570
    FLD float ptr [ESP + 0xe0]          ; 004d4572
    FLD float ptr [ESP + 0xe4]          ; 004d4579
    FLD float ptr [ESP + 0xe8]          ; 004d4580
    LEA EDX,[ESP + 0x80]                ; 004d4587
    LEA EAX,[ESP + 0xe0]                ; 004d458e
    FXCH ST4                            ; 004d4595
    FSTP float ptr [ESP + 0xec]         ; 004d4597
    FXCH ST2                            ; 004d459e
    FSTP float ptr [ESP + 0xf0]         ; 004d45a0
    FXCH ST3                            ; 004d45a7
    FSTP float ptr [ESP + 0xf4]         ; 004d45a9
    FXCH ST2                            ; 004d45b0
    FADD float ptr [ESP + 0xec]         ; 004d45b2
    FXCH ST2                            ; 004d45b9
    FADD float ptr [ESP + 0xf0]         ; 004d45bb
    FXCH                                ; 004d45c2
    FADD float ptr [ESP + 0xf4]         ; 004d45c4
    FXCH ST2                            ; 004d45cb
    FSTP float ptr [ESP + 0x80]         ; 004d45cd
    FSTP float ptr [ESP + 0x84]         ; 004d45d4
    FSTP float ptr [ESP + 0x88]         ; 004d45db
    CMP EAX,EDX                         ; 004d45e2
    JZ 0x004d4610                       ; 004d45e4
        ;   XREF to: 004d4610 (CONDITIONAL_JUMP)  ; LAB_004d4610
    MOV EAX,dword ptr [ESP + 0x80]      ; 004d45e6
    MOV dword ptr [ESP + 0xe0],EAX      ; 004d45ed
    MOV EAX,dword ptr [ESP + 0x84]      ; 004d45f4
    MOV dword ptr [ESP + 0xe4],EAX      ; 004d45fb
    MOV EAX,dword ptr [ESP + 0x88]      ; 004d4602
    MOV dword ptr [ESP + 0xe8],EAX      ; 004d4609
    PUSH 0x1                            ; 004d4610
        ;   Label: LAB_004d4610
    MOV EDX,dword ptr [0x006810c8]      ; 004d4612 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004d4618 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 004d4619
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004d461e
    PUSH EBX                            ; 004d4621
    MOV ECX,dword ptr [0x006810c8]      ; 004d4622 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004d4628 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004d4629
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d462e
    LEA EDX,[ESP + 0xe0]                ; 004d4631
    PUSH EDX                            ; 004d4638
    LEA EDX,[ESP + 0xb4]                ; 004d4639
    PUSH EDX                            ; 004d4640
    MOV EAX,[0x006810c8]                ; 004d4641 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004d4646 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x14d144],0x0  ; 004d4647 | DAT_032613bc
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 004d4651
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    ADD ESP,0xc                         ; 004d4656
    MOV EDI,dword ptr [0x006810c8]      ; 004d4659 | g_CDemonSetPtr
    PUSH EDI                            ; 004d465f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004d4660
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    MOV EAX,[0x006810c8]                ; 004d4665 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004d466a | DAT_032613bc
    ADD ESP,0x4                         ; 004d4670
    CMP ESI,EDX                         ; 004d4673
    JNZ 0x004d4395                      ; 004d4675
        ;   XREF to: 004d4395 (CONDITIONAL_JUMP)  ; LAB_004d4395
    MOV dword ptr [EBX + 0xbe38],0x1    ; 004d467b
    MOV ESP,EBP                         ; 004d4685
    POP EBP                             ; 004d4687
    POP EDI                             ; 004d4688
    POP ESI                             ; 004d4689
    POP EBX                             ; 004d468a
    RET                                 ; 004d468b
    XOR ECX,ECX                         ; 004d468c
        ;   Label: LAB_004d468c
    MOV dword ptr [ESP + 0x60],ECX      ; 004d468e
    MOV dword ptr [ESP + 0x5c],ECX      ; 004d4692
    MOV dword ptr [ESP + 0x64],ECX      ; 004d4696
    JMP 0x004d455a                      ; 004d469a
        ;   XREF to: 004d455a (UNCONDITIONAL_JUMP)  ; LAB_004d455a
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004d469f
        ;   Label: LAB_004d469f
    JZ 0x004d4395                       ; 004d46a6
        ;   XREF to: 004d4395 (CONDITIONAL_JUMP)  ; LAB_004d4395
    LEA EAX,[EBX + 0x158]               ; 004d46ac
    PUSH EAX                            ; 004d46b2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d46b3
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d46b8
    ADD ESP,0x4                         ; 004d46bb
    TEST EAX,EAX                        ; 004d46be
    JNZ 0x004d4395                      ; 004d46c0
        ;   XREF to: 004d4395 (CONDITIONAL_JUMP)  ; LAB_004d4395
    MOV dword ptr [EBX + 0xbe44],0x1    ; 004d46c6
    MOV ESP,EBP                         ; 004d46d0
    POP EBP                             ; 004d46d2
    POP EDI                             ; 004d46d3
    POP ESI                             ; 004d46d4
    POP EBX                             ; 004d46d5
    RET                                 ; 004d46d6
    MOV EAX,[0x02db87d0]                ; 004d46d7 | g_LocalHeroIndex
        ;   Label: LAB_004d46d7
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004d46dc | g_HeroActors
    LEA EDX,[EAX + 0xbe58]              ; 004d46e3
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004d46e9
    PUSH EAX                            ; 004d46ec
    LEA EAX,[ESP + 0x6c]                ; 004d46ed
    PUSH EAX                            ; 004d46f1
    LEA EAX,[EBX + 0x20]                ; 004d46f2
    PUSH EAX                            ; 004d46f5
    PUSH EDX                            ; 004d46f6
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 004d46f7
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004d46fc
    TEST EAX,EAX                        ; 004d46ff
    JZ 0x004d4395                       ; 004d4701
        ;   XREF to: 004d4395 (CONDITIONAL_JUMP)  ; LAB_004d4395
    FLD float ptr [ESP + 0x6c]          ; 004d4707
    FSUB float ptr [EBX + 0x34]         ; 004d470b
    SUB ESP,0x4                         ; 004d470e
    FSTP float ptr [ESP]                ; 004d4711
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d4714
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x114],EAX     ; 004d4719
    FLD float ptr [ESP + 0x114]         ; 004d4720
    FMUL double ptr [0x0062af05]        ; 004d4727 | DOUBLE_0062af05
    ADD ESP,0x4                         ; 004d472d
    FMUL double ptr [0x0062aefd]        ; 004d4730 | DOUBLE_0062aefd
    FLD float ptr [ESP + 0x10c]         ; 004d4736
    FCHS                                ; 004d473d
    FSTP float ptr [ESP + 0x108]        ; 004d473f
    FST float ptr [EBX + 0xbe50]        ; 004d4746
    FCOMP float ptr [ESP + 0x108]       ; 004d474c
    FNSTSW AX                           ; 004d4753
    SAHF                                ; 004d4755
    JC 0x004d4822                       ; 004d4756
        ;   XREF to: 004d4822 (CONDITIONAL_JUMP)  ; LAB_004d4822
    FLD float ptr [EBX + 0xbe50]        ; 004d475c
        ;   Label: LAB_004d475c
    FCOMP float ptr [ESP + 0x10c]       ; 004d4762
    FNSTSW AX                           ; 004d4769
    SAHF                                ; 004d476b
    JBE 0x004d477b                      ; 004d476c
        ;   XREF to: 004d477b (CONDITIONAL_JUMP)  ; LAB_004d477b
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004d476e
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004d4775
    MOV EAX,[0x02db87d0]                ; 004d477b | g_LocalHeroIndex
        ;   Label: LAB_004d477b
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004d4780
    LEA EDX,[EBX + 0x20]                ; 004d478a
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004d478d | g_HeroActors
    FLD float ptr [EDX]                 ; 004d4794
    FSUB float ptr [EAX + 0x20]         ; 004d4796
    FSTP float ptr [ESP + 0x74]         ; 004d4799
    FLD float ptr [EDX + 0x4]           ; 004d479d
    FSUB float ptr [EAX + 0x24]         ; 004d47a0
    FSTP float ptr [ESP + 0x78]         ; 004d47a3
    FLD float ptr [EDX + 0x8]           ; 004d47a7
    LEA EDX,[ESP + 0x74]                ; 004d47aa
    FSUB float ptr [EAX + 0x28]         ; 004d47ae
    LEA EAX,[ESP + 0x8c]                ; 004d47b1
    FSTP float ptr [ESP + 0x7c]         ; 004d47b8
    CMP EAX,EDX                         ; 004d47bc
    JZ 0x004d47e1                       ; 004d47be
        ;   XREF to: 004d47e1 (CONDITIONAL_JUMP)  ; LAB_004d47e1
    MOV EAX,dword ptr [ESP + 0x74]      ; 004d47c0
    MOV dword ptr [ESP + 0x8c],EAX      ; 004d47c4
    MOV EAX,dword ptr [ESP + 0x78]      ; 004d47cb
    MOV dword ptr [ESP + 0x90],EAX      ; 004d47cf
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004d47d6
    MOV dword ptr [ESP + 0x94],EAX      ; 004d47da
    FLD float ptr [ESP + 0x90]          ; 004d47e1
        ;   Label: LAB_004d47e1
    FMUL ST0                            ; 004d47e8
    FLD float ptr [ESP + 0x8c]          ; 004d47ea
    FMUL ST0                            ; 004d47f1
    FADDP                               ; 004d47f3
    FLD float ptr [ESP + 0x94]          ; 004d47f5
    FMUL ST0                            ; 004d47fc
    FADDP                               ; 004d47fe
    FSQRT                               ; 004d4800
    FCOMP double ptr [0x0062af0d]       ; 004d4802 | DOUBLE_0062af0d
    FNSTSW AX                           ; 004d4808
    SAHF                                ; 004d480a
    JBE 0x004d4395                      ; 004d480b
        ;   XREF to: 004d4395 (CONDITIONAL_JUMP)  ; LAB_004d4395
    MOV dword ptr [EBX + 0xbe34],0x1    ; 004d4811
    MOV ESP,EBP                         ; 004d481b
    POP EBP                             ; 004d481d
    POP EDI                             ; 004d481e
    POP ESI                             ; 004d481f
    POP EBX                             ; 004d4820
    RET                                 ; 004d4821
    MOV EAX,dword ptr [ESP + 0x108]     ; 004d4822
        ;   Label: LAB_004d4822
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004d4829
    JMP 0x004d475c                      ; 004d482f
        ;   XREF to: 004d475c (UNCONDITIONAL_JUMP)  ; LAB_004d475c

