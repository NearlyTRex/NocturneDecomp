; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_load_FUN_004fb490(CDemonMission *this_ptr,char *mission_filename,int load_flags)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   mission_filename
; int              Stack[0xc]:4   load_flags
;
; XREF[3]:
;   core_game.cpp_FUN_004bc840 at 004bca22
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcc57
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d568
;
; Referenced Globals:
;   undefined4 DAT_005de036
;   TerminatedCString s_world_005de039
;   TerminatedCString s_core_mission_cpp_005de03f
;   TerminatedCString s_CDemonMission_load_Unabl_005de053
;   TerminatedCString s_Loading_mission_005de07d
;   undefined4 DAT_00617e10
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_level.cpp_CLevelLoader_update_FUN_004e1600
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590
;   core_mission.cpp_FUN_004fd280
;   crt_stdio.c_fclose_FUN_005b89c0
;   engine_dosio.cpp_FUN_00460c70
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb490
        ;   Label: core_mission.cpp_CDemonMission_load_FUN_004fb490
    PUSH EDI                            ; 004fb491
    PUSH EBP                            ; 004fb492
    PUSH 0x5de036                       ; 004fb493 | DAT_005de036
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fb498
    PUSH EDX                            ; 004fb49c
    PUSH 0x5de039                       ; 004fb49d | = "world"
    CALL engine_dosio.cpp_FUN_00460c70  ; 004fb4a2
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004fb4a7
    MOV EBX,EAX                         ; 004fb4aa
    TEST EAX,EAX                        ; 004fb4ac
    JZ 0x004fb4fc                       ; 004fb4ae
        ;   XREF to: 004fb4fc (CONDITIONAL_JUMP)  ; LAB_004fb4fc
    PUSH 0x0                            ; 004fb4b0
        ;   Label: LAB_004fb4b0
    PUSH 0x5de07d                       ; 004fb4b2 | = "Loading mission"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004fb4b7
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004fb4bc
    PUSH EAX                            ; 004fb4bf
    MOV EDI,dword ptr [0x00617e10]      ; 004fb4c0 | DAT_00617e10
    PUSH EDI                            ; 004fb4c6
    CALL core_level.cpp_CLevelLoader_update_FUN_004e1600 ; 004fb4c7
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004e1600(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 004fb4cc
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fb4cf
    PUSH EBP                            ; 004fb4d3
    PUSH EBX                            ; 004fb4d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fb4d5
    PUSH EAX                            ; 004fb4d9
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 ; 004fb4da
        ;   XREF to: 004fb590 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590(CDemonMission * this_ptr, _FILE * file_handle, int load_flags)
    ADD ESP,0xc                         ; 004fb4df
    PUSH EBX                            ; 004fb4e2
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004fb4e3
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004fb4e8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fb4eb
    PUSH EDX                            ; 004fb4ef
    CALL core_mission.cpp_FUN_004fd280  ; 004fb4f0
        ;   XREF to: 004fd280 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004fd280(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004fb4f5
    POP EBP                             ; 004fb4f8
    POP EDI                             ; 004fb4f9
    POP EBX                             ; 004fb4fa
    RET                                 ; 004fb4fb
    PUSH ESI                            ; 004fb4fc
        ;   Label: LAB_004fb4fc
    MOV ECX,0x5de03f                    ; 004fb4fd | = "..\\core\\mission.cpp"
    MOV ESI,0xa0                        ; 004fb502
    PUSH 0x5de053                       ; 004fb507 | = "CDemonMission::load - Unable to open ..."
    MOV dword ptr [0x01d046a0],ECX      ; 004fb50c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fb512 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fb518
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fb51d
    POP ESI                             ; 004fb520
    JMP 0x004fb4b0                      ; 004fb521
        ;   XREF to: 004fb4b0 (UNCONDITIONAL_JUMP)  ; LAB_004fb4b0

