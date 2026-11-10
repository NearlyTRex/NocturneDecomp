; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_particle_cpp_FUN_00532250(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x130]:8  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
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
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[7]:
;   core_fire.cpp_CFireball_process_FUN_004ae300 at 004ae321
;   core_fire.cpp_CGlassParticle_process_FUN_004afbf0 at 004afc21
;   core_fire.cpp_CSpark_process_FUN_004acf50 at 004acfa8
;   core_fire.cpp_FUN_004ad860 at 004ad8bd
;   core_fire.cpp_FUN_004aefc0 at 004aefce
;   core_fire.cpp_FUN_004af170 at 004af17f
;   core_fire.cpp_FUN_004b4190 at 004b41ac
;
; Referenced Globals:
;   undefined4 DAT_005ec7f5
;   undefined4 DAT_005ec7f9
;   undefined4 DAT_005ec7fd
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.delta_time_float
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0048f040
;   core_dtrace.cpp_FUN_0048b150
;   core_dtrace.cpp_FUN_0048ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532250
        ;   Label: core_particle.cpp_FUN_00532250
    PUSH ESI                            ; 00532251
    PUSH EDI                            ; 00532252
    PUSH EBP                            ; 00532253
    MOV EBP,ESP                         ; 00532254
    SUB ESP,0x11c                       ; 00532256
    AND ESP,0xfffffff8                  ; 0053225c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053225f
    FLD float ptr [EBX + 0x24]          ; 00532262
    FLDZ                                ; 00532265
    FCOMPP                              ; 00532267
    FNSTSW AX                           ; 00532269
    SAHF                                ; 0053226b
    JNC 0x00532560                      ; 0053226c
        ;   XREF to: 00532560 (CONDITIONAL_JUMP)  ; LAB_00532560
    LEA EAX,[EBX + 0x2c]                ; 00532272
    CMP EAX,EBX                         ; 00532275
    JZ 0x00532289                       ; 00532277
        ;   XREF to: 00532289 (CONDITIONAL_JUMP)  ; LAB_00532289
    MOV EDX,dword ptr [EBX]             ; 00532279
    MOV dword ptr [EAX],EDX             ; 0053227b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0053227d
    MOV dword ptr [EAX + 0x4],EDX       ; 00532280
    MOV EDX,dword ptr [EBX + 0x8]       ; 00532283
    MOV dword ptr [EAX + 0x8],EDX       ; 00532286
    MOV EAX,dword ptr [EBX + 0x28]      ; 00532289
        ;   Label: LAB_00532289
    MOV dword ptr [EBX + 0x38],EAX      ; 0053228c
    MOV EAX,[0x0061d95c]                ; 0053228f | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x294]     ; 00532294 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x108],EAX     ; 0053229a
    MOV dword ptr [ESP + 0x114],EAX     ; 005322a1
    LEA EAX,[EBX + 0x18]                ; 005322a8
    FLD float ptr [EAX]                 ; 005322ab
    FMUL float ptr [ESP + 0x108]        ; 005322ad
    FLD float ptr [EAX + 0x4]           ; 005322b4
    FMUL float ptr [ESP + 0x108]        ; 005322b7
    FLD float ptr [EAX + 0x8]           ; 005322be
    FMUL float ptr [ESP + 0x108]        ; 005322c1
    LEA EDI,[ESP + 0x30]                ; 005322c8
    LEA ESI,[ESP + 0xfc]                ; 005322cc
    LEA EAX,[EBX + 0xc]                 ; 005322d3
    FXCH ST2                            ; 005322d6
    FSTP float ptr [ESP + 0xfc]         ; 005322d8
    FSTP float ptr [ESP + 0x100]        ; 005322df
    FSTP float ptr [ESP + 0x104]        ; 005322e6
    MOVSD ES:EDI,ESI                    ; 005322ed
    MOVSD ES:EDI,ESI                    ; 005322ee
    MOVSD ES:EDI,ESI                    ; 005322ef
    FLD float ptr [EAX]                 ; 005322f0
    FADD float ptr [ESP + 0x30]         ; 005322f2
    FST float ptr [EAX]                 ; 005322f6
    FMUL float ptr [ESP + 0x108]        ; 005322f8
    FLD float ptr [EAX + 0x8]           ; 005322ff
    FLD float ptr [EAX + 0x4]           ; 00532302
    FADD float ptr [ESP + 0x34]         ; 00532305
    FXCH                                ; 00532309
    FADD float ptr [ESP + 0x38]         ; 0053230b
    FXCH                                ; 0053230f
    FST float ptr [EAX + 0x4]           ; 00532311
    FMUL float ptr [ESP + 0x108]        ; 00532314
    FXCH                                ; 0053231b
    FST float ptr [EAX + 0x8]           ; 0053231d
    FMUL float ptr [ESP + 0x108]        ; 00532320
    PUSH EBX                            ; 00532327
    LEA EDI,[ESP + 0xa0]                ; 00532328
    LEA ESI,[ESP + 0x28]                ; 0053232f
    FXCH ST2                            ; 00532333
    FSTP float ptr [ESP + 0x28]         ; 00532335
    FSTP float ptr [ESP + 0x2c]         ; 00532339
    FSTP float ptr [ESP + 0x30]         ; 0053233d
    MOVSD ES:EDI,ESI                    ; 00532341
    MOVSD ES:EDI,ESI                    ; 00532342
    MOVSD ES:EDI,ESI                    ; 00532343
    PUSH 0x1fe5c1c                      ; 00532344 | g_CDemonRaytraceInstance
    FLD float ptr [EBX]                 ; 00532349
    FLD float ptr [EBX + 0x4]           ; 0053234b
    FLD float ptr [EBX + 0x8]           ; 0053234e
    LEA ESI,[ESP + 0x50]                ; 00532351
    FXCH ST2                            ; 00532355
    FADD float ptr [ESP + 0xa4]         ; 00532357
    FXCH                                ; 0053235e
    FADD float ptr [ESP + 0xa8]         ; 00532360
    FXCH ST2                            ; 00532367
    FADD float ptr [ESP + 0xac]         ; 00532369
    FXCH                                ; 00532370
    FSTP float ptr [EBX]                ; 00532372
    FXCH                                ; 00532374
    FSTP float ptr [EBX + 0x4]          ; 00532376
    FSTP float ptr [EBX + 0x8]          ; 00532379
    CALL core_dtrace.cpp_FUN_0048ef40   ; 0053237c
        ;   XREF to: 0048ef40 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ef40()
    ADD ESP,0x8                         ; 00532381
    LEA EAX,[ESP + 0xc]                 ; 00532384
    PUSH EAX                            ; 00532388
    LEA EDI,[ESP + 0x10]                ; 00532389
    LEA ESI,[ESP + 0x4c]                ; 0053238d
    PUSH 0x1fe5c1c                      ; 00532391 | g_CDemonRaytraceInstance
    MOVSD ES:EDI,ESI                    ; 00532396
    MOVSD ES:EDI,ESI                    ; 00532397
    MOVSD ES:EDI,ESI                    ; 00532398
    CALL core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0048f040 ; 00532399
        ;   XREF to: 0048f040 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0048f040(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
    ADD ESP,0x8                         ; 0053239e
    MOV dword ptr [EBX + 0x28],EAX      ; 005323a1
    TEST EAX,EAX                        ; 005323a4
    JZ 0x00532567                       ; 005323a6
        ;   XREF to: 00532567 (CONDITIONAL_JUMP)  ; LAB_00532567
    PUSH 0x0                            ; 005323ac
        ;   Label: LAB_005323ac
    LEA EAX,[ESP + 0x88]                ; 005323ae
    PUSH EAX                            ; 005323b5
    PUSH EBX                            ; 005323b6
    LEA EAX,[EBX + 0x2c]                ; 005323b7
    PUSH EAX                            ; 005323ba
    PUSH 0x1fe5c1c                      ; 005323bb | g_CDemonRaytraceInstance
    MOV dword ptr [ESP + 0x124],EAX     ; 005323c0
    CALL core_dtrace.cpp_FUN_0048b150   ; 005323c7
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b150()
    MOV dword ptr [ESP + 0x12c],EAX     ; 005323cc
    FLD float ptr [ESP + 0x12c]         ; 005323d3
    ADD ESP,0x14                        ; 005323da
    FLDZ                                ; 005323dd
    FXCH                                ; 005323df
    FST float ptr [ESP + 0x8]           ; 005323e1
    FSTP double ptr [ESP]               ; 005323e5
    FCOMP double ptr [ESP]              ; 005323e8
    FNSTSW AX                           ; 005323eb
    SAHF                                ; 005323ed
    JA 0x00532546                       ; 005323ee
        ;   XREF to: 00532546 (CONDITIONAL_JUMP)  ; LAB_00532546
    FLD1                                ; 005323f4
    FCOMP double ptr [ESP]              ; 005323f6
    FNSTSW AX                           ; 005323f9
    SAHF                                ; 005323fb
    JBE 0x00532546                      ; 005323fc
        ;   XREF to: 00532546 (CONDITIONAL_JUMP)  ; LAB_00532546
    FLD float ptr [EBX]                 ; 00532402
    FLD float ptr [EBX + 0x4]           ; 00532404
    FLD float ptr [EBX + 0x8]           ; 00532407
    MOV EAX,dword ptr [ESP + 0x110]     ; 0053240a
    LEA EDI,[ESP + 0xe4]                ; 00532411
    LEA ESI,[ESP + 0x78]                ; 00532418
    FXCH ST2                            ; 0053241c
    FSUB float ptr [EAX]                ; 0053241e
    FXCH                                ; 00532420
    FSUB float ptr [EAX + 0x4]          ; 00532422
    FXCH ST2                            ; 00532425
    FSUB float ptr [EAX + 0x8]          ; 00532427
    FXCH                                ; 0053242a
    FSTP float ptr [ESP + 0x78]         ; 0053242c
    FXCH                                ; 00532430
    FSTP float ptr [ESP + 0x7c]         ; 00532432
    FSTP float ptr [ESP + 0x80]         ; 00532436
    MOVSD ES:EDI,ESI                    ; 0053243d
    MOVSD ES:EDI,ESI                    ; 0053243e
    MOVSD ES:EDI,ESI                    ; 0053243f
    FLD float ptr [ESP + 0x8]           ; 00532440
    FLD float ptr [ESP + 0xe4]          ; 00532444
    FMUL ST1                            ; 0053244b
    FLD float ptr [ESP + 0xe8]          ; 0053244d
    FMUL ST2                            ; 00532454
    FLD float ptr [ESP + 0xec]          ; 00532456
    FMULP ST3                           ; 0053245d
    LEA EDI,[ESP + 0x6c]                ; 0053245f
    LEA ESI,[ESP + 0x90]                ; 00532463
    FXCH                                ; 0053246a
    FSTP float ptr [ESP + 0x90]         ; 0053246c
    FSTP float ptr [ESP + 0x94]         ; 00532473
    FSTP float ptr [ESP + 0x98]         ; 0053247a
    MOVSD ES:EDI,ESI                    ; 00532481
    MOVSD ES:EDI,ESI                    ; 00532482
    MOVSD ES:EDI,ESI                    ; 00532483
    FLD float ptr [0x005ec7f5]          ; 00532484 | DAT_005ec7f5
    FLD float ptr [ESP + 0x6c]          ; 0053248a
    FMUL ST1                            ; 0053248e
    FLD float ptr [ESP + 0x70]          ; 00532490
    FMUL ST2                            ; 00532494
    FLD float ptr [ESP + 0x74]          ; 00532496
    FMULP ST3                           ; 0053249a
    LEA EDI,[ESP + 0x3c]                ; 0053249c
    LEA ESI,[ESP + 0xb4]                ; 005324a0
    FXCH                                ; 005324a7
    FSTP float ptr [ESP + 0xb4]         ; 005324a9
    FSTP float ptr [ESP + 0xb8]         ; 005324b0
    FSTP float ptr [ESP + 0xbc]         ; 005324b7
    MOVSD ES:EDI,ESI                    ; 005324be
    MOVSD ES:EDI,ESI                    ; 005324bf
    MOVSD ES:EDI,ESI                    ; 005324c0
    FLD float ptr [EAX + 0x4]           ; 005324c1
    FLD float ptr [EAX + 0x8]           ; 005324c4
    FLD float ptr [EAX]                 ; 005324c7
    LEA EDI,[ESP + 0xa8]                ; 005324c9
    LEA ESI,[ESP + 0xd8]                ; 005324d0
    LEA EAX,[ESP + 0xa8]                ; 005324d7
    FADD float ptr [ESP + 0x3c]         ; 005324de
    FXCH ST2                            ; 005324e2
    FADD float ptr [ESP + 0x40]         ; 005324e4
    FXCH                                ; 005324e8
    FADD float ptr [ESP + 0x44]         ; 005324ea
    FXCH ST2                            ; 005324ee
    FSTP float ptr [ESP + 0xd8]         ; 005324f0
    FSTP float ptr [ESP + 0xdc]         ; 005324f7
    FSTP float ptr [ESP + 0xe0]         ; 005324fe
    MOVSD ES:EDI,ESI                    ; 00532505
    MOVSD ES:EDI,ESI                    ; 00532506
    MOVSD ES:EDI,ESI                    ; 00532507
    CMP EBX,EAX                         ; 00532508
    JZ 0x00532529                       ; 0053250a
        ;   XREF to: 00532529 (CONDITIONAL_JUMP)  ; LAB_00532529
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0053250c
    MOV dword ptr [EBX],EAX             ; 00532513
    MOV EAX,dword ptr [ESP + 0xac]      ; 00532515
    MOV dword ptr [EBX + 0x4],EAX       ; 0053251c
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0053251f
    MOV dword ptr [EBX + 0x8],EAX       ; 00532526
    LEA EDX,[ESP + 0x84]                ; 00532529
        ;   Label: LAB_00532529
    PUSH EDX                            ; 00532530
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00532531
    PUSH EBX                            ; 00532534
    CALL dword ptr [EAX + 0xc]          ; 00532535
    ADD ESP,0x8                         ; 00532538
    TEST EAX,EAX                        ; 0053253b
    JZ 0x00532573                       ; 0053253d
        ;   XREF to: 00532573 (CONDITIONAL_JUMP)  ; LAB_00532573
    MOV dword ptr [EBX + 0x24],0x0      ; 0053253f
    FLD float ptr [EBX + 0x24]          ; 00532546
        ;   Label: LAB_00532546
    FSUB float ptr [ESP + 0x114]        ; 00532549
    FST float ptr [EBX + 0x24]          ; 00532550
    FLDZ                                ; 00532553
    FCOMPP                              ; 00532555
    FNSTSW AX                           ; 00532557
    SAHF                                ; 00532559
    JA 0x005326b6                       ; 0053255a
        ;   XREF to: 005326b6 (CONDITIONAL_JUMP)  ; LAB_005326b6
    MOV ESP,EBP                         ; 00532560
        ;   Label: LAB_00532560
    POP EBP                             ; 00532562
    POP EDI                             ; 00532563
    POP ESI                             ; 00532564
    POP EBX                             ; 00532565
    RET                                 ; 00532566
    CMP dword ptr [EBX + 0x38],0x0      ; 00532567
        ;   Label: LAB_00532567
    JNZ 0x005323ac                      ; 0053256b
        ;   XREF to: 005323ac (CONDITIONAL_JUMP)  ; LAB_005323ac
    JMP 0x00532546                      ; 00532571
        ;   XREF to: 00532546 (UNCONDITIONAL_JUMP)  ; LAB_00532546
    LEA EDX,[EBX + 0xc]                 ; 00532573
        ;   Label: LAB_00532573
    FLD float ptr [ESP + 0x88]          ; 00532576
    FMUL float ptr [EDX + 0x4]          ; 0053257d
    FLD float ptr [ESP + 0x84]          ; 00532580
    FMUL float ptr [EDX]                ; 00532587
    FADDP                               ; 00532589
    FLD float ptr [ESP + 0x8c]          ; 0053258b
    FMUL float ptr [EDX + 0x8]          ; 00532592
    FADDP                               ; 00532595
    FMUL float ptr [0x005ec7f9]         ; 00532597 | DAT_005ec7f9
    FLD float ptr [ESP + 0x84]          ; 0053259d
    FXCH                                ; 005325a4
    FSTP float ptr [ESP + 0x10c]        ; 005325a6
    FMUL float ptr [ESP + 0x10c]        ; 005325ad
    FLD float ptr [ESP + 0x88]          ; 005325b4
    FMUL float ptr [ESP + 0x10c]        ; 005325bb
    FLD float ptr [ESP + 0x8c]          ; 005325c2
    FMUL float ptr [ESP + 0x10c]        ; 005325c9
    LEA EDI,[ESP + 0x54]                ; 005325d0
    LEA ESI,[ESP + 0xcc]                ; 005325d4
    FXCH ST2                            ; 005325db
    FSTP float ptr [ESP + 0xcc]         ; 005325dd
    FSTP float ptr [ESP + 0xd0]         ; 005325e4
    FSTP float ptr [ESP + 0xd4]         ; 005325eb
    MOVSD ES:EDI,ESI                    ; 005325f2
    MOVSD ES:EDI,ESI                    ; 005325f3
    MOVSD ES:EDI,ESI                    ; 005325f4
    LEA EAX,[ESP + 0xc0]                ; 005325f5
    FLD float ptr [ESP + 0x54]          ; 005325fc
    FLD float ptr [ESP + 0x58]          ; 00532600
    FLD float ptr [ESP + 0x5c]          ; 00532604
    LEA EDI,[ESP + 0xc0]                ; 00532608
    LEA ESI,[ESP + 0xf0]                ; 0053260f
    FXCH ST2                            ; 00532616
    FSUB float ptr [EDX]                ; 00532618
    FXCH                                ; 0053261a
    FSUB float ptr [EDX + 0x4]          ; 0053261c
    FXCH ST2                            ; 0053261f
    FSUB float ptr [EDX + 0x8]          ; 00532621
    FXCH                                ; 00532624
    FSTP float ptr [ESP + 0xf0]         ; 00532626
    FXCH                                ; 0053262d
    FSTP float ptr [ESP + 0xf4]         ; 0053262f
    FSTP float ptr [ESP + 0xf8]         ; 00532636
    MOVSD ES:EDI,ESI                    ; 0053263d
    MOVSD ES:EDI,ESI                    ; 0053263e
    MOVSD ES:EDI,ESI                    ; 0053263f
    CMP EDX,EAX                         ; 00532640
    JZ 0x00532661                       ; 00532642
        ;   XREF to: 00532661 (CONDITIONAL_JUMP)  ; LAB_00532661
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00532644
    MOV dword ptr [EDX],EAX             ; 0053264b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0053264d
    MOV dword ptr [EDX + 0x4],EAX       ; 00532654
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00532657
    MOV dword ptr [EDX + 0x8],EAX       ; 0053265e
    LEA EDX,[EBX + 0xc]                 ; 00532661
        ;   Label: LAB_00532661
    FLD float ptr [0x005ec7fd]          ; 00532664 | DAT_005ec7fd
    FLD float ptr [EDX]                 ; 0053266a
    FMUL ST1                            ; 0053266c
    FLD float ptr [EDX + 0x4]           ; 0053266e
    FMUL ST2                            ; 00532671
    FLD float ptr [EDX + 0x8]           ; 00532673
    FMULP ST3                           ; 00532676
    LEA EDI,[ESP + 0x60]                ; 00532678
    LEA ESI,[ESP + 0x18]                ; 0053267c
    LEA EAX,[ESP + 0x60]                ; 00532680
    FXCH                                ; 00532684
    FSTP float ptr [ESP + 0x18]         ; 00532686
    FSTP float ptr [ESP + 0x1c]         ; 0053268a
    FSTP float ptr [ESP + 0x20]         ; 0053268e
    MOVSD ES:EDI,ESI                    ; 00532692
    MOVSD ES:EDI,ESI                    ; 00532693
    MOVSD ES:EDI,ESI                    ; 00532694
    CMP EDX,EAX                         ; 00532695
    JZ 0x00532546                       ; 00532697
        ;   XREF to: 00532546 (CONDITIONAL_JUMP)  ; LAB_00532546
    MOV EAX,dword ptr [ESP + 0x60]      ; 0053269d
    MOV dword ptr [EDX],EAX             ; 005326a1
    MOV EAX,dword ptr [ESP + 0x64]      ; 005326a3
    MOV dword ptr [EDX + 0x4],EAX       ; 005326a7
    MOV EAX,dword ptr [ESP + 0x68]      ; 005326aa
    MOV dword ptr [EDX + 0x8],EAX       ; 005326ae
    JMP 0x00532546                      ; 005326b1
        ;   XREF to: 00532546 (UNCONDITIONAL_JUMP)  ; LAB_00532546
    MOV dword ptr [EBX + 0x24],0x0      ; 005326b6
        ;   Label: LAB_005326b6
    MOV ESP,EBP                         ; 005326bd
    POP EBP                             ; 005326bf
    POP EDI                             ; 005326c0
    POP ESI                             ; 005326c1
    POP EBX                             ; 005326c2
    RET                                 ; 005326c3

