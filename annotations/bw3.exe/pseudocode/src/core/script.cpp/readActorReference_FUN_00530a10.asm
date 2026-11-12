; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_readActorReference_FUN_00530a10(_FILE *file_handle,CDemonActor *actor_out)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor *    Stack[0x8]:4   actor_out
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
;
; XREF[1]:
;   core_script.cpp_CScript_loadState_FUN_00530ad0 at 00530c9c
;
; Referenced Globals:
;   TerminatedCString s_anon_005cfcde
;   undefined4 DAT_00600530
;   TerminatedCString s_none_006039e8
;   undefined4 DAT_006039f0
;   undefined4 DAT_006039f4
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00530a10
        ;   Label: core_script.cpp_readActorReference_FUN_00530a10
    PUSH EDI                            ; 00530a11
    SUB ESP,0xc8                        ; 00530a12
    MOV EAX,ESP                         ; 00530a18
    PUSH EAX                            ; 00530a1a
    MOV ECX,0x32                        ; 00530a1b
    LEA EDI,[ESP + 0x4]                 ; 00530a20
    PUSH 0x5cfcde                       ; 00530a24 | = "\"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00530a29
    MOV ESI,0x6039f0                    ; 00530a30 | DAT_006039f0
    PUSH EDX                            ; 00530a35
    MOVSD.REP ES:EDI,ESI                ; 00530a36 | DAT_006039f0 | DAT_006039f4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530a38
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00530a3d
    PUSH 0x6039e8                       ; 00530a40 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 00530a45
    PUSH EAX                            ; 00530a49
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00530a4a
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00530a4f
    TEST EAX,EAX                        ; 00530a52
    JNZ 0x00530a6c                      ; 00530a54
        ;   XREF to: 00530a6c (CONDITIONAL_JUMP)  ; LAB_00530a6c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00530a56
    MOV dword ptr [EAX],0x0             ; 00530a5d
    ADD ESP,0xc8                        ; 00530a63
    POP EDI                             ; 00530a69
    POP ESI                             ; 00530a6a
    RET                                 ; 00530a6b
    MOV EAX,ESP                         ; 00530a6c
        ;   Label: LAB_00530a6c
    PUSH EAX                            ; 00530a6e
    MOV ECX,dword ptr [0x00600530]      ; 00530a6f | DAT_00600530
    PUSH ECX                            ; 00530a75
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90 ; 00530a76
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00530a7b
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00530a7e
    MOV dword ptr [EDX],EAX             ; 00530a85
    ADD ESP,0xc8                        ; 00530a87
    POP EDI                             ; 00530a8d
    POP ESI                             ; 00530a8e
    RET                                 ; 00530a8f

