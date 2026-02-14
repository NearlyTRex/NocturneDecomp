; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_00523990(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description )
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file
; CDemonActor *    Stack[0xc]:4   current_actor
; char *           Stack[0x10]:4   property_description
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_actor.cpp_archiveActor_FUN_0040b870 at 0040b896
;
; Referenced Globals:
;   TerminatedCString s_unknown_00638f9b
;   TerminatedCString s_unknown_00638fa5
;   TerminatedCString s_core_mission_cpp_00638faf
;   TerminatedCString s_Error_reading_actor_poin_00638fc3
;   TerminatedCString s_anon_00638ffb
;   TerminatedCString s_WARNING_Can_t_find_actor_00639001
;   TerminatedCString s_x_0063905b
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   TerminatedCString s_none_0067d690
;   uchar[257] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fputc_FUN_005fea10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523990
        ;   Label: core_mission.cpp_CDemonMission_loadActor_FUN_00523990
    PUSH ESI                            ; 00523991
    PUSH EDI                            ; 00523992
    PUSH EBP                            ; 00523993
    SUB ESP,0xcc                        ; 00523994
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0052399a
    MOV EDI,dword ptr [ESP + 0xe8]      ; 005239a1
    MOV EBP,dword ptr [ESP + 0xec]      ; 005239a8
    TEST EDI,EDI                        ; 005239af
    JNZ 0x005239b8                      ; 005239b1
        ;   XREF to: 005239b8 (CONDITIONAL_JUMP)  ; LAB_005239b8
    MOV EDI,0x638f9b                    ; 005239b3 | = "(unknown)"
    TEST EBP,EBP                        ; 005239b8
        ;   Label: LAB_005239b8
    JNZ 0x005239c1                      ; 005239ba
        ;   XREF to: 005239c1 (CONDITIONAL_JUMP)  ; LAB_005239c1
    MOV EBP,0x638fa5                    ; 005239bc | = "(unknown)"
    PUSH EBX                            ; 005239c1
        ;   Label: LAB_005239c1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005239c2
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    MOV EDX,EAX                         ; 005239c7
    ADD ESP,0x4                         ; 005239c9
    INC DL                              ; 005239cc
    AND EDX,0xff                        ; 005239ce
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 005239d4 | g_CharacterClassificationTable
    JNZ 0x005239c1                      ; 005239db
        ;   XREF to: 005239c1 (CONDITIONAL_JUMP)  ; LAB_005239c1
    CMP EAX,0x22                        ; 005239dd
    JNZ 0x00523aba                      ; 005239e0
        ;   XREF to: 00523aba (CONDITIONAL_JUMP)  ; LAB_00523aba
    PUSH EBX                            ; 005239e6
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005239e7
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005239ec
    CMP EAX,0x22                        ; 005239ef
    JNZ 0x00523a38                      ; 005239f2
        ;   XREF to: 00523a38 (CONDITIONAL_JUMP)  ; LAB_00523a38
    PUSH EBP                            ; 005239f4 | = "(unknown)"
        ;   Label: LAB_005239f4
    PUSH EDI                            ; 005239f5 | = "(unknown)"
    MOV EAX,0x638faf                    ; 005239f6 | = "..\\core\\mission.cpp"
    MOV EDX,0x22d                       ; 005239fb
    PUSH 0x638fc3                       ; 00523a00 | = "Error reading actor pointer.\nOwner: ..."
    MOV [0x02f0ca48],EAX                ; 00523a05 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00523a0a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00523a10
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00523a15
    PUSH EBX                            ; 00523a18
        ;   Label: LAB_00523a18
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00523a19
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00523a1e
    CMP EAX,-0x1                        ; 00523a21
    JZ 0x005239f4                       ; 00523a24
        ;   XREF to: 005239f4 (CONDITIONAL_JUMP)  ; LAB_005239f4
    CMP EAX,0xa                         ; 00523a26
    JNZ 0x00523a18                      ; 00523a29
        ;   XREF to: 00523a18 (CONDITIONAL_JUMP)  ; LAB_00523a18
    MOV EAX,ESI                         ; 00523a2b
    ADD ESP,0xcc                        ; 00523a2d
    POP EBP                             ; 00523a33
    POP EDI                             ; 00523a34
    POP ESI                             ; 00523a35
    POP EBX                             ; 00523a36
    RET                                 ; 00523a37
    PUSH EBX                            ; 00523a38
        ;   Label: LAB_00523a38
    PUSH EAX                            ; 00523a39
    CALL crt_stdio.c_fputc_FUN_005fea10 ; 00523a3a
        ;   XREF to: 005fea10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005fea10(int character, _FILE * stream)
    ADD ESP,0x8                         ; 00523a3f
    MOV EAX,ESP                         ; 00523a42
    PUSH EAX                            ; 00523a44
    PUSH 0x638ffb                       ; 00523a45 | = "%[^\"]"
    PUSH EBX                            ; 00523a4a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00523a4b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00523a50
    CMP EAX,0x1                         ; 00523a53
    JNZ 0x005239f4                      ; 00523a56
        ;   XREF to: 005239f4 (CONDITIONAL_JUMP)  ; LAB_005239f4
    PUSH 0x67d690                       ; 00523a58 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 00523a5d
    PUSH EAX                            ; 00523a61
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00523a62
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00523a67
    TEST EAX,EAX                        ; 00523a6a
    JNZ 0x00523a84                      ; 00523a6c
        ;   XREF to: 00523a84 (CONDITIONAL_JUMP)  ; LAB_00523a84
    XOR ESI,ESI                         ; 00523a6e
    PUSH EBX                            ; 00523a70
        ;   Label: LAB_00523a70
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00523a71
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00523a76
    CMP EAX,0x22                        ; 00523a79
    JNZ 0x005239f4                      ; 00523a7c
        ;   XREF to: 005239f4 (CONDITIONAL_JUMP)  ; LAB_005239f4
    JMP 0x00523a18                      ; 00523a82
        ;   XREF to: 00523a18 (UNCONDITIONAL_JUMP)  ; LAB_00523a18
    MOV EAX,ESP                         ; 00523a84
        ;   Label: LAB_00523a84
    PUSH EAX                            ; 00523a86
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00523a87
    PUSH EDX                            ; 00523a8e
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 00523a8f
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00523a94
    MOV ESI,EAX                         ; 00523a97
    TEST EAX,EAX                        ; 00523a99
    JNZ 0x00523a70                      ; 00523a9b
        ;   XREF to: 00523a70 (CONDITIONAL_JUMP)  ; LAB_00523a70
    PUSH EBP                            ; 00523a9d | = "(unknown)"
    PUSH EDI                            ; 00523a9e | = "(unknown)"
    LEA EAX,[ESP + 0x8]                 ; 00523a9f
    PUSH EAX                            ; 00523aa3
    PUSH 0x639001                       ; 00523aa4 | = "WARNING.  Can't find actor '%s' in %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 00523aa9 | g_CEditorToolsPtr
    PUSH ECX                            ; 00523aaf | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00523ab0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00523ab5
    JMP 0x00523a70                      ; 00523ab8
        ;   XREF to: 00523a70 (UNCONDITIONAL_JUMP)  ; LAB_00523a70
    PUSH EBX                            ; 00523aba
        ;   Label: LAB_00523aba
    PUSH EAX                            ; 00523abb
    CALL crt_stdio.c_fputc_FUN_005fea10 ; 00523abc
        ;   XREF to: 005fea10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005fea10(int character, _FILE * stream)
    ADD ESP,0x8                         ; 00523ac1
    LEA EAX,[ESP + 0xc8]                ; 00523ac4
    PUSH EAX                            ; 00523acb
    PUSH 0x63905b                       ; 00523acc | = "%x"
    PUSH EBX                            ; 00523ad1
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00523ad2
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00523ad7
    CMP EAX,0x1                         ; 00523ada
    JNZ 0x005239f4                      ; 00523add
        ;   XREF to: 005239f4 (CONDITIONAL_JUMP)  ; LAB_005239f4
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00523ae3
    JMP 0x00523a18                      ; 00523aea
        ;   XREF to: 00523a18 (UNCONDITIONAL_JUMP)  ; LAB_00523a18

