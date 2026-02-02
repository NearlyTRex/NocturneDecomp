; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418e10(void)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[14]:
;   core_batcreat.cpp_CBatCreature_FUN_00415dd0 at 00415f25
;   core_batman.cpp_CBatman_FUN_00417660 at 00417732
;   core_bride.cpp_CBride_FUN_00424600 at 004246c2
;   core_charactr.cpp_CCharacter_FUN_0042bcc0 at 0042bcfe
;   core_cow.cpp_FUN_004448c0 at 00444969
;   core_dracbrid.cpp_FUN_00485b20 at 00485b5d
;   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 at 004e55f2
;   core_ghoul.cpp_FUN_004e8520 at 004e85ed
;   core_imp.cpp_CImp_FUN_004fab60 at 004fac32
;   core_mobster.cpp_CMobster_FUN_00527380 at 0052748b
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_00615b7c
;   TerminatedCString s_core_bodypart_cpp_00615b91
;   TerminatedCString s_Can_t_create_body_part_00615ba6
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_FUN_00523b70
;   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418e10
        ;   Label: core_bodypart.cpp_createBodyPart_FUN_00418e10
    PUSH ESI                            ; 00418e11
    PUSH EDI                            ; 00418e12
    PUSH EBP                            ; 00418e13
    SUB ESP,0x28                        ; 00418e14
    MOV EBP,dword ptr [ESP + 0x40]      ; 00418e17
    MOV ESI,dword ptr [ESP + 0x44]      ; 00418e1b
    MOV EDI,dword ptr [ESP + 0x48]      ; 00418e1f
    PUSH 0x31                           ; 00418e23
    PUSH 0x615b7c                       ; 00418e25 | = "..\\core\\bodypart.cpp"
    PUSH 0xf30                          ; 00418e2a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00418e2f
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00418e34
    TEST EAX,EAX                        ; 00418e37
    JNZ 0x00418f18                      ; 00418e39
        ;   XREF to: 00418f18 (CONDITIONAL_JUMP)  ; LAB_00418f18
    MOV EBX,EAX                         ; 00418e3f
        ;   Label: LAB_00418e3f
    TEST EAX,EAX                        ; 00418e41
    JNZ 0x00418e68                      ; 00418e43
        ;   XREF to: 00418e68 (CONDITIONAL_JUMP)  ; LAB_00418e68
    MOV EDX,0x615b91                    ; 00418e45 | = "..\\core\\bodypart.cpp"
    MOV ECX,0x32                        ; 00418e4a
    PUSH 0x615ba6                       ; 00418e4f | = "Can't create body part!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00418e54 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00418e5a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00418e60
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00418e65
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00418e68
        ;   Label: LAB_00418e68
    LEA EAX,[EBX + 0x20]                ; 00418e6c
    MOV ECX,dword ptr [EDX]             ; 00418e6f
    MOV dword ptr [EAX],ECX             ; 00418e71
    MOV ECX,dword ptr [EDX + 0x4]       ; 00418e73
    MOV dword ptr [EAX + 0x4],ECX       ; 00418e76
    MOV ECX,dword ptr [EDX + 0x8]       ; 00418e79
    MOV dword ptr [EAX + 0x8],ECX       ; 00418e7c
    LEA EAX,[EBX + 0x30]                ; 00418e7f
    CMP EAX,EBP                         ; 00418e82
    JZ 0x00418e97                       ; 00418e84
        ;   XREF to: 00418e97 (CONDITIONAL_JUMP)  ; LAB_00418e97
    MOV EDX,dword ptr [EBP]             ; 00418e86
    MOV dword ptr [EAX],EDX             ; 00418e89
    MOV EDX,dword ptr [EBP + 0x4]       ; 00418e8b
    MOV dword ptr [EAX + 0x4],EDX       ; 00418e8e
    MOV EDX,dword ptr [EBP + 0x8]       ; 00418e91
    MOV dword ptr [EAX + 0x8],EDX       ; 00418e94
    PUSH EBX                            ; 00418e97
        ;   Label: LAB_00418e97
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00418e98
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00418e9d
    TEST ESI,ESI                        ; 00418ea0
    JZ 0x00418f26                       ; 00418ea2
        ;   XREF to: 00418f26 (CONDITIONAL_JUMP)  ; LAB_00418f26
    LEA EAX,[EBX + 0x280]               ; 00418ea8
    CMP EAX,ESI                         ; 00418eae
    JZ 0x00418ec2                       ; 00418eb0
        ;   XREF to: 00418ec2 (CONDITIONAL_JUMP)  ; LAB_00418ec2
    MOV EDX,dword ptr [ESI]             ; 00418eb2
    MOV dword ptr [EAX],EDX             ; 00418eb4
    MOV EDX,dword ptr [ESI + 0x4]       ; 00418eb6
    MOV dword ptr [EAX + 0x4],EDX       ; 00418eb9
    MOV EDX,dword ptr [ESI + 0x8]       ; 00418ebc
    MOV dword ptr [EAX + 0x8],EDX       ; 00418ebf
    PUSH EBX                            ; 00418ec2
        ;   Label: LAB_00418ec2
    MOV ESI,dword ptr [0x0067d550]      ; 00418ec3 | g_CDemonMissionPtr
    PUSH ESI                            ; 00418ec9 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 ; 00418eca
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 00418ecf
    PUSH EBX                            ; 00418ed2
    MOV EBP,dword ptr [0x0067d550]      ; 00418ed3 | g_CDemonMissionPtr
    PUSH EBP                            ; 00418ed9 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 00418eda
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 00418edf
    TEST EDI,EDI                        ; 00418ee2
    JNZ 0x00418fa2                      ; 00418ee4
        ;   XREF to: 00418fa2 (CONDITIONAL_JUMP)  ; LAB_00418fa2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00418eea
        ;   Label: LAB_00418eea
    MOV dword ptr [EBX + 0xcb0],EAX     ; 00418eee
    MOV EAX,dword ptr [ESP + 0x50]      ; 00418ef4
    MOV dword ptr [EBX + 0xfc],EAX      ; 00418ef8
    MOV dword ptr [EBX + 0xcb4],EAX     ; 00418efe
    MOV EAX,dword ptr [ESP + 0x54]      ; 00418f04
    MOV dword ptr [EBX + 0xcb8],EAX     ; 00418f08
    MOV EAX,EBX                         ; 00418f0e
    ADD ESP,0x28                        ; 00418f10
    POP EBP                             ; 00418f13
    POP EDI                             ; 00418f14
    POP ESI                             ; 00418f15
    POP EBX                             ; 00418f16
    RET                                 ; 00418f17
    PUSH EAX                            ; 00418f18
        ;   Label: LAB_00418f18
    CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 ; 00418f19
        ;   XREF to: 00419010 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00419010(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00418f1e
    JMP 0x00418e3f                      ; 00418f21
        ;   XREF to: 00418e3f (UNCONDITIONAL_JUMP)  ; LAB_00418e3f
    PUSH 0x3fc90fdb                     ; 00418f26
        ;   Label: LAB_00418f26
    PUSH 0x3f490fdb                     ; 00418f2b
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00418f30
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [EDI + 0x108]     ; 00418fa2
        ;   Label: LAB_00418fa2
    MOV dword ptr [EBX + 0x108],EAX     ; 00418fa8
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00418fae
    MOV dword ptr [EBX + 0x10c],EAX     ; 00418fb4
    MOV EAX,dword ptr [EDI + 0x110]     ; 00418fba
    MOV dword ptr [EBX + 0x110],EAX     ; 00418fc0
    JMP 0x00418eea                      ; 00418fc6
        ;   XREF to: 00418eea (UNCONDITIONAL_JUMP)  ; LAB_00418eea

