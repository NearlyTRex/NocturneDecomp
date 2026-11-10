; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_process_FUN_005a4260(CTVBat *this_ptr,float delta_time)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_CVampireBoss_005f8c28
;   TerminatedCString s_core_tvbat_cpp_005f8c35
;   TerminatedCString s_CTVBat_process_can_t_fol_005f8c47
;   undefined4 DAT_005f8c80
;   undefined4 DAT_005f8c88
;   undefined4 DAT_005f8c90
;   undefined4 DAT_005f8c98
;   undefined4 DAT_005f8ca0
;   undefined4 DAT_005f8ca8
;   undefined4 DAT_005f8cb0
;   undefined4 DAT_005f8cb8
;   undefined4 DAT_005f8cc0
;   undefined4 DAT_005f8cc8
;   undefined4 DAT_005f8cd0
;   undefined4 DAT_005f8cd4
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dtrace.cpp_FUN_0048b150
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060
;   core_main.c_FUN_005030e0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;   crt_math.c_atan2_FUN_005c1d69
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_FUN_00574010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4260
        ;   Label: core_tvbat.cpp_CTVBat_process_FUN_005a4260
    PUSH ESI                            ; 005a4261
    PUSH EDI                            ; 005a4262
    PUSH EBP                            ; 005a4263
    MOV EBP,ESP                         ; 005a4264
    SUB ESP,0x1e4                       ; 005a4266
    AND ESP,0xfffffff8                  ; 005a426c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a426f
    CMP dword ptr [EBX + 0xc410],0x0    ; 005a4272
    JZ 0x005a42c6                       ; 005a4279
        ;   XREF to: 005a42c6 (CONDITIONAL_JUMP)  ; LAB_005a42c6
    CMP dword ptr [EBX + 0xc49c],0x0    ; 005a427b
    JNZ 0x005a42c6                      ; 005a4282
        ;   XREF to: 005a42c6 (CONDITIONAL_JUMP)  ; LAB_005a42c6
    XOR ESI,ESI                         ; 005a4284
    XOR EDI,EDI                         ; 005a4286
    MOV EAX,[0x00622c18]                ; 005a4288 | g_CDemonSetPtr
        ;   Label: LAB_005a4288
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 005a428d | g_CDemonSetInstance.enemy_count
    JGE 0x005a42c6                      ; 005a4293
        ;   XREF to: 005a42c6 (CONDITIONAL_JUMP)  ; LAB_005a42c6
    PUSH 0x5f8c28                       ; 005a4295 | = "CVampireBoss"
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 005a429a
    PUSH ECX                            ; 005a42a1
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005a42a2
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005a42a7
    TEST EAX,EAX                        ; 005a42aa
    JNZ 0x005a42b4                      ; 005a42ac
        ;   XREF to: 005a42b4 (CONDITIONAL_JUMP)  ; LAB_005a42b4
    INC EDI                             ; 005a42ae
    ADD ESI,0x4                         ; 005a42af
    JMP 0x005a4288                      ; 005a42b2
        ;   XREF to: 005a4288 (UNCONDITIONAL_JUMP)  ; LAB_005a4288
    MOV EAX,[0x00622c18]                ; 005a42b4 | g_CDemonSetPtr
        ;   Label: LAB_005a42b4
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 005a42b9
    MOV dword ptr [EBX + 0xc49c],EAX    ; 005a42c0
    CMP dword ptr [EBX + 0xc410],0x0    ; 005a42c6
        ;   Label: LAB_005a42c6
    JZ 0x005a4308                       ; 005a42cd
        ;   XREF to: 005a4308 (CONDITIONAL_JUMP)  ; LAB_005a4308
    MOV EDI,dword ptr [EBX + 0xc49c]    ; 005a42cf
    TEST EDI,EDI                        ; 005a42d5
    JZ 0x005a4308                       ; 005a42d7
        ;   XREF to: 005a4308 (CONDITIONAL_JUMP)  ; LAB_005a4308
    LEA ESI,[EBX + 0xc3f0]              ; 005a42d9
    LEA EAX,[EDI + 0x20]                ; 005a42df
    CMP ESI,EAX                         ; 005a42e2
    JZ 0x005a42f6                       ; 005a42e4
        ;   XREF to: 005a42f6 (CONDITIONAL_JUMP)  ; LAB_005a42f6
    MOV EDX,dword ptr [EAX]             ; 005a42e6
    MOV dword ptr [ESI],EDX             ; 005a42e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a42ea
    MOV dword ptr [ESI + 0x4],EDX       ; 005a42ed
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a42f0
    MOV dword ptr [ESI + 0x8],EDX       ; 005a42f3
    FLD float ptr [EBX + 0xc3f4]        ; 005a42f6
        ;   Label: LAB_005a42f6
    FADD float ptr [0x005f8c80]         ; 005a42fc | DAT_005f8c80
    FSTP float ptr [EBX + 0xc3f4]       ; 005a4302
    MOV EAX,dword ptr [EBX + 0xc424]    ; 005a4308
        ;   Label: LAB_005a4308
    CMP EAX,0x2                         ; 005a430e
    JZ 0x005a49dd                       ; 005a4311
        ;   XREF to: 005a49dd (CONDITIONAL_JUMP)  ; LAB_005a49dd
    CMP EAX,0x3                         ; 005a4317
    JZ 0x005a49dd                       ; 005a431a
        ;   XREF to: 005a49dd (CONDITIONAL_JUMP)  ; LAB_005a49dd
    CMP EAX,0x1                         ; 005a4320
    JZ 0x005a49e4                       ; 005a4323
        ;   XREF to: 005a49e4 (CONDITIONAL_JUMP)  ; LAB_005a49e4
    LEA EDI,[ESP + 0x180]               ; 005a4329
    LEA ESI,[EBX + 0x20]                ; 005a4330
    MOVSD ES:EDI,ESI                    ; 005a4333
    MOVSD ES:EDI,ESI                    ; 005a4334
    MOVSD ES:EDI,ESI                    ; 005a4335
    CMP dword ptr [EBX + 0xc410],0x0    ; 005a4336
    JZ 0x005a4d42                       ; 005a433d
        ;   XREF to: 005a4d42 (CONDITIONAL_JUMP)  ; LAB_005a4d42
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 005a4343
    LEA EAX,[ESP + 0xa8]                ; 005a434d
        ;   Label: LAB_005a434d
    LEA ESI,[EBX + 0xc3f0]              ; 005a4354
    CMP EAX,ESI                         ; 005a435a
    JZ 0x005a437b                       ; 005a435c
        ;   XREF to: 005a437b (CONDITIONAL_JUMP)  ; LAB_005a437b
    MOV EAX,dword ptr [ESI]             ; 005a435e
    MOV dword ptr [ESP + 0xa8],EAX      ; 005a4360
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a4367
    MOV dword ptr [ESP + 0xac],EAX      ; 005a436a
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a4371
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a4374
    LEA ESI,[EBX + 0xc3f0]              ; 005a437b
        ;   Label: LAB_005a437b
    LEA EDI,[ESP + 0x84]                ; 005a4381
    LEA EDX,[ESP + 0x114]               ; 005a4388
    FLD float ptr [ESI + 0x4]           ; 005a438f
    FLD float ptr [ESI + 0x8]           ; 005a4392
    LEA EAX,[EBX + 0x20]                ; 005a4395
    FLD float ptr [ESI]                 ; 005a4398
    LEA ESI,[ESP + 0x144]               ; 005a439a
    FSUB float ptr [EAX]                ; 005a43a1
    FXCH ST2                            ; 005a43a3
    FSUB float ptr [EAX + 0x4]          ; 005a43a5
    FXCH                                ; 005a43a8
    FSUB float ptr [EAX + 0x8]          ; 005a43aa
    FXCH ST2                            ; 005a43ad
    FSTP float ptr [ESP + 0x144]        ; 005a43af
    FSTP float ptr [ESP + 0x148]        ; 005a43b6
    FSTP float ptr [ESP + 0x14c]        ; 005a43bd
    LEA EAX,[ESP + 0x84]                ; 005a43c4
    MOVSD ES:EDI,ESI                    ; 005a43cb
    MOVSD ES:EDI,ESI                    ; 005a43cc
    MOVSD ES:EDI,ESI                    ; 005a43cd
    CMP EDX,EAX                         ; 005a43ce
    JZ 0x005a43fc                       ; 005a43d0
        ;   XREF to: 005a43fc (CONDITIONAL_JUMP)  ; LAB_005a43fc
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a43d2
    MOV dword ptr [ESP + 0x114],EAX     ; 005a43d9
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a43e0
    MOV dword ptr [ESP + 0x118],EAX     ; 005a43e7
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a43ee
    MOV dword ptr [ESP + 0x11c],EAX     ; 005a43f5
    FLD float ptr [ESP + 0x118]         ; 005a43fc
        ;   Label: LAB_005a43fc
    FMUL ST0                            ; 005a4403
    FLD float ptr [ESP + 0x114]         ; 005a4405
    FMUL ST0                            ; 005a440c
    FADDP                               ; 005a440e
    FLD float ptr [ESP + 0x11c]         ; 005a4410
    FMUL ST0                            ; 005a4417
    FADDP                               ; 005a4419
    FSQRT                               ; 005a441b
    FCOMP float ptr [EBX + 0xc3fc]      ; 005a441d
    FNSTSW AX                           ; 005a4423
    SAHF                                ; 005a4425
    JC 0x005a4ddc                       ; 005a4426
        ;   XREF to: 005a4ddc (CONDITIONAL_JUMP)  ; LAB_005a4ddc
    LEA EAX,[ESP + 0xa8]                ; 005a442c
        ;   Label: LAB_005a442c
    LEA ESI,[EBX + 0xc3f0]              ; 005a4433
    CMP EAX,ESI                         ; 005a4439
    JZ 0x005a445a                       ; 005a443b
        ;   XREF to: 005a445a (CONDITIONAL_JUMP)  ; LAB_005a445a
    MOV EAX,dword ptr [ESI]             ; 005a443d
    MOV dword ptr [ESP + 0xa8],EAX      ; 005a443f
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a4446
    MOV dword ptr [ESP + 0xac],EAX      ; 005a4449
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a4450
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a4453
    FLD float ptr [EBX + 0xc414]        ; 005a445a
        ;   Label: LAB_005a445a
    FLDZ                                ; 005a4460
    FCOMPP                              ; 005a4462
    FNSTSW AX                           ; 005a4464
    SAHF                                ; 005a4466
    JNC 0x005a4525                      ; 005a4467
        ;   XREF to: 005a4525 (CONDITIONAL_JUMP)  ; LAB_005a4525
    FLD float ptr [EBX + 0xc414]        ; 005a446d
    FSUB float ptr [EBP + 0x18]         ; 005a4473
    FST float ptr [EBX + 0xc414]        ; 005a4476
    FLDZ                                ; 005a447c
    FCOMPP                              ; 005a447e
    FNSTSW AX                           ; 005a4480
    SAHF                                ; 005a4482
    JBE 0x005a448f                      ; 005a4483
        ;   XREF to: 005a448f (CONDITIONAL_JUMP)  ; LAB_005a448f
    MOV dword ptr [EBX + 0xc414],0x0    ; 005a4485
    MOV EAX,[0x00622580]                ; 005a448f | g_CNetGamePtr
        ;   Label: LAB_005a448f
    CMP dword ptr [EAX],0x0             ; 005a4494 | g_CNetGameInstance
    JZ 0x005a44bc                       ; 005a4497
        ;   XREF to: 005a44bc (CONDITIONAL_JUMP)  ; LAB_005a44bc
    MOV ECX,0x5f8c35                    ; 005a4499 | = "..\\core\\tvbat.cpp"
    MOV ESI,0x10a                       ; 005a449e
    PUSH 0x5f8c47                       ; 005a44a3 | = "CTVBat::process - can't follow orders..."
    MOV dword ptr [0x01d1d400],ECX      ; 005a44a8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005a44ae | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a44b4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a44b9
    MOV EAX,[0x01d06ab4]                ; 005a44bc | DAT_01d06ab4
        ;   Label: LAB_005a44bc
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a44c1
    LEA EAX,[ESP + 0xa8]                ; 005a44c8
    ADD ESI,0x20                        ; 005a44cf
    CMP EAX,ESI                         ; 005a44d2
    JZ 0x005a44f3                       ; 005a44d4
        ;   XREF to: 005a44f3 (CONDITIONAL_JUMP)  ; LAB_005a44f3
    MOV EAX,dword ptr [ESI]             ; 005a44d6
    MOV dword ptr [ESP + 0xa8],EAX      ; 005a44d8
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a44df
    MOV dword ptr [ESP + 0xac],EAX      ; 005a44e2
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a44e9
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a44ec
    FLD float ptr [EBX + 0xc40c]        ; 005a44f3
        ;   Label: LAB_005a44f3
    FADD double ptr [0x005f8c88]        ; 005a44f9 | DAT_005f8c88
    MOV EAX,[0x01d06ab4]                ; 005a44ff | DAT_01d06ab4
    FLD float ptr [ESP + 0xac]          ; 005a4504
    FXCH                                ; 005a450b
    FADD ST0,ST1                        ; 005a450d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a450f
    FSTP ST1                            ; 005a4516
    FSTP float ptr [ESP + 0xac]         ; 005a4518
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 005a451f
    FLD float ptr [ESP + 0xa8]          ; 005a4525
        ;   Label: LAB_005a4525
    FLD float ptr [ESP + 0xac]          ; 005a452c
    FLD float ptr [ESP + 0xb0]          ; 005a4533
    LEA EDI,[ESP + 0x15c]               ; 005a453a
    LEA EAX,[EBX + 0x20]                ; 005a4541
    LEA ESI,[ESP + 0xc0]                ; 005a4544
    LEA EDX,[ESP + 0x15c]               ; 005a454b
    FXCH ST2                            ; 005a4552
    FSUB float ptr [EAX]                ; 005a4554
    FXCH                                ; 005a4556
    FSUB float ptr [EAX + 0x4]          ; 005a4558
    FXCH ST2                            ; 005a455b
    FSUB float ptr [EAX + 0x8]          ; 005a455d
    FXCH                                ; 005a4560
    FSTP float ptr [ESP + 0xc0]         ; 005a4562
    FXCH                                ; 005a4569
    FSTP float ptr [ESP + 0xc4]         ; 005a456b
    FSTP float ptr [ESP + 0xc8]         ; 005a4572
    LEA EAX,[ESP + 0x114]               ; 005a4579
    MOVSD ES:EDI,ESI                    ; 005a4580
    MOVSD ES:EDI,ESI                    ; 005a4581
    MOVSD ES:EDI,ESI                    ; 005a4582
    CMP EAX,EDX                         ; 005a4583
    JZ 0x005a45b1                       ; 005a4585
        ;   XREF to: 005a45b1 (CONDITIONAL_JUMP)  ; LAB_005a45b1
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005a4587
    MOV dword ptr [ESP + 0x114],EAX     ; 005a458e
    MOV EAX,dword ptr [ESP + 0x160]     ; 005a4595
    MOV dword ptr [ESP + 0x118],EAX     ; 005a459c
    MOV EAX,dword ptr [ESP + 0x164]     ; 005a45a3
    MOV dword ptr [ESP + 0x11c],EAX     ; 005a45aa
    FLD float ptr [ESP + 0x11c]         ; 005a45b1
        ;   Label: LAB_005a45b1
    FLD float ptr [ESP + 0x114]         ; 005a45b8
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005a45bf
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FLD float ptr [ESP + 0x11c]         ; 005a45c4
    FMUL ST0                            ; 005a45cb
    FLD float ptr [ESP + 0x114]         ; 005a45cd
    FMUL ST0                            ; 005a45d4
    FADDP                               ; 005a45d6
    FSQRT                               ; 005a45d8
    FLD float ptr [ESP + 0x118]         ; 005a45da
    FXCH                                ; 005a45e1
    FST float ptr [ESP + 0xc]           ; 005a45e3
    FXCH                                ; 005a45e7
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005a45e9
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005a45ee
    FXCH                                ; 005a45f4
    FSTP float ptr [ESP + 0x1d0]        ; 005a45f6
    FCHS                                ; 005a45fd
    FSTP float ptr [ESP + 0x1dc]        ; 005a45ff
    TEST EDI,EDI                        ; 005a4606
    JZ 0x005a4754                       ; 005a4608
        ;   XREF to: 005a4754 (CONDITIONAL_JUMP)  ; LAB_005a4754
    CMP dword ptr [EBX + 0xc410],0x0    ; 005a460e
    JZ 0x005a4754                       ; 005a4615
        ;   XREF to: 005a4754 (CONDITIONAL_JUMP)  ; LAB_005a4754
    LEA EAX,[ESP + 0x50]                ; 005a461b
    PUSH EAX                            ; 005a461f
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 005a4620
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005a4625
    LEA ESI,[ESP + 0x50]                ; 005a4628
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005a462c
    PUSH ESI                            ; 005a4632
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a4633
    PUSH EAX                            ; 005a4639
    LEA ESI,[EBX + 0x20]                ; 005a463a
    LEA EDI,[ESP + 0x158]               ; 005a463d
    CALL dword ptr [EDX + 0x3c]         ; 005a4644
    FLD float ptr [ESI + 0x4]           ; 005a4647
    FLD float ptr [ESI + 0x8]           ; 005a464a
    FLD float ptr [ESI]                 ; 005a464d
    LEA EDX,[ESP + 0x11c]               ; 005a464f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005a4656
    ADD ESP,0x8                         ; 005a465c
    LEA ESI,[ESP + 0x108]               ; 005a465f
    FSUB float ptr [EAX + 0x20]         ; 005a4666
    FXCH ST2                            ; 005a4669
    FSUB float ptr [EAX + 0x24]         ; 005a466b
    FXCH                                ; 005a466e
    FSUB float ptr [EAX + 0x28]         ; 005a4670
    FXCH ST2                            ; 005a4673
    FSTP float ptr [ESP + 0x108]        ; 005a4675
    FSTP float ptr [ESP + 0x10c]        ; 005a467c
    FSTP float ptr [ESP + 0x110]        ; 005a4683
    LEA EAX,[ESP + 0x150]               ; 005a468a
    MOVSD ES:EDI,ESI                    ; 005a4691
    MOVSD ES:EDI,ESI                    ; 005a4692
    MOVSD ES:EDI,ESI                    ; 005a4693
    CMP EDX,EAX                         ; 005a4694
    JZ 0x005a46c2                       ; 005a4696
        ;   XREF to: 005a46c2 (CONDITIONAL_JUMP)  ; LAB_005a46c2
    MOV EAX,dword ptr [ESP + 0x150]     ; 005a4698
    MOV dword ptr [ESP + 0x114],EAX     ; 005a469f
    MOV EAX,dword ptr [ESP + 0x154]     ; 005a46a6
    MOV dword ptr [ESP + 0x118],EAX     ; 005a46ad
    MOV EAX,dword ptr [ESP + 0x158]     ; 005a46b4
    MOV dword ptr [ESP + 0x11c],EAX     ; 005a46bb
    FLD float ptr [ESP + 0x118]         ; 005a46c2
        ;   Label: LAB_005a46c2
    FCOMP float ptr [ESP + 0x64]        ; 005a46c9
    FNSTSW AX                           ; 005a46cd
    SAHF                                ; 005a46cf
    JC 0x005a4754                       ; 005a46d0
        ;   XREF to: 005a4754 (CONDITIONAL_JUMP)  ; LAB_005a4754
    FLD float ptr [ESP + 0x118]         ; 005a46d6
    FCOMP float ptr [ESP + 0x68]        ; 005a46dd
    FNSTSW AX                           ; 005a46e1
    SAHF                                ; 005a46e3
    JA 0x005a4754                       ; 005a46e4
        ;   XREF to: 005a4754 (CONDITIONAL_JUMP)  ; LAB_005a4754
    FLD float ptr [ESP + 0xc]           ; 005a46e6
    FCOMP double ptr [0x005f8c98]       ; 005a46ea | DAT_005f8c98
    FNSTSW AX                           ; 005a46f0
    SAHF                                ; 005a46f2
    JNC 0x005a4754                      ; 005a46f3
        ;   XREF to: 005a4754 (CONDITIONAL_JUMP)  ; LAB_005a4754
    LEA EAX,[ESP + 0x14]                ; 005a46f5
    PUSH EAX                            ; 005a46f9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005a46fa
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EDX,0x3f800000                  ; 005a46ff
    ADD ESP,0x4                         ; 005a4704
    LEA ESI,[ESP + 0x14]                ; 005a4707
    MOV dword ptr [ESP + 0x18],EDX      ; 005a470b
    MOV dword ptr [ESP + 0x48],EBX      ; 005a470f
    MOV dword ptr [ESP + 0x4c],EBX      ; 005a4713
    PUSH ESI                            ; 005a4717
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005a4718
    PUSH EAX                            ; 005a471e
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a471f
    CALL dword ptr [EDX + 0x108]        ; 005a4725
    ADD ESP,0x8                         ; 005a472b
    FLD float ptr [ESP + 0x18]          ; 005a472e
    FLDZ                                ; 005a4732
    FCOMPP                              ; 005a4734
    FNSTSW AX                           ; 005a4736
    SAHF                                ; 005a4738
    JNC 0x005a4754                      ; 005a4739
        ;   XREF to: 005a4754 (CONDITIONAL_JUMP)  ; LAB_005a4754
    PUSH 0x0                            ; 005a473b
    PUSH 0x3                            ; 005a473d
    PUSH 0x0                            ; 005a473f
    LEA EAX,[EBX + 0x20]                ; 005a4741
    PUSH EAX                            ; 005a4744
    MOV ECX,dword ptr [0x0061dca4]      ; 005a4745 | g_CGorePtr
    PUSH ECX                            ; 005a474b
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 005a474c
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005a4751
    FLD float ptr [EBX + 0x30]          ; 005a4754
        ;   Label: LAB_005a4754
    FLD ST0                             ; 005a4757
    FSIN                                ; 005a4759
    FLD float ptr [EBX + 0x34]          ; 005a475b
    FLD ST0                             ; 005a475e
    FSIN                                ; 005a4760
    FXCH ST3                            ; 005a4762
    FCOS                                ; 005a4764
    FXCH                                ; 005a4766
    FCOS                                ; 005a4768
    FXCH ST3                            ; 005a476a
    FMUL ST1                            ; 005a476c
    FXCH ST3                            ; 005a476e
    FMULP                               ; 005a4770
    FLD float ptr [ESP + 0x1d0]         ; 005a4772
    FSUB float ptr [EBX + 0x34]         ; 005a4779
    FXCH ST2                            ; 005a477c
    FCHS                                ; 005a477e
    FSTP float ptr [ESP + 0x1b4]        ; 005a4780
    FXCH ST2                            ; 005a4787
    FSTP float ptr [ESP + 0x1c8]        ; 005a4789
    FXCH                                ; 005a4790
    FSTP float ptr [ESP + 0x1cc]        ; 005a4792
    SUB ESP,0x4                         ; 005a4799
    FSTP float ptr [ESP]                ; 005a479c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a479f
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005a47a4
    FLD float ptr [ESP + 0x1e4]         ; 005a47ab
    ADD ESP,0x4                         ; 005a47b2
    FST float ptr [ESP + 0x1d0]         ; 005a47b5
    FMUL float ptr [EBP + 0x18]         ; 005a47bc
    FMUL float ptr [EBX + 0xc404]       ; 005a47bf
    FLD float ptr [ESP + 0x1dc]         ; 005a47c5
    FSUB float ptr [EBX + 0x30]         ; 005a47cc
    FXCH                                ; 005a47cf
    FADD float ptr [EBX + 0x34]         ; 005a47d1
    SUB ESP,0x4                         ; 005a47d4
    FSTP float ptr [EBX + 0x34]         ; 005a47d7
    FSTP float ptr [ESP]                ; 005a47da
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 005a47dd
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005a47e2
    FLD float ptr [ESP + 0x1e4]         ; 005a47e9
    ADD ESP,0x4                         ; 005a47f0
    FLD float ptr [EBX + 0xc408]        ; 005a47f3
    FMUL float ptr [ESP + 0x1c8]        ; 005a47f9
    FLD float ptr [EBX + 0xc408]        ; 005a4800
    FMUL float ptr [ESP + 0x1b4]        ; 005a4806
    FLD float ptr [ESP + 0x1c8]         ; 005a480d
    FMUL float ptr [EBX + 0xc408]       ; 005a4814
    FLD float ptr [ESP + 0x1b4]         ; 005a481a
    FMUL float ptr [EBX + 0xc408]       ; 005a4821
    FLD float ptr [ESP + 0x1cc]         ; 005a4827
    FMUL float ptr [EBX + 0xc408]       ; 005a482e
    FXCH ST5                            ; 005a4834
    FST float ptr [ESP + 0x1dc]         ; 005a4836
    FMUL float ptr [EBP + 0x18]         ; 005a483d
    FLD float ptr [ESP + 0x1d0]         ; 005a4840
    FCHS                                ; 005a4847
    FMUL double ptr [0x005f8ca0]        ; 005a4849 | DAT_005f8ca0
    FXCH ST3                            ; 005a484f
    FMUL float ptr [EBP + 0x18]         ; 005a4851
    FXCH ST2                            ; 005a4854
    FMUL float ptr [EBP + 0x18]         ; 005a4856
    FXCH ST6                            ; 005a4859
    FMUL float ptr [EBP + 0x18]         ; 005a485b
    FXCH                                ; 005a485e
    FMUL float ptr [EBX + 0xc404]       ; 005a4860
    FXCH ST5                            ; 005a4866
    FSTP float ptr [EBX + 0xc418]       ; 005a4868
    FLD float ptr [EBX + 0xc408]        ; 005a486e
    FMUL float ptr [ESP + 0x1cc]        ; 005a4874
    LEA EDI,[ESP + 0x138]               ; 005a487b
    LEA ESI,[ESP + 0x78]                ; 005a4882
    LEA EAX,[EBX + 0x20]                ; 005a4886
    FXCH ST4                            ; 005a4889
    FSTP float ptr [EBX + 0xc41c]       ; 005a488b
    FXCH ST3                            ; 005a4891
    FSTP float ptr [EBX + 0xc420]       ; 005a4893
    FXCH                                ; 005a4899
    FSTP float ptr [EBX + 0x38]         ; 005a489b
    FADD float ptr [EBX + 0x20]         ; 005a489e
    FXCH ST3                            ; 005a48a1
    FADD float ptr [EBX + 0x24]         ; 005a48a3
    FXCH                                ; 005a48a6
    FADD float ptr [EBX + 0x28]         ; 005a48a8
    FXCH ST2                            ; 005a48ab
    FADD float ptr [EBX + 0x30]         ; 005a48ad
    FXCH ST3                            ; 005a48b0
    FSTP float ptr [EBX + 0x20]         ; 005a48b2
    FSTP float ptr [EBX + 0x24]         ; 005a48b5
    FSTP float ptr [EBX + 0x28]         ; 005a48b8
    FSTP float ptr [EBX + 0x30]         ; 005a48bb
    FLD float ptr [EAX]                 ; 005a48be
    FLD float ptr [EAX + 0x4]           ; 005a48c0
    FLD float ptr [EAX + 0x8]           ; 005a48c3
    FXCH ST2                            ; 005a48c6
    FSUB float ptr [ESP + 0x180]        ; 005a48c8
    FXCH                                ; 005a48cf
    FSUB float ptr [ESP + 0x184]        ; 005a48d1
    FXCH ST2                            ; 005a48d8
    FSUB float ptr [ESP + 0x188]        ; 005a48da
    FXCH                                ; 005a48e1
    FSTP float ptr [ESP + 0x78]         ; 005a48e3
    FXCH                                ; 005a48e7
    FSTP float ptr [ESP + 0x7c]         ; 005a48e9
    FSTP float ptr [ESP + 0x80]         ; 005a48ed
    MOVSD ES:EDI,ESI                    ; 005a48f4
    MOVSD ES:EDI,ESI                    ; 005a48f5
    MOVSD ES:EDI,ESI                    ; 005a48f6
    FLD float ptr [ESP + 0x13c]         ; 005a48f7
    FMUL double ptr [0x005f8c88]        ; 005a48fe | DAT_005f8c88
    FDIV float ptr [EBP + 0x18]         ; 005a4904
    FADD double ptr [0x005f8ca8]        ; 005a4907 | DAT_005f8ca8
    FST float ptr [ESP + 0x8]           ; 005a490d
    FCOMP double ptr [0x005f8cb0]       ; 005a4911 | DAT_005f8cb0
    FNSTSW AX                           ; 005a4917
    SAHF                                ; 005a4919
    JNC 0x005a4924                      ; 005a491a
        ;   XREF to: 005a4924 (CONDITIONAL_JUMP)  ; LAB_005a4924
    MOV dword ptr [ESP + 0x8],0x41200000 ; 005a491c
    FLD float ptr [ESP + 0x8]           ; 005a4924
        ;   Label: LAB_005a4924
    FCOMP double ptr [0x005f8cb8]       ; 005a4928 | DAT_005f8cb8
    FNSTSW AX                           ; 005a492e
    SAHF                                ; 005a4930
    JBE 0x005a493b                      ; 005a4931
        ;   XREF to: 005a493b (CONDITIONAL_JUMP)  ; LAB_005a493b
    MOV dword ptr [ESP + 0x8],0x42700000 ; 005a4933
    FLD float ptr [ESP + 0x8]           ; 005a493b
        ;   Label: LAB_005a493b
    FSUB float ptr [EBX + 0xc3ec]       ; 005a493f
    FMUL double ptr [0x005f8cc0]        ; 005a4945 | DAT_005f8cc0
    FLD float ptr [EBX + 0xc3ec]        ; 005a494b
    FXCH                                ; 005a4951
    FADD ST0,ST1                        ; 005a4953
    FLD float ptr [EBP + 0x18]          ; 005a4955
    FXCH                                ; 005a4958
    FSTP ST2                            ; 005a495a
    FXCH                                ; 005a495c
    FSTP float ptr [EBX + 0xc3ec]       ; 005a495e
    FMUL float ptr [EBX + 0xc3ec]       ; 005a4964
    FMUL float ptr [EBX + 0xc3e8]       ; 005a496a
    LEA EAX,[EBX + 0xc26c]              ; 005a4970
    FADD float ptr [EBX + 0xc268]       ; 005a4976
    PUSH EAX                            ; 005a497c
    FSTP float ptr [EBX + 0xc268]       ; 005a497d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a4983
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a4988
    MOV EDX,dword ptr [EAX + 0x100]     ; 005a498b
    MOV dword ptr [ESP + 0x1e0],EDX     ; 005a4991
    FILD dword ptr [ESP + 0x1e0]        ; 005a4998
    FCOMP float ptr [EBX + 0xc268]      ; 005a499f
    FNSTSW AX                           ; 005a49a5
    SAHF                                ; 005a49a7
    JA 0x005a4dfb                       ; 005a49a8
        ;   XREF to: 005a4dfb (CONDITIONAL_JUMP)  ; LAB_005a4dfb
    MOV dword ptr [EBX + 0xc268],0x0    ; 005a49ae
    CMP byte ptr [EBX + 0xc428],0x0     ; 005a49b8
        ;   Label: LAB_005a49b8
    JZ 0x005a49dd                       ; 005a49bf
        ;   XREF to: 005a49dd (CONDITIONAL_JUMP)  ; LAB_005a49dd
    FLD float ptr [EBX + 0xc498]        ; 005a49c1
    FSUB float ptr [EBP + 0x18]         ; 005a49c7
    FST float ptr [EBX + 0xc498]        ; 005a49ca
    FLDZ                                ; 005a49d0
    FCOMPP                              ; 005a49d2
    FNSTSW AX                           ; 005a49d4
    SAHF                                ; 005a49d6
    JNC 0x005a4e26                      ; 005a49d7
        ;   XREF to: 005a4e26 (CONDITIONAL_JUMP)  ; LAB_005a4e26
    MOV ESP,EBP                         ; 005a49dd
        ;   Label: LAB_005a49dd
    POP EBP                             ; 005a49df
    POP EDI                             ; 005a49e0
    POP ESI                             ; 005a49e1
    POP EBX                             ; 005a49e2
    RET                                 ; 005a49e3
    FLD float ptr [EBP + 0x18]          ; 005a49e4
        ;   Label: LAB_005a49e4
    FLD ST0                             ; 005a49e7
    LEA EDI,[ESP + 0x9c]                ; 005a49e9
    LEA ESI,[EBX + 0x20]                ; 005a49f0
    FMUL double ptr [0x005f8cc8]        ; 005a49f3 | DAT_005f8cc8
    MOVSD ES:EDI,ESI                    ; 005a49f9
    MOVSD ES:EDI,ESI                    ; 005a49fa
    MOVSD ES:EDI,ESI                    ; 005a49fb
    FLD float ptr [EBX + 0xc41c]        ; 005a49fc
    FXCH                                ; 005a4a02
    FADD ST0,ST1                        ; 005a4a04
    LEA EAX,[EBX + 0xc418]              ; 005a4a06
    FSTP ST1                            ; 005a4a0c
    FSTP float ptr [EBX + 0xc41c]       ; 005a4a0e
    FLD float ptr [EAX]                 ; 005a4a14
    FMUL ST1                            ; 005a4a16
    FLD float ptr [EAX + 0x4]           ; 005a4a18
    FMUL ST2                            ; 005a4a1b
    FLD float ptr [EAX + 0x8]           ; 005a4a1d
    FMUL ST3                            ; 005a4a20
    PUSH 0x0                            ; 005a4a22
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005a4a24
    LEA EDI,[ESP + 0xf4]                ; 005a4a2b
    LEA ESI,[ESP + 0x16c]               ; 005a4a32
    LEA EAX,[EBX + 0x20]                ; 005a4a39
    FXCH ST2                            ; 005a4a3c
    FSTP float ptr [ESP + 0x16c]        ; 005a4a3e
    FSTP float ptr [ESP + 0x170]        ; 005a4a45
    FSTP float ptr [ESP + 0x174]        ; 005a4a4c
    MOVSD ES:EDI,ESI                    ; 005a4a53
    MOVSD ES:EDI,ESI                    ; 005a4a54
    MOVSD ES:EDI,ESI                    ; 005a4a55
    MOV dword ptr [ESP + 0x1dc],EAX     ; 005a4a56
    FLD float ptr [EAX]                 ; 005a4a5d
    FLD float ptr [EAX + 0x4]           ; 005a4a5f
    FLD float ptr [EAX + 0x8]           ; 005a4a62
    FXCH ST2                            ; 005a4a65
    FADD float ptr [ESP + 0xf4]         ; 005a4a67
    FXCH                                ; 005a4a6e
    FADD float ptr [ESP + 0xf8]         ; 005a4a70
    FXCH ST2                            ; 005a4a77
    FADD float ptr [ESP + 0xfc]         ; 005a4a79
    FXCH                                ; 005a4a80
    FSTP float ptr [EAX]                ; 005a4a82
    FXCH                                ; 005a4a84
    FSTP float ptr [EAX + 0x4]          ; 005a4a86
    FSTP float ptr [EAX + 0x8]          ; 005a4a89
    LEA EAX,[ESP + 0xd0]                ; 005a4a8c
    FMUL float ptr [EBX + 0xc404]       ; 005a4a93
    PUSH EAX                            ; 005a4a99
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 005a4a9a
    LEA EAX,[ESP + 0xa4]                ; 005a4aa1
    PUSH EDX                            ; 005a4aa8
    FMUL float ptr [0x005f8cd0]         ; 005a4aa9 | DAT_005f8cd0
    PUSH EAX                            ; 005a4aaf
    FADD float ptr [EBX + 0x38]         ; 005a4ab0
    PUSH 0x1fe5c1c                      ; 005a4ab3 | g_CDemonRaytraceInstance
    FSTP float ptr [EBX + 0x38]         ; 005a4ab8
    CALL core_dtrace.cpp_FUN_0048b150   ; 005a4abb
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b150()
    MOV dword ptr [ESP + 0x1f4],EAX     ; 005a4ac0
    FLD float ptr [ESP + 0x1f4]         ; 005a4ac7
    ADD ESP,0x14                        ; 005a4ace
    FLDZ                                ; 005a4ad1
    FXCH                                ; 005a4ad3
    FST float ptr [ESP + 0x10]          ; 005a4ad5
    FSTP double ptr [ESP]               ; 005a4ad9
    FCOMP double ptr [ESP]              ; 005a4adc
    FNSTSW AX                           ; 005a4adf
    SAHF                                ; 005a4ae1
    JA 0x005a4c75                       ; 005a4ae2
        ;   XREF to: 005a4c75 (CONDITIONAL_JUMP)  ; LAB_005a4c75
    FLD1                                ; 005a4ae8
    FCOMP double ptr [ESP]              ; 005a4aea
    FNSTSW AX                           ; 005a4aed
    SAHF                                ; 005a4aef
    JBE 0x005a4c75                      ; 005a4af0
        ;   XREF to: 005a4c75 (CONDITIONAL_JUMP)  ; LAB_005a4c75
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 005a4af6
    LEA EDI,[ESP + 0xe4]                ; 005a4afd
    LEA ESI,[ESP + 0x12c]               ; 005a4b04
    FLD float ptr [EAX]                 ; 005a4b0b
    FLD float ptr [EAX + 0x4]           ; 005a4b0d
    FLD float ptr [EAX + 0x8]           ; 005a4b10
    FXCH ST2                            ; 005a4b13
    FSUB float ptr [ESP + 0x9c]         ; 005a4b15
    FXCH                                ; 005a4b1c
    FSUB float ptr [ESP + 0xa0]         ; 005a4b1e
    FXCH ST2                            ; 005a4b25
    FSUB float ptr [ESP + 0xa4]         ; 005a4b27
    FXCH                                ; 005a4b2e
    FSTP float ptr [ESP + 0x12c]        ; 005a4b30
    FXCH                                ; 005a4b37
    FSTP float ptr [ESP + 0x130]        ; 005a4b39
    FSTP float ptr [ESP + 0x134]        ; 005a4b40
    MOVSD ES:EDI,ESI                    ; 005a4b47
    MOVSD ES:EDI,ESI                    ; 005a4b48
    MOVSD ES:EDI,ESI                    ; 005a4b49
    FLD float ptr [ESP + 0x10]          ; 005a4b4a
    FLD float ptr [ESP + 0xe4]          ; 005a4b4e
    FMUL ST1                            ; 005a4b55
    FLD float ptr [ESP + 0xe8]          ; 005a4b57
    FMUL ST2                            ; 005a4b5e
    FLD float ptr [ESP + 0xec]          ; 005a4b60
    FMULP ST3                           ; 005a4b67
    LEA EDI,[ESP + 0x120]               ; 005a4b69
    LEA ESI,[ESP + 0xb4]                ; 005a4b70
    FXCH                                ; 005a4b77
    FSTP float ptr [ESP + 0xb4]         ; 005a4b79
    FSTP float ptr [ESP + 0xb8]         ; 005a4b80
    FSTP float ptr [ESP + 0xbc]         ; 005a4b87
    MOVSD ES:EDI,ESI                    ; 005a4b8e
    MOVSD ES:EDI,ESI                    ; 005a4b8f
    MOVSD ES:EDI,ESI                    ; 005a4b90
    FLD float ptr [0x005f8cd4]          ; 005a4b91 | DAT_005f8cd4
    FLD float ptr [ESP + 0x120]         ; 005a4b97
    FMUL ST1                            ; 005a4b9e
    FLD float ptr [ESP + 0x124]         ; 005a4ba0
    FMUL ST2                            ; 005a4ba7
    FLD float ptr [ESP + 0x128]         ; 005a4ba9
    FMULP ST3                           ; 005a4bb0
    FLD float ptr [ESP + 0x9c]          ; 005a4bb2
    FLD float ptr [ESP + 0xa0]          ; 005a4bb9
    LEA EDI,[ESP + 0xfc]                ; 005a4bc0
    LEA ESI,[ESP + 0x18c]               ; 005a4bc7
    FXCH ST3                            ; 005a4bce
    FSTP float ptr [ESP + 0x18c]        ; 005a4bd0
    FXCH                                ; 005a4bd7
    FSTP float ptr [ESP + 0x190]        ; 005a4bd9
    FXCH ST2                            ; 005a4be0
    FSTP float ptr [ESP + 0x194]        ; 005a4be2
    MOVSD ES:EDI,ESI                    ; 005a4be9
    MOVSD ES:EDI,ESI                    ; 005a4bea
    MOVSD ES:EDI,ESI                    ; 005a4beb
    FLD float ptr [ESP + 0xa4]          ; 005a4bec
    LEA EDI,[ESP + 0x198]               ; 005a4bf3
    LEA ESI,[ESP + 0x90]                ; 005a4bfa
    FXCH ST2                            ; 005a4c01
    FADD float ptr [ESP + 0xfc]         ; 005a4c03
    FXCH                                ; 005a4c0a
    FADD float ptr [ESP + 0x100]        ; 005a4c0c
    FXCH ST2                            ; 005a4c13
    FADD float ptr [ESP + 0x104]        ; 005a4c15
    FXCH                                ; 005a4c1c
    FSTP float ptr [ESP + 0x90]         ; 005a4c1e
    FXCH                                ; 005a4c25
    FSTP float ptr [ESP + 0x94]         ; 005a4c27
    FSTP float ptr [ESP + 0x98]         ; 005a4c2e
    MOVSD ES:EDI,ESI                    ; 005a4c35
    MOVSD ES:EDI,ESI                    ; 005a4c36
    MOVSD ES:EDI,ESI                    ; 005a4c37
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 005a4c38
    MOV EAX,dword ptr [ESP + 0x198]     ; 005a4c3f
    MOV dword ptr [EDX],EAX             ; 005a4c46
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005a4c48
    MOV dword ptr [EDX + 0x4],EAX       ; 005a4c4f
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005a4c52
    MOV dword ptr [EDX + 0x8],EAX       ; 005a4c59
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005a4c5c
    MOV dword ptr [EAX + 0x8],0x0       ; 005a4c63
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a4c6a
    MOV dword ptr [EAX + 0x4],EDX       ; 005a4c6d
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a4c70
    MOV dword ptr [EAX],EDX             ; 005a4c73
    FLD float ptr [ESP + 0x9c]          ; 005a4c75
        ;   Label: LAB_005a4c75
    FLD float ptr [ESP + 0xa0]          ; 005a4c7c
    FLD float ptr [ESP + 0xa4]          ; 005a4c83
    LEA EDI,[ESP + 0xd8]                ; 005a4c8a
    LEA EAX,[EBX + 0x20]                ; 005a4c91
    LEA ESI,[ESP + 0x174]               ; 005a4c94
    LEA EDX,[ESP + 0x114]               ; 005a4c9b
    FXCH ST2                            ; 005a4ca2
    FSUB float ptr [EAX]                ; 005a4ca4
    FXCH                                ; 005a4ca6
    FSUB float ptr [EAX + 0x4]          ; 005a4ca8
    FXCH ST2                            ; 005a4cab
    FSUB float ptr [EAX + 0x8]          ; 005a4cad
    FXCH                                ; 005a4cb0
    FSTP float ptr [ESP + 0x174]        ; 005a4cb2
    FXCH                                ; 005a4cb9
    FSTP float ptr [ESP + 0x178]        ; 005a4cbb
    FSTP float ptr [ESP + 0x17c]        ; 005a4cc2
    LEA EAX,[ESP + 0xd8]                ; 005a4cc9
    MOVSD ES:EDI,ESI                    ; 005a4cd0
    MOVSD ES:EDI,ESI                    ; 005a4cd1
    MOVSD ES:EDI,ESI                    ; 005a4cd2
    CMP EDX,EAX                         ; 005a4cd3
    JZ 0x005a4d01                       ; 005a4cd5
        ;   XREF to: 005a4d01 (CONDITIONAL_JUMP)  ; LAB_005a4d01
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005a4cd7
    MOV dword ptr [ESP + 0x114],EAX     ; 005a4cde
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005a4ce5
    MOV dword ptr [ESP + 0x118],EAX     ; 005a4cec
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005a4cf3
    MOV dword ptr [ESP + 0x11c],EAX     ; 005a4cfa
    FLD float ptr [ESP + 0x118]         ; 005a4d01
        ;   Label: LAB_005a4d01
    FMUL ST0                            ; 005a4d08
    FLD float ptr [ESP + 0x114]         ; 005a4d0a
    FMUL ST0                            ; 005a4d11
    FADDP                               ; 005a4d13
    FLD float ptr [ESP + 0x11c]         ; 005a4d15
    FMUL ST0                            ; 005a4d1c
    FADDP                               ; 005a4d1e
    FSQRT                               ; 005a4d20
    FCOMP double ptr [0x005f8cd8]       ; 005a4d22 | DAT_005f8cd8
    FNSTSW AX                           ; 005a4d28
    SAHF                                ; 005a4d2a
    JNC 0x005a49dd                      ; 005a4d2b
        ;   XREF to: 005a49dd (CONDITIONAL_JUMP)  ; LAB_005a49dd
    MOV dword ptr [EBX + 0xc424],0x2    ; 005a4d31
    MOV ESP,EBP                         ; 005a4d3b
    POP EBP                             ; 005a4d3d
    POP EDI                             ; 005a4d3e
    POP ESI                             ; 005a4d3f
    POP EBX                             ; 005a4d40
    RET                                 ; 005a4d41
    MOV EAX,[0x01d06ab4]                ; 005a4d42 | DAT_01d06ab4
        ;   Label: LAB_005a4d42
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a4d47
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 005a4d4e
    TEST EAX,EAX                        ; 005a4d54
    JZ 0x005a434d                       ; 005a4d56
        ;   XREF to: 005a434d (CONDITIONAL_JUMP)  ; LAB_005a434d
    LEA ESI,[EAX + 0x20]                ; 005a4d5c
    LEA EAX,[ESP + 0xa8]                ; 005a4d5f
    CMP EAX,ESI                         ; 005a4d66
    JNZ 0x005a4dbd                      ; 005a4d68
        ;   XREF to: 005a4dbd (CONDITIONAL_JUMP)  ; LAB_005a4dbd
    FLD float ptr [EBX + 0xc40c]        ; 005a4d6a
        ;   Label: LAB_005a4d6a
    FADD double ptr [0x005f8c88]        ; 005a4d70 | DAT_005f8c88
    FADD float ptr [ESP + 0xac]         ; 005a4d76
    FSTP float ptr [ESP + 0xac]         ; 005a4d7d
    MOV EAX,dword ptr [EBX + 0x6c]      ; 005a4d84
    MOV EDX,EAX                         ; 005a4d87
    MOV ESI,0x8                         ; 005a4d89
    SAR EDX,0x1f                        ; 005a4d8e
    IDIV ESI                            ; 005a4d91
    SUB EDX,0x4                         ; 005a4d93
    MOV dword ptr [ESP + 0x1e0],EDX     ; 005a4d96
    FILD dword ptr [ESP + 0x1e0]        ; 005a4d9d
    FMUL double ptr [0x005f8c90]        ; 005a4da4 | DAT_005f8c90
    FADD float ptr [ESP + 0xac]         ; 005a4daa
    FSTP float ptr [ESP + 0xac]         ; 005a4db1
    JMP 0x005a437b                      ; 005a4db8
        ;   XREF to: 005a437b (UNCONDITIONAL_JUMP)  ; LAB_005a437b
    MOV EAX,dword ptr [ESI]             ; 005a4dbd
        ;   Label: LAB_005a4dbd
    MOV dword ptr [ESP + 0xa8],EAX      ; 005a4dbf
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a4dc6
    MOV dword ptr [ESP + 0xac],EAX      ; 005a4dc9
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a4dd0
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a4dd3
    JMP 0x005a4d6a                      ; 005a4dda
        ;   XREF to: 005a4d6a (UNCONDITIONAL_JUMP)  ; LAB_005a4d6a
    FLD float ptr [ESP + 0x118]         ; 005a4ddc
        ;   Label: LAB_005a4ddc
    FABS                                ; 005a4de3
    FLD float ptr [EBX + 0xc400]        ; 005a4de5
    FCOMPP                              ; 005a4deb
    FNSTSW AX                           ; 005a4ded
    SAHF                                ; 005a4def
    JBE 0x005a442c                      ; 005a4df0
        ;   XREF to: 005a442c (CONDITIONAL_JUMP)  ; LAB_005a442c
    JMP 0x005a445a                      ; 005a4df6
        ;   XREF to: 005a445a (UNCONDITIONAL_JUMP)  ; LAB_005a445a
    FLDZ                                ; 005a4dfb
        ;   Label: LAB_005a4dfb
    FCOMP float ptr [EBX + 0xc268]      ; 005a4dfd
    FNSTSW AX                           ; 005a4e03
    SAHF                                ; 005a4e05
    JBE 0x005a49b8                      ; 005a4e06
        ;   XREF to: 005a49b8 (CONDITIONAL_JUMP)  ; LAB_005a49b8
    DEC EDX                             ; 005a4e0c
    MOV dword ptr [ESP + 0x1e0],EDX     ; 005a4e0d
    FILD dword ptr [ESP + 0x1e0]        ; 005a4e14
    FSTP float ptr [EBX + 0xc268]       ; 005a4e1b
    JMP 0x005a49b8                      ; 005a4e21
        ;   XREF to: 005a49b8 (UNCONDITIONAL_JUMP)  ; LAB_005a49b8
    MOV EAX,dword ptr [EBX + 0xc494]    ; 005a4e26
        ;   Label: LAB_005a4e26
    PUSH EAX                            ; 005a4e2c
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005a4e2d
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005a4e32
    TEST EAX,EAX                        ; 005a4e35
    JNZ 0x005a4e7f                      ; 005a4e37
        ;   XREF to: 005a4e7f (CONDITIONAL_JUMP)  ; LAB_005a4e7f
    PUSH 0x42480000                     ; 005a4e39
    SUB ESP,0x8                         ; 005a4e3e
    FLD float ptr [EBX + 0x28]          ; 005a4e41
    FSTP double ptr [ESP]               ; 005a4e44
    SUB ESP,0x8                         ; 005a4e47
    FLD float ptr [EBX + 0x24]          ; 005a4e4a
    FSTP double ptr [ESP]               ; 005a4e4d
    SUB ESP,0x8                         ; 005a4e50
    FLD float ptr [EBX + 0x20]          ; 005a4e53
    FSTP double ptr [ESP]               ; 005a4e56
    CALL sound_sndmain.cpp_FUN_00574010 ; 005a4e59
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00574010()
    ADD ESP,0x1c                        ; 005a4e5e
    TEST EAX,EAX                        ; 005a4e61
    JZ 0x005a4e7f                       ; 005a4e63
        ;   XREF to: 005a4e7f (CONDITIONAL_JUMP)  ; LAB_005a4e7f
    LEA EDX,[EBX + 0xc428]              ; 005a4e65
    PUSH EDX                            ; 005a4e6b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a4e6c
    PUSH EBX                            ; 005a4e72
    CALL dword ptr [EAX + 0x30]         ; 005a4e73
    ADD ESP,0x8                         ; 005a4e76
    MOV dword ptr [EBX + 0xc494],EAX    ; 005a4e79
    PUSH dword ptr [EBX + 0xc490]       ; 005a4e7f
        ;   Label: LAB_005a4e7f
    PUSH dword ptr [EBX + 0xc48c]       ; 005a4e85
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005a4e8b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005a4e90
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005a4e97
    MOV dword ptr [EBX + 0xc498],EAX    ; 005a4e9e
    ADD ESP,0x8                         ; 005a4ea4
    MOV ESP,EBP                         ; 005a4ea7
    POP EBP                             ; 005a4ea9
    POP EDI                             ; 005a4eaa
    POP ESI                             ; 005a4eab
    POP EBX                             ; 005a4eac
    RET                                 ; 005a4ead

