; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_GetReferencedActor_FUN_00560760(void)
;
; Local Variables:
; undefined1       Stack[-0xd0]:1  local_d0
;
; XREF[1]:
;   core_script.cpp_CScript_loadState_FUN_00560820 at 005609ec
;
; Referenced Globals:
;   TerminatedCString s_anon_006433dd
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   TerminatedCString s_none_00680d58
;   undefined4 DAT_00680d60
;   undefined4 DAT_00680d64
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_FUN_00524030
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00560760
        ;   Label: core_script.cpp_GetReferencedActor_FUN_00560760
    PUSH EDI                            ; 00560761
    SUB ESP,0xc8                        ; 00560762
    MOV EAX,ESP                         ; 00560768
    PUSH EAX                            ; 0056076a
    MOV ECX,0x32                        ; 0056076b
    LEA EDI,[ESP + 0x4]                 ; 00560770
    PUSH 0x6433dd                       ; 00560774 | = "\"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00560779
    MOV ESI,0x680d60                    ; 00560780 | DAT_00680d60
    PUSH EDX                            ; 00560785
    MOVSD.REP ES:EDI,ESI                ; 00560786 | DAT_00680d60 | DAT_00680d64
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560788
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0056078d
    PUSH 0x680d58                       ; 00560790 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 00560795
    PUSH EAX                            ; 00560799
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0056079a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056079f
    TEST EAX,EAX                        ; 005607a2
    JNZ 0x005607bc                      ; 005607a4
        ;   XREF to: 005607bc (CONDITIONAL_JUMP)  ; LAB_005607bc
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005607a6
    MOV dword ptr [EAX],0x0             ; 005607ad
    ADD ESP,0xc8                        ; 005607b3
    POP EDI                             ; 005607b9
    POP ESI                             ; 005607ba
    RET                                 ; 005607bb
    MOV EAX,ESP                         ; 005607bc
        ;   Label: LAB_005607bc
    PUSH EAX                            ; 005607be
    MOV ECX,dword ptr [0x0067d550]      ; 005607bf | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 005607c5 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 005607c6
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 005607cb
    MOV EDX,dword ptr [ESP + 0xd8]      ; 005607ce
    MOV dword ptr [EDX],EAX             ; 005607d5
    ADD ESP,0xc8                        ; 005607d7
    POP EDI                             ; 005607dd
    POP ESI                             ; 005607de
    RET                                 ; 005607df

