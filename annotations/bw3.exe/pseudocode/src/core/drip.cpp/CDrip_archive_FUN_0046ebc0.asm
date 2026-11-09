; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_archive_FUN_0046ebc0(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005bc726
;   undefined4 DAT_005bc730
;   TerminatedCString s_autoDrop_005bc735
;   TerminatedCString s_homePos_005bc73e
;   undefined4 DAT_005bc746
;   TerminatedCString s_minAutoDripTime_005bc74a
;   TerminatedCString s_maxAutoDripTime_005bc75a
;   TerminatedCString s_dripRadius_005bc76a
;   TerminatedCString s_damage_005bc775
;   TerminatedCString s_hitSound_005bc77c
;   TerminatedCString s_noRockFlag_005bc785
;   int g_CDripClassVersion = 0x6
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

    PUSH EBX                            ; 0046ebc0
        ;   Label: core_drip.cpp_CDrip_archive_FUN_0046ebc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046ebc1
    CMP dword ptr [0x005f4a44],0x2      ; 0046ebc5 | g_CDripClassVersion
    JGE 0x0046ecc2                      ; 0046ebcc
        ;   XREF to: 0046ecc2 (CONDITIONAL_JUMP)  ; LAB_0046ecc2
    PUSH 0x5bc726                       ; 0046ebd2 | = "modelName"
        ;   Label: LAB_0046ebd2
    LEA EAX,[EBX + 0x158]               ; 0046ebd7
    PUSH EAX                            ; 0046ebdd
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0046ebde
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 0046ebe3
    PUSH 0x5bc730                       ; 0046ebe6 | DAT_005bc730
    LEA EAX,[EBX + 0x2d4]               ; 0046ebeb
    PUSH EAX                            ; 0046ebf1
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0046ebf2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046ebf7
    PUSH 0x5bc735                       ; 0046ebfa | = "autoDrop"
    LEA EAX,[EBX + 0x2d8]               ; 0046ebff
    PUSH EAX                            ; 0046ec05
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0046ec06
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046ec0b
    PUSH 0x5bc73e                       ; 0046ec0e | = "homePos"
    LEA EAX,[EBX + 0x2f8]               ; 0046ec13
    PUSH EAX                            ; 0046ec19
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0046ec1a
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 0046ec1f
    PUSH 0x5bc746                       ; 0046ec22 | DAT_005bc746
    LEA EAX,[EBX + 0x304]               ; 0046ec27
    PUSH EAX                            ; 0046ec2d
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0046ec2e
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    MOV ECX,dword ptr [0x005f4a44]      ; 0046ec33 | g_CDripClassVersion
    ADD ESP,0x8                         ; 0046ec39
    CMP ECX,0x3                         ; 0046ec3c
    JL 0x0046ec7d                       ; 0046ec3f
        ;   XREF to: 0046ec7d (CONDITIONAL_JUMP)  ; LAB_0046ec7d
    PUSH 0x5bc74a                       ; 0046ec41 | = "minAutoDripTime"
    LEA EAX,[EBX + 0x2e0]               ; 0046ec46
    PUSH EAX                            ; 0046ec4c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0046ec4d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0046ec52
    PUSH 0x5bc75a                       ; 0046ec55 | = "maxAutoDripTime"
    LEA EAX,[EBX + 0x2e4]               ; 0046ec5a
    PUSH EAX                            ; 0046ec60
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0046ec61
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0046ec66
    PUSH 0x5bc76a                       ; 0046ec69 | = "dripRadius"
    LEA EAX,[EBX + 0x2e8]               ; 0046ec6e
    PUSH EAX                            ; 0046ec74
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0046ec75
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0046ec7a
    CMP dword ptr [0x005f4a44],0x4      ; 0046ec7d | g_CDripClassVersion
        ;   Label: LAB_0046ec7d
    JL 0x0046ec9a                       ; 0046ec84
        ;   XREF to: 0046ec9a (CONDITIONAL_JUMP)  ; LAB_0046ec9a
    PUSH 0x5bc775                       ; 0046ec86 | = "damage"
    LEA EAX,[EBX + 0x310]               ; 0046ec8b
    PUSH EAX                            ; 0046ec91
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0046ec92
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0046ec97
    CMP dword ptr [0x005f4a44],0x5      ; 0046ec9a | g_CDripClassVersion
        ;   Label: LAB_0046ec9a
    JL 0x0046ecb7                       ; 0046eca1
        ;   XREF to: 0046ecb7 (CONDITIONAL_JUMP)  ; LAB_0046ecb7
    PUSH 0x5bc77c                       ; 0046eca3 | = "hitSound"
    LEA EAX,[EBX + 0x314]               ; 0046eca8
    PUSH EAX                            ; 0046ecae
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0046ecaf
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0046ecb4
    CMP dword ptr [0x005f4a44],0x6      ; 0046ecb7 | g_CDripClassVersion
        ;   Label: LAB_0046ecb7
    JGE 0x0046ecd0                      ; 0046ecbe
        ;   XREF to: 0046ecd0 (CONDITIONAL_JUMP)  ; LAB_0046ecd0
    POP EBX                             ; 0046ecc0
    RET                                 ; 0046ecc1
    PUSH EBX                            ; 0046ecc2
        ;   Label: LAB_0046ecc2
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0046ecc3
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046ecc8
    JMP 0x0046ebd2                      ; 0046eccb
        ;   XREF to: 0046ebd2 (UNCONDITIONAL_JUMP)  ; LAB_0046ebd2
    PUSH 0x5bc785                       ; 0046ecd0 | = "noRockFlag"
        ;   Label: LAB_0046ecd0
    ADD EBX,0x334                       ; 0046ecd5
    PUSH EBX                            ; 0046ecdb
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0046ecdc
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046ece1
    POP EBX                             ; 0046ece4
    RET                                 ; 0046ece5

