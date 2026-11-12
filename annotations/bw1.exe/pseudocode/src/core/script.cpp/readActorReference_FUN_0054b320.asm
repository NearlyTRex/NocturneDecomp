; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_readActorReference_FUN_0054b320(_FILE *file_handle,CDemonActor *actor_out)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor *    Stack[0x8]:4   actor_out
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
;
; XREF[1]:
;   core_script.cpp_CScript_loadState_FUN_0054b3e0 at 0054b5ac
;
; Referenced Globals:
;   TerminatedCString s_anon_005f004d
;   undefined4 DAT_0061f650
;   TerminatedCString s_none_00622ad8
;   undefined4 DAT_00622ae0
;   undefined4 DAT_00622ae4
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054b320
        ;   Label: core_script.cpp_readActorReference_FUN_0054b320
    PUSH EDI                            ; 0054b321
    SUB ESP,0xc8                        ; 0054b322
    MOV EAX,ESP                         ; 0054b328
    PUSH EAX                            ; 0054b32a
    MOV ECX,0x32                        ; 0054b32b
    LEA EDI,[ESP + 0x4]                 ; 0054b330
    PUSH 0x5f004d                       ; 0054b334 | = "\"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0054b339
    MOV ESI,0x622ae0                    ; 0054b340 | DAT_00622ae0
    PUSH EDX                            ; 0054b345
    MOVSD.REP ES:EDI,ESI                ; 0054b346 | DAT_00622ae0 | DAT_00622ae4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b348
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054b34d
    PUSH 0x622ad8                       ; 0054b350 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 0054b355
    PUSH EAX                            ; 0054b359
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054b35a
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054b35f
    TEST EAX,EAX                        ; 0054b362
    JNZ 0x0054b37c                      ; 0054b364
        ;   XREF to: 0054b37c (CONDITIONAL_JUMP)  ; LAB_0054b37c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0054b366
    MOV dword ptr [EAX],0x0             ; 0054b36d
    ADD ESP,0xc8                        ; 0054b373
    POP EDI                             ; 0054b379
    POP ESI                             ; 0054b37a
    RET                                 ; 0054b37b
    MOV EAX,ESP                         ; 0054b37c
        ;   Label: LAB_0054b37c
    PUSH EAX                            ; 0054b37e
    MOV ECX,dword ptr [0x0061f650]      ; 0054b37f | DAT_0061f650
    PUSH ECX                            ; 0054b385 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0 ; 0054b386
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0054b38b
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0054b38e
    MOV dword ptr [EDX],EAX             ; 0054b395
    ADD ESP,0xc8                        ; 0054b397
    POP EDI                             ; 0054b39d
    POP ESI                             ; 0054b39e
    RET                                 ; 0054b39f

