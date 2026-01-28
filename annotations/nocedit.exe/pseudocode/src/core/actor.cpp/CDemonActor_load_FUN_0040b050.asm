; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,FILE *file_handle)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_inv.cpp_CInventory_load_FUN_004ff400 at 004ff5c9
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00523247
;   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 at 0053be7b
;   core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0 at 0053c109
;
; Referenced Globals:
;   TerminatedCString s_s_00613d27
;   TerminatedCString s_core_actor_cpp_00613d36
;   TerminatedCString s_Start_of_actor_file_tag__00613d48
;   TerminatedCString s_s_00613d76
;   TerminatedCString s_core_actor_cpp_00613d85
;   TerminatedCString s_End_of_actor_file_tag_mi_00613d97
;   TerminatedCString s_core_actor_cpp_00613dcd
;   TerminatedCString s_IO_Error_after_reading_s_00613ddf
;   FILE* g_ActorDataFile
;   int g_ActorReadingMode
;   CDemonActor* g_CurrentActorBeingProcessed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b050
        ;   Label: core_actor.cpp_CDemonActor_load_FUN_0040b050
    PUSH ESI                            ; 0040b051
    PUSH EDI                            ; 0040b052
    PUSH EBP                            ; 0040b053
    SUB ESP,0xcc                        ; 0040b054
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0040b05a
    PUSH EBX                            ; 0040b061
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0040b062
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    MOV ESI,EAX                         ; 0040b067
    ADD ESP,0x4                         ; 0040b069
    MOV EBP,EAX                         ; 0040b06c
    XOR AH,AH                           ; 0040b06e
    MOV byte ptr [ESP],AH               ; 0040b070
    MOV byte ptr [ESP + 0x64],AH        ; 0040b073
    LEA EAX,[ESP + 0x64]                ; 0040b077
    PUSH EAX                            ; 0040b07b
    LEA EAX,[ESP + 0x4]                 ; 0040b07c
    PUSH EAX                            ; 0040b080
    PUSH 0x613d27                       ; 0040b081 | = " { %s \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040b086
    PUSH EDX                            ; 0040b08d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b08e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b093
    MOV EAX,ESP                         ; 0040b096
    PUSH EAX                            ; 0040b098
    PUSH ESI                            ; 0040b099
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0040b09a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b09f
    TEST EAX,EAX                        ; 0040b0a2
    JNZ 0x0040b19f                      ; 0040b0a4
        ;   XREF to: 0040b19f (CONDITIONAL_JUMP)  ; LAB_0040b19f
    LEA ESI,[ESP + 0x64]                ; 0040b0aa
        ;   Label: LAB_0040b0aa
    MOV EDI,EBX                         ; 0040b0ae
    PUSH EDI                            ; 0040b0b0
    MOV AL,byte ptr [ESI]               ; 0040b0b1
        ;   Label: LAB_0040b0b1
    MOV byte ptr [EDI],AL               ; 0040b0b3
    CMP AL,0x0                          ; 0040b0b5
    JZ 0x0040b0c9                       ; 0040b0b7
        ;   XREF to: 0040b0c9 (CONDITIONAL_JUMP)  ; LAB_0040b0c9
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b0b9
    ADD ESI,0x2                         ; 0040b0bc
    MOV byte ptr [EDI + 0x1],AL         ; 0040b0bf
    ADD EDI,0x2                         ; 0040b0c2
    CMP AL,0x0                          ; 0040b0c5
    JNZ 0x0040b0b1                      ; 0040b0c7
        ;   XREF to: 0040b0b1 (CONDITIONAL_JUMP)  ; LAB_0040b0b1
    POP EDI                             ; 0040b0c9
        ;   Label: LAB_0040b0c9
    MOV EAX,[0x00822034]                ; 0040b0ca | g_ActorDataFile
    MOV dword ptr [ESP + 0xc8],EAX      ; 0040b0cf
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040b0d6
    MOV EDI,dword ptr [0x00822038]      ; 0040b0dd | g_ActorReadingMode
    MOV [0x00822034],EAX                ; 0040b0e3 | g_ActorDataFile
    MOV EAX,0x1                         ; 0040b0e8
    PUSH EBX                            ; 0040b0ed
    MOV [0x00822038],EAX                ; 0040b0ee | g_ActorReadingMode
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040b0f3
    MOV ESI,dword ptr [0x0082203c]      ; 0040b0f9 | g_CurrentActorBeingProcessed
    MOV dword ptr [0x0082203c],EBX      ; 0040b0ff | g_CurrentActorBeingProcessed
    CALL dword ptr [EAX + 0xe8]         ; 0040b105
    ADD ESP,0x4                         ; 0040b10b
    LEA EAX,[ESP + 0x64]                ; 0040b10e
    PUSH EAX                            ; 0040b112
    LEA EAX,[ESP + 0x4]                 ; 0040b113
    XOR DH,DH                           ; 0040b117
    PUSH EAX                            ; 0040b119
    MOV byte ptr [ESP + 0x8],DH         ; 0040b11a
    PUSH 0x613d76                       ; 0040b11e | = " } %s \"%[^\"]\"\n"
    MOV byte ptr [ESP + 0x70],DH        ; 0040b123
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040b127
    PUSH EDX                            ; 0040b12e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0040b12f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b134
    MOV EAX,ESP                         ; 0040b137
    PUSH EAX                            ; 0040b139
    PUSH EBP                            ; 0040b13a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0040b13b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b140
    TEST EAX,EAX                        ; 0040b143
    JZ 0x0040b1c8                       ; 0040b145
        ;   XREF to: 0040b1c8 (CONDITIONAL_JUMP)  ; LAB_0040b1c8
    PUSH EBX                            ; 0040b14b
        ;   Label: LAB_0040b14b
    PUSH EBP                            ; 0040b14c
    MOV ECX,0x613d85                    ; 0040b14d | = "..\\core\\actor.cpp"
    MOV EAX,0x7d4                       ; 0040b152
    PUSH 0x613d97                       ; 0040b157 | = "End of actor file tag mismatch for cl..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0040b15c | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0040b162 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040b167
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0040b16c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040b16f
        ;   Label: LAB_0040b16f
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b176
    JNZ 0x0040b1e0                      ; 0040b17a
        ;   XREF to: 0040b1e0 (CONDITIONAL_JUMP)  ; LAB_0040b1e0
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0040b17c
        ;   Label: LAB_0040b17c
    MOV dword ptr [0x0082203c],ESI      ; 0040b183 | g_CurrentActorBeingProcessed
    MOV dword ptr [0x00822038],EDI      ; 0040b189 | g_ActorReadingMode
    MOV [0x00822034],EAX                ; 0040b18f | g_ActorDataFile
    ADD ESP,0xcc                        ; 0040b194
    POP EBP                             ; 0040b19a
    POP EDI                             ; 0040b19b
    POP ESI                             ; 0040b19c
    POP EBX                             ; 0040b19d
    RET                                 ; 0040b19e
    PUSH ESI                            ; 0040b19f
        ;   Label: LAB_0040b19f
    MOV ECX,0x613d36                    ; 0040b1a0 | = "..\\core\\actor.cpp"
    MOV EDI,0x7b7                       ; 0040b1a5
    PUSH 0x613d48                       ; 0040b1aa | = "Start of actor file tag mismatch for ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0040b1af | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0040b1b5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040b1bb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0040b1c0
    JMP 0x0040b0aa                      ; 0040b1c3
        ;   XREF to: 0040b0aa (UNCONDITIONAL_JUMP)  ; LAB_0040b0aa
    LEA EAX,[ESP + 0x64]                ; 0040b1c8
        ;   Label: LAB_0040b1c8
    PUSH EAX                            ; 0040b1cc
    PUSH EBX                            ; 0040b1cd
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0040b1ce
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b1d3
    TEST EAX,EAX                        ; 0040b1d6
    JNZ 0x0040b14b                      ; 0040b1d8
        ;   XREF to: 0040b14b (CONDITIONAL_JUMP)  ; LAB_0040b14b
    JMP 0x0040b16f                      ; 0040b1de
        ;   XREF to: 0040b16f (UNCONDITIONAL_JUMP)  ; LAB_0040b16f
    PUSH EBX                            ; 0040b1e0
        ;   Label: LAB_0040b1e0
    PUSH EBP                            ; 0040b1e1
    MOV EDX,0x613dcd                    ; 0040b1e2 | = "..\\core\\actor.cpp"
    MOV ECX,0x7d9                       ; 0040b1e7
    PUSH 0x613ddf                       ; 0040b1ec | = "IO Error after reading %s \"%s\""
    MOV dword ptr [0x02f0ca48],EDX      ; 0040b1f1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040b1f7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040b1fd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0040b202
    JMP 0x0040b17c                      ; 0040b205
        ;   XREF to: 0040b17c (UNCONDITIONAL_JUMP)  ; LAB_0040b17c

