; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004b49a0(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0xc]:1  local_c
;
; XREF[9]:
;   core_baron.cpp_CBaron_archive_FUN_00411080 at 00411086
;   core_colonel.cpp_FUN_0043a9e0 at 0043a9e5
;   core_gabriela.cpp_CGabriella_archive_FUN_00498c10 at 00498c16
;   core_haystack.cpp_FUN_004b3fe0 at 004b3fe5
;   core_icepick.cpp_FUN_004bb4c0 at 004bb4c5
;   core_moloch.cpp_FUN_004de680 at 004de686
;   core_scat.cpp_FUN_004fcae0 at 004fcae5
;   core_stranger.cpp_CStranger_archive_FUN_0053cf90 at 0053cf96
;   core_svetlana.cpp_FUN_00542d10 at 00542d15
;
; Referenced Globals:
;   TerminatedCString s_motion_state_005856ca
;   TerminatedCString s_partStatus_005856d7
;   TerminatedCString s_grabbedBy_005856e2
;   TerminatedCString s_hitPoints_005856ec
;   TerminatedCString s_motion_state_005856f6
;   TerminatedCString s_partStatus_00585703
;   TerminatedCString s_grabbedBy_0058570e
;   TerminatedCString s_controlType_00585718
;   TerminatedCString s_objectToPickUp_00585724
;   TerminatedCString s_doorToOpen_00585733
;   TerminatedCString s_leverToPull_0058573e
;   TerminatedCString s_ladderToClimb_0058574a
;   TerminatedCString s_pushedObject_00585758
;   TerminatedCString s_keys_00585765
;   TerminatedCString s_keyNameList_d_0058576a
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;   core_charactr.cpp_CCharacter_archive_FUN_004244b0
;   core_inv.cpp_CInventory_load_FUN_004c1190
;   core_inv.cpp_CInventory_save_FUN_004c0fa0
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b49a0
        ;   Label: core_hero.cpp_FUN_004b49a0
    PUSH ESI                            ; 004b49a1
    SUB ESP,0xcc                        ; 004b49a2
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004b49a8
    MOV EDX,dword ptr [0x005ba940]      ; 004b49af | INT_005ba940
    LEA EBX,[ESI + 0x150]               ; 004b49b5
    CMP EDX,0x4                         ; 004b49bb
    JGE 0x004b4a32                      ; 004b49be
        ;   XREF to: 004b4a32 (CONDITIONAL_JUMP)  ; LAB_004b4a32
    PUSH ESI                            ; 004b49c0
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004b49c1
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    MOV ECX,dword ptr [0x005ba940]      ; 004b49c6 | INT_005ba940
    ADD ESP,0x4                         ; 004b49cc
    CMP ECX,0x2                         ; 004b49cf
    JL 0x004b49e2                       ; 004b49d2
        ;   XREF to: 004b49e2 (CONDITIONAL_JUMP)  ; LAB_004b49e2
    PUSH 0x5856ca                       ; 004b49d4 | = "motion state"
    PUSH EBX                            ; 004b49d9
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 004b49da
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004b49df
    CMP dword ptr [0x005ba940],0x3      ; 004b49e2 | INT_005ba940
        ;   Label: LAB_004b49e2
    JGE 0x004b49f4                      ; 004b49e9
        ;   XREF to: 004b49f4 (CONDITIONAL_JUMP)  ; LAB_004b49f4
    ADD ESP,0xcc                        ; 004b49eb
        ;   Label: LAB_004b49eb
    POP ESI                             ; 004b49f1
    POP EBX                             ; 004b49f2
    RET                                 ; 004b49f3
    PUSH 0x5856d7                       ; 004b49f4 | = "partStatus"
        ;   Label: LAB_004b49f4
    LEA EAX,[ESI + 0x150]               ; 004b49f9
    PUSH EAX                            ; 004b49ff
    CALL core_actor.cpp_archivePartStatus_FUN_0040cbf0 ; 004b4a00
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4a05
    PUSH 0x5856e2                       ; 004b4a08 | = "grabbedBy"
    LEA EAX,[ESI + 0x2590]              ; 004b4a0d
    PUSH EAX                            ; 004b4a13
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b4a14
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4a19
    PUSH 0x5856ec                       ; 004b4a1c | = "hitPoints"
    ADD ESI,0x2434                      ; 004b4a21
    PUSH ESI                            ; 004b4a27
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004b4a28
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4a2d
    JMP 0x004b49eb                      ; 004b4a30
        ;   XREF to: 004b49eb (UNCONDITIONAL_JUMP)  ; LAB_004b49eb
    PUSH ESI                            ; 004b4a32
        ;   Label: LAB_004b4a32
    CALL core_charactr.cpp_CCharacter_archive_FUN_004244b0 ; 004b4a33
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_004244b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004b4a38
    PUSH 0x5856f6                       ; 004b4a3b | = "motion state"
    PUSH EBX                            ; 004b4a40
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 004b4a41
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004b4a46
    PUSH 0x585703                       ; 004b4a49 | = "partStatus"
    PUSH EBX                            ; 004b4a4e
    CALL core_actor.cpp_archivePartStatus_FUN_0040cbf0 ; 004b4a4f
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040cbf0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x005ba940]      ; 004b4a54 | INT_005ba940
    ADD ESP,0x8                         ; 004b4a5a
    CMP ECX,0x8                         ; 004b4a5d
    JGE 0x004b4a80                      ; 004b4a60
        ;   XREF to: 004b4a80 (CONDITIONAL_JUMP)  ; LAB_004b4a80
    PUSH 0x58570e                       ; 004b4a62 | = "grabbedBy"
    LEA EAX,[ESI + 0x2590]              ; 004b4a67
    PUSH EAX                            ; 004b4a6d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b4a6e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4a73
    MOV dword ptr [ESI + 0x2594],0x0    ; 004b4a76
    CMP dword ptr [0x005ba940],0x5      ; 004b4a80 | INT_005ba940
        ;   Label: LAB_004b4a80
    JL 0x004b4a9d                       ; 004b4a87
        ;   XREF to: 004b4a9d (CONDITIONAL_JUMP)  ; LAB_004b4a9d
    PUSH 0x585718                       ; 004b4a89 | = "controlType"
    LEA EAX,[ESI + 0xbc90]              ; 004b4a8e
    PUSH EAX                            ; 004b4a94
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b4a95
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4a9a
    CMP dword ptr [0x005ba940],0x7      ; 004b4a9d | INT_005ba940
        ;   Label: LAB_004b4a9d
    JL 0x004b4b0a                       ; 004b4aa4
        ;   XREF to: 004b4b0a (CONDITIONAL_JUMP)  ; LAB_004b4b0a
    PUSH 0x585724                       ; 004b4aa6 | = "objectToPickUp"
    LEA EAX,[ESI + 0x1fa08]             ; 004b4aab
    PUSH EAX                            ; 004b4ab1
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b4ab2
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4ab7
    PUSH 0x585733                       ; 004b4aba | = "doorToOpen"
    LEA EAX,[ESI + 0x1fa04]             ; 004b4abf
    PUSH EAX                            ; 004b4ac5
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b4ac6
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4acb
    PUSH 0x58573e                       ; 004b4ace | = "leverToPull"
    LEA EAX,[ESI + 0x1fa10]             ; 004b4ad3
    PUSH EAX                            ; 004b4ad9
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b4ada
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4adf
    PUSH 0x58574a                       ; 004b4ae2 | = "ladderToClimb"
    LEA EAX,[ESI + 0x1fa14]             ; 004b4ae7
    PUSH EAX                            ; 004b4aed
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b4aee
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4af3
    PUSH 0x585758                       ; 004b4af6 | = "pushedObject"
    LEA EAX,[ESI + 0x1fa0c]             ; 004b4afb
    PUSH EAX                            ; 004b4b01
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004b4b02
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4b07
    CMP dword ptr [0x005ba940],0xa      ; 004b4b0a | INT_005ba940
        ;   Label: LAB_004b4b0a
    JNZ 0x004b4b28                      ; 004b4b11
        ;   XREF to: 004b4b28 (CONDITIONAL_JUMP)  ; LAB_004b4b28
    PUSH 0x585765                       ; 004b4b13 | = "keys"
    LEA EAX,[ESP + 0xcc]                ; 004b4b18
    PUSH EAX                            ; 004b4b1f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b4b20
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4b25
    MOV EAX,[0x005ba940]                ; 004b4b28 | INT_005ba940
        ;   Label: LAB_004b4b28
    CMP EAX,0x8                         ; 004b4b2d
    JL 0x004b4b70                       ; 004b4b30
        ;   XREF to: 004b4b70 (CONDITIONAL_JUMP)  ; LAB_004b4b70
    CMP EAX,0xb                         ; 004b4b32
    JGE 0x004b4b70                      ; 004b4b35
        ;   XREF to: 004b4b70 (CONDITIONAL_JUMP)  ; LAB_004b4b70
    XOR EBX,EBX                         ; 004b4b37
    PUSH EBX                            ; 004b4b39
        ;   Label: LAB_004b4b39
    PUSH 0x58576a                       ; 004b4b3a | = "keyNameList[%d]"
    LEA EAX,[ESP + 0x6c]                ; 004b4b3f
    PUSH EAX                            ; 004b4b43
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004b4b44
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004b4b49
    LEA EAX,[ESP + 0x64]                ; 004b4b4c
    PUSH EAX                            ; 004b4b50
    LEA EAX,[ESP + 0x4]                 ; 004b4b51
    PUSH EAX                            ; 004b4b55
    INC EBX                             ; 004b4b56
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b4b57
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b4b5c
    CMP EBX,0x20                        ; 004b4b5f
    JL 0x004b4b39                       ; 004b4b62
        ;   XREF to: 004b4b39 (CONDITIONAL_JUMP)  ; LAB_004b4b39
    LEA EAX,[EAX]                       ; 004b4b64
    LEA EDX,[EDX]                       ; 004b4b6a
    CMP dword ptr [0x005ba940],0x9      ; 004b4b70 | INT_005ba940
        ;   Label: LAB_004b4b70
    JL 0x004b4b8d                       ; 004b4b77
        ;   XREF to: 004b4b8d (CONDITIONAL_JUMP)  ; LAB_004b4b8d
    PUSH 0x58577a                       ; 004b4b79 | = "AITask"
    LEA EAX,[ESI + 0x1fa38]             ; 004b4b7e
    PUSH EAX                            ; 004b4b84
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b4b85
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4b8a
    CMP dword ptr [0x005ba940],0xc      ; 004b4b8d | INT_005ba940
        ;   Label: LAB_004b4b8d
    JL 0x004b4baa                       ; 004b4b94
        ;   XREF to: 004b4baa (CONDITIONAL_JUMP)  ; LAB_004b4baa
    PUSH 0x585781                       ; 004b4b96 | = "isWearingGasMask"
    LEA EAX,[ESI + 0x1fa00]             ; 004b4b9b
    PUSH EAX                            ; 004b4ba1
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b4ba2
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b4ba7
    CMP dword ptr [0x005ba940],0x6      ; 004b4baa | INT_005ba940
        ;   Label: LAB_004b4baa
    JL 0x004b49eb                       ; 004b4bb1
        ;   XREF to: 004b49eb (CONDITIONAL_JUMP)  ; LAB_004b49eb
    MOV EDX,dword ptr [0x00763e88]      ; 004b4bb7 | DAT_00763e88
    LEA EAX,[ESI + 0x1f5a0]             ; 004b4bbd
    CMP EDX,0x1                         ; 004b4bc3
    JNZ 0x004b4be1                      ; 004b4bc6
        ;   XREF to: 004b4be1 (CONDITIONAL_JUMP)  ; LAB_004b4be1
    MOV EBX,dword ptr [0x00763e84]      ; 004b4bc8 | DAT_00763e84
    PUSH EBX                            ; 004b4bce
    PUSH EAX                            ; 004b4bcf
    CALL core_inv.cpp_CInventory_load_FUN_004c1190 ; 004b4bd0
        ;   XREF to: 004c1190 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_load_FUN_004c1190(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004b4bd5
    ADD ESP,0xcc                        ; 004b4bd8
    POP ESI                             ; 004b4bde
    POP EBX                             ; 004b4bdf
    RET                                 ; 004b4be0
    MOV ECX,dword ptr [0x00763e84]      ; 004b4be1 | DAT_00763e84
        ;   Label: LAB_004b4be1
    PUSH ECX                            ; 004b4be7
    PUSH EAX                            ; 004b4be8
    CALL core_inv.cpp_CInventory_save_FUN_004c0fa0 ; 004b4be9
        ;   XREF to: 004c0fa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_save_FUN_004c0fa0(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004b4bee
    ADD ESP,0xcc                        ; 004b4bf1
    POP ESI                             ; 004b4bf7
    POP EBX                             ; 004b4bf8
    RET                                 ; 004b4bf9

