; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004fc6f0(CKeyActor *this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005e69db
;   TerminatedCString s_keyMask_005e69e5
;   TerminatedCString s_descriptiveName_005e69ed
;   int g_CKeyActorClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveLocalizedString_FUN_0040b560
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc6f0
        ;   Label: core_keyactor.cpp_CKeyActor_archive_FUN_004fc6f0
    SUB ESP,0x100                       ; 004fc6f1
    MOV EBX,dword ptr [ESP + 0x108]     ; 004fc6f7
    PUSH EBX                            ; 004fc6fe
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004fc6ff
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fc704
    PUSH 0x5e69db                       ; 004fc707 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004fc70c
    PUSH EAX                            ; 004fc712
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004fc713
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004fc718
    PUSH 0x5e69e5                       ; 004fc71b | = "keyMask"
    LEA EAX,[EBX + 0x2d4]               ; 004fc720
    PUSH EAX                            ; 004fc726
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004fc727
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061f28c]      ; 004fc72c | g_CKeyActorClassVersion
    ADD ESP,0x8                         ; 004fc732
    CMP EDX,0x2                         ; 004fc735
    JZ 0x004fc742                       ; 004fc738
        ;   XREF to: 004fc742 (CONDITIONAL_JUMP)  ; LAB_004fc742
    ADD ESP,0x100                       ; 004fc73a
    POP EBX                             ; 004fc740
    RET                                 ; 004fc741
    PUSH 0x5e69ed                       ; 004fc742 | = "descriptiveName"
        ;   Label: LAB_004fc742
    LEA EAX,[ESP + 0x4]                 ; 004fc747
    PUSH EAX                            ; 004fc74b
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b560 ; 004fc74c
        ;   XREF to: 0040b560 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b560(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 004fc751
    ADD ESP,0x100                       ; 004fc754
    POP EBX                             ; 004fc75a
    RET                                 ; 004fc75b

