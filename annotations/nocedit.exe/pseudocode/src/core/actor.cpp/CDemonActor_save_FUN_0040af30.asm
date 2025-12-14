; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_save_FUN_0040af30(CDemonActor * this_ptr, FILE * file_handle)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_inv.cpp_CInventory_save_FUN_004ff210 at 004ff353
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 at 00523910
;   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 at 0053bdee
;   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 at 0053c1e5
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613c80
;   TerminatedCString s_CDemonActor_save_tried_t_00613c92
;   TerminatedCString s_s_s_s_00613cd3
;   TerminatedCString s_s_s_s_00613ce0
;   TerminatedCString s_core_actor_cpp_00613ced
;   TerminatedCString s_IO_Error_after_writing_a_00613cff
;   char[104] g_PropertyNamePrefix
;   FILE* g_ActorDataFile
;   int g_ActorReadingMode
;   CDemonActor* g_CurrentActorBeingProcessed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040af30
        ;   Label: core_actor.cpp_CDemonActor_save_FUN_0040af30
    PUSH ESI                            ; 0040af31
    PUSH EDI                            ; 0040af32
    PUSH EBP                            ; 0040af33
    SUB ESP,0x8                         ; 0040af34
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040af37
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040af3b
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0 ; 0040af3f
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0()
    PUSH EBX                            ; 0040af44
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0040af45
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040af4a
    MOV DL,byte ptr [EBX]               ; 0040af4d
    MOV ESI,EAX                         ; 0040af4f
    TEST DL,DL                          ; 0040af51
    JNZ 0x0040af79                      ; 0040af53
        ;   XREF to: 0040af79 (CONDITIONAL_JUMP)  ; LAB_0040af79
    PUSH EAX                            ; 0040af55
    MOV EDX,0x613c80                    ; 0040af56 | = "..\\core\\actor.cpp"
    MOV ECX,0x778                       ; 0040af5b
    PUSH 0x613c92                       ; 0040af60 | = "CDemonActor::save - tried to save act..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0040af65 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040af6b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040af71
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0040af76
    PUSH EBX                            ; 0040af79
        ;   Label: LAB_0040af79
    PUSH ESI                            ; 0040af7a
    PUSH 0x66e178                       ; 0040af7b | g_PropertyNamePrefix
    PUSH 0x613cd3                       ; 0040af80 | = "%s{ %s \"%s\"\n"
    PUSH EDI                            ; 0040af85
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040af86
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0040af8b
    MOV EAX,[0x00822034]                ; 0040af8e | g_ActorDataFile
    MOV EBP,dword ptr [0x0082203c]      ; 0040af93 | g_CurrentActorBeingProcessed
    PUSH 0x1                            ; 0040af99
    MOV dword ptr [ESP + 0x8],EAX       ; 0040af9b
    MOV EAX,[0x00822038]                ; 0040af9f | g_ActorReadingMode
    MOV dword ptr [0x00822034],EDI      ; 0040afa4 | g_ActorDataFile
    MOV dword ptr [ESP + 0x4],EAX       ; 0040afaa
    MOV EAX,0x2                         ; 0040afae
    MOV dword ptr [0x0082203c],EBX      ; 0040afb3 | g_CurrentActorBeingProcessed
    MOV [0x00822038],EAX                ; 0040afb9 | g_ActorReadingMode
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040afbe
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040afc3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040afc6
    PUSH EBX                            ; 0040afcc
    CALL dword ptr [EAX + 0xe8]         ; 0040afcd
    ADD ESP,0x4                         ; 0040afd3
    PUSH -0x1                           ; 0040afd6
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040afd8
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040afdd
    PUSH EBX                            ; 0040afe0
    PUSH ESI                            ; 0040afe1
    PUSH 0x66e178                       ; 0040afe2 | g_PropertyNamePrefix
    PUSH 0x613ce0                       ; 0040afe7 | = "%s} %s \"%s\"\n"
    PUSH EDI                            ; 0040afec
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040afed
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV DH,byte ptr [EDI + 0xc]         ; 0040aff2
    ADD ESP,0x14                        ; 0040aff5
    TEST DH,0x20                        ; 0040aff8
    JNZ 0x0040b01c                      ; 0040affb
        ;   XREF to: 0040b01c (CONDITIONAL_JUMP)  ; LAB_0040b01c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040affd
        ;   Label: LAB_0040affd
    MOV [0x00822034],EAX                ; 0040b001 | g_ActorDataFile
    MOV EAX,dword ptr [ESP]             ; 0040b006
    MOV dword ptr [0x0082203c],EBP      ; 0040b009 | g_CurrentActorBeingProcessed
    MOV [0x00822038],EAX                ; 0040b00f | g_ActorReadingMode
    ADD ESP,0x8                         ; 0040b014
    POP EBP                             ; 0040b017
    POP EDI                             ; 0040b018
    POP ESI                             ; 0040b019
    POP EBX                             ; 0040b01a
    RET                                 ; 0040b01b
    PUSH ESI                            ; 0040b01c
        ;   Label: LAB_0040b01c
    MOV EDX,0x613ced                    ; 0040b01d | = "..\\core\\actor.cpp"
    MOV ECX,0x79a                       ; 0040b022
    PUSH 0x613cff                       ; 0040b027 | = "IO Error after writing actor of type %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 0040b02c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040b032 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040b038
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0040b03d
    JMP 0x0040affd                      ; 0040b040
        ;   XREF to: 0040affd (UNCONDITIONAL_JUMP)  ; LAB_0040affd

