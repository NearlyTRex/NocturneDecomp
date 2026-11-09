; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_FUN_00492b30(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d5283
;   TerminatedCString s_movieName_005d528d
;   int g_CFilmReelClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492b30
        ;   Label: core_filmreel.cpp_FUN_00492b30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00492b31
    PUSH EBX                            ; 00492b35
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00492b36
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00492b3b
    PUSH 0x5d5283                       ; 00492b3e | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 00492b43
    PUSH EAX                            ; 00492b49
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 00492b4a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    MOV EDX,dword ptr [0x00614c48]      ; 00492b4f | g_CFilmReelClassVersion
    ADD ESP,0x8                         ; 00492b55
    CMP EDX,0x2                         ; 00492b58
    JGE 0x00492b5f                      ; 00492b5b
        ;   XREF to: 00492b5f (CONDITIONAL_JUMP)  ; LAB_00492b5f
    POP EBX                             ; 00492b5d
    RET                                 ; 00492b5e
    PUSH 0x5d528d                       ; 00492b5f | = "movieName"
        ;   Label: LAB_00492b5f
    LEA EAX,[EBX + 0x434]               ; 00492b64
    PUSH EAX                            ; 00492b6a
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00492b6b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00492b70
    POP EBX                             ; 00492b73
    RET                                 ; 00492b74

