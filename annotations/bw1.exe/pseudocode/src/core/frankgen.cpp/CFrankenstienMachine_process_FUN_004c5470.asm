; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004c5470(CFrankenstienMachine *this_ptr,float delta_time)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_frankx_bed1_wav_005e0be8
;   TerminatedCString s_frankx_bed2_wav_005e0bf8
;   TerminatedCString s_frankx_bed3_wav_005e0c08
;   TerminatedCString s_frankx_bed4_wav_005e0c18
;   TerminatedCString s_frankx_water_dip_wav_005e0c28
;   TerminatedCString s_frankx_big_ramp_bed5_wav_005e0c3d
;   TerminatedCString s_frankx_crane1_wav_005e0c56
;   TerminatedCString s_frankx_crane2_wav_005e0c68
;   TerminatedCString s_frankx_crane3_wav_005e0c7a
;   TerminatedCString s_frankx_arm_wav_005e0c8c
;   TerminatedCString s_frankx_flap_up_wav_005e0c9b
;   TerminatedCString s_frankx_flap_down_wav_005e0cae
;   TerminatedCString s_frankx_big_ramp_wav_005e0cc3
;   float g_FLOAT_005e0cf2 = 1580
;   double g_DOUBLE_005e0cfa = 0.0100000000000000
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60
;   core_frankgen.cpp_findLeader_FUN_004c5e10
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c5470
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004c5470
    SUB ESP,0xb8                        ; 004c5471
    MOV EBP,dword ptr [ESP + 0xc0]      ; 004c5477
    MOV EAX,dword ptr [EBP + 0x15c]     ; 004c547e
    MOV [0x01cc90b0],EAX                ; 004c5484 | g_FLOAT_01cc90b0
    CALL core_frankgen.cpp_findLeader_FUN_004c5e10 ; 004c5489
        ;   XREF to: 004c5e10 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_findLeader_FUN_004c5e10()
    CMP EAX,EBP                         ; 004c548e
    JZ 0x004c5845                       ; 004c5490
        ;   XREF to: 004c5845 (CONDITIONAL_JUMP)  ; LAB_004c5845
    MOV EDX,dword ptr [EAX + 0x15c]     ; 004c5496
    MOV dword ptr [EBP + 0x15c],EDX     ; 004c549c
    FLD float ptr [0x01cc90b0]          ; 004c54a2 | g_FLOAT_01cc90b0
        ;   Label: LAB_004c54a2
    FCOMP float ptr [EBP + 0x15c]       ; 004c54a8
    FNSTSW AX                           ; 004c54ae
    SAHF                                ; 004c54b0
    JBE 0x004c54c5                      ; 004c54b1
        ;   XREF to: 004c54c5 (CONDITIONAL_JUMP)  ; LAB_004c54c5
    FLD float ptr [0x00600c20]          ; 004c54b3 | g_FLOAT_00600c20
    FSUBR float ptr [0x01cc90b0]        ; 004c54b9 | g_FLOAT_01cc90b0
    FSTP float ptr [0x01cc90b0]         ; 004c54bf | g_FLOAT_01cc90b0
    PUSH EBP                            ; 004c54c5
        ;   Label: LAB_004c54c5
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60 ; 004c54c6
        ;   XREF to: 004c5c60 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60(CFrankenstienMachine * this_ptr)
    MOV EAX,dword ptr [EBP + 0x158]     ; 004c54cb
    ADD ESP,0x4                         ; 004c54d1
    CMP EAX,0x8                         ; 004c54d4
    JA 0x004c5956                       ; 004c54d7
        ;   XREF to: 004c5956 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4c5448]  ; 004c54dd | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 004c54e4
        ;   Label: caseD_0
    PUSH ESI                            ; 004c54e5
    PUSH EBX                            ; 004c54e6
    MOV EBX,dword ptr [EBP + 0x15c]     ; 004c54e7
    CMP EBX,0x44ac8000                  ; 004c54ed
    JLE 0x004c56c1                      ; 004c54f3
        ;   XREF to: 004c56c1 (CONDITIONAL_JUMP)  ; LAB_004c56c1
    CMP EBX,0x44c58000                  ; 004c54f9
    JGE 0x004c56c1                      ; 004c54ff
        ;   XREF to: 004c56c1 (CONDITIONAL_JUMP)  ; LAB_004c56c1
    CMP EBX,0x44b90000                  ; 004c5505
    JGE 0x004c5884                      ; 004c550b
        ;   XREF to: 004c5884 (CONDITIONAL_JUMP)  ; LAB_004c5884
    FLD float ptr [EBP + 0x15c]         ; 004c5511
    FADD float ptr [0x005e0d0a]         ; 004c5517 | g_FLOAT_005e0d0a
    FMUL double ptr [0x005e0cfa]        ; 004c551d | g_DOUBLE_005e0cfa
    FMUL double ptr [0x005e0d12]        ; 004c5523 | g_DOUBLE_005e0d12
    FADD float ptr [0x005e0d1a]         ; 004c5529 | g_FLOAT_005e0d1a
    FSTP float ptr [ESP + 0xb8]         ; 004c552f
        ;   Label: LAB_004c552f
    PUSH dword ptr [ESP + 0xd0]         ; 004c5536
    PUSH dword ptr [ESP + 0xbc]         ; 004c553d
    PUSH EBP                            ; 004c5544
    CALL core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990 ; 004c5545
        ;   XREF to: 004c5990 (UNCONDITIONAL_CALL)  ; int core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990(CFrankenstienMachine * this_ptr, float emission_rate, float delta_time)
    MOV dword ptr [ESP + 0xcc],EAX      ; 004c554a
    ADD ESP,0xc                         ; 004c5551
    MOV dword ptr [ESP + 0xbc],EAX      ; 004c5554
    PUSH EBP                            ; 004c555b
    MOV EAX,dword ptr [EBP + 0x154]     ; 004c555c
    LEA ESI,[ESP + 0x28]                ; 004c5562
    LEA EDI,[ESP + 0x58]                ; 004c5566
    CALL dword ptr [EAX + 0x1c]         ; 004c556a
    MOV ECX,0x6                         ; 004c556d
    LEA ESI,[ESP + 0x28]                ; 004c5572
    ADD ESP,0x4                         ; 004c5576
    XOR EBX,EBX                         ; 004c5579
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c557b
    MOVSD.REP ES:EDI,ESI                ; 004c5582
    TEST EAX,EAX                        ; 004c5584
    JLE 0x004c56c1                      ; 004c5586
        ;   XREF to: 004c56c1 (CONDITIONAL_JUMP)  ; LAB_004c56c1
    PUSH dword ptr [ESP + 0x60]         ; 004c558c
        ;   Label: LAB_004c558c
    PUSH dword ptr [ESP + 0x58]         ; 004c5590
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c5594
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004c5599
    FLD float ptr [ESP + 0xc8]          ; 004c55a0
    ADD ESP,0x8                         ; 004c55a7
    PUSH 0x3ecccccd                     ; 004c55aa
    PUSH 0x0                            ; 004c55af
    FSTP float ptr [ESP + 0xb0]         ; 004c55b1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c55b8
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004c55bd
    FLD float ptr [ESP + 0xc8]          ; 004c55c4
    ADD ESP,0x8                         ; 004c55cb
    FLD1                                ; 004c55ce
    FSUB ST0,ST1                        ; 004c55d0
    FMUL float ptr [ESP + 0x58]         ; 004c55d2
    FLD float ptr [ESP + 0x64]          ; 004c55d6
    FMULP ST2                           ; 004c55da
    PUSH dword ptr [ESP + 0x68]         ; 004c55dc
    FADDP                               ; 004c55e0
    PUSH dword ptr [ESP + 0x60]         ; 004c55e2
    FSTP float ptr [ESP + 0xb4]         ; 004c55e6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c55ed
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004c55f2
    FLD float ptr [ESP + 0xc8]          ; 004c55f9
    ADD ESP,0x8                         ; 004c5600
    LEA EAX,[ESP + 0xa8]                ; 004c5603
    PUSH EAX                            ; 004c560a
    LEA ESI,[ESP + 0x94]                ; 004c560b
    LEA EDI,[ESP + 0xa0]                ; 004c5612
    PUSH EBP                            ; 004c5619
    FSTP float ptr [ESP + 0xb8]         ; 004c561a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40 ; 004c5621
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA ESI,[ESP + 0x98]                ; 004c5626
    ADD ESP,0x8                         ; 004c562d
    MOVSD ES:EDI,ESI                    ; 004c5630
    MOVSD ES:EDI,ESI                    ; 004c5631
    MOVSD ES:EDI,ESI                    ; 004c5632
    LEA EAX,[ESP + 0x9c]                ; 004c5633
    LEA ESI,[ESP + 0xa8]                ; 004c563a
    CMP ESI,EAX                         ; 004c5641
    JZ 0x004c566f                       ; 004c5643
        ;   XREF to: 004c566f (CONDITIONAL_JUMP)  ; LAB_004c566f
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004c5645
    MOV dword ptr [ESP + 0xa8],EAX      ; 004c564c
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004c5653
    MOV dword ptr [ESP + 0xac],EAX      ; 004c565a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004c5661
    MOV dword ptr [ESP + 0xb0],EAX      ; 004c5668
    PUSH 0xffff                         ; 004c566f
        ;   Label: LAB_004c566f
    PUSH 0x0                            ; 004c5674
    PUSH 0x3fc00000                     ; 004c5676
    PUSH 0x3f000000                     ; 004c567b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c5680
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd0],EAX      ; 004c5685
    FLD float ptr [ESP + 0xd0]          ; 004c568c
    ADD ESP,0x8                         ; 004c5693
    SUB ESP,0x4                         ; 004c5696
    LEA EAX,[ESP + 0xb4]                ; 004c5699
    FSTP float ptr [ESP]                ; 004c56a0
    PUSH EAX                            ; 004c56a3
    MOV EDX,dword ptr [0x0061c010]      ; 004c56a4 | g_CFireEffectPtr
    PUSH EDX                            ; 004c56aa
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 004c56ab
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004c56b0
    INC EBX                             ; 004c56b3
    CMP EBX,dword ptr [ESP + 0xbc]      ; 004c56b4
    JL 0x004c558c                       ; 004c56bb
        ;   XREF to: 004c558c (CONDITIONAL_JUMP)  ; LAB_004c558c
    MOV EBX,dword ptr [EBP + 0x15c]     ; 004c56c1
        ;   Label: LAB_004c56c1
    CMP EBX,0x44e10000                  ; 004c56c7
    JLE 0x004c57c8                      ; 004c56cd
        ;   XREF to: 004c57c8 (CONDITIONAL_JUMP)  ; LAB_004c57c8
    CMP EBX,0x44ed8000                  ; 004c56d3
    JGE 0x004c57c8                      ; 004c56d9
        ;   XREF to: 004c57c8 (CONDITIONAL_JUMP)  ; LAB_004c57c8
    PUSH EBP                            ; 004c56df
    MOV EAX,dword ptr [EBP + 0x154]     ; 004c56e0
    LEA ESI,[ESP + 0x10]                ; 004c56e6
    LEA EDI,[ESP + 0x40]                ; 004c56ea
    CALL dword ptr [EAX + 0x1c]         ; 004c56ee
    MOV ECX,0x6                         ; 004c56f1
    LEA ESI,[ESP + 0x10]                ; 004c56f6
    ADD ESP,0x4                         ; 004c56fa
    MOVSD.REP ES:EDI,ESI                ; 004c56fd
    PUSH dword ptr [ESP + 0x48]         ; 004c56ff
    PUSH dword ptr [ESP + 0x40]         ; 004c5703
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c5707
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004c570c
    FLD float ptr [ESP + 0xc8]          ; 004c5713
    ADD ESP,0x8                         ; 004c571a
    PUSH dword ptr [ESP + 0x50]         ; 004c571d
    FSTP float ptr [ESP + 0x70]         ; 004c5721
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c5725
    PUSH dword ptr [ESP + 0x48]         ; 004c5729
    MOV dword ptr [ESP + 0x78],EAX      ; 004c572d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c5731
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004c5736
    FLD float ptr [ESP + 0xc8]          ; 004c573d
    ADD ESP,0x8                         ; 004c5744
    LEA EAX,[ESP + 0x6c]                ; 004c5747
    LEA EBX,[ESP + 0x6c]                ; 004c574b
    PUSH EAX                            ; 004c574f
    LEA ESI,[ESP + 0x7c]                ; 004c5750
    LEA EDI,[ESP + 0x88]                ; 004c5754
    PUSH EBP                            ; 004c575b
    FSTP float ptr [ESP + 0x7c]         ; 004c575c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40 ; 004c5760
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408b40(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA ESI,[ESP + 0x80]                ; 004c5765
    ADD ESP,0x8                         ; 004c576c
    LEA EAX,[ESP + 0x84]                ; 004c576f
    MOVSD ES:EDI,ESI                    ; 004c5776
    MOVSD ES:EDI,ESI                    ; 004c5777
    MOVSD ES:EDI,ESI                    ; 004c5778
    CMP EBX,EAX                         ; 004c5779
    JZ 0x004c579e                       ; 004c577b
        ;   XREF to: 004c579e (CONDITIONAL_JUMP)  ; LAB_004c579e
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c577d
    MOV dword ptr [ESP + 0x6c],EAX      ; 004c5784
    MOV EAX,dword ptr [ESP + 0x88]      ; 004c5788
    MOV dword ptr [ESP + 0x70],EAX      ; 004c578f
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004c5793
    MOV dword ptr [ESP + 0x74],EAX      ; 004c579a
    PUSH 0xffff                         ; 004c579e
        ;   Label: LAB_004c579e
    PUSH 0x0                            ; 004c57a3
    PUSH 0x10000                        ; 004c57a5
    PUSH 0x4000                         ; 004c57aa
    PUSH 0x0                            ; 004c57af
    LEA EAX,[ESP + 0x80]                ; 004c57b1
    PUSH EAX                            ; 004c57b8
    MOV EDI,dword ptr [0x0061c010]      ; 004c57b9 | g_CFireEffectPtr
    PUSH EDI                            ; 004c57bf
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004c57c0
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004c57c5
    PUSH 0x5e0be8                       ; 004c57c8 | = "frankx-bed1.wav"
        ;   Label: LAB_004c57c8
    PUSH 0x3f800000                     ; 004c57cd
    PUSH EBP                            ; 004c57d2
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c57d3
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c57d8
    PUSH 0x5e0bf8                       ; 004c57db | = "frankx-bed2.wav"
    PUSH 0x43ed8000                     ; 004c57e0
    PUSH EBP                            ; 004c57e5
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c57e6
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c57eb
    PUSH 0x5e0c08                       ; 004c57ee | = "frankx-bed3.wav"
    PUSH 0x444a4000                     ; 004c57f3
    PUSH EBP                            ; 004c57f8
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c57f9
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c57fe
    PUSH 0x5e0c18                       ; 004c5801 | = "frankx-bed4.wav"
    PUSH 0x44834000                     ; 004c5806
    PUSH EBP                            ; 004c580b
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c580c
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c5811
    PUSH 0x5e0c28                       ; 004c5814 | = "frankx-water-dip.wav"
    PUSH 0x44ac8000                     ; 004c5819
    PUSH EBP                            ; 004c581e
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c581f
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c5824
    PUSH 0x5e0c3d                       ; 004c5827 | = "frankx-big-ramp-bed5.wav"
    PUSH 0x44ff0000                     ; 004c582c
    PUSH EBP                            ; 004c5831
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c5832
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c5837
    POP EBX                             ; 004c583a
    POP ESI                             ; 004c583b
    POP EDI                             ; 004c583c
    ADD ESP,0xb8                        ; 004c583d
        ;   Label: caseD_4
    POP EBP                             ; 004c5843
    RET                                 ; 004c5844
    FLD float ptr [ESP + 0xc4]          ; 004c5845
        ;   Label: LAB_004c5845
    FMUL float ptr [0x00600c1c]         ; 004c584c | g_FLOAT_00600c1c
    FADD float ptr [EBP + 0x15c]        ; 004c5852
    FST float ptr [EBP + 0x15c]         ; 004c5858
    FCOMP float ptr [0x00600c20]        ; 004c585e | g_FLOAT_00600c20
    FNSTSW AX                           ; 004c5864
    SAHF                                ; 004c5866
    JC 0x004c54a2                       ; 004c5867
        ;   XREF to: 004c54a2 (CONDITIONAL_JUMP)  ; LAB_004c54a2
    FLD float ptr [0x00600c20]          ; 004c586d | g_FLOAT_00600c20
    FSUBR float ptr [EBP + 0x15c]       ; 004c5873
    FSTP float ptr [EBP + 0x15c]        ; 004c5879
    JMP 0x004c54a2                      ; 004c587f
        ;   XREF to: 004c54a2 (UNCONDITIONAL_JUMP)  ; LAB_004c54a2
    FLD float ptr [0x005e0cf2]          ; 004c5884 | g_FLOAT_005e0cf2
        ;   Label: LAB_004c5884
    FSUB float ptr [EBP + 0x15c]        ; 004c588a
    FMUL double ptr [0x005e0cfa]        ; 004c5890 | g_DOUBLE_005e0cfa
    FMUL double ptr [0x005e0d02]        ; 004c5896 | g_DOUBLE_005e0d02
    JMP 0x004c552f                      ; 004c589c
        ;   XREF to: 004c552f (UNCONDITIONAL_JUMP)  ; LAB_004c552f
    PUSH 0x5e0c56                       ; 004c58a1 | = "frankx-crane1.wav"
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 004c58a6
    PUSH EBP                            ; 004c58ab
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c58ac
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c58b1
    ADD ESP,0xb8                        ; 004c58b4
    POP EBP                             ; 004c58ba
    RET                                 ; 004c58bb
    PUSH 0x5e0c68                       ; 004c58bc | = "frankx-crane2.wav"
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 004c58c1
    PUSH EBP                            ; 004c58c6
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c58c7
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c58cc
    ADD ESP,0xb8                        ; 004c58cf
    POP EBP                             ; 004c58d5
    RET                                 ; 004c58d6
    PUSH 0x5e0c7a                       ; 004c58d7 | = "frankx-crane3.wav"
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 004c58dc
    PUSH EBP                            ; 004c58e1
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c58e2
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c58e7
    ADD ESP,0xb8                        ; 004c58ea
    POP EBP                             ; 004c58f0
    RET                                 ; 004c58f1
    PUSH 0x5e0c8c                       ; 004c58f2 | = "frankx-arm.wav"
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 004c58f7
    PUSH EBP                            ; 004c58fc
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c58fd
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c5902
    ADD ESP,0xb8                        ; 004c5905
    POP EBP                             ; 004c590b
    RET                                 ; 004c590c
    PUSH 0x5e0c9b                       ; 004c590d | = "frankx-flap-up.wav"
        ;   Label: caseD_6
    PUSH 0x44d4c000                     ; 004c5912
    PUSH EBP                            ; 004c5917
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c5918
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c591d
    PUSH 0x5e0cae                       ; 004c5920 | = "frankx-flap-down.wav"
    PUSH 0x44eb2000                     ; 004c5925
    PUSH EBP                            ; 004c592a
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c592b
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c5930
    ADD ESP,0xb8                        ; 004c5933
    POP EBP                             ; 004c5939
    RET                                 ; 004c593a
    PUSH 0x5e0cc3                       ; 004c593b | = "frankx-big-ramp.wav"
        ;   Label: caseD_8
    PUSH 0x44f3c000                     ; 004c5940
    PUSH EBP                            ; 004c5945
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0 ; 004c5946
        ;   XREF to: 004c59f0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004c594b
    ADD ESP,0xb8                        ; 004c594e
    POP EBP                             ; 004c5954
    RET                                 ; 004c5955
    MOV EDX,0x5e0cd7                    ; 004c5956
        ;   Label: default
    MOV ECX,0x13e                       ; 004c595b
    PUSH 0x5e0cec                       ; 004c5960
    MOV dword ptr [0x01d1d400],EDX      ; 004c5965 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004c596b | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 004c5971
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 004c5976
    ADD ESP,0xb8                        ; 004c5979
    POP EBP                             ; 004c597f
    RET                                 ; 004c5980

