; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_00501880(CKeyActor *this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x104]:1  local_104
;
; Referenced Globals:
;   TerminatedCString s_modelName_00630c55
;   TerminatedCString s_keyMask_00630c5f
;   TerminatedCString s_descriptiveName_00630c67
;   int g_CKeyActorClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveLocalizedString_FUN_0040b6e0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501880
        ;   Label: core_keyactor.cpp_CKeyActor_archive_FUN_00501880
    SUB ESP,0x100                       ; 00501881
    MOV EBX,dword ptr [ESP + 0x108]     ; 00501887
    PUSH EBX                            ; 0050188e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 0050188f
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00501894
    PUSH 0x630c55                       ; 00501897 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0050189c
    PUSH EAX                            ; 005018a2
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 005018a3
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005018a8
    PUSH 0x630c5f                       ; 005018ab | = "keyMask"
    LEA EAX,[EBX + 0x2d4]               ; 005018b0
    PUSH EAX                            ; 005018b6
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005018b7
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067cf2c]      ; 005018bc | g_CKeyActorClassVersion
    ADD ESP,0x8                         ; 005018c2
    CMP EDX,0x2                         ; 005018c5
    JZ 0x005018d2                       ; 005018c8
        ;   XREF to: 005018d2 (CONDITIONAL_JUMP)  ; LAB_005018d2
    ADD ESP,0x100                       ; 005018ca
    POP EBX                             ; 005018d0
    RET                                 ; 005018d1
    PUSH 0x630c67                       ; 005018d2 | = "descriptiveName"
        ;   Label: LAB_005018d2
    LEA EAX,[ESP + 0x4]                 ; 005018d7
    PUSH EAX                            ; 005018db
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b6e0 ; 005018dc
        ;   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b6e0(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 005018e1
    ADD ESP,0x100                       ; 005018e4
    POP EBX                             ; 005018ea
    RET                                 ; 005018eb

