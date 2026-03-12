; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdde5
;   core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0 at 005243f4
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 at 0052401f
;   core_mission.cpp_CDemonMission_startMission_FUN_00524760 at 00524789
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 at 0052363c
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 005391c5
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e2d3
;   core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0 at 0053ce4b
;   core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50 at 0053afb6
;   core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0 at 00538c2a
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_006390af
;   TerminatedCString s_Setting_up_actors_006390c3
;   TerminatedCString s_core_mission_cpp_006390d5
;   TerminatedCString s_Setting_up_actors_006390e9
;   TerminatedCString s_Setting_up_actors_006390fb
;   TerminatedCString s_Setting_up_actors_0063910d
;   TerminatedCString s_core_mission_cpp_0063911f
;   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
;   CLevelLoader g_CLevelLoaderInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_level.cpp_CLevelLoader_update_FUN_00504160
;   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523cf0
        ;   Label: core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
    PUSH ESI                            ; 00523cf1
    PUSH EDI                            ; 00523cf2
    PUSH EBP                            ; 00523cf3
    SUB ESP,0x4                         ; 00523cf4
    PUSH 0x335                          ; 00523cf7
    PUSH 0x6390af                       ; 00523cfc | = "..\\core\\mission.cpp"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00523d01
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
    ADD ESP,0x8                         ; 00523d06
    XOR EDI,EDI                         ; 00523d09
    PUSH EDI                            ; 00523d0b
    PUSH 0x6390c3                       ; 00523d0c | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00523d11
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00523d16
    PUSH EAX                            ; 00523d19
    MOV EDX,dword ptr [0x0067cf80]      ; 00523d1a | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH EDX                            ; 00523d20 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00523d21
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00523d26
    MOV EBX,dword ptr [ESP + 0x18]      ; 00523d29
    MOV EBX,dword ptr [EBX + 0x548]     ; 00523d2d
    TEST EBX,EBX                        ; 00523d33
    JZ 0x00523d50                       ; 00523d35
        ;   XREF to: 00523d50 (CONDITIONAL_JUMP)  ; LAB_00523d50
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00523d37
        ;   Label: LAB_00523d37
    INC EDI                             ; 00523d3d
    TEST EBX,EBX                        ; 00523d3e
    JNZ 0x00523d37                      ; 00523d40
        ;   XREF to: 00523d37 (CONDITIONAL_JUMP)  ; LAB_00523d37
    LEA EAX,[EAX]                       ; 00523d42
    LEA EDX,[EDX]                       ; 00523d48 | g_CLevelLoaderInstance
    MOV EAX,EAX                         ; 00523d4e
    MOV EBX,dword ptr [ESP + 0x18]      ; 00523d50
        ;   Label: LAB_00523d50
    MOV EBX,dword ptr [EBX + 0x548]     ; 00523d54
    XOR ESI,ESI                         ; 00523d5a
    TEST EBX,EBX                        ; 00523d5c
    JZ 0x00523e33                       ; 00523d5e
        ;   XREF to: 00523e33 (CONDITIONAL_JUMP)  ; LAB_00523e33
    LEA EAX,[EDI*0x4 + 0x0]             ; 00523d64
    SUB EAX,EDI                         ; 00523d6b
    MOV EDX,EAX                         ; 00523d6d
    SAR EDX,0x1f                        ; 00523d6f
    SHL EDX,0x2                         ; 00523d72
    SBB EAX,EDX                         ; 00523d75
    SAR EAX,0x2                         ; 00523d77
    MOV EBP,EAX                         ; 00523d7a
    MOV EDX,EDI                         ; 00523d7c
    MOV EAX,EDI                         ; 00523d7e
    SAR EDX,0x1f                        ; 00523d80
    SUB EAX,EDX                         ; 00523d83
    SAR EAX,0x1                         ; 00523d85
    MOV dword ptr [ESP],EAX             ; 00523d87
    MOV EDX,EDI                         ; 00523d8a
    MOV EAX,EDI                         ; 00523d8c
    SAR EDX,0x1f                        ; 00523d8e
    SHL EDX,0x2                         ; 00523d91
    SBB EAX,EDX                         ; 00523d94
    SAR EAX,0x2                         ; 00523d96
    MOV EDI,EAX                         ; 00523d99
    PUSH 0x33f                          ; 00523d9b
        ;   Label: LAB_00523d9b
    PUSH 0x6390d5                       ; 00523da0 | = "..\\core\\mission.cpp"
    PUSH EBX                            ; 00523da5
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00523da6
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00523dab
    MOV EAX,dword ptr [EBX + 0x154]     ; 00523dae
    PUSH EBX                            ; 00523db4
    INC ESI                             ; 00523db5
    CALL dword ptr [EAX]                ; 00523db6
    ADD ESP,0x4                         ; 00523db8
    CMP ESI,EDI                         ; 00523dbb
    JNZ 0x00523dde                      ; 00523dbd
        ;   XREF to: 00523dde (CONDITIONAL_JUMP)  ; LAB_00523dde
    PUSH 0x0                            ; 00523dbf
    PUSH 0x6390e9                       ; 00523dc1 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00523dc6
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00523dcb
    PUSH EAX                            ; 00523dce
    MOV ECX,dword ptr [0x0067cf80]      ; 00523dcf | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH ECX                            ; 00523dd5 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00523dd6
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00523ddb
    CMP ESI,dword ptr [ESP]             ; 00523dde
        ;   Label: LAB_00523dde
    JNZ 0x00523e02                      ; 00523de1
        ;   XREF to: 00523e02 (CONDITIONAL_JUMP)  ; LAB_00523e02
    PUSH 0x0                            ; 00523de3
    PUSH 0x6390fb                       ; 00523de5 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00523dea
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00523def
    PUSH EAX                            ; 00523df2
    MOV EDX,dword ptr [0x0067cf80]      ; 00523df3 | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH EDX                            ; 00523df9 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00523dfa
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00523dff
    CMP ESI,EBP                         ; 00523e02
        ;   Label: LAB_00523e02
    JNZ 0x00523e25                      ; 00523e04
        ;   XREF to: 00523e25 (CONDITIONAL_JUMP)  ; LAB_00523e25
    PUSH 0x0                            ; 00523e06
    PUSH 0x63910d                       ; 00523e08 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00523e0d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00523e12
    PUSH EAX                            ; 00523e15
    MOV ECX,dword ptr [0x0067cf80]      ; 00523e16 | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH ECX                            ; 00523e1c | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00523e1d
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00523e22
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00523e25
        ;   Label: LAB_00523e25
    TEST EBX,EBX                        ; 00523e2b
    JNZ 0x00523d9b                      ; 00523e2d
        ;   XREF to: 00523d9b (CONDITIONAL_JUMP)  ; LAB_00523d9b
    PUSH 0x350                          ; 00523e33
        ;   Label: LAB_00523e33
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00523e38
    PUSH 0x63911f                       ; 00523e3c | = "..\\core\\mission.cpp"
    MOV dword ptr [EAX + 0x884],0x1     ; 00523e41
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00523e4b
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
    ADD ESP,0x8                         ; 00523e50
    ADD ESP,0x4                         ; 00523e53
    POP EBP                             ; 00523e56
    POP EDI                             ; 00523e57
    POP ESI                             ; 00523e58
    POP EBX                             ; 00523e59
    RET                                 ; 00523e5a

