; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_health_cpp_CHealthItem_archive_FUN_004d1fe0(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_AmodelName_005c4a8b+2
;   TerminatedCString s_useCount_005c4a97
;   TerminatedCString s_hpRestored_005c4aa0
;   TerminatedCString s_descriptiveName_005c4aab
;   TerminatedCString s_automatic_use_005c4abb
;   int g_CHealthItemClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveLocalizedString_FUN_0040b7a0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1fe0
        ;   Label: core_health.cpp_CHealthItem_archive_FUN_004d1fe0
    SUB ESP,0x100                       ; 004d1fe1
    MOV EBX,dword ptr [ESP + 0x108]     ; 004d1fe7
    PUSH EBX                            ; 004d1fee
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004d1fef
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d1ff4
    PUSH 0x5c4a8d                       ; 004d1ff7 | s_AmodelName_005c4a8b+2
    LEA EAX,[EBX + 0x158]               ; 004d1ffc
    PUSH EAX                            ; 004d2002
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 004d2003
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2008
    PUSH 0x5c4a97                       ; 004d200b | = "useCount"
    LEA EAX,[EBX + 0x2d4]               ; 004d2010
    PUSH EAX                            ; 004d2016
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d2017
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d201c
    PUSH 0x5c4aa0                       ; 004d201f | = "hpRestored"
    LEA EAX,[EBX + 0x2d8]               ; 004d2024
    PUSH EAX                            ; 004d202a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004d202b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x005fff84]      ; 004d2030 | g_CHealthItemClassVersion
    ADD ESP,0x8                         ; 004d2036
    CMP EDX,0x2                         ; 004d2039
    JZ 0x004d204f                       ; 004d203c
        ;   XREF to: 004d204f (CONDITIONAL_JUMP)  ; LAB_004d204f
    CMP dword ptr [0x005fff84],0x4      ; 004d203e | g_CHealthItemClassVersion
        ;   Label: LAB_004d203e
    JGE 0x004d2063                      ; 004d2045
        ;   XREF to: 004d2063 (CONDITIONAL_JUMP)  ; LAB_004d2063
    ADD ESP,0x100                       ; 004d2047
    POP EBX                             ; 004d204d
    RET                                 ; 004d204e
    PUSH 0x5c4aab                       ; 004d204f | = "descriptiveName"
        ;   Label: LAB_004d204f
    LEA EAX,[ESP + 0x4]                 ; 004d2054
    PUSH EAX                            ; 004d2058
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b7a0 ; 004d2059
        ;   XREF to: 0040b7a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b7a0(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 004d205e
    JMP 0x004d203e                      ; 004d2061
        ;   XREF to: 004d203e (UNCONDITIONAL_JUMP)  ; LAB_004d203e
    PUSH 0x5c4abb                       ; 004d2063 | = "automatic_use"
        ;   Label: LAB_004d2063
    ADD EBX,0x2e0                       ; 004d2068
    PUSH EBX                            ; 004d206e
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d206f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d2074
    ADD ESP,0x100                       ; 004d2077
    POP EBX                             ; 004d207d
    RET                                 ; 004d207e

