; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_add_FUN_00473cb0(CStrList *this_ptr,char *string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   string_data
;
; XREF[17]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049df1a
;   core_game.cpp_FUN_004a4b50 at 004a4f59
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3b17
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d210b
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9c5d
;   core_script.cpp_CScript_getDialogDuration_FUN_005049b0 at 00504a7c
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501011
;   core_script.cpp_FUN_004febd0 at 004fece4
;   core_sound.cpp_FUN_0052ed40 at 0052ed63
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f84bf
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473cb0
        ;   Label: shape_edittool.cpp_CStrList_add_FUN_00473cb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00473cb1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00473cb5
    PUSH ECX                            ; 00473cb9
    MOV EBX,dword ptr [EDX]             ; 00473cba
    PUSH EBX                            ; 00473cbc
    MOV EAX,dword ptr [EDX + 0xc]       ; 00473cbd
    PUSH EDX                            ; 00473cc0
    CALL dword ptr [EAX + 0xc]          ; 00473cc1
    ADD ESP,0xc                         ; 00473cc4
    POP EBX                             ; 00473cc7
    RET                                 ; 00473cc8

