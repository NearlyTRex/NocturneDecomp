; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b210(char *property_description,char *property_type)
;
; Parameters:
; char *           Stack[0x4]:4   property_description
; char *           Stack[0x8]:4   property_type
;
; XREF[13]:
;   core_actor.cpp_archiveClothList_FUN_0040be60 at 0040bf44
;   core_actor.cpp_archiveDescription_FUN_0040b290 at 0040b2d0
;   core_actor.cpp_archiveFloat_FUN_0040b770 at 0040b7b9
;   core_actor.cpp_archiveInteger_FUN_0040b7f0 at 0040b83a
;   core_actor.cpp_archiveLocation_FUN_0040b480 at 0040b4d6
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0 at 0040ba65
;   core_actor.cpp_archiveOrientation_FUN_0040b3e0 at 0040b431
;   core_actor.cpp_archivePartStatus_FUN_0040bae0 at 0040bb6d
;   core_actor.cpp_archiveQuaternion_FUN_0040b520 at 0040b575
;   core_actor.cpp_archiveRules_FUN_0040c000 at 0040c0e0
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_unknown_00613dfe
;   TerminatedCString s_unknown_00613e08
;   TerminatedCString s_unknown_00613e12
;   TerminatedCString s_load_00613e1c
;   TerminatedCString s_save_00613e21
;   TerminatedCString s_core_actor_cpp_00613e26
;   TerminatedCString s_Error_sing_actor_propert_00613e38
;   int g_ActorReadingMode
;   CDemonActor* g_CurrentActorBeingProcessed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b210
        ;   Label: core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
    PUSH ESI                            ; 0040b211
    PUSH EDI                            ; 0040b212
    PUSH EBP                            ; 0040b213
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b214
    MOV EAX,0x613e08                    ; 0040b218 | = "(unknown)"
    MOV EDX,dword ptr [0x0082203c]      ; 0040b21d | g_CurrentActorBeingProcessed
    MOV EBX,0x613dfe                    ; 0040b223 | = "(unknown)"
    TEST EDX,EDX                        ; 0040b228
    JNZ 0x0040b27b                      ; 0040b22a
        ;   XREF to: 0040b27b (CONDITIONAL_JUMP)  ; LAB_0040b27b
    TEST ESI,ESI                        ; 0040b22c
        ;   Label: LAB_0040b22c
    JNZ 0x0040b235                      ; 0040b22e
        ;   XREF to: 0040b235 (CONDITIONAL_JUMP)  ; LAB_0040b235
    MOV ESI,0x613e12                    ; 0040b230 | = "(unknown)"
    MOV ECX,dword ptr [0x00822038]      ; 0040b235 | g_ActorReadingMode
        ;   Label: LAB_0040b235
    MOV EDX,0x613e1c                    ; 0040b23b | = "load"
    CMP ECX,0x2                         ; 0040b240
    JNZ 0x0040b24a                      ; 0040b243
        ;   XREF to: 0040b24a (CONDITIONAL_JUMP)  ; LAB_0040b24a
    MOV EDX,0x613e21                    ; 0040b245 | = "save"
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040b24a
        ;   Label: LAB_0040b24a
    PUSH ECX                            ; 0040b24e
    PUSH ESI                            ; 0040b24f | = "(unknown)"
    PUSH EAX                            ; 0040b250 | = "(unknown)"
    PUSH EBX                            ; 0040b251 | = "(unknown)"
    PUSH EDX                            ; 0040b252 | = "load" | s_save_00613e21
    MOV EDI,0x613e26                    ; 0040b253 | = "..\\core\\actor.cpp"
    MOV EBP,0x7ec                       ; 0040b258
    PUSH 0x613e38                       ; 0040b25d | = "Error %sing actor property.\nActor na..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0040b262 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0040b268 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040b26e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x18                        ; 0040b273
    POP EBP                             ; 0040b276
    POP EDI                             ; 0040b277
    POP ESI                             ; 0040b278
    POP EBX                             ; 0040b279
    RET                                 ; 0040b27a
    PUSH EDX                            ; 0040b27b
        ;   Label: LAB_0040b27b
    MOV EBX,EDX                         ; 0040b27c
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 0040b27e
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040b283
    JMP 0x0040b22c                      ; 0040b286
        ;   XREF to: 0040b22c (UNCONDITIONAL_JUMP)  ; LAB_0040b22c

