; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00540450(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005e68b8+1
;   TerminatedCString s_weight_005e68c3
;   TerminatedCString s_initialVelocity_005e68ca
;   TerminatedCString s_initRotVel_005e68da
;   TerminatedCString s_triggerEvent_005e68e5
;   undefined4 DAT_005e68f2
;   int g_CSimBoxClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540450
        ;   Label: core_simbox.cpp_CSimBox_archive_FUN_00540450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00540451
    PUSH EBX                            ; 00540455
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00540456
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054045b
    PUSH 0x5e68b9                       ; 0054045e | s_modelName_005e68b8+1
    LEA EAX,[EBX + 0x2b4]               ; 00540463
    PUSH EAX                            ; 00540469
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0054046a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054046f
    PUSH 0x5e68c3                       ; 00540472 | = "weight"
    LEA EAX,[EBX + 0x434]               ; 00540477
    PUSH EAX                            ; 0054047d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0054047e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061bbc0]      ; 00540483 | g_CSimBoxClassVersion
    ADD ESP,0x8                         ; 00540489
    CMP EDX,0x2                         ; 0054048c
    JGE 0x0054049c                      ; 0054048f
        ;   XREF to: 0054049c (CONDITIONAL_JUMP)  ; LAB_0054049c
    CMP dword ptr [0x0061bbc0],0x3      ; 00540491 | g_CSimBoxClassVersion
    JGE 0x005404e3                      ; 00540498
        ;   XREF to: 005404e3 (CONDITIONAL_JUMP)  ; LAB_005404e3
    POP EBX                             ; 0054049a
    RET                                 ; 0054049b
    PUSH 0x5e68ca                       ; 0054049c | = "initialVelocity"
        ;   Label: LAB_0054049c
    LEA EAX,[EBX + 0x49c]               ; 005404a1
    PUSH EAX                            ; 005404a7
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 005404a8
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b4b0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005404ad
    PUSH 0x5e68da                       ; 005404b0 | = "initRotVel"
    LEA EAX,[EBX + 0x4a8]               ; 005404b5
    PUSH EAX                            ; 005404bb
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 005404bc
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b4b0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005404c1
    PUSH 0x5e68e5                       ; 005404c4 | = "triggerEvent"
    LEA EAX,[EBX + 0x438]               ; 005404c9
    PUSH EAX                            ; 005404cf
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005404d0
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005404d5
    CMP dword ptr [0x0061bbc0],0x3      ; 005404d8 | g_CSimBoxClassVersion
    JGE 0x005404e3                      ; 005404df
        ;   XREF to: 005404e3 (CONDITIONAL_JUMP)  ; LAB_005404e3
    POP EBX                             ; 005404e1
    RET                                 ; 005404e2
    PUSH 0x5e68f2                       ; 005404e3 | DAT_005e68f2
        ;   Label: LAB_005404e3
    ADD EBX,0x430                       ; 005404e8
    PUSH EBX                            ; 005404ee
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 005404ef
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005404f4
    POP EBX                             ; 005404f7
    RET                                 ; 005404f8

