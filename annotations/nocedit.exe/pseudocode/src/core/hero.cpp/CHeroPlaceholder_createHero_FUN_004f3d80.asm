; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(CHeroPlaceholder *this_ptr,EHeroType hero_type)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; EHeroType        Stack[0x8]:4   hero_type
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 at 00524a53
;
; Referenced Globals:
;   void* switchdataD_004f3d50 = 004f3d9a
;   TerminatedCString s_CGabriella_0062ece7
;   TerminatedCString s_CSvetlana_0062ecf2
;   TerminatedCString s_CStranger_0062ecfc
;   TerminatedCString s_CScat_0062ed06
;   TerminatedCString s_CBaron_0062ed0c
;   TerminatedCString s_CIcePick_0062ed13
;   TerminatedCString s_CHaystack_0062ed1c
;   TerminatedCString s_CColonel_0062ed26
;   TerminatedCString s_CMoloch_0062ed2f
;   TerminatedCString s_core_hero_cpp_0062ed37
;   TerminatedCString s_CHeroPlaceholder_createH_0062ed48
;   TerminatedCString s_core_hero_cpp_0062ed7a
;   TerminatedCString s_CHeroPlaceholder_createH_0062ed8b
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3d80
        ;   Label: core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
    PUSH ESI                            ; 004f3d81
    PUSH EDI                            ; 004f3d82
    PUSH EBP                            ; 004f3d83
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3d84
    XOR EBX,EBX                         ; 004f3d88
    CMP EAX,0x8                         ; 004f3d8a
    JA 0x004f3ec2                       ; 004f3d8d
        ;   XREF to: 004f3ec2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f3d50]  ; 004f3d93 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [0x02db880c]      ; 004f3d9a | g_CHeroClassInfo.name_hash
        ;   Label: caseD_0
    PUSH ESI                            ; 004f3da0
    PUSH 0x62ece7                       ; 004f3da1 | = "CGabriella"
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004f3da6
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
        ;   Label: LAB_004f3da6
    ADD ESP,0x4                         ; 004f3dab
    PUSH EAX                            ; 004f3dae
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f3daf
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f3db4
    MOV EBX,EAX                         ; 004f3db7
    TEST EBX,EBX                        ; 004f3db9
        ;   Label: LAB_004f3db9
    JNZ 0x004f3de0                      ; 004f3dbb
        ;   XREF to: 004f3de0 (CONDITIONAL_JUMP)  ; LAB_004f3de0
    MOV EDI,0x62ed7a                    ; 004f3dbd | = "..\\core\\hero.cpp"
    MOV EBP,0x57d                       ; 004f3dc2
    PUSH 0x62ed8b                       ; 004f3dc7 | = "CHeroPlaceholder::createHero - failed."
    MOV dword ptr [0x02f0ca48],EDI      ; 004f3dcc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004f3dd2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004f3dd8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004f3ddd
    PUSH EBX                            ; 004f3de0
        ;   Label: LAB_004f3de0
    MOV EAX,[0x0067d550]                ; 004f3de1 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EAX                            ; 004f3de6 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004f3de7
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f3dec
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f3def
    LEA EDX,[EBX + 0x20]                ; 004f3df3
    MOV ECX,dword ptr [EAX + 0x20]      ; 004f3df6
    MOV dword ptr [EDX],ECX             ; 004f3df9
    MOV ECX,dword ptr [EAX + 0x24]      ; 004f3dfb
    MOV dword ptr [EDX + 0x4],ECX       ; 004f3dfe
    MOV ECX,dword ptr [EAX + 0x28]      ; 004f3e01
    MOV dword ptr [EDX + 0x8],ECX       ; 004f3e04
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004f3e07
    MOV dword ptr [EDX + 0xc],EAX       ; 004f3e0a
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f3e0d
    LEA EAX,[EBX + 0x30]                ; 004f3e11
    ADD EDX,0x30                        ; 004f3e14
    CMP EAX,EDX                         ; 004f3e17
    JZ 0x004f3e2b                       ; 004f3e19
        ;   XREF to: 004f3e2b (CONDITIONAL_JUMP)  ; LAB_004f3e2b
    MOV ECX,dword ptr [EDX]             ; 004f3e1b
    MOV dword ptr [EAX],ECX             ; 004f3e1d
    MOV ECX,dword ptr [EDX + 0x4]       ; 004f3e1f
    MOV dword ptr [EAX + 0x4],ECX       ; 004f3e22
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f3e25
    MOV dword ptr [EAX + 0x8],ECX       ; 004f3e28
    PUSH EBX                            ; 004f3e2b
        ;   Label: LAB_004f3e2b
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004f3e2c
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f3e31
    MOV EAX,EBX                         ; 004f3e34
    POP EBP                             ; 004f3e36
    POP EDI                             ; 004f3e37
    POP ESI                             ; 004f3e38
    POP EBX                             ; 004f3e39
    RET                                 ; 004f3e3a
    MOV EBX,dword ptr [0x02db880c]      ; 004f3e3b | g_CHeroClassInfo.name_hash
        ;   Label: caseD_1
    PUSH EBX                            ; 004f3e41
    PUSH 0x62ecf2                       ; 004f3e42 | = "CSvetlana"
    JMP 0x004f3da6                      ; 004f3e47
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV ECX,dword ptr [0x02db880c]      ; 004f3e4c | g_CHeroClassInfo.name_hash
        ;   Label: caseD_2
    PUSH ECX                            ; 004f3e52
    PUSH 0x62ecfc                       ; 004f3e53 | = "CStranger"
    JMP 0x004f3da6                      ; 004f3e58
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV EDX,dword ptr [0x02db880c]      ; 004f3e5d | g_CHeroClassInfo.name_hash
        ;   Label: caseD_3
    PUSH EDX                            ; 004f3e63
    PUSH 0x62ed06                       ; 004f3e64 | = "CScat"
    JMP 0x004f3da6                      ; 004f3e69
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV EAX,[0x02db880c]                ; 004f3e6e | g_CHeroClassInfo.name_hash
        ;   Label: caseD_4
    PUSH EAX                            ; 004f3e73
    PUSH 0x62ed0c                       ; 004f3e74 | = "CBaron"
    JMP 0x004f3da6                      ; 004f3e79
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV EBP,dword ptr [0x02db880c]      ; 004f3e7e | g_CHeroClassInfo.name_hash
        ;   Label: caseD_5
    PUSH EBP                            ; 004f3e84
    PUSH 0x62ed13                       ; 004f3e85 | = "CIcePick"
    JMP 0x004f3da6                      ; 004f3e8a
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV EDI,dword ptr [0x02db880c]      ; 004f3e8f | g_CHeroClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EDI                            ; 004f3e95
    PUSH 0x62ed1c                       ; 004f3e96 | = "CHaystack"
    JMP 0x004f3da6                      ; 004f3e9b
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV ESI,dword ptr [0x02db880c]      ; 004f3ea0 | g_CHeroClassInfo.name_hash
        ;   Label: caseD_7
    PUSH ESI                            ; 004f3ea6
    PUSH 0x62ed26                       ; 004f3ea7 | = "CColonel"
    JMP 0x004f3da6                      ; 004f3eac
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV EBX,dword ptr [0x02db880c]      ; 004f3eb1 | g_CHeroClassInfo.name_hash
        ;   Label: caseD_8
    PUSH EBX                            ; 004f3eb7
    PUSH 0x62ed2f                       ; 004f3eb8 | = "CMoloch"
    JMP 0x004f3da6                      ; 004f3ebd
        ;   XREF to: 004f3da6 (UNCONDITIONAL_JUMP)  ; LAB_004f3da6
    MOV EDX,0x62ed37                    ; 004f3ec2 | = "..\\core\\hero.cpp"
        ;   Label: default
    MOV ECX,0x578                       ; 004f3ec7
    PUSH 0x62ed48                       ; 004f3ecc | = "CHeroPlaceholder::createHero - invali..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004f3ed1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004f3ed7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004f3edd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004f3ee2
    JMP 0x004f3db9                      ; 004f3ee5
        ;   XREF to: 004f3db9 (UNCONDITIONAL_JUMP)  ; LAB_004f3db9

