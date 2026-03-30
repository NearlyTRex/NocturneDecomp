; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004d1a40(CFrankenstienMachine *this_ptr,float delta_time)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CBoundingBox3D   Stack[-0x80]:24  local_80
; CBoundingBox3D   Stack[-0x68]:24  local_68
; CVector3f        Stack[-0x50]:12  CStack_50
; CVector3f        Stack[-0x38]:12  CStack_38
; CVector3f        Stack[-0x2c]:12  CStack_2c
; CVector3f        Stack[-0x20]:12  CStack_20
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  fStack_c
;
; Referenced Globals:
;   void* switchdataD_004d1a18 = 004d1ab2
;   TerminatedCString s_frankx_bed1_wav_0062a9d8
;   TerminatedCString s_frankx_bed2_wav_0062a9e8
;   TerminatedCString s_frankx_bed3_wav_0062a9f8
;   TerminatedCString s_frankx_bed4_wav_0062aa08
;   TerminatedCString s_frankx_water_dip_wav_0062aa18
;   TerminatedCString s_frankx_big_ramp_bed5_wav_0062aa2d
;   TerminatedCString s_frankx_crane1_wav_0062aa46
;   TerminatedCString s_frankx_crane2_wav_0062aa58
;   TerminatedCString s_frankx_crane3_wav_0062aa6a
;   TerminatedCString s_frankx_arm_wav_0062aa7c
;   TerminatedCString s_frankx_flap_up_wav_0062aa8b
;   TerminatedCString s_frankx_flap_down_wav_0062aa9e
;   TerminatedCString s_frankx_big_ramp_wav_0062aab3
;   TerminatedCString s_core_frankgen_cpp_0062aac7
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;   core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0
;   core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190
;   core_frankgen.cpp_findLeader_FUN_004d2330
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d1a40
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004d1a40
    PUSH EBP                            ; 004d1a41
    SUB ESP,0x78                        ; 004d1a42
    MOV ESI,dword ptr [ESP + 0x84]      ; 004d1a45
    MOV EAX,dword ptr [ESI + 0x15c]     ; 004d1a4c
    MOV [0x02d7b7f0],EAX                ; 004d1a52 | FLOAT_02d7b7f0
    CALL core_frankgen.cpp_findLeader_FUN_004d2330 ; 004d1a57
        ;   XREF to: 004d2330 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_findLeader_FUN_004d2330()
    CMP EAX,ESI                         ; 004d1a5c
    JZ 0x004d1d83                       ; 004d1a5e
        ;   XREF to: 004d1d83 (CONDITIONAL_JUMP)  ; LAB_004d1d83
    MOV EDX,dword ptr [EAX + 0x15c]     ; 004d1a64
    MOV dword ptr [ESI + 0x15c],EDX     ; 004d1a6a
    FLD float ptr [0x02d7b7f0]          ; 004d1a70 | FLOAT_02d7b7f0
        ;   Label: LAB_004d1a70
    FCOMP float ptr [ESI + 0x15c]       ; 004d1a76
    FNSTSW AX                           ; 004d1a7c
    SAHF                                ; 004d1a7e
    JBE 0x004d1a93                      ; 004d1a7f
        ;   XREF to: 004d1a93 (CONDITIONAL_JUMP)  ; LAB_004d1a93
    FLD float ptr [0x0065e670]          ; 004d1a81 | FLOAT_0065e670
    FSUBR float ptr [0x02d7b7f0]        ; 004d1a87 | FLOAT_02d7b7f0
    FSTP float ptr [0x02d7b7f0]         ; 004d1a8d | FLOAT_02d7b7f0
    PUSH ESI                            ; 004d1a93
        ;   Label: LAB_004d1a93
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190 ; 004d1a94
        ;   XREF to: 004d2190 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(CFrankenstienMachine * this_ptr)
    MOV EAX,dword ptr [ESI + 0x158]     ; 004d1a99
    ADD ESP,0x4                         ; 004d1a9f
    CMP EAX,0x8                         ; 004d1aa2
    JA 0x004d1e88                       ; 004d1aa5
        ;   XREF to: 004d1e88 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4d1a18]  ; 004d1aab | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 004d1ab2
        ;   Label: caseD_0
    PUSH EBX                            ; 004d1ab3
    MOV EBX,dword ptr [ESI + 0x15c]     ; 004d1ab4
    CMP EBX,0x44ac8000                  ; 004d1aba
    JLE 0x004d1c37                      ; 004d1ac0
        ;   XREF to: 004d1c37 (CONDITIONAL_JUMP)  ; LAB_004d1c37
    CMP EBX,0x44c58000                  ; 004d1ac6
    JGE 0x004d1c37                      ; 004d1acc
        ;   XREF to: 004d1c37 (CONDITIONAL_JUMP)  ; LAB_004d1c37
    CMP EBX,0x44b90000                  ; 004d1ad2
    JGE 0x004d1dc2                      ; 004d1ad8
        ;   XREF to: 004d1dc2 (CONDITIONAL_JUMP)  ; LAB_004d1dc2
    FLD float ptr [ESI + 0x15c]         ; 004d1ade
    FADD float ptr [0x0062aaf5]         ; 004d1ae4 | FLOAT_0062aaf5
    FMUL double ptr [0x0062aae5]        ; 004d1aea | DOUBLE_0062aae5
    FMUL double ptr [0x0062aafd]        ; 004d1af0 | DOUBLE_0062aafd
    FADD float ptr [0x0062ab05]         ; 004d1af6 | FLOAT_0062ab05
    FSTP float ptr [ESP + 0x78]         ; 004d1afc
        ;   Label: LAB_004d1afc
    PUSH dword ptr [ESP + 0x90]         ; 004d1b00
    PUSH dword ptr [ESP + 0x7c]         ; 004d1b07
    PUSH ESI                            ; 004d1b0b
    CALL core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0 ; 004d1b0c
        ;   XREF to: 004d1ec0 (UNCONDITIONAL_CALL)  ; int core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0(CFrankenstienMachine * this_ptr, float emission_rate, float delta_time)
    ADD ESP,0xc                         ; 004d1b11
    LEA EDX,[ESP + 0x20]                ; 004d1b14
    MOV EBP,EAX                         ; 004d1b18
    PUSH EDX                            ; 004d1b1a
    MOV EDI,EAX                         ; 004d1b1b
    MOV EAX,dword ptr [ESI + 0x154]     ; 004d1b1d
    PUSH ESI                            ; 004d1b23
    XOR EBX,EBX                         ; 004d1b24
    CALL dword ptr [EAX + 0x14]         ; 004d1b26
    ADD ESP,0x8                         ; 004d1b29
    XOR EAX,EAX                         ; 004d1b2c
    MOV EDX,0x40800000                  ; 004d1b2e
    MOV dword ptr [ESP + 0x44],EAX      ; 004d1b33
    MOV dword ptr [ESP + 0x48],EDX      ; 004d1b37
    MOV dword ptr [ESP + 0x4c],EAX      ; 004d1b3b
    TEST EBP,EBP                        ; 004d1b3f
    JLE 0x004d1c37                      ; 004d1b41
        ;   XREF to: 004d1c37 (CONDITIONAL_JUMP)  ; LAB_004d1c37
    PUSH dword ptr [ESP + 0x2c]         ; 004d1b47
        ;   Label: LAB_004d1b47
    PUSH dword ptr [ESP + 0x24]         ; 004d1b4b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004d1b4f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 004d1b54
    FLD float ptr [ESP + 0x84]          ; 004d1b5b
    ADD ESP,0x8                         ; 004d1b62
    PUSH 0x3ecccccd                     ; 004d1b65
    PUSH 0x0                            ; 004d1b6a
    FSTP float ptr [ESP + 0x64]         ; 004d1b6c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004d1b70
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 004d1b75
    FLD float ptr [ESP + 0x84]          ; 004d1b7c
    ADD ESP,0x8                         ; 004d1b83
    FLD1                                ; 004d1b86
    FSUB ST0,ST1                        ; 004d1b88
    FMUL float ptr [ESP + 0x24]         ; 004d1b8a
    FLD float ptr [ESP + 0x30]          ; 004d1b8e
    FMULP ST2                           ; 004d1b92
    PUSH dword ptr [ESP + 0x34]         ; 004d1b94
    FADDP                               ; 004d1b98
    PUSH dword ptr [ESP + 0x2c]         ; 004d1b9a
    FSTP float ptr [ESP + 0x68]         ; 004d1b9e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004d1ba2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 004d1ba7
    FLD float ptr [ESP + 0x84]          ; 004d1bae
    ADD ESP,0x8                         ; 004d1bb5
    LEA EAX,[ESP + 0x5c]                ; 004d1bb8
    PUSH EAX                            ; 004d1bbc
    LEA EAX,[ESP + 0x3c]                ; 004d1bbd
    PUSH EAX                            ; 004d1bc1
    PUSH ESI                            ; 004d1bc2
    FSTP float ptr [ESP + 0x70]         ; 004d1bc3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d1bc7
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 004d1bcc
    LEA EAX,[ESP + 0x68]                ; 004d1bce
    ADD ESP,0xc                         ; 004d1bd2
    CMP EAX,EDX                         ; 004d1bd5
    JZ 0x004d1bed                       ; 004d1bd7
        ;   XREF to: 004d1bed (CONDITIONAL_JUMP)  ; LAB_004d1bed
    MOV EAX,dword ptr [EDX]             ; 004d1bd9
    MOV dword ptr [ESP + 0x5c],EAX      ; 004d1bdb
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d1bdf
    MOV dword ptr [ESP + 0x60],EAX      ; 004d1be2
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d1be6
    MOV dword ptr [ESP + 0x64],EAX      ; 004d1be9
    PUSH 0xffff                         ; 004d1bed
        ;   Label: LAB_004d1bed
    PUSH 0x0                            ; 004d1bf2
    PUSH 0x3fc00000                     ; 004d1bf4
    PUSH 0x3f000000                     ; 004d1bf9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004d1bfe
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8c],EAX      ; 004d1c03
    FLD float ptr [ESP + 0x8c]          ; 004d1c0a
    ADD ESP,0x8                         ; 004d1c11
    SUB ESP,0x4                         ; 004d1c14
    LEA EAX,[ESP + 0x68]                ; 004d1c17
    FSTP float ptr [ESP]                ; 004d1c1b
    PUSH EAX                            ; 004d1c1e
    MOV EBP,dword ptr [0x0067a3d0]      ; 004d1c1f | g_CFireEffectPtr
    PUSH EBP                            ; 004d1c25 | g_CFireEffectInstance
    INC EBX                             ; 004d1c26
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004d1c27
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004d1c2c
    CMP EBX,EDI                         ; 004d1c2f
    JL 0x004d1b47                       ; 004d1c31
        ;   XREF to: 004d1b47 (CONDITIONAL_JUMP)  ; LAB_004d1b47
    MOV EAX,dword ptr [ESI + 0x15c]     ; 004d1c37
        ;   Label: LAB_004d1c37
    CMP EAX,0x44e10000                  ; 004d1c3d
    JLE 0x004d1d09                      ; 004d1c42
        ;   XREF to: 004d1d09 (CONDITIONAL_JUMP)  ; LAB_004d1d09
    CMP EAX,0x44ed8000                  ; 004d1c48
    JGE 0x004d1d09                      ; 004d1c4d
        ;   XREF to: 004d1d09 (CONDITIONAL_JUMP)  ; LAB_004d1d09
    LEA EAX,[ESP + 0x8]                 ; 004d1c53
    PUSH EAX                            ; 004d1c57
    MOV EDX,dword ptr [ESI + 0x154]     ; 004d1c58
    PUSH ESI                            ; 004d1c5e
    CALL dword ptr [EDX + 0x14]         ; 004d1c5f
    ADD ESP,0x8                         ; 004d1c62
    PUSH dword ptr [ESP + 0x14]         ; 004d1c65
    PUSH dword ptr [ESP + 0xc]          ; 004d1c69
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004d1c6d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 004d1c72
    FLD float ptr [ESP + 0x84]          ; 004d1c79
    ADD ESP,0x8                         ; 004d1c80
    PUSH dword ptr [ESP + 0x1c]         ; 004d1c83
    FSTP float ptr [ESP + 0x54]         ; 004d1c87
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d1c8b
    PUSH dword ptr [ESP + 0x14]         ; 004d1c8f
    MOV dword ptr [ESP + 0x5c],EAX      ; 004d1c93
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004d1c97
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 004d1c9c
    FLD float ptr [ESP + 0x84]          ; 004d1ca3
    ADD ESP,0x8                         ; 004d1caa
    LEA EAX,[ESP + 0x50]                ; 004d1cad
    PUSH EAX                            ; 004d1cb1
    LEA EAX,[ESP + 0x6c]                ; 004d1cb2
    PUSH EAX                            ; 004d1cb6
    PUSH ESI                            ; 004d1cb7
    FSTP float ptr [ESP + 0x64]         ; 004d1cb8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d1cbc
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 004d1cc1
    LEA EAX,[ESP + 0x5c]                ; 004d1cc3
    ADD ESP,0xc                         ; 004d1cc7
    CMP EAX,EDX                         ; 004d1cca
    JZ 0x004d1ce2                       ; 004d1ccc
        ;   XREF to: 004d1ce2 (CONDITIONAL_JUMP)  ; LAB_004d1ce2
    MOV EAX,dword ptr [EDX]             ; 004d1cce
    MOV dword ptr [ESP + 0x50],EAX      ; 004d1cd0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d1cd4
    MOV dword ptr [ESP + 0x54],EAX      ; 004d1cd7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d1cdb
    MOV dword ptr [ESP + 0x58],EAX      ; 004d1cde
    PUSH 0xffff                         ; 004d1ce2
        ;   Label: LAB_004d1ce2
    PUSH 0x0                            ; 004d1ce7
    PUSH 0x10000                        ; 004d1ce9
    PUSH 0x4000                         ; 004d1cee
    PUSH 0x0                            ; 004d1cf3
    LEA EAX,[ESP + 0x64]                ; 004d1cf5
    PUSH EAX                            ; 004d1cf9
    MOV ECX,dword ptr [0x0067a3d0]      ; 004d1cfa | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 004d1d00 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 004d1d01
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004d1d06
    PUSH 0x62a9d8                       ; 004d1d09 | = "frankx-bed1.wav"
        ;   Label: LAB_004d1d09
    PUSH 0x3f800000                     ; 004d1d0e
    PUSH ESI                            ; 004d1d13
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1d14
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1d19
    PUSH 0x62a9e8                       ; 004d1d1c | = "frankx-bed2.wav"
    PUSH 0x43ed8000                     ; 004d1d21
    PUSH ESI                            ; 004d1d26
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1d27
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1d2c
    PUSH 0x62a9f8                       ; 004d1d2f | = "frankx-bed3.wav"
    PUSH 0x444a4000                     ; 004d1d34
    PUSH ESI                            ; 004d1d39
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1d3a
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1d3f
    PUSH 0x62aa08                       ; 004d1d42 | = "frankx-bed4.wav"
    PUSH 0x44834000                     ; 004d1d47
    PUSH ESI                            ; 004d1d4c
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1d4d
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1d52
    PUSH 0x62aa18                       ; 004d1d55 | = "frankx-water-dip.wav"
    PUSH 0x44ac8000                     ; 004d1d5a
    PUSH ESI                            ; 004d1d5f
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1d60
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1d65
    PUSH 0x62aa2d                       ; 004d1d68 | = "frankx-big-ramp-bed5.wav"
    PUSH 0x44ff0000                     ; 004d1d6d
    PUSH ESI                            ; 004d1d72
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1d73
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1d78
    POP EBX                             ; 004d1d7b
    POP EDI                             ; 004d1d7c
    ADD ESP,0x78                        ; 004d1d7d
        ;   Label: caseD_7
    POP EBP                             ; 004d1d80
    POP ESI                             ; 004d1d81
    RET                                 ; 004d1d82
    FLD float ptr [ESP + 0x88]          ; 004d1d83
        ;   Label: LAB_004d1d83
    FMUL float ptr [0x0065e66c]         ; 004d1d8a | FLOAT_0065e66c
    FADD float ptr [ESI + 0x15c]        ; 004d1d90
    FST float ptr [ESI + 0x15c]         ; 004d1d96
    FCOMP float ptr [0x0065e670]        ; 004d1d9c | FLOAT_0065e670
    FNSTSW AX                           ; 004d1da2
    SAHF                                ; 004d1da4
    JC 0x004d1a70                       ; 004d1da5
        ;   XREF to: 004d1a70 (CONDITIONAL_JUMP)  ; LAB_004d1a70
    FLD float ptr [0x0065e670]          ; 004d1dab | FLOAT_0065e670
    FSUBR float ptr [ESI + 0x15c]       ; 004d1db1
    FSTP float ptr [ESI + 0x15c]        ; 004d1db7
    JMP 0x004d1a70                      ; 004d1dbd
        ;   XREF to: 004d1a70 (UNCONDITIONAL_JUMP)  ; LAB_004d1a70
    FLD float ptr [0x0062aae1]          ; 004d1dc2 | FLOAT_0062aae1
        ;   Label: LAB_004d1dc2
    FSUB float ptr [ESI + 0x15c]        ; 004d1dc8
    FMUL double ptr [0x0062aae5]        ; 004d1dce | DOUBLE_0062aae5
    FMUL double ptr [0x0062aaed]        ; 004d1dd4 | DOUBLE_0062aaed
    JMP 0x004d1afc                      ; 004d1dda
        ;   XREF to: 004d1afc (UNCONDITIONAL_JUMP)  ; LAB_004d1afc
    PUSH 0x62aa46                       ; 004d1ddf | = "frankx-crane1.wav"
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 004d1de4
    PUSH ESI                            ; 004d1de9
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1dea
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1def
    ADD ESP,0x78                        ; 004d1df2
    POP EBP                             ; 004d1df5
    POP ESI                             ; 004d1df6
    RET                                 ; 004d1df7
    PUSH 0x62aa58                       ; 004d1df8 | = "frankx-crane2.wav"
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 004d1dfd
    PUSH ESI                            ; 004d1e02
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1e03
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1e08
    ADD ESP,0x78                        ; 004d1e0b
    POP EBP                             ; 004d1e0e
    POP ESI                             ; 004d1e0f
    RET                                 ; 004d1e10
    PUSH 0x62aa6a                       ; 004d1e11 | = "frankx-crane3.wav"
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 004d1e16
    PUSH ESI                            ; 004d1e1b
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1e1c
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1e21
    ADD ESP,0x78                        ; 004d1e24
    POP EBP                             ; 004d1e27
    POP ESI                             ; 004d1e28
    RET                                 ; 004d1e29
    PUSH 0x62aa7c                       ; 004d1e2a | = "frankx-arm.wav"
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 004d1e2f
    PUSH ESI                            ; 004d1e34
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1e35
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1e3a
    ADD ESP,0x78                        ; 004d1e3d
    POP EBP                             ; 004d1e40
    POP ESI                             ; 004d1e41
    RET                                 ; 004d1e42
    PUSH 0x62aa8b                       ; 004d1e43 | = "frankx-flap-up.wav"
        ;   Label: caseD_6
    PUSH 0x44d4c000                     ; 004d1e48
    PUSH ESI                            ; 004d1e4d
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1e4e
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1e53
    PUSH 0x62aa9e                       ; 004d1e56 | = "frankx-flap-down.wav"
    PUSH 0x44eb2000                     ; 004d1e5b
    PUSH ESI                            ; 004d1e60
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1e61
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1e66
    ADD ESP,0x78                        ; 004d1e69
    POP EBP                             ; 004d1e6c
    POP ESI                             ; 004d1e6d
    RET                                 ; 004d1e6e
    PUSH 0x62aab3                       ; 004d1e6f | = "frankx-big-ramp.wav"
        ;   Label: caseD_8
    PUSH 0x44f3c000                     ; 004d1e74
    PUSH ESI                            ; 004d1e79
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20 ; 004d1e7a
        ;   XREF to: 004d1f20 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 004d1e7f
    ADD ESP,0x78                        ; 004d1e82
    POP EBP                             ; 004d1e85
    POP ESI                             ; 004d1e86
    RET                                 ; 004d1e87
    MOV EDX,0x62aac7                    ; 004d1e88 | = "..\\core\\frankgen.cpp"
        ;   Label: default
    MOV ECX,0x13e                       ; 004d1e8d
    PUSH 0x62aadc                       ; 004d1e92 | = "WTF!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004d1e97 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004d1e9d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004d1ea3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004d1ea8
    ADD ESP,0x78                        ; 004d1eab
    POP EBP                             ; 004d1eae
    POP ESI                             ; 004d1eaf
    RET                                 ; 004d1eb0

