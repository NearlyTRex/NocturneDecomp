; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_CTurret_process_FUN_005497f0(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x30]:1  local_30
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_005497d0 = 00549822
;   undefined4 s_turret-ani?.wav_00596d1c+1
;   string s_turret-ani?.wav_00596d2d
;   string s_..\\core\\turret.cpp_00596d3d
;   string s_CTurret::process_-_invalid_state_00596d50
;   string s_turret-loop.wav_*_%f_00596d71
;   string s_turret-tail.wav_00596d86
;   undefined4 DAT_00596d9d
;   undefined4 DAT_005b7650
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_turret.cpp_CTurret_updatePatrol_FUN_0054a920
;   core_turret.cpp_CTurret_updateTargeting_FUN_0054a110
;   core_xform.cpp_FUN_0055d610
;   core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_004c8440
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
;   sound_sndmain.cpp_killSfx_FUN_00527230
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005497f0
        ;   Label: core_turret.cpp_CTurret_process_FUN_005497f0
    PUSH ESI                            ; 005497f1
    PUSH EDI                            ; 005497f2
    PUSH EBP                            ; 005497f3
    MOV EBP,ESP                         ; 005497f4
    SUB ESP,0xe8                        ; 005497f6
    AND ESP,0xfffffff8                  ; 005497fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005497ff
    MOV EAX,dword ptr [EBX + 0x6f8]     ; 00549802
    MOV dword ptr [EBX + 0x2ec],0xffffffff ; 00549808
    CMP EAX,0x4                         ; 00549812
    JA 0x00549c10                       ; 00549815
        ;   XREF to: 00549c10 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5497d0]  ; 0054981b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x30]                ; 00549822
        ;   Label: caseD_0
    LEA EDX,[EBX + 0x570]               ; 00549825
    CMP EAX,EDX                         ; 0054982b
    JZ 0x0054983f                       ; 0054982d
        ;   XREF to: 0054983f (CONDITIONAL_JUMP)  ; LAB_0054983f
    MOV ECX,dword ptr [EDX]             ; 0054982f
    MOV dword ptr [EAX],ECX             ; 00549831
    MOV ECX,dword ptr [EDX + 0x4]       ; 00549833
    MOV dword ptr [EAX + 0x4],ECX       ; 00549836
    MOV ECX,dword ptr [EDX + 0x8]       ; 00549839
    MOV dword ptr [EAX + 0x8],ECX       ; 0054983c
    LEA EAX,[EBX + 0x6fc]               ; 0054983f
        ;   Label: LAB_0054983f
    PUSH EAX                            ; 00549845
    MOV EDX,dword ptr [0x005b7650]      ; 00549846 | DAT_005b7650
    PUSH EDX                            ; 0054984c
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0054984d
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 00549852
    TEST EAX,EAX                        ; 00549855
    JZ 0x00549946                       ; 00549857
        ;   XREF to: 00549946 (CONDITIONAL_JUMP)  ; LAB_00549946
    FLD float ptr [EBX + 0x760]         ; 0054985d
    MOV ECX,dword ptr [EBX + 0x8b0]     ; 00549863
    MOV dword ptr [EBX + 0x6f8],0x1     ; 00549869
    PUSH ECX                            ; 00549873
    FSTP float ptr [EBX + 0x774]        ; 00549874
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0054987a
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0054987f
    PUSH 0x596d1d                       ; 00549882 | s_turret-ani?.wav_00596d1c+1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00549887
        ;   Label: LAB_00549887
    PUSH EBX                            ; 0054988d
    CALL dword ptr [EAX + 0x24]         ; 0054988e
    ADD ESP,0x8                         ; 00549891
    MOV dword ptr [EBX + 0x8b0],EAX     ; 00549894
    CMP dword ptr [EBX + 0x2ec],0x0     ; 0054989a
        ;   Label: LAB_0054989a
    JL 0x005498b3                       ; 005498a1
        ;   XREF to: 005498b3 (CONDITIONAL_JUMP)  ; LAB_005498b3
    PUSH EBX                            ; 005498a3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005498a4
    CALL dword ptr [EAX + 0xe8]         ; 005498aa
    ADD ESP,0x4                         ; 005498b0
    FLD float ptr [EBX + 0x2f8]         ; 005498b3
        ;   Label: LAB_005498b3
    FLD float ptr [EBX + 0x864]         ; 005498b9
    MOV EDI,dword ptr [EBX + 0x8a8]     ; 005498bf
    FLD float ptr [EBP + 0x18]          ; 005498c5
    FXCH                                ; 005498c8
    FSUB ST0,ST1                        ; 005498ca
    FXCH ST2                            ; 005498cc
    FSUBRP                              ; 005498ce
    FXCH                                ; 005498d0
    FSTP float ptr [EBX + 0x864]        ; 005498d2
    FSTP float ptr [EBX + 0x2f8]        ; 005498d8
    TEST EDI,EDI                        ; 005498de
    JG 0x005498f5                       ; 005498e0
        ;   XREF to: 005498f5 (CONDITIONAL_JUMP)  ; LAB_005498f5
    FLD float ptr [EBX + 0x864]         ; 005498e2
    FLDZ                                ; 005498e8
    FCOMPP                              ; 005498ea
    FNSTSW AX                           ; 005498ec
    SAHF                                ; 005498ee
    JNC 0x00549c72                      ; 005498ef
        ;   XREF to: 00549c72 (CONDITIONAL_JUMP)  ; LAB_00549c72
    MOV ECX,dword ptr [EBX + 0x8a8]     ; 005498f5
        ;   Label: LAB_005498f5
    PUSH 0x3f8e38e4                     ; 005498fb
    DEC ECX                             ; 00549900
    PUSH 0x3f666666                     ; 00549901
    MOV dword ptr [EBX + 0x8a8],ECX     ; 00549906
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054990c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xec],EAX      ; 00549911
    FLD float ptr [ESP + 0xec]          ; 00549918
    ADD ESP,0x8                         ; 0054991f
    MOV ESI,dword ptr [EBX + 0x8ac]     ; 00549922
    FSTP float ptr [ESP]                ; 00549928
    PUSH dword ptr [ESP]                ; 0054992b
    PUSH ESI                            ; 0054992e
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130 ; 0054992f
        ;   XREF to: 00527130 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130()
    ADD ESP,0x8                         ; 00549934
    TEST EAX,EAX                        ; 00549937
    JZ 0x00549c38                       ; 00549939
        ;   XREF to: 00549c38 (CONDITIONAL_JUMP)  ; LAB_00549c38
    MOV ESP,EBP                         ; 0054993f
        ;   Label: LAB_0054993f
    POP EBP                             ; 00549941
    POP EDI                             ; 00549942
    POP ESI                             ; 00549943
    POP EBX                             ; 00549944
    RET                                 ; 00549945
    MOV dword ptr [EBX + 0x774],EAX     ; 00549946
        ;   Label: LAB_00549946
    JMP 0x0054989a                      ; 0054994c
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    FLD float ptr [EBX + 0x774]         ; 00549951
        ;   Label: caseD_1
    FSUB float ptr [EBP + 0x18]         ; 00549957
    FST float ptr [EBX + 0x774]         ; 0054995a
    FLDZ                                ; 00549960
    FCOMPP                              ; 00549962
    FNSTSW AX                           ; 00549964
    SAHF                                ; 00549966
    JC 0x0054989a                       ; 00549967
        ;   XREF to: 0054989a (CONDITIONAL_JUMP)  ; LAB_0054989a
    MOV dword ptr [EBX + 0x774],0x0     ; 0054996d
    MOV dword ptr [EBX + 0x6f8],0x2     ; 00549977
    MOV dword ptr [EBX + 0x2f8],0x0     ; 00549981
    JMP 0x0054989a                      ; 0054998b
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    LEA EAX,[EBX + 0x6fc]               ; 00549990
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0x2ec],0xff    ; 00549996
    PUSH EAX                            ; 005499a0
    MOV EAX,[0x005b7650]                ; 005499a1 | DAT_005b7650
    MOV dword ptr [EBX + 0x2f0],0x0     ; 005499a6
    PUSH EAX                            ; 005499b0
    MOV dword ptr [EBX + 0x2f4],0x0     ; 005499b1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005499bb
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 005499c0
    TEST EAX,EAX                        ; 005499c3
    JNZ 0x005499e2                      ; 005499c5
        ;   XREF to: 005499e2 (CONDITIONAL_JUMP)  ; LAB_005499e2
    MOV dword ptr [EBX + 0x6f8],0x3     ; 005499c7
    MOV EAX,dword ptr [EBX + 0x764]     ; 005499d1
    MOV dword ptr [EBX + 0x774],EAX     ; 005499d7
    JMP 0x0054989a                      ; 005499dd
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    PUSH dword ptr [EBP + 0x18]         ; 005499e2
        ;   Label: LAB_005499e2
    PUSH EBX                            ; 005499e5
    CALL core_turret.cpp_CTurret_updateTargeting_FUN_0054a110 ; 005499e6
        ;   XREF to: 0054a110 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_CTurret_updateTargeting_FUN_0054a110()
    ADD ESP,0x8                         ; 005499eb
    MOV dword ptr [EBX + 0x774],0x0     ; 005499ee
    JMP 0x0054989a                      ; 005499f8
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    LEA EAX,[EBX + 0x6fc]               ; 005499fd
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00549a03
    PUSH EAX                            ; 00549a0d
    MOV ESI,dword ptr [0x005b7650]      ; 00549a0e | DAT_005b7650
    MOV dword ptr [EBX + 0x2f0],0xff    ; 00549a14
    PUSH ESI                            ; 00549a1e
    MOV dword ptr [EBX + 0x2f4],0x0     ; 00549a1f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00549a29
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 00549a2e
    TEST EAX,EAX                        ; 00549a31
    JZ 0x00549a58                       ; 00549a33
        ;   XREF to: 00549a58 (CONDITIONAL_JUMP)  ; LAB_00549a58
    MOV dword ptr [EBX + 0x774],0x0     ; 00549a35
    MOV dword ptr [EBX + 0x6f8],0x2     ; 00549a3f
    MOV dword ptr [EBX + 0x2f8],0x0     ; 00549a49
    JMP 0x0054989a                      ; 00549a53
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    FLD float ptr [EBX + 0x774]         ; 00549a58
        ;   Label: LAB_00549a58
    FSUB float ptr [EBP + 0x18]         ; 00549a5e
    FST float ptr [EBX + 0x774]         ; 00549a61
    FLDZ                                ; 00549a67
    FCOMPP                              ; 00549a69
    FNSTSW AX                           ; 00549a6b
    SAHF                                ; 00549a6d
    JC 0x00549a9f                       ; 00549a6e
        ;   XREF to: 00549a9f (CONDITIONAL_JUMP)  ; LAB_00549a9f
    FLD float ptr [EBX + 0x768]         ; 00549a70
    MOV EDI,dword ptr [EBX + 0x8b0]     ; 00549a76
    MOV dword ptr [EBX + 0x6f8],0x4     ; 00549a7c
    PUSH EDI                            ; 00549a86
    FSTP float ptr [EBX + 0x774]        ; 00549a87
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00549a8d
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00549a92
    PUSH 0x596d2d                       ; 00549a95 | = "turret-ani?.wav"
    JMP 0x00549887                      ; 00549a9a
        ;   XREF to: 00549887 (UNCONDITIONAL_JUMP)  ; LAB_00549887
    PUSH dword ptr [EBP + 0x18]         ; 00549a9f
        ;   Label: LAB_00549a9f
    PUSH EBX                            ; 00549aa2
    CALL core_turret.cpp_CTurret_updatePatrol_FUN_0054a920 ; 00549aa3
        ;   XREF to: 0054a920 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_CTurret_updatePatrol_FUN_0054a920()
    ADD ESP,0x8                         ; 00549aa8
    JMP 0x0054989a                      ; 00549aab
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    FLD float ptr [EBX + 0x774]         ; 00549ab0
        ;   Label: caseD_4
    LEA EAX,[EBX + 0x570]               ; 00549ab6
    FSUB float ptr [EBP + 0x18]         ; 00549abc
    MOV dword ptr [ESP + 0xdc],EAX      ; 00549abf
    FSTP float ptr [EBX + 0x774]        ; 00549ac6
    LEA EAX,[EBX + 0x30]                ; 00549acc
    FLD float ptr [EBX + 0x774]         ; 00549acf
    FLDZ                                ; 00549ad5
    MOV dword ptr [ESP + 0xe0],EAX      ; 00549ad7
    FCOMPP                              ; 00549ade
    FNSTSW AX                           ; 00549ae0
    SAHF                                ; 00549ae2
    JC 0x00549b3f                       ; 00549ae3
        ;   XREF to: 00549b3f (CONDITIONAL_JUMP)  ; LAB_00549b3f
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00549ae5
    MOV dword ptr [EBX + 0x6f8],0x0     ; 00549aec
    MOV ECX,dword ptr [ESP + 0xdc]      ; 00549af6
    MOV dword ptr [EBX + 0x774],0x0     ; 00549afd
    CMP EAX,ECX                         ; 00549b07
    JZ 0x0054989a                       ; 00549b09
        ;   XREF to: 0054989a (CONDITIONAL_JUMP)  ; LAB_0054989a
    MOV EAX,ECX                         ; 00549b0f
    FLD float ptr [EAX]                 ; 00549b11
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00549b13
    FSTP float ptr [EAX]                ; 00549b1a
    MOV EAX,ECX                         ; 00549b1c
    FLD float ptr [EAX + 0x4]           ; 00549b1e
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00549b21
    FSTP float ptr [EAX + 0x4]          ; 00549b28
    MOV EAX,ECX                         ; 00549b2b
    FLD float ptr [EAX + 0x8]           ; 00549b2d
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00549b30
    FSTP float ptr [EAX + 0x8]          ; 00549b37
    JMP 0x0054989a                      ; 00549b3a
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00549b3f
        ;   Label: LAB_00549b3f
    PUSH ESI                            ; 00549b46
    LEA ESI,[ESP + 0xbc]                ; 00549b47
    LEA EDI,[ESP + 0x6c]                ; 00549b4e
    CALL core_xform.cpp_FUN_0055d610    ; 00549b52
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    LEA ESI,[ESP + 0xbc]                ; 00549b57
    ADD ESP,0x4                         ; 00549b5e
    MOVSD ES:EDI,ESI                    ; 00549b61
    MOVSD ES:EDI,ESI                    ; 00549b62
    MOVSD ES:EDI,ESI                    ; 00549b63
    MOVSD ES:EDI,ESI                    ; 00549b64
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00549b65
    PUSH EDI                            ; 00549b6c
    LEA ESI,[ESP + 0x8c]                ; 00549b6d
    CALL core_xform.cpp_FUN_0055d610    ; 00549b74
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    LEA EDI,[ESP + 0xac]                ; 00549b79
    LEA ESI,[ESP + 0x8c]                ; 00549b80
    ADD ESP,0x4                         ; 00549b87
    MOVSD ES:EDI,ESI                    ; 00549b8a
    MOVSD ES:EDI,ESI                    ; 00549b8b
    MOVSD ES:EDI,ESI                    ; 00549b8c
    MOVSD ES:EDI,ESI                    ; 00549b8d
    FLD float ptr [EBP + 0x18]          ; 00549b8e
    FLD float ptr [EBX + 0x774]         ; 00549b91
    FADD ST0,ST1                        ; 00549b97
    FDIVP                               ; 00549b99
    FMUL double ptr [0x00596d9d]        ; 00549b9b | DAT_00596d9d
    SUB ESP,0x4                         ; 00549ba1
    LEA EAX,[ESP + 0xac]                ; 00549ba4
    FSTP float ptr [ESP]                ; 00549bab
    PUSH EAX                            ; 00549bae
    LEA EAX,[ESP + 0x70]                ; 00549baf
    PUSH EAX                            ; 00549bb3
    LEA ESI,[ESP + 0xa4]                ; 00549bb4
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00549bbb
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    ADD ESP,0xc                         ; 00549bc0
    LEA EAX,[ESP + 0x78]                ; 00549bc3
    LEA EDI,[ESP + 0x78]                ; 00549bc7
    PUSH EAX                            ; 00549bcb
    LEA EAX,[ESP + 0xcc]                ; 00549bcc
    LEA ESI,[ESP + 0x9c]                ; 00549bd3
    PUSH EAX                            ; 00549bda
    MOVSD ES:EDI,ESI                    ; 00549bdb
    MOVSD ES:EDI,ESI                    ; 00549bdc
    MOVSD ES:EDI,ESI                    ; 00549bdd
    MOVSD ES:EDI,ESI                    ; 00549bde
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0 ; 00549bdf
        ;   XREF to: 0055d5b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0()
    ADD ESP,0x8                         ; 00549be4
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00549be7
    CMP EAX,EDX                         ; 00549bee
    JZ 0x00549c02                       ; 00549bf0
        ;   XREF to: 00549c02 (CONDITIONAL_JUMP)  ; LAB_00549c02
    MOV ECX,dword ptr [EAX]             ; 00549bf2
    MOV dword ptr [EDX],ECX             ; 00549bf4
    MOV ECX,dword ptr [EAX + 0x4]       ; 00549bf6
    MOV dword ptr [EDX + 0x4],ECX       ; 00549bf9
    MOV ECX,dword ptr [EAX + 0x8]       ; 00549bfc
    MOV dword ptr [EDX + 0x8],ECX       ; 00549bff
    PUSH EBX                            ; 00549c02
        ;   Label: LAB_00549c02
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00549c03
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 00549c08
    JMP 0x0054989a                      ; 00549c0b
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    MOV EDX,0x596d3d                    ; 00549c10 | = "..\\core\\turret.cpp"
        ;   Label: default
    MOV ECX,0x15a                       ; 00549c15
    PUSH 0x596d50                       ; 00549c1a | = "CTurret::process - invalid state"
    MOV dword ptr [0x01cc4800],EDX      ; 00549c1f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00549c25 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00549c2b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00549c30
    JMP 0x0054989a                      ; 00549c33
        ;   XREF to: 0054989a (UNCONDITIONAL_JUMP)  ; LAB_0054989a
    FLD float ptr [ESP]                 ; 00549c38
        ;   Label: LAB_00549c38
    SUB ESP,0x8                         ; 00549c3b
    FSTP double ptr [ESP]               ; 00549c3e
    PUSH 0x596d71                       ; 00549c41 | = "turret-loop.wav * %f"
    LEA EAX,[ESP + 0x10]                ; 00549c46
    PUSH EAX                            ; 00549c4a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00549c4b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00549c50
    LEA EAX,[ESP + 0x4]                 ; 00549c53
    PUSH EAX                            ; 00549c57
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00549c58
    PUSH EBX                            ; 00549c5e
    CALL dword ptr [EDX + 0x28]         ; 00549c5f
    ADD ESP,0x8                         ; 00549c62
    MOV dword ptr [EBX + 0x8ac],EAX     ; 00549c65
    MOV ESP,EBP                         ; 00549c6b
    POP EBP                             ; 00549c6d
    POP EDI                             ; 00549c6e
    POP ESI                             ; 00549c6f
    POP EBX                             ; 00549c70
    RET                                 ; 00549c71
    PUSH 0x2                            ; 00549c72
        ;   Label: LAB_00549c72
    MOV EAX,dword ptr [EBX + 0x8ac]     ; 00549c74
    PUSH EAX                            ; 00549c7a
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10 ; 00549c7b
        ;   XREF to: 00526d10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00549c80
    MOV dword ptr [ESP + 0xe0],EDX      ; 00549c87
    FLD double ptr [ESP + 0xdc]         ; 00549c8e
    FLDZ                                ; 00549c95
    ADD ESP,0x8                         ; 00549c97
    FCOMPP                              ; 00549c9a
    FNSTSW AX                           ; 00549c9c
    SAHF                                ; 00549c9e
    JA 0x0054993f                       ; 00549c9f
        ;   XREF to: 0054993f (CONDITIONAL_JUMP)  ; LAB_0054993f
    MOV EDX,dword ptr [EBX + 0x8ac]     ; 00549ca5
    PUSH EDX                            ; 00549cab
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00549cac
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00549cb1
    PUSH 0x596d86                       ; 00549cb4 | = "turret-tail.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00549cb9
    PUSH EBX                            ; 00549cbf
    CALL dword ptr [EAX + 0x24]         ; 00549cc0
    ADD ESP,0x8                         ; 00549cc3
    MOV ESP,EBP                         ; 00549cc6
    POP EBP                             ; 00549cc8
    POP EDI                             ; 00549cc9
    POP ESI                             ; 00549cca
    POP EBX                             ; 00549ccb
    RET                                 ; 00549ccc

