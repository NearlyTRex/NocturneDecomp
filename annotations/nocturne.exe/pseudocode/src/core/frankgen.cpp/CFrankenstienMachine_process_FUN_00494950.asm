; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(CFrankenstienMachine *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00494928 = 004949c2
;   TerminatedCString s_frankx_bed1_wav_00581bf6
;   TerminatedCString s_frankx_bed2_wav_00581c06
;   TerminatedCString s_frankx_bed3_wav_00581c16
;   TerminatedCString s_frankx_bed4_wav_00581c26
;   TerminatedCString s_frankx_water_dip_wav_00581c36
;   TerminatedCString s_frankx_big_ramp_bed5_wav_00581c4b
;   TerminatedCString s_frankx_crane1_wav_00581c64
;   TerminatedCString s_frankx_crane2_wav_00581c76
;   TerminatedCString s_frankx_crane3_wav_00581c88
;   TerminatedCString s_frankx_arm_wav_00581c9a
;   TerminatedCString s_frankx_flap_up_wav_00581ca9
;   TerminatedCString s_frankx_flap_down_wav_00581cbc
;   TerminatedCString s_frankx_big_ramp_wav_00581cd1
;   TerminatedCString s_core_frankgen_cpp_00581ce5
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
;   core_frankgen.cpp_CFrankenstienMachine_FUN_004950a0
;   core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
;   core_frankgen.cpp_findLeader_FUN_00495240
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00494950
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_process_FUN_00494950
    PUSH EBP                            ; 00494951
    SUB ESP,0x78                        ; 00494952
    MOV ESI,dword ptr [ESP + 0x84]      ; 00494955
    MOV EAX,dword ptr [ESI + 0x154]     ; 0049495c
    MOV [0x01c71340],EAX                ; 00494962 | DAT_01c71340
    CALL core_frankgen.cpp_findLeader_FUN_00495240 ; 00494967
        ;   XREF to: 00495240 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_findLeader_FUN_00495240()
    CMP EAX,ESI                         ; 0049496c
    JZ 0x00494c93                       ; 0049496e
        ;   XREF to: 00494c93 (CONDITIONAL_JUMP)  ; LAB_00494c93
    MOV EDX,dword ptr [EAX + 0x154]     ; 00494974
    MOV dword ptr [ESI + 0x154],EDX     ; 0049497a
    FLD float ptr [0x01c71340]          ; 00494980 | DAT_01c71340
        ;   Label: LAB_00494980
    FCOMP float ptr [ESI + 0x154]       ; 00494986
    FNSTSW AX                           ; 0049498c
    SAHF                                ; 0049498e
    JBE 0x004949a3                      ; 0049498f
        ;   XREF to: 004949a3 (CONDITIONAL_JUMP)  ; LAB_004949a3
    FLD float ptr [0x0059db70]          ; 00494991 | FLOAT_0059db70
    FSUBR float ptr [0x01c71340]        ; 00494997 | DAT_01c71340
    FSTP float ptr [0x01c71340]         ; 0049499d | DAT_01c71340
    PUSH ESI                            ; 004949a3
        ;   Label: LAB_004949a3
    CALL core_frankgen.cpp_CFrankenstienMachine_FUN_004950a0 ; 004949a4
        ;   XREF to: 004950a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_FUN_004950a0(CFrankenstienMachine * this_ptr)
    MOV EAX,dword ptr [ESI + 0x150]     ; 004949a9
    ADD ESP,0x4                         ; 004949af
    CMP EAX,0x8                         ; 004949b2
    JA 0x00494d98                       ; 004949b5
        ;   XREF to: 00494d98 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x494928]  ; 004949bb | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 004949c2
        ;   Label: caseD_0
    PUSH EBX                            ; 004949c3
    MOV EBX,dword ptr [ESI + 0x154]     ; 004949c4
    CMP EBX,0x44ac8000                  ; 004949ca
    JLE 0x00494b47                      ; 004949d0
        ;   XREF to: 00494b47 (CONDITIONAL_JUMP)  ; LAB_00494b47
    CMP EBX,0x44c58000                  ; 004949d6
    JGE 0x00494b47                      ; 004949dc
        ;   XREF to: 00494b47 (CONDITIONAL_JUMP)  ; LAB_00494b47
    CMP EBX,0x44b90000                  ; 004949e2
    JGE 0x00494cd2                      ; 004949e8
        ;   XREF to: 00494cd2 (CONDITIONAL_JUMP)  ; LAB_00494cd2
    FLD float ptr [ESI + 0x154]         ; 004949ee
    FADD float ptr [0x00581d18]         ; 004949f4 | FLOAT_00581d18
    FMUL double ptr [0x00581d08]        ; 004949fa | DOUBLE_00581d08
    FMUL double ptr [0x00581d20]        ; 00494a00 | DOUBLE_00581d20
    FADD float ptr [0x00581d28]         ; 00494a06 | FLOAT_00581d28
    FSTP float ptr [ESP + 0x78]         ; 00494a0c
        ;   Label: LAB_00494a0c
    PUSH dword ptr [ESP + 0x90]         ; 00494a10
    PUSH dword ptr [ESP + 0x7c]         ; 00494a17
    PUSH ESI                            ; 00494a1b
    CALL core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0 ; 00494a1c
        ;   XREF to: 00494dd0 (UNCONDITIONAL_CALL)  ; int core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0(CFrankenstienMachine * this_ptr, float emission_rate, float delta_time)
    ADD ESP,0xc                         ; 00494a21
    LEA EDX,[ESP + 0x20]                ; 00494a24
    MOV EBP,EAX                         ; 00494a28
    PUSH EDX                            ; 00494a2a
    MOV EDI,EAX                         ; 00494a2b
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00494a2d
    PUSH ESI                            ; 00494a33
    XOR EBX,EBX                         ; 00494a34
    CALL dword ptr [EAX + 0x14]         ; 00494a36
    ADD ESP,0x8                         ; 00494a39
    XOR EAX,EAX                         ; 00494a3c
    MOV EDX,0x40800000                  ; 00494a3e
    MOV dword ptr [ESP + 0x44],EAX      ; 00494a43
    MOV dword ptr [ESP + 0x48],EDX      ; 00494a47
    MOV dword ptr [ESP + 0x4c],EAX      ; 00494a4b
    TEST EBP,EBP                        ; 00494a4f
    JLE 0x00494b47                      ; 00494a51
        ;   XREF to: 00494b47 (CONDITIONAL_JUMP)  ; LAB_00494b47
    PUSH dword ptr [ESP + 0x2c]         ; 00494a57
        ;   Label: LAB_00494a57
    PUSH dword ptr [ESP + 0x24]         ; 00494a5b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00494a5f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 00494a64
    FLD float ptr [ESP + 0x84]          ; 00494a6b
    ADD ESP,0x8                         ; 00494a72
    PUSH 0x3ecccccd                     ; 00494a75
    PUSH 0x0                            ; 00494a7a
    FSTP float ptr [ESP + 0x64]         ; 00494a7c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00494a80
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 00494a85
    FLD float ptr [ESP + 0x84]          ; 00494a8c
    ADD ESP,0x8                         ; 00494a93
    FLD1                                ; 00494a96
    FSUB ST0,ST1                        ; 00494a98
    FMUL float ptr [ESP + 0x24]         ; 00494a9a
    FLD float ptr [ESP + 0x30]          ; 00494a9e
    FMULP ST2                           ; 00494aa2
    PUSH dword ptr [ESP + 0x34]         ; 00494aa4
    FADDP                               ; 00494aa8
    PUSH dword ptr [ESP + 0x2c]         ; 00494aaa
    FSTP float ptr [ESP + 0x68]         ; 00494aae
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00494ab2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 00494ab7
    FLD float ptr [ESP + 0x84]          ; 00494abe
    ADD ESP,0x8                         ; 00494ac5
    LEA EAX,[ESP + 0x5c]                ; 00494ac8
    PUSH EAX                            ; 00494acc
    LEA EAX,[ESP + 0x3c]                ; 00494acd
    PUSH EAX                            ; 00494ad1
    PUSH ESI                            ; 00494ad2
    FSTP float ptr [ESP + 0x70]         ; 00494ad3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00494ad7
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 00494adc
    LEA EAX,[ESP + 0x68]                ; 00494ade
    ADD ESP,0xc                         ; 00494ae2
    CMP EAX,EDX                         ; 00494ae5
    JZ 0x00494afd                       ; 00494ae7
        ;   XREF to: 00494afd (CONDITIONAL_JUMP)  ; LAB_00494afd
    MOV EAX,dword ptr [EDX]             ; 00494ae9
    MOV dword ptr [ESP + 0x5c],EAX      ; 00494aeb
    MOV EAX,dword ptr [EDX + 0x4]       ; 00494aef
    MOV dword ptr [ESP + 0x60],EAX      ; 00494af2
    MOV EAX,dword ptr [EDX + 0x8]       ; 00494af6
    MOV dword ptr [ESP + 0x64],EAX      ; 00494af9
    PUSH 0xffff                         ; 00494afd
        ;   Label: LAB_00494afd
    PUSH 0x0                            ; 00494b02
    PUSH 0x3fc00000                     ; 00494b04
    PUSH 0x3f000000                     ; 00494b09
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00494b0e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8c],EAX      ; 00494b13
    FLD float ptr [ESP + 0x8c]          ; 00494b1a
    ADD ESP,0x8                         ; 00494b21
    SUB ESP,0x4                         ; 00494b24
    LEA EAX,[ESP + 0x68]                ; 00494b27
    FSTP float ptr [ESP]                ; 00494b2b
    PUSH EAX                            ; 00494b2e
    MOV EBP,dword ptr [0x005b80f0]      ; 00494b2f | DAT_005b80f0
    PUSH EBP                            ; 00494b35
    INC EBX                             ; 00494b36
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 00494b37
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 00494b3c
    CMP EBX,EDI                         ; 00494b3f
    JL 0x00494a57                       ; 00494b41
        ;   XREF to: 00494a57 (CONDITIONAL_JUMP)  ; LAB_00494a57
    MOV EAX,dword ptr [ESI + 0x154]     ; 00494b47
        ;   Label: LAB_00494b47
    CMP EAX,0x44e10000                  ; 00494b4d
    JLE 0x00494c19                      ; 00494b52
        ;   XREF to: 00494c19 (CONDITIONAL_JUMP)  ; LAB_00494c19
    CMP EAX,0x44ed8000                  ; 00494b58
    JGE 0x00494c19                      ; 00494b5d
        ;   XREF to: 00494c19 (CONDITIONAL_JUMP)  ; LAB_00494c19
    LEA EAX,[ESP + 0x8]                 ; 00494b63
    PUSH EAX                            ; 00494b67
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00494b68
    PUSH ESI                            ; 00494b6e
    CALL dword ptr [EDX + 0x14]         ; 00494b6f
    ADD ESP,0x8                         ; 00494b72
    PUSH dword ptr [ESP + 0x14]         ; 00494b75
    PUSH dword ptr [ESP + 0xc]          ; 00494b79
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00494b7d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 00494b82
    FLD float ptr [ESP + 0x84]          ; 00494b89
    ADD ESP,0x8                         ; 00494b90
    PUSH dword ptr [ESP + 0x1c]         ; 00494b93
    FSTP float ptr [ESP + 0x54]         ; 00494b97
    MOV EAX,dword ptr [ESP + 0x10]      ; 00494b9b
    PUSH dword ptr [ESP + 0x14]         ; 00494b9f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00494ba3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00494ba7
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x84],EAX      ; 00494bac
    FLD float ptr [ESP + 0x84]          ; 00494bb3
    ADD ESP,0x8                         ; 00494bba
    LEA EAX,[ESP + 0x50]                ; 00494bbd
    PUSH EAX                            ; 00494bc1
    LEA EAX,[ESP + 0x6c]                ; 00494bc2
    PUSH EAX                            ; 00494bc6
    PUSH ESI                            ; 00494bc7
    FSTP float ptr [ESP + 0x64]         ; 00494bc8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00494bcc
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 00494bd1
    LEA EAX,[ESP + 0x5c]                ; 00494bd3
    ADD ESP,0xc                         ; 00494bd7
    CMP EAX,EDX                         ; 00494bda
    JZ 0x00494bf2                       ; 00494bdc
        ;   XREF to: 00494bf2 (CONDITIONAL_JUMP)  ; LAB_00494bf2
    MOV EAX,dword ptr [EDX]             ; 00494bde
    MOV dword ptr [ESP + 0x50],EAX      ; 00494be0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00494be4
    MOV dword ptr [ESP + 0x54],EAX      ; 00494be7
    MOV EAX,dword ptr [EDX + 0x8]       ; 00494beb
    MOV dword ptr [ESP + 0x58],EAX      ; 00494bee
    PUSH 0xffff                         ; 00494bf2
        ;   Label: LAB_00494bf2
    PUSH 0x0                            ; 00494bf7
    PUSH 0x10000                        ; 00494bf9
    PUSH 0x4000                         ; 00494bfe
    PUSH 0x0                            ; 00494c03
    LEA EAX,[ESP + 0x64]                ; 00494c05
    PUSH EAX                            ; 00494c09
    MOV ECX,dword ptr [0x005b80f0]      ; 00494c0a | DAT_005b80f0
    PUSH ECX                            ; 00494c10
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00494c11
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00494c16
    PUSH 0x581bf6                       ; 00494c19 | = "frankx-bed1.wav"
        ;   Label: LAB_00494c19
    PUSH 0x3f800000                     ; 00494c1e
    PUSH ESI                            ; 00494c23
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494c24
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494c29
    PUSH 0x581c06                       ; 00494c2c | = "frankx-bed2.wav"
    PUSH 0x43ed8000                     ; 00494c31
    PUSH ESI                            ; 00494c36
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494c37
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494c3c
    PUSH 0x581c16                       ; 00494c3f | = "frankx-bed3.wav"
    PUSH 0x444a4000                     ; 00494c44
    PUSH ESI                            ; 00494c49
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494c4a
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494c4f
    PUSH 0x581c26                       ; 00494c52 | = "frankx-bed4.wav"
    PUSH 0x44834000                     ; 00494c57
    PUSH ESI                            ; 00494c5c
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494c5d
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494c62
    PUSH 0x581c36                       ; 00494c65 | = "frankx-water-dip.wav"
    PUSH 0x44ac8000                     ; 00494c6a
    PUSH ESI                            ; 00494c6f
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494c70
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494c75
    PUSH 0x581c4b                       ; 00494c78 | = "frankx-big-ramp-bed5.wav"
    PUSH 0x44ff0000                     ; 00494c7d
    PUSH ESI                            ; 00494c82
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494c83
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494c88
    POP EBX                             ; 00494c8b
    POP EDI                             ; 00494c8c
    ADD ESP,0x78                        ; 00494c8d
        ;   Label: caseD_4
    POP EBP                             ; 00494c90
    POP ESI                             ; 00494c91
    RET                                 ; 00494c92
    FLD float ptr [ESP + 0x88]          ; 00494c93
        ;   Label: LAB_00494c93
    FMUL float ptr [0x0059db6c]         ; 00494c9a | FLOAT_0059db6c
    FADD float ptr [ESI + 0x154]        ; 00494ca0
    FST float ptr [ESI + 0x154]         ; 00494ca6
    FCOMP float ptr [0x0059db70]        ; 00494cac | FLOAT_0059db70
    FNSTSW AX                           ; 00494cb2
    SAHF                                ; 00494cb4
    JC 0x00494980                       ; 00494cb5
        ;   XREF to: 00494980 (CONDITIONAL_JUMP)  ; LAB_00494980
    FLD float ptr [0x0059db70]          ; 00494cbb | FLOAT_0059db70
    FSUBR float ptr [ESI + 0x154]       ; 00494cc1
    FSTP float ptr [ESI + 0x154]        ; 00494cc7
    JMP 0x00494980                      ; 00494ccd
        ;   XREF to: 00494980 (UNCONDITIONAL_JUMP)  ; LAB_00494980
    FLD float ptr [0x00581d00]          ; 00494cd2 | FLOAT_00581d00
        ;   Label: LAB_00494cd2
    FSUB float ptr [ESI + 0x154]        ; 00494cd8
    FMUL double ptr [0x00581d08]        ; 00494cde | DOUBLE_00581d08
    FMUL double ptr [0x00581d10]        ; 00494ce4 | DOUBLE_00581d10
    JMP 0x00494a0c                      ; 00494cea
        ;   XREF to: 00494a0c (UNCONDITIONAL_JUMP)  ; LAB_00494a0c
    PUSH 0x581c64                       ; 00494cef | = "frankx-crane1.wav"
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 00494cf4
    PUSH ESI                            ; 00494cf9
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494cfa
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494cff
    ADD ESP,0x78                        ; 00494d02
    POP EBP                             ; 00494d05
    POP ESI                             ; 00494d06
    RET                                 ; 00494d07
    PUSH 0x581c76                       ; 00494d08 | = "frankx-crane2.wav"
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 00494d0d
    PUSH ESI                            ; 00494d12
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494d13
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494d18
    ADD ESP,0x78                        ; 00494d1b
    POP EBP                             ; 00494d1e
    POP ESI                             ; 00494d1f
    RET                                 ; 00494d20
    PUSH 0x581c88                       ; 00494d21 | = "frankx-crane3.wav"
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 00494d26
    PUSH ESI                            ; 00494d2b
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494d2c
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494d31
    ADD ESP,0x78                        ; 00494d34
    POP EBP                             ; 00494d37
    POP ESI                             ; 00494d38
    RET                                 ; 00494d39
    PUSH 0x581c9a                       ; 00494d3a | = "frankx-arm.wav"
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 00494d3f
    PUSH ESI                            ; 00494d44
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494d45
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494d4a
    ADD ESP,0x78                        ; 00494d4d
    POP EBP                             ; 00494d50
    POP ESI                             ; 00494d51
    RET                                 ; 00494d52
    PUSH 0x581ca9                       ; 00494d53 | = "frankx-flap-up.wav"
        ;   Label: caseD_6
    PUSH 0x44d4c000                     ; 00494d58
    PUSH ESI                            ; 00494d5d
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494d5e
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494d63
    PUSH 0x581cbc                       ; 00494d66 | = "frankx-flap-down.wav"
    PUSH 0x44eb2000                     ; 00494d6b
    PUSH ESI                            ; 00494d70
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494d71
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494d76
    ADD ESP,0x78                        ; 00494d79
    POP EBP                             ; 00494d7c
    POP ESI                             ; 00494d7d
    RET                                 ; 00494d7e
    PUSH 0x581cd1                       ; 00494d7f | = "frankx-big-ramp.wav"
        ;   Label: caseD_8
    PUSH 0x44f3c000                     ; 00494d84
    PUSH ESI                            ; 00494d89
    CALL core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30 ; 00494d8a
        ;   XREF to: 00494e30 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine * this_ptr, float trigger_frame, char * sfx_filename)
    ADD ESP,0xc                         ; 00494d8f
    ADD ESP,0x78                        ; 00494d92
    POP EBP                             ; 00494d95
    POP ESI                             ; 00494d96
    RET                                 ; 00494d97
    MOV EDX,0x581ce5                    ; 00494d98 | = "..\\core\\frankgen.cpp"
        ;   Label: default
    MOV ECX,0x13e                       ; 00494d9d
    PUSH 0x581cfa                       ; 00494da2 | = "WTF!"
    MOV dword ptr [0x01cc4800],EDX      ; 00494da7 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00494dad | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00494db3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00494db8
    ADD ESP,0x78                        ; 00494dbb
    POP EBP                             ; 00494dbe
    POP ESI                             ; 00494dbf
    RET                                 ; 00494dc0

