; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_load_FUN_0051a3f0(CDemonMission *this_ptr,char *mission_filename,int load_flags)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   mission_filename
; int              Stack[0xc]:4   load_flags
;
; XREF[3]:
;   core_game.cpp_FUN_004d7250 at 004d7511
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bc1f
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e740
;
; Referenced Globals:
;   TerminatedCString s_rt_005e9079
;   TerminatedCString s_world_005e907c
;   TerminatedCString s_core_mission_cpp_005e9082
;   TerminatedCString s_CDemonMission_load_Unabl_005e9096
;   TerminatedCString s_Loading_mission_005e90c0
;   undefined4 DAT_0061f2e0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0
;   core_mission.cpp_FUN_0051c240
;   crt_stdio.c_fclose_FUN_005c0d10
;   engine_dosio.cpp_FUN_00479180
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a3f0
        ;   Label: core_mission.cpp_CDemonMission_load_FUN_0051a3f0
    PUSH EDI                            ; 0051a3f1
    PUSH EBP                            ; 0051a3f2
    PUSH 0x5e9079                       ; 0051a3f3 | = "rt"
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051a3f8
    PUSH EDX                            ; 0051a3fc
    PUSH 0x5e907c                       ; 0051a3fd | = "world"
    CALL engine_dosio.cpp_FUN_00479180  ; 0051a402
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0051a407
    MOV EBX,EAX                         ; 0051a40a
    TEST EAX,EAX                        ; 0051a40c
    JZ 0x0051a45c                       ; 0051a40e
        ;   XREF to: 0051a45c (CONDITIONAL_JUMP)  ; LAB_0051a45c
    PUSH 0x0                            ; 0051a410
        ;   Label: LAB_0051a410
    PUSH 0x5e90c0                       ; 0051a412 | = "Loading mission"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0051a417
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0051a41c
    PUSH EAX                            ; 0051a41f
    MOV EDI,dword ptr [0x0061f2e0]      ; 0051a420 | DAT_0061f2e0
    PUSH EDI                            ; 0051a426
    CALL core_level.cpp_CLevelLoader_update_FUN_004fe9c0 ; 0051a427
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004fe9c0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 0051a42c
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051a42f
    PUSH EBP                            ; 0051a433
    PUSH EBX                            ; 0051a434
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051a435
    PUSH EAX                            ; 0051a439
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0 ; 0051a43a
        ;   XREF to: 0051a4f0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0(CDemonMission * this_ptr, _FILE * file_handle, int load_flags)
    ADD ESP,0xc                         ; 0051a43f
    PUSH EBX                            ; 0051a442
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0051a443
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0051a448
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051a44b
    PUSH EDX                            ; 0051a44f
    CALL core_mission.cpp_FUN_0051c240  ; 0051a450
        ;   XREF to: 0051c240 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_0051c240(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051a455
    POP EBP                             ; 0051a458
    POP EDI                             ; 0051a459
    POP EBX                             ; 0051a45a
    RET                                 ; 0051a45b
    PUSH ESI                            ; 0051a45c
        ;   Label: LAB_0051a45c
    MOV ECX,0x5e9082                    ; 0051a45d | = "..\\core\\mission.cpp"
    MOV ESI,0xa3                        ; 0051a462
    PUSH 0x5e9096                       ; 0051a467 | = "CDemonMission::load - Unable to open ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051a46c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051a472 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051a478
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051a47d
    POP ESI                             ; 0051a480
    JMP 0x0051a410                      ; 0051a481
        ;   XREF to: 0051a410 (UNCONDITIONAL_JUMP)  ; LAB_0051a410

