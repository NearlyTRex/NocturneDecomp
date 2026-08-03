; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_readActorReference_FUN_00505200(_FILE *file_handle,CDemonActor *actor_out)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; CDemonActor *    Stack[0x8]:4   actor_out
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
;
; XREF[1]:
;   core_script.cpp_CScript_loadState_FUN_005052c0 at 0050548c
;
; Referenced Globals:
;   TerminatedCString s_anon_0058fcb1
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   TerminatedCString s_none_005be228
;   undefined4 DAT_005be230
;   undefined4 DAT_005be234
;
; Called Functions:
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00505200
        ;   Label: core_script.cpp_readActorReference_FUN_00505200
    PUSH EDI                            ; 00505201
    SUB ESP,0xc8                        ; 00505202
    MOV EAX,ESP                         ; 00505208
    PUSH EAX                            ; 0050520a
    MOV ECX,0x32                        ; 0050520b
    LEA EDI,[ESP + 0x4]                 ; 00505210
    PUSH 0x58fcb1                       ; 00505214 | = "\"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00505219
    MOV ESI,0x5be230                    ; 00505220 | DAT_005be230
    PUSH EDX                            ; 00505225
    MOVSD.REP ES:EDI,ESI                ; 00505226 | DAT_005be230 | DAT_005be234
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00505228
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0050522d
    PUSH 0x5be228                       ; 00505230 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 00505235
    PUSH EAX                            ; 00505239
    CALL crt_string.c__stricmp_FUN_00564520 ; 0050523a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050523f
    TEST EAX,EAX                        ; 00505242
    JNZ 0x0050525c                      ; 00505244
        ;   XREF to: 0050525c (CONDITIONAL_JUMP)  ; LAB_0050525c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00505246
    MOV dword ptr [EAX],0x0             ; 0050524d
    ADD ESP,0xc8                        ; 00505253
    POP EDI                             ; 00505259
    POP ESI                             ; 0050525a
    RET                                 ; 0050525b
    MOV EAX,ESP                         ; 0050525c
        ;   Label: LAB_0050525c
    PUSH EAX                            ; 0050525e
    MOV ECX,dword ptr [0x005baf90]      ; 0050525f | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 00505265
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0 ; 00505266
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0050526b
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0050526e
    MOV dword ptr [EDX],EAX             ; 00505275
    ADD ESP,0xc8                        ; 00505277
    POP EDI                             ; 0050527d
    POP ESI                             ; 0050527e
    RET                                 ; 0050527f

