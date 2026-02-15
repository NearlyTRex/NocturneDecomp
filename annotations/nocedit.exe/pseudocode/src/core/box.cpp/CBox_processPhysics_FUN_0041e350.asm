; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e350(CBox *this_ptr,float delta_time)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x440]:8  local_440
; undefined8       Stack[-0x438]:8  local_438
; undefined8       Stack[-0x430]:8  local_430
; undefined4       Stack[-0x428]:4  local_428
; undefined4       Stack[-0x424]:4  local_424
; undefined4       Stack[-0x420]:4  local_420
; undefined4       Stack[-0x41c]:4  local_41c
; undefined4       Stack[-0x418]:4  local_418
; undefined4       Stack[-0x414]:4  local_414
; undefined4       Stack[-0x410]:4  local_410
; undefined4       Stack[-0x40c]:4  local_40c
; undefined4       Stack[-0x408]:4  local_408
; undefined4       Stack[-0x404]:4  local_404
; undefined4       Stack[-0x400]:4  local_400
; undefined4       Stack[-0x3f8]:4  local_3f8
; undefined4       Stack[-0x3f4]:4  local_3f4
; undefined4       Stack[-0x3f0]:4  local_3f0
; undefined4       Stack[-0x3ec]:4  local_3ec
; undefined4       Stack[-0x3e8]:4  local_3e8
; undefined4       Stack[-0x3e4]:4  local_3e4
; undefined4       Stack[-0x3e0]:4  local_3e0
; undefined4       Stack[-0x3dc]:4  local_3dc
; undefined4       Stack[-0x3d8]:4  local_3d8
; undefined4       Stack[-0x3d0]:4  local_3d0
; undefined4       Stack[-0x3cc]:4  local_3cc
; undefined4       Stack[-0x3b0]:4  local_3b0
; undefined4       Stack[-0x3ac]:4  local_3ac
; undefined4       Stack[-0x3a8]:4  local_3a8
; undefined4       Stack[-0x3a4]:4  local_3a4
; undefined4       Stack[-0x3a0]:4  local_3a0
; undefined4       Stack[-0x39c]:4  local_39c
; undefined4       Stack[-0x398]:4  local_398
; undefined4       Stack[-0x394]:4  local_394
; undefined4       Stack[-0x390]:4  local_390
; undefined4       Stack[-0x38c]:4  local_38c
; undefined4       Stack[-0x388]:4  local_388
; undefined4       Stack[-0x384]:4  local_384
; undefined4       Stack[-0x380]:4  local_380
; undefined4       Stack[-0x37c]:4  local_37c
; undefined4       Stack[-0x378]:4  local_378
; undefined4       Stack[-0x374]:4  local_374
; undefined4       Stack[-0x370]:4  local_370
; undefined4       Stack[-0x36c]:4  local_36c
; undefined4       Stack[-0x368]:4  local_368
; undefined4       Stack[-0x364]:4  local_364
; undefined4       Stack[-0x360]:4  local_360
; undefined4       Stack[-0x35c]:4  local_35c
; undefined4       Stack[-0x358]:4  local_358
; undefined4       Stack[-0x354]:4  local_354
; undefined4       Stack[-0x350]:4  local_350
; undefined4       Stack[-0x34c]:4  local_34c
; undefined4       Stack[-0x348]:4  local_348
; undefined4       Stack[-0x344]:4  local_344
; undefined4       Stack[-0x340]:4  local_340
; undefined4       Stack[-0x33c]:4  local_33c
; undefined4       Stack[-0x338]:4  local_338
; undefined4       Stack[-0x334]:4  local_334
; undefined4       Stack[-0x330]:4  local_330
; undefined4       Stack[-0x32c]:4  local_32c
; undefined4       Stack[-0x328]:4  local_328
; undefined4       Stack[-0x324]:4  local_324
; undefined4       Stack[-0x320]:4  local_320
; undefined4       Stack[-0x31c]:4  local_31c
; undefined4       Stack[-0x318]:4  local_318
; undefined4       Stack[-0x314]:4  local_314
; undefined4       Stack[-0x310]:4  local_310
; undefined4       Stack[-0x30c]:4  local_30c
; undefined4       Stack[-0x308]:4  local_308
; undefined4       Stack[-0x304]:4  local_304
; undefined4       Stack[-0x300]:4  local_300
; undefined1       Stack[-0x2fc]:1  local_2fc
; undefined4       Stack[-0x2f0]:4  local_2f0
; undefined4       Stack[-0x2ec]:4  local_2ec
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined4       Stack[-0x2e4]:4  local_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2dc]:4  local_2dc
; undefined4       Stack[-0x2d8]:4  local_2d8
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2d0]:4  local_2d0
; undefined1       Stack[-0x2cc]:1  local_2cc
; undefined1       Stack[-0x2c0]:1  local_2c0
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined4       Stack[-0x29c]:4  local_29c
; undefined4       Stack[-0x298]:4  local_298
; undefined4       Stack[-0x294]:4  local_294
; undefined4       Stack[-0x290]:4  local_290
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined1       Stack[-0x284]:1  local_284
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x244]:4  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined1       Stack[-0x20c]:1  local_20c
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined1       Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined1       Stack[-0x1c4]:1  local_1c4
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined1       Stack[-0x188]:1  local_188
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined1       Stack[-0x170]:1  local_170
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined1       Stack[-0xf8]:1  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
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
;   double g_BoxCollisionEpsilon = 0.5
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

