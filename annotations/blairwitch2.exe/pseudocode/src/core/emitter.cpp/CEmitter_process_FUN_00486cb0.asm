; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_process_FUN_00486cb0(CEmitter *this_ptr,float delta_time)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00486c74 = 00486dc2
;   undefined4 s_none_005d2bd1+1
;   undefined4 DAT_005d2bd7
;   undefined4 DAT_005d2bde
;   undefined4 DAT_005d2be2
;   undefined4 DAT_005d2be6
;   undefined4 DAT_005d2bee
;   undefined4 DAT_005d2bf6
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CGameInstance.foul_language_flag
;   undefined4 DAT_01cedef4
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_emitter.cpp_FUN_00487c80
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_fire.cpp_CFireEffect_createFirefly_FUN_0049d6a0
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680
;   core_fire.cpp_CFireEffect_createLeaf_FUN_0049d600
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486cb0
        ;   Label: core_emitter.cpp_CEmitter_process_FUN_00486cb0
    PUSH ESI                            ; 00486cb1
    PUSH EDI                            ; 00486cb2
    PUSH EBP                            ; 00486cb3
    MOV EBP,ESP                         ; 00486cb4
    SUB ESP,0x18c                       ; 00486cb6
    AND ESP,0xfffffff8                  ; 00486cbc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486cbf
    PUSH 0x5d2bd2                       ; 00486cc2 | s_none_005d2bd1+1
    LEA EDI,[EBX + 0x2c8]               ; 00486cc7
    PUSH EDI                            ; 00486ccd
    MOV ESI,dword ptr [EBX + 0x60c]     ; 00486cce
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00486cd4
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00486cd9
    TEST EAX,EAX                        ; 00486cdc
    JNZ 0x00486ebe                      ; 00486cde
        ;   XREF to: 00486ebe (CONDITIONAL_JUMP)  ; LAB_00486ebe
    LEA EAX,[EBX + 0x32c]               ; 00486ce4
        ;   Label: LAB_00486ce4
    PUSH EAX                            ; 00486cea
    MOV EDI,dword ptr [0x006141f0]      ; 00486ceb | DAT_006141f0
    PUSH EDI                            ; 00486cf1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00486cf2
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00486cf7
    TEST EAX,EAX                        ; 00486cfa
    JZ 0x00486d12                       ; 00486cfc
        ;   XREF to: 00486d12 (CONDITIONAL_JUMP)  ; LAB_00486d12
    MOV dword ptr [EBX + 0x2c4],0x0     ; 00486cfe
    MOV dword ptr [EBX + 0x548],0x0     ; 00486d08
    CMP dword ptr [EBX + 0x2b4],0xa     ; 00486d12
        ;   Label: LAB_00486d12
    JNZ 0x00486d67                      ; 00486d19
        ;   XREF to: 00486d67 (CONDITIONAL_JUMP)  ; LAB_00486d67
    PUSH dword ptr [EBX + 0x550]        ; 00486d1b
    SUB ESP,0x8                         ; 00486d21
    FLD float ptr [EBX + 0x28]          ; 00486d24
    FSTP double ptr [ESP]               ; 00486d27
    SUB ESP,0x8                         ; 00486d2a
    FLD float ptr [EBX + 0x24]          ; 00486d2d
    FSTP double ptr [ESP]               ; 00486d30
    SUB ESP,0x8                         ; 00486d33
    FLD float ptr [EBX + 0x20]          ; 00486d36
    FSTP double ptr [ESP]               ; 00486d39
    XOR ESI,ESI                         ; 00486d3c
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005515e0 ; 00486d3e
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005515e0(double pos_x, double pos_y, double pos_z, float radius)
    ADD ESP,0x1c                        ; 00486d43
    TEST EAX,EAX                        ; 00486d46
    JZ 0x00486d5f                       ; 00486d48
        ;   XREF to: 00486d5f (CONDITIONAL_JUMP)  ; LAB_00486d5f
    MOV EAX,[0x00616494]                ; 00486d4a | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00486d4f | g_CGameInstance.foul_language_flag
    MOV ESI,0x1                         ; 00486d52
    TEST EDX,EDX                        ; 00486d57
    JZ 0x00486f10                       ; 00486d59
        ;   XREF to: 00486f10 (CONDITIONAL_JUMP)  ; LAB_00486f10
    TEST ESI,ESI                        ; 00486d5f
        ;   Label: LAB_00486d5f
    JZ 0x00486f30                       ; 00486d61
        ;   XREF to: 00486f30 (CONDITIONAL_JUMP)  ; LAB_00486f30
    CMP dword ptr [EBX + 0x2c4],0x0     ; 00486d67
        ;   Label: LAB_00486d67
    JZ 0x004876dc                       ; 00486d6e
        ;   XREF to: 004876dc (CONDITIONAL_JUMP)  ; LAB_004876dc
    FLD float ptr [EBX + 0x5c0]         ; 00486d74
    FADD float ptr [EBP + 0x18]         ; 00486d7a
    FST float ptr [EBX + 0x5c0]         ; 00486d7d
    FCOMP float ptr [EBX + 0x5c4]       ; 00486d83
    FNSTSW AX                           ; 00486d89
    SAHF                                ; 00486d8b
    JC 0x00486e6b                       ; 00486d8c
        ;   XREF to: 00486e6b (CONDITIONAL_JUMP)  ; LAB_00486e6b
    FLD float ptr [EBX + 0x5c4]         ; 00486d92
    FSUBR float ptr [EBX + 0x5c0]       ; 00486d98
    FSTP float ptr [EBX + 0x5c0]        ; 00486d9e
    TEST ESI,ESI                        ; 00486da4
    JZ 0x00486e6b                       ; 00486da6
        ;   XREF to: 00486e6b (CONDITIONAL_JUMP)  ; LAB_00486e6b
    MOV EAX,dword ptr [EBX + 0x2b4]     ; 00486dac
    CMP EAX,0xd                         ; 00486db2
    JA 0x00486e4b                       ; 00486db5
        ;   XREF to: 00486e4b (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [EAX*0x4 + 0x486c74]  ; 00486dbb | caseD_0 | caseD_1 | caseD_a
        ;   Label: switchD
    PUSH 0xffff                         ; 00486dc2
        ;   Label: caseD_0
    PUSH 0x0                            ; 00486dc7
    PUSH 0x10000                        ; 00486dc9
    PUSH 0x4000                         ; 00486dce
    PUSH 0x0                            ; 00486dd3
    LEA ESI,[EBX + 0x20]                ; 00486dd5
    PUSH ESI                            ; 00486dd8
    MOV EDI,dword ptr [0x00614d30]      ; 00486dd9 | DAT_00614d30
    PUSH EDI                            ; 00486ddf
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 00486de0
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00486de5
    PUSH ESI                            ; 00486de8
        ;   Label: LAB_00486de8
    LEA ESI,[EBX + 0x5cc]               ; 00486de9
    PUSH ESI                            ; 00486def
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 00486df0
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00486df5
    PUSH 0x7fff                         ; 00486df8
    PUSH 0x0                            ; 00486dfd
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00486dff
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    MOV EDX,EAX                         ; 00486e04
    SAR EDX,0x1f                        ; 00486e06
    MOV dword ptr [ESI + 0x3c],EAX      ; 00486e09
    SHL EDX,0x8                         ; 00486e0c
    SBB EAX,EDX                         ; 00486e0f
    SAR EAX,0x8                         ; 00486e11
    MOV EDX,EAX                         ; 00486e14
    SAR EDX,0x1f                        ; 00486e16
    SHL EDX,0x2                         ; 00486e19
    SBB EAX,EDX                         ; 00486e1c
    SAR EAX,0x2                         ; 00486e1e
    ADD ESP,0x8                         ; 00486e21
    PUSH 0x41200000                     ; 00486e24
    PUSH ESI                            ; 00486e29
    MOV byte ptr [ESI + 0x1c],AL        ; 00486e2a
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 00486e2d
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
        ;   Label: LAB_00486e2d
    ADD ESP,0x8                         ; 00486e32
    PUSH ESI                            ; 00486e35
    MOV EAX,[0x0061b5a8]                ; 00486e36 | g_CDemonSetPtr
    PUSH EAX                            ; 00486e3b | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x20],0x0      ; 00486e3c
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0 ; 00486e43
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 00486e48
    CMP byte ptr [EBX + 0x554],0x0      ; 00486e4b
        ;   Label: caseD_2
    JZ 0x00486e6b                       ; 00486e52
        ;   XREF to: 00486e6b (CONDITIONAL_JUMP)  ; LAB_00486e6b
    MOV EDX,dword ptr [EBX + 0x5b8]     ; 00486e54
    PUSH EDX                            ; 00486e5a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 00486e5b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00486e60
    TEST EAX,EAX                        ; 00486e63
    JZ 0x004876a7                       ; 00486e65
        ;   XREF to: 004876a7 (CONDITIONAL_JUMP)  ; LAB_004876a7
    MOV EAX,dword ptr [EBX + 0x2c4]     ; 00486e6b
        ;   Label: LAB_00486e6b
    MOV EDI,dword ptr [EBX + 0x548]     ; 00486e71
    MOV dword ptr [EBX + 0x610],EAX     ; 00486e77
    TEST EDI,EDI                        ; 00486e7d
    JZ 0x00486eb7                       ; 00486e7f
        ;   XREF to: 00486eb7 (CONDITIONAL_JUMP)  ; LAB_00486eb7
    CMP dword ptr [EBX + 0x540],0x0     ; 00486e81
    JZ 0x00487746                       ; 00486e88
        ;   XREF to: 00487746 (CONDITIONAL_JUMP)  ; LAB_00487746
    CMP dword ptr [EBX + 0x2c4],0x0     ; 00486e8e
    JNZ 0x0048770d                      ; 00486e95
        ;   XREF to: 0048770d (CONDITIONAL_JUMP)  ; LAB_0048770d
    FLD float ptr [EBX + 0x5c8]         ; 00486e9b
    FSUB float ptr [EBP + 0x18]         ; 00486ea1
    FST float ptr [EBX + 0x5c8]         ; 00486ea4
    FLDZ                                ; 00486eaa
    FCOMPP                              ; 00486eac
    FNSTSW AX                           ; 00486eae
    SAHF                                ; 00486eb0
    JNC 0x004876f0                      ; 00486eb1
        ;   XREF to: 004876f0 (CONDITIONAL_JUMP)  ; LAB_004876f0
    MOV ESP,EBP                         ; 00486eb7
        ;   Label: LAB_00486eb7
    POP EBP                             ; 00486eb9
    POP EDI                             ; 00486eba
    POP ESI                             ; 00486ebb
    POP EBX                             ; 00486ebc
    RET                                 ; 00486ebd
    PUSH EDI                            ; 00486ebe
        ;   Label: LAB_00486ebe
    MOV EDX,dword ptr [0x006141f0]      ; 00486ebf | DAT_006141f0
    PUSH EDX                            ; 00486ec5
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00486ec6
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00486ecb
    TEST EAX,EAX                        ; 00486ece
    JZ 0x00486ce4                       ; 00486ed0
        ;   XREF to: 00486ce4 (CONDITIONAL_JUMP)  ; LAB_00486ce4
    FLD float ptr [EBX + 0x390]         ; 00486ed6
    MOV ESI,0x1                         ; 00486edc
    PUSH EBX                            ; 00486ee1
    MOV dword ptr [EBX + 0x548],0x1     ; 00486ee2
    MOV ECX,dword ptr [0x0061b5a8]      ; 00486eec | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x2c4],0x1     ; 00486ef2
    PUSH ECX                            ; 00486efc | g_CDemonSetInstance
    FSTP float ptr [EBX + 0x5c8]        ; 00486efd
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80 ; 00486f03
        ;   XREF to: 0052dd80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00486f08
    JMP 0x00486ce4                      ; 00486f0b
        ;   XREF to: 00486ce4 (UNCONDITIONAL_JUMP)  ; LAB_00486ce4
    PUSH 0x3                            ; 00486f10
        ;   Label: LAB_00486f10
    PUSH 0x5d2bd7                       ; 00486f12 | DAT_005d2bd7
    LEA EAX,[EBX + 0x554]               ; 00486f17
    PUSH EAX                            ; 00486f1d
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 00486f1e
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00486f23
    TEST EAX,EAX                        ; 00486f26
    JNZ 0x00486d5f                      ; 00486f28
        ;   XREF to: 00486d5f (CONDITIONAL_JUMP)  ; LAB_00486d5f
    XOR ESI,ESI                         ; 00486f2e
    MOV ECX,dword ptr [EBX + 0x5b8]     ; 00486f30
        ;   Label: LAB_00486f30
    PUSH ECX                            ; 00486f36
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00486f37
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00486f3c
    JMP 0x00486d67                      ; 00486f3f
        ;   XREF to: 00486d67 (UNCONDITIONAL_JUMP)  ; LAB_00486d67
    XOR ECX,ECX                         ; 00486f44
        ;   Label: caseD_c
    MOV EDI,0x42000000                  ; 00486f46
    MOV dword ptr [ESP + 0x98],ECX      ; 00486f4b
    MOV dword ptr [ESP + 0x90],ECX      ; 00486f52
    MOV dword ptr [ESP + 0x94],EDI      ; 00486f59
    PUSH dword ptr [EBX + 0x53c]        ; 00486f60
    MOV EAX,dword ptr [EBX + 0x538]     ; 00486f66
    PUSH dword ptr [EBX + 0x528]        ; 00486f6c
    PUSH EAX                            ; 00486f72
    MOV EDX,dword ptr [EBX + 0x52c]     ; 00486f73
    PUSH EDX                            ; 00486f79
    MOV ECX,dword ptr [EBX + 0x534]     ; 00486f7a
    PUSH ECX                            ; 00486f80
    MOV ESI,dword ptr [EBX + 0x530]     ; 00486f81
    PUSH ESI                            ; 00486f87
    LEA EAX,[ESP + 0xa8]                ; 00486f88
    PUSH EAX                            ; 00486f8f
    LEA ESI,[EBX + 0x20]                ; 00486f90
    PUSH ESI                            ; 00486f93
    MOV EDI,dword ptr [0x00614d30]      ; 00486f94 | DAT_00614d30
    PUSH EDI                            ; 00486f9a
    CALL core_fire.cpp_CFireEffect_createFirefly_FUN_0049d6a0 ; 00486f9b
        ;   XREF to: 0049d6a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFirefly_FUN_0049d6a0(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, int param_4, ...)
    ADD ESP,0x24                        ; 00486fa0
    JMP 0x00486de8                      ; 00486fa3
        ;   XREF to: 00486de8 (UNCONDITIONAL_JUMP)  ; LAB_00486de8
    LEA EDI,[ESP + 0x48]                ; 00486fa8
        ;   Label: caseD_d
    LEA ESI,[EBX + 0x20]                ; 00486fac
    MOVSD ES:EDI,ESI                    ; 00486faf
    MOVSD ES:EDI,ESI                    ; 00486fb0
    MOVSD ES:EDI,ESI                    ; 00486fb1
    LEA EDI,[ESP + 0xfc]                ; 00486fb2
    LEA ESI,[EBX + 0x30]                ; 00486fb9
    MOVSD ES:EDI,ESI                    ; 00486fbc
    MOVSD ES:EDI,ESI                    ; 00486fbd
    MOVSD ES:EDI,ESI                    ; 00486fbe
    FLD float ptr [EBX + 0x618]         ; 00486fbf
    FMUL float ptr [0x005d2bde]         ; 00486fc5 | DAT_005d2bde
    FLD float ptr [ESP + 0xfc]          ; 00486fcb
    FXCH                                ; 00486fd2
    FSTP float ptr [ESP + 0x17c]        ; 00486fd4
    FMUL float ptr [ESP + 0x17c]        ; 00486fdb
    PUSH 0x0                            ; 00486fe2
    FLD float ptr [ESP + 0x104]         ; 00486fe4
    FMUL float ptr [ESP + 0x180]        ; 00486feb
    PUSH 0x3                            ; 00486ff2
    LEA EAX,[ESP + 0x104]               ; 00486ff4
    MOV EDX,dword ptr [0x006167e0]      ; 00486ffb | g_CGorePtr
    PUSH EAX                            ; 00487001
    LEA EAX,[ESP + 0x54]                ; 00487002
    FLD float ptr [ESP + 0x110]         ; 00487006
    PUSH EAX                            ; 0048700d
    FMUL float ptr [ESP + 0x18c]        ; 0048700e
    PUSH EDX                            ; 00487015
    FXCH ST2                            ; 00487016
    FSTP float ptr [ESP + 0x110]        ; 00487018
    FSTP float ptr [ESP + 0x114]        ; 0048701f
    FSTP float ptr [ESP + 0x118]        ; 00487026
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 0048702d
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00487032
    JMP 0x00486e4b                      ; 00487035
        ;   XREF to: 00486e4b (UNCONDITIONAL_JUMP)  ; caseD_a
    LEA ESI,[EBX + 0x20]                ; 0048703a
        ;   Label: caseD_1
    XOR EDI,EDI                         ; 0048703d
    LEA EAX,[ESP + 0x78]                ; 0048703f
        ;   Label: LAB_0048703f
    CMP EAX,ESI                         ; 00487043
    JZ 0x0048705e                       ; 00487045
        ;   XREF to: 0048705e (CONDITIONAL_JUMP)  ; LAB_0048705e
    MOV EAX,dword ptr [ESI]             ; 00487047
    MOV dword ptr [ESP + 0x78],EAX      ; 00487049
    MOV EAX,dword ptr [ESI + 0x4]       ; 0048704d
    MOV dword ptr [ESP + 0x7c],EAX      ; 00487050
    MOV EAX,dword ptr [ESI + 0x8]       ; 00487054
    MOV dword ptr [ESP + 0x80],EAX      ; 00487057
    PUSH 0x3f000000                     ; 0048705e
        ;   Label: LAB_0048705e
    PUSH 0xbf000000                     ; 00487063
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00487068
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0048706d
    FLD float ptr [ESP + 0x190]         ; 00487074
    ADD ESP,0x8                         ; 0048707b
    FMUL float ptr [EBX + 0x2b8]        ; 0048707e
    PUSH 0x3f000000                     ; 00487084
    FADD float ptr [ESP + 0x7c]         ; 00487089
    PUSH 0xbf000000                     ; 0048708d
    FSTP float ptr [ESP + 0x80]         ; 00487092
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00487099
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0048709e
    FLD float ptr [ESP + 0x190]         ; 004870a5
    FMUL float ptr [EBX + 0x2c0]        ; 004870ac
    ADD ESP,0x8                         ; 004870b2
    XOR EDX,EDX                         ; 004870b5
    FADD float ptr [ESP + 0x80]         ; 004870b7
    MOV dword ptr [ESP + 0x6c],EDX      ; 004870be
    FSTP float ptr [ESP + 0x80]         ; 004870c2
    MOV EAX,dword ptr [EBX + 0x2bc]     ; 004870c9
    PUSH 0xffff                         ; 004870cf
    MOV dword ptr [ESP + 0x74],EAX      ; 004870d4
    LEA EAX,[ESP + 0x70]                ; 004870d8
    PUSH EAX                            ; 004870dc
    LEA EAX,[ESP + 0x80]                ; 004870dd
    PUSH 0x3f800000                     ; 004870e4
    PUSH EAX                            ; 004870e9
    MOV EAX,[0x00614d30]                ; 004870ea | DAT_00614d30
    PUSH EAX                            ; 004870ef
    INC EDI                             ; 004870f0
    MOV dword ptr [ESP + 0x88],EDX      ; 004870f1
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 004870f8
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004870fd
    CMP EDI,0x4                         ; 00487100
    JGE 0x00486e4b                      ; 00487103
        ;   XREF to: 00486e4b (CONDITIONAL_JUMP)  ; caseD_a
    JMP 0x0048703f                      ; 00487109
        ;   XREF to: 0048703f (UNCONDITIONAL_JUMP)  ; LAB_0048703f
    PUSH 0x3fc90fdb                     ; 0048710e
        ;   Label: caseD_4
    PUSH 0x3f490fdb                     ; 00487113
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00487118
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 0048711d
    FLD float ptr [ESP + 0x190]         ; 00487124
    ADD ESP,0x8                         ; 0048712b
    PUSH 0x40c90fdb                     ; 0048712e
    PUSH 0x0                            ; 00487133
    FSTP float ptr [ESP + 0x16c]        ; 00487135
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0048713c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 00487141
    FLD float ptr [ESP + 0x190]         ; 00487148
    ADD ESP,0x8                         ; 0048714f
    MOV EAX,dword ptr [EBX + 0x520]     ; 00487152
    FLD float ptr [ESP + 0x164]         ; 00487158
    MOV dword ptr [ESP + 0x168],EAX     ; 0048715f
    FLD ST0                             ; 00487166
    FCOS                                ; 00487168
    FLD ST2                             ; 0048716a
    FCOS                                ; 0048716c
    FXCH ST2                            ; 0048716e
    FSIN                                ; 00487170
    FXCH ST3                            ; 00487172
    FSIN                                ; 00487174
    FLD float ptr [ESP + 0x168]         ; 00487176
    FMULP ST3                           ; 0048717d
    FLD float ptr [ESP + 0x168]         ; 0048717f
    FMULP ST4                           ; 00487186
    FMUL float ptr [ESP + 0x168]        ; 00487188
    FXCH ST2                            ; 0048718f
    FMUL ST1                            ; 00487191
    LEA EAX,[EBX + 0x3a4]               ; 00487193
    FXCH ST2                            ; 00487199
    FMULP                               ; 0048719b
    PUSH EAX                            ; 0048719d
    FXCH ST2                            ; 0048719e
    FSTP float ptr [ESP + 0x5c]         ; 004871a0
    FSTP float ptr [ESP + 0x58]         ; 004871a4
    FSTP float ptr [ESP + 0x60]         ; 004871a8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004871ac
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004871b1
    PUSH EAX                            ; 004871b4
    LEA EAX,[ESP + 0x58]                ; 004871b5
    PUSH EAX                            ; 004871b9
    LEA EAX,[EBX + 0x20]                ; 004871ba
    PUSH EAX                            ; 004871bd
    MOV ESI,dword ptr [0x00614d30]      ; 004871be | DAT_00614d30
    PUSH ESI                            ; 004871c4
    CALL core_fire.cpp_CFireEffect_createRock_FUN_0049d5b0 ; 004871c5
        ;   XREF to: 0049d5b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_0049d5b0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 004871ca
    JMP 0x00486e4b                      ; 004871cd
        ;   XREF to: 00486e4b (UNCONDITIONAL_JUMP)  ; caseD_a
    XOR EDX,EDX                         ; 004871d2
        ;   Label: caseD_b
    MOV dword ptr [ESP + 0x44],EDX      ; 004871d4
    MOV dword ptr [ESP + 0x40],EDX      ; 004871d8
    MOV dword ptr [ESP + 0x3c],EDX      ; 004871dc
    FLD float ptr [EBX + 0x614]         ; 004871e0
    FMUL float ptr [0x005d2be2]         ; 004871e6 | DAT_005d2be2
    SUB ESP,0x4                         ; 004871ec
    FSTP float ptr [ESP]                ; 004871ef
    PUSH 0x0                            ; 004871f2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004871f4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    FLD float ptr [EBX + 0x614]         ; 004871f9
    MOV dword ptr [ESP + 0x190],EAX     ; 004871ff
    FMUL float ptr [0x005d2be2]         ; 00487206 | DAT_005d2be2
    FLD float ptr [ESP + 0x190]         ; 0048720c
    FSUB float ptr [EBX + 0x614]        ; 00487213
    ADD ESP,0x8                         ; 00487219
    FSTP float ptr [ESP + 0x180]        ; 0048721c
    SUB ESP,0x4                         ; 00487223
    FSTP float ptr [ESP]                ; 00487226
    PUSH 0x0                            ; 00487229
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0048722b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x190],EAX     ; 00487230
    FLD float ptr [ESP + 0x190]         ; 00487237
    ADD ESP,0x8                         ; 0048723e
    FLD float ptr [EBX + 0x20]          ; 00487241
    FADD float ptr [ESP + 0x180]        ; 00487244
    FXCH                                ; 0048724b
    FSUB float ptr [EBX + 0x614]        ; 0048724d
    FXCH                                ; 00487253
    FSTP float ptr [ESP + 0x84]         ; 00487255
    MOV EAX,dword ptr [EBX + 0x24]      ; 0048725c
    MOV dword ptr [ESP + 0x88],EAX      ; 0048725f
    FADD float ptr [EBX + 0x28]         ; 00487266
    LEA EAX,[EBX + 0x3a4]               ; 00487269
    FSTP float ptr [ESP + 0x8c]         ; 0048726f
    PUSH dword ptr [EBX + 0x524]        ; 00487276
    PUSH EAX                            ; 0048727c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0048727d
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00487282
    PUSH EAX                            ; 00487285
    LEA EAX,[ESP + 0x44]                ; 00487286
    PUSH EAX                            ; 0048728a
    LEA EAX,[ESP + 0x90]                ; 0048728b
    PUSH EAX                            ; 00487292
    MOV EDI,dword ptr [0x00614d30]      ; 00487293 | DAT_00614d30
    PUSH EDI                            ; 00487299
    CALL core_fire.cpp_CFireEffect_createLeaf_FUN_0049d600 ; 0048729a
        ;   XREF to: 0049d600 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLeaf_FUN_0049d600(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, CKeyFramedModel * param_4, ...)
    ADD ESP,0x14                        ; 0048729f
    MOV EAX,dword ptr [EBX + 0x20]      ; 004872a2
    MOV dword ptr [ESP + 0x84],EAX      ; 004872a5
    MOV EAX,dword ptr [EBX + 0x28]      ; 004872ac
    MOV dword ptr [ESP + 0x88],EAX      ; 004872af
    MOV dword ptr [ESP + 0x8c],EAX      ; 004872b6
    JMP 0x00486e4b                      ; 004872bd
        ;   XREF to: 00486e4b (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH EBX                            ; 004872c2
        ;   Label: caseD_5
    LEA ESI,[ESP + 0x130]               ; 004872c3
    CALL core_emitter.cpp_FUN_00487c80  ; 004872ca
        ;   XREF to: 00487c80 (UNCONDITIONAL_CALL)  ; undefined core_emitter.cpp_FUN_00487c80()
    ADD ESP,0x4                         ; 004872cf
    PUSH 0x1                            ; 004872d2
    PUSH 0x2                            ; 004872d4
    LEA EAX,[EBX + 0x30]                ; 004872d6
    PUSH EAX                            ; 004872d9
    LEA EAX,[ESP + 0xfc]                ; 004872da
    LEA EDI,[ESP + 0xfc]                ; 004872e1
    PUSH EAX                            ; 004872e8
    MOV EDX,dword ptr [0x00614d30]      ; 004872e9 | DAT_00614d30
    LEA ESI,[ESP + 0x13c]               ; 004872ef
    PUSH EDX                            ; 004872f6
    MOVSD ES:EDI,ESI                    ; 004872f7
    MOVSD ES:EDI,ESI                    ; 004872f8
    MOVSD ES:EDI,ESI                    ; 004872f9
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680 ; 004872fa
        ;   XREF to: 0049e680 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ECX,dword ptr [0x01cedef4]      ; 004872ff | DAT_01cedef4
    LEA EDI,[ESP + 0x128]               ; 00487305
    MOV ECX,dword ptr [ECX*0x4 + 0x1cedee4] ; 0048730c
    LEA ESI,[ESP + 0xf8]                ; 00487313
    LEA EAX,[ECX + 0x20]                ; 0048731a
    ADD ESP,0x14                        ; 0048731d
    LEA EDX,[EBX + 0x20]                ; 00487320
    FLD float ptr [EAX]                 ; 00487323
    FLD float ptr [EAX + 0x4]           ; 00487325
    FLD float ptr [EAX + 0x8]           ; 00487328
    FXCH ST2                            ; 0048732b
    FSUB float ptr [EDX]                ; 0048732d
    FXCH                                ; 0048732f
    FSUB float ptr [EDX + 0x4]          ; 00487331
    FXCH ST2                            ; 00487334
    FSUB float ptr [EDX + 0x8]          ; 00487336
    FXCH                                ; 00487339
    FSTP float ptr [ESP + 0xe4]         ; 0048733b
    FXCH                                ; 00487342
    FSTP float ptr [ESP + 0xe8]         ; 00487344
    FSTP float ptr [ESP + 0xec]         ; 0048734b
    MOVSD ES:EDI,ESI                    ; 00487352
    MOVSD ES:EDI,ESI                    ; 00487353
    MOVSD ES:EDI,ESI                    ; 00487354
    FLD float ptr [ESP + 0x118]         ; 00487355
    FMUL ST0                            ; 0048735c
    FLD float ptr [ESP + 0x114]         ; 0048735e
    FMUL ST0                            ; 00487365
    FADDP                               ; 00487367
    FLD float ptr [ESP + 0x11c]         ; 00487369
    FMUL ST0                            ; 00487370
    FADDP                               ; 00487372
    FSQRT                               ; 00487374
    FCOMP double ptr [0x005d2bf6]       ; 00487376 | DAT_005d2bf6
    FNSTSW AX                           ; 0048737c
    SAHF                                ; 0048737e
    JNC 0x00486e4b                      ; 0048737f
        ;   XREF to: 00486e4b (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EDX                            ; 00487385
    PUSH ECX                            ; 00487386
    LEA ESI,[ESP + 0xbc]                ; 00487387
    CALL core_actor.cpp_FUN_00408de0    ; 0048738e
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    ADD ESP,0x8                         ; 00487393
    PUSH 0x1                            ; 00487396
    PUSH 0x3f800000                     ; 00487398
    PUSH 0x0                            ; 0048739d
    PUSH 0x0                            ; 0048739f
    LEA EAX,[ESP + 0xb8]                ; 004873a1
    PUSH EAX                            ; 004873a8
    MOV EAX,[0x01cedef4]                ; 004873a9 | DAT_01cedef4
    LEA EDI,[ESP + 0xbc]                ; 004873ae
    MOV ECX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004873b5
    LEA ESI,[ESP + 0xc8]                ; 004873bc
    PUSH ECX                            ; 004873c3
    MOVSD ES:EDI,ESI                    ; 004873c4
    MOVSD ES:EDI,ESI                    ; 004873c5
    MOVSD ES:EDI,ESI                    ; 004873c6
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 ; 004873c7
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 004873cc
    JMP 0x00486e4b                      ; 004873cf
        ;   XREF to: 00486e4b (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH 0x0                            ; 004873d4
        ;   Label: caseD_6
    LEA ESI,[EBX + 0x20]                ; 004873d6
    PUSH ESI                            ; 004873d9
    MOV EDX,dword ptr [0x00614d30]      ; 004873da | DAT_00614d30
    PUSH EDX                            ; 004873e0
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0 ; 004873e1
        ;   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004873e6
    PUSH 0x0                            ; 004873e9
    PUSH ESI                            ; 004873eb
    MOV ECX,dword ptr [0x00614d30]      ; 004873ec | DAT_00614d30
    PUSH ECX                            ; 004873f2
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0 ; 004873f3
        ;   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004873f8
    PUSH 0x0                            ; 004873fb
    PUSH ESI                            ; 004873fd
    MOV EDI,dword ptr [0x00614d30]      ; 004873fe | DAT_00614d30
    PUSH EDI                            ; 00487404
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0 ; 00487405
        ;   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0048740a
    PUSH 0x0                            ; 0048740d
    PUSH ESI                            ; 0048740f
    MOV EAX,[0x00614d30]                ; 00487410 | DAT_00614d30
    PUSH EAX                            ; 00487415
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0 ; 00487416
        ;   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_0049e9d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0048741b
    JMP 0x00486e4b                      ; 0048741e
        ;   XREF to: 00486e4b (UNCONDITIONAL_JUMP)  ; caseD_a
    FLD float ptr [EBX + 0x2b8]         ; 00487423
        ;   Label: caseD_7
    FMUL double ptr [0x005d2bee]        ; 00487429 | DAT_005d2bee
    SUB ESP,0x4                         ; 0048742f
    FSTP float ptr [ESP]                ; 00487432
    PUSH 0x0                            ; 00487435
    LEA ESI,[EBX + 0x20]                ; 00487437
    PUSH dword ptr [EBX + 0x2bc]        ; 0048743a
    PUSH ESI                            ; 00487440
    MOV EDI,dword ptr [0x00614d30]      ; 00487441 | DAT_00614d30
    PUSH EDI                            ; 00487447
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0 ; 00487448
        ;   XREF to: 0049e6e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    LEA EAX,[ESP + 0xb0]                ; 0048744d
    ADD ESP,0x14                        ; 00487454
    CMP EAX,ESI                         ; 00487457
    JZ 0x00487478                       ; 00487459
        ;   XREF to: 00487478 (CONDITIONAL_JUMP)  ; LAB_00487478
    MOV EAX,dword ptr [ESI]             ; 0048745b
    MOV dword ptr [ESP + 0x9c],EAX      ; 0048745d
    MOV EAX,dword ptr [ESI + 0x4]       ; 00487464
    MOV dword ptr [ESP + 0xa0],EAX      ; 00487467
    MOV EAX,dword ptr [ESI + 0x8]       ; 0048746e
    MOV dword ptr [ESP + 0xa4],EAX      ; 00487471
    FLD float ptr [EBX + 0x2bc]         ; 00487478
        ;   Label: LAB_00487478
    FMUL double ptr [0x005d2bee]        ; 0048747e | DAT_005d2bee
    LEA EAX,[ESP + 0x9c]                ; 00487484
    LEA ESI,[EBX + 0x5cc]               ; 0048748b
    PUSH EAX                            ; 00487491
    FLD float ptr [ESP + 0xa4]          ; 00487492
    FXCH                                ; 00487499
    FADD ST0,ST1                        ; 0048749b
    PUSH ESI                            ; 0048749d
    FSTP ST1                            ; 0048749e
    FSTP float ptr [ESP + 0xa8]         ; 004874a0
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 004874a7
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004874ac
    PUSH 0x7fff                         ; 004874af
    PUSH 0x0                            ; 004874b4
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004874b6
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    MOV EDX,EAX                         ; 004874bb
    SAR EDX,0x1f                        ; 004874bd
    MOV dword ptr [ESI + 0x3c],EAX      ; 004874c0
    SHL EDX,0x8                         ; 004874c3
    SBB EAX,EDX                         ; 004874c6
    SAR EAX,0x8                         ; 004874c8
    MOV EDX,EAX                         ; 004874cb
    SAR EDX,0x1f                        ; 004874cd
    SHL EDX,0x2                         ; 004874d0
    SBB EAX,EDX                         ; 004874d3
    SAR EAX,0x2                         ; 004874d5
    ADD ESP,0x8                         ; 004874d8
    MOV byte ptr [ESI + 0x1c],AL        ; 004874db
    PUSH dword ptr [EBX + 0x2bc]        ; 004874de
    PUSH ESI                            ; 004874e4
    JMP 0x00486e2d                      ; 004874e5
        ;   XREF to: 00486e2d (UNCONDITIONAL_JUMP)  ; LAB_00486e2d
    PUSH 0xffff                         ; 004874ea
        ;   Label: caseD_8
    PUSH 0x1                            ; 004874ef
    PUSH 0x10000                        ; 004874f1
    PUSH 0x4000                         ; 004874f6
    PUSH 0x0                            ; 004874fb
    LEA EAX,[EBX + 0x20]                ; 004874fd
    PUSH EAX                            ; 00487500
    MOV ESI,dword ptr [0x00614d30]      ; 00487501 | DAT_00614d30
    PUSH ESI                            ; 00487507
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 00487508
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0048750d
    JMP 0x00486e4b                      ; 00487510
        ;   XREF to: 00486e4b (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV EAX,dword ptr [EBX + 0x54c]     ; 00487515
        ;   Label: caseD_9
    TEST EAX,EAX                        ; 0048751b
    JZ 0x00486e4b                       ; 0048751d
        ;   XREF to: 00486e4b (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EAX                            ; 00487523
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00487524
    LEA ESI,[ESP + 0x4]                 ; 0048752a
    LEA EDI,[ESP + 0x1c]                ; 0048752e
    CALL dword ptr [EDX + 0x24]         ; 00487532
    MOV ECX,0x6                         ; 00487535
    LEA ESI,[ESP + 0x4]                 ; 0048753a
    ADD ESP,0x4                         ; 0048753e
    MOVSD.REP ES:EDI,ESI                ; 00487541
    LEA EAX,[ESP + 0x18]                ; 00487543
    FLD float ptr [ESP + 0x18]          ; 00487547
    FLD float ptr [ESP + 0x1c]          ; 0048754b
    FLD float ptr [ESP + 0x20]          ; 0048754f
    LEA EDI,[ESP + 0x120]               ; 00487553
    LEA ESI,[ESP + 0xcc]                ; 0048755a
    FXCH ST2                            ; 00487561
    FADD float ptr [EAX + 0xc]          ; 00487563
    FXCH                                ; 00487566
    FADD float ptr [EAX + 0x10]         ; 00487568
    FXCH ST2                            ; 0048756b
    FADD float ptr [EAX + 0x14]         ; 0048756d
    FXCH                                ; 00487570
    FSTP float ptr [ESP + 0xcc]         ; 00487572
    FXCH                                ; 00487579
    FSTP float ptr [ESP + 0xd0]         ; 0048757b
    FSTP float ptr [ESP + 0xd4]         ; 00487582
    MOVSD ES:EDI,ESI                    ; 00487589
    MOVSD ES:EDI,ESI                    ; 0048758a
    MOVSD ES:EDI,ESI                    ; 0048758b
    FLD float ptr [0x005d2be6]          ; 0048758c | DAT_005d2be6
    FLD float ptr [ESP + 0x120]         ; 00487592
    FMUL ST1                            ; 00487599
    FLD float ptr [ESP + 0x124]         ; 0048759b
    FMUL ST2                            ; 004875a2
    FLD float ptr [ESP + 0x128]         ; 004875a4
    FMULP ST3                           ; 004875ab
    LEA EAX,[ESP + 0x144]               ; 004875ad
    LEA EDI,[ESP + 0x144]               ; 004875b4
    LEA ESI,[ESP + 0x138]               ; 004875bb
    FXCH                                ; 004875c2
    FSTP float ptr [ESP + 0x138]        ; 004875c4
    FSTP float ptr [ESP + 0x13c]        ; 004875cb
    FSTP float ptr [ESP + 0x140]        ; 004875d2
    MOVSD ES:EDI,ESI                    ; 004875d9
    MOVSD ES:EDI,ESI                    ; 004875da
    MOVSD ES:EDI,ESI                    ; 004875db
    PUSH EAX                            ; 004875dc
    MOV EDX,dword ptr [EBX + 0x54c]     ; 004875dd
    PUSH EDX                            ; 004875e3
    LEA ESI,[ESP + 0x38]                ; 004875e4
    LEA EDI,[ESP + 0x68]                ; 004875e8
    CALL core_actor.cpp_FUN_00408cf0    ; 004875ec
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x38]                ; 004875f1
    ADD ESP,0x8                         ; 004875f5
    MOVSD ES:EDI,ESI                    ; 004875f8
    MOVSD ES:EDI,ESI                    ; 004875f9
    MOVSD ES:EDI,ESI                    ; 004875fa
    LEA EDX,[ESP + 0x108]               ; 004875fb
    MOV EAX,dword ptr [EBX + 0x54c]     ; 00487602
    LEA EDI,[ESP + 0x108]               ; 00487608
    LEA ESI,[ESP + 0xd8]                ; 0048760f
    FLD float ptr [EAX + 0x24]          ; 00487616
    FLD float ptr [EAX + 0x28]          ; 00487619
    FLD float ptr [EAX + 0x20]          ; 0048761c
    LEA EAX,[ESP + 0xc0]                ; 0048761f
    FADD float ptr [ESP + 0x60]         ; 00487626
    FXCH ST2                            ; 0048762a
    FADD float ptr [ESP + 0x64]         ; 0048762c
    FXCH                                ; 00487630
    FADD float ptr [ESP + 0x68]         ; 00487632
    FXCH ST2                            ; 00487636
    FSTP float ptr [ESP + 0xd8]         ; 00487638
    FSTP float ptr [ESP + 0xdc]         ; 0048763f
    FSTP float ptr [ESP + 0xe0]         ; 00487646
    MOVSD ES:EDI,ESI                    ; 0048764d
    MOVSD ES:EDI,ESI                    ; 0048764e
    MOVSD ES:EDI,ESI                    ; 0048764f
    CMP EAX,EDX                         ; 00487650
    JZ 0x0048767e                       ; 00487652
        ;   XREF to: 0048767e (CONDITIONAL_JUMP)  ; LAB_0048767e
    MOV EAX,dword ptr [ESP + 0x108]     ; 00487654
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048765b
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00487662
    MOV dword ptr [ESP + 0xc4],EAX      ; 00487669
    MOV EAX,dword ptr [ESP + 0x110]     ; 00487670
    MOV dword ptr [ESP + 0xc8],EAX      ; 00487677
    PUSH 0x40800000                     ; 0048767e
        ;   Label: LAB_0048767e
    PUSH 0x0                            ; 00487683
    PUSH 0x0                            ; 00487685
    LEA EAX,[ESP + 0xcc]                ; 00487687
    PUSH EAX                            ; 0048768e
    LEA EAX,[EBX + 0x20]                ; 0048768f
    PUSH EAX                            ; 00487692
    MOV ECX,dword ptr [0x00614d30]      ; 00487693 | DAT_00614d30
    PUSH ECX                            ; 00487699
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760 ; 0048769a
        ;   XREF to: 0049e760 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 0048769f
    JMP 0x00486e4b                      ; 004876a2
        ;   XREF to: 00486e4b (UNCONDITIONAL_JUMP)  ; caseD_a
    CMP dword ptr [EBX + 0x5bc],0x1     ; 004876a7
        ;   Label: LAB_004876a7
    JNZ 0x004876bd                      ; 004876ae
        ;   XREF to: 004876bd (CONDITIONAL_JUMP)  ; LAB_004876bd
    CMP dword ptr [EBX + 0x610],0x0     ; 004876b0
    JNZ 0x00486e6b                      ; 004876b7
        ;   XREF to: 00486e6b (CONDITIONAL_JUMP)  ; LAB_00486e6b
    LEA EAX,[EBX + 0x554]               ; 004876bd
        ;   Label: LAB_004876bd
    PUSH EAX                            ; 004876c3
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004876c4
    PUSH EBX                            ; 004876ca
    CALL dword ptr [EDX + 0x34]         ; 004876cb
    ADD ESP,0x8                         ; 004876ce
    MOV dword ptr [EBX + 0x5b8],EAX     ; 004876d1
    JMP 0x00486e6b                      ; 004876d7
        ;   XREF to: 00486e6b (UNCONDITIONAL_JUMP)  ; LAB_00486e6b
    MOV EAX,dword ptr [EBX + 0x5b8]     ; 004876dc
        ;   Label: LAB_004876dc
    PUSH EAX                            ; 004876e2
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004876e3
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004876e8
    JMP 0x00486e6b                      ; 004876eb
        ;   XREF to: 00486e6b (UNCONDITIONAL_JUMP)  ; LAB_00486e6b
    MOV dword ptr [EBX + 0x2c4],0x1     ; 004876f0
        ;   Label: LAB_004876f0
    MOV EAX,dword ptr [EBX + 0x390]     ; 004876fa
    MOV dword ptr [EBX + 0x5c8],EAX     ; 00487700
    MOV ESP,EBP                         ; 00487706
    POP EBP                             ; 00487708
    POP EDI                             ; 00487709
    POP ESI                             ; 0048770a
    POP EBX                             ; 0048770b
    RET                                 ; 0048770c
    FLD float ptr [EBX + 0x5c8]         ; 0048770d
        ;   Label: LAB_0048770d
    FSUB float ptr [EBP + 0x18]         ; 00487713
    FST float ptr [EBX + 0x5c8]         ; 00487716
    FLDZ                                ; 0048771c
    FCOMPP                              ; 0048771e
    FNSTSW AX                           ; 00487720
    SAHF                                ; 00487722
    JC 0x00486eb7                       ; 00487723
        ;   XREF to: 00486eb7 (CONDITIONAL_JUMP)  ; LAB_00486eb7
    MOV dword ptr [EBX + 0x2c4],0x0     ; 00487729
    MOV EAX,dword ptr [EBX + 0x544]     ; 00487733
    MOV dword ptr [EBX + 0x5c8],EAX     ; 00487739
    MOV ESP,EBP                         ; 0048773f
    POP EBP                             ; 00487741
    POP EDI                             ; 00487742
    POP ESI                             ; 00487743
    POP EBX                             ; 00487744
    RET                                 ; 00487745
    FLD float ptr [EBX + 0x390]         ; 00487746
        ;   Label: LAB_00487746
    FLDZ                                ; 0048774c
    FCOMPP                              ; 0048774e
    FNSTSW AX                           ; 00487750
    SAHF                                ; 00487752
    JNC 0x00486eb7                      ; 00487753
        ;   XREF to: 00486eb7 (CONDITIONAL_JUMP)  ; LAB_00486eb7
    FLD float ptr [EBX + 0x5c8]         ; 00487759
    FSUB float ptr [EBP + 0x18]         ; 0048775f
    FST float ptr [EBX + 0x5c8]         ; 00487762
    FLDZ                                ; 00487768
    FCOMPP                              ; 0048776a
    FNSTSW AX                           ; 0048776c
    SAHF                                ; 0048776e
    JC 0x00486eb7                       ; 0048776f
        ;   XREF to: 00486eb7 (CONDITIONAL_JUMP)  ; LAB_00486eb7
    MOV dword ptr [EBX + 0x5c8],0x0     ; 00487775
    MOV dword ptr [EBX + 0x2c4],0x0     ; 0048777f
    MOV ESP,EBP                         ; 00487789
    POP EBP                             ; 0048778b
    POP EDI                             ; 0048778c
    POP ESI                             ; 0048778d
    POP EBX                             ; 0048778e
    RET                                 ; 0048778f

