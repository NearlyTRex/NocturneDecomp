; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00562a40(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005f1a8a+1
;   TerminatedCString s_weight_005f1a95
;   TerminatedCString s_initialVelocity_005f1a9c
;   TerminatedCString s_initRotVel_005f1aac
;   TerminatedCString s_triggerEvent_005f1ab7
;   undefined4 DAT_005f1ac4
;   int g_CSimBoxClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562a40
        ;   Label: core_simbox.cpp_CSimBox_archive_FUN_00562a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562a41
    PUSH EBX                            ; 00562a45
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 00562a46
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00562a4b
    PUSH 0x5f1a8b                       ; 00562a4e | s_modelName_005f1a8a+1
    LEA EAX,[EBX + 0x158]               ; 00562a53
    PUSH EAX                            ; 00562a59
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 00562a5a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 00562a5f
    PUSH 0x5f1a95                       ; 00562a62 | = "weight"
    LEA EAX,[EBX + 0x2d8]               ; 00562a67
    PUSH EAX                            ; 00562a6d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00562a6e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    MOV EDX,dword ptr [0x00623210]      ; 00562a73 | g_CSimBoxClassVersion
    ADD ESP,0x8                         ; 00562a79
    CMP EDX,0x2                         ; 00562a7c
    JGE 0x00562a8c                      ; 00562a7f
        ;   XREF to: 00562a8c (CONDITIONAL_JUMP)  ; LAB_00562a8c
    CMP dword ptr [0x00623210],0x3      ; 00562a81 | g_CSimBoxClassVersion
    JGE 0x00562ad3                      ; 00562a88
        ;   XREF to: 00562ad3 (CONDITIONAL_JUMP)  ; LAB_00562ad3
    POP EBX                             ; 00562a8a
    RET                                 ; 00562a8b
    PUSH 0x5f1a9c                       ; 00562a8c | = "initialVelocity"
        ;   Label: LAB_00562a8c
    LEA EAX,[EBX + 0x340]               ; 00562a91
    PUSH EAX                            ; 00562a97
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 00562a98
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 00562a9d
    PUSH 0x5f1aac                       ; 00562aa0 | = "initRotVel"
    LEA EAX,[EBX + 0x34c]               ; 00562aa5
    PUSH EAX                            ; 00562aab
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 00562aac
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 00562ab1
    PUSH 0x5f1ab7                       ; 00562ab4 | = "triggerEvent"
    LEA EAX,[EBX + 0x2dc]               ; 00562ab9
    PUSH EAX                            ; 00562abf
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00562ac0
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00562ac5
    CMP dword ptr [0x00623210],0x3      ; 00562ac8 | g_CSimBoxClassVersion
    JGE 0x00562ad3                      ; 00562acf
        ;   XREF to: 00562ad3 (CONDITIONAL_JUMP)  ; LAB_00562ad3
    POP EBX                             ; 00562ad1
    RET                                 ; 00562ad2
    PUSH 0x5f1ac4                       ; 00562ad3 | DAT_005f1ac4
        ;   Label: LAB_00562ad3
    ADD EBX,0x2d4                       ; 00562ad8
    PUSH EBX                            ; 00562ade
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00562adf
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00562ae4
    POP EBX                             ; 00562ae7
    RET                                 ; 00562ae8

