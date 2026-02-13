; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr,float delta_time)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0xb8]:1  local_b8
; undefined1       Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   void* switchdataD_005dfa84 = 005dfaf3
;   void* switchdataD_005dfaac = 005dfb6a
;   TerminatedCString s_core_trigger_cpp_00655616
;   float FLOAT_0065562c = 0.5
;   double DOUBLE_00655634 = 65536
;   float FLOAT_00664a00 = 256
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   int INT_02d7a7b8
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_fire.cpp_CFireEffect_FUN_004c8c90
;   core_hero.cpp_FUN_004f2220
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
;   core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dfac0
        ;   Label: core_trigger.cpp_CTrigger_process_FUN_005dfac0
    PUSH ESI                            ; 005dfac1
    PUSH EDI                            ; 005dfac2
    PUSH EBP                            ; 005dfac3
    MOV EBP,ESP                         ; 005dfac4
    SUB ESP,0xac                        ; 005dfac6
    AND ESP,0xfffffff8                  ; 005dfacc
    MOV ESI,dword ptr [EBP + 0x14]      ; 005dfacf
    XOR EDX,EDX                         ; 005dfad2
    MOV EAX,dword ptr [ESI + 0x174]     ; 005dfad4
    MOV dword ptr [ESP + 0x8c],EDX      ; 005dfada
    MOV dword ptr [ESI + 0x2fc],EDX     ; 005dfae1
    CMP EAX,0x9                         ; 005dfae7
    JA 0x005dfb58                       ; 005dfaea
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5dfa84]  ; 005dfaec | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[ESI + 0x20]                ; 005dfaf3
        ;   Label: caseD_0
    PUSH dword ptr [ESI + 0x158]        ; 005dfaf6
    PUSH EAX                            ; 005dfafc
    CALL core_hero.cpp_FUN_004f2220     ; 005dfafd
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005dfb02
    TEST EAX,EAX                        ; 005dfb05
    JZ 0x005dfb58                       ; 005dfb07
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x20]                ; 005dfb09
    PUSH EAX                            ; 005dfb0d
    MOV EBX,dword ptr [ESI + 0x154]     ; 005dfb0e
    PUSH ESI                            ; 005dfb14
    XOR EDI,EDI                         ; 005dfb15
    CALL dword ptr [EBX + 0x14]         ; 005dfb17
    MOV EAX,[0x02db87bc]                ; 005dfb1a | g_HeroCount
    ADD ESP,0x8                         ; 005dfb1f
    TEST EAX,EAX                        ; 005dfb22
    JLE 0x005dfb58                      ; 005dfb24
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    XOR EBX,EBX                         ; 005dfb26
    MOV EDX,dword ptr [EBX + 0x2db87c0] ; 005dfb28 | g_HeroActors | DAT_02db87c4
        ;   Label: LAB_005dfb28
    PUSH EDX                            ; 005dfb2e
    PUSH ESI                            ; 005dfb2f
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 ; 005dfb30
        ;   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005dfb35
    TEST EAX,EAX                        ; 005dfb38
    JZ 0x005dfbbb                       ; 005dfb3a
        ;   XREF to: 005dfbbb (CONDITIONAL_JUMP)  ; LAB_005dfbbb
    MOV ECX,0x1                         ; 005dfb40
    MOV EAX,dword ptr [EBX + 0x2db87c0] ; 005dfb45 | g_HeroActors
    MOV dword ptr [ESP + 0x8c],ECX      ; 005dfb4b
    MOV dword ptr [ESI + 0x2fc],EAX     ; 005dfb52
        ;   Label: LAB_005dfb52
    MOV EAX,dword ptr [ESI + 0x15c]     ; 005dfb58
        ;   Label: default
    CMP EAX,0x3                         ; 005dfb5e
    JA 0x005dfb83                       ; 005dfb61
        ;   XREF to: 005dfb83 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5dfaac]  ; 005dfb63 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x8c]      ; 005dfb6a
        ;   Label: caseD_1
    TEST ECX,ECX                        ; 005dfb71
    JZ 0x005e0024                       ; 005dfb73
        ;   XREF to: 005e0024 (CONDITIONAL_JUMP)  ; LAB_005e0024
    MOV dword ptr [ESI + 0x16c],0x1     ; 005dfb79
        ;   Label: LAB_005dfb79
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005dfb83
        ;   Label: default
    MOV EDI,dword ptr [ESI + 0x16c]     ; 005dfb8a
    MOV dword ptr [ESI + 0x2ec],EAX     ; 005dfb90
    TEST EDI,EDI                        ; 005dfb96
    JZ 0x005e0082                       ; 005dfb98
        ;   XREF to: 005e0082 (CONDITIONAL_JUMP)  ; LAB_005e0082
    ADD ESI,0x224                       ; 005dfb9e
    PUSH ESI                            ; 005dfba4
    MOV EDX,dword ptr [0x006793d0]      ; 005dfba5 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 005dfbab | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 005dfbac
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005dfbb1
    MOV ESP,EBP                         ; 005dfbb4
    POP EBP                             ; 005dfbb6
    POP EDI                             ; 005dfbb7
    POP ESI                             ; 005dfbb8
    POP EBX                             ; 005dfbb9
    RET                                 ; 005dfbba
    MOV EAX,[0x02db87bc]                ; 005dfbbb | g_HeroCount
        ;   Label: LAB_005dfbbb
    INC EDI                             ; 005dfbc0
    ADD EBX,0x4                         ; 005dfbc1
    CMP EDI,EAX                         ; 005dfbc4
    JL 0x005dfb28                       ; 005dfbc6
        ;   XREF to: 005dfb28 (CONDITIONAL_JUMP)  ; LAB_005dfb28
    JMP 0x005dfb58                      ; 005dfbcc
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI + 0x368],0x0     ; 005dfbce
        ;   Label: caseD_1
    JNZ 0x005dfbf3                      ; 005dfbd5
        ;   XREF to: 005dfbf3 (CONDITIONAL_JUMP)  ; LAB_005dfbf3
    LEA EAX,[ESI + 0x178]               ; 005dfbd7
    PUSH EAX                            ; 005dfbdd
    MOV EDI,dword ptr [0x0067d550]      ; 005dfbde | g_CDemonMissionPtr
    PUSH EDI                            ; 005dfbe4 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 005dfbe5
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 005dfbea
    MOV dword ptr [ESI + 0x368],EAX     ; 005dfbed
    MOV EAX,dword ptr [ESI + 0x368]     ; 005dfbf3
        ;   Label: LAB_005dfbf3
    TEST EAX,EAX                        ; 005dfbf9
    JZ 0x005dfb58                       ; 005dfbfb
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    PUSH 0xee                           ; 005dfc01
    PUSH 0x655616                       ; 005dfc06 | = "..\\core\\trigger.cpp"
    PUSH EAX                            ; 005dfc0b
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 005dfc0c
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV EBX,dword ptr [ESI + 0x368]     ; 005dfc11
    MOV ECX,dword ptr [EBX + 0x70]      ; 005dfc17
    ADD ESP,0xc                         ; 005dfc1a
    CMP ECX,0x1                         ; 005dfc1d
    JNZ 0x005dfb58                      ; 005dfc20
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x20]                ; 005dfc26
    LEA EDI,[EBX + 0x20]                ; 005dfc29
    FLD float ptr [EAX]                 ; 005dfc2c
    FSUB float ptr [EDI]                ; 005dfc2e
    FMUL ST0                            ; 005dfc30
    FLD float ptr [EAX + 0x4]           ; 005dfc32
    FSUB float ptr [EDI + 0x4]          ; 005dfc35
    FMUL ST0                            ; 005dfc38
    FLD float ptr [EAX + 0x8]           ; 005dfc3a
    FXCH                                ; 005dfc3d
    FADDP ST2,ST0                       ; 005dfc3f
    FSUB float ptr [EDI + 0x8]          ; 005dfc41
    FMUL ST0                            ; 005dfc44
    FLD float ptr [ESI + 0x158]         ; 005dfc46
    FXCH                                ; 005dfc4c
    FADDP ST2,ST0                       ; 005dfc4e
    FMUL float ptr [ESI + 0x158]        ; 005dfc50
    FXCH                                ; 005dfc56
    FCOMPP                              ; 005dfc58
    FNSTSW AX                           ; 005dfc5a
    SAHF                                ; 005dfc5c
    JA 0x005dfb58                       ; 005dfc5d
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 005dfc63
    PUSH ESI                            ; 005dfc64
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 ; 005dfc65
        ;   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005dfc6a
    TEST EAX,EAX                        ; 005dfc6d
    JZ 0x005dfb58                       ; 005dfc6f
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    MOV EBX,0x1                         ; 005dfc75
    MOV EAX,dword ptr [ESI + 0x368]     ; 005dfc7a
    MOV dword ptr [ESP + 0x8c],EBX      ; 005dfc80
    JMP 0x005dfb52                      ; 005dfc87
        ;   XREF to: 005dfb52 (UNCONDITIONAL_JUMP)  ; LAB_005dfb52
    LEA EAX,[ESI + 0x20]                ; 005dfc8c
        ;   Label: caseD_2
    PUSH dword ptr [ESI + 0x158]        ; 005dfc8f
    PUSH EAX                            ; 005dfc95
    CALL core_hero.cpp_FUN_004f2220     ; 005dfc96
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005dfc9b
    TEST EAX,EAX                        ; 005dfc9e
    JZ 0x005dfb58                       ; 005dfca0
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x8]                 ; 005dfca6
    PUSH EAX                            ; 005dfcaa
    MOV EBX,dword ptr [ESI + 0x154]     ; 005dfcab
    PUSH ESI                            ; 005dfcb1
    CALL dword ptr [EBX + 0x14]         ; 005dfcb2
    LEA EBX,[EAX + 0xc]                 ; 005dfcb5
    FLD float ptr [EAX]                 ; 005dfcb8
    FADD float ptr [EBX]                ; 005dfcba
    ADD ESP,0x8                         ; 005dfcbc
    FST float ptr [ESP + 0x38]          ; 005dfcbf
    FLD float ptr [EAX + 0x4]           ; 005dfcc3
    FADD float ptr [EBX + 0x4]          ; 005dfcc6
    FXCH                                ; 005dfcc9
    FLD float ptr [0x0065562c]          ; 005dfccb | FLOAT_0065562c
    FXCH                                ; 005dfcd1
    FMUL ST1                            ; 005dfcd3
    FXCH ST2                            ; 005dfcd5
    FST float ptr [ESP + 0x3c]          ; 005dfcd7
    FMUL ST1                            ; 005dfcdb
    FLD float ptr [EAX + 0x8]           ; 005dfcdd
    FADD float ptr [EBX + 0x8]          ; 005dfce0
    LEA EAX,[ESP + 0x50]                ; 005dfce3
    FST float ptr [ESP + 0x40]          ; 005dfce7
    FMULP ST2                           ; 005dfceb
    PUSH EAX                            ; 005dfced
    LEA EAX,[ESP + 0x60]                ; 005dfcee
    FXCH ST2                            ; 005dfcf2
    FSTP float ptr [ESP + 0x54]         ; 005dfcf4
    PUSH EAX                            ; 005dfcf8
    FXCH                                ; 005dfcf9
    FSTP float ptr [ESP + 0x5c]         ; 005dfcfb
    PUSH ESI                            ; 005dfcff
    FSTP float ptr [ESP + 0x64]         ; 005dfd00
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005dfd04
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 005dfd09
    LEA EAX,[ESP + 0x74]                ; 005dfd0b
    ADD ESP,0xc                         ; 005dfd0f
    CMP EAX,EBX                         ; 005dfd12
    JZ 0x005dfd2a                       ; 005dfd14
        ;   XREF to: 005dfd2a (CONDITIONAL_JUMP)  ; LAB_005dfd2a
    MOV EAX,dword ptr [EBX]             ; 005dfd16
    MOV dword ptr [ESP + 0x68],EAX      ; 005dfd18
    MOV EAX,dword ptr [EBX + 0x4]       ; 005dfd1c
    MOV dword ptr [ESP + 0x6c],EAX      ; 005dfd1f
    MOV EAX,dword ptr [EBX + 0x8]       ; 005dfd23
    MOV dword ptr [ESP + 0x70],EAX      ; 005dfd26
    LEA EBX,[ESP + 0x44]                ; 005dfd2a
        ;   Label: LAB_005dfd2a
    LEA EAX,[ESP + 0x68]                ; 005dfd2e
    FLD float ptr [EAX]                 ; 005dfd32
    FMUL float ptr [0x00664a00]         ; 005dfd34 | FLOAT_00664a00
    FISTP dword ptr [EBX]               ; 005dfd3a
    FLD float ptr [EAX + 0x4]           ; 005dfd3c
    FMUL float ptr [0x00664a00]         ; 005dfd3f | FLOAT_00664a00
    FISTP dword ptr [EBX + 0x4]         ; 005dfd45
    FLD float ptr [EAX + 0x8]           ; 005dfd48
    FMUL float ptr [0x00664a00]         ; 005dfd4b | FLOAT_00664a00
    FISTP dword ptr [EBX + 0x8]         ; 005dfd51
    PUSH 0x0                            ; 005dfd54
    LEA EAX,[ESP + 0x48]                ; 005dfd56
    PUSH EAX                            ; 005dfd5a
    MOV EDX,dword ptr [0x006810c8]      ; 005dfd5b | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005dfd61 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 ; 005dfd62
        ;   XREF to: 0056db80 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    FLD float ptr [ESI + 0x21c]         ; 005dfd67
    ADD ESP,0xc                         ; 005dfd6d
    FMUL double ptr [0x00655634]        ; 005dfd70 | DOUBLE_00655634
    MOV dword ptr [ESP + 0xa8],EAX      ; 005dfd76
    FILD dword ptr [ESP + 0xa8]         ; 005dfd7d
    FSTP double ptr [ESP]               ; 005dfd84
    FCOMP double ptr [ESP]              ; 005dfd87
    FNSTSW AX                           ; 005dfd8a
    SAHF                                ; 005dfd8c
    JA 0x005dfb58                       ; 005dfd8d
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x220]         ; 005dfd93
    FMUL double ptr [0x00655634]        ; 005dfd99 | DOUBLE_00655634
    FCOMP double ptr [ESP]              ; 005dfd9f
    FNSTSW AX                           ; 005dfda2
    SAHF                                ; 005dfda4
    JC 0x005dfb58                       ; 005dfda5
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x8c],0x1      ; 005dfdab
    JMP 0x005dfb58                      ; 005dfdb6
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESI + 0x2f0]     ; 005dfdbb
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x8c],EAX      ; 005dfdc1
    MOV dword ptr [ESI + 0x2f0],0x0     ; 005dfdc8
    JMP 0x005dfb58                      ; 005dfdd2
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x36c]         ; 005dfdd7
        ;   Label: caseD_7
    FSUB float ptr [EBP + 0x18]         ; 005dfddd
    FST float ptr [ESI + 0x36c]         ; 005dfde0
    FLDZ                                ; 005dfde6
    FCOMPP                              ; 005dfde8
    FNSTSW AX                           ; 005dfdea
    SAHF                                ; 005dfdec
    JBE 0x005dfdf5                      ; 005dfded
        ;   XREF to: 005dfdf5 (CONDITIONAL_JUMP)  ; LAB_005dfdf5
    MOV dword ptr [ESI + 0x36c],EDX     ; 005dfdef
    FLD float ptr [ESI + 0x2f8]         ; 005dfdf5
        ;   Label: LAB_005dfdf5
    FLDZ                                ; 005dfdfb
    FCOMPP                              ; 005dfdfd
    FNSTSW AX                           ; 005dfdff
    SAHF                                ; 005dfe01
    JC 0x005dfe15                       ; 005dfe02
        ;   XREF to: 005dfe15 (CONDITIONAL_JUMP)  ; LAB_005dfe15
    MOV EAX,0x1                         ; 005dfe04
    MOV dword ptr [ESP + 0x8c],EAX      ; 005dfe09
    JMP 0x005dfb58                      ; 005dfe10
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    XOR EAX,EAX                         ; 005dfe15
        ;   Label: LAB_005dfe15
    MOV dword ptr [ESP + 0x8c],EAX      ; 005dfe17
    JMP 0x005dfb58                      ; 005dfe1e
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    LEA EBX,[ESI + 0x20]                ; 005dfe23
        ;   Label: caseD_6
    PUSH dword ptr [ESI + 0x158]        ; 005dfe26
    PUSH EBX                            ; 005dfe2c
    CALL core_hero.cpp_FUN_004f2220     ; 005dfe2d
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005dfe32
    TEST EAX,EAX                        ; 005dfe35
    JZ 0x005dfb58                       ; 005dfe37
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x160]         ; 005dfe3d
    FMUL ST0                            ; 005dfe43
    FLD float ptr [ESI + 0x164]         ; 005dfe45
    FMUL ST0                            ; 005dfe4b
    FADDP                               ; 005dfe4d
    FLD float ptr [ESI + 0x168]         ; 005dfe4f
    FMUL ST0                            ; 005dfe55
    FADDP                               ; 005dfe57
    PUSH 0x0                            ; 005dfe59
    FSTP float ptr [ESP + 0xa8]         ; 005dfe5b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005dfe62
    MOV EDI,dword ptr [0x02d7a7b8]      ; 005dfe69 | INT_02d7a7b8
    SAR EAX,0x1                         ; 005dfe6f
    PUSH 0x0                            ; 005dfe71
    ADD EAX,EDI                         ; 005dfe73
    PUSH EAX                            ; 005dfe75
    PUSH EBX                            ; 005dfe76
    MOV EAX,[0x0067a3d0]                ; 005dfe77 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 005dfe7c | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c8c90 ; 005dfe7d
        ;   XREF to: 004c8c90 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_FUN_004c8c90(CFireEffect * this_ptr)
    ADD ESP,0x14                        ; 005dfe82
    MOV dword ptr [ESP + 0x8c],EAX      ; 005dfe85
    JMP 0x005dfb58                      ; 005dfe8c
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x20]                ; 005dfe91
        ;   Label: caseD_8
    PUSH dword ptr [ESI + 0x158]        ; 005dfe94
    PUSH EAX                            ; 005dfe9a
    CALL core_hero.cpp_FUN_004f2220     ; 005dfe9b
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005dfea0
    TEST EAX,EAX                        ; 005dfea3
    JZ 0x005dfb58                       ; 005dfea5
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    XOR EDI,EDI                         ; 005dfeab
    MOV dword ptr [ESP + 0x98],EDI      ; 005dfead
    MOV EAX,[0x006810c8]                ; 005dfeb4 | g_CDemonSetPtr
        ;   Label: LAB_005dfeb4
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 005dfeb9 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x005dfb58                      ; 005dfebf
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    ADD EAX,dword ptr [ESP + 0x98]      ; 005dfec5
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 005dfecc | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    PUSH EBX                            ; 005dfed2
    MOV EAX,dword ptr [EBX + 0x154]     ; 005dfed3
    CALL dword ptr [EAX + 0x54]         ; 005dfed9
    ADD ESP,0x4                         ; 005dfedc
    TEST EAX,EAX                        ; 005dfedf
    JNZ 0x005dfef7                      ; 005dfee1
        ;   XREF to: 005dfef7 (CONDITIONAL_JUMP)  ; LAB_005dfef7
    MOV EBX,dword ptr [ESP + 0x98]      ; 005dfee3
        ;   Label: LAB_005dfee3
    ADD EBX,0x4                         ; 005dfeea
    INC EDI                             ; 005dfeed
    MOV dword ptr [ESP + 0x98],EBX      ; 005dfeee
    JMP 0x005dfeb4                      ; 005dfef5
        ;   XREF to: 005dfeb4 (UNCONDITIONAL_JUMP)  ; LAB_005dfeb4
    PUSH EBX                            ; 005dfef7
        ;   Label: LAB_005dfef7
    PUSH ESI                            ; 005dfef8
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 ; 005dfef9
        ;   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005dfefe
    TEST EAX,EAX                        ; 005dff01
    JZ 0x005dfee3                       ; 005dff03
        ;   XREF to: 005dfee3 (CONDITIONAL_JUMP)  ; LAB_005dfee3
    MOV EDI,0x1                         ; 005dff05
    MOV dword ptr [ESI + 0x2fc],EBX     ; 005dff0a
    MOV dword ptr [ESP + 0x8c],EDI      ; 005dff10
    JMP 0x005dfb58                      ; 005dff17
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    LEA EBX,[ESI + 0x20]                ; 005dff1c
        ;   Label: caseD_9
    PUSH dword ptr [ESI + 0x158]        ; 005dff1f
    PUSH EBX                            ; 005dff25
    CALL core_hero.cpp_FUN_004f2220     ; 005dff26
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005dff2b
    TEST EAX,EAX                        ; 005dff2e
    JZ 0x005dfb58                       ; 005dff30
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x178]               ; 005dff36
    MOV dword ptr [ESP + 0xa0],EBX      ; 005dff3c
    XOR EDI,EDI                         ; 005dff43
    MOV dword ptr [ESP + 0x90],EAX      ; 005dff45
    LEA EAX,[ESI + 0x1c8]               ; 005dff4c
    MOV dword ptr [ESP + 0x9c],EDI      ; 005dff52
    MOV dword ptr [ESP + 0x94],EAX      ; 005dff59
    MOV EAX,[0x006810c8]                ; 005dff60 | g_CDemonSetPtr
        ;   Label: LAB_005dff60
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 005dff65 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x005dfb58                      ; 005dff6b
        ;   XREF to: 005dfb58 (CONDITIONAL_JUMP)  ; default
    ADD EAX,dword ptr [ESP + 0x9c]      ; 005dff71
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 005dff78 | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4
    LEA EAX,[EBX + 0x20]                ; 005dff7e
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005dff81
    FLD float ptr [EAX]                 ; 005dff88
    FSUB float ptr [EDX]                ; 005dff8a
    FMUL ST0                            ; 005dff8c
    FLD float ptr [EAX + 0x4]           ; 005dff8e
    FSUB float ptr [EDX + 0x4]          ; 005dff91
    FMUL ST0                            ; 005dff94
    FLD float ptr [EAX + 0x8]           ; 005dff96
    FXCH                                ; 005dff99
    FADDP ST2,ST0                       ; 005dff9b
    FSUB float ptr [EDX + 0x8]          ; 005dff9d
    FMUL ST0                            ; 005dffa0
    FLD float ptr [ESI + 0x158]         ; 005dffa2
    FXCH                                ; 005dffa8
    FADDP ST2,ST0                       ; 005dffaa
    FMUL float ptr [ESI + 0x158]        ; 005dffac
    FXCH                                ; 005dffb2
    FCOMPP                              ; 005dffb4
    FNSTSW AX                           ; 005dffb6
    SAHF                                ; 005dffb8
    JBE 0x005dffcf                      ; 005dffb9
        ;   XREF to: 005dffcf (CONDITIONAL_JUMP)  ; LAB_005dffcf
    MOV EBX,dword ptr [ESP + 0x9c]      ; 005dffbb
        ;   Label: LAB_005dffbb
    ADD EBX,0x4                         ; 005dffc2
    INC EDI                             ; 005dffc5
    MOV dword ptr [ESP + 0x9c],EBX      ; 005dffc6
    JMP 0x005dff60                      ; 005dffcd
        ;   XREF to: 005dff60 (UNCONDITIONAL_JUMP)  ; LAB_005dff60
    CMP EBX,ESI                         ; 005dffcf
        ;   Label: LAB_005dffcf
    JZ 0x005dffbb                       ; 005dffd1
        ;   XREF to: 005dffbb (CONDITIONAL_JUMP)  ; LAB_005dffbb
    MOV EAX,dword ptr [ESP + 0x94]      ; 005dffd3
    PUSH EAX                            ; 005dffda
    PUSH EBX                            ; 005dffdb
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005dffdc
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005dffe1
    TEST EAX,EAX                        ; 005dffe4
    JZ 0x005dffbb                       ; 005dffe6
        ;   XREF to: 005dffbb (CONDITIONAL_JUMP)  ; LAB_005dffbb
    PUSH 0x0                            ; 005dffe8
    PUSH EBX                            ; 005dffea
    MOV EDX,dword ptr [ESP + 0x98]      ; 005dffeb
    PUSH EDX                            ; 005dfff2
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 005dfff3
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 005dfff8
    TEST EAX,EAX                        ; 005dfffb
    JZ 0x005dffbb                       ; 005dfffd
        ;   XREF to: 005dffbb (CONDITIONAL_JUMP)  ; LAB_005dffbb
    PUSH EBX                            ; 005dffff
    PUSH ESI                            ; 005e0000
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 ; 005e0001
        ;   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e0006
    TEST EAX,EAX                        ; 005e0009
    JZ 0x005dffbb                       ; 005e000b
        ;   XREF to: 005dffbb (CONDITIONAL_JUMP)  ; LAB_005dffbb
    MOV ECX,0x1                         ; 005e000d
    MOV dword ptr [ESI + 0x2fc],EBX     ; 005e0012
    MOV dword ptr [ESP + 0x8c],ECX      ; 005e0018
    JMP 0x005dfb58                      ; 005e001f
        ;   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI + 0x15c],0x0     ; 005e0024
        ;   Label: LAB_005e0024
    JNZ 0x005dfb83                      ; 005e002b
        ;   XREF to: 005dfb83 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x16c],ECX     ; 005e0031
    JMP 0x005dfb83                      ; 005e0037
        ;   XREF to: 005dfb83 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI + 0x2ec],0x0     ; 005e003c
        ;   Label: caseD_2
    JNZ 0x005e0053                      ; 005e0043
        ;   XREF to: 005e0053 (CONDITIONAL_JUMP)  ; LAB_005e0053
    CMP dword ptr [ESP + 0x8c],0x0      ; 005e0045
    JNZ 0x005dfb79                      ; 005e004d
        ;   XREF to: 005dfb79 (CONDITIONAL_JUMP)  ; LAB_005dfb79
    MOV dword ptr [ESI + 0x16c],0x0     ; 005e0053
        ;   Label: LAB_005e0053
    JMP 0x005dfb83                      ; 005e005d
        ;   XREF to: 005dfb83 (UNCONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [ESI + 0x2ec]     ; 005e0062
        ;   Label: caseD_3
    CMP EBX,0x1                         ; 005e0068
    JNZ 0x005e0053                      ; 005e006b
        ;   XREF to: 005e0053 (CONDITIONAL_JUMP)  ; LAB_005e0053
    CMP dword ptr [ESP + 0x8c],0x0      ; 005e006d
    JNZ 0x005e0053                      ; 005e0075
        ;   XREF to: 005e0053 (CONDITIONAL_JUMP)  ; LAB_005e0053
    MOV dword ptr [ESI + 0x16c],EBX     ; 005e0077
    JMP 0x005dfb83                      ; 005e007d
        ;   XREF to: 005dfb83 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESI + 0x288]               ; 005e0082
        ;   Label: LAB_005e0082
    PUSH EAX                            ; 005e0088
    MOV EAX,[0x006793d0]                ; 005e0089 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 005e008e | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 005e008f
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005e0094
    MOV dword ptr [ESI + 0x2fc],EDI     ; 005e0097
    MOV ESP,EBP                         ; 005e009d
    POP EBP                             ; 005e009f
    POP EDI                             ; 005e00a0
    POP ESI                             ; 005e00a1
    POP EBX                             ; 005e00a2
    RET                                 ; 005e00a3

