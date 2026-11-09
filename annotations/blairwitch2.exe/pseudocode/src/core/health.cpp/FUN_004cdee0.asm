; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_FUN_004cdee0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005d99bf+1
;   TerminatedCString s_useCount_005d99ca
;   TerminatedCString s_hpRestored_005d99d3
;   TerminatedCString s_descriptiveName_005d99de
;   int g_CHealthItemClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveLocalizedString_FUN_0040b850
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdee0
        ;   Label: core_health.cpp_FUN_004cdee0
    SUB ESP,0x100                       ; 004cdee1
    MOV EBX,dword ptr [ESP + 0x108]     ; 004cdee7
    PUSH EBX                            ; 004cdeee
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004cdeef
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cdef4
    PUSH 0x5d99c0                       ; 004cdef7 | s_modelName_005d99bf+1
    LEA EAX,[EBX + 0x2b4]               ; 004cdefc
    PUSH EAX                            ; 004cdf02
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 004cdf03
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 004cdf08
    PUSH 0x5d99ca                       ; 004cdf0b | = "useCount"
    LEA EAX,[EBX + 0x430]               ; 004cdf10
    PUSH EAX                            ; 004cdf16
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004cdf17
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cdf1c
    PUSH 0x5d99d3                       ; 004cdf1f | = "hpRestored"
    ADD EBX,0x434                       ; 004cdf24
    PUSH EBX                            ; 004cdf2a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004cdf2b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    MOV EDX,dword ptr [0x00617a44]      ; 004cdf30 | g_CHealthItemClassVersion
    ADD ESP,0x8                         ; 004cdf36
    CMP EDX,0x2                         ; 004cdf39
    JZ 0x004cdf46                       ; 004cdf3c
        ;   XREF to: 004cdf46 (CONDITIONAL_JUMP)  ; LAB_004cdf46
    ADD ESP,0x100                       ; 004cdf3e
    POP EBX                             ; 004cdf44
    RET                                 ; 004cdf45
    PUSH 0x5d99de                       ; 004cdf46 | = "descriptiveName"
        ;   Label: LAB_004cdf46
    LEA EAX,[ESP + 0x4]                 ; 004cdf4b
    PUSH EAX                            ; 004cdf4f
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b850 ; 004cdf50
        ;   XREF to: 0040b850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b850(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 004cdf55
    ADD ESP,0x100                       ; 004cdf58
    POP EBX                             ; 004cdf5e
    RET                                 ; 004cdf5f

