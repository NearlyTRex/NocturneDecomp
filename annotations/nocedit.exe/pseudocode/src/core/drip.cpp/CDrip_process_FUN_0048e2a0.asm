; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_process_FUN_0048e2a0(CDrip *this_ptr,float delta_time)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; SDamageInfo      Stack[-0xb4]:60  SStack_b4
; CBoundingBox3D   Stack[-0x78]:24  local_78
; CVector3f        Stack[-0x60]:12  CStack_60
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f[2]     Stack[-0x3c]:24  aCStack_3c
; CLocation *      Stack[-0x20]:4  pCStack_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
; float            Stack[-0x14]:4  fStack_14
;
; Referenced Globals:
;   float FLOAT_006222a3 = -5000
;   double DOUBLE_006222a7 = 32
;   double DOUBLE_006222af = 0.850000000000000
;   float FLOAT_006222b7 = 20
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CKeyFramedModelInstance CKeyFramedModelInstance_02c9b170
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;   undefined4 g_CDemonSetInstance.characters[1]
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
;   core_fire.cpp_CFireEffect_createRock_FUN_004c7e60
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e2a0
        ;   Label: core_drip.cpp_CDrip_process_FUN_0048e2a0
    PUSH ESI                            ; 0048e2a1
    PUSH EDI                            ; 0048e2a2
    PUSH EBP                            ; 0048e2a3
    SUB ESP,0xa4                        ; 0048e2a4
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0048e2aa
    CMP dword ptr [EBX + 0x2ec],0x0     ; 0048e2b1
    JZ 0x0048e2fe                       ; 0048e2b8
        ;   XREF to: 0048e2fe (CONDITIONAL_JUMP)  ; LAB_0048e2fe
    TEST dword ptr [EBX + 0x2dc],0x7fffffff ; 0048e2ba
        ;   Label: LAB_0048e2ba
    JZ 0x0048e35e                       ; 0048e2c4
        ;   XREF to: 0048e35e (CONDITIONAL_JUMP)  ; LAB_0048e35e
    CMP dword ptr [EBX + 0x2d8],0x0     ; 0048e2ca
    JZ 0x0048e2f3                       ; 0048e2d1
        ;   XREF to: 0048e2f3 (CONDITIONAL_JUMP)  ; LAB_0048e2f3
    FLD float ptr [EBX + 0x2dc]         ; 0048e2d3
    FSUB float ptr [ESP + 0xbc]         ; 0048e2d9
    FST float ptr [EBX + 0x2dc]         ; 0048e2e0
    FLDZ                                ; 0048e2e6
    FCOMPP                              ; 0048e2e8
    FNSTSW AX                           ; 0048e2ea
    SAHF                                ; 0048e2ec
    JA 0x0048e696                       ; 0048e2ed
        ;   XREF to: 0048e696 (CONDITIONAL_JUMP)  ; LAB_0048e696
    ADD ESP,0xa4                        ; 0048e2f3
        ;   Label: LAB_0048e2f3
    POP EBP                             ; 0048e2f9
    POP EDI                             ; 0048e2fa
    POP ESI                             ; 0048e2fb
    POP EBX                             ; 0048e2fc
    RET                                 ; 0048e2fd
    LEA EDX,[EBX + 0x2f8]               ; 0048e2fe
        ;   Label: LAB_0048e2fe
    MOV EAX,dword ptr [EDX]             ; 0048e304
    MOV dword ptr [ESP + 0x6c],EAX      ; 0048e306
    LEA EAX,[EDX + 0x4]                 ; 0048e30a
    MOV EAX,dword ptr [EAX]             ; 0048e30d
    MOV dword ptr [ESP + 0x70],EAX      ; 0048e30f
    LEA EAX,[EDX + 0x8]                 ; 0048e313
    MOV EAX,dword ptr [EAX]             ; 0048e316
    MOV dword ptr [ESP + 0x74],EAX      ; 0048e318
    LEA EAX,[ESP + 0x6c]                ; 0048e31c
    PUSH EAX                            ; 0048e320
    LEA EAX,[ESP + 0x64]                ; 0048e321
    PUSH EDX                            ; 0048e325
    FLD float ptr [ESP + 0x78]          ; 0048e326
    PUSH EAX                            ; 0048e32a
    FADD float ptr [0x006222a3]         ; 0048e32b | FLOAT_006222a3
    PUSH 0x3277d14                      ; 0048e331 | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x80]         ; 0048e336
    CALL core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0 ; 0048e33d
        ;   XREF to: 00495aa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0(CDemonRaytrace * this_ptr, CVector3f * output_point, CVector3f * ray_start, CVector3f * ray_end)
    ADD ESP,0x10                        ; 0048e342
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048e345
    MOV dword ptr [EBX + 0x2ec],0x1     ; 0048e349
    MOV dword ptr [EBX + 0x2f0],EAX     ; 0048e353
    JMP 0x0048e2ba                      ; 0048e359
        ;   XREF to: 0048e2ba (UNCONDITIONAL_JUMP)  ; LAB_0048e2ba
    FLD float ptr [ESP + 0xbc]          ; 0048e35e
        ;   Label: LAB_0048e35e
    FLD ST0                             ; 0048e365
    FMUL double ptr [0x006222a7]        ; 0048e367 | DOUBLE_006222a7
    FSUBR float ptr [EBX + 0x308]       ; 0048e36d
    FST float ptr [EBX + 0x308]         ; 0048e373
    FMULP                               ; 0048e379
    LEA EAX,[ESP + 0x3c]                ; 0048e37b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0048e37f
    PUSH EAX                            ; 0048e385
    FADD float ptr [EBX + 0x24]         ; 0048e386
    PUSH EBX                            ; 0048e389
    FSTP float ptr [EBX + 0x24]         ; 0048e38a
    CALL dword ptr [EDX + 0x14]         ; 0048e38d
    ADD ESP,0x8                         ; 0048e390
    FLD float ptr [ESP + 0x4c]          ; 0048e393
    FSUB float ptr [ESP + 0x40]         ; 0048e397
    FMUL double ptr [0x006222af]        ; 0048e39b | DOUBLE_006222af
    FSUBR float ptr [EBX + 0x2f0]       ; 0048e3a1
    FLD float ptr [EBX + 0x24]          ; 0048e3a7
    FCOMPP                              ; 0048e3aa
    FNSTSW AX                           ; 0048e3ac
    SAHF                                ; 0048e3ae
    JC 0x0048e41a                       ; 0048e3af
        ;   XREF to: 0048e41a (CONDITIONAL_JUMP)  ; LAB_0048e41a
    LEA EAX,[EBX + 0x20]                ; 0048e3b1
        ;   Label: LAB_0048e3b1
    XOR EDI,EDI                         ; 0048e3b4
    XOR ESI,ESI                         ; 0048e3b6
    MOV dword ptr [ESP + 0x94],EAX      ; 0048e3b8
    MOV EAX,[0x006810c8]                ; 0048e3bf | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0048e3bf
    CMP EDI,dword ptr [EAX + 0x14f098]  ; 0048e3c4 | g_CDemonSetInstance.character_count
    JGE 0x0048e2f3                      ; 0048e3ca
        ;   XREF to: 0048e2f3 (CONDITIONAL_JUMP)  ; LAB_0048e2f3
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14f09c] ; 0048e3d0 | g_CDemonSetInstance.characters[0] | g_CDemonSetInstance.characters[1]
    MOV EAX,ESP                         ; 0048e3d7
    PUSH EAX                            ; 0048e3d9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0048e3da
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0048e3df
    MOV EDX,ESP                         ; 0048e3e2
    MOV EAX,dword ptr [EBX + 0x310]     ; 0048e3e4
    PUSH EDX                            ; 0048e3ea
    MOV dword ptr [ESP + 0x8],EAX       ; 0048e3eb
    MOV dword ptr [ESP + 0x38],EBX      ; 0048e3ef
    PUSH 0x3f800000                     ; 0048e3f3
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0048e3f8
    MOV dword ptr [ESP + 0x40],EBX      ; 0048e3ff
    PUSH EDX                            ; 0048e403
    MOV EAX,dword ptr [EBP + 0x154]     ; 0048e404
    PUSH EBP                            ; 0048e40a
    ADD ESI,0x4                         ; 0048e40b
    INC EDI                             ; 0048e40e
    CALL dword ptr [EAX + 0x114]        ; 0048e40f
    ADD ESP,0x10                        ; 0048e415
    JMP 0x0048e3bf                      ; 0048e418
        ;   XREF to: 0048e3bf (UNCONDITIONAL_JUMP)  ; LAB_0048e3bf
    CMP dword ptr [EBX + 0x338],0x0     ; 0048e41a
        ;   Label: LAB_0048e41a
    JZ 0x0048e454                       ; 0048e421
        ;   XREF to: 0048e454 (CONDITIONAL_JUMP)  ; LAB_0048e454
    PUSH 0x3f800000                     ; 0048e423
    PUSH 0x0                            ; 0048e428
    PUSH 0x0                            ; 0048e42a
    MOV EBP,dword ptr [0x006810c8]      ; 0048e42c | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 0048e432
    PUSH EBP                            ; 0048e437 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0 ; 0048e438
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 0048e43d
    LEA EDX,[EBX + 0x314]               ; 0048e440
    PUSH EDX                            ; 0048e446
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048e447
    PUSH EBX                            ; 0048e44d
    CALL dword ptr [EAX + 0x24]         ; 0048e44e
    ADD ESP,0x8                         ; 0048e451
    FLD float ptr [EBX + 0x2f0]         ; 0048e454
        ;   Label: LAB_0048e454
    MOV EAX,dword ptr [EBX + 0x334]     ; 0048e45a
    FSTP float ptr [EBX + 0x24]         ; 0048e460
    TEST EAX,EAX                        ; 0048e463
    JNZ 0x0048e5f0                      ; 0048e465
        ;   XREF to: 0048e5f0 (CONDITIONAL_JUMP)  ; LAB_0048e5f0
    LEA ESI,[EBX + 0x20]                ; 0048e46b
    XOR EDI,EDI                         ; 0048e46e
    PUSH 0x3f000000                     ; 0048e470
        ;   Label: LAB_0048e470
    PUSH 0xbf000000                     ; 0048e475
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e47a
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e47f
    FLD float ptr [ESP + 0xa8]          ; 0048e486
    ADD ESP,0x8                         ; 0048e48d
    PUSH 0x3f000000                     ; 0048e490
    PUSH 0xbf000000                     ; 0048e495
    FSTP float ptr [ESP + 0x5c]         ; 0048e49a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e49e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e4a3
    FLD float ptr [ESP + 0xa8]          ; 0048e4aa
    ADD ESP,0x8                         ; 0048e4b1
    PUSH 0x3f000000                     ; 0048e4b4
    PUSH 0xbf000000                     ; 0048e4b9
    FSTP float ptr [ESP + 0x60]         ; 0048e4be
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e4c2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e4c7
    MOV EDX,dword ptr [0x0067a3d0]      ; 0048e4ce | g_CFireEffectPtr | g_CFireEffectInstance
    FLD float ptr [ESP + 0xa8]          ; 0048e4d4
    ADD ESP,0x8                         ; 0048e4db
    LEA EAX,[ESP + 0x54]                ; 0048e4de
    FLD float ptr [ESP + 0x54]          ; 0048e4e2
    FLD float ptr [ESP + 0x58]          ; 0048e4e6
    FXCH ST2                            ; 0048e4ea
    FSTP float ptr [ESP + 0x5c]         ; 0048e4ec
    PUSH 0xffff                         ; 0048e4f0
    FLD float ptr [ESP + 0x60]          ; 0048e4f5
    PUSH 0x0                            ; 0048e4f9
    FXCH                                ; 0048e4fb
    FADD float ptr [ESI]                ; 0048e4fd
    PUSH 0x3f000000                     ; 0048e4ff
    FSTP float ptr [ESP + 0x60]         ; 0048e504
    FXCH                                ; 0048e508
    FADD float ptr [ESI + 0x4]          ; 0048e50a
    PUSH EAX                            ; 0048e50d
    FSTP float ptr [ESP + 0x68]         ; 0048e50e
    FADD float ptr [ESI + 0x8]          ; 0048e512
    PUSH EDX                            ; 0048e515 | g_CFireEffectInstance
    FSTP float ptr [ESP + 0x70]         ; 0048e516
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 0048e51a
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0048e51f
    PUSH 0x3fc90fdb                     ; 0048e522
    PUSH 0x3f490fdb                     ; 0048e527
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e52c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e531
    FLD float ptr [ESP + 0xa8]          ; 0048e538
    ADD ESP,0x8                         ; 0048e53f
    PUSH 0x40c90fdb                     ; 0048e542
    PUSH 0x0                            ; 0048e547
    FSTP float ptr [ESP + 0xa0]         ; 0048e549
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e550
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e555
    FLD float ptr [ESP + 0xa8]          ; 0048e55c
    ADD ESP,0x8                         ; 0048e563
    FLD ST0                             ; 0048e566
    FCOS                                ; 0048e568
    FLD float ptr [ESP + 0x98]          ; 0048e56a
    FLD ST0                             ; 0048e571
    FCOS                                ; 0048e573
    FXCH ST3                            ; 0048e575
    FSIN                                ; 0048e577
    FXCH                                ; 0048e579
    FSIN                                ; 0048e57b
    FXCH ST2                            ; 0048e57d
    FMUL float ptr [0x006222b7]         ; 0048e57f | FLOAT_006222b7
    FXCH                                ; 0048e585
    FMUL float ptr [0x006222b7]         ; 0048e587 | FLOAT_006222b7
    FXCH ST2                            ; 0048e58d
    FMUL float ptr [0x006222b7]         ; 0048e58f | FLOAT_006222b7
    FXCH ST3                            ; 0048e595
    FSTP float ptr [ESP + 0x9c]         ; 0048e597
    FMUL float ptr [ESP + 0x9c]         ; 0048e59e
    FXCH                                ; 0048e5a5
    FMUL float ptr [ESP + 0x9c]         ; 0048e5a7
    PUSH 0x2c9b170                      ; 0048e5ae | CKeyFramedModelInstance_02c9b170
    FXCH ST2                            ; 0048e5b3
    FSTP float ptr [ESP + 0x80]         ; 0048e5b5
    FSTP float ptr [ESP + 0x7c]         ; 0048e5bc
    FSTP float ptr [ESP + 0x84]         ; 0048e5c0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0048e5c7
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048e5cc
    PUSH EAX                            ; 0048e5cf
    LEA EAX,[ESP + 0x7c]                ; 0048e5d0
    PUSH EAX                            ; 0048e5d4
    PUSH ESI                            ; 0048e5d5
    MOV ECX,dword ptr [0x0067a3d0]      ; 0048e5d6 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 0048e5dc | g_CFireEffectInstance
    INC EDI                             ; 0048e5dd
    CALL core_fire.cpp_CFireEffect_createRock_FUN_004c7e60 ; 0048e5de
        ;   XREF to: 004c7e60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_004c7e60(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 0048e5e3
    CMP EDI,0xa                         ; 0048e5e6
    JL 0x0048e470                       ; 0048e5e9
        ;   XREF to: 0048e470 (CONDITIONAL_JUMP)  ; LAB_0048e470
    NOP                                 ; 0048e5ef
    PUSH 0x3f800000                     ; 0048e5f0
        ;   Label: LAB_0048e5f0
    FLD float ptr [EBX + 0x2fc]         ; 0048e5f5
    PUSH 0x0                            ; 0048e5fb
    FSTP float ptr [EBX + 0x24]         ; 0048e5fd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e600
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e605
    FLD float ptr [ESP + 0xa8]          ; 0048e60c
    ADD ESP,0x8                         ; 0048e613
    FMUL float ptr [EBX + 0x2e8]        ; 0048e616
    PUSH 0x3f800000                     ; 0048e61c
    FADD float ptr [EBX + 0x2f8]        ; 0048e621
    PUSH 0x0                            ; 0048e627
    FSTP float ptr [EBX + 0x20]         ; 0048e629
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e62c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e631
    FLD float ptr [ESP + 0xa8]          ; 0048e638
    FMUL float ptr [EBX + 0x2e8]        ; 0048e63f
    FADD float ptr [EBX + 0x300]        ; 0048e645
    LEA EAX,[EBX + 0x304]               ; 0048e64b
    FSTP float ptr [EBX + 0x28]         ; 0048e651
    MOV dword ptr [EAX + 0x8],0x0       ; 0048e654
    ADD ESP,0x8                         ; 0048e65b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048e65e
    MOV dword ptr [EAX + 0x4],EDX       ; 0048e661
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048e664
    MOV dword ptr [EAX],EDX             ; 0048e667
    PUSH dword ptr [EBX + 0x2e4]        ; 0048e669
    PUSH dword ptr [EBX + 0x2e0]        ; 0048e66f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0048e675
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048e67a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0048e681
    MOV dword ptr [EBX + 0x2dc],EAX     ; 0048e688
    ADD ESP,0x8                         ; 0048e68e
    JMP 0x0048e3b1                      ; 0048e691
        ;   XREF to: 0048e3b1 (UNCONDITIONAL_JUMP)  ; LAB_0048e3b1
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0048e696
        ;   Label: LAB_0048e696
    ADD ESP,0xa4                        ; 0048e6a0
    POP EBP                             ; 0048e6a6
    POP EDI                             ; 0048e6a7
    POP ESI                             ; 0048e6a8
    POP EBX                             ; 0048e6a9
    RET                                 ; 0048e6aa

