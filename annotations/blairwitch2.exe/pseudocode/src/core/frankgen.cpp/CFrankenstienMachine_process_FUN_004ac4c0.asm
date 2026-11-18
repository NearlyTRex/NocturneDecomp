; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004ac4c0(CFrankenstienMachine *this_ptr,float delta_time)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_frankx_bed1_wav_005d6b6f
;   TerminatedCString s_frankx_bed2_wav_005d6b7f
;   TerminatedCString s_frankx_bed3_wav_005d6b8f
;   TerminatedCString s_frankx_bed4_wav_005d6b9f
;   TerminatedCString s_frankx_water_dip_wav_005d6baf
;   TerminatedCString s_frankx_big_ramp_bed5_wav_005d6bc4
;   TerminatedCString s_frankx_crane1_wav_005d6bdd
;   TerminatedCString s_frankx_crane2_wav_005d6bef
;   TerminatedCString s_frankx_crane3_wav_005d6c01
;   TerminatedCString s_frankx_arm_wav_005d6c13
;   TerminatedCString s_frankx_flap_up_wav_005d6c22
;   TerminatedCString s_frankx_flap_down_wav_005d6c35
;   TerminatedCString s_frankx_big_ramp_wav_005d6c4a
;   float g_FLOAT_005d6c79 = 1580
;   double g_DOUBLE_005d6c81 = 0.0100000000000000
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004ac9e0
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0
;   core_frankgen.cpp_findLeader_FUN_004ace60
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ac4c0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004ac4c0
    SUB ESP,0xb8                        ; 004ac4c1
    MOV EBP,dword ptr [ESP + 0xc0]      ; 004ac4c7
    MOV EAX,dword ptr [EBP + 0x2b8]     ; 004ac4ce
    MOV [0x01cb0620],EAX                ; 004ac4d4 | g_FLOAT_01cb0620
    CALL core_frankgen.cpp_findLeader_FUN_004ace60 ; 004ac4d9
        ;   XREF to: 004ace60 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_findLeader_FUN_004ace60()
    CMP EAX,EBP                         ; 004ac4de
    JZ 0x004ac895                       ; 004ac4e0
        ;   XREF to: 004ac895 (CONDITIONAL_JUMP)  ; LAB_004ac895
    MOV EDX,dword ptr [EAX + 0x2b8]     ; 004ac4e6
    MOV dword ptr [EBP + 0x2b8],EDX     ; 004ac4ec
    FLD float ptr [0x01cb0620]          ; 004ac4f2 | g_FLOAT_01cb0620
        ;   Label: LAB_004ac4f2
    FCOMP float ptr [EBP + 0x2b8]       ; 004ac4f8
    FNSTSW AX                           ; 004ac4fe
    SAHF                                ; 004ac500
    JBE 0x004ac515                      ; 004ac501
        ;   XREF to: 004ac515 (CONDITIONAL_JUMP)  ; LAB_004ac515
    FLD float ptr [0x005f71f0]          ; 004ac503 | g_FLOAT_005f71f0
    FSUBR float ptr [0x01cb0620]        ; 004ac509 | g_FLOAT_01cb0620
    FSTP float ptr [0x01cb0620]         ; 004ac50f | g_FLOAT_01cb0620
    PUSH EBP                            ; 004ac515
        ;   Label: LAB_004ac515
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0 ; 004ac516
        ;   XREF to: 004accb0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(CFrankenstienMachine * this_ptr)
    MOV EAX,dword ptr [EBP + 0x2b4]     ; 004ac51b
    ADD ESP,0x4                         ; 004ac521
    CMP EAX,0x8                         ; 004ac524
    JA 0x004ac9a6                       ; 004ac527
        ;   XREF to: 004ac9a6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ac498]  ; 004ac52d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 004ac534
        ;   Label: caseD_0
    PUSH ESI                            ; 004ac535
    PUSH EBX                            ; 004ac536
    MOV EBX,dword ptr [EBP + 0x2b8]     ; 004ac537
    CMP EBX,0x44ac8000                  ; 004ac53d
    JLE 0x004ac711                      ; 004ac543
        ;   XREF to: 004ac711 (CONDITIONAL_JUMP)  ; LAB_004ac711
    CMP EBX,0x44c58000                  ; 004ac549
    JGE 0x004ac711                      ; 004ac54f
        ;   XREF to: 004ac711 (CONDITIONAL_JUMP)  ; LAB_004ac711
    CMP EBX,0x44b90000                  ; 004ac555
    JGE 0x004ac8d4                      ; 004ac55b
        ;   XREF to: 004ac8d4 (CONDITIONAL_JUMP)  ; LAB_004ac8d4
    FLD float ptr [EBP + 0x2b8]         ; 004ac561
    FADD float ptr [0x005d6c91]         ; 004ac567 | g_FLOAT_005d6c91
    FMUL double ptr [0x005d6c81]        ; 004ac56d | g_DOUBLE_005d6c81
    FMUL double ptr [0x005d6c99]        ; 004ac573 | g_DOUBLE_005d6c99
    FADD float ptr [0x005d6ca1]         ; 004ac579 | g_FLOAT_005d6ca1
    FSTP float ptr [ESP + 0xb8]         ; 004ac57f
        ;   Label: LAB_004ac57f
    PUSH dword ptr [ESP + 0xd0]         ; 004ac586
    PUSH dword ptr [ESP + 0xbc]         ; 004ac58d
    PUSH EBP                            ; 004ac594
    CALL core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004ac9e0 ; 004ac595
        ;   XREF to: 004ac9e0 (UNCONDITIONAL_CALL)  ; int core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004ac9e0(CFrankenstienMachine * this_ptr, float emission_rate, float delta_time)
    MOV dword ptr [ESP + 0xcc],EAX      ; 004ac59a
    ADD ESP,0xc                         ; 004ac5a1
    MOV dword ptr [ESP + 0xbc],EAX      ; 004ac5a4
    PUSH EBP                            ; 004ac5ab
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004ac5ac
    LEA ESI,[ESP + 0x28]                ; 004ac5b2
    LEA EDI,[ESP + 0x58]                ; 004ac5b6
    CALL dword ptr [EAX + 0x24]         ; 004ac5ba
    MOV ECX,0x6                         ; 004ac5bd
    LEA ESI,[ESP + 0x28]                ; 004ac5c2
    ADD ESP,0x4                         ; 004ac5c6
    XOR EBX,EBX                         ; 004ac5c9
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004ac5cb
    MOVSD.REP ES:EDI,ESI                ; 004ac5d2
    TEST EAX,EAX                        ; 004ac5d4
    JLE 0x004ac711                      ; 004ac5d6
        ;   XREF to: 004ac711 (CONDITIONAL_JUMP)  ; LAB_004ac711
    PUSH dword ptr [ESP + 0x60]         ; 004ac5dc
        ;   Label: LAB_004ac5dc
    PUSH dword ptr [ESP + 0x58]         ; 004ac5e0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004ac5e4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004ac5e9
    FLD float ptr [ESP + 0xc8]          ; 004ac5f0
    ADD ESP,0x8                         ; 004ac5f7
    PUSH 0x3ecccccd                     ; 004ac5fa
    PUSH 0x0                            ; 004ac5ff
    FSTP float ptr [ESP + 0xb0]         ; 004ac601
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004ac608
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004ac60d
    FLD float ptr [ESP + 0xc8]          ; 004ac614
    ADD ESP,0x8                         ; 004ac61b
    FLD1                                ; 004ac61e
    FSUB ST0,ST1                        ; 004ac620
    FMUL float ptr [ESP + 0x58]         ; 004ac622
    FLD float ptr [ESP + 0x64]          ; 004ac626
    FMULP ST2                           ; 004ac62a
    PUSH dword ptr [ESP + 0x68]         ; 004ac62c
    FADDP                               ; 004ac630
    PUSH dword ptr [ESP + 0x60]         ; 004ac632
    FSTP float ptr [ESP + 0xb4]         ; 004ac636
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004ac63d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004ac642
    FLD float ptr [ESP + 0xc8]          ; 004ac649
    ADD ESP,0x8                         ; 004ac650
    LEA EAX,[ESP + 0xa8]                ; 004ac653
    PUSH EAX                            ; 004ac65a
    LEA ESI,[ESP + 0x94]                ; 004ac65b
    LEA EDI,[ESP + 0xa0]                ; 004ac662
    PUSH EBP                            ; 004ac669
    FSTP float ptr [ESP + 0xb8]         ; 004ac66a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70 ; 004ac671
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA ESI,[ESP + 0x98]                ; 004ac676
    ADD ESP,0x8                         ; 004ac67d
    MOVSD ES:EDI,ESI                    ; 004ac680
    MOVSD ES:EDI,ESI                    ; 004ac681
    MOVSD ES:EDI,ESI                    ; 004ac682
    LEA EAX,[ESP + 0x9c]                ; 004ac683
    LEA ESI,[ESP + 0xa8]                ; 004ac68a
    CMP ESI,EAX                         ; 004ac691
    JZ 0x004ac6bf                       ; 004ac693
        ;   XREF to: 004ac6bf (CONDITIONAL_JUMP)  ; LAB_004ac6bf
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004ac695
    MOV dword ptr [ESP + 0xa8],EAX      ; 004ac69c
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004ac6a3
    MOV dword ptr [ESP + 0xac],EAX      ; 004ac6aa
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004ac6b1
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ac6b8
    PUSH 0xffff                         ; 004ac6bf
        ;   Label: LAB_004ac6bf
    PUSH 0x0                            ; 004ac6c4
    PUSH 0x3fc00000                     ; 004ac6c6
    PUSH 0x3f000000                     ; 004ac6cb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004ac6d0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd0],EAX      ; 004ac6d5
    FLD float ptr [ESP + 0xd0]          ; 004ac6dc
    ADD ESP,0x8                         ; 004ac6e3
    SUB ESP,0x4                         ; 004ac6e6
    LEA EAX,[ESP + 0xb4]                ; 004ac6e9
    FSTP float ptr [ESP]                ; 004ac6f0
    PUSH EAX                            ; 004ac6f3
    MOV EDX,dword ptr [0x00614d30]      ; 004ac6f4 | g_CFireEffectPtr
    PUSH EDX                            ; 004ac6fa
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 004ac6fb
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004ac700
    INC EBX                             ; 004ac703
    CMP EBX,dword ptr [ESP + 0xbc]      ; 004ac704
    JL 0x004ac5dc                       ; 004ac70b
        ;   XREF to: 004ac5dc (CONDITIONAL_JUMP)  ; LAB_004ac5dc
    MOV EBX,dword ptr [EBP + 0x2b8]     ; 004ac711
        ;   Label: LAB_004ac711
    CMP EBX,0x44e10000                  ; 004ac717
    JLE 0x004ac818                      ; 004ac71d
        ;   XREF to: 004ac818 (CONDITIONAL_JUMP)  ; LAB_004ac818
    CMP EBX,0x44ed8000                  ; 004ac723
    JGE 0x004ac818                      ; 004ac729
        ;   XREF to: 004ac818 (CONDITIONAL_JUMP)  ; LAB_004ac818
    PUSH EBP                            ; 004ac72f
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004ac730
    LEA ESI,[ESP + 0x10]                ; 004ac736
    LEA EDI,[ESP + 0x40]                ; 004ac73a
    CALL dword ptr [EAX + 0x24]         ; 004ac73e
    MOV ECX,0x6                         ; 004ac741
    LEA ESI,[ESP + 0x10]                ; 004ac746
    ADD ESP,0x4                         ; 004ac74a
    MOVSD.REP ES:EDI,ESI                ; 004ac74d
    PUSH dword ptr [ESP + 0x48]         ; 004ac74f
    PUSH dword ptr [ESP + 0x40]         ; 004ac753
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004ac757
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004ac75c
    FLD float ptr [ESP + 0xc8]          ; 004ac763
    ADD ESP,0x8                         ; 004ac76a
    PUSH dword ptr [ESP + 0x50]         ; 004ac76d
    FSTP float ptr [ESP + 0x70]         ; 004ac771
    MOV EAX,dword ptr [ESP + 0x44]      ; 004ac775
    PUSH dword ptr [ESP + 0x48]         ; 004ac779
    MOV dword ptr [ESP + 0x78],EAX      ; 004ac77d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004ac781
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc8],EAX      ; 004ac786
    FLD float ptr [ESP + 0xc8]          ; 004ac78d
    ADD ESP,0x8                         ; 004ac794
    LEA EAX,[ESP + 0x6c]                ; 004ac797
    LEA EBX,[ESP + 0x6c]                ; 004ac79b
    PUSH EAX                            ; 004ac79f
    LEA ESI,[ESP + 0x7c]                ; 004ac7a0
    LEA EDI,[ESP + 0x88]                ; 004ac7a4
    PUSH EBP                            ; 004ac7ab
    FSTP float ptr [ESP + 0x7c]         ; 004ac7ac
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70 ; 004ac7b0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA ESI,[ESP + 0x80]                ; 004ac7b5
    ADD ESP,0x8                         ; 004ac7bc
    LEA EAX,[ESP + 0x84]                ; 004ac7bf
    MOVSD ES:EDI,ESI                    ; 004ac7c6
    MOVSD ES:EDI,ESI                    ; 004ac7c7
    MOVSD ES:EDI,ESI                    ; 004ac7c8
    CMP EBX,EAX                         ; 004ac7c9
    JZ 0x004ac7ee                       ; 004ac7cb
        ;   XREF to: 004ac7ee (CONDITIONAL_JUMP)  ; LAB_004ac7ee
    MOV EAX,dword ptr [ESP + 0x84]      ; 004ac7cd
    MOV dword ptr [ESP + 0x6c],EAX      ; 004ac7d4
    MOV EAX,dword ptr [ESP + 0x88]      ; 004ac7d8
    MOV dword ptr [ESP + 0x70],EAX      ; 004ac7df
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004ac7e3
    MOV dword ptr [ESP + 0x74],EAX      ; 004ac7ea
    PUSH 0xffff                         ; 004ac7ee
        ;   Label: LAB_004ac7ee
    PUSH 0x0                            ; 004ac7f3
    PUSH 0x10000                        ; 004ac7f5
    PUSH 0x4000                         ; 004ac7fa
    PUSH 0x0                            ; 004ac7ff
    LEA EAX,[ESP + 0x80]                ; 004ac801
    PUSH EAX                            ; 004ac808
    MOV EDI,dword ptr [0x00614d30]      ; 004ac809 | g_CFireEffectPtr
    PUSH EDI                            ; 004ac80f
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 004ac810
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004ac815
    PUSH 0x5d6b6f                       ; 004ac818 | = "frankx-bed1.wav"
        ;   Label: LAB_004ac818
    PUSH 0x3f800000                     ; 004ac81d
    PUSH EBP                            ; 004ac822
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac823
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac828
    PUSH 0x5d6b7f                       ; 004ac82b | = "frankx-bed2.wav"
    PUSH 0x43ed8000                     ; 004ac830
    PUSH EBP                            ; 004ac835
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac836
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac83b
    PUSH 0x5d6b8f                       ; 004ac83e | = "frankx-bed3.wav"
    PUSH 0x444a4000                     ; 004ac843
    PUSH EBP                            ; 004ac848
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac849
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac84e
    PUSH 0x5d6b9f                       ; 004ac851 | = "frankx-bed4.wav"
    PUSH 0x44834000                     ; 004ac856
    PUSH EBP                            ; 004ac85b
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac85c
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac861
    PUSH 0x5d6baf                       ; 004ac864 | = "frankx-water-dip.wav"
    PUSH 0x44ac8000                     ; 004ac869
    PUSH EBP                            ; 004ac86e
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac86f
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac874
    PUSH 0x5d6bc4                       ; 004ac877 | = "frankx-big-ramp-bed5.wav"
    PUSH 0x44ff0000                     ; 004ac87c
    PUSH EBP                            ; 004ac881
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac882
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac887
    POP EBX                             ; 004ac88a
    POP ESI                             ; 004ac88b
    POP EDI                             ; 004ac88c
    ADD ESP,0xb8                        ; 004ac88d
        ;   Label: caseD_4
    POP EBP                             ; 004ac893
    RET                                 ; 004ac894
    FLD float ptr [ESP + 0xc4]          ; 004ac895
        ;   Label: LAB_004ac895
    FMUL float ptr [0x005f71ec]         ; 004ac89c | g_FLOAT_005f71ec
    FADD float ptr [EBP + 0x2b8]        ; 004ac8a2
    FST float ptr [EBP + 0x2b8]         ; 004ac8a8
    FCOMP float ptr [0x005f71f0]        ; 004ac8ae | g_FLOAT_005f71f0
    FNSTSW AX                           ; 004ac8b4
    SAHF                                ; 004ac8b6
    JC 0x004ac4f2                       ; 004ac8b7
        ;   XREF to: 004ac4f2 (CONDITIONAL_JUMP)  ; LAB_004ac4f2
    FLD float ptr [0x005f71f0]          ; 004ac8bd | g_FLOAT_005f71f0
    FSUBR float ptr [EBP + 0x2b8]       ; 004ac8c3
    FSTP float ptr [EBP + 0x2b8]        ; 004ac8c9
    JMP 0x004ac4f2                      ; 004ac8cf
        ;   XREF to: 004ac4f2 (UNCONDITIONAL_JUMP)  ; LAB_004ac4f2
    FLD float ptr [0x005d6c79]          ; 004ac8d4 | g_FLOAT_005d6c79
        ;   Label: LAB_004ac8d4
    FSUB float ptr [EBP + 0x2b8]        ; 004ac8da
    FMUL double ptr [0x005d6c81]        ; 004ac8e0 | g_DOUBLE_005d6c81
    FMUL double ptr [0x005d6c89]        ; 004ac8e6 | g_DOUBLE_005d6c89
    JMP 0x004ac57f                      ; 004ac8ec
        ;   XREF to: 004ac57f (UNCONDITIONAL_JUMP)  ; LAB_004ac57f
    PUSH 0x5d6bdd                       ; 004ac8f1 | = "frankx-crane1.wav"
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 004ac8f6
    PUSH EBP                            ; 004ac8fb
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac8fc
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac901
    ADD ESP,0xb8                        ; 004ac904
    POP EBP                             ; 004ac90a
    RET                                 ; 004ac90b
    PUSH 0x5d6bef                       ; 004ac90c | = "frankx-crane2.wav"
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 004ac911
    PUSH EBP                            ; 004ac916
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac917
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac91c
    ADD ESP,0xb8                        ; 004ac91f
    POP EBP                             ; 004ac925
    RET                                 ; 004ac926
    PUSH 0x5d6c01                       ; 004ac927 | = "frankx-crane3.wav"
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 004ac92c
    PUSH EBP                            ; 004ac931
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac932
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac937
    ADD ESP,0xb8                        ; 004ac93a
    POP EBP                             ; 004ac940
    RET                                 ; 004ac941
    PUSH 0x5d6c13                       ; 004ac942 | = "frankx-arm.wav"
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 004ac947
    PUSH EBP                            ; 004ac94c
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac94d
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac952
    ADD ESP,0xb8                        ; 004ac955
    POP EBP                             ; 004ac95b
    RET                                 ; 004ac95c
    PUSH 0x5d6c22                       ; 004ac95d | = "frankx-flap-up.wav"
        ;   Label: caseD_6
    PUSH 0x44d4c000                     ; 004ac962
    PUSH EBP                            ; 004ac967
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac968
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac96d
    PUSH 0x5d6c35                       ; 004ac970 | = "frankx-flap-down.wav"
    PUSH 0x44eb2000                     ; 004ac975
    PUSH EBP                            ; 004ac97a
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac97b
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac980
    ADD ESP,0xb8                        ; 004ac983
    POP EBP                             ; 004ac989
    RET                                 ; 004ac98a
    PUSH 0x5d6c4a                       ; 004ac98b | = "frankx-big-ramp.wav"
        ;   Label: caseD_8
    PUSH 0x44f3c000                     ; 004ac990
    PUSH EBP                            ; 004ac995
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40 ; 004ac996
        ;   XREF to: 004aca40 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004ac99b
    ADD ESP,0xb8                        ; 004ac99e
    POP EBP                             ; 004ac9a4
    RET                                 ; 004ac9a5
    MOV EDX,0x5d6c5e                    ; 004ac9a6
        ;   Label: default
    MOV ECX,0x13e                       ; 004ac9ab
    PUSH 0x5d6c73                       ; 004ac9b0
    MOV dword ptr [0x01d046a0],EDX      ; 004ac9b5 | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004ac9bb | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 004ac9c1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 004ac9c6
    ADD ESP,0xb8                        ; 004ac9c9
    POP EBP                             ; 004ac9cf
    RET                                 ; 004ac9d0

