; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spawner_cpp_FUN_00563970(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d54b7
;   undefined4 DAT_005d54bb
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00600530
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CZombieClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_box.cpp_FUN_0041daf0
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_FUN_0053de10
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563970
        ;   Label: core_spawner.cpp_FUN_00563970
    PUSH ESI                            ; 00563971
    PUSH EDI                            ; 00563972
    PUSH EBP                            ; 00563973
    SUB ESP,0xa0                        ; 00563974
    MOV EBP,dword ptr [ESP + 0xb4]      ; 0056397a
    TEST dword ptr [EBP + 0x1b4],0x7fffffff ; 00563981
    JZ 0x005639be                       ; 0056398b
        ;   XREF to: 005639be (CONDITIONAL_JUMP)  ; LAB_005639be
    FLD float ptr [EBP + 0x1b4]         ; 0056398d
        ;   Label: LAB_0056398d
    FSUB float ptr [ESP + 0xb8]         ; 00563993
    FLDZ                                ; 0056399a
    FXCH                                ; 0056399c
    FSTP float ptr [EBP + 0x1b4]        ; 0056399e
    FCOMP float ptr [EBP + 0x1b4]       ; 005639a4
    FNSTSW AX                           ; 005639aa
    SAHF                                ; 005639ac
    JNC 0x00563a8f                      ; 005639ad
        ;   XREF to: 00563a8f (CONDITIONAL_JUMP)  ; LAB_00563a8f
    ADD ESP,0xa0                        ; 005639b3
        ;   Label: LAB_005639b3
    POP EBP                             ; 005639b9
    POP EDI                             ; 005639ba
    POP ESI                             ; 005639bb
    POP EBX                             ; 005639bc
    RET                                 ; 005639bd
    FLD float ptr [EBP + 0x1b8]         ; 005639be
        ;   Label: LAB_005639be
    FSUB float ptr [ESP + 0xb8]         ; 005639c4
    FLDZ                                ; 005639cb
    FXCH                                ; 005639cd
    FSTP float ptr [EBP + 0x1b8]        ; 005639cf
    FCOMP float ptr [EBP + 0x1b8]       ; 005639d5
    FNSTSW AX                           ; 005639db
    SAHF                                ; 005639dd
    JC 0x005639b3                       ; 005639de
        ;   XREF to: 005639b3 (CONDITIONAL_JUMP)  ; LAB_005639b3
    MOV ECX,dword ptr [EBP + 0x1c4]     ; 005639e0
    MOV dword ptr [EBP + 0x1b8],0x3f000000 ; 005639e6
    TEST ECX,ECX                        ; 005639f0
    JLE 0x005639fc                      ; 005639f2
        ;   XREF to: 005639fc (CONDITIONAL_JUMP)  ; LAB_005639fc
    CMP ECX,dword ptr [EBP + 0x1c0]     ; 005639f4
    JLE 0x005639b3                      ; 005639fa
        ;   XREF to: 005639b3 (CONDITIONAL_JUMP)  ; LAB_005639b3
    LEA EAX,[EBP + 0x158]               ; 005639fc
        ;   Label: LAB_005639fc
    PUSH EAX                            ; 00563a02
    MOV ESI,dword ptr [0x00600530]      ; 00563a03 | DAT_00600530
    PUSH ESI                            ; 00563a09
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90 ; 00563a0a
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 00563a0f
    MOV EDI,dword ptr [0x01c5bc48]      ; 00563a12 | g_CEnemyClassInfo.name_hash
    PUSH EDI                            ; 00563a18
    PUSH EAX                            ; 00563a19
    MOV EBX,EAX                         ; 00563a1a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00563a1c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDI,EAX                         ; 00563a21
    ADD ESP,0x8                         ; 00563a23
    TEST EAX,EAX                        ; 00563a26
    JZ 0x00563a76                       ; 00563a28
        ;   XREF to: 00563a76 (CONDITIONAL_JUMP)  ; LAB_00563a76
    PUSH EDI                            ; 00563a2a
    MOV EAX,dword ptr [EAX + 0x154]     ; 00563a2b
    CALL dword ptr [EAX + 0x10c]        ; 00563a31
    ADD ESP,0x4                         ; 00563a37
    TEST EAX,EAX                        ; 00563a3a
    JZ 0x00563a76                       ; 00563a3c
        ;   XREF to: 00563a76 (CONDITIONAL_JUMP)  ; LAB_00563a76
    MOV ESI,0x5d54af                    ; 00563a3e
    PUSH EDI                            ; 00563a43
    SUB ECX,ECX                         ; 00563a44
    DEC ECX                             ; 00563a46
    MOV AL,0x0                          ; 00563a47
    SCASB.REPNE ES:EDI                  ; 00563a49
    DEC EDI                             ; 00563a4b
    MOV AL,byte ptr [ESI]               ; 00563a4c
        ;   Label: LAB_00563a4c
    MOV byte ptr [EDI],AL               ; 00563a4e
    CMP AL,0x0                          ; 00563a50
    JZ 0x00563a64                       ; 00563a52
        ;   XREF to: 00563a64 (CONDITIONAL_JUMP)  ; LAB_00563a64
    MOV AL,byte ptr [ESI + 0x1]         ; 00563a54
    ADD ESI,0x2                         ; 00563a57
    MOV byte ptr [EDI + 0x1],AL         ; 00563a5a
    ADD EDI,0x2                         ; 00563a5d
    CMP AL,0x0                          ; 00563a60
    JNZ 0x00563a4c                      ; 00563a62
        ;   XREF to: 00563a4c (CONDITIONAL_JUMP)  ; LAB_00563a4c
    POP EDI                             ; 00563a64
        ;   Label: LAB_00563a64
    MOV EAX,dword ptr [EBP + 0x1bc]     ; 00563a65
    MOV dword ptr [EBP + 0x1b4],EAX     ; 00563a6b
    JMP 0x0056398d                      ; 00563a71
        ;   XREF to: 0056398d (UNCONDITIONAL_JUMP)  ; LAB_0056398d
    TEST EBX,EBX                        ; 00563a76
        ;   Label: LAB_00563a76
    JNZ 0x005639b3                      ; 00563a78
        ;   XREF to: 005639b3 (CONDITIONAL_JUMP)  ; LAB_005639b3
    MOV EAX,dword ptr [EBP + 0x1bc]     ; 00563a7e
    MOV dword ptr [EBP + 0x1b4],EAX     ; 00563a84
    JMP 0x0056398d                      ; 00563a8a
        ;   XREF to: 0056398d (UNCONDITIONAL_JUMP)  ; LAB_0056398d
    MOV dword ptr [EBP + 0x1b8],0x3f000000 ; 00563a8f
        ;   Label: LAB_00563a8f
    MOV dword ptr [EBP + 0x1b4],0x0     ; 00563a99
    XOR EAX,EAX                         ; 00563aa3
    MOV dword ptr [ESP + 0x30],EAX      ; 00563aa5
    MOV dword ptr [ESP + 0x34],EAX      ; 00563aa9
    LEA EAX,[ESP + 0x30]                ; 00563aad
    PUSH EAX                            ; 00563ab1
    MOV ECX,0x3f800000                  ; 00563ab2
    LEA ESI,[ESP + 0x40]                ; 00563ab7
    PUSH EBP                            ; 00563abb
    MOV EDI,0x3fc00000                  ; 00563abc
    MOV dword ptr [ESP + 0x40],ECX      ; 00563ac1
    CALL core_actor.cpp_FUN_00408b00    ; 00563ac5
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 00563aca
    LEA EAX,[ESP + 0x60]                ; 00563acd
    XOR EBX,EBX                         ; 00563ad1
    PUSH EAX                            ; 00563ad3
    LEA ESI,[ESP + 0x4c]                ; 00563ad4
    MOV dword ptr [ESP + 0x64],EBX      ; 00563ad8
    PUSH EBP                            ; 00563adc
    MOV dword ptr [ESP + 0x6c],EBX      ; 00563add
    MOV dword ptr [ESP + 0x70],EDI      ; 00563ae1
    CALL core_actor.cpp_FUN_00408b00    ; 00563ae5
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    FLD float ptr [EBP + 0x24]          ; 00563aea
    ADD ESP,0x8                         ; 00563aed
    FADD float ptr [0x005d54b7]         ; 00563af0 | DAT_005d54b7
    SUB ESP,0x4                         ; 00563af6
    FSTP float ptr [ESP]                ; 00563af9
    PUSH dword ptr [EBP + 0x24]         ; 00563afc
    PUSH 0x3f800000                     ; 00563aff
    PUSH 0x0                            ; 00563b04
    PUSH 0x0                            ; 00563b06
    PUSH dword ptr [EBP + 0x28]         ; 00563b08
    MOV EAX,[0x00603b28]                ; 00563b0b | g_CDemonSetPtr
    PUSH dword ptr [EBP + 0x20]         ; 00563b10
    PUSH EAX                            ; 00563b13
    CALL core_setcolid.cpp_FUN_0053de10 ; 00563b14
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV dword ptr [ESP + 0xbc],EAX      ; 00563b19
    FLD float ptr [ESP + 0xbc]          ; 00563b20
    ADD ESP,0x20                        ; 00563b27
    MOV EDX,dword ptr [0x00603b28]      ; 00563b2a | g_CDemonSetPtr
    PUSH EDX                            ; 00563b30
    FSTP float ptr [ESP + 0x88]         ; 00563b31
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00563b38
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00563b3d
    FLD float ptr [ESP + 0x84]          ; 00563b40
    FLD1                                ; 00563b47
    FCOMPP                              ; 00563b49
    FNSTSW AX                           ; 00563b4b
    SAHF                                ; 00563b4d
    JA 0x005639b3                       ; 00563b4e
        ;   XREF to: 005639b3 (CONDITIONAL_JUMP)  ; LAB_005639b3
    CMP dword ptr [EBP + 0x1c8],0x0     ; 00563b54
    JZ 0x00563b93                       ; 00563b5b
        ;   XREF to: 00563b93 (CONDITIONAL_JUMP)  ; LAB_00563b93
    PUSH EBX                            ; 00563b5d
    MOV EAX,dword ptr [EBP + 0x154]     ; 00563b5e
    PUSH EBP                            ; 00563b64
    LEA ESI,[ESP + 0x20]                ; 00563b65
    LEA EDI,[ESP + 0x8]                 ; 00563b69
    CALL dword ptr [EAX + 0x1c]         ; 00563b6d
    MOV ECX,0x6                         ; 00563b70
    ADD ESP,0x4                         ; 00563b75
    LEA EAX,[ESP + 0x4]                 ; 00563b78
    LEA ESI,[ESP + 0x1c]                ; 00563b7c
    PUSH EAX                            ; 00563b80
    MOVSD.REP ES:EDI,ESI                ; 00563b81
    CALL core_box.cpp_FUN_0041daf0      ; 00563b83
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00563b88
    TEST EAX,EAX                        ; 00563b8b
    JNZ 0x005639b3                      ; 00563b8d
        ;   XREF to: 005639b3 (CONDITIONAL_JUMP)  ; LAB_005639b3
    LEA EAX,[EBP + 0x176]               ; 00563b93
        ;   Label: LAB_00563b93
    PUSH EAX                            ; 00563b99
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 00563b9a
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    MOV EDI,EAX                         ; 00563b9f
    ADD ESP,0x4                         ; 00563ba1
    MOV EBX,EAX                         ; 00563ba4
    TEST EAX,EAX                        ; 00563ba6
    JZ 0x005639b3                       ; 00563ba8
        ;   XREF to: 005639b3 (CONDITIONAL_JUMP)  ; LAB_005639b3
    MOV ESI,dword ptr [0x007e2cec]      ; 00563bae | g_CCharacterClassInfo.name_hash
    PUSH ESI                            ; 00563bb4
    PUSH EAX                            ; 00563bb5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00563bb6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00563bbb
    MOV ESI,EAX                         ; 00563bbe
    MOV EAX,[0x007e17b4]                ; 00563bc0 | g_CBoxActorClassInfo.name_hash
    PUSH EAX                            ; 00563bc5
    PUSH EDI                            ; 00563bc6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00563bc7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00563bcc
    TEST ESI,ESI                        ; 00563bcf
    JNZ 0x00563df0                      ; 00563bd1
        ;   XREF to: 00563df0 (CONDITIONAL_JUMP)  ; LAB_00563df0
    LEA ESI,[EBP + 0x158]               ; 00563bd7
        ;   Label: LAB_00563bd7
    MOV EDI,EBX                         ; 00563bdd
    LEA EDX,[EBP + 0x20]                ; 00563bdf
    PUSH EDI                            ; 00563be2
    MOV AL,byte ptr [ESI]               ; 00563be3
        ;   Label: LAB_00563be3
    MOV byte ptr [EDI],AL               ; 00563be5
    CMP AL,0x0                          ; 00563be7
    JZ 0x00563bfb                       ; 00563be9
        ;   XREF to: 00563bfb (CONDITIONAL_JUMP)  ; LAB_00563bfb
    MOV AL,byte ptr [ESI + 0x1]         ; 00563beb
    ADD ESI,0x2                         ; 00563bee
    MOV byte ptr [EDI + 0x1],AL         ; 00563bf1
    ADD EDI,0x2                         ; 00563bf4
    CMP AL,0x0                          ; 00563bf7
    JNZ 0x00563be3                      ; 00563bf9
        ;   XREF to: 00563be3 (CONDITIONAL_JUMP)  ; LAB_00563be3
    POP EDI                             ; 00563bfb
        ;   Label: LAB_00563bfb
    LEA EAX,[EBX + 0x20]                ; 00563bfc
    MOV ECX,dword ptr [EDX]             ; 00563bff
    MOV dword ptr [EAX],ECX             ; 00563c01
    MOV ECX,dword ptr [EDX + 0x4]       ; 00563c03
    MOV dword ptr [EAX + 0x4],ECX       ; 00563c06
    MOV ECX,dword ptr [EDX + 0x8]       ; 00563c09
    MOV dword ptr [EAX + 0x8],ECX       ; 00563c0c
    MOV EDX,dword ptr [EDX + 0xc]       ; 00563c0f
    MOV dword ptr [EAX + 0xc],EDX       ; 00563c12
    LEA EAX,[EBX + 0x30]                ; 00563c15
    LEA EDX,[EBP + 0x30]                ; 00563c18
    CMP EAX,EDX                         ; 00563c1b
    JZ 0x00563c2f                       ; 00563c1d
        ;   XREF to: 00563c2f (CONDITIONAL_JUMP)  ; LAB_00563c2f
    MOV ECX,dword ptr [EDX]             ; 00563c1f
    MOV dword ptr [EAX],ECX             ; 00563c21
    MOV ECX,dword ptr [EDX + 0x4]       ; 00563c23
    MOV dword ptr [EAX + 0x4],ECX       ; 00563c26
    MOV ECX,dword ptr [EDX + 0x8]       ; 00563c29
    MOV dword ptr [EAX + 0x8],ECX       ; 00563c2c
    PUSH EBX                            ; 00563c2f
        ;   Label: LAB_00563c2f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00563c30
    CALL dword ptr [EAX]                ; 00563c36
    ADD ESP,0x4                         ; 00563c38
    MOV EDX,dword ptr [0x007e2cec]      ; 00563c3b | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 00563c41
    PUSH EBX                            ; 00563c42
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00563c43
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDI,EAX                         ; 00563c48
    ADD ESP,0x8                         ; 00563c4a
    TEST EAX,EAX                        ; 00563c4d
    JZ 0x00563c93                       ; 00563c4f
        ;   XREF to: 00563c93 (CONDITIONAL_JUMP)  ; LAB_00563c93
    CMP byte ptr [EBP + 0x194],0x0      ; 00563c51
    JZ 0x00563c93                       ; 00563c58
        ;   XREF to: 00563c93 (CONDITIONAL_JUMP)  ; LAB_00563c93
    PUSH 0x1                            ; 00563c5a
    LEA EAX,[EBP + 0x194]               ; 00563c5c
    PUSH EAX                            ; 00563c62
    LEA ESI,[EDI + 0x158]               ; 00563c63
    PUSH ESI                            ; 00563c69
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 00563c6a
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00563c6f
    PUSH EAX                            ; 00563c72
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 00563c73
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00563c78
    PUSH 0x0                            ; 00563c7b
    PUSH EAX                            ; 00563c7d
    PUSH ESI                            ; 00563c7e
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 00563c7f
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00563c84
    MOV EAX,dword ptr [EDI + 0x154]     ; 00563c87
    PUSH EDI                            ; 00563c8d
    CALL dword ptr [EAX]                ; 00563c8e
    ADD ESP,0x4                         ; 00563c90
    MOV ECX,dword ptr [0x02d24840]      ; 00563c93 | g_CZombieClassInfo.name_hash
        ;   Label: LAB_00563c93
    PUSH ECX                            ; 00563c99
    PUSH EBX                            ; 00563c9a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00563c9b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00563ca0
    TEST EAX,EAX                        ; 00563ca3
    JZ 0x00563cb3                       ; 00563ca5
        ;   XREF to: 00563cb3 (CONDITIONAL_JUMP)  ; LAB_00563cb3
    MOV EDX,dword ptr [EBP + 0x1cc]     ; 00563ca7
    MOV dword ptr [EAX + 0xd0e4],EDX    ; 00563cad
    PUSH EBX                            ; 00563cb3
        ;   Label: LAB_00563cb3
    MOV ESI,dword ptr [0x00600530]      ; 00563cb4 | DAT_00600530
    PUSH ESI                            ; 00563cba
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 00563cbb
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD EBX,0x20                        ; 00563cc0
    LEA EAX,[ESP + 0x74]                ; 00563cc3
    ADD ESP,0x8                         ; 00563cc7
    CMP EAX,EBX                         ; 00563cca
    JNZ 0x00563e1f                      ; 00563ccc
        ;   XREF to: 00563e1f (CONDITIONAL_JUMP)  ; LAB_00563e1f
    FLD float ptr [ESP + 0x70]          ; 00563cd2
        ;   Label: LAB_00563cd2
    FADD float ptr [0x005d54bb]         ; 00563cd6 | DAT_005d54bb
    XOR EBX,EBX                         ; 00563cdc
    FSTP float ptr [ESP + 0x70]         ; 00563cde
    PUSH 0x41a00000                     ; 00563ce2
        ;   Label: LAB_00563ce2
    PUSH 0xc1a00000                     ; 00563ce7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00563cec
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x90],EAX      ; 00563cf1
    ADD ESP,0x8                         ; 00563cf8
    PUSH 0x41a00000                     ; 00563cfb
    PUSH 0xc1a00000                     ; 00563d00
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00563d05
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x94],EAX      ; 00563d0a
    ADD ESP,0x8                         ; 00563d11
    PUSH 0x41a00000                     ; 00563d14
    PUSH 0xc1a00000                     ; 00563d19
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00563d1e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa4],EAX      ; 00563d23
    FLD float ptr [ESP + 0xa4]          ; 00563d2a
    ADD ESP,0x8                         ; 00563d31
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00563d34
    MOV dword ptr [ESP + 0x90],EAX      ; 00563d3b
    MOV EAX,dword ptr [ESP + 0x88]      ; 00563d42
    FSTP float ptr [ESP + 0x98]         ; 00563d49
    MOV dword ptr [ESP + 0x94],EAX      ; 00563d50
    MOV EAX,dword ptr [ESP + 0x98]      ; 00563d57
    MOV dword ptr [ESP + 0x78],EAX      ; 00563d5e
    MOV EAX,dword ptr [ESP + 0x90]      ; 00563d62
    MOV dword ptr [ESP + 0x7c],EAX      ; 00563d69
    MOV EAX,dword ptr [ESP + 0x94]      ; 00563d6d
    LEA EDX,[ESP + 0x54]                ; 00563d74
    MOV dword ptr [ESP + 0x80],EAX      ; 00563d78
    LEA EAX,[ESP + 0x78]                ; 00563d7f
    CMP EDX,EAX                         ; 00563d83
    JZ 0x00563da8                       ; 00563d85
        ;   XREF to: 00563da8 (CONDITIONAL_JUMP)  ; LAB_00563da8
    MOV EAX,dword ptr [ESP + 0x98]      ; 00563d87
    MOV dword ptr [ESP + 0x54],EAX      ; 00563d8e
    MOV EAX,dword ptr [ESP + 0x90]      ; 00563d92
    MOV dword ptr [ESP + 0x58],EAX      ; 00563d99
    MOV EAX,dword ptr [ESP + 0x94]      ; 00563d9d
    MOV dword ptr [ESP + 0x5c],EAX      ; 00563da4
    PUSH 0xffff                         ; 00563da8
        ;   Label: LAB_00563da8
    PUSH 0x1                            ; 00563dad
    PUSH 0x10000                        ; 00563daf
    PUSH 0x20000                        ; 00563db4
    LEA EAX,[ESP + 0x64]                ; 00563db9
    PUSH EAX                            ; 00563dbd
    LEA EAX,[ESP + 0x80]                ; 00563dbe
    PUSH EAX                            ; 00563dc5
    MOV EDI,dword ptr [0x005fc5a0]      ; 00563dc6 | DAT_005fc5a0
    PUSH EDI                            ; 00563dcc
    INC EBX                             ; 00563dcd
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 00563dce
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00563dd3
    CMP EBX,0x20                        ; 00563dd6
    JL 0x00563ce2                       ; 00563dd9
        ;   XREF to: 00563ce2 (CONDITIONAL_JUMP)  ; LAB_00563ce2
    INC dword ptr [EBP + 0x1c0]         ; 00563ddf
    ADD ESP,0xa0                        ; 00563de5
    POP EBP                             ; 00563deb
    POP EDI                             ; 00563dec
    POP ESI                             ; 00563ded
    POP EBX                             ; 00563dee
    RET                                 ; 00563def
    LEA EDX,[EBP + 0x2520]              ; 00563df0
        ;   Label: LAB_00563df0
    MOV EDI,EDX                         ; 00563df6
    SUB ECX,ECX                         ; 00563df8
    DEC ECX                             ; 00563dfa
    XOR EAX,EAX                         ; 00563dfb
    SCASB.REPNE ES:EDI                  ; 00563dfd
    NOT ECX                             ; 00563dff
    DEC ECX                             ; 00563e01
    TEST ECX,ECX                        ; 00563e02
    JBE 0x00563bd7                      ; 00563e04
        ;   XREF to: 00563bd7 (CONDITIONAL_JUMP)  ; LAB_00563bd7
    PUSH EDX                            ; 00563e0a
    ADD ESI,0x158                       ; 00563e0b
    PUSH ESI                            ; 00563e11
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00563e12
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00563e17
    JMP 0x00563bd7                      ; 00563e1a
        ;   XREF to: 00563bd7 (UNCONDITIONAL_JUMP)  ; LAB_00563bd7
    MOV EAX,dword ptr [EBX]             ; 00563e1f
        ;   Label: LAB_00563e1f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00563e21
    MOV EAX,dword ptr [EBX + 0x4]       ; 00563e25
    MOV dword ptr [ESP + 0x70],EAX      ; 00563e28
    MOV EAX,dword ptr [EBX + 0x8]       ; 00563e2c
    MOV dword ptr [ESP + 0x74],EAX      ; 00563e2f
    JMP 0x00563cd2                      ; 00563e33
        ;   XREF to: 00563cd2 (UNCONDITIONAL_JUMP)  ; LAB_00563cd2

