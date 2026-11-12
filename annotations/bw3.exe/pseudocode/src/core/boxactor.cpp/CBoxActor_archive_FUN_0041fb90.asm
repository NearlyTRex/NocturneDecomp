; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041fb90(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_boxactor.cpp_CLightActor_archive_FUN_004207f0 at 004207fa
;   core_stone.cpp_CTempleStone_archive_FUN_00568950 at 00568955
;
; Referenced Globals:
;   undefined4 s_GmodelName_005b7508+1
;   TerminatedCString s_weightInPounds_005b7513
;   undefined4 DAT_005b7522
;   undefined4 DAT_005b7526
;   TerminatedCString s_loopWavName_005b752a
;   TerminatedCString s_collisionWavName_005b7536
;   TerminatedCString s_canBeCarried_005b7547
;   TerminatedCString s_pickupType_005b7554
;   TerminatedCString s_carriedByActor_005b755f
;   TerminatedCString s_canBePushed_005b756e
;   TerminatedCString s_pushedByActor_005b757a
;   TerminatedCString s_groundType_005b7588
;   TerminatedCString s_simBox_005b7593
;   TerminatedCString s_plotInShadowFlag_005b759a
;   TerminatedCString s_collisionFlag_005b75ab
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveBox_FUN_0040be30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveOrientation_FUN_0040b4a0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fb90
        ;   Label: core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90
    PUSH ESI                            ; 0041fb91
    SUB ESP,0x104                       ; 0041fb92
    MOV EBX,dword ptr [ESP + 0x110]     ; 0041fb98
    PUSH EBX                            ; 0041fb9f
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0041fba0
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041fba5
    PUSH 0x5b7509                       ; 0041fba8 | s_GmodelName_005b7508+1
    LEA EAX,[EBX + 0x158]               ; 0041fbad
    PUSH EAX                            ; 0041fbb3
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0041fbb4
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fbb9
    PUSH 0x5b7513                       ; 0041fbbc | = "weightInPounds"
    LEA EAX,[EBX + 0x390]               ; 0041fbc1
    PUSH EAX                            ; 0041fbc7
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0041fbc8
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fbcd
    PUSH 0x5b7522                       ; 0041fbd0 | DAT_005b7522
    LEA EAX,[EBX + 0x30c]               ; 0041fbd5
    PUSH EAX                            ; 0041fbdb
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0041fbdc
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fbe1
    PUSH 0x5b7526                       ; 0041fbe4 | DAT_005b7526
    LEA EAX,[EBX + 0x300]               ; 0041fbe9
    PUSH EAX                            ; 0041fbef
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0041fbf0
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fbf5
    PUSH 0x5b752a                       ; 0041fbf8 | = "loopWavName"
    LEA EAX,[EBX + 0x2d4]               ; 0041fbfd
    PUSH EAX                            ; 0041fc03
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0041fc04
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041fc09
    PUSH 0x5b7536                       ; 0041fc0c | = "collisionWavName"
    LEA EAX,[EBX + 0x2e8]               ; 0041fc11
    PUSH EAX                            ; 0041fc17
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0041fc18
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x005f0e38]      ; 0041fc1d | g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 0041fc23
    CMP EDX,0x7                         ; 0041fc26
    JL 0x0041fe33                       ; 0041fc29
        ;   XREF to: 0041fe33 (CONDITIONAL_JUMP)  ; LAB_0041fe33
    PUSH 0x5b7554                       ; 0041fc2f | = "pickupType"
    LEA EAX,[EBX + 0x314]               ; 0041fc34
    PUSH EAX                            ; 0041fc3a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fc3b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fc40
    PUSH 0x5b755f                       ; 0041fc43 | = "carriedByActor"
        ;   Label: LAB_0041fc43
    LEA EAX,[EBX + 0x318]               ; 0041fc48
    PUSH EAX                            ; 0041fc4e
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0041fc4f
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    MOV ESI,dword ptr [0x005f0e38]      ; 0041fc54 | g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 0041fc5a
    CMP ESI,0x2                         ; 0041fc5d
    JL 0x0041fc8a                       ; 0041fc60
        ;   XREF to: 0041fc8a (CONDITIONAL_JUMP)  ; LAB_0041fc8a
    PUSH 0x5b756e                       ; 0041fc62 | = "canBePushed"
    LEA EAX,[EBX + 0x31c]               ; 0041fc67
    PUSH EAX                            ; 0041fc6d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fc6e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fc73
    PUSH 0x5b757a                       ; 0041fc76 | = "pushedByActor"
    LEA EAX,[EBX + 0x320]               ; 0041fc7b
    PUSH EAX                            ; 0041fc81
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0041fc82
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fc87
    CMP dword ptr [0x005f0e38],0x3      ; 0041fc8a | g_CBoxActorClassVersion
        ;   Label: LAB_0041fc8a
    JL 0x0041fca7                       ; 0041fc91
        ;   XREF to: 0041fca7 (CONDITIONAL_JUMP)  ; LAB_0041fca7
    PUSH 0x5b7588                       ; 0041fc93 | = "groundType"
    LEA EAX,[EBX + 0x5f0]               ; 0041fc98
    PUSH EAX                            ; 0041fc9e
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fc9f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fca4
    CMP dword ptr [0x005f0e38],0x4      ; 0041fca7 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fca7
    JL 0x0041fe6d                       ; 0041fcae
        ;   XREF to: 0041fe6d (CONDITIONAL_JUMP)  ; LAB_0041fe6d
    PUSH 0x5b7593                       ; 0041fcb4 | = "simBox"
    LEA EAX,[EBX + 0x394]               ; 0041fcb9
    PUSH EAX                            ; 0041fcbf
    CALL core_actor.cpp_archiveBox_FUN_0040be30 ; 0041fcc0
        ;   XREF to: 0040be30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveBox_FUN_0040be30(CBox * box_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fcc5
    CMP dword ptr [0x005f0e38],0x5      ; 0041fcc8 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fcc8
    JL 0x0041fe7c                       ; 0041fccf
        ;   XREF to: 0041fe7c (CONDITIONAL_JUMP)  ; LAB_0041fe7c
    PUSH 0x5b759a                       ; 0041fcd5 | = "plotInShadowFlag"
    LEA EAX,[EBX + 0x5f4]               ; 0041fcda
    PUSH EAX                            ; 0041fce0
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fce1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fce6
    CMP dword ptr [0x005f0e38],0x6      ; 0041fce9 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fce9
    JL 0x0041fe8b                       ; 0041fcf0
        ;   XREF to: 0041fe8b (CONDITIONAL_JUMP)  ; LAB_0041fe8b
    PUSH 0x5b75ab                       ; 0041fcf6 | = "collisionFlag"
    LEA EAX,[EBX + 0x5f8]               ; 0041fcfb
    PUSH EAX                            ; 0041fd01
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fd02
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fd07
    CMP dword ptr [0x005f0e38],0x8      ; 0041fd0a | g_CBoxActorClassVersion
        ;   Label: LAB_0041fd0a
    JL 0x0041fd3b                       ; 0041fd11
        ;   XREF to: 0041fd3b (CONDITIONAL_JUMP)  ; LAB_0041fd3b
    PUSH 0x5b75b9                       ; 0041fd13 | = "isTransparent"
    LEA EAX,[EBX + 0xfc]                ; 0041fd18
    PUSH EAX                            ; 0041fd1e
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fd1f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fd24
    PUSH 0x5b75c7                       ; 0041fd27 | = "dontUseNormals"
    LEA EAX,[EBX + 0x5fc]               ; 0041fd2c
    PUSH EAX                            ; 0041fd32
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fd33
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fd38
    CMP dword ptr [0x005f0e38],0x9      ; 0041fd3b | g_CBoxActorClassVersion
        ;   Label: LAB_0041fd3b
    JNZ 0x0041fd56                      ; 0041fd42
        ;   XREF to: 0041fd56 (CONDITIONAL_JUMP)  ; LAB_0041fd56
    PUSH 0x5b75d6                       ; 0041fd44 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 0041fd49
    PUSH EAX                            ; 0041fd4d
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0041fd4e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041fd53
    CMP dword ptr [0x005f0e38],0xb      ; 0041fd56 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fd56
    JL 0x0041fd73                       ; 0041fd5d
        ;   XREF to: 0041fd73 (CONDITIONAL_JUMP)  ; LAB_0041fd73
    PUSH 0x5b75e6                       ; 0041fd5f | = "constrainExtentsActor"
    LEA EAX,[EBX + 0x324]               ; 0041fd64
    PUSH EAX                            ; 0041fd6a
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0041fd6b
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fd70
    CMP dword ptr [0x005f0e38],0xc      ; 0041fd73 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fd73
    JL 0x0041fd90                       ; 0041fd7a
        ;   XREF to: 0041fd90 (CONDITIONAL_JUMP)  ; LAB_0041fd90
    PUSH 0x5b75fc                       ; 0041fd7c | = "useEvent"
    LEA EAX,[EBX + 0x600]               ; 0041fd81
    PUSH EAX                            ; 0041fd87
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0041fd88
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041fd8d
    CMP dword ptr [0x005f0e38],0xd      ; 0041fd90 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fd90
    JL 0x0041fdad                       ; 0041fd97
        ;   XREF to: 0041fdad (CONDITIONAL_JUMP)  ; LAB_0041fdad
    PUSH 0x5b7605                       ; 0041fd99 | = "allowedMeleeAttackTypes"
    LEA EAX,[EBX + 0x6c8]               ; 0041fd9e
    PUSH EAX                            ; 0041fda4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fda5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fdaa
    CMP dword ptr [0x005f0e38],0xe      ; 0041fdad | g_CBoxActorClassVersion
        ;   Label: LAB_0041fdad
    JL 0x0041fdca                       ; 0041fdb4
        ;   XREF to: 0041fdca (CONDITIONAL_JUMP)  ; LAB_0041fdca
    PUSH 0x5b761d                       ; 0041fdb6 | = "pushSound"
    LEA EAX,[EBX + 0x32c]               ; 0041fdbb
    PUSH EAX                            ; 0041fdc1
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0041fdc2
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041fdc7
    CMP dword ptr [0x005f0e38],0xf      ; 0041fdca | g_CBoxActorClassVersion
        ;   Label: LAB_0041fdca
    JL 0x0041fde7                       ; 0041fdd1
        ;   XREF to: 0041fde7 (CONDITIONAL_JUMP)  ; LAB_0041fde7
    PUSH 0x5b7627                       ; 0041fdd3 | = "blockVirtualDirectorFlag"
    LEA EAX,[EBX + 0x6cc]               ; 0041fdd8
    PUSH EAX                            ; 0041fdde
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fddf
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fde4
    CMP dword ptr [0x005f0e38],0x10     ; 0041fde7 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fde7
    JL 0x0041fe04                       ; 0041fdee
        ;   XREF to: 0041fe04 (CONDITIONAL_JUMP)  ; LAB_0041fe04
    PUSH 0x5b7640                       ; 0041fdf0 | = "camOrient"
    LEA EAX,[EBX + 0x6d0]               ; 0041fdf5
    PUSH EAX                            ; 0041fdfb
    CALL core_actor.cpp_archiveOrientation_FUN_0040b4a0 ; 0041fdfc
        ;   XREF to: 0040b4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveOrientation_FUN_0040b4a0(COrientation * orient_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fe01
    CMP dword ptr [0x005f0e38],0x11     ; 0041fe04 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fe04
    JL 0x0041fe21                       ; 0041fe0b
        ;   XREF to: 0041fe21 (CONDITIONAL_JUMP)  ; LAB_0041fe21
    PUSH 0x5b764a                       ; 0041fe0d | = "fadeTime"
    LEA EAX,[EBX + 0x6e0]               ; 0041fe12
    PUSH EAX                            ; 0041fe18
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0041fe19
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fe1e
    CMP dword ptr [0x005f0e38],0x12     ; 0041fe21 | g_CBoxActorClassVersion
        ;   Label: LAB_0041fe21
    JGE 0x0041fe9a                      ; 0041fe28
        ;   XREF to: 0041fe9a (CONDITIONAL_JUMP)  ; LAB_0041fe9a
    ADD ESP,0x104                       ; 0041fe2a
    POP ESI                             ; 0041fe30
    POP EBX                             ; 0041fe31
    RET                                 ; 0041fe32
    PUSH 0x5b7547                       ; 0041fe33 | = "canBeCarried"
        ;   Label: LAB_0041fe33
    LEA EAX,[ESP + 0x104]               ; 0041fe38
    PUSH EAX                            ; 0041fe3f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0041fe40
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041fe45
    MOV ECX,dword ptr [ESP + 0x100]     ; 0041fe48
    TEST ECX,ECX                        ; 0041fe4f
    JZ 0x0041fe62                       ; 0041fe51
        ;   XREF to: 0041fe62 (CONDITIONAL_JUMP)  ; LAB_0041fe62
    MOV dword ptr [EBX + 0x314],0x2     ; 0041fe53
    JMP 0x0041fc43                      ; 0041fe5d
        ;   XREF to: 0041fc43 (UNCONDITIONAL_JUMP)  ; LAB_0041fc43
    MOV dword ptr [EBX + 0x314],ECX     ; 0041fe62
        ;   Label: LAB_0041fe62
    JMP 0x0041fc43                      ; 0041fe68
        ;   XREF to: 0041fc43 (UNCONDITIONAL_JUMP)  ; LAB_0041fc43
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 0041fe6d
        ;   Label: LAB_0041fe6d
    JMP 0x0041fcc8                      ; 0041fe77
        ;   XREF to: 0041fcc8 (UNCONDITIONAL_JUMP)  ; LAB_0041fcc8
    MOV dword ptr [EBX + 0x5f4],0x1     ; 0041fe7c
        ;   Label: LAB_0041fe7c
    JMP 0x0041fce9                      ; 0041fe86
        ;   XREF to: 0041fce9 (UNCONDITIONAL_JUMP)  ; LAB_0041fce9
    MOV dword ptr [EBX + 0x5f8],0x1     ; 0041fe8b
        ;   Label: LAB_0041fe8b
    JMP 0x0041fd0a                      ; 0041fe95
        ;   XREF to: 0041fd0a (UNCONDITIONAL_JUMP)  ; LAB_0041fd0a
    PUSH 0x5b7653                       ; 0041fe9a | = "fadeEvent"
        ;   Label: LAB_0041fe9a
    ADD EBX,0x664                       ; 0041fe9f
    PUSH EBX                            ; 0041fea5
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0041fea6
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041feab
    ADD ESP,0x104                       ; 0041feae
    POP ESI                             ; 0041feb4
    POP EBX                             ; 0041feb5
    RET                                 ; 0041feb6

