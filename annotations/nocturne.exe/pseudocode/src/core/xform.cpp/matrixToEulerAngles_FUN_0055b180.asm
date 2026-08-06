; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f *matrix_in,CVector3f *euler_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
; CVector3f *      Stack[0x8]:4   euler_out
; Local Variables:
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[26]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 at 004176db
;   core_boxactor.cpp_CLightActor_process_FUN_0041f3d0 at 0041f5b4
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 at 00428029
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0 at 00426636
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220 at 00429384
;   core_course.cpp_CCourse_evaluate_FUN_0043b800 at 0043b85b
;   core_fire.cpp_CBulletHole_init_FUN_00482c80 at 00482e2b
;   core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0 at 00499fbf
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004980d0 at 00498277
;   core_ladder.cpp_CLadder_FUN_004c45a0 at 004c4673
;   ... and 16 more
;
; Referenced Globals:
;   double DOUBLE_0059828e = -1
;   double DOUBLE_00598296 = -3.14159265359000
;   double DOUBLE_0059829e = 5.37009149473111E-315
;   double DOUBLE_005982a6 = 0.707000000000000
;   double DOUBLE_005982ae = -0.707000000000000
;   double DOUBLE_005982b6 = 3.14159265359000
;   double DOUBLE_005982be = 1.59800704495575E-314
;
; Called Functions:
;   crt_math.c_acos_FUN_00565ca4
;   crt_math.c_asin_FUN_00565c76
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b180
        ;   Label: core_xform.cpp_matrixToEulerAngles_FUN_0055b180
    PUSH EDI                            ; 0055b181
    PUSH EBP                            ; 0055b182
    MOV EBP,ESP                         ; 0055b183
    SUB ESP,0x9c                        ; 0055b185
    AND ESP,0xfffffff8                  ; 0055b18b
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055b18e
    MOV ECX,dword ptr [EBP + 0x14]      ; 0055b191
    FLD float ptr [EDX + 0x4]           ; 0055b194
    FMUL ST0                            ; 0055b197
    FLD float ptr [EDX]                 ; 0055b199
    FMUL ST0                            ; 0055b19b
    FADDP                               ; 0055b19d
    FLD float ptr [EDX + 0x8]           ; 0055b19f
    FMUL ST0                            ; 0055b1a2
    FADDP                               ; 0055b1a4
    FSQRT                               ; 0055b1a6
    FLDZ                                ; 0055b1a8
    FXCH                                ; 0055b1aa
    FSTP double ptr [ESP + 0x10]        ; 0055b1ac
    FCOMP double ptr [ESP + 0x10]       ; 0055b1b0
    FNSTSW AX                           ; 0055b1b4
    SAHF                                ; 0055b1b6
    JC 0x0055b334                       ; 0055b1b7
        ;   XREF to: 0055b334 (CONDITIONAL_JUMP)  ; LAB_0055b334
    FLD float ptr [EDX + 0x10]          ; 0055b1bd
        ;   Label: LAB_0055b1bd
    FMUL ST0                            ; 0055b1c0
    FLD float ptr [EDX + 0x14]          ; 0055b1c2
    FMUL ST0                            ; 0055b1c5
    FADDP                               ; 0055b1c7
    FLD float ptr [EDX + 0x18]          ; 0055b1c9
    FMUL ST0                            ; 0055b1cc
    FADDP                               ; 0055b1ce
    FSQRT                               ; 0055b1d0
    FLDZ                                ; 0055b1d2
    FXCH                                ; 0055b1d4
    FSTP double ptr [ESP + 0x28]        ; 0055b1d6
    FCOMP double ptr [ESP + 0x28]       ; 0055b1da
    FNSTSW AX                           ; 0055b1de
    SAHF                                ; 0055b1e0
    JNC 0x0055b1ed                      ; 0055b1e1
        ;   XREF to: 0055b1ed (CONDITIONAL_JUMP)  ; LAB_0055b1ed
    FLD1                                ; 0055b1e3
    FDIV double ptr [ESP + 0x28]        ; 0055b1e5
    FSTP double ptr [ESP + 0x28]        ; 0055b1e9
    FLD float ptr [EDX + 0x20]          ; 0055b1ed
        ;   Label: LAB_0055b1ed
    FMUL ST0                            ; 0055b1f0
    FLD float ptr [EDX + 0x24]          ; 0055b1f2
    FMUL ST0                            ; 0055b1f5
    FADDP                               ; 0055b1f7
    FLD float ptr [EDX + 0x28]          ; 0055b1f9
    FMUL ST0                            ; 0055b1fc
    FADDP                               ; 0055b1fe
    FSQRT                               ; 0055b200
    FLDZ                                ; 0055b202
    FXCH                                ; 0055b204
    FSTP double ptr [ESP + 0x20]        ; 0055b206
    FCOMP double ptr [ESP + 0x20]       ; 0055b20a
    FNSTSW AX                           ; 0055b20e
    SAHF                                ; 0055b210
    JNC 0x0055b21d                      ; 0055b211
        ;   XREF to: 0055b21d (CONDITIONAL_JUMP)  ; LAB_0055b21d
    FLD1                                ; 0055b213
    FDIV double ptr [ESP + 0x20]        ; 0055b215
    FSTP double ptr [ESP + 0x20]        ; 0055b219
    FLD float ptr [EDX + 0x18]          ; 0055b21d
        ;   Label: LAB_0055b21d
    FCHS                                ; 0055b220
    FMUL double ptr [ESP + 0x28]        ; 0055b222
    FST double ptr [ESP + 0x18]         ; 0055b226
    FCOMP double ptr [0x0059828e]       ; 0055b22a | DOUBLE_0059828e
    FNSTSW AX                           ; 0055b230
    SAHF                                ; 0055b232
    JA 0x0055b343                       ; 0055b233
        ;   XREF to: 0055b343 (CONDITIONAL_JUMP)  ; LAB_0055b343
    MOV dword ptr [ECX],0xbfc90fdb      ; 0055b239
    MOV dword ptr [ECX + 0x8],0x0       ; 0055b23f
        ;   Label: LAB_0055b23f
    FLD float ptr [EDX + 0x20]          ; 0055b246
    FCHS                                ; 0055b249
    FMUL double ptr [ESP + 0x20]        ; 0055b24b
    FLD float ptr [EDX]                 ; 0055b24f
    FMUL double ptr [ESP + 0x10]        ; 0055b251
    FXCH                                ; 0055b255
    FSTP double ptr [ESP + 0x8]         ; 0055b257
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b25b
    MOV dword ptr [ESP + 0x30],EAX      ; 0055b25f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b263
    FSTP double ptr [ESP + 0x40]        ; 0055b267
    MOV dword ptr [ESP + 0x34],EAX      ; 0055b26b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0055b26f
    MOV dword ptr [ESP + 0x68],EAX      ; 0055b273
    MOV EAX,dword ptr [ESP + 0x44]      ; 0055b277
    FLD double ptr [ESP + 0x8]          ; 0055b27b
    MOV dword ptr [ESP + 0x6c],EAX      ; 0055b27f
    FCOMP double ptr [0x005982a6]       ; 0055b283 | DOUBLE_005982a6
    FNSTSW AX                           ; 0055b289
    SAHF                                ; 0055b28b
    JNC 0x0055b59b                      ; 0055b28c
        ;   XREF to: 0055b59b (CONDITIONAL_JUMP)  ; LAB_0055b59b
    FLD double ptr [ESP + 0x8]          ; 0055b292
    FCOMP double ptr [0x005982ae]       ; 0055b296 | DOUBLE_005982ae
    FNSTSW AX                           ; 0055b29c
    SAHF                                ; 0055b29e
    JBE 0x0055b59b                      ; 0055b29f
        ;   XREF to: 0055b59b (CONDITIONAL_JUMP)  ; LAB_0055b59b
    FLD double ptr [ESP + 0x8]          ; 0055b2a5
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b2a9
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLDZ                                ; 0055b2ae
    FXCH                                ; 0055b2b0
    FSTP float ptr [ESP + 0x94]         ; 0055b2b2
    FCOMP double ptr [ESP + 0x40]       ; 0055b2b9
    FNSTSW AX                           ; 0055b2bd
    SAHF                                ; 0055b2bf
    JBE 0x0055b2d6                      ; 0055b2c0
        ;   XREF to: 0055b2d6 (CONDITIONAL_JUMP)  ; LAB_0055b2d6
    FLD float ptr [ESP + 0x94]          ; 0055b2c2
    FSUBR double ptr [0x005982b6]       ; 0055b2c9 | DOUBLE_005982b6
    FSTP float ptr [ESP + 0x94]         ; 0055b2cf
    FLD float ptr [ESP + 0x94]          ; 0055b2d6
        ;   Label: LAB_0055b2d6
    FCOMP double ptr [0x00598296]       ; 0055b2dd | DOUBLE_00598296
    FNSTSW AX                           ; 0055b2e3
    SAHF                                ; 0055b2e5
    JNC 0x0055b2fc                      ; 0055b2e6
        ;   XREF to: 0055b2fc (CONDITIONAL_JUMP)  ; LAB_0055b2fc
    FLD float ptr [ESP + 0x94]          ; 0055b2e8
    FADD float ptr [0x0059829e]         ; 0055b2ef | DOUBLE_0059829e
    FSTP float ptr [ESP + 0x94]         ; 0055b2f5
    FLD float ptr [ESP + 0x94]          ; 0055b2fc
        ;   Label: LAB_0055b2fc
    FCOMP double ptr [0x005982b6]       ; 0055b303 | DOUBLE_005982b6
    FNSTSW AX                           ; 0055b309
    SAHF                                ; 0055b30b
    JBE 0x0055b322                      ; 0055b30c
        ;   XREF to: 0055b322 (CONDITIONAL_JUMP)  ; LAB_0055b322
    FLD float ptr [ESP + 0x94]          ; 0055b30e
    FADD float ptr [0x005982be]         ; 0055b315 | DOUBLE_005982be
    FSTP float ptr [ESP + 0x94]         ; 0055b31b
    MOV EAX,dword ptr [ESP + 0x94]      ; 0055b322
        ;   Label: LAB_0055b322
    MOV dword ptr [ECX + 0x4],EAX       ; 0055b329
    MOV EAX,ECX                         ; 0055b32c
    MOV ESP,EBP                         ; 0055b32e
    POP EBP                             ; 0055b330
    POP EDI                             ; 0055b331
    POP EBX                             ; 0055b332
    RET                                 ; 0055b333
    FLD1                                ; 0055b334
        ;   Label: LAB_0055b334
    FDIV double ptr [ESP + 0x10]        ; 0055b336
    FSTP double ptr [ESP + 0x10]        ; 0055b33a
    JMP 0x0055b1bd                      ; 0055b33e
        ;   XREF to: 0055b1bd (UNCONDITIONAL_JUMP)  ; LAB_0055b1bd
    FLD1                                ; 0055b343
        ;   Label: LAB_0055b343
    FCOMP double ptr [ESP + 0x18]       ; 0055b345
    FNSTSW AX                           ; 0055b349
    SAHF                                ; 0055b34b
    JA 0x0055b359                       ; 0055b34c
        ;   XREF to: 0055b359 (CONDITIONAL_JUMP)  ; LAB_0055b359
    MOV dword ptr [ECX],0x3fc90fdb      ; 0055b34e
    JMP 0x0055b23f                      ; 0055b354
        ;   XREF to: 0055b23f (UNCONDITIONAL_JUMP)  ; LAB_0055b23f
    FLD double ptr [ESP + 0x18]         ; 0055b359
        ;   Label: LAB_0055b359
    FLD ST0                             ; 0055b35d
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b35f
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLD ST1                             ; 0055b364
    FMULP ST2                           ; 0055b366
    FLD1                                ; 0055b368
    FSUBRP ST2,ST0                      ; 0055b36a
    FXCH                                ; 0055b36c
    FSQRT                               ; 0055b36e
    FXCH                                ; 0055b370
    FST float ptr [ECX]                 ; 0055b372
    FXCH                                ; 0055b374
    FSTP double ptr [ESP + 0x50]        ; 0055b376
    FCOMP double ptr [0x00598296]       ; 0055b37a | DOUBLE_00598296
    FNSTSW AX                           ; 0055b380
    SAHF                                ; 0055b382
    JNC 0x0055b38f                      ; 0055b383
        ;   XREF to: 0055b38f (CONDITIONAL_JUMP)  ; LAB_0055b38f
    FLD float ptr [ECX]                 ; 0055b385
    FADD float ptr [0x0059829e]         ; 0055b387 | DOUBLE_0059829e
    FSTP float ptr [ECX]                ; 0055b38d
    FLDZ                                ; 0055b38f
        ;   Label: LAB_0055b38f
    FCOMP double ptr [ESP + 0x50]       ; 0055b391
    FNSTSW AX                           ; 0055b395
    SAHF                                ; 0055b397
    JNC 0x0055b23f                      ; 0055b398
        ;   XREF to: 0055b23f (CONDITIONAL_JUMP)  ; LAB_0055b23f
    FLD1                                ; 0055b39e
    FDIV double ptr [ESP + 0x50]        ; 0055b3a0
    FLD float ptr [EDX + 0x28]          ; 0055b3a4
    FMUL double ptr [ESP + 0x20]        ; 0055b3a7
    FLD float ptr [EDX + 0x8]           ; 0055b3ab
    FMUL double ptr [ESP + 0x10]        ; 0055b3ae
    FXCH ST2                            ; 0055b3b2
    FSTP double ptr [ESP + 0x70]        ; 0055b3b4
    FXCH                                ; 0055b3b8
    FMUL double ptr [ESP + 0x70]        ; 0055b3ba
    FXCH                                ; 0055b3be
    FMUL double ptr [ESP + 0x70]        ; 0055b3c0
    FXCH                                ; 0055b3c4
    FSTP double ptr [ESP + 0x78]        ; 0055b3c6
    MOV EAX,dword ptr [ESP + 0x78]      ; 0055b3ca
    MOV dword ptr [ESP + 0x80],EAX      ; 0055b3ce
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0055b3d5
    FSTP double ptr [ESP + 0x48]        ; 0055b3d9
    MOV dword ptr [ESP + 0x84],EAX      ; 0055b3dd
    MOV EAX,dword ptr [ESP + 0x48]      ; 0055b3e4
    MOV dword ptr [ESP + 0x58],EAX      ; 0055b3e8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0055b3ec
    FLD double ptr [ESP + 0x78]         ; 0055b3f0
    MOV dword ptr [ESP + 0x5c],EAX      ; 0055b3f4
    FCOMP double ptr [0x005982a6]       ; 0055b3f8 | DOUBLE_005982a6
    FNSTSW AX                           ; 0055b3fe
    SAHF                                ; 0055b400
    JNC 0x0055b5f9                      ; 0055b401
        ;   XREF to: 0055b5f9 (CONDITIONAL_JUMP)  ; LAB_0055b5f9
    FLD double ptr [ESP + 0x78]         ; 0055b407
    FCOMP double ptr [0x005982ae]       ; 0055b40b | DOUBLE_005982ae
    FNSTSW AX                           ; 0055b411
    SAHF                                ; 0055b413
    JBE 0x0055b5f9                      ; 0055b414
        ;   XREF to: 0055b5f9 (CONDITIONAL_JUMP)  ; LAB_0055b5f9
    FLD double ptr [ESP + 0x78]         ; 0055b41a
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b41e
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLDZ                                ; 0055b423
    FXCH                                ; 0055b425
    FSTP float ptr [ESP + 0x98]         ; 0055b427
    FCOMP double ptr [ESP + 0x48]       ; 0055b42e
    FNSTSW AX                           ; 0055b432
    SAHF                                ; 0055b434
    JBE 0x0055b44b                      ; 0055b435
        ;   XREF to: 0055b44b (CONDITIONAL_JUMP)  ; LAB_0055b44b
    FLD float ptr [ESP + 0x98]          ; 0055b437
    FSUBR double ptr [0x005982b6]       ; 0055b43e | DOUBLE_005982b6
    FSTP float ptr [ESP + 0x98]         ; 0055b444
    FLD float ptr [ESP + 0x98]          ; 0055b44b
        ;   Label: LAB_0055b44b
    FCOMP double ptr [0x00598296]       ; 0055b452 | DOUBLE_00598296
    FNSTSW AX                           ; 0055b458
    SAHF                                ; 0055b45a
    JNC 0x0055b471                      ; 0055b45b
        ;   XREF to: 0055b471 (CONDITIONAL_JUMP)  ; LAB_0055b471
    FLD float ptr [ESP + 0x98]          ; 0055b45d
    FADD float ptr [0x0059829e]         ; 0055b464 | DOUBLE_0059829e
    FSTP float ptr [ESP + 0x98]         ; 0055b46a
    FLD float ptr [ESP + 0x98]          ; 0055b471
        ;   Label: LAB_0055b471
    FCOMP double ptr [0x005982b6]       ; 0055b478 | DOUBLE_005982b6
    FNSTSW AX                           ; 0055b47e
    SAHF                                ; 0055b480
    JBE 0x0055b497                      ; 0055b481
        ;   XREF to: 0055b497 (CONDITIONAL_JUMP)  ; LAB_0055b497
    FLD float ptr [ESP + 0x98]          ; 0055b483
    FADD float ptr [0x005982be]         ; 0055b48a | DOUBLE_005982be
    FSTP float ptr [ESP + 0x98]         ; 0055b490
    MOV EAX,dword ptr [ESP + 0x98]      ; 0055b497
        ;   Label: LAB_0055b497
    MOV dword ptr [ECX + 0x4],EAX       ; 0055b49e
    FLD double ptr [ESP + 0x28]         ; 0055b4a1
    FLD float ptr [EDX + 0x10]          ; 0055b4a5
    FMUL ST1                            ; 0055b4a8
    FLD float ptr [EDX + 0x14]          ; 0055b4aa
    FMULP ST2                           ; 0055b4ad
    FLD double ptr [ESP + 0x70]         ; 0055b4af
    FXCH                                ; 0055b4b3
    FMUL ST1                            ; 0055b4b5
    FXCH ST2                            ; 0055b4b7
    FMULP                               ; 0055b4b9
    FXCH                                ; 0055b4bb
    FSTP double ptr [ESP]               ; 0055b4bd
    MOV EAX,dword ptr [ESP]             ; 0055b4c0
    MOV dword ptr [ESP + 0x88],EAX      ; 0055b4c3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055b4ca
    FSTP double ptr [ESP + 0x38]        ; 0055b4ce
    MOV dword ptr [ESP + 0x8c],EAX      ; 0055b4d2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055b4d9
    MOV dword ptr [ESP + 0x60],EAX      ; 0055b4dd
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0055b4e1
    FLD double ptr [ESP]                ; 0055b4e5
    MOV dword ptr [ESP + 0x64],EAX      ; 0055b4e8
    FCOMP double ptr [0x005982a6]       ; 0055b4ec | DOUBLE_005982a6
    FNSTSW AX                           ; 0055b4f2
    SAHF                                ; 0055b4f4
    JNC 0x0055b65a                      ; 0055b4f5
        ;   XREF to: 0055b65a (CONDITIONAL_JUMP)  ; LAB_0055b65a
    FLD double ptr [ESP]                ; 0055b4fb
    FCOMP double ptr [0x005982ae]       ; 0055b4fe | DOUBLE_005982ae
    FNSTSW AX                           ; 0055b504
    SAHF                                ; 0055b506
    JBE 0x0055b65a                      ; 0055b507
        ;   XREF to: 0055b65a (CONDITIONAL_JUMP)  ; LAB_0055b65a
    FLD double ptr [ESP]                ; 0055b50d
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b510
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLDZ                                ; 0055b515
    FXCH                                ; 0055b517
    FSTP float ptr [ESP + 0x90]         ; 0055b519
    FCOMP double ptr [ESP + 0x38]       ; 0055b520
    FNSTSW AX                           ; 0055b524
    SAHF                                ; 0055b526
    JBE 0x0055b53d                      ; 0055b527
        ;   XREF to: 0055b53d (CONDITIONAL_JUMP)  ; LAB_0055b53d
    FLD float ptr [ESP + 0x90]          ; 0055b529
    FSUBR double ptr [0x005982b6]       ; 0055b530 | DOUBLE_005982b6
    FSTP float ptr [ESP + 0x90]         ; 0055b536
    FLD float ptr [ESP + 0x90]          ; 0055b53d
        ;   Label: LAB_0055b53d
    FCOMP double ptr [0x00598296]       ; 0055b544 | DOUBLE_00598296
    FNSTSW AX                           ; 0055b54a
    SAHF                                ; 0055b54c
    JNC 0x0055b563                      ; 0055b54d
        ;   XREF to: 0055b563 (CONDITIONAL_JUMP)  ; LAB_0055b563
    FLD float ptr [ESP + 0x90]          ; 0055b54f
    FADD float ptr [0x0059829e]         ; 0055b556 | DOUBLE_0059829e
    FSTP float ptr [ESP + 0x90]         ; 0055b55c
    FLD float ptr [ESP + 0x90]          ; 0055b563
        ;   Label: LAB_0055b563
    FCOMP double ptr [0x005982b6]       ; 0055b56a | DOUBLE_005982b6
    FNSTSW AX                           ; 0055b570
    SAHF                                ; 0055b572
    JBE 0x0055b589                      ; 0055b573
        ;   XREF to: 0055b589 (CONDITIONAL_JUMP)  ; LAB_0055b589
    FLD float ptr [ESP + 0x90]          ; 0055b575
    FADD float ptr [0x005982be]         ; 0055b57c | DOUBLE_005982be
    FSTP float ptr [ESP + 0x90]         ; 0055b582
    MOV EAX,dword ptr [ESP + 0x90]      ; 0055b589
        ;   Label: LAB_0055b589
    MOV dword ptr [ECX + 0x8],EAX       ; 0055b590
    MOV EAX,ECX                         ; 0055b593
    MOV ESP,EBP                         ; 0055b595
    POP EBP                             ; 0055b597
    POP EDI                             ; 0055b598
    POP EBX                             ; 0055b599
    RET                                 ; 0055b59a
    FLD double ptr [ESP + 0x68]         ; 0055b59b
        ;   Label: LAB_0055b59b
    FCOMP double ptr [0x0059828e]       ; 0055b59f | DOUBLE_0059828e
    FNSTSW AX                           ; 0055b5a5
    SAHF                                ; 0055b5a7
    JA 0x0055b5d1                       ; 0055b5a8
        ;   XREF to: 0055b5d1 (CONDITIONAL_JUMP)  ; LAB_0055b5d1
    MOV dword ptr [ESP + 0x94],0x40490fdb ; 0055b5aa
    FLDZ                                ; 0055b5b5
        ;   Label: LAB_0055b5b5
    FCOMP double ptr [ESP + 0x30]       ; 0055b5b7
    FNSTSW AX                           ; 0055b5bb
    SAHF                                ; 0055b5bd
    JBE 0x0055b2d6                      ; 0055b5be
        ;   XREF to: 0055b2d6 (CONDITIONAL_JUMP)  ; LAB_0055b2d6
    XOR byte ptr [ESP + 0x97],0x80      ; 0055b5c4
    JMP 0x0055b2d6                      ; 0055b5cc
        ;   XREF to: 0055b2d6 (UNCONDITIONAL_JUMP)  ; LAB_0055b2d6
    FLD1                                ; 0055b5d1
        ;   Label: LAB_0055b5d1
    FCOMP double ptr [ESP + 0x68]       ; 0055b5d3
    FNSTSW AX                           ; 0055b5d7
    SAHF                                ; 0055b5d9
    JA 0x0055b5e7                       ; 0055b5da
        ;   XREF to: 0055b5e7 (CONDITIONAL_JUMP)  ; LAB_0055b5e7
    XOR EDX,EDX                         ; 0055b5dc
    MOV dword ptr [ESP + 0x94],EDX      ; 0055b5de
    JMP 0x0055b5b5                      ; 0055b5e5
        ;   XREF to: 0055b5b5 (UNCONDITIONAL_JUMP)  ; LAB_0055b5b5
    FLD double ptr [ESP + 0x68]         ; 0055b5e7
        ;   Label: LAB_0055b5e7
    CALL crt_math.c_acos_FUN_00565ca4   ; 0055b5eb
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FSTP float ptr [ESP + 0x94]         ; 0055b5f0
    JMP 0x0055b5b5                      ; 0055b5f7
        ;   XREF to: 0055b5b5 (UNCONDITIONAL_JUMP)  ; LAB_0055b5b5
    FLD double ptr [ESP + 0x58]         ; 0055b5f9
        ;   Label: LAB_0055b5f9
    FCOMP double ptr [0x0059828e]       ; 0055b5fd | DOUBLE_0059828e
    FNSTSW AX                           ; 0055b603
    SAHF                                ; 0055b605
    JA 0x0055b632                       ; 0055b606
        ;   XREF to: 0055b632 (CONDITIONAL_JUMP)  ; LAB_0055b632
    MOV dword ptr [ESP + 0x98],0x40490fdb ; 0055b608
    FLDZ                                ; 0055b613
        ;   Label: LAB_0055b613
    FCOMP double ptr [ESP + 0x80]       ; 0055b615
    FNSTSW AX                           ; 0055b61c
    SAHF                                ; 0055b61e
    JBE 0x0055b44b                      ; 0055b61f
        ;   XREF to: 0055b44b (CONDITIONAL_JUMP)  ; LAB_0055b44b
    XOR byte ptr [ESP + 0x9b],0x80      ; 0055b625
    JMP 0x0055b44b                      ; 0055b62d
        ;   XREF to: 0055b44b (UNCONDITIONAL_JUMP)  ; LAB_0055b44b
    FLD1                                ; 0055b632
        ;   Label: LAB_0055b632
    FCOMP double ptr [ESP + 0x58]       ; 0055b634
    FNSTSW AX                           ; 0055b638
    SAHF                                ; 0055b63a
    JA 0x0055b648                       ; 0055b63b
        ;   XREF to: 0055b648 (CONDITIONAL_JUMP)  ; LAB_0055b648
    XOR EBX,EBX                         ; 0055b63d
    MOV dword ptr [ESP + 0x98],EBX      ; 0055b63f
    JMP 0x0055b613                      ; 0055b646
        ;   XREF to: 0055b613 (UNCONDITIONAL_JUMP)  ; LAB_0055b613
    FLD double ptr [ESP + 0x58]         ; 0055b648
        ;   Label: LAB_0055b648
    CALL crt_math.c_acos_FUN_00565ca4   ; 0055b64c
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FSTP float ptr [ESP + 0x98]         ; 0055b651
    JMP 0x0055b613                      ; 0055b658
        ;   XREF to: 0055b613 (UNCONDITIONAL_JUMP)  ; LAB_0055b613
    FLD double ptr [ESP + 0x60]         ; 0055b65a
        ;   Label: LAB_0055b65a
    FCOMP double ptr [0x0059828e]       ; 0055b65e | DOUBLE_0059828e
    FNSTSW AX                           ; 0055b664
    SAHF                                ; 0055b666
    JA 0x0055b693                       ; 0055b667
        ;   XREF to: 0055b693 (CONDITIONAL_JUMP)  ; LAB_0055b693
    MOV dword ptr [ESP + 0x90],0x40490fdb ; 0055b669
    FLDZ                                ; 0055b674
        ;   Label: LAB_0055b674
    FCOMP double ptr [ESP + 0x88]       ; 0055b676
    FNSTSW AX                           ; 0055b67d
    SAHF                                ; 0055b67f
    JBE 0x0055b53d                      ; 0055b680
        ;   XREF to: 0055b53d (CONDITIONAL_JUMP)  ; LAB_0055b53d
    XOR byte ptr [ESP + 0x93],0x80      ; 0055b686
    JMP 0x0055b53d                      ; 0055b68e
        ;   XREF to: 0055b53d (UNCONDITIONAL_JUMP)  ; LAB_0055b53d
    FLD1                                ; 0055b693
        ;   Label: LAB_0055b693
    FCOMP double ptr [ESP + 0x60]       ; 0055b695
    FNSTSW AX                           ; 0055b699
    SAHF                                ; 0055b69b
    JA 0x0055b6a9                       ; 0055b69c
        ;   XREF to: 0055b6a9 (CONDITIONAL_JUMP)  ; LAB_0055b6a9
    XOR EDI,EDI                         ; 0055b69e
    MOV dword ptr [ESP + 0x90],EDI      ; 0055b6a0
    JMP 0x0055b674                      ; 0055b6a7
        ;   XREF to: 0055b674 (UNCONDITIONAL_JUMP)  ; LAB_0055b674
    FLD double ptr [ESP + 0x60]         ; 0055b6a9
        ;   Label: LAB_0055b6a9
    CALL crt_math.c_acos_FUN_00565ca4   ; 0055b6ad
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FSTP float ptr [ESP + 0x90]         ; 0055b6b2
    JMP 0x0055b674                      ; 0055b6b9
        ;   XREF to: 0055b674 (UNCONDITIONAL_JUMP)  ; LAB_0055b674

