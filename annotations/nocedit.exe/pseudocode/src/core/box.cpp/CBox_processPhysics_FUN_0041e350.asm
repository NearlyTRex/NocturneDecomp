; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e350(CBox *this_ptr,float delta_time)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CMatrix3x3f      Stack[-0x420]:36  local_420
; float            Stack[-0x3f8]:4  local_3f8
; float            Stack[-0x3f4]:4  local_3f4
; float            Stack[-0x3f0]:4  local_3f0
; float            Stack[-0x3ec]:4  local_3ec
; float            Stack[-0x3e8]:4  local_3e8
; float            Stack[-0x3e4]:4  local_3e4
; float            Stack[-0x3e0]:4  local_3e0
; float            Stack[-0x3dc]:4  local_3dc
; float            Stack[-0x3d8]:4  local_3d8
; float[8]         Stack[-0x3d0]:32  local_3d0
; float            Stack[-0x3b0]:4  local_3b0
; float            Stack[-0x3ac]:4  local_3ac
; float            Stack[-0x3a8]:4  local_3a8
; float            Stack[-0x3a4]:4  local_3a4
; float            Stack[-0x3a0]:4  local_3a0
; float            Stack[-0x39c]:4  local_39c
; float            Stack[-0x398]:4  local_398
; float            Stack[-0x394]:4  local_394
; float            Stack[-0x390]:4  local_390
; float            Stack[-0x38c]:4  local_38c
; float            Stack[-0x388]:4  local_388
; float            Stack[-0x384]:4  local_384
; float            Stack[-0x380]:4  local_380
; float            Stack[-0x37c]:4  local_37c
; float            Stack[-0x378]:4  local_378
; float            Stack[-0x374]:4  local_374
; float            Stack[-0x370]:4  local_370
; float            Stack[-0x36c]:4  local_36c
; float            Stack[-0x368]:4  local_368
; float            Stack[-0x364]:4  local_364
; float            Stack[-0x360]:4  local_360
; float            Stack[-0x35c]:4  local_35c
; float            Stack[-0x358]:4  local_358
; float            Stack[-0x354]:4  local_354
; float            Stack[-0x350]:4  local_350
; float            Stack[-0x34c]:4  local_34c
; float            Stack[-0x348]:4  local_348
; CBox             Stack[-0x344]:600  local_344
; float            Stack[-0xec]:4  local_ec
; float            Stack[-0xe8]:4  local_e8
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; float            Stack[-0xdc]:4  local_dc
; float            Stack[-0xd8]:4  local_d8
; float            Stack[-0xd4]:4  local_d4
; float            Stack[-0xd0]:4  local_d0
; float            Stack[-0xcc]:4  local_cc
; float            Stack[-0xc8]:4  local_c8
; float            Stack[-0xc4]:4  local_c4
; float            Stack[-0xc0]:4  local_c0
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; CVector3f        Stack[-0x8c]:12  local_8c
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; CVector3f *      Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; SScrape *        Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; CMatrix3x3f *    Stack[-0x44]:4  local_44
; SScrape *        Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; SScrape *        Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; SScrape *        Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_box.cpp_CBox_process_FUN_0041e2f0 at 0041e33e
;   core_fire.cpp_CStake_process_FUN_004c0210 at 004c0229
;
; Referenced Globals:
;   float g_BoxGroundPlaneY = -100
;   double g_BoxGravityAcceleration = 32
;   double g_BoxMaxAngularVelocity = 25.1327412280000
;   double g_BoxCollisionRestitution = 1.01000000000000
;   float g_BoxTorqueMultiplier = 2
;   float g_BoxAngularDampingNegative = -1
;   float g_BoxAngularDampingScale = 0.5
;   float g_BoxLinearDampingFactor = 0.1000000
;   double g_BoxNegativeRestitution = -1.01000000000000
;   float g_BoxFrictionThreshold = 0.25
;   float g_BoxCollisionDamping = 0.2000000
;   double g_BoxMinimumVelocityThreshold = 0.0100000000000000
;   double g_BoxCollisionEpsilon = 0.5
;   double g_BoxCollisionNormalDotThreshold = 0.100000000000000
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e350
        ;   Label: core_box.cpp_CBox_processPhysics_FUN_0041e350
    PUSH ESI                            ; 0041e351
    PUSH EDI                            ; 0041e352
    PUSH EBP                            ; 0041e353
    MOV EBP,ESP                         ; 0041e354
    SUB ESP,0x42c                       ; 0041e356
    AND ESP,0xfffffff8                  ; 0041e35c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041e35f
    CMP dword ptr [EBX + 0x254],0x0     ; 0041e362
    JZ 0x0041fd0d                       ; 0041e369
        ;   XREF to: 0041fd0d (CONDITIONAL_JUMP)  ; LAB_0041fd0d
    LEA EAX,[ESP + 0x330]               ; 0041e36f
    CMP EAX,EBX                         ; 0041e376
    JNZ 0x0041fd14                      ; 0041e378
        ;   XREF to: 0041fd14 (CONDITIONAL_JUMP)  ; LAB_0041fd14
    LEA EAX,[ESP + 0xfc]                ; 0041e37e
        ;   Label: LAB_0041e37e
    CMP EAX,EBX                         ; 0041e385
    JZ 0x0041e3a6                       ; 0041e387
        ;   XREF to: 0041e3a6 (CONDITIONAL_JUMP)  ; LAB_0041e3a6
    MOV EAX,dword ptr [EBX]             ; 0041e389
    MOV dword ptr [ESP + 0xfc],EAX      ; 0041e38b
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041e392
    MOV dword ptr [ESP + 0x100],EAX     ; 0041e395
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041e39c
    MOV dword ptr [ESP + 0x104],EAX     ; 0041e39f
    FLD1                                ; 0041e3a6
        ;   Label: LAB_0041e3a6
    PUSH 0x0                            ; 0041e3a8
    LEA EAX,[ESP + 0x250]               ; 0041e3aa
    FLD float ptr [ESP + 0x104]         ; 0041e3b1
    PUSH EAX                            ; 0041e3b8
    LEA EAX,[ESP + 0x104]               ; 0041e3b9
    FXCH                                ; 0041e3c0
    FADD float ptr [ESP + 0x33c]        ; 0041e3c2
    PUSH EAX                            ; 0041e3c9
    LEA EAX,[ESP + 0x33c]               ; 0041e3ca
    FXCH                                ; 0041e3d1
    FADD float ptr [0x006164cf]         ; 0041e3d3 | g_BoxGroundPlaneY
    PUSH EAX                            ; 0041e3d9
    FXCH                                ; 0041e3da
    FSTP float ptr [ESP + 0x344]        ; 0041e3dc
    PUSH 0x3277d14                      ; 0041e3e3 | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x114]        ; 0041e3e8
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 0041e3ef
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x43c],EAX     ; 0041e3f4
    FLD float ptr [ESP + 0x43c]         ; 0041e3fb
    ADD ESP,0x14                        ; 0041e402
    FLDZ                                ; 0041e405
    FXCH                                ; 0041e407
    FST float ptr [ESP + 0x1c]          ; 0041e409
    FSTP double ptr [ESP]               ; 0041e40d
    FCOMP double ptr [ESP]              ; 0041e410
    FNSTSW AX                           ; 0041e413
    SAHF                                ; 0041e415
    JNC 0x0041fd36                      ; 0041e416
        ;   XREF to: 0041fd36 (CONDITIONAL_JUMP)  ; LAB_0041fd36
    FLD1                                ; 0041e41c
    FCOMP double ptr [ESP]              ; 0041e41e
    FNSTSW AX                           ; 0041e421
    SAHF                                ; 0041e423
    JBE 0x0041fd36                      ; 0041e424
        ;   XREF to: 0041fd36 (CONDITIONAL_JUMP)  ; LAB_0041fd36
    FLD float ptr [ESP + 0x100]         ; 0041e42a
    FSUB float ptr [ESP + 0x334]        ; 0041e431
    FMUL float ptr [ESP + 0x1c]         ; 0041e438
    FADD float ptr [ESP + 0x334]        ; 0041e43c
    FSTP float ptr [EBX + 0x258]        ; 0041e443
    LEA EAX,[EBX + 0xc0]                ; 0041e449
        ;   Label: LAB_0041e449
    LEA ESI,[EBX + 0xcc]                ; 0041e44f
    LEA EDX,[EBX + 0x260]               ; 0041e455
    CMP ESI,EAX                         ; 0041e45b
        ;   Label: LAB_0041e45b
    JZ 0x0041e46f                       ; 0041e45d
        ;   XREF to: 0041e46f (CONDITIONAL_JUMP)  ; LAB_0041e46f
    MOV ECX,dword ptr [EAX]             ; 0041e45f
    MOV dword ptr [ESI],ECX             ; 0041e461
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041e463
    MOV dword ptr [ESI + 0x4],ECX       ; 0041e466
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041e469
    MOV dword ptr [ESI + 0x8],ECX       ; 0041e46c
    ADD EAX,0x34                        ; 0041e46f
        ;   Label: LAB_0041e46f
    ADD ESI,0x34                        ; 0041e472
    CMP EAX,EDX                         ; 0041e475
    JNZ 0x0041e45b                      ; 0041e477
        ;   XREF to: 0041e45b (CONDITIONAL_JUMP)  ; LAB_0041e45b
    XOR ECX,ECX                         ; 0041e479
    LEA EAX,[ESP + 0x120]               ; 0041e47b
    MOV dword ptr [ESP + 0x128],ECX     ; 0041e482
    MOV dword ptr [ESP + 0x124],ECX     ; 0041e489
    MOV dword ptr [ESP + 0x120],ECX     ; 0041e490
    PUSH EAX                            ; 0041e497
    FLD float ptr [EBX + 0x94]          ; 0041e498
    LEA EAX,[ESP + 0x148]               ; 0041e49e
    FCHS                                ; 0041e4a5
    FMUL double ptr [0x006164d7]        ; 0041e4a7 | g_BoxGravityAcceleration
    PUSH EAX                            ; 0041e4ad
    LEA EAX,[EBX + 0x18]                ; 0041e4ae
    PUSH EAX                            ; 0041e4b1
    FSTP float ptr [ESP + 0x130]        ; 0041e4b2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041e4b9
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0041e4be
    LEA EAX,[EBX + 0x64]                ; 0041e4c0
    FLD float ptr [EDX]                 ; 0041e4c3
    FADD float ptr [EAX]                ; 0041e4c5
    FSTP float ptr [EAX]                ; 0041e4c7
    FLD float ptr [EDX + 0x4]           ; 0041e4c9
    FADD float ptr [EAX + 0x4]          ; 0041e4cc
    FLD float ptr [EAX]                 ; 0041e4cf
    FXCH                                ; 0041e4d1
    FSTP float ptr [EAX + 0x4]          ; 0041e4d3
    FLD float ptr [EDX + 0x8]           ; 0041e4d6
    FADD float ptr [EAX + 0x8]          ; 0041e4d9
    LEA EDX,[EBX + 0x94]                ; 0041e4dc
    FSTP float ptr [EAX + 0x8]          ; 0041e4e2
    FDIV float ptr [EDX]                ; 0041e4e5
    ADD ESP,0xc                         ; 0041e4e7
    FSTP float ptr [ESP + 0x15c]        ; 0041e4ea
    FLD float ptr [EAX + 0x4]           ; 0041e4f1
    FDIV float ptr [EDX]                ; 0041e4f4
    FSTP float ptr [ESP + 0x160]        ; 0041e4f6
    FLD float ptr [EAX + 0x8]           ; 0041e4fd
    FDIV float ptr [EDX]                ; 0041e500
    LEA EAX,[ESP + 0x15c]               ; 0041e502
    LEA EDX,[EBX + 0x58]                ; 0041e509
    FSTP float ptr [ESP + 0x164]        ; 0041e50c
    CMP EDX,EAX                         ; 0041e513
    JZ 0x0041e534                       ; 0041e515
        ;   XREF to: 0041e534 (CONDITIONAL_JUMP)  ; LAB_0041e534
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0041e517
    MOV dword ptr [EDX],EAX             ; 0041e51e
    MOV EAX,dword ptr [ESP + 0x160]     ; 0041e520
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e527
    MOV EAX,dword ptr [ESP + 0x164]     ; 0041e52a
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e531
    FLD float ptr [EBX + 0x88]          ; 0041e534
        ;   Label: LAB_0041e534
    FDIV float ptr [EBX + 0x98]         ; 0041e53a
    FLD float ptr [EBX + 0x8c]          ; 0041e540
    FDIV float ptr [EBX + 0x9c]         ; 0041e546
    FLD float ptr [EBX + 0x90]          ; 0041e54c
    FDIV float ptr [EBX + 0xa0]         ; 0041e552
    LEA EAX,[EBX + 0x64]                ; 0041e558
    FXCH ST2                            ; 0041e55b
    FSTP float ptr [EBX + 0x7c]         ; 0041e55d
    FSTP float ptr [EBX + 0x80]         ; 0041e560
    FSTP float ptr [EBX + 0x84]         ; 0041e566
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e56c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e573
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e576
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e579
    MOV dword ptr [EAX],EDX             ; 0041e57c
    LEA EAX,[EBX + 0x88]                ; 0041e57e
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e584
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e58b
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e58e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e591
    MOV dword ptr [EAX],EDX             ; 0041e594
    LEA EAX,[EBX + 0x58]                ; 0041e596
    PUSH EAX                            ; 0041e599
    LEA EAX,[ESP + 0x184]               ; 0041e59a
    PUSH EAX                            ; 0041e5a1
    LEA ESI,[EBX + 0x18]                ; 0041e5a2
    PUSH ESI                            ; 0041e5a5
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0041e5a6
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0041e5ab
    FLD float ptr [EBP + 0x18]          ; 0041e5ae
    FLD float ptr [EAX]                 ; 0041e5b1
    FMUL ST1                            ; 0041e5b3
    FSTP float ptr [ESP + 0x1a4]        ; 0041e5b5
    FLD float ptr [EAX + 0x4]           ; 0041e5bc
    FMUL ST1                            ; 0041e5bf
    FSTP float ptr [ESP + 0x1a8]        ; 0041e5c1
    FMUL float ptr [EAX + 0x8]          ; 0041e5c8
    LEA EAX,[EBX + 0x40]                ; 0041e5cb
    FSTP float ptr [ESP + 0x1ac]        ; 0041e5ce
    FLD float ptr [EAX]                 ; 0041e5d5
    FADD float ptr [ESP + 0x1a4]        ; 0041e5d7
    FLD float ptr [EAX + 0x4]           ; 0041e5de
    FXCH                                ; 0041e5e1
    FSTP float ptr [EAX]                ; 0041e5e3
    FADD float ptr [ESP + 0x1a8]        ; 0041e5e5
    FLD float ptr [EAX + 0x8]           ; 0041e5ec
    FXCH                                ; 0041e5ef
    FSTP float ptr [EAX + 0x4]          ; 0041e5f1
    FADD float ptr [ESP + 0x1ac]        ; 0041e5f4
    PUSH EAX                            ; 0041e5fb
    FSTP float ptr [EAX + 0x8]          ; 0041e5fc
    LEA EAX,[ESP + 0x1c0]               ; 0041e5ff
    PUSH EAX                            ; 0041e606
    PUSH ESI                            ; 0041e607
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041e608
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x4c]                ; 0041e60d
    ADD ESP,0xc                         ; 0041e610
    CMP EDX,EAX                         ; 0041e613
    JZ 0x0041e627                       ; 0041e615
        ;   XREF to: 0041e627 (CONDITIONAL_JUMP)  ; LAB_0041e627
    MOV ECX,dword ptr [EAX]             ; 0041e617
    MOV dword ptr [EDX],ECX             ; 0041e619
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041e61b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041e61e
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041e621
    MOV dword ptr [EDX + 0x8],ECX       ; 0041e624
    LEA EAX,[EBX + 0x7c]                ; 0041e627
        ;   Label: LAB_0041e627
    FLD float ptr [EBP + 0x18]          ; 0041e62a
    FLD float ptr [EAX]                 ; 0041e62d
    FMUL ST1                            ; 0041e62f
    FSTP float ptr [ESP + 0x114]        ; 0041e631
    FLD float ptr [EAX + 0x4]           ; 0041e638
    FMUL ST1                            ; 0041e63b
    FSTP float ptr [ESP + 0x118]        ; 0041e63d
    FMUL float ptr [EAX + 0x8]          ; 0041e644
    LEA EDX,[EBX + 0x70]                ; 0041e647
    FSTP float ptr [ESP + 0x11c]        ; 0041e64a
    FLD float ptr [EDX]                 ; 0041e651
    FADD float ptr [ESP + 0x114]        ; 0041e653
    FLD float ptr [EDX + 0x4]           ; 0041e65a
    FXCH                                ; 0041e65d
    FSTP float ptr [EDX]                ; 0041e65f
    FADD float ptr [ESP + 0x118]        ; 0041e661
    FST float ptr [EDX + 0x4]           ; 0041e668
    FMUL float ptr [EDX + 0x4]          ; 0041e66b
    FLD float ptr [EDX]                 ; 0041e66e
    FMUL ST0                            ; 0041e670
    FLD float ptr [EDX + 0x8]           ; 0041e672
    FADD float ptr [ESP + 0x11c]        ; 0041e675
    FXCH                                ; 0041e67c
    FADDP ST2,ST0                       ; 0041e67e
    FST float ptr [EDX + 0x8]           ; 0041e680
    FMUL float ptr [EDX + 0x8]          ; 0041e683
    FADDP                               ; 0041e686
    FSQRT                               ; 0041e688
    FST double ptr [ESP + 0x8]          ; 0041e68a
    FCOMP double ptr [0x006164df]       ; 0041e68e | g_BoxMaxAngularVelocity
    FNSTSW AX                           ; 0041e694
    SAHF                                ; 0041e696
    JBE 0x0041e6d3                      ; 0041e697
        ;   XREF to: 0041e6d3 (CONDITIONAL_JUMP)  ; LAB_0041e6d3
    FLD double ptr [0x006164df]         ; 0041e699 | g_BoxMaxAngularVelocity
    FDIV double ptr [ESP + 0x8]         ; 0041e69f
    FLD float ptr [EDX]                 ; 0041e6a3
    FXCH                                ; 0041e6a5
    FSTP float ptr [ESP + 0x3e0]        ; 0041e6a7
    FMUL float ptr [ESP + 0x3e0]        ; 0041e6ae
    FLD float ptr [EDX + 0x4]           ; 0041e6b5
    FMUL float ptr [ESP + 0x3e0]        ; 0041e6b8
    FLD float ptr [EDX + 0x8]           ; 0041e6bf
    FMUL float ptr [ESP + 0x3e0]        ; 0041e6c2
    FXCH ST2                            ; 0041e6c9
    FSTP float ptr [EDX]                ; 0041e6cb
    FSTP float ptr [EDX + 0x4]          ; 0041e6cd
    FSTP float ptr [EDX + 0x8]          ; 0041e6d0
    LEA EAX,[EBX + 0x40]                ; 0041e6d3
        ;   Label: LAB_0041e6d3
    FLD float ptr [EBP + 0x18]          ; 0041e6d6
    FLD float ptr [EAX]                 ; 0041e6d9
    FMUL ST1                            ; 0041e6db
    FSTP float ptr [ESP + 0x1f8]        ; 0041e6dd
    FLD float ptr [EAX + 0x4]           ; 0041e6e4
    FMUL ST1                            ; 0041e6e7
    FSTP float ptr [ESP + 0x1fc]        ; 0041e6e9
    FLD float ptr [EAX + 0x8]           ; 0041e6f0
    FMUL ST1                            ; 0041e6f3
    FSTP float ptr [ESP + 0x200]        ; 0041e6f5
    FLD float ptr [EBX]                 ; 0041e6fc
    FADD float ptr [ESP + 0x1f8]        ; 0041e6fe
    FLD float ptr [EBX + 0x4]           ; 0041e705
    FXCH                                ; 0041e708
    FSTP float ptr [EBX]                ; 0041e70a
    FADD float ptr [ESP + 0x1fc]        ; 0041e70c
    FLD float ptr [EBX + 0x8]           ; 0041e713
    FXCH                                ; 0041e716
    FSTP float ptr [EBX + 0x4]          ; 0041e718
    FADD float ptr [ESP + 0x200]        ; 0041e71b
    LEA EAX,[EBX + 0x70]                ; 0041e722
    FSTP float ptr [EBX + 0x8]          ; 0041e725
    FLD float ptr [EAX]                 ; 0041e728
    FMUL ST1                            ; 0041e72a
    FSTP float ptr [ESP + 0x2c4]        ; 0041e72c
    FLD float ptr [EAX + 0x4]           ; 0041e733
    FMUL ST1                            ; 0041e736
    FSTP float ptr [ESP + 0x2c8]        ; 0041e738
    FLD float ptr [EAX + 0x8]           ; 0041e73f
    LEA EAX,[ESP + 0x2c4]               ; 0041e742
    FMULP                               ; 0041e749
    PUSH EAX                            ; 0041e74b
    LEA EAX,[ESP + 0x24]                ; 0041e74c
    PUSH EAX                            ; 0041e750
    FSTP float ptr [ESP + 0x2d4]        ; 0041e751
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0041e758
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041e75d
    FLD float ptr [EBX + 0x1c]          ; 0041e760
    FMUL float ptr [ESP + 0x2c]         ; 0041e763
    FLD float ptr [EBX + 0x18]          ; 0041e767
    FMUL float ptr [ESP + 0x24]         ; 0041e76a
    FLD float ptr [EBX + 0x18]          ; 0041e76e
    FMUL float ptr [ESP + 0x28]         ; 0041e771
    FLD float ptr [EBX + 0x28]          ; 0041e775
    FMUL float ptr [ESP + 0x2c]         ; 0041e778
    FLD float ptr [EBX + 0x18]          ; 0041e77c
    FMUL float ptr [ESP + 0x20]         ; 0041e77f
    FLD float ptr [EBX + 0x24]          ; 0041e783
    FXCH                                ; 0041e786
    FADDP ST5,ST0                       ; 0041e788
    FMUL float ptr [ESP + 0x24]         ; 0041e78a
    FLD float ptr [EBX + 0x20]          ; 0041e78e
    FMUL float ptr [ESP + 0x38]         ; 0041e791
    FLD float ptr [EBX + 0x1c]          ; 0041e795
    FXCH                                ; 0041e798
    FADDP ST6,ST0                       ; 0041e79a
    FMUL float ptr [ESP + 0x30]         ; 0041e79c
    FXCH ST5                            ; 0041e7a0
    FSTP float ptr [ESP + 0x48]         ; 0041e7a2
    FLD float ptr [EBX + 0x24]          ; 0041e7a6
    FXCH ST5                            ; 0041e7a9
    FADDP ST4,ST0                       ; 0041e7ab
    FXCH ST4                            ; 0041e7ad
    FMUL float ptr [ESP + 0x28]         ; 0041e7af
    FLD float ptr [EBX + 0x20]          ; 0041e7b3
    FMUL float ptr [ESP + 0x3c]         ; 0041e7b6
    FLD float ptr [EBX + 0x1c]          ; 0041e7ba
    FXCH                                ; 0041e7bd
    FADDP ST5,ST0                       ; 0041e7bf
    FMUL float ptr [ESP + 0x34]         ; 0041e7c1
    FXCH ST4                            ; 0041e7c5
    FSTP float ptr [ESP + 0x4c]         ; 0041e7c7
    FLD float ptr [EBX + 0x34]          ; 0041e7cb
    FXCH ST4                            ; 0041e7ce
    FADDP ST3,ST0                       ; 0041e7d0
    FXCH ST3                            ; 0041e7d2
    FMUL float ptr [ESP + 0x2c]         ; 0041e7d4
    FLD float ptr [EBX + 0x20]          ; 0041e7d8
    FMUL float ptr [ESP + 0x40]         ; 0041e7db
    FLD float ptr [EBX + 0x24]          ; 0041e7df
    FXCH                                ; 0041e7e2
    FADDP ST4,ST0                       ; 0041e7e4
    FMUL float ptr [ESP + 0x20]         ; 0041e7e6
    FXCH ST3                            ; 0041e7ea
    FSTP float ptr [ESP + 0x50]         ; 0041e7ec
    FLD float ptr [EBX + 0x30]          ; 0041e7f0
    FXCH ST3                            ; 0041e7f3
    FADDP ST2,ST0                       ; 0041e7f5
    FXCH ST2                            ; 0041e7f7
    FMUL float ptr [ESP + 0x24]         ; 0041e7f9
    FLD float ptr [EBX + 0x2c]          ; 0041e7fd
    FMUL float ptr [ESP + 0x38]         ; 0041e800
    FLD float ptr [EBX + 0x30]          ; 0041e804
    FXCH                                ; 0041e807
    FADDP ST3,ST0                       ; 0041e809
    FMUL float ptr [ESP + 0x28]         ; 0041e80b
    FXCH ST2                            ; 0041e80f
    FSTP float ptr [ESP + 0x54]         ; 0041e811
    FLD float ptr [EBX + 0x28]          ; 0041e815
    FMUL float ptr [ESP + 0x30]         ; 0041e818
    FLD float ptr [EBX + 0x28]          ; 0041e81c
    FMUL float ptr [ESP + 0x34]         ; 0041e81f
    FXCH                                ; 0041e823
    FADDP ST6,ST0                       ; 0041e825
    FADDP ST4,ST0                       ; 0041e827
    FLD float ptr [EBX + 0x2c]          ; 0041e829
    FMUL float ptr [ESP + 0x3c]         ; 0041e82c
    FLD float ptr [EBX + 0x2c]          ; 0041e830
    FMUL float ptr [ESP + 0x40]         ; 0041e833
    FXCH                                ; 0041e837
    FADDP ST6,ST0                       ; 0041e839
    FLD float ptr [EBX + 0x30]          ; 0041e83b
    FMUL float ptr [ESP + 0x20]         ; 0041e83e
    FXCH                                ; 0041e842
    FADDP ST5,ST0                       ; 0041e844
    FLD float ptr [EBX + 0x34]          ; 0041e846
    FXCH                                ; 0041e849
    FADDP ST4,ST0                       ; 0041e84b
    FMUL float ptr [ESP + 0x30]         ; 0041e84d
    FLD float ptr [EBX + 0x38]          ; 0041e851
    FMUL float ptr [ESP + 0x38]         ; 0041e854
    FXCH                                ; 0041e858
    FADDP ST2,ST0                       ; 0041e85a
    FLD float ptr [EBX + 0x34]          ; 0041e85c
    FMUL float ptr [ESP + 0x34]         ; 0041e85f
    FADDP ST3,ST0                       ; 0041e863
    FADDP ST3,ST0                       ; 0041e865
    FLD float ptr [EBX + 0x38]          ; 0041e867
    FMUL float ptr [ESP + 0x3c]         ; 0041e86a
    FLD float ptr [EBX + 0x38]          ; 0041e86e
    FMUL float ptr [ESP + 0x40]         ; 0041e871
    LEA ESI,[ESP + 0x48]                ; 0041e875
    LEA EAX,[ESP + 0x2d0]               ; 0041e879
    MOV ECX,0xa                         ; 0041e880
    PUSH EAX                            ; 0041e885
    LEA EAX,[EBX + 0x18]                ; 0041e886
    LEA EDI,[EBX + 0x18]                ; 0041e889
    PUSH EAX                            ; 0041e88c
    FXCH                                ; 0041e88d
    FADDP ST2,ST0                       ; 0041e88f
    FADDP ST2,ST0                       ; 0041e891
    FXCH ST4                            ; 0041e893
    FSTP float ptr [ESP + 0x60]         ; 0041e895
    FXCH ST2                            ; 0041e899
    FSTP float ptr [ESP + 0x64]         ; 0041e89b
    FSTP float ptr [ESP + 0x68]         ; 0041e89f
    FXCH                                ; 0041e8a3
    FSTP float ptr [ESP + 0x6c]         ; 0041e8a5
    FSTP float ptr [ESP + 0x70]         ; 0041e8a9
    MOVSD.REP ES:EDI,ESI                ; 0041e8ad
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0041e8af
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    LEA EDX,[EBX + 0xc]                 ; 0041e8b4
    ADD ESP,0x8                         ; 0041e8b7
    CMP EDX,EAX                         ; 0041e8ba
    JZ 0x0041e8ce                       ; 0041e8bc
        ;   XREF to: 0041e8ce (CONDITIONAL_JUMP)  ; LAB_0041e8ce
    MOV ECX,dword ptr [EAX]             ; 0041e8be
    MOV dword ptr [EDX],ECX             ; 0041e8c0
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041e8c2
    MOV dword ptr [EDX + 0x4],ECX       ; 0041e8c5
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041e8c8
    MOV dword ptr [EDX + 0x8],ECX       ; 0041e8cb
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041e8ce
        ;   Label: LAB_0041e8ce
    XOR EDI,EDI                         ; 0041e8d4
    TEST EAX,EAX                        ; 0041e8d6
    JLE 0x0041e979                      ; 0041e8d8
        ;   XREF to: 0041e979 (CONDITIONAL_JUMP)  ; LAB_0041e979
    LEA EAX,[EBX + 0xb4]                ; 0041e8de
    MOV dword ptr [ESP + 0x400],EAX     ; 0041e8e4
    LEA EAX,[EBX + 0x18]                ; 0041e8eb
    MOV dword ptr [ESP + 0x3fc],EAX     ; 0041e8ee
    LEA ESI,[EBX + 0xc0]                ; 0041e8f5
    IMUL EAX,EDI,0x34                   ; 0041e8fb
        ;   Label: LAB_0041e8fb
    ADD EAX,dword ptr [ESP + 0x400]     ; 0041e8fe
    PUSH EAX                            ; 0041e905
    LEA EAX,[ESP + 0x238]               ; 0041e906
    PUSH EAX                            ; 0041e90d
    MOV ECX,dword ptr [ESP + 0x404]     ; 0041e90e
    PUSH ECX                            ; 0041e915
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0041e916
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EBX]                 ; 0041e91b
    FADD float ptr [EAX]                ; 0041e91d
    ADD ESP,0xc                         ; 0041e91f
    FSTP float ptr [ESP + 0x360]        ; 0041e922
    FLD float ptr [EBX + 0x4]           ; 0041e929
    FADD float ptr [EAX + 0x4]          ; 0041e92c
    FSTP float ptr [ESP + 0x364]        ; 0041e92f
    FLD float ptr [EBX + 0x8]           ; 0041e936
    FADD float ptr [EAX + 0x8]          ; 0041e939
    LEA EAX,[ESP + 0x360]               ; 0041e93c
    FSTP float ptr [ESP + 0x368]        ; 0041e943
    CMP ESI,EAX                         ; 0041e94a
    JZ 0x0041e96b                       ; 0041e94c
        ;   XREF to: 0041e96b (CONDITIONAL_JUMP)  ; LAB_0041e96b
    MOV EAX,dword ptr [ESP + 0x360]     ; 0041e94e
    MOV dword ptr [ESI],EAX             ; 0041e955
    MOV EAX,dword ptr [ESP + 0x364]     ; 0041e957
    MOV dword ptr [ESI + 0x4],EAX       ; 0041e95e
    MOV EAX,dword ptr [ESP + 0x368]     ; 0041e961
    MOV dword ptr [ESI + 0x8],EAX       ; 0041e968
    INC EDI                             ; 0041e96b
        ;   Label: LAB_0041e96b
    MOV EDX,dword ptr [EBX + 0xb0]      ; 0041e96c
    ADD ESI,0x34                        ; 0041e972
    CMP EDI,EDX                         ; 0041e975
    JL 0x0041e8fb                       ; 0041e977
        ;   XREF to: 0041e8fb (CONDITIONAL_JUMP)  ; LAB_0041e8fb
    XOR ECX,ECX                         ; 0041e979
        ;   Label: LAB_0041e979
    LEA EAX,[EBX + 0xb4]                ; 0041e97b
    MOV dword ptr [ESP + 0x420],ECX     ; 0041e981
    MOV dword ptr [ESP + 0x3f0],EAX     ; 0041e988
    LEA EAX,[EBX + 0xcc]                ; 0041e98f
    MOV dword ptr [ESP + 0x424],ECX     ; 0041e995
    MOV dword ptr [ESP + 0x3d4],EAX     ; 0041e99c
    LEA EDI,[EBX + 0xc0]                ; 0041e9a3
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041e9a9
    MOV ESI,EBX                         ; 0041e9af
    TEST EAX,EAX                        ; 0041e9b1
    JLE 0x0041eaaa                      ; 0041e9b3
        ;   XREF to: 0041eaaa (CONDITIONAL_JUMP)  ; LAB_0041eaaa
    MOV EAX,dword ptr [ESP + 0x3f0]     ; 0041e9b9
    MOV dword ptr [ESP + 0x418],EAX     ; 0041e9c0
    FLD float ptr [ESI + 0xc4]          ; 0041e9c7
        ;   Label: LAB_0041e9c7
    FCOMP float ptr [EBX + 0x258]       ; 0041e9cd
    FNSTSW AX                           ; 0041e9d3
    SAHF                                ; 0041e9d5
    JNC 0x0041fd45                      ; 0041e9d6
        ;   XREF to: 0041fd45 (CONDITIONAL_JUMP)  ; LAB_0041fd45
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 0041e9dc
    CMP EDI,EAX                         ; 0041e9e3
    JZ 0x0041e9f7                       ; 0041e9e5
        ;   XREF to: 0041e9f7 (CONDITIONAL_JUMP)  ; LAB_0041e9f7
    MOV EDX,dword ptr [EDI]             ; 0041e9e7
    MOV dword ptr [EAX],EDX             ; 0041e9e9
    MOV EDX,dword ptr [EDI + 0x4]       ; 0041e9eb
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e9ee
    MOV EDX,dword ptr [EDI + 0x8]       ; 0041e9f1
    MOV dword ptr [EAX + 0x8],EDX       ; 0041e9f4
    FLD float ptr [EBX + 0x258]         ; 0041e9f7
        ;   Label: LAB_0041e9f7
    FADD double ptr [0x00616517]        ; 0041e9fd | g_BoxCollisionEpsilon
    FLD float ptr [ESI + 0xc4]          ; 0041ea03
    FXCH                                ; 0041ea09
    FSTP float ptr [ESI + 0xd0]         ; 0041ea0b
    FSUB float ptr [ESI + 0xd0]         ; 0041ea11
    FLD float ptr [EBX + 0x258]         ; 0041ea17
    FSUB float ptr [ESI + 0xd0]         ; 0041ea1d
    FDIVRP                              ; 0041ea23
    MOV dword ptr [ESI + 0xdc],0x0      ; 0041ea25
    MOV dword ptr [ESI + 0xe0],0x3f800000 ; 0041ea2f
    MOV EAX,dword ptr [ESP + 0x424]     ; 0041ea39
    MOV dword ptr [ESI + 0xe4],0x0      ; 0041ea40
    MOV EDX,dword ptr [ESP + 0x420]     ; 0041ea4a
    FSTP float ptr [ESI + 0xd8]         ; 0041ea51
    MOV dword ptr [ESP + EAX*0x4 + 0x70],EDX ; 0041ea57
    LEA EDX,[EAX + 0x1]                 ; 0041ea5b
    MOV dword ptr [ESP + 0x424],EDX     ; 0041ea5e
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 0041ea65
        ;   Label: LAB_0041ea65
    MOV EDX,dword ptr [ESP + 0x418]     ; 0041ea6c
    MOV ECX,dword ptr [ESP + 0x420]     ; 0041ea73
    ADD EDI,0x34                        ; 0041ea7a
    ADD ESI,0x34                        ; 0041ea7d
    ADD EAX,0x34                        ; 0041ea80
    ADD EDX,0x34                        ; 0041ea83
    INC ECX                             ; 0041ea86
    MOV dword ptr [ESP + 0x3d4],EAX     ; 0041ea87
    MOV dword ptr [ESP + 0x418],EDX     ; 0041ea8e
    MOV EDX,dword ptr [EBX + 0xb0]      ; 0041ea95
    MOV dword ptr [ESP + 0x420],ECX     ; 0041ea9b
    CMP ECX,EDX                         ; 0041eaa2
    JL 0x0041e9c7                       ; 0041eaa4
        ;   XREF to: 0041e9c7 (CONDITIONAL_JUMP)  ; LAB_0041e9c7
    CMP dword ptr [ESP + 0x424],0x1     ; 0041eaaa
        ;   Label: LAB_0041eaaa
    JNZ 0x0041eff7                      ; 0041eab2
        ;   XREF to: 0041eff7 (CONDITIONAL_JUMP)  ; LAB_0041eff7
    MOV ESI,dword ptr [ESP + 0x70]      ; 0041eab8
    LEA ECX,[ESI*0x4 + 0x0]             ; 0041eabc
    SUB ECX,ESI                         ; 0041eac3
    SHL ECX,0x2                         ; 0041eac5
    ADD ECX,ESI                         ; 0041eac8
    MOV EAX,dword ptr [ESP + 0x3f0]     ; 0041eaca
    SHL ECX,0x2                         ; 0041ead1
    ADD EAX,ECX                         ; 0041ead4
    LEA EDX,[EAX + 0xc]                 ; 0041ead6
    FLD float ptr [EDX]                 ; 0041ead9
    FSUB float ptr [EAX + 0x18]         ; 0041eadb
    FSTP float ptr [ESP + 0x264]        ; 0041eade
    FLD float ptr [EDX + 0x4]           ; 0041eae5
    FSUB float ptr [EAX + 0x1c]         ; 0041eae8
    FSTP float ptr [ESP + 0x268]        ; 0041eaeb
    FLD float ptr [EDX + 0x8]           ; 0041eaf2
    FSUB float ptr [EAX + 0x20]         ; 0041eaf5
    FSTP float ptr [ESP + 0x26c]        ; 0041eaf8
    FLD float ptr [ECX + EBX*0x1 + 0xd8] ; 0041eaff
    FLD1                                ; 0041eb06
    FSUBRP                              ; 0041eb08
    FMUL double ptr [0x006164e7]        ; 0041eb0a | g_BoxCollisionRestitution
    FLD float ptr [ESP + 0x264]         ; 0041eb10
    FXCH                                ; 0041eb17
    FSTP float ptr [ESP + 0x3e4]        ; 0041eb19
    FMUL float ptr [ESP + 0x3e4]        ; 0041eb20
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041eb27
    FLD float ptr [ESP + 0x268]         ; 0041eb2e
    SUB EAX,ESI                         ; 0041eb35
    FMUL float ptr [ESP + 0x3e4]        ; 0041eb37
    SHL EAX,0x2                         ; 0041eb3e
    MOV EDI,dword ptr [ESP + 0x3f0]     ; 0041eb41
    ADD EAX,ESI                         ; 0041eb48
    FLD float ptr [ESP + 0x26c]         ; 0041eb4a
    SHL EAX,0x2                         ; 0041eb51
    FMUL float ptr [ESP + 0x3e4]        ; 0041eb54
    ADD EAX,EDI                         ; 0041eb5b
    FXCH ST2                            ; 0041eb5d
    FSTP float ptr [ESP + 0x2a0]        ; 0041eb5f
    FSTP float ptr [ESP + 0x2a4]        ; 0041eb66
    FSTP float ptr [ESP + 0x2a8]        ; 0041eb6d
    ADD EAX,0x28                        ; 0041eb74
    FLD float ptr [EBX]                 ; 0041eb77
    FLD float ptr [EBX + 0x4]           ; 0041eb79
    FLD float ptr [EBX + 0x8]           ; 0041eb7c
    PUSH EAX                            ; 0041eb7f
    FXCH ST2                            ; 0041eb80
    FSUB float ptr [ESP + 0x2a4]        ; 0041eb82
    LEA EAX,[ESP + 0x2b0]               ; 0041eb89
    FSTP float ptr [EBX]                ; 0041eb90
    PUSH EAX                            ; 0041eb92
    FSUB float ptr [ESP + 0x2ac]        ; 0041eb93
    LEA EAX,[EBX + 0x18]                ; 0041eb9a
    FSTP float ptr [EBX + 0x4]          ; 0041eb9d
    FSUB float ptr [ESP + 0x2b0]        ; 0041eba0
    PUSH EAX                            ; 0041eba7
    FSTP float ptr [EBX + 0x8]          ; 0041eba8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041ebab
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x4c]                ; 0041ebb0
    ADD ESP,0xc                         ; 0041ebb3
    MOV EAX,dword ptr [EDX]             ; 0041ebb6
    MOV dword ptr [ESP + 0xcc],EAX      ; 0041ebb8
    LEA EAX,[EDX + 0x4]                 ; 0041ebbf
    MOV EAX,dword ptr [EAX]             ; 0041ebc2
    MOV dword ptr [ESP + 0xd0],EAX      ; 0041ebc4
    LEA EAX,[EDX + 0x8]                 ; 0041ebcb
    MOV EAX,dword ptr [EAX]             ; 0041ebce
    MOV dword ptr [ESP + 0xd4],EAX      ; 0041ebd0
    FLD float ptr [ESP + 0x2b0]         ; 0041ebd7
    FMUL float ptr [EDX + 0x4]          ; 0041ebde
    FLD float ptr [ESP + 0x2ac]         ; 0041ebe1
    FMUL float ptr [EDX]                ; 0041ebe8
    FADDP                               ; 0041ebea
    FLD float ptr [ESP + 0x2b4]         ; 0041ebec
    FMUL float ptr [EDX + 0x8]          ; 0041ebf3
    FADDP                               ; 0041ebf6
    FMUL float ptr [0x006164ef]         ; 0041ebf8 | g_BoxTorqueMultiplier
    FLD float ptr [ESP + 0x2ac]         ; 0041ebfe
    FXCH                                ; 0041ec05
    FSTP float ptr [ESP + 0x3f8]        ; 0041ec07
    FMUL float ptr [ESP + 0x3f8]        ; 0041ec0e
    FLD float ptr [ESP + 0x2b0]         ; 0041ec15
    FMUL float ptr [ESP + 0x3f8]        ; 0041ec1c
    FLD float ptr [ESP + 0x2b4]         ; 0041ec23
    FMUL float ptr [ESP + 0x3f8]        ; 0041ec2a
    LEA EAX,[ESP + 0x258]               ; 0041ec31
    FXCH ST2                            ; 0041ec38
    FSTP float ptr [ESP + 0x33c]        ; 0041ec3a
    FSTP float ptr [ESP + 0x340]        ; 0041ec41
    FSTP float ptr [ESP + 0x344]        ; 0041ec48
    FLD float ptr [ESP + 0x33c]         ; 0041ec4f
    FSUB float ptr [EDX]                ; 0041ec56
    FLD float ptr [ESP + 0x340]         ; 0041ec58
    FXCH                                ; 0041ec5f
    FSTP float ptr [ESP + 0x258]        ; 0041ec61
    FSUB float ptr [EDX + 0x4]          ; 0041ec68
    FLD float ptr [ESP + 0x344]         ; 0041ec6b
    FXCH                                ; 0041ec72
    FSTP float ptr [ESP + 0x25c]        ; 0041ec74
    FSUB float ptr [EDX + 0x8]          ; 0041ec7b
    LEA EDX,[ESP + 0x300]               ; 0041ec7e
    FSTP float ptr [ESP + 0x260]        ; 0041ec85
    CMP EDX,EAX                         ; 0041ec8c
    JZ 0x0041ecba                       ; 0041ec8e
        ;   XREF to: 0041ecba (CONDITIONAL_JUMP)  ; LAB_0041ecba
    MOV EAX,dword ptr [ESP + 0x258]     ; 0041ec90
    MOV dword ptr [ESP + 0x300],EAX     ; 0041ec97
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0041ec9e
    MOV dword ptr [ESP + 0x304],EAX     ; 0041eca5
    MOV EAX,dword ptr [ESP + 0x260]     ; 0041ecac
    MOV dword ptr [ESP + 0x308],EAX     ; 0041ecb3
    FLD float ptr [0x006164f3]          ; 0041ecba | g_BoxAngularDampingNegative
        ;   Label: LAB_0041ecba
    FLD float ptr [ESP + 0x300]         ; 0041ecc0
    FMUL ST1                            ; 0041ecc7
    FLD float ptr [ESP + 0x304]         ; 0041ecc9
    FMUL ST2                            ; 0041ecd0
    FLD float ptr [ESP + 0x308]         ; 0041ecd2
    FMULP ST3                           ; 0041ecd9
    FXCH                                ; 0041ecdb
    FLD float ptr [0x006164f7]          ; 0041ecdd | g_BoxAngularDampingScale
    FXCH                                ; 0041ece3
    FMUL ST1                            ; 0041ece5
    FXCH ST2                            ; 0041ece7
    FMUL ST1                            ; 0041ece9
    LEA EAX,[EBX + 0x4c]                ; 0041eceb
    FXCH ST3                            ; 0041ecee
    FMULP                               ; 0041ecf0
    LEA EDX,[EBX + 0x94]                ; 0041ecf2
    FXCH                                ; 0041ecf8
    FSTP float ptr [ESP + 0x300]        ; 0041ecfa
    FXCH                                ; 0041ed01
    FSTP float ptr [ESP + 0x304]        ; 0041ed03
    FSTP float ptr [ESP + 0x308]        ; 0041ed0a
    FLD float ptr [ESP + 0x300]         ; 0041ed11
    FSUB float ptr [EAX]                ; 0041ed18
    FLD float ptr [ESP + 0x304]         ; 0041ed1a
    FXCH                                ; 0041ed21
    FSTP float ptr [ESP + 0x384]        ; 0041ed23
    FSUB float ptr [EAX + 0x4]          ; 0041ed2a
    FLD float ptr [ESP + 0x308]         ; 0041ed2d
    FXCH                                ; 0041ed34
    FSTP float ptr [ESP + 0x388]        ; 0041ed36
    FSUB float ptr [EAX + 0x8]          ; 0041ed3d
    FLD float ptr [ESP + 0x384]         ; 0041ed40
    FXCH                                ; 0041ed47
    FSTP float ptr [ESP + 0x38c]        ; 0041ed49
    FMUL float ptr [EDX]                ; 0041ed50
    FLD float ptr [ESP + 0x388]         ; 0041ed52
    FXCH                                ; 0041ed59
    FSTP float ptr [ESP + 0x2f4]        ; 0041ed5b
    FMUL float ptr [EDX]                ; 0041ed62
    FLD1                                ; 0041ed64
    FLD float ptr [ESP + 0x38c]         ; 0041ed66
    FLD float ptr [ESP + 0x2f4]         ; 0041ed6d
    FXCH ST3                            ; 0041ed74
    FSTP float ptr [ESP + 0x2f8]        ; 0041ed76
    FMUL float ptr [EDX]                ; 0041ed7d
    FXCH                                ; 0041ed7f
    FDIV float ptr [EBP + 0x18]         ; 0041ed81
    FXCH ST2                            ; 0041ed84
    FMUL ST2                            ; 0041ed86
    FLD float ptr [ESP + 0x2f8]         ; 0041ed88
    FMUL ST3                            ; 0041ed8f
    FXCH ST2                            ; 0041ed91
    FST float ptr [ESP + 0x2fc]         ; 0041ed93
    FMULP ST3                           ; 0041ed9a
    LEA EAX,[EBX + 0x64]                ; 0041ed9c
    FSTP float ptr [ESP + 0x138]        ; 0041ed9f
    FSTP float ptr [ESP + 0x13c]        ; 0041eda6
    FSTP float ptr [ESP + 0x140]        ; 0041edad
    FLD float ptr [EAX]                 ; 0041edb4
    FADD float ptr [ESP + 0x138]        ; 0041edb6
    FLD float ptr [EAX + 0x4]           ; 0041edbd
    FXCH                                ; 0041edc0
    FSTP float ptr [EAX]                ; 0041edc2
    FADD float ptr [ESP + 0x13c]        ; 0041edc4
    FLD float ptr [EAX + 0x8]           ; 0041edcb
    FXCH                                ; 0041edce
    FSTP float ptr [EAX + 0x4]          ; 0041edd0
    FADD float ptr [ESP + 0x140]        ; 0041edd3
    FSTP float ptr [EAX + 0x8]          ; 0041edda
    LEA EAX,[EBX + 0x70]                ; 0041eddd
    MOV dword ptr [EAX + 0x8],0x0       ; 0041ede0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041ede7
    MOV dword ptr [EAX + 0x4],EDX       ; 0041edea
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041eded
    MOV dword ptr [EAX],EDX             ; 0041edf0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041edf2
    SUB EAX,ESI                         ; 0041edf9
    SHL EAX,0x2                         ; 0041edfb
    ADD EAX,ESI                         ; 0041edfe
    LEA EDX,[EBX + 0xb4]                ; 0041ee00
    SHL EAX,0x2                         ; 0041ee06
    ADD EDX,EAX                         ; 0041ee09
    FLD float ptr [EDX + 0x4]           ; 0041ee0b
    FMUL float ptr [ESP + 0x140]        ; 0041ee0e
    FLD float ptr [EDX + 0x8]           ; 0041ee15
    FMUL float ptr [ESP + 0x13c]        ; 0041ee18
    FSUBP                               ; 0041ee1f
    FSTP float ptr [ESP + 0x324]        ; 0041ee21
    FLD float ptr [EDX + 0x8]           ; 0041ee28
    FMUL float ptr [ESP + 0x138]        ; 0041ee2b
    FLD float ptr [EDX]                 ; 0041ee32
    FMUL float ptr [ESP + 0x140]        ; 0041ee34
    FSUBP                               ; 0041ee3b
    FSTP float ptr [ESP + 0x328]        ; 0041ee3d
    FLD float ptr [EDX]                 ; 0041ee44
    FMUL float ptr [ESP + 0x13c]        ; 0041ee46
    FLD float ptr [0x006164fb]          ; 0041ee4d | g_BoxLinearDampingFactor
    FLD float ptr [ESP + 0x324]         ; 0041ee53
    FMUL ST1                            ; 0041ee5a
    FLD float ptr [EDX + 0x4]           ; 0041ee5c
    FMUL float ptr [ESP + 0x138]        ; 0041ee5f
    FLD float ptr [ESP + 0x328]         ; 0041ee66
    FXCH                                ; 0041ee6d
    FSUBP ST4,ST0                       ; 0041ee6f
    FMUL ST2                            ; 0041ee71
    FXCH ST3                            ; 0041ee73
    FST float ptr [ESP + 0x32c]         ; 0041ee75
    FMULP ST2                           ; 0041ee7c
    LEA EAX,[EBX + 0x88]                ; 0041ee7e
    FSTP float ptr [ESP + 0x390]        ; 0041ee84
    FXCH                                ; 0041ee8b
    FSTP float ptr [ESP + 0x394]        ; 0041ee8d
    FSTP float ptr [ESP + 0x398]        ; 0041ee94
    FLD float ptr [EAX]                 ; 0041ee9b
    FADD float ptr [ESP + 0x390]        ; 0041ee9d
    FLD float ptr [EAX + 0x4]           ; 0041eea4
    FXCH                                ; 0041eea7
    FSTP float ptr [EAX]                ; 0041eea9
    FADD float ptr [ESP + 0x394]        ; 0041eeab
    FLD float ptr [EAX + 0x8]           ; 0041eeb2
    FXCH                                ; 0041eeb5
    FSTP float ptr [EAX + 0x4]          ; 0041eeb7
    FADD float ptr [ESP + 0x398]        ; 0041eeba
    FSTP float ptr [EAX + 0x8]          ; 0041eec1
    MOV EAX,dword ptr [EDX]             ; 0041eec4
    MOV dword ptr [ESP + 0xb4],EAX      ; 0041eec6
    LEA EAX,[EDX + 0x4]                 ; 0041eecd
    MOV EAX,dword ptr [EAX]             ; 0041eed0
    MOV dword ptr [ESP + 0xb8],EAX      ; 0041eed2
    LEA EAX,[EDX + 0x8]                 ; 0041eed9
    MOV EAX,dword ptr [EAX]             ; 0041eedc
    MOV dword ptr [ESP + 0xbc],EAX      ; 0041eede
    XOR EAX,EAX                         ; 0041eee5
    MOV dword ptr [ESP + 0x3b4],EAX     ; 0041eee7
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0041eeee
    MOV dword ptr [ESP + 0x3bc],EAX     ; 0041eef5
    FLD float ptr [EBX + 0x94]          ; 0041eefc
    LEA EAX,[ESP + 0x3b4]               ; 0041ef02
    FMUL double ptr [0x006164d7]        ; 0041ef09 | g_BoxGravityAcceleration
    PUSH EAX                            ; 0041ef0f
    LEA EAX,[ESP + 0x2bc]               ; 0041ef10
    PUSH EAX                            ; 0041ef17
    LEA EAX,[EBX + 0x18]                ; 0041ef18
    PUSH EAX                            ; 0041ef1b
    FSTP float ptr [ESP + 0x3c4]        ; 0041ef1c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041ef23
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0041ef28
    LEA EAX,[ESP + 0x3c0]               ; 0041ef2a
    ADD ESP,0xc                         ; 0041ef31
    CMP EAX,EDX                         ; 0041ef34
    JZ 0x0041ef55                       ; 0041ef36
        ;   XREF to: 0041ef55 (CONDITIONAL_JUMP)  ; LAB_0041ef55
    MOV EAX,dword ptr [EDX]             ; 0041ef38
    MOV dword ptr [ESP + 0x3b4],EAX     ; 0041ef3a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041ef41
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0041ef44
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041ef4b
    MOV dword ptr [ESP + 0x3bc],EAX     ; 0041ef4e
    FLD float ptr [ESP + 0xb8]          ; 0041ef55
        ;   Label: LAB_0041ef55
    FMUL float ptr [ESP + 0x3bc]        ; 0041ef5c
    FLD float ptr [ESP + 0xbc]          ; 0041ef63
    FMUL float ptr [ESP + 0x3b4]        ; 0041ef6a
    FLD float ptr [ESP + 0xb4]          ; 0041ef71
    FMUL float ptr [ESP + 0x3b8]        ; 0041ef78
    FLD float ptr [ESP + 0xbc]          ; 0041ef7f
    FMUL float ptr [ESP + 0x3b8]        ; 0041ef86
    FLD float ptr [ESP + 0xb4]          ; 0041ef8d
    FMUL float ptr [ESP + 0x3bc]        ; 0041ef94
    FLD float ptr [ESP + 0xb8]          ; 0041ef9b
    FMUL float ptr [ESP + 0x3b4]        ; 0041efa2
    LEA EAX,[EBX + 0x88]                ; 0041efa9
    FXCH ST2                            ; 0041efaf
    FSUBP ST5,ST0                       ; 0041efb1
    FSUBP ST3,ST0                       ; 0041efb3
    FSUBP                               ; 0041efb5
    FXCH ST2                            ; 0041efb7
    FSTP float ptr [ESP + 0xf0]         ; 0041efb9
    FSTP float ptr [ESP + 0xf4]         ; 0041efc0
    FSTP float ptr [ESP + 0xf8]         ; 0041efc7
    FLD float ptr [EAX]                 ; 0041efce
    FADD float ptr [ESP + 0xf0]         ; 0041efd0
    FLD float ptr [EAX + 0x4]           ; 0041efd7
    FXCH                                ; 0041efda
    FSTP float ptr [EAX]                ; 0041efdc
    FADD float ptr [ESP + 0xf4]         ; 0041efde
    FLD float ptr [EAX + 0x8]           ; 0041efe5
    FXCH                                ; 0041efe8
    FSTP float ptr [EAX + 0x4]          ; 0041efea
    FADD float ptr [ESP + 0xf8]         ; 0041efed
    FSTP float ptr [EAX + 0x8]          ; 0041eff4
    CMP dword ptr [ESP + 0x424],0x2     ; 0041eff7
        ;   Label: LAB_0041eff7
    JNZ 0x0041f873                      ; 0041efff
        ;   XREF to: 0041f873 (CONDITIONAL_JUMP)  ; LAB_0041f873
    MOV EDI,dword ptr [ESP + 0x70]      ; 0041f005
    LEA ESI,[EDI*0x4 + 0x0]             ; 0041f009
    SUB ESI,EDI                         ; 0041f010
    SHL ESI,0x2                         ; 0041f012
    ADD ESI,EDI                         ; 0041f015
    LEA EDX,[EBX + 0xb4]                ; 0041f017
    SHL ESI,0x2                         ; 0041f01d
    LEA EAX,[EDX + ESI*0x1]             ; 0041f020
    LEA ECX,[EAX + 0x18]                ; 0041f023
    FLD float ptr [EAX + 0xc]           ; 0041f026
    FSUB float ptr [ECX]                ; 0041f029
    FSTP float ptr [ESP + 0x204]        ; 0041f02b
    FLD float ptr [EAX + 0x10]          ; 0041f032
    FSUB float ptr [ECX + 0x4]          ; 0041f035
    FSTP float ptr [ESP + 0x208]        ; 0041f038
    FLD float ptr [EAX + 0x14]          ; 0041f03f
    FSUB float ptr [ECX + 0x8]          ; 0041f042
    FSTP float ptr [ESP + 0x20c]        ; 0041f045
    FLD float ptr [ESI + EBX*0x1 + 0xd8] ; 0041f04c
    FLD1                                ; 0041f053
    FSUBRP                              ; 0041f055
    FLD double ptr [0x006164ff]         ; 0041f057 | g_BoxNegativeRestitution
    FXCH                                ; 0041f05d
    FMUL ST1                            ; 0041f05f
    FLD float ptr [ESP + 0x204]         ; 0041f061
    FXCH                                ; 0041f068
    FSTP float ptr [ESP + 0x3f4]        ; 0041f06a
    FMUL float ptr [ESP + 0x3f4]        ; 0041f071
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041f078
    FLD float ptr [ESP + 0x208]         ; 0041f07c
    MOV dword ptr [ESP + 0x3d8],EAX     ; 0041f083
    LEA ECX,[EAX*0x4 + 0x0]             ; 0041f08a
    FMUL float ptr [ESP + 0x3f4]        ; 0041f091
    SUB ECX,EAX                         ; 0041f098
    FLD float ptr [ESP + 0x20c]         ; 0041f09a
    SHL ECX,0x2                         ; 0041f0a1
    FMUL float ptr [ESP + 0x3f4]        ; 0041f0a4
    ADD ECX,EAX                         ; 0041f0ab
    FXCH                                ; 0041f0ad
    FST float ptr [ESP + 0x298]         ; 0041f0af
    FMUL float ptr [ESP + 0x298]        ; 0041f0b6
    SHL ECX,0x2                         ; 0041f0bd
    FXCH ST2                            ; 0041f0c0
    FST float ptr [ESP + 0x294]         ; 0041f0c2
    FMUL float ptr [ESP + 0x294]        ; 0041f0c9
    LEA EAX,[EDX + ECX*0x1]             ; 0041f0d0
    FXCH                                ; 0041f0d3
    FSTP float ptr [ESP + 0x29c]        ; 0041f0d5
    FLD float ptr [EAX + 0xc]           ; 0041f0dc
    FXCH                                ; 0041f0df
    FADDP ST2,ST0                       ; 0041f0e1
    FSUB float ptr [EAX + 0x18]         ; 0041f0e3
    FLD float ptr [ESP + 0x29c]         ; 0041f0e6
    FMUL ST0                            ; 0041f0ed
    FXCH                                ; 0041f0ef
    FSTP float ptr [ESP + 0x1d4]        ; 0041f0f1
    FLD float ptr [EAX + 0x10]          ; 0041f0f8
    FSUB float ptr [EAX + 0x1c]         ; 0041f0fb
    FSTP float ptr [ESP + 0x1d8]        ; 0041f0fe
    FLD float ptr [EAX + 0x14]          ; 0041f105
    FXCH                                ; 0041f108
    FADDP ST2,ST0                       ; 0041f10a
    FSUB float ptr [EAX + 0x20]         ; 0041f10c
    FXCH                                ; 0041f10f
    FSQRT                               ; 0041f111
    FXCH                                ; 0041f113
    FSTP float ptr [ESP + 0x1dc]        ; 0041f115
    FLD float ptr [ECX + EBX*0x1 + 0xd8] ; 0041f11c
    FLD1                                ; 0041f123
    FSUBRP                              ; 0041f125
    FMULP ST2                           ; 0041f127
    FLD float ptr [ESP + 0x1d8]         ; 0041f129
    FXCH ST2                            ; 0041f130
    FSTP float ptr [ESP + 0x3dc]        ; 0041f132
    FXCH                                ; 0041f139
    FMUL float ptr [ESP + 0x3dc]        ; 0041f13b
    FLD float ptr [ESP + 0x1d4]         ; 0041f142
    FMUL float ptr [ESP + 0x3dc]        ; 0041f149
    FXCH                                ; 0041f150
    FST float ptr [ESP + 0x3a0]         ; 0041f152
    FMUL float ptr [ESP + 0x3a0]        ; 0041f159
    FXCH                                ; 0041f160
    FST float ptr [ESP + 0x39c]         ; 0041f162
    FMUL float ptr [ESP + 0x39c]        ; 0041f169
    FLD float ptr [ESP + 0x1dc]         ; 0041f170
    FMUL float ptr [ESP + 0x3dc]        ; 0041f177
    FXCH                                ; 0041f17e
    FADDP ST2,ST0                       ; 0041f180
    FST float ptr [ESP + 0x3a4]         ; 0041f182
    FMUL float ptr [ESP + 0x3a4]        ; 0041f189
    FADDP                               ; 0041f190
    FSQRT                               ; 0041f192
    LEA ECX,[EBX + 0x18]                ; 0041f194
    FXCH                                ; 0041f197
    FCOMPP                              ; 0041f199
    FNSTSW AX                           ; 0041f19b
    SAHF                                ; 0041f19d
    JBE 0x0041fe27                      ; 0041f19e
        ;   XREF to: 0041fe27 (CONDITIONAL_JUMP)  ; LAB_0041fe27
    LEA EAX,[EDI*0x4 + 0x0]             ; 0041f1a4
    FLD float ptr [EBX]                 ; 0041f1ab
    SUB EAX,EDI                         ; 0041f1ad
    FLD float ptr [EBX + 0x4]           ; 0041f1af
    SHL EAX,0x2                         ; 0041f1b2
    FLD float ptr [EBX + 0x8]           ; 0041f1b5
    ADD EAX,EDI                         ; 0041f1b8
    FXCH ST2                            ; 0041f1ba
    FADD float ptr [ESP + 0x294]        ; 0041f1bc
    SHL EAX,0x2                         ; 0041f1c3
    FSTP float ptr [EBX]                ; 0041f1c6
    ADD EDX,EAX                         ; 0041f1c8
    FADD float ptr [ESP + 0x298]        ; 0041f1ca
    ADD EDX,0x28                        ; 0041f1d1
    LEA EAX,[ESP + 0x27c]               ; 0041f1d4
    PUSH EDX                            ; 0041f1db
    FSTP float ptr [EBX + 0x4]          ; 0041f1dc
    PUSH EAX                            ; 0041f1df
    FADD float ptr [ESP + 0x2a4]        ; 0041f1e0
    PUSH ECX                            ; 0041f1e7
        ;   Label: LAB_0041f1e7
    FSTP float ptr [EBX + 0x8]          ; 0041f1e8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041f1eb
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0041f1f0
    LEA EAX,[ESP + 0x114]               ; 0041f1f2
    ADD ESP,0xc                         ; 0041f1f9
    CMP EAX,EDX                         ; 0041f1fc
    JZ 0x0041f21d                       ; 0041f1fe
        ;   XREF to: 0041f21d (CONDITIONAL_JUMP)  ; LAB_0041f21d
    MOV EAX,dword ptr [EDX]             ; 0041f200
    MOV dword ptr [ESP + 0x108],EAX     ; 0041f202
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041f209
    MOV dword ptr [ESP + 0x10c],EAX     ; 0041f20c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041f213
    MOV dword ptr [ESP + 0x110],EAX     ; 0041f216
    LEA EDX,[EBX + 0x4c]                ; 0041f21d
        ;   Label: LAB_0041f21d
    MOV EAX,dword ptr [EDX]             ; 0041f220
    MOV dword ptr [ESP + 0xd8],EAX      ; 0041f222
    LEA EAX,[EDX + 0x4]                 ; 0041f229
    MOV EAX,dword ptr [EAX]             ; 0041f22c
    MOV dword ptr [ESP + 0xdc],EAX      ; 0041f22e
    LEA EAX,[EDX + 0x8]                 ; 0041f235
    MOV EAX,dword ptr [EAX]             ; 0041f238
    MOV dword ptr [ESP + 0xe0],EAX      ; 0041f23a
    FLD float ptr [ESP + 0x10c]         ; 0041f241
    FMUL float ptr [EDX + 0x4]          ; 0041f248
    FLD float ptr [ESP + 0x108]         ; 0041f24b
    FMUL float ptr [EDX]                ; 0041f252
    FADDP                               ; 0041f254
    FLD float ptr [ESP + 0x110]         ; 0041f256
    FMUL float ptr [EDX + 0x8]          ; 0041f25d
    FADDP                               ; 0041f260
    FMUL float ptr [0x006164ef]         ; 0041f262 | g_BoxTorqueMultiplier
    FLD float ptr [ESP + 0x108]         ; 0041f268
    FXCH                                ; 0041f26f
    FSTP float ptr [ESP + 0x3e8]        ; 0041f271
    FMUL float ptr [ESP + 0x3e8]        ; 0041f278
    FLD float ptr [ESP + 0x10c]         ; 0041f27f
    FMUL float ptr [ESP + 0x3e8]        ; 0041f286
    FLD float ptr [ESP + 0x110]         ; 0041f28d
    FMUL float ptr [ESP + 0x3e8]        ; 0041f294
    LEA EAX,[ESP + 0x36c]               ; 0041f29b
    FXCH ST2                            ; 0041f2a2
    FSTP float ptr [ESP + 0x168]        ; 0041f2a4
    FSTP float ptr [ESP + 0x16c]        ; 0041f2ab
    FSTP float ptr [ESP + 0x170]        ; 0041f2b2
    FLD float ptr [ESP + 0x168]         ; 0041f2b9
    FSUB float ptr [EDX]                ; 0041f2c0
    FLD float ptr [ESP + 0x16c]         ; 0041f2c2
    FXCH                                ; 0041f2c9
    FSTP float ptr [ESP + 0x36c]        ; 0041f2cb
    FSUB float ptr [EDX + 0x4]          ; 0041f2d2
    FLD float ptr [ESP + 0x170]         ; 0041f2d5
    FXCH                                ; 0041f2dc
    FSTP float ptr [ESP + 0x370]        ; 0041f2de
    FSUB float ptr [EDX + 0x8]          ; 0041f2e5
    LEA EDX,[ESP + 0x270]               ; 0041f2e8
    FSTP float ptr [ESP + 0x374]        ; 0041f2ef
    CMP EDX,EAX                         ; 0041f2f6
    JZ 0x0041f324                       ; 0041f2f8
        ;   XREF to: 0041f324 (CONDITIONAL_JUMP)  ; LAB_0041f324
    MOV EAX,dword ptr [ESP + 0x36c]     ; 0041f2fa
    MOV dword ptr [ESP + 0x270],EAX     ; 0041f301
    MOV EAX,dword ptr [ESP + 0x370]     ; 0041f308
    MOV dword ptr [ESP + 0x274],EAX     ; 0041f30f
    MOV EAX,dword ptr [ESP + 0x374]     ; 0041f316
    MOV dword ptr [ESP + 0x278],EAX     ; 0041f31d
    FLD float ptr [0x006164f3]          ; 0041f324 | g_BoxAngularDampingNegative
        ;   Label: LAB_0041f324
    FLD float ptr [ESP + 0x270]         ; 0041f32a
    FMUL ST1                            ; 0041f331
    FLD float ptr [ESP + 0x274]         ; 0041f333
    FMUL ST2                            ; 0041f33a
    FLD float ptr [ESP + 0x278]         ; 0041f33c
    FMULP ST3                           ; 0041f343
    FXCH                                ; 0041f345
    FLD float ptr [0x00616507]          ; 0041f347 | g_BoxFrictionThreshold
    FXCH                                ; 0041f34d
    FMUL ST1                            ; 0041f34f
    FXCH ST2                            ; 0041f351
    FMUL ST1                            ; 0041f353
    LEA EDX,[EBX + 0x4c]                ; 0041f355
    FXCH ST3                            ; 0041f358
    FMULP                               ; 0041f35a
    LEA EAX,[EBX + 0x94]                ; 0041f35c
    FXCH                                ; 0041f362
    FSTP float ptr [ESP + 0x270]        ; 0041f364
    FXCH                                ; 0041f36b
    FSTP float ptr [ESP + 0x274]        ; 0041f36d
    FSTP float ptr [ESP + 0x278]        ; 0041f374
    FLD float ptr [ESP + 0x270]         ; 0041f37b
    FSUB float ptr [EDX]                ; 0041f382
    FLD float ptr [ESP + 0x274]         ; 0041f384
    FXCH                                ; 0041f38b
    FSTP float ptr [ESP + 0x1e0]        ; 0041f38d
    FSUB float ptr [EDX + 0x4]          ; 0041f394
    FLD float ptr [ESP + 0x278]         ; 0041f397
    FXCH                                ; 0041f39e
    FSTP float ptr [ESP + 0x1e4]        ; 0041f3a0
    FSUB float ptr [EDX + 0x8]          ; 0041f3a7
    FLD float ptr [ESP + 0x1e0]         ; 0041f3aa
    FXCH                                ; 0041f3b1
    FSTP float ptr [ESP + 0x1e8]        ; 0041f3b3
    FMUL float ptr [EAX]                ; 0041f3ba
    FLD float ptr [ESP + 0x1e4]         ; 0041f3bc
    FXCH                                ; 0041f3c3
    FSTP float ptr [ESP + 0x378]        ; 0041f3c5
    FMUL float ptr [EAX]                ; 0041f3cc
    FLD1                                ; 0041f3ce
    FLD float ptr [ESP + 0x1e8]         ; 0041f3d0
    FLD float ptr [ESP + 0x378]         ; 0041f3d7
    FXCH ST3                            ; 0041f3de
    FSTP float ptr [ESP + 0x37c]        ; 0041f3e0
    FMUL float ptr [EAX]                ; 0041f3e7
    FXCH                                ; 0041f3e9
    FDIV float ptr [EBP + 0x18]         ; 0041f3eb
    FXCH ST2                            ; 0041f3ee
    FMUL ST2                            ; 0041f3f0
    FLD float ptr [ESP + 0x37c]         ; 0041f3f2
    FMUL ST3                            ; 0041f3f9
    FXCH ST2                            ; 0041f3fb
    FST float ptr [ESP + 0x380]         ; 0041f3fd
    FMULP ST3                           ; 0041f404
    LEA EAX,[EBX + 0x64]                ; 0041f406
    FSTP float ptr [ESP + 0x30c]        ; 0041f409
    FSTP float ptr [ESP + 0x310]        ; 0041f410
    FSTP float ptr [ESP + 0x314]        ; 0041f417
    FLD float ptr [EAX]                 ; 0041f41e
    FADD float ptr [ESP + 0x30c]        ; 0041f420
    FLD float ptr [EAX + 0x4]           ; 0041f427
    FXCH                                ; 0041f42a
    FSTP float ptr [EAX]                ; 0041f42c
    FADD float ptr [ESP + 0x310]        ; 0041f42e
    FLD float ptr [EAX + 0x8]           ; 0041f435
    FXCH                                ; 0041f438
    FSTP float ptr [EAX + 0x4]          ; 0041f43a
    FADD float ptr [ESP + 0x314]        ; 0041f43d
    FSTP float ptr [EAX + 0x8]          ; 0041f444
    LEA EAX,[EBX + 0x70]                ; 0041f447
    MOV dword ptr [EAX + 0x8],0x0       ; 0041f44a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041f451
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f454
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041f457
    MOV dword ptr [EAX],EDX             ; 0041f45a
    LEA EAX,[EDI*0x4 + 0x0]             ; 0041f45c
    SUB EAX,EDI                         ; 0041f463
    SHL EAX,0x2                         ; 0041f465
    ADD EAX,EDI                         ; 0041f468
    LEA ECX,[EBX + 0xb4]                ; 0041f46a
    SHL EAX,0x2                         ; 0041f470
    LEA ESI,[ECX + EAX*0x1]             ; 0041f473
    FLD float ptr [ESI + 0x4]           ; 0041f476
    FMUL float ptr [ESP + 0x314]        ; 0041f479
    FLD float ptr [ESI + 0x8]           ; 0041f480
    FMUL float ptr [ESP + 0x310]        ; 0041f483
    FSUBP                               ; 0041f48a
    FSTP float ptr [ESP + 0x240]        ; 0041f48c
    FLD float ptr [ESI + 0x8]           ; 0041f493
    FMUL float ptr [ESP + 0x30c]        ; 0041f496
    FLD float ptr [ESI]                 ; 0041f49d
    FMUL float ptr [ESP + 0x314]        ; 0041f49f
    FLD float ptr [ESP + 0x240]         ; 0041f4a6
    FXCH                                ; 0041f4ad
    FSUBP ST2,ST0                       ; 0041f4af
    FLD float ptr [0x006164fb]          ; 0041f4b1 | g_BoxLinearDampingFactor
    FXCH                                ; 0041f4b7
    FMUL ST1                            ; 0041f4b9
    FXCH ST2                            ; 0041f4bb
    FSTP float ptr [ESP + 0x244]        ; 0041f4bd
    FLD float ptr [ESI]                 ; 0041f4c4
    FMUL float ptr [ESP + 0x310]        ; 0041f4c6
    MOV EDI,dword ptr [ESP + 0x3d8]     ; 0041f4cd
    FLD float ptr [ESP + 0x244]         ; 0041f4d4
    FMUL ST2                            ; 0041f4db
    LEA EDX,[EDI*0x4 + 0x0]             ; 0041f4dd
    FLD float ptr [ESI + 0x4]           ; 0041f4e4
    FMUL float ptr [ESP + 0x30c]        ; 0041f4e7
    SUB EDX,EDI                         ; 0041f4ee
    FSUBP ST2,ST0                       ; 0041f4f0
    SHL EDX,0x2                         ; 0041f4f2
    FXCH                                ; 0041f4f5
    FST float ptr [ESP + 0x248]         ; 0041f4f7
    FMULP ST2                           ; 0041f4fe
    ADD EDX,EDI                         ; 0041f500
    LEA EAX,[EBX + 0x88]                ; 0041f502
    SHL EDX,0x2                         ; 0041f508
    FXCH ST2                            ; 0041f50b
    FSTP float ptr [ESP + 0x9c]         ; 0041f50d
    FXCH                                ; 0041f514
    FSTP float ptr [ESP + 0xa0]         ; 0041f516
    FSTP float ptr [ESP + 0xa4]         ; 0041f51d
    FLD float ptr [EAX]                 ; 0041f524
    FADD float ptr [ESP + 0x9c]         ; 0041f526
    FLD float ptr [EAX + 0x4]           ; 0041f52d
    FXCH                                ; 0041f530
    FSTP float ptr [EAX]                ; 0041f532
    FADD float ptr [ESP + 0xa0]         ; 0041f534
    FLD float ptr [EAX + 0x8]           ; 0041f53b
    FXCH                                ; 0041f53e
    FSTP float ptr [EAX + 0x4]          ; 0041f540
    FADD float ptr [ESP + 0xa4]         ; 0041f543
    ADD EDX,ECX                         ; 0041f54a
    FSTP float ptr [EAX + 0x8]          ; 0041f54c
    FLD float ptr [EDX + 0x4]           ; 0041f54f
    FMUL float ptr [ESP + 0x314]        ; 0041f552
    FLD float ptr [EDX + 0x8]           ; 0041f559
    FMUL float ptr [ESP + 0x310]        ; 0041f55c
    FSUBP                               ; 0041f563
    FSTP float ptr [ESP + 0xe4]         ; 0041f565
    FLD float ptr [EDX + 0x8]           ; 0041f56c
    FMUL float ptr [ESP + 0x30c]        ; 0041f56f
    FLD float ptr [EDX]                 ; 0041f576
    FMUL float ptr [ESP + 0x314]        ; 0041f578
    FSUBP                               ; 0041f57f
    FSTP float ptr [ESP + 0xe8]         ; 0041f581
    FLD float ptr [EDX]                 ; 0041f588
    FMUL float ptr [ESP + 0x310]        ; 0041f58a
    FLD float ptr [EDX + 0x4]           ; 0041f591
    FMUL float ptr [ESP + 0x30c]        ; 0041f594
    FSUBP                               ; 0041f59b
    FSTP float ptr [ESP + 0xec]         ; 0041f59d
    FLD float ptr [0x006164fb]          ; 0041f5a4 | g_BoxLinearDampingFactor
    FLD float ptr [ESP + 0xe4]          ; 0041f5aa
    FMUL ST1                            ; 0041f5b1
    FLD float ptr [ESP + 0xe8]          ; 0041f5b3
    FMUL ST2                            ; 0041f5ba
    FLD float ptr [ESP + 0xec]          ; 0041f5bc
    FMULP ST3                           ; 0041f5c3
    FXCH                                ; 0041f5c5
    FSTP float ptr [ESP + 0x90]         ; 0041f5c7
    FSTP float ptr [ESP + 0x94]         ; 0041f5ce
    FSTP float ptr [ESP + 0x98]         ; 0041f5d5
    FLD float ptr [EAX]                 ; 0041f5dc
    FADD float ptr [ESP + 0x90]         ; 0041f5de
    FLD float ptr [EAX + 0x4]           ; 0041f5e5
    FXCH                                ; 0041f5e8
    FSTP float ptr [EAX]                ; 0041f5ea
    FADD float ptr [ESP + 0x94]         ; 0041f5ec
    FLD float ptr [EAX + 0x8]           ; 0041f5f3
    FXCH                                ; 0041f5f6
    FSTP float ptr [EAX + 0x4]          ; 0041f5f8
    FADD float ptr [ESP + 0x98]         ; 0041f5fb
    FSTP float ptr [EAX + 0x8]          ; 0041f602
    MOV EAX,dword ptr [ESI]             ; 0041f605
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0041f607
    LEA EAX,[ESI + 0x4]                 ; 0041f60e
    MOV EAX,dword ptr [EAX]             ; 0041f611
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0041f613
    LEA EAX,[ESI + 0x8]                 ; 0041f61a
    MOV EAX,dword ptr [EAX]             ; 0041f61d
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0041f61f
    MOV EAX,dword ptr [EDX]             ; 0041f626
    MOV dword ptr [ESP + 0x354],EAX     ; 0041f628
    LEA EAX,[EDX + 0x4]                 ; 0041f62f
    MOV EAX,dword ptr [EAX]             ; 0041f632
    MOV dword ptr [ESP + 0x358],EAX     ; 0041f634
    LEA EAX,[EDX + 0x8]                 ; 0041f63b
    MOV EAX,dword ptr [EAX]             ; 0041f63e
    XOR EDI,EDI                         ; 0041f640
    MOV dword ptr [ESP + 0x35c],EAX     ; 0041f642
    MOV dword ptr [ESP + 0x150],EDI     ; 0041f649
    MOV dword ptr [ESP + 0x154],EDI     ; 0041f650
    MOV dword ptr [ESP + 0x158],EDI     ; 0041f657
    FLD float ptr [EBX + 0x94]          ; 0041f65e
    LEA EAX,[ESP + 0x150]               ; 0041f664
    FMUL double ptr [0x006164d7]        ; 0041f66b | g_BoxGravityAcceleration
    PUSH EAX                            ; 0041f671
    LEA EAX,[ESP + 0x178]               ; 0041f672
    PUSH EAX                            ; 0041f679
    LEA EAX,[EBX + 0x18]                ; 0041f67a
    PUSH EAX                            ; 0041f67d
    FSTP float ptr [ESP + 0x160]        ; 0041f67e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041f685
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0041f68a
    LEA EAX,[ESP + 0x15c]               ; 0041f68c
    ADD ESP,0xc                         ; 0041f693
    CMP EAX,EDX                         ; 0041f696
    JZ 0x0041f6b7                       ; 0041f698
        ;   XREF to: 0041f6b7 (CONDITIONAL_JUMP)  ; LAB_0041f6b7
    MOV EAX,dword ptr [EDX]             ; 0041f69a
    MOV dword ptr [ESP + 0x150],EAX     ; 0041f69c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041f6a3
    MOV dword ptr [ESP + 0x154],EAX     ; 0041f6a6
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041f6ad
    MOV dword ptr [ESP + 0x158],EAX     ; 0041f6b0
    FLD float ptr [0x006164f7]          ; 0041f6b7 | g_BoxAngularDampingScale
        ;   Label: LAB_0041f6b7
    FLD float ptr [ESP + 0x150]         ; 0041f6bd
    FMUL ST1                            ; 0041f6c4
    FLD float ptr [ESP + 0x154]         ; 0041f6c6
    FMUL ST2                            ; 0041f6cd
    FLD float ptr [ESP + 0x158]         ; 0041f6cf
    FMUL ST3                            ; 0041f6d6
    FLD float ptr [ESP + 0x1b4]         ; 0041f6d8
    FXCH                                ; 0041f6df
    FSTP float ptr [ESP + 0x3b0]        ; 0041f6e1
    FMUL float ptr [ESP + 0x3b0]        ; 0041f6e8
    FLD float ptr [ESP + 0x1b8]         ; 0041f6ef
    FXCH ST3                            ; 0041f6f6
    FSTP float ptr [ESP + 0x3a8]        ; 0041f6f8
    FXCH ST2                            ; 0041f6ff
    FMUL float ptr [ESP + 0x3a8]        ; 0041f701
    FLD float ptr [ESP + 0x1b0]         ; 0041f708
    FXCH ST2                            ; 0041f70f
    FSTP float ptr [ESP + 0x3ac]        ; 0041f711
    FXCH                                ; 0041f718
    FMUL float ptr [ESP + 0x3ac]        ; 0041f71a
    FLD float ptr [ESP + 0x1b8]         ; 0041f721
    FMUL float ptr [ESP + 0x3ac]        ; 0041f728
    FLD float ptr [ESP + 0x1b0]         ; 0041f72f
    FMUL float ptr [ESP + 0x3b0]        ; 0041f736
    FLD float ptr [ESP + 0x1b4]         ; 0041f73d
    FMUL float ptr [ESP + 0x3a8]        ; 0041f744
    LEA EAX,[EBX + 0x88]                ; 0041f74b
    FXCH ST2                            ; 0041f751
    FSUBP ST5,ST0                       ; 0041f753
    FSUBP ST3,ST0                       ; 0041f755
    FSUBP                               ; 0041f757
    FXCH ST2                            ; 0041f759
    FSTP float ptr [ESP + 0x318]        ; 0041f75b
    FSTP float ptr [ESP + 0x31c]        ; 0041f762
    FSTP float ptr [ESP + 0x320]        ; 0041f769
    FLD float ptr [EAX]                 ; 0041f770
    FADD float ptr [ESP + 0x318]        ; 0041f772
    FLD float ptr [EAX + 0x4]           ; 0041f779
    FXCH                                ; 0041f77c
    FSTP float ptr [EAX]                ; 0041f77e
    FADD float ptr [ESP + 0x31c]        ; 0041f780
    FLD float ptr [EAX + 0x8]           ; 0041f787
    FXCH                                ; 0041f78a
    FSTP float ptr [EAX + 0x4]          ; 0041f78c
    FADD float ptr [ESP + 0x320]        ; 0041f78f
    FSTP float ptr [EAX + 0x8]          ; 0041f796
    FLD float ptr [ESP + 0x150]         ; 0041f799
    FMUL ST1                            ; 0041f7a0
    FLD float ptr [ESP + 0x154]         ; 0041f7a2
    FMUL ST2                            ; 0041f7a9
    FLD float ptr [ESP + 0x158]         ; 0041f7ab
    FMULP ST3                           ; 0041f7b2
    FLD float ptr [ESP + 0x358]         ; 0041f7b4
    FXCH ST3                            ; 0041f7bb
    FSTP float ptr [ESP + 0x1f4]        ; 0041f7bd
    FXCH ST2                            ; 0041f7c4
    FMUL float ptr [ESP + 0x1f4]        ; 0041f7c6
    FLD float ptr [ESP + 0x35c]         ; 0041f7cd
    FXCH ST2                            ; 0041f7d4
    FSTP float ptr [ESP + 0x1ec]        ; 0041f7d6
    FXCH                                ; 0041f7dd
    FMUL float ptr [ESP + 0x1ec]        ; 0041f7df
    FLD float ptr [ESP + 0x354]         ; 0041f7e6
    FXCH ST3                            ; 0041f7ed
    FSTP float ptr [ESP + 0x1f0]        ; 0041f7ef
    FXCH ST2                            ; 0041f7f6
    FMUL float ptr [ESP + 0x1f0]        ; 0041f7f8
    FLD float ptr [ESP + 0x35c]         ; 0041f7ff
    FMUL float ptr [ESP + 0x1f0]        ; 0041f806
    FLD float ptr [ESP + 0x354]         ; 0041f80d
    FMUL float ptr [ESP + 0x1f4]        ; 0041f814
    FLD float ptr [ESP + 0x358]         ; 0041f81b
    FMUL float ptr [ESP + 0x1ec]        ; 0041f822
    FXCH ST2                            ; 0041f829
    FSUBP ST4,ST0                       ; 0041f82b
    FSUBP ST4,ST0                       ; 0041f82d
    FSUBP                               ; 0041f82f
    FXCH                                ; 0041f831
    FSTP float ptr [ESP + 0x21c]        ; 0041f833
    FXCH                                ; 0041f83a
    FSTP float ptr [ESP + 0x220]        ; 0041f83c
    FSTP float ptr [ESP + 0x224]        ; 0041f843
    FLD float ptr [EAX]                 ; 0041f84a
    FADD float ptr [ESP + 0x21c]        ; 0041f84c
    FLD float ptr [EAX + 0x4]           ; 0041f853
    FXCH                                ; 0041f856
    FSTP float ptr [EAX]                ; 0041f858
    FADD float ptr [ESP + 0x220]        ; 0041f85a
    FLD float ptr [EAX + 0x8]           ; 0041f861
    FXCH                                ; 0041f864
    FSTP float ptr [EAX + 0x4]          ; 0041f866
    FADD float ptr [ESP + 0x224]        ; 0041f869
    FSTP float ptr [EAX + 0x8]          ; 0041f870
    MOV ECX,dword ptr [ESP + 0x424]     ; 0041f873
        ;   Label: LAB_0041f873
    CMP ECX,0x3                         ; 0041f87a
    JL 0x0041fc90                       ; 0041f87d
        ;   XREF to: 0041fc90 (CONDITIONAL_JUMP)  ; LAB_0041fc90
    LEA EAX,[EBX + 0xb4]                ; 0041f883
    XOR ESI,ESI                         ; 0041f889
    XOR EDI,EDI                         ; 0041f88b
    MOV dword ptr [ESP + 0x404],ESI     ; 0041f88d
    MOV dword ptr [ESP + 0x408],EAX     ; 0041f894
    LEA EAX,[ECX*0x4 + 0x0]             ; 0041f89b
    MOV dword ptr [ESP + 0x410],ESI     ; 0041f8a2
    MOV dword ptr [ESP + 0x40c],EAX     ; 0041f8a9
    TEST EAX,EAX                        ; 0041f8b0
    JLE 0x0041f9ef                      ; 0041f8b2
        ;   XREF to: 0041f9ef (CONDITIONAL_JUMP)  ; LAB_0041f9ef
    MOV ECX,dword ptr [ESP + 0x40c]     ; 0041f8b8
    MOV EDX,dword ptr [ESP + EDI*0x1 + 0x70] ; 0041f8bf
        ;   Label: LAB_0041f8bf
    IMUL EAX,EDX,0x34                   ; 0041f8c3
    MOV ESI,dword ptr [ESP + 0x408]     ; 0041f8c6
    ADD ESI,EAX                         ; 0041f8cd
    MOV dword ptr [ESP + 0x428],EAX     ; 0041f8cf
    LEA EAX,[ESI + 0xc]                 ; 0041f8d6
    FLD float ptr [EAX]                 ; 0041f8d9
    FSUB float ptr [ESI + 0x18]         ; 0041f8db
    FSTP float ptr [ESP + 0xa8]         ; 0041f8de
    FLD float ptr [EAX + 0x4]           ; 0041f8e5
    FSUB float ptr [ESI + 0x1c]         ; 0041f8e8
    FSTP float ptr [ESP + 0xac]         ; 0041f8eb
    FLD float ptr [EAX + 0x8]           ; 0041f8f2
    FSUB float ptr [ESI + 0x20]         ; 0041f8f5
    MOV EAX,dword ptr [ESP + 0x428]     ; 0041f8f8
    FSTP float ptr [ESP + 0xb0]         ; 0041f8ff
    FLD float ptr [EBX + EAX*0x1 + 0xd8] ; 0041f906
    FLD1                                ; 0041f90d
    FSUBRP                              ; 0041f90f
    FMUL double ptr [0x006164ff]        ; 0041f911 | g_BoxNegativeRestitution
    FLD float ptr [ESP + 0xac]          ; 0041f917
    FXCH                                ; 0041f91e
    FSTP float ptr [ESP + 0x41c]        ; 0041f920
    FMUL float ptr [ESP + 0x41c]        ; 0041f927
    FLD float ptr [ESP + 0xa8]          ; 0041f92e
    FMUL float ptr [ESP + 0x41c]        ; 0041f935
    FXCH                                ; 0041f93c
    FST float ptr [ESP + 0x2ec]         ; 0041f93e
    FMUL float ptr [ESP + 0x2ec]        ; 0041f945
    FXCH                                ; 0041f94c
    FST float ptr [ESP + 0x2e8]         ; 0041f94e
    FMUL float ptr [ESP + 0x2e8]        ; 0041f955
    FLD float ptr [ESP + 0xb0]          ; 0041f95c
    FMUL float ptr [ESP + 0x41c]        ; 0041f963
    FXCH                                ; 0041f96a
    FADDP ST2,ST0                       ; 0041f96c
    FST float ptr [ESP + 0x2f0]         ; 0041f96e
    FMUL float ptr [ESP + 0x2f0]        ; 0041f975
    FADDP                               ; 0041f97c
    FSQRT                               ; 0041f97e
    FST float ptr [ESP + 0x414]         ; 0041f980
    FCOMP float ptr [ESP + 0x410]       ; 0041f987
    FNSTSW AX                           ; 0041f98e
    SAHF                                ; 0041f990
    JBE 0x0041f9e4                      ; 0041f991
        ;   XREF to: 0041f9e4 (CONDITIONAL_JUMP)  ; LAB_0041f9e4
    MOV EAX,dword ptr [ESP + 0x414]     ; 0041f993
    MOV dword ptr [ESP + 0x404],EDX     ; 0041f99a
    LEA EDX,[ESP + 0xc0]                ; 0041f9a1
    MOV dword ptr [ESP + 0x410],EAX     ; 0041f9a8
    LEA EAX,[ESP + 0x2e8]               ; 0041f9af
    CMP EDX,EAX                         ; 0041f9b6
    JZ 0x0041f9e4                       ; 0041f9b8
        ;   XREF to: 0041f9e4 (CONDITIONAL_JUMP)  ; LAB_0041f9e4
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0041f9ba
    MOV dword ptr [ESP + 0xc0],EAX      ; 0041f9c1
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0041f9c8
    MOV dword ptr [ESP + 0xc4],EAX      ; 0041f9cf
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 0041f9d6
    MOV dword ptr [ESP + 0xc8],EAX      ; 0041f9dd
    ADD EDI,0x4                         ; 0041f9e4
        ;   Label: LAB_0041f9e4
    CMP EDI,ECX                         ; 0041f9e7
    JL 0x0041f8bf                       ; 0041f9e9
        ;   XREF to: 0041f8bf (CONDITIONAL_JUMP)  ; LAB_0041f8bf
    FLD float ptr [EBX]                 ; 0041f9ef
        ;   Label: LAB_0041f9ef
    FADD float ptr [ESP + 0xc0]         ; 0041f9f1
    FLD float ptr [EBX + 0x4]           ; 0041f9f8
    FXCH                                ; 0041f9fb
    FSTP float ptr [EBX]                ; 0041f9fd
    FADD float ptr [ESP + 0xc4]         ; 0041f9ff
    FLD float ptr [EBX + 0x8]           ; 0041fa06
    FXCH                                ; 0041fa09
    FSTP float ptr [EBX + 0x4]          ; 0041fa0b
    FADD float ptr [ESP + 0xc8]         ; 0041fa0e
    LEA ESI,[EBX + 0x4c]                ; 0041fa15
    FSTP float ptr [EBX + 0x8]          ; 0041fa18
    MOV EAX,dword ptr [ESI]             ; 0041fa1b
    MOV dword ptr [ESP + 0x18c],EAX     ; 0041fa1d
    LEA EAX,[ESI + 0x4]                 ; 0041fa24
    MOV EAX,dword ptr [EAX]             ; 0041fa27
    MOV dword ptr [ESP + 0x190],EAX     ; 0041fa29
    LEA EAX,[ESI + 0x8]                 ; 0041fa30
    MOV EAX,dword ptr [EAX]             ; 0041fa33
    MOV EDX,dword ptr [ESP + 0x404]     ; 0041fa35
    MOV dword ptr [ESP + 0x194],EAX     ; 0041fa3c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041fa43
    SUB EAX,EDX                         ; 0041fa4a
    SHL EAX,0x2                         ; 0041fa4c
    ADD EAX,EDX                         ; 0041fa4f
    MOV EDI,dword ptr [ESP + 0x408]     ; 0041fa51
    SHL EAX,0x2                         ; 0041fa58
    ADD EAX,EDI                         ; 0041fa5b
    ADD EAX,0x28                        ; 0041fa5d
    PUSH EAX                            ; 0041fa60
    LEA EAX,[ESP + 0x1cc]               ; 0041fa61
    PUSH EAX                            ; 0041fa68
    LEA EAX,[EBX + 0x18]                ; 0041fa69
    PUSH EAX                            ; 0041fa6c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041fa6d
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0041fa72
    FLD float ptr [ESP + 0x1cc]         ; 0041fa75
    FMUL float ptr [ESI + 0x4]          ; 0041fa7c
    FLD float ptr [ESP + 0x1c8]         ; 0041fa7f
    FMUL float ptr [ESI]                ; 0041fa86
    FADDP                               ; 0041fa88
    FLD float ptr [ESP + 0x1d0]         ; 0041fa8a
    FMUL float ptr [ESI + 0x8]          ; 0041fa91
    FADDP                               ; 0041fa94
    FMUL float ptr [0x006164ef]         ; 0041fa96 | g_BoxTorqueMultiplier
    FLD float ptr [ESP + 0x1c8]         ; 0041fa9c
    FXCH                                ; 0041faa3
    FSTP float ptr [ESP + 0x3ec]        ; 0041faa5
    FMUL float ptr [ESP + 0x3ec]        ; 0041faac
    FLD float ptr [ESP + 0x1cc]         ; 0041fab3
    FMUL float ptr [ESP + 0x3ec]        ; 0041faba
    FLD float ptr [ESP + 0x1d0]         ; 0041fac1
    FMUL float ptr [ESP + 0x3ec]        ; 0041fac8
    LEA EAX,[ESP + 0x228]               ; 0041facf
    FXCH ST2                            ; 0041fad6
    FSTP float ptr [ESP + 0x210]        ; 0041fad8
    FSTP float ptr [ESP + 0x214]        ; 0041fadf
    FSTP float ptr [ESP + 0x218]        ; 0041fae6
    FLD float ptr [ESP + 0x210]         ; 0041faed
    FSUB float ptr [ESI]                ; 0041faf4
    FLD float ptr [ESP + 0x214]         ; 0041faf6
    FXCH                                ; 0041fafd
    FSTP float ptr [ESP + 0x228]        ; 0041faff
    FSUB float ptr [ESI + 0x4]          ; 0041fb06
    FLD float ptr [ESP + 0x218]         ; 0041fb09
    FXCH                                ; 0041fb10
    FSTP float ptr [ESP + 0x22c]        ; 0041fb12
    FSUB float ptr [ESI + 0x8]          ; 0041fb19
    LEA EDX,[ESP + 0x198]               ; 0041fb1c
    FSTP float ptr [ESP + 0x230]        ; 0041fb23
    CMP EDX,EAX                         ; 0041fb2a
    JZ 0x0041fb58                       ; 0041fb2c
        ;   XREF to: 0041fb58 (CONDITIONAL_JUMP)  ; LAB_0041fb58
    MOV EAX,dword ptr [ESP + 0x228]     ; 0041fb2e
    MOV dword ptr [ESP + 0x198],EAX     ; 0041fb35
    MOV EAX,dword ptr [ESP + 0x22c]     ; 0041fb3c
    MOV dword ptr [ESP + 0x19c],EAX     ; 0041fb43
    MOV EAX,dword ptr [ESP + 0x230]     ; 0041fb4a
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0041fb51
    FLD float ptr [0x006164f3]          ; 0041fb58 | g_BoxAngularDampingNegative
        ;   Label: LAB_0041fb58
    FLD float ptr [ESP + 0x198]         ; 0041fb5e
    FMUL ST1                            ; 0041fb65
    FLD float ptr [ESP + 0x19c]         ; 0041fb67
    FMUL ST2                            ; 0041fb6e
    FLD float ptr [ESP + 0x1a0]         ; 0041fb70
    FMULP ST3                           ; 0041fb77
    FXCH                                ; 0041fb79
    FLD float ptr [0x0061650b]          ; 0041fb7b | g_BoxCollisionDamping
    FXCH                                ; 0041fb81
    FMUL ST1                            ; 0041fb83
    FXCH ST2                            ; 0041fb85
    FMUL ST1                            ; 0041fb87
    LEA EDX,[EBX + 0x4c]                ; 0041fb89
    FXCH ST3                            ; 0041fb8c
    FMULP                               ; 0041fb8e
    LEA EAX,[EBX + 0x94]                ; 0041fb90
    FXCH                                ; 0041fb96
    FSTP float ptr [ESP + 0x198]        ; 0041fb98
    FXCH                                ; 0041fb9f
    FSTP float ptr [ESP + 0x19c]        ; 0041fba1
    FSTP float ptr [ESP + 0x1a0]        ; 0041fba8
    FLD float ptr [ESP + 0x198]         ; 0041fbaf
    FSUB float ptr [EDX]                ; 0041fbb6
    FLD float ptr [ESP + 0x19c]         ; 0041fbb8
    FXCH                                ; 0041fbbf
    FSTP float ptr [ESP + 0x288]        ; 0041fbc1
    FSUB float ptr [EDX + 0x4]          ; 0041fbc8
    FLD float ptr [ESP + 0x1a0]         ; 0041fbcb
    FXCH                                ; 0041fbd2
    FSTP float ptr [ESP + 0x28c]        ; 0041fbd4
    FSUB float ptr [EDX + 0x8]          ; 0041fbdb
    FLD float ptr [ESP + 0x288]         ; 0041fbde
    FXCH                                ; 0041fbe5
    FSTP float ptr [ESP + 0x290]        ; 0041fbe7
    FMUL float ptr [EAX]                ; 0041fbee
    FLD float ptr [ESP + 0x28c]         ; 0041fbf0
    FXCH                                ; 0041fbf7
    FSTP float ptr [ESP + 0x2dc]        ; 0041fbf9
    FMUL float ptr [EAX]                ; 0041fc00
    FLD1                                ; 0041fc02
    FLD float ptr [ESP + 0x290]         ; 0041fc04
    FLD float ptr [ESP + 0x2dc]         ; 0041fc0b
    FXCH ST3                            ; 0041fc12
    FSTP float ptr [ESP + 0x2e0]        ; 0041fc14
    FMUL float ptr [EAX]                ; 0041fc1b
    FXCH                                ; 0041fc1d
    FDIV float ptr [EBP + 0x18]         ; 0041fc1f
    FXCH ST2                            ; 0041fc22
    FMUL ST2                            ; 0041fc24
    FLD float ptr [ESP + 0x2e0]         ; 0041fc26
    FMUL ST3                            ; 0041fc2d
    FXCH ST2                            ; 0041fc2f
    FST float ptr [ESP + 0x2e4]         ; 0041fc31
    FMULP ST3                           ; 0041fc38
    LEA EAX,[EBX + 0x64]                ; 0041fc3a
    FSTP float ptr [ESP + 0x12c]        ; 0041fc3d
    FSTP float ptr [ESP + 0x130]        ; 0041fc44
    FSTP float ptr [ESP + 0x134]        ; 0041fc4b
    FLD float ptr [EAX]                 ; 0041fc52
    FADD float ptr [ESP + 0x12c]        ; 0041fc54
    FLD float ptr [EAX + 0x4]           ; 0041fc5b
    FXCH                                ; 0041fc5e
    FSTP float ptr [EAX]                ; 0041fc60
    FADD float ptr [ESP + 0x130]        ; 0041fc62
    FLD float ptr [EAX + 0x8]           ; 0041fc69
    FXCH                                ; 0041fc6c
    FSTP float ptr [EAX + 0x4]          ; 0041fc6e
    FADD float ptr [ESP + 0x134]        ; 0041fc71
    FSTP float ptr [EAX + 0x8]          ; 0041fc78
    LEA EAX,[EBX + 0x70]                ; 0041fc7b
    MOV dword ptr [EAX + 0x8],0x0       ; 0041fc7e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041fc85
    MOV dword ptr [EAX + 0x4],EDX       ; 0041fc88
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041fc8b
    MOV dword ptr [EAX],EDX             ; 0041fc8e
    CMP dword ptr [ESP + 0x424],0x0     ; 0041fc90
        ;   Label: LAB_0041fc90
    JLE 0x0041fd0d                      ; 0041fc98
        ;   XREF to: 0041fd0d (CONDITIONAL_JUMP)  ; LAB_0041fd0d
    LEA EAX,[EBX + 0x4c]                ; 0041fc9e
    FLD float ptr [EAX + 0x4]           ; 0041fca1
    FMUL ST0                            ; 0041fca4
    FLD float ptr [EAX]                 ; 0041fca6
    FMUL ST0                            ; 0041fca8
    FADDP                               ; 0041fcaa
    FLD float ptr [EAX + 0x8]           ; 0041fcac
    FMUL ST0                            ; 0041fcaf
    FADDP                               ; 0041fcb1
    FSQRT                               ; 0041fcb3
    FLD1                                ; 0041fcb5
    FCOMPP                              ; 0041fcb7
    FNSTSW AX                           ; 0041fcb9
    SAHF                                ; 0041fcbb
    JBE 0x0041fd0d                      ; 0041fcbc
        ;   XREF to: 0041fd0d (CONDITIONAL_JUMP)  ; LAB_0041fd0d
    MOV ECX,dword ptr [EBX + 0xb0]      ; 0041fcbe
    XOR ESI,ESI                         ; 0041fcc4
    XOR EDI,EDI                         ; 0041fcc6
    TEST ECX,ECX                        ; 0041fcc8
    JLE 0x0041fcf6                      ; 0041fcca
        ;   XREF to: 0041fcf6 (CONDITIONAL_JUMP)  ; LAB_0041fcf6
    MOV EDX,EBX                         ; 0041fccc
    FLD float ptr [EDX + 0xc4]          ; 0041fcce
        ;   Label: LAB_0041fcce
    FSUB float ptr [EBX + 0x258]        ; 0041fcd4
    FABS                                ; 0041fcda
    FCOMP double ptr [0x0061651f]       ; 0041fcdc | g_BoxCollisionNormalDotThreshold
    FNSTSW AX                           ; 0041fce2
    SAHF                                ; 0041fce4
    JNC 0x0041fce8                      ; 0041fce5
        ;   XREF to: 0041fce8 (CONDITIONAL_JUMP)  ; LAB_0041fce8
    INC EDI                             ; 0041fce7
    INC ESI                             ; 0041fce8
        ;   Label: LAB_0041fce8
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041fce9
    ADD EDX,0x34                        ; 0041fcef
    CMP ESI,EAX                         ; 0041fcf2
    JL 0x0041fcce                       ; 0041fcf4
        ;   XREF to: 0041fcce (CONDITIONAL_JUMP)  ; LAB_0041fcce
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0041fcf6
        ;   Label: LAB_0041fcf6
    MOV EDX,EAX                         ; 0041fcfc
    SAR EDX,0x1f                        ; 0041fcfe
    SUB EAX,EDX                         ; 0041fd01
    SAR EAX,0x1                         ; 0041fd03
    CMP EDI,EAX                         ; 0041fd05
    JGE 0x0041fe76                      ; 0041fd07
        ;   XREF to: 0041fe76 (CONDITIONAL_JUMP)  ; LAB_0041fe76
    MOV ESP,EBP                         ; 0041fd0d
        ;   Label: LAB_0041fd0d
    POP EBP                             ; 0041fd0f
    POP EDI                             ; 0041fd10
    POP ESI                             ; 0041fd11
    POP EBX                             ; 0041fd12
    RET                                 ; 0041fd13
    MOV EAX,dword ptr [EBX]             ; 0041fd14
        ;   Label: LAB_0041fd14
    MOV dword ptr [ESP + 0x330],EAX     ; 0041fd16
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041fd1d
    MOV dword ptr [ESP + 0x334],EAX     ; 0041fd20
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041fd27
    MOV dword ptr [ESP + 0x338],EAX     ; 0041fd2a
    JMP 0x0041e37e                      ; 0041fd31
        ;   XREF to: 0041e37e (UNCONDITIONAL_JUMP)  ; LAB_0041e37e
    MOV dword ptr [EBX + 0x258],0xc61c3c00 ; 0041fd36
        ;   Label: LAB_0041fd36
    JMP 0x0041e449                      ; 0041fd40
        ;   XREF to: 0041e449 (UNCONDITIONAL_JUMP)  ; LAB_0041e449
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 0041fd45
        ;   Label: LAB_0041fd45
    FLD float ptr [EDI]                 ; 0041fd4c
    FSUB float ptr [EAX]                ; 0041fd4e
    FSTP float ptr [ESP + 0x3c0]        ; 0041fd50
    FLD float ptr [EDI + 0x4]           ; 0041fd57
    FSUB float ptr [EAX + 0x4]          ; 0041fd5a
    FST float ptr [ESP + 0x3c4]         ; 0041fd5d
    FMUL float ptr [ESP + 0x3c4]        ; 0041fd64
    FLD float ptr [ESP + 0x3c0]         ; 0041fd6b
    FMUL ST0                            ; 0041fd72
    FLD float ptr [EDI + 0x8]           ; 0041fd74
    FSUB float ptr [EAX + 0x8]          ; 0041fd77
    FXCH                                ; 0041fd7a
    FADDP ST2,ST0                       ; 0041fd7c
    FST float ptr [ESP + 0x3c8]         ; 0041fd7e
    FMUL float ptr [ESP + 0x3c8]        ; 0041fd85
    FADDP                               ; 0041fd8c
    FSQRT                               ; 0041fd8e
    FCOMP double ptr [0x0061650f]       ; 0041fd90 | g_BoxMinimumVelocityThreshold
    FNSTSW AX                           ; 0041fd96
    SAHF                                ; 0041fd98
    JBE 0x0041ea65                      ; 0041fd99
        ;   XREF to: 0041ea65 (CONDITIONAL_JUMP)  ; LAB_0041ea65
    MOV EAX,dword ptr [ESP + 0x418]     ; 0041fd9f
    PUSH 0x0                            ; 0041fda6
    ADD EAX,0x28                        ; 0041fda8
    PUSH EAX                            ; 0041fdab
    PUSH EDI                            ; 0041fdac
    MOV EDX,dword ptr [ESP + 0x3e0]     ; 0041fdad
    PUSH EDX                            ; 0041fdb4
    PUSH 0x3277d14                      ; 0041fdb5 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 0041fdba
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x43c],EAX     ; 0041fdbf
    MOV EAX,dword ptr [ESP + 0x43c]     ; 0041fdc6
    MOV dword ptr [ESI + 0xd8],EAX      ; 0041fdcd
    ADD ESP,0x14                        ; 0041fdd3
    MOV EAX,dword ptr [ESI + 0xd8]      ; 0041fdd6
    MOV dword ptr [ESP + 0x18],EAX      ; 0041fddc
    FLDZ                                ; 0041fde0
    FLD float ptr [ESP + 0x18]          ; 0041fde2
    FSTP double ptr [ESP + 0x10]        ; 0041fde6
    FCOMP double ptr [ESP + 0x10]       ; 0041fdea
    FNSTSW AX                           ; 0041fdee
    SAHF                                ; 0041fdf0
    JNC 0x0041ea65                      ; 0041fdf1
        ;   XREF to: 0041ea65 (CONDITIONAL_JUMP)  ; LAB_0041ea65
    FLD1                                ; 0041fdf7
    FCOMP double ptr [ESP + 0x10]       ; 0041fdf9
    FNSTSW AX                           ; 0041fdfd
    SAHF                                ; 0041fdff
    JBE 0x0041ea65                      ; 0041fe00
        ;   XREF to: 0041ea65 (CONDITIONAL_JUMP)  ; LAB_0041ea65
    MOV EAX,dword ptr [ESP + 0x424]     ; 0041fe06
    MOV EDX,dword ptr [ESP + 0x420]     ; 0041fe0d
    LEA ECX,[EAX + 0x1]                 ; 0041fe14
    MOV dword ptr [ESP + EAX*0x4 + 0x70],EDX ; 0041fe17
    MOV dword ptr [ESP + 0x424],ECX     ; 0041fe1b
    JMP 0x0041ea65                      ; 0041fe22
        ;   XREF to: 0041ea65 (UNCONDITIONAL_JUMP)  ; LAB_0041ea65
    MOV ESI,dword ptr [ESP + 0x3d8]     ; 0041fe27
        ;   Label: LAB_0041fe27
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041fe2e
    FLD float ptr [EBX]                 ; 0041fe35
    SUB EAX,ESI                         ; 0041fe37
    FLD float ptr [EBX + 0x4]           ; 0041fe39
    SHL EAX,0x2                         ; 0041fe3c
    FLD float ptr [EBX + 0x8]           ; 0041fe3f
    ADD EAX,ESI                         ; 0041fe42
    FXCH ST2                            ; 0041fe44
    FADD float ptr [ESP + 0x39c]        ; 0041fe46
    SHL EAX,0x2                         ; 0041fe4d
    FSTP float ptr [EBX]                ; 0041fe50
    ADD EDX,EAX                         ; 0041fe52
    FADD float ptr [ESP + 0x3a0]        ; 0041fe54
    ADD EDX,0x28                        ; 0041fe5b
    LEA EAX,[ESP + 0x348]               ; 0041fe5e
    PUSH EDX                            ; 0041fe65
    FSTP float ptr [EBX + 0x4]          ; 0041fe66
    PUSH EAX                            ; 0041fe69
    FADD float ptr [ESP + 0x3ac]        ; 0041fe6a
    JMP 0x0041f1e7                      ; 0041fe71
        ;   XREF to: 0041f1e7 (UNCONDITIONAL_JUMP)  ; LAB_0041f1e7
    MOV dword ptr [EBX + 0x254],0x0     ; 0041fe76
        ;   Label: LAB_0041fe76
    MOV ESP,EBP                         ; 0041fe80
    POP EBP                             ; 0041fe82
    POP EDI                             ; 0041fe83
    POP ESI                             ; 0041fe84
    POP EBX                             ; 0041fe85
    RET                                 ; 0041fe86

