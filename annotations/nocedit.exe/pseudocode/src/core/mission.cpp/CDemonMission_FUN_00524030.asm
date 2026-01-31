; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_mission_cpp_CDemonMission_FUN_00524030(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[21]:
;   core_charactr.cpp_CCharacter_FUN_0042f3e0 at 0042f649
;   core_event.cpp_FUN_004aa400 at 004aa4d5
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e199e
;   core_hiram.cpp_CHiram_process_FUN_004f4550 at 004f4626
;   core_mission.cpp_CDemonMission_FUN_00524660 at 005246c4
;   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 at 00523a8f
;   core_mission.cpp_FUN_00524c20 at 00524cc0
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 0053ac5a
;   core_msnedit.cpp_CDemonMission_FUN_0053b030 at 0053b2e6
;   core_msnedit.cpp_CDemonMission_FUN_0053b510 at 0053b7c6
;   ... and 11 more
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524030
        ;   Label: core_mission.cpp_CDemonMission_FUN_00524030
    PUSH ESI                            ; 00524031
    MOV ESI,dword ptr [ESP + 0x10]      ; 00524032
    MOV EBX,dword ptr [ESP + 0xc]       ; 00524036
    MOV EBX,dword ptr [EBX + 0x548]     ; 0052403a
    TEST EBX,EBX                        ; 00524040
    JZ 0x0052405c                       ; 00524042
        ;   XREF to: 0052405c (CONDITIONAL_JUMP)  ; LAB_0052405c
    PUSH ESI                            ; 00524044
        ;   Label: LAB_00524044
    PUSH EBX                            ; 00524045
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00524046
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052404b
    TEST EAX,EAX                        ; 0052404e
    JZ 0x00524061                       ; 00524050
        ;   XREF to: 00524061 (CONDITIONAL_JUMP)  ; LAB_00524061
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00524052
    TEST EBX,EBX                        ; 00524058
    JNZ 0x00524044                      ; 0052405a
        ;   XREF to: 00524044 (CONDITIONAL_JUMP)  ; LAB_00524044
    XOR EAX,EAX                         ; 0052405c
        ;   Label: LAB_0052405c
    POP ESI                             ; 0052405e
    POP EBX                             ; 0052405f
    RET                                 ; 00524060
    MOV EAX,EBX                         ; 00524061
        ;   Label: LAB_00524061
    POP ESI                             ; 00524063
    POP EBX                             ; 00524064
    RET                                 ; 00524065

