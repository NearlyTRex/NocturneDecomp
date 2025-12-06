; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_health.cpp_CHealthItem_serialize_FUN_004f1f20()
;
; Local Variables:
; undefined1       Stack[-0x104]:1  local_104
;
; Referenced Globals:
;   TerminatedCString s_modelName_0062e9fb
;   TerminatedCString s_useCount_0062ea05
;   TerminatedCString s_hpRestored_0062ea0e
;   TerminatedCString s_descriptiveName_0062ea19
;   undefined4 g_CHealthItemClassVersion
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1f20
        ;   Label: core_health.cpp_CHealthItem_serialize_FUN_004f1f20
    SUB ESP,0x100                       ; 004f1f21
    MOV EBX,dword ptr [ESP + 0x108]     ; 004f1f27
    PUSH EBX                            ; 004f1f2e
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004f1f2f | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f1f34
    PUSH 0x62e9fb                       ; 004f1f37 | = "modelName" | s_modelName_0062e9fb = modelName
    LEA EAX,[EBX + 0x158]               ; 004f1f3c
    PUSH EAX                            ; 004f1f42
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 004f1f43 | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f1f48
    PUSH 0x62ea05                       ; 004f1f4b | = "useCount" | s_useCount_0062ea05 = useCount
    LEA EAX,[EBX + 0x2d4]               ; 004f1f50
    PUSH EAX                            ; 004f1f56
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004f1f57 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f1f5c
    PUSH 0x62ea0e                       ; 004f1f5f | = "hpRestored" | s_hpRestored_0062ea0e = hpRestored
    ADD EBX,0x2d8                       ; 004f1f64
    PUSH EBX                            ; 004f1f6a
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004f1f6b | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067cc04]      ; 004f1f70 | undefined4 g_CHealthItemClassVersion
    ADD ESP,0x8                         ; 004f1f76
    CMP EDX,0x2                         ; 004f1f79
    JZ 0x004f1f86                       ; 004f1f7c | LAB_004f1f86
        ;   XREF to: 004f1f86 (CONDITIONAL_JUMP)
    ADD ESP,0x100                       ; 004f1f7e
    POP EBX                             ; 004f1f84
    RET                                 ; 004f1f85
    PUSH 0x62ea19                       ; 004f1f86 | = "descriptiveName" | s_descriptiveName_0062ea19 = descriptiveName
        ;   Label: LAB_004f1f86
    LEA EAX,[ESP + 0x4]                 ; 004f1f8b
    PUSH EAX                            ; 004f1f8f
    CALL core_actor.cpp_serializeLocalizedString_FUN_0040b6e0 ; 004f1f90 | void core_actor.cpp_serializeLocalizedString_FUN_0040b6e0(char * * string_buffer, char * localization_key)
        ;   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f1f95
    ADD ESP,0x100                       ; 004f1f98
    POP EBX                             ; 004f1f9e
    RET                                 ; 004f1f9f

