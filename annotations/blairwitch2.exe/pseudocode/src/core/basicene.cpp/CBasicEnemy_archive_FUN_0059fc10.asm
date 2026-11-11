; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicene_cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy *this_ptr)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x314]:1  local_314
; undefined1       Stack[-0x313]:1  local_313
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930 at 005a4935
;   core_confedrt.cpp_CConfederate_archive_FUN_005a14d0 at 005a14d5
;   core_confzomb.cpp_CConfederateZombie_archive_FUN_005a2660 at 005a2665
;   core_dog1.cpp_CDog_archive_FUN_005ac6d0 at 005ac6d6
;   core_ghostchi.cpp_CGhostChild_archive_FUN_005a9b60 at 005a9b65
;   core_hag.cpp_CHag_archive_FUN_005ab9d0 at 005ab9d5
;   core_hand.cpp_CHand_archive_FUN_005aa460 at 005aa465
;   core_schngeis.cpp_CSchnellGeist_archive_FUN_005a3bf0 at 005a3bf5
;   core_unionzom.cpp_CUnionZombie_archive_FUN_005a4740 at 005a4745
;
; Referenced Globals:
;   TerminatedCString s_speed_005ef9e4
;   TerminatedCString s_modelName_005ef9ea
;   TerminatedCString s_MotionState_005ef9f4
;   TerminatedCString s_initialPosition_005efa00
;   TerminatedCString s_AIState_005efa10
;   TerminatedCString s_InitialAIState_005efa18
;   TerminatedCString s_AIState_005efa27
;   TerminatedCString s_InitialAIState_005efa2f
;   TerminatedCString s_AlertDistance_005efa3e
;   TerminatedCString s_GiveupDistance_005efa4c
;   TerminatedCString s_MadTimer_005efa5b
;   TerminatedCString s_PatrolGoal_005efa64
;   TerminatedCString s_PatrolNext_005efa6f
;   TerminatedCString s_PatrolDirection_005efa7a
;   TerminatedCString s_AnimationState_005efa8a
;   ... and 27 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;   unkaddr_0059d350.cpp_FUN_0059d6f0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059db70
;   unkaddr_0059d350.cpp_FUN_0059db90
;   unkaddr_0059d350.cpp_FUN_0059dbe0
;   unkaddr_0059d350.cpp_FUN_0059dc00
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fc10
        ;   Label: core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
    PUSH ESI                            ; 0059fc11
    PUSH EDI                            ; 0059fc12
    PUSH EBP                            ; 0059fc13
    SUB ESP,0x304                       ; 0059fc14
    MOV EDX,dword ptr [ESP + 0x318]     ; 0059fc1a
    PUSH EDX                            ; 0059fc21
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 0059fc22
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059fc27
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fc2a
    PUSH 0x5ef9e4                       ; 0059fc31 | = "speed"
    ADD EAX,0x10a60                     ; 0059fc36
    PUSH EAX                            ; 0059fc3b
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fc3c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fc41
    MOV EBX,dword ptr [ESP + 0x318]     ; 0059fc44
    PUSH 0x5ef9ea                       ; 0059fc4b | = "modelName"
    ADD EBX,0x2b4                       ; 0059fc50
    PUSH EBX                            ; 0059fc56
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0059fc57
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 0059fc5c
    PUSH 0x5ef9f4                       ; 0059fc5f | = "MotionState"
    PUSH EBX                            ; 0059fc64
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0059fc65
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 0059fc6a
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fc6d
    PUSH 0x5efa00                       ; 0059fc74 | = "initialPosition"
    ADD EAX,0x11360                     ; 0059fc79
    PUSH EAX                            ; 0059fc7e
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 0059fc7f
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    MOV ECX,dword ptr [0x0061ead0]      ; 0059fc84 | g_CBasicEnemyClassVersion
    ADD ESP,0x8                         ; 0059fc8a
    CMP ECX,0x2                         ; 0059fc8d
    JL 0x0059fcba                       ; 0059fc90
        ;   XREF to: 0059fcba (CONDITIONAL_JUMP)  ; LAB_0059fcba
    MOV EAX,[0x007bc038]                ; 0059fc92 | DAT_007bc038
    CMP EAX,0x1                         ; 0059fc97
    JNC 0x0059ffb4                      ; 0059fc9a
        ;   XREF to: 0059ffb4 (CONDITIONAL_JUMP)  ; LAB_0059ffb4
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fca0
        ;   Label: LAB_0059fca0
    PUSH 0x5efa3e                       ; 0059fca7 | = "AlertDistance"
    ADD EAX,0x11370                     ; 0059fcac
    PUSH EAX                            ; 0059fcb1
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fcb2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fcb7
    CMP dword ptr [0x0061ead0],0x3      ; 0059fcba | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fcba
    JL 0x0059fcf7                       ; 0059fcc1
        ;   XREF to: 0059fcf7 (CONDITIONAL_JUMP)  ; LAB_0059fcf7
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fcc3
    PUSH 0x5efa4c                       ; 0059fcca | = "GiveupDistance"
    ADD EAX,0x11374                     ; 0059fccf
    PUSH EAX                            ; 0059fcd4
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fcd5
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fcda
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fcdd
    PUSH 0x5efa5b                       ; 0059fce4 | = "MadTimer"
    ADD EAX,0x11378                     ; 0059fce9
    PUSH EAX                            ; 0059fcee
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fcef
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fcf4
    CMP dword ptr [0x0061ead0],0x4      ; 0059fcf7 | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fcf7
    JL 0x0059fd4e                       ; 0059fcfe
        ;   XREF to: 0059fd4e (CONDITIONAL_JUMP)  ; LAB_0059fd4e
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fd00
    PUSH 0x5efa64                       ; 0059fd07 | = "PatrolGoal"
    ADD EAX,0x113a4                     ; 0059fd0c
    PUSH EAX                            ; 0059fd11
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0059fd12
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0059fd17
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fd1a
    PUSH 0x5efa6f                       ; 0059fd21 | = "PatrolNext"
    ADD EAX,0x113a8                     ; 0059fd26
    PUSH EAX                            ; 0059fd2b
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0059fd2c
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0059fd31
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fd34
    PUSH 0x5efa7a                       ; 0059fd3b | = "PatrolDirection"
    ADD EAX,0x113ac                     ; 0059fd40
    PUSH EAX                            ; 0059fd45
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0059fd46
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059fd4b
    CMP dword ptr [0x0061ead0],0x5      ; 0059fd4e | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fd4e
    JL 0x0059fd71                       ; 0059fd55
        ;   XREF to: 0059fd71 (CONDITIONAL_JUMP)  ; LAB_0059fd71
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fd57
    PUSH 0x5efa8a                       ; 0059fd5e | = "AnimationState"
    ADD EAX,0x11390                     ; 0059fd63
    PUSH EAX                            ; 0059fd68
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0059fd69
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059fd6e
    CMP dword ptr [0x0061ead0],0x6      ; 0059fd71 | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fd71
    JL 0x0059fd88                       ; 0059fd78
        ;   XREF to: 0059fd88 (CONDITIONAL_JUMP)  ; LAB_0059fd88
    MOV EAX,[0x007bc038]                ; 0059fd7a | DAT_007bc038
    CMP EAX,0x1                         ; 0059fd7f
    JNC 0x005a002e                      ; 0059fd82
        ;   XREF to: 005a002e (CONDITIONAL_JUMP)  ; LAB_005a002e
    CMP dword ptr [0x0061ead0],0x7      ; 0059fd88 | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fd88
    JL 0x0059fd9f                       ; 0059fd8f
        ;   XREF to: 0059fd9f (CONDITIONAL_JUMP)  ; LAB_0059fd9f
    MOV EAX,[0x007bc038]                ; 0059fd91 | DAT_007bc038
    CMP EAX,0x1                         ; 0059fd96
    JNC 0x005a0094                      ; 0059fd99
        ;   XREF to: 005a0094 (CONDITIONAL_JUMP)  ; LAB_005a0094
    CMP dword ptr [0x0061ead0],0x8      ; 0059fd9f | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fd9f
    JL 0x0059fe62                       ; 0059fda6
        ;   XREF to: 0059fe62 (CONDITIONAL_JUMP)  ; LAB_0059fe62
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fdac
    PUSH 0x5efac2                       ; 0059fdb3 | = "FadeDirection"
    ADD EAX,0x113b4                     ; 0059fdb8
    PUSH EAX                            ; 0059fdbd
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0059fdbe
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059fdc3
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fdc6
    PUSH 0x5efad0                       ; 0059fdcd | = "FadeState"
    ADD EAX,0x113b8                     ; 0059fdd2
    PUSH EAX                            ; 0059fdd7
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0059fdd8
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059fddd
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fde0
    PUSH 0x5efada                       ; 0059fde7 | = "FadeStart"
    ADD EAX,0x113bc                     ; 0059fdec
    PUSH EAX                            ; 0059fdf1
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fdf2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fdf7
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fdfa
    PUSH 0x5efae4                       ; 0059fe01 | = "FadeEnd"
    ADD EAX,0x113c0                     ; 0059fe06
    PUSH EAX                            ; 0059fe0b
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fe0c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fe11
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fe14
    PUSH 0x5efaec                       ; 0059fe1b | = "FadeVal"
    ADD EAX,0x113c4                     ; 0059fe20
    PUSH EAX                            ; 0059fe25
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fe26
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fe2b
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fe2e
    PUSH 0x5efaf4                       ; 0059fe35 | = "FadeTime"
    ADD EAX,0x113c8                     ; 0059fe3a
    PUSH EAX                            ; 0059fe3f
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fe40
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fe45
    MOV EAX,dword ptr [ESP + 0x318]     ; 0059fe48
    PUSH 0x5efafd                       ; 0059fe4f | = "FadeTimer"
    ADD EAX,0x113cc                     ; 0059fe54
    PUSH EAX                            ; 0059fe59
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059fe5a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0059fe5f
    CMP dword ptr [0x0061ead0],0x9      ; 0059fe62 | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fe62
    JL 0x0059fec4                       ; 0059fe69
        ;   XREF to: 0059fec4 (CONDITIONAL_JUMP)  ; LAB_0059fec4
    MOV EBP,dword ptr [ESP + 0x318]     ; 0059fe6b
    ADD EBP,0x10af8                     ; 0059fe72
    PUSH EBP                            ; 0059fe78
    CALL unkaddr_0059d350.cpp_FUN_0059dc70 ; 0059fe79
        ;   XREF to: 0059dc70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc70()
    ADD ESP,0x4                         ; 0059fe7e
    PUSH 0x5efb07                       ; 0059fe81 | = "RefStateCount"
    MOV dword ptr [ESP + 0x304],EAX     ; 0059fe86
    LEA EAX,[ESP + 0x304]               ; 0059fe8d
    PUSH EAX                            ; 0059fe94
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0059fe95
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0059fe9a
    MOV ESI,dword ptr [ESP + 0x300]     ; 0059fe9d
    XOR EBX,EBX                         ; 0059fea4
    TEST ESI,ESI                        ; 0059fea6
    JLE 0x0059fec4                      ; 0059fea8
        ;   XREF to: 0059fec4 (CONDITIONAL_JUMP)  ; LAB_0059fec4
    MOV EAX,[0x007bc038]                ; 0059feaa | DAT_007bc038
        ;   Label: LAB_0059feaa
    CMP EAX,0x1                         ; 0059feaf
    JNC 0x005a0161                      ; 0059feb2
        ;   XREF to: 005a0161 (CONDITIONAL_JUMP)  ; LAB_005a0161
    MOV EDI,dword ptr [ESP + 0x300]     ; 0059feb8
        ;   Label: LAB_0059feb8
    INC EBX                             ; 0059febf
    CMP EBX,EDI                         ; 0059fec0
    JL 0x0059feaa                       ; 0059fec2
        ;   XREF to: 0059feaa (CONDITIONAL_JUMP)  ; LAB_0059feaa
    CMP dword ptr [0x0061ead0],0xa      ; 0059fec4 | g_CBasicEnemyClassVersion
        ;   Label: LAB_0059fec4
    JGE 0x005a0171                      ; 0059fecb
        ;   XREF to: 005a0171 (CONDITIONAL_JUMP)  ; LAB_005a0171
    ADD ESP,0x304                       ; 0059fed1
    POP EBP                             ; 0059fed7
    POP EDI                             ; 0059fed8
    POP ESI                             ; 0059fed9
    POP EBX                             ; 0059feda
    RET                                 ; 0059fedb
    PUSH EBX                            ; 0059fedc
        ;   Label: LAB_0059fedc
    CALL unkaddr_0059d350.cpp_FUN_0059db70 ; 0059fedd
        ;   XREF to: 0059db70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059db70()
    ADD ESP,0x4                         ; 0059fee2
    LEA EDI,[ESP + 0x100]               ; 0059fee5
    MOV ESI,EAX                         ; 0059feec
    PUSH EDI                            ; 0059feee
    MOV AL,byte ptr [ESI]               ; 0059feef
        ;   Label: LAB_0059feef
    MOV byte ptr [EDI],AL               ; 0059fef1
    CMP AL,0x0                          ; 0059fef3
    JZ 0x0059ff07                       ; 0059fef5
        ;   XREF to: 0059ff07 (CONDITIONAL_JUMP)  ; LAB_0059ff07
    MOV AL,byte ptr [ESI + 0x1]         ; 0059fef7
    ADD ESI,0x2                         ; 0059fefa
    MOV byte ptr [EDI + 0x1],AL         ; 0059fefd
    ADD EDI,0x2                         ; 0059ff00
    CMP AL,0x0                          ; 0059ff03
    JNZ 0x0059feef                      ; 0059ff05
        ;   XREF to: 0059feef (CONDITIONAL_JUMP)  ; LAB_0059feef
    POP EDI                             ; 0059ff07
        ;   Label: LAB_0059ff07
    PUSH 0x5efa10                       ; 0059ff08 | = "AIState"
    LEA EAX,[ESP + 0x104]               ; 0059ff0d
    PUSH EAX                            ; 0059ff14
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0059ff15
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059ff1a
    PUSH EBX                            ; 0059ff1d
    CALL unkaddr_0059d350.cpp_FUN_0059db90 ; 0059ff1e
        ;   XREF to: 0059db90 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059db90()
    ADD ESP,0x4                         ; 0059ff23
    LEA EDI,[ESP + 0x100]               ; 0059ff26
    MOV ESI,EAX                         ; 0059ff2d
    PUSH EDI                            ; 0059ff2f
    MOV AL,byte ptr [ESI]               ; 0059ff30
        ;   Label: LAB_0059ff30
    MOV byte ptr [EDI],AL               ; 0059ff32
    CMP AL,0x0                          ; 0059ff34
    JZ 0x0059ff48                       ; 0059ff36
        ;   XREF to: 0059ff48 (CONDITIONAL_JUMP)  ; LAB_0059ff48
    MOV AL,byte ptr [ESI + 0x1]         ; 0059ff38
    ADD ESI,0x2                         ; 0059ff3b
    MOV byte ptr [EDI + 0x1],AL         ; 0059ff3e
    ADD EDI,0x2                         ; 0059ff41
    CMP AL,0x0                          ; 0059ff44
    JNZ 0x0059ff30                      ; 0059ff46
        ;   XREF to: 0059ff30 (CONDITIONAL_JUMP)  ; LAB_0059ff30
    POP EDI                             ; 0059ff48
        ;   Label: LAB_0059ff48
    PUSH 0x5efa18                       ; 0059ff49 | = "InitialAIState"
    LEA EAX,[ESP + 0x104]               ; 0059ff4e
    PUSH EAX                            ; 0059ff55
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0059ff56
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059ff5b
    JMP 0x0059fca0                      ; 0059ff5e
        ;   XREF to: 0059fca0 (UNCONDITIONAL_JUMP)  ; LAB_0059fca0
    PUSH 0x5efa27                       ; 0059ff63 | = "AIState"
        ;   Label: LAB_0059ff63
    LEA EAX,[ESP + 0x104]               ; 0059ff68
    PUSH EAX                            ; 0059ff6f
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0059ff70
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059ff75
    LEA EAX,[ESP + 0x100]               ; 0059ff78
    PUSH EAX                            ; 0059ff7f
    PUSH EBX                            ; 0059ff80
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 0059ff81
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059ff86
    PUSH 0x5efa2f                       ; 0059ff89 | = "InitialAIState"
    LEA EAX,[ESP + 0x104]               ; 0059ff8e
    PUSH EAX                            ; 0059ff95
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0059ff96
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0059ff9b
    LEA EAX,[ESP + 0x100]               ; 0059ff9e
    PUSH EAX                            ; 0059ffa5
    PUSH EBX                            ; 0059ffa6
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 0059ffa7
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 0059ffac
    JMP 0x0059fca0                      ; 0059ffaf
        ;   XREF to: 0059fca0 (UNCONDITIONAL_JUMP)  ; LAB_0059fca0
    MOV EBX,dword ptr [ESP + 0x318]     ; 0059ffb4
        ;   Label: LAB_0059ffb4
    ADD EBX,0x10af8                     ; 0059ffbb
    CMP EAX,0x1                         ; 0059ffc1
    JBE 0x0059ff63                      ; 0059ffc4
        ;   XREF to: 0059ff63 (CONDITIONAL_JUMP)  ; LAB_0059ff63
    CMP EAX,0x2                         ; 0059ffc6
    JZ 0x0059fedc                       ; 0059ffc9
        ;   XREF to: 0059fedc (CONDITIONAL_JUMP)  ; LAB_0059fedc
    JMP 0x0059fca0                      ; 0059ffcf
        ;   XREF to: 0059fca0 (UNCONDITIONAL_JUMP)  ; LAB_0059fca0
    MOV ESI,0x5efa99                    ; 0059ffd4 | DAT_005efa99
        ;   Label: LAB_0059ffd4
    LEA EDI,[ESP + 0x100]               ; 0059ffd9
    PUSH EDI                            ; 0059ffe0
    MOV AL,byte ptr [ESI]               ; 0059ffe1 | DAT_005efa99 | DAT_005efa9b
        ;   Label: LAB_0059ffe1
    MOV byte ptr [EDI],AL               ; 0059ffe3
    CMP AL,0x0                          ; 0059ffe5
    JZ 0x0059fff9                       ; 0059ffe7
        ;   XREF to: 0059fff9 (CONDITIONAL_JUMP)  ; LAB_0059fff9
    MOV AL,byte ptr [ESI + 0x1]         ; 0059ffe9 | DAT_005efa9a | DAT_005efa9c
    ADD ESI,0x2                         ; 0059ffec
    MOV byte ptr [EDI + 0x1],AL         ; 0059ffef
    ADD EDI,0x2                         ; 0059fff2
    CMP AL,0x0                          ; 0059fff5
    JNZ 0x0059ffe1                      ; 0059fff7
        ;   XREF to: 0059ffe1 (CONDITIONAL_JUMP)  ; LAB_0059ffe1
    POP EDI                             ; 0059fff9
        ;   Label: LAB_0059fff9
    PUSH 0x5efa9f                       ; 0059fffa | = "Dummy"
    LEA EAX,[ESP + 0x104]               ; 0059ffff
    PUSH EAX                            ; 005a0006
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a0007
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a000c
    JMP 0x0059fd88                      ; 005a000f
        ;   XREF to: 0059fd88 (UNCONDITIONAL_JUMP)  ; LAB_0059fd88
    PUSH 0x5efaa5                       ; 005a0014 | = "Dummy"
        ;   Label: LAB_005a0014
    LEA EAX,[ESP + 0x104]               ; 005a0019
    PUSH EAX                            ; 005a0020
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a0021
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a0026
    JMP 0x0059fd88                      ; 005a0029
        ;   XREF to: 0059fd88 (UNCONDITIONAL_JUMP)  ; LAB_0059fd88
    JBE 0x005a0014                      ; 005a002e
        ;   XREF to: 005a0014 (CONDITIONAL_JUMP)  ; LAB_005a0014
        ;   Label: LAB_005a002e
    CMP EAX,0x2                         ; 005a0030
    JZ 0x0059ffd4                       ; 005a0033
        ;   XREF to: 0059ffd4 (CONDITIONAL_JUMP)  ; LAB_0059ffd4
    JMP 0x0059fd88                      ; 005a0035
        ;   XREF to: 0059fd88 (UNCONDITIONAL_JUMP)  ; LAB_0059fd88
    MOV ESI,0x5efaab                    ; 005a003a | = "DummyVal"
        ;   Label: LAB_005a003a
    LEA EDI,[ESP + 0x100]               ; 005a003f
    PUSH EDI                            ; 005a0046
    MOV AL,byte ptr [ESI]               ; 005a0047 | = "DummyVal" | s_mmyVal_005efaab+2
        ;   Label: LAB_005a0047
    MOV byte ptr [EDI],AL               ; 005a0049
    CMP AL,0x0                          ; 005a004b
    JZ 0x005a005f                       ; 005a004d
        ;   XREF to: 005a005f (CONDITIONAL_JUMP)  ; LAB_005a005f
    MOV AL,byte ptr [ESI + 0x1]         ; 005a004f | s_ummyVal_005efaab+1 | s_myVal_005efaab+3
    ADD ESI,0x2                         ; 005a0052
    MOV byte ptr [EDI + 0x1],AL         ; 005a0055
    ADD EDI,0x2                         ; 005a0058
    CMP AL,0x0                          ; 005a005b
    JNZ 0x005a0047                      ; 005a005d
        ;   XREF to: 005a0047 (CONDITIONAL_JUMP)  ; LAB_005a0047
    POP EDI                             ; 005a005f
        ;   Label: LAB_005a005f
    PUSH 0x5efab4                       ; 005a0060 | = "Dummy1"
    LEA EAX,[ESP + 0x104]               ; 005a0065
    PUSH EAX                            ; 005a006c
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a006d
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a0072
    JMP 0x0059fd9f                      ; 005a0075
        ;   XREF to: 0059fd9f (UNCONDITIONAL_JUMP)  ; LAB_0059fd9f
    PUSH 0x5efabb                       ; 005a007a | = "Dummy1"
        ;   Label: LAB_005a007a
    LEA EAX,[ESP + 0x104]               ; 005a007f
    PUSH EAX                            ; 005a0086
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a0087
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a008c
    JMP 0x0059fd9f                      ; 005a008f
        ;   XREF to: 0059fd9f (UNCONDITIONAL_JUMP)  ; LAB_0059fd9f
    JBE 0x005a007a                      ; 005a0094
        ;   XREF to: 005a007a (CONDITIONAL_JUMP)  ; LAB_005a007a
        ;   Label: LAB_005a0094
    CMP EAX,0x2                         ; 005a0096
    JZ 0x005a003a                       ; 005a0099
        ;   XREF to: 005a003a (CONDITIONAL_JUMP)  ; LAB_005a003a
    JMP 0x0059fd9f                      ; 005a009b
        ;   XREF to: 0059fd9f (UNCONDITIONAL_JUMP)  ; LAB_0059fd9f
    PUSH EBX                            ; 005a00a0
        ;   Label: LAB_005a00a0
    PUSH EBP                            ; 005a00a1
    CALL unkaddr_0059d350.cpp_FUN_0059dc00 ; 005a00a2
        ;   XREF to: 0059dc00 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc00()
    ADD ESP,0x8                         ; 005a00a7
    LEA EDI,[ESP + 0x200]               ; 005a00aa
    MOV ESI,EAX                         ; 005a00b1
    PUSH EDI                            ; 005a00b3
    MOV AL,byte ptr [ESI]               ; 005a00b4
        ;   Label: LAB_005a00b4
    MOV byte ptr [EDI],AL               ; 005a00b6
    CMP AL,0x0                          ; 005a00b8
    JZ 0x005a00cc                       ; 005a00ba
        ;   XREF to: 005a00cc (CONDITIONAL_JUMP)  ; LAB_005a00cc
    MOV AL,byte ptr [ESI + 0x1]         ; 005a00bc
    ADD ESI,0x2                         ; 005a00bf
    MOV byte ptr [EDI + 0x1],AL         ; 005a00c2
    ADD EDI,0x2                         ; 005a00c5
    CMP AL,0x0                          ; 005a00c8
    JNZ 0x005a00b4                      ; 005a00ca
        ;   XREF to: 005a00b4 (CONDITIONAL_JUMP)  ; LAB_005a00b4
    POP EDI                             ; 005a00cc
        ;   Label: LAB_005a00cc
    PUSH EBX                            ; 005a00cd
    PUSH EBP                            ; 005a00ce
    CALL unkaddr_0059d350.cpp_FUN_0059dbe0 ; 005a00cf
        ;   XREF to: 0059dbe0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dbe0()
    ADD ESP,0x8                         ; 005a00d4
    MOV EDI,ESP                         ; 005a00d7
    MOV ESI,EAX                         ; 005a00d9
    PUSH EDI                            ; 005a00db
    MOV AL,byte ptr [ESI]               ; 005a00dc
        ;   Label: LAB_005a00dc
    MOV byte ptr [EDI],AL               ; 005a00de
    CMP AL,0x0                          ; 005a00e0
    JZ 0x005a00f4                       ; 005a00e2
        ;   XREF to: 005a00f4 (CONDITIONAL_JUMP)  ; LAB_005a00f4
    MOV AL,byte ptr [ESI + 0x1]         ; 005a00e4
    ADD ESI,0x2                         ; 005a00e7
    MOV byte ptr [EDI + 0x1],AL         ; 005a00ea
    ADD EDI,0x2                         ; 005a00ed
    CMP AL,0x0                          ; 005a00f0
    JNZ 0x005a00dc                      ; 005a00f2
        ;   XREF to: 005a00dc (CONDITIONAL_JUMP)  ; LAB_005a00dc
    POP EDI                             ; 005a00f4
        ;   Label: LAB_005a00f4
    PUSH 0x5efb15                       ; 005a00f5 | = "RefStateIdentifier"
    LEA EAX,[ESP + 0x204]               ; 005a00fa
    PUSH EAX                            ; 005a0101
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a0102
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a0107
    PUSH 0x5efb28                       ; 005a010a | = "RefState"
    LEA EAX,[ESP + 0x4]                 ; 005a010f
    PUSH EAX                            ; 005a0113
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a0114
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a0119
    JMP 0x0059feb8                      ; 005a011c
        ;   XREF to: 0059feb8 (UNCONDITIONAL_JUMP)  ; LAB_0059feb8
    PUSH 0x5efb31                       ; 005a0121 | = "RefStateIdentifier"
        ;   Label: LAB_005a0121
    LEA EAX,[ESP + 0x204]               ; 005a0126
    PUSH EAX                            ; 005a012d
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a012e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a0133
    PUSH 0x5efb44                       ; 005a0136 | = "RefState"
    LEA EAX,[ESP + 0x4]                 ; 005a013b
    PUSH EAX                            ; 005a013f
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005a0140
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a0145
    MOV EAX,ESP                         ; 005a0148
    PUSH EAX                            ; 005a014a
    LEA EAX,[ESP + 0x204]               ; 005a014b
    PUSH EAX                            ; 005a0152
    PUSH EBP                            ; 005a0153
    CALL unkaddr_0059d350.cpp_FUN_0059d6f0 ; 005a0154
        ;   XREF to: 0059d6f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d6f0()
    ADD ESP,0xc                         ; 005a0159
    JMP 0x0059feb8                      ; 005a015c
        ;   XREF to: 0059feb8 (UNCONDITIONAL_JUMP)  ; LAB_0059feb8
    JBE 0x005a0121                      ; 005a0161
        ;   XREF to: 005a0121 (CONDITIONAL_JUMP)  ; LAB_005a0121
        ;   Label: LAB_005a0161
    CMP EAX,0x2                         ; 005a0163
    JZ 0x005a00a0                       ; 005a0166
        ;   XREF to: 005a00a0 (CONDITIONAL_JUMP)  ; LAB_005a00a0
    JMP 0x0059feb8                      ; 005a016c
        ;   XREF to: 0059feb8 (UNCONDITIONAL_JUMP)  ; LAB_0059feb8
    MOV EAX,dword ptr [ESP + 0x318]     ; 005a0171
        ;   Label: LAB_005a0171
    PUSH 0x5efb4d                       ; 005a0178 | = "CanBurn"
    ADD EAX,0x11348                     ; 005a017d
    PUSH EAX                            ; 005a0182
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 005a0183
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a0188
    ADD ESP,0x304                       ; 005a018b
    POP EBP                             ; 005a0191
    POP EDI                             ; 005a0192
    POP ESI                             ; 005a0193
    POP EBX                             ; 005a0194
    RET                                 ; 005a0195

