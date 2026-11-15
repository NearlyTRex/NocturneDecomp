; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_process_FUN_005779d0(CTrigger *this_ptr,float delta_time)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_005779bc = 00577a90
;   undefined4 DAT_005ecd82
;   undefined4 DAT_005ecd8a
;   undefined4 DAT_005fd200
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   undefined4 DAT_00618170
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01caf5b4
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01d182f0
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
;   core_trigger.cpp_CTrigger_containsActor_FUN_00578800
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005779d0
        ;   Label: core_trigger.cpp_CTrigger_process_FUN_005779d0
    PUSH ESI                            ; 005779d1
    PUSH EDI                            ; 005779d2
    PUSH EBP                            ; 005779d3
    MOV EBP,ESP                         ; 005779d4
    SUB ESP,0xe0                        ; 005779d6
    AND ESP,0xfffffff8                  ; 005779dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005779df
    XOR EDX,EDX                         ; 005779e2
    MOV dword ptr [EAX + 0x45c],EDX     ; 005779e4
    MOV EAX,dword ptr [EAX + 0x2d0]     ; 005779ea
    MOV dword ptr [ESP + 0xcc],EDX      ; 005779f0
    CMP EAX,0x9                         ; 005779f7
    JA 0x00577a7b                       ; 005779fa
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x577994]  ; 00577a00 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577a07
        ;   Label: caseD_0
    ADD EAX,0x20                        ; 00577a0a
    PUSH dword ptr [EAX + 0x294]        ; 00577a0d
    PUSH EAX                            ; 00577a13
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00577a14
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 00577a19
    TEST EAX,EAX                        ; 00577a1c
    JZ 0x00577a7b                       ; 00577a1e
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + 0x14]      ; 00577a20
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577a23
    PUSH ECX                            ; 00577a26
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00577a27
    LEA ESI,[ESP + 0xc]                 ; 00577a2d
    CALL dword ptr [EAX + 0x24]         ; 00577a31
    MOV EBX,dword ptr [0x01cedee0]      ; 00577a34 | DAT_01cedee0
    ADD ESP,0x4                         ; 00577a3a
    XOR ESI,ESI                         ; 00577a3d
    TEST EBX,EBX                        ; 00577a3f
    JLE 0x00577a7b                      ; 00577a41
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    XOR EBX,EBX                         ; 00577a43
    MOV EAX,dword ptr [EBX + 0x1cedee4] ; 00577a45
        ;   Label: LAB_00577a45
    PUSH EAX                            ; 00577a4b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00577a4c
    PUSH EDX                            ; 00577a4f
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_00578800 ; 00577a50
        ;   XREF to: 00578800 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_00578800(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00577a55
    TEST EAX,EAX                        ; 00577a58
    JZ 0x00577ae7                       ; 00577a5a
        ;   XREF to: 00577ae7 (CONDITIONAL_JUMP)  ; LAB_00577ae7
    MOV ECX,0x1                         ; 00577a60
    MOV EDX,dword ptr [EBP + 0x14]      ; 00577a65
    MOV EAX,dword ptr [EBX + 0x1cedee4] ; 00577a68
    MOV dword ptr [ESP + 0xcc],ECX      ; 00577a6e
    MOV dword ptr [EDX + 0x45c],EAX     ; 00577a75
        ;   Label: LAB_00577a75
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577a7b
        ;   Label: default
    MOV EAX,dword ptr [EAX + 0x2b8]     ; 00577a7e
    CMP EAX,0x3                         ; 00577a84
    JA 0x00577aac                       ; 00577a87
        ;   XREF to: 00577aac (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5779bc]  ; 00577a89 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00577a90
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 00577a97
    JZ 0x00577fb5                       ; 00577a99
        ;   XREF to: 00577fb5 (CONDITIONAL_JUMP)  ; LAB_00577fb5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577a9f
        ;   Label: LAB_00577a9f
    MOV dword ptr [EAX + 0x2c8],0x1     ; 00577aa2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00577aac
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00577aaf
    MOV EBX,dword ptr [EDX + 0x2c8]     ; 00577ab6
    MOV dword ptr [EDX + 0x448],EAX     ; 00577abc
    TEST EBX,EBX                        ; 00577ac2
    JZ 0x0057801f                       ; 00577ac4
        ;   XREF to: 0057801f (CONDITIONAL_JUMP)  ; LAB_0057801f
    LEA EAX,[EDX + 0x380]               ; 00577aca
    PUSH EAX                            ; 00577ad0
    MOV EDI,dword ptr [0x006141f0]      ; 00577ad1 | DAT_006141f0
    PUSH EDI                            ; 00577ad7
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 00577ad8
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00577add
    MOV ESP,EBP                         ; 00577ae0
    POP EBP                             ; 00577ae2
    POP EDI                             ; 00577ae3
    POP ESI                             ; 00577ae4
    POP EBX                             ; 00577ae5
    RET                                 ; 00577ae6
    MOV EDI,dword ptr [0x01cedee0]      ; 00577ae7 | DAT_01cedee0
        ;   Label: LAB_00577ae7
    INC ESI                             ; 00577aed
    ADD EBX,0x4                         ; 00577aee
    CMP ESI,EDI                         ; 00577af1
    JL 0x00577a45                       ; 00577af3
        ;   XREF to: 00577a45 (CONDITIONAL_JUMP)  ; LAB_00577a45
    JMP 0x00577a7b                      ; 00577af9
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577afb
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x4c8],0x0     ; 00577afe
    JNZ 0x00577b25                      ; 00577b05
        ;   XREF to: 00577b25 (CONDITIONAL_JUMP)  ; LAB_00577b25
    ADD EAX,0x2d4                       ; 00577b07
    PUSH EAX                            ; 00577b0c
    MOV EBX,dword ptr [0x00618170]      ; 00577b0d | DAT_00618170
    PUSH EBX                            ; 00577b13 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740 ; 00577b14
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00577b19
    MOV EDX,dword ptr [EBP + 0x14]      ; 00577b1c
    MOV dword ptr [EDX + 0x4c8],EAX     ; 00577b1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577b25
        ;   Label: LAB_00577b25
    MOV ESI,dword ptr [EAX + 0x4c8]     ; 00577b28
    TEST ESI,ESI                        ; 00577b2e
    JZ 0x00577a7b                       ; 00577b30
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [ESI + 0x70]      ; 00577b36
    CMP EDI,0x1                         ; 00577b39
    JNZ 0x00577a7b                      ; 00577b3c
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    LEA EBX,[ESI + 0x20]                ; 00577b42
    FLD float ptr [EAX + 0x20]          ; 00577b45
    FSUB float ptr [EBX]                ; 00577b48
    FMUL ST0                            ; 00577b4a
    FLD float ptr [EAX + 0x24]          ; 00577b4c
    FSUB float ptr [EBX + 0x4]          ; 00577b4f
    FMUL ST0                            ; 00577b52
    FLD float ptr [EAX + 0x28]          ; 00577b54
    FXCH                                ; 00577b57
    FADDP ST2,ST0                       ; 00577b59
    FSUB float ptr [EBX + 0x8]          ; 00577b5b
    FMUL ST0                            ; 00577b5e
    FLD float ptr [EAX + 0x2b4]         ; 00577b60
    FXCH                                ; 00577b66
    FADDP ST2,ST0                       ; 00577b68
    FMUL float ptr [EAX + 0x2b4]        ; 00577b6a
    FXCH                                ; 00577b70
    FCOMPP                              ; 00577b72
    FNSTSW AX                           ; 00577b74
    SAHF                                ; 00577b76
    JA 0x00577a7b                       ; 00577b77
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    PUSH ESI                            ; 00577b7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577b7e
    PUSH EAX                            ; 00577b81
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_00578800 ; 00577b82
        ;   XREF to: 00578800 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_00578800(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00577b87
    TEST EAX,EAX                        ; 00577b8a
    JZ 0x00577a7b                       ; 00577b8c
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577b92
    MOV EDX,dword ptr [EBP + 0x14]      ; 00577b95
    MOV EAX,dword ptr [EAX + 0x4c8]     ; 00577b98
    MOV dword ptr [ESP + 0xcc],EDI      ; 00577b9e
    JMP 0x00577a75                      ; 00577ba5
        ;   XREF to: 00577a75 (UNCONDITIONAL_JUMP)  ; LAB_00577a75
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577baa
        ;   Label: caseD_2
    ADD EAX,0x20                        ; 00577bad
    PUSH dword ptr [EAX + 0x294]        ; 00577bb0
    PUSH EAX                            ; 00577bb6
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00577bb7
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 00577bbc
    TEST EAX,EAX                        ; 00577bbf
    JZ 0x00577a7b                       ; 00577bc1
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBP + 0x14]      ; 00577bc7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577bca
    PUSH ESI                            ; 00577bcd
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00577bce
    LEA ESI,[ESP + 0x3c]                ; 00577bd4
    LEA EDI,[ESP + 0x24]                ; 00577bd8
    CALL dword ptr [EAX + 0x24]         ; 00577bdc
    MOV ECX,0x6                         ; 00577bdf
    LEA ESI,[ESP + 0x3c]                ; 00577be4
    ADD ESP,0x4                         ; 00577be8
    MOVSD.REP ES:EDI,ESI                ; 00577beb
    LEA EAX,[ESP + 0x20]                ; 00577bed
    FLD float ptr [ESP + 0x20]          ; 00577bf1
    FLD float ptr [ESP + 0x24]          ; 00577bf5
    FLD float ptr [ESP + 0x28]          ; 00577bf9
    LEA EDI,[ESP + 0x68]                ; 00577bfd
    LEA ESI,[ESP + 0x8c]                ; 00577c01
    FXCH ST2                            ; 00577c08
    FADD float ptr [EAX + 0xc]          ; 00577c0a
    FXCH                                ; 00577c0d
    FADD float ptr [EAX + 0x10]         ; 00577c0f
    FXCH ST2                            ; 00577c12
    FADD float ptr [EAX + 0x14]         ; 00577c14
    FXCH                                ; 00577c17
    FSTP float ptr [ESP + 0x8c]         ; 00577c19
    FXCH                                ; 00577c20
    FSTP float ptr [ESP + 0x90]         ; 00577c22
    FSTP float ptr [ESP + 0x94]         ; 00577c29
    MOVSD ES:EDI,ESI                    ; 00577c30
    MOVSD ES:EDI,ESI                    ; 00577c31
    MOVSD ES:EDI,ESI                    ; 00577c32
    FLD float ptr [0x005ecd82]          ; 00577c33 | DAT_005ecd82
    FLD float ptr [ESP + 0x68]          ; 00577c39
    FMUL ST1                            ; 00577c3d
    FLD float ptr [ESP + 0x6c]          ; 00577c3f
    FMUL ST2                            ; 00577c43
    FLD float ptr [ESP + 0x70]          ; 00577c45
    FMULP ST3                           ; 00577c49
    LEA EAX,[ESP + 0x80]                ; 00577c4b
    LEA EDI,[ESP + 0x80]                ; 00577c52
    LEA ESI,[ESP + 0x74]                ; 00577c59
    FXCH                                ; 00577c5d
    FSTP float ptr [ESP + 0x74]         ; 00577c5f
    FSTP float ptr [ESP + 0x78]         ; 00577c63
    FSTP float ptr [ESP + 0x7c]         ; 00577c67
    MOVSD ES:EDI,ESI                    ; 00577c6b
    MOVSD ES:EDI,ESI                    ; 00577c6c
    MOVSD ES:EDI,ESI                    ; 00577c6d
    PUSH EAX                            ; 00577c6e
    MOV EDI,dword ptr [EBP + 0x14]      ; 00577c6f
    PUSH EDI                            ; 00577c72
    LEA ESI,[ESP + 0xa0]                ; 00577c73
    LEA EBX,[ESP + 0x58]                ; 00577c7a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70 ; 00577c7e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408d70(CDemonActor * this_ptr, CVector3f * input_local_point, CVector3f * output_world_point)
    LEA EDI,[ESP + 0xac]                ; 00577c83
    LEA ESI,[ESP + 0xa0]                ; 00577c8a
    ADD ESP,0x8                         ; 00577c91
    LEA EAX,[ESP + 0xa4]                ; 00577c94
    MOVSD ES:EDI,ESI                    ; 00577c9b
    MOVSD ES:EDI,ESI                    ; 00577c9c
    MOVSD ES:EDI,ESI                    ; 00577c9d
    CMP EBX,EAX                         ; 00577c9e
    JZ 0x00577cc3                       ; 00577ca0
        ;   XREF to: 00577cc3 (CONDITIONAL_JUMP)  ; LAB_00577cc3
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00577ca2
    MOV dword ptr [ESP + 0x50],EAX      ; 00577ca9
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00577cad
    MOV dword ptr [ESP + 0x54],EAX      ; 00577cb4
    MOV EAX,dword ptr [ESP + 0xac]      ; 00577cb8
    MOV dword ptr [ESP + 0x58],EAX      ; 00577cbf
    LEA EBX,[ESP + 0x5c]                ; 00577cc3
        ;   Label: LAB_00577cc3
    LEA EAX,[ESP + 0x50]                ; 00577cc7
    FLD float ptr [EAX]                 ; 00577ccb
    FMUL float ptr [0x005fd200]         ; 00577ccd | DAT_005fd200
    FISTP dword ptr [EBX]               ; 00577cd3
    FLD float ptr [EAX + 0x4]           ; 00577cd5
    FMUL float ptr [0x005fd200]         ; 00577cd8 | DAT_005fd200
    FISTP dword ptr [EBX + 0x4]         ; 00577cde
    FLD float ptr [EAX + 0x8]           ; 00577ce1
    FMUL float ptr [0x005fd200]         ; 00577ce4 | DAT_005fd200
    FISTP dword ptr [EBX + 0x8]         ; 00577cea
    PUSH 0x0                            ; 00577ced
    LEA EAX,[ESP + 0x60]                ; 00577cef
    PUSH EAX                            ; 00577cf3
    MOV EAX,[0x0061b5a8]                ; 00577cf4 | g_CDemonSetPtr
    PUSH EAX                            ; 00577cf9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0 ; 00577cfa
        ;   XREF to: 005311e0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    ADD ESP,0xc                         ; 00577cff
    MOV EDX,dword ptr [EBP + 0x14]      ; 00577d02
    FLD float ptr [EDX + 0x378]         ; 00577d05
    FMUL double ptr [0x005ecd8a]        ; 00577d0b | DAT_005ecd8a
    MOV dword ptr [ESP + 0xdc],EAX      ; 00577d11
    FILD dword ptr [ESP + 0xdc]         ; 00577d18
    FSTP double ptr [ESP]               ; 00577d1f
    FCOMP double ptr [ESP]              ; 00577d22
    FNSTSW AX                           ; 00577d25
    SAHF                                ; 00577d27
    JA 0x00577a7b                       ; 00577d28
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    FLD float ptr [EDX + 0x37c]         ; 00577d2e
    FMUL double ptr [0x005ecd8a]        ; 00577d34 | DAT_005ecd8a
    FCOMP double ptr [ESP]              ; 00577d3a
    FNSTSW AX                           ; 00577d3d
    SAHF                                ; 00577d3f
    JC 0x00577a7b                       ; 00577d40
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0xcc],0x1      ; 00577d46
    JMP 0x00577a7b                      ; 00577d51
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577d56
        ;   Label: caseD_3
    MOV EAX,dword ptr [EAX + 0x44c]     ; 00577d59
    MOV dword ptr [ESP + 0xcc],EAX      ; 00577d5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577d66
    MOV dword ptr [EAX + 0x44c],0x0     ; 00577d69
    JMP 0x00577a7b                      ; 00577d73
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577d78
        ;   Label: caseD_7
    FLD float ptr [EAX + 0x4cc]         ; 00577d7b
    FSUB float ptr [EBP + 0x18]         ; 00577d81
    FST float ptr [EAX + 0x4cc]         ; 00577d84
    FLDZ                                ; 00577d8a
    FCOMPP                              ; 00577d8c
    FNSTSW AX                           ; 00577d8e
    SAHF                                ; 00577d90
    JBE 0x00577d9c                      ; 00577d91
        ;   XREF to: 00577d9c (CONDITIONAL_JUMP)  ; LAB_00577d9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577d93
    MOV dword ptr [EAX + 0x4cc],EDX     ; 00577d96
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577d9c
        ;   Label: LAB_00577d9c
    FLD float ptr [EAX + 0x454]         ; 00577d9f
    FLDZ                                ; 00577da5
    FCOMPP                              ; 00577da7
    FNSTSW AX                           ; 00577da9
    SAHF                                ; 00577dab
    JC 0x00577dbf                       ; 00577dac
        ;   XREF to: 00577dbf (CONDITIONAL_JUMP)  ; LAB_00577dbf
    MOV EAX,0x1                         ; 00577dae
    MOV dword ptr [ESP + 0xcc],EAX      ; 00577db3
    JMP 0x00577a7b                      ; 00577dba
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    XOR EAX,EAX                         ; 00577dbf
        ;   Label: LAB_00577dbf
    MOV dword ptr [ESP + 0xcc],EAX      ; 00577dc1
    JMP 0x00577a7b                      ; 00577dc8
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577dcd
        ;   Label: caseD_6
    LEA EBX,[EAX + 0x20]                ; 00577dd0
    PUSH dword ptr [EAX + 0x2b4]        ; 00577dd3
    PUSH EBX                            ; 00577dd9
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00577dda
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 00577ddf
    TEST EAX,EAX                        ; 00577de2
    JZ 0x00577a7b                       ; 00577de4
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577dea
    FLD float ptr [EAX + 0x2bc]         ; 00577ded
    FMUL ST0                            ; 00577df3
    FLD float ptr [EAX + 0x2c0]         ; 00577df5
    FMUL ST0                            ; 00577dfb
    FADDP                               ; 00577dfd
    FLD float ptr [EAX + 0x2c4]         ; 00577dff
    FMUL ST0                            ; 00577e05
    FADDP                               ; 00577e07
    PUSH 0x0                            ; 00577e09
    FSTP float ptr [ESP + 0xc0]         ; 00577e0b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00577e12
    MOV ECX,dword ptr [0x01caf5b4]      ; 00577e19 | DAT_01caf5b4
    SAR EAX,0x1                         ; 00577e1f
    PUSH 0x0                            ; 00577e21
    ADD EAX,ECX                         ; 00577e23
    PUSH EAX                            ; 00577e25
    PUSH EBX                            ; 00577e26
    MOV EBX,dword ptr [0x00614d30]      ; 00577e27 | DAT_00614d30
    PUSH EBX                            ; 00577e2d
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0 ; 00577e2e
        ;   XREF to: 0049e3e0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0049e3e0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 00577e33
    MOV dword ptr [ESP + 0xcc],EAX      ; 00577e36
    JMP 0x00577a7b                      ; 00577e3d
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577e42
        ;   Label: caseD_8
    ADD EAX,0x20                        ; 00577e45
    PUSH dword ptr [EAX + 0x294]        ; 00577e48
    PUSH EAX                            ; 00577e4e
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00577e4f
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 00577e54
    TEST EAX,EAX                        ; 00577e57
    JZ 0x00577a7b                       ; 00577e59
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    XOR EDI,EDI                         ; 00577e5f
    XOR ESI,ESI                         ; 00577e61
    MOV EAX,[0x0061b5a8]                ; 00577e63 | g_CDemonSetPtr
        ;   Label: LAB_00577e63
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00577e68 | g_CDemonSetInstance.actor_count
    JGE 0x00577a7b                      ; 00577e6e
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 00577e74 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 00577e7b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00577e7c
    CALL dword ptr [EAX + 0x64]         ; 00577e82
    ADD ESP,0x4                         ; 00577e85
    TEST EAX,EAX                        ; 00577e88
    JNZ 0x00577e92                      ; 00577e8a
        ;   XREF to: 00577e92 (CONDITIONAL_JUMP)  ; LAB_00577e92
    INC ESI                             ; 00577e8c
        ;   Label: LAB_00577e8c
    ADD EDI,0x4                         ; 00577e8d
    JMP 0x00577e63                      ; 00577e90
        ;   XREF to: 00577e63 (UNCONDITIONAL_JUMP)  ; LAB_00577e63
    PUSH EBX                            ; 00577e92
        ;   Label: LAB_00577e92
    MOV ECX,dword ptr [EBP + 0x14]      ; 00577e93
    PUSH ECX                            ; 00577e96
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_00578800 ; 00577e97
        ;   XREF to: 00578800 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_00578800(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00577e9c
    TEST EAX,EAX                        ; 00577e9f
    JZ 0x00577e8c                       ; 00577ea1
        ;   XREF to: 00577e8c (CONDITIONAL_JUMP)  ; LAB_00577e8c
    MOV ESI,0x1                         ; 00577ea3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577ea8
    MOV dword ptr [ESP + 0xcc],ESI      ; 00577eab
    MOV dword ptr [EAX + 0x45c],EBX     ; 00577eb2
    JMP 0x00577a7b                      ; 00577eb8
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577ebd
        ;   Label: caseD_9
    LEA EBX,[EAX + 0x20]                ; 00577ec0
    PUSH dword ptr [EAX + 0x2b4]        ; 00577ec3
    PUSH EBX                            ; 00577ec9
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00577eca
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 00577ecf
    TEST EAX,EAX                        ; 00577ed2
    JZ 0x00577a7b                       ; 00577ed4
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577eda
    ADD EAX,0x2d4                       ; 00577edd
    MOV dword ptr [ESP + 0xd8],EBX      ; 00577ee2
    MOV dword ptr [ESP + 0xd4],EAX      ; 00577ee9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577ef0
    XOR EDI,EDI                         ; 00577ef3
    ADD EAX,0x324                       ; 00577ef5
    XOR ESI,ESI                         ; 00577efa
    MOV dword ptr [ESP + 0xd0],EAX      ; 00577efc
    MOV EAX,[0x0061b5a8]                ; 00577f03 | g_CDemonSetPtr
        ;   Label: LAB_00577f03
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00577f08 | g_CDemonSetInstance.actor_count
    JGE 0x00577a7b                      ; 00577f0e
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 00577f14 | g_CDemonSetInstance.actors[0]
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577f1b
    FLD float ptr [EAX + 0x2b4]         ; 00577f1e
    FMUL ST0                            ; 00577f24
    LEA EAX,[EBX + 0x20]                ; 00577f26
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00577f29
    FLD float ptr [EAX]                 ; 00577f30
    FSUB float ptr [EDX]                ; 00577f32
    FMUL ST0                            ; 00577f34
    FLD float ptr [EAX + 0x4]           ; 00577f36
    FSUB float ptr [EDX + 0x4]          ; 00577f39
    FMUL ST0                            ; 00577f3c
    FLD float ptr [EAX + 0x8]           ; 00577f3e
    FXCH                                ; 00577f41
    FADDP ST2,ST0                       ; 00577f43
    FSUB float ptr [EDX + 0x8]          ; 00577f45
    FMUL ST0                            ; 00577f48
    FADDP                               ; 00577f4a
    FCOMPP                              ; 00577f4c
    FNSTSW AX                           ; 00577f4e
    SAHF                                ; 00577f50
    JBE 0x00577f59                      ; 00577f51
        ;   XREF to: 00577f59 (CONDITIONAL_JUMP)  ; LAB_00577f59
    INC ESI                             ; 00577f53
        ;   Label: LAB_00577f53
    ADD EDI,0x4                         ; 00577f54
    JMP 0x00577f03                      ; 00577f57
        ;   XREF to: 00577f03 (UNCONDITIONAL_JUMP)  ; LAB_00577f03
    CMP EBX,dword ptr [EBP + 0x14]      ; 00577f59
        ;   Label: LAB_00577f59
    JZ 0x00577f53                       ; 00577f5c
        ;   XREF to: 00577f53 (CONDITIONAL_JUMP)  ; LAB_00577f53
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00577f5e
    PUSH EAX                            ; 00577f65
    PUSH EBX                            ; 00577f66
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00577f67
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00577f6c
    TEST EAX,EAX                        ; 00577f6f
    JZ 0x00577f53                       ; 00577f71
        ;   XREF to: 00577f53 (CONDITIONAL_JUMP)  ; LAB_00577f53
    PUSH 0x0                            ; 00577f73
    PUSH EBX                            ; 00577f75
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00577f76
    PUSH EDX                            ; 00577f7d
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 00577f7e
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00577f83
    TEST EAX,EAX                        ; 00577f86
    JZ 0x00577f53                       ; 00577f88
        ;   XREF to: 00577f53 (CONDITIONAL_JUMP)  ; LAB_00577f53
    PUSH EBX                            ; 00577f8a
    MOV ECX,dword ptr [EBP + 0x14]      ; 00577f8b
    PUSH ECX                            ; 00577f8e
    CALL core_trigger.cpp_CTrigger_containsActor_FUN_00578800 ; 00577f8f
        ;   XREF to: 00578800 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_containsActor_FUN_00578800(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00577f94
    TEST EAX,EAX                        ; 00577f97
    JZ 0x00577f53                       ; 00577f99
        ;   XREF to: 00577f53 (CONDITIONAL_JUMP)  ; LAB_00577f53
    MOV ESI,0x1                         ; 00577f9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577fa0
    MOV dword ptr [ESP + 0xcc],ESI      ; 00577fa3
    MOV dword ptr [EAX + 0x45c],EBX     ; 00577faa
    JMP 0x00577a7b                      ; 00577fb0
        ;   XREF to: 00577a7b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577fb5
        ;   Label: LAB_00577fb5
    CMP dword ptr [EAX + 0x2b8],0x0     ; 00577fb8
    JNZ 0x00577aac                      ; 00577fbf
        ;   XREF to: 00577aac (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x2c8],EDX     ; 00577fc5
    JMP 0x00577aac                      ; 00577fcb
        ;   XREF to: 00577aac (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577fd0
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x448],0x0     ; 00577fd3
    JNZ 0x00577fea                      ; 00577fda
        ;   XREF to: 00577fea (CONDITIONAL_JUMP)  ; LAB_00577fea
    CMP dword ptr [ESP + 0xcc],0x0      ; 00577fdc
    JNZ 0x00577a9f                      ; 00577fe4
        ;   XREF to: 00577a9f (CONDITIONAL_JUMP)  ; LAB_00577a9f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577fea
        ;   Label: LAB_00577fea
    MOV dword ptr [EAX + 0x2c8],0x0     ; 00577fed
    JMP 0x00577aac                      ; 00577ff7
        ;   XREF to: 00577aac (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577ffc
        ;   Label: caseD_3
    MOV EBX,dword ptr [EAX + 0x448]     ; 00577fff
    CMP EBX,0x1                         ; 00578005
    JNZ 0x00577fea                      ; 00578008
        ;   XREF to: 00577fea (CONDITIONAL_JUMP)  ; LAB_00577fea
    CMP dword ptr [ESP + 0xcc],0x0      ; 0057800a
    JNZ 0x00577fea                      ; 00578012
        ;   XREF to: 00577fea (CONDITIONAL_JUMP)  ; LAB_00577fea
    MOV dword ptr [EAX + 0x2c8],EBX     ; 00578014
    JMP 0x00577aac                      ; 0057801a
        ;   XREF to: 00577aac (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EDX + 0x3e4]               ; 0057801f
        ;   Label: LAB_0057801f
    PUSH EAX                            ; 00578025
    MOV ESI,dword ptr [0x006141f0]      ; 00578026 | DAT_006141f0
    PUSH ESI                            ; 0057802c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0057802d
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00578032
    MOV EAX,dword ptr [EBP + 0x14]      ; 00578035
    MOV dword ptr [EAX + 0x45c],EBX     ; 00578038
    MOV ESP,EBP                         ; 0057803e
    POP EBP                             ; 00578040
    POP EDI                             ; 00578041
    POP ESI                             ; 00578042
    POP EBX                             ; 00578043
    RET                                 ; 00578044

