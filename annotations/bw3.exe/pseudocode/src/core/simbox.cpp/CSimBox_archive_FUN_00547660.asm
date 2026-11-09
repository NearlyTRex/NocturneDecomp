; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00547660(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005d15b5+1
;   TerminatedCString s_weight_005d15c0
;   TerminatedCString s_initialVelocity_005d15c7
;   TerminatedCString s_initRotVel_005d15d7
;   TerminatedCString s_triggerEvent_005d15e2
;   undefined4 DAT_005d15ef
;   int g_CSimBoxClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547660
        ;   Label: core_simbox.cpp_CSimBox_archive_FUN_00547660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00547661
    PUSH EBX                            ; 00547665
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00547666
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054766b
    PUSH 0x5d15b6                       ; 0054766e | s_modelName_005d15b5+1
    LEA EAX,[EBX + 0x158]               ; 00547673
    PUSH EAX                            ; 00547679
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0054767a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 0054767f
    PUSH 0x5d15c0                       ; 00547682 | = "weight"
    LEA EAX,[EBX + 0x2d8]               ; 00547687
    PUSH EAX                            ; 0054768d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0054768e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    MOV EDX,dword ptr [0x0060415c]      ; 00547693 | g_CSimBoxClassVersion
    ADD ESP,0x8                         ; 00547699
    CMP EDX,0x2                         ; 0054769c
    JGE 0x005476ac                      ; 0054769f
        ;   XREF to: 005476ac (CONDITIONAL_JUMP)  ; LAB_005476ac
    CMP dword ptr [0x0060415c],0x3      ; 005476a1 | g_CSimBoxClassVersion
    JGE 0x005476f3                      ; 005476a8
        ;   XREF to: 005476f3 (CONDITIONAL_JUMP)  ; LAB_005476f3
    POP EBX                             ; 005476aa
    RET                                 ; 005476ab
    PUSH 0x5d15c7                       ; 005476ac | = "initialVelocity"
        ;   Label: LAB_005476ac
    LEA EAX,[EBX + 0x340]               ; 005476b1
    PUSH EAX                            ; 005476b7
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 005476b8
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 005476bd
    PUSH 0x5d15d7                       ; 005476c0 | = "initRotVel"
    LEA EAX,[EBX + 0x34c]               ; 005476c5
    PUSH EAX                            ; 005476cb
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 005476cc
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 005476d1
    PUSH 0x5d15e2                       ; 005476d4 | = "triggerEvent"
    LEA EAX,[EBX + 0x2dc]               ; 005476d9
    PUSH EAX                            ; 005476df
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 005476e0
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005476e5
    CMP dword ptr [0x0060415c],0x3      ; 005476e8 | g_CSimBoxClassVersion
    JGE 0x005476f3                      ; 005476ef
        ;   XREF to: 005476f3 (CONDITIONAL_JUMP)  ; LAB_005476f3
    POP EBX                             ; 005476f1
    RET                                 ; 005476f2
    PUSH 0x5d15ef                       ; 005476f3 | DAT_005d15ef
        ;   Label: LAB_005476f3
    ADD EBX,0x2d4                       ; 005476f8
    PUSH EBX                            ; 005476fe
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005476ff
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00547704
    POP EBX                             ; 00547707
    RET                                 ; 00547708

