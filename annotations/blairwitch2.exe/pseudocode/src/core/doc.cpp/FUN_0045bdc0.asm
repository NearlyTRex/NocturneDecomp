; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0045bdc0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 0045150e
;
; Referenced Globals:
;   void* switchdataD_0045bc0c = 0045c38a
;   void* switchdataD_0045bc44 = 0045c3fa
;   void* switchdataD_0045bc7c = 0045c46c
;   void* switchdataD_0045bcb4 = 0045c4b4
;   void* switchdataD_0045bcec = 0045c507
;   void* switchdataD_0045bd24 = 0045bee0
;   void* switchdataD_0045bd4c = 0045c79f
;   void* switchdataD_0045bd84 = 0045c7f3
;   TerminatedCString s_axeswing0_wav_005d0617
;   undefined4 DAT_005d064f
;   undefined4 DAT_005d0657
;   undefined4 DAT_005d065f
;   undefined4 DAT_005f5134
;   undefined4 DAT_005f5138
;   undefined4 DAT_00618170
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_charactr.cpp_FUN_00428b10
;   core_cross.cpp_FUN_005a6cf0
;   core_doc.cpp_FUN_0045bba0
;   core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0
;   core_dynamite.cpp_CDynamite_lightFuse_FUN_0047a150
;   core_hero.cpp_FUN_004cff90
;   core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0
;   core_inv.cpp_FUN_004db8e0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bdc0
        ;   Label: core_doc.cpp_FUN_0045bdc0
    PUSH ESI                            ; 0045bdc1
    PUSH EDI                            ; 0045bdc2
    PUSH EBP                            ; 0045bdc3
    MOV EBP,ESP                         ; 0045bdc4
    SUB ESP,0x68                        ; 0045bdc6
    AND ESP,0xfffffff8                  ; 0045bdc9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045bdcc
    CMP dword ptr [EBX + 0x2d04],0x9    ; 0045bdcf
    JNZ 0x0045bdee                      ; 0045bdd6
        ;   XREF to: 0045bdee (CONDITIONAL_JUMP)  ; LAB_0045bdee
    MOV ECX,dword ptr [EBX + 0x2698]    ; 0045bdd8
    TEST ECX,ECX                        ; 0045bdde
    JNZ 0x0045bdee                      ; 0045bde0
        ;   XREF to: 0045bdee (CONDITIONAL_JUMP)  ; LAB_0045bdee
    MOV dword ptr [EBX + 0x2d08],ECX    ; 0045bde2
    MOV dword ptr [EBX + 0x2d04],ECX    ; 0045bde8
    MOV EDI,0xffffffff                  ; 0045bdee
        ;   Label: LAB_0045bdee
    MOV EAX,dword ptr [EBX + 0x25618]   ; 0045bdf3
    XOR ESI,ESI                         ; 0045bdf9
    MOV dword ptr [ESP + 0x3c],EDI      ; 0045bdfb
    MOV dword ptr [ESP + 0x5c],ESI      ; 0045bdff
    TEST EAX,EAX                        ; 0045be03
    JZ 0x0045c153                       ; 0045be05
        ;   XREF to: 0045c153 (CONDITIONAL_JUMP)  ; LAB_0045c153
    MOV dword ptr [EBX + 0x25640],ESI   ; 0045be0b
    LEA EAX,[EBX + 0x2437c]             ; 0045be11
        ;   Label: LAB_0045be11
    MOV dword ptr [ESP + 0x54],EAX      ; 0045be17
    LEA EAX,[EBX + 0x2b4]               ; 0045be1b
    XOR EDX,EDX                         ; 0045be21
    MOV dword ptr [ESP + 0x48],EAX      ; 0045be23
    LEA EAX,[EBX + 0x20]                ; 0045be27
    MOV dword ptr [ESP + 0x44],EDX      ; 0045be2a
    MOV dword ptr [ESP + 0x38],EAX      ; 0045be2e
    FLD float ptr [EBP + 0x18]          ; 0045be32
        ;   Label: LAB_0045be32
    FLDZ                                ; 0045be35
    FCOMPP                              ; 0045be37
    FNSTSW AX                           ; 0045be39
    SAHF                                ; 0045be3b
    JNC 0x0045c14c                      ; 0045be3c
        ;   XREF to: 0045c14c (CONDITIONAL_JUMP)  ; LAB_0045c14c
    MOV ECX,dword ptr [EBX + 0x256a4]   ; 0045be42
    CMP ECX,0x1                         ; 0045be48
    JNZ 0x0045c1fa                      ; 0045be4b
        ;   XREF to: 0045c1fa (CONDITIONAL_JUMP)  ; LAB_0045c1fa
    PUSH 0x13                           ; 0045be51
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0045be53
    PUSH EAX                            ; 0045be57
    CALL core_motion.cpp_FUN_005038a0   ; 0045be58
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x6c],EAX      ; 0045be5d
    FLD float ptr [ESP + 0x6c]          ; 0045be61
    ADD ESP,0x8                         ; 0045be65
    FCOMP double ptr [0x005d065f]       ; 0045be68 | DAT_005d065f
    FNSTSW AX                           ; 0045be6e
    SAHF                                ; 0045be70
    JNC 0x0045c1ef                      ; 0045be71
        ;   XREF to: 0045c1ef (CONDITIONAL_JUMP)  ; LAB_0045c1ef
    MOV dword ptr [ESP + 0x60],0x5      ; 0045be77
        ;   Label: LAB_0045be77
    MOV ESI,dword ptr [ESP + 0x60]      ; 0045be7f
        ;   Label: LAB_0045be7f
    MOV EAX,dword ptr [EBX + 0x2d08]    ; 0045be83
    PUSH ESI                            ; 0045be89
    MOV dword ptr [ESP + 0x54],EAX      ; 0045be8a
    LEA EAX,[EBP + 0x18]                ; 0045be8e
    PUSH EAX                            ; 0045be91
    PUSH EBX                            ; 0045be92
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0 ; 0045be93
        ;   XREF to: 0042a0c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    ADD ESP,0xc                         ; 0045be98
    MOV EDI,dword ptr [EBX + 0x2d04]    ; 0045be9b
    MOV dword ptr [ESP + 0x58],EAX      ; 0045bea1
    IMUL EAX,EDI,0x38                   ; 0045bea5
    IMUL EDI,dword ptr [EBX + EAX*0x1 + 0x2860],0x118 ; 0045bea8
    MOV ECX,dword ptr [ESP + 0x48]      ; 0045beb3
    PUSH ECX                            ; 0045beb7
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 0045beb8
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD EAX,0x1c28                      ; 0045bebd
    ADD EDI,EAX                         ; 0045bec2
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0045bec4
    SUB EAX,0x4                         ; 0045beca
    ADD ESP,0x4                         ; 0045becd
    CMP EAX,0x9                         ; 0045bed0
    JA 0x0045bf78                       ; 0045bed3
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x45bd24]  ; 0045bed9 | caseD_6 | caseD_7 | caseD_8
        ;   Label: switchD
    CMP dword ptr [ESP + 0x50],0x3e99999a ; 0045bee0
        ;   Label: caseD_4
    JGE 0x0045bf14                      ; 0045bee8
        ;   XREF to: 0045bf14 (CONDITIONAL_JUMP)  ; LAB_0045bf14
    CMP dword ptr [EBX + 0x2d08],0x3e99999a ; 0045beea
    JL 0x0045bf14                       ; 0045bef4
        ;   XREF to: 0045bf14 (CONDITIONAL_JUMP)  ; LAB_0045bf14
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0045bef6
    TEST ESI,ESI                        ; 0045befc
    JZ 0x0045bf14                       ; 0045befe
        ;   XREF to: 0045bf14 (CONDITIONAL_JUMP)  ; LAB_0045bf14
    PUSH 0x2                            ; 0045bf00
    MOV EAX,ESI                         ; 0045bf02
    PUSH EAX                            ; 0045bf04
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 0045bf05
    CALL dword ptr [ESI + 0x80]         ; 0045bf0b
    ADD ESP,0x8                         ; 0045bf11
    CMP dword ptr [ESP + 0x50],0x3ecccccd ; 0045bf14
        ;   Label: LAB_0045bf14
    JGE 0x0045bf46                      ; 0045bf1c
        ;   XREF to: 0045bf46 (CONDITIONAL_JUMP)  ; LAB_0045bf46
    CMP dword ptr [EBX + 0x2d08],0x3ecccccd ; 0045bf1e
    JL 0x0045bf46                       ; 0045bf28
        ;   XREF to: 0045bf46 (CONDITIONAL_JUMP)  ; LAB_0045bf46
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0045bf2a
    TEST ECX,ECX                        ; 0045bf30
    JZ 0x0045bf46                       ; 0045bf32
        ;   XREF to: 0045bf46 (CONDITIONAL_JUMP)  ; LAB_0045bf46
    PUSH 0x2                            ; 0045bf34
    MOV ESI,dword ptr [ECX + 0x2b0]     ; 0045bf36
    PUSH ECX                            ; 0045bf3c
    CALL dword ptr [ESI + 0x80]         ; 0045bf3d
    ADD ESP,0x8                         ; 0045bf43
    CMP dword ptr [ESP + 0x50],0x3f000000 ; 0045bf46
        ;   Label: LAB_0045bf46
    JGE 0x0045bf78                      ; 0045bf4e
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2d08],0x3f000000 ; 0045bf50
    JL 0x0045bf78                       ; 0045bf5a
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045bf5c
    TEST EAX,EAX                        ; 0045bf62
    JZ 0x0045bf78                       ; 0045bf64
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x2                            ; 0045bf66
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0045bf68
    PUSH EAX                            ; 0045bf6e
    CALL dword ptr [ESI + 0x80]         ; 0045bf6f
    ADD ESP,0x8                         ; 0045bf75
    CMP dword ptr [ESP + 0x58],0x0      ; 0045bf78
        ;   Label: caseD_9
    JL 0x0045c13a                       ; 0045bf7d
        ;   XREF to: 0045c13a (CONDITIONAL_JUMP)  ; LAB_0045c13a
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0045bf83
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045bf87
    CMP EAX,ECX                         ; 0045bf8d
    JZ 0x0045c004                       ; 0045bf8f
        ;   XREF to: 0045c004 (CONDITIONAL_JUMP)  ; LAB_0045c004
    TEST EAX,EAX                        ; 0045bf95
    JZ 0x0045bfc7                       ; 0045bf97
        ;   XREF to: 0045bfc7 (CONDITIONAL_JUMP)  ; LAB_0045bfc7
    JNZ 0x0045c7e1                      ; 0045bf99
        ;   XREF to: 0045c7e1 (CONDITIONAL_JUMP)  ; LAB_0045c7e1
    CMP EAX,dword ptr [ESP + 0x58]      ; 0045bf9f
        ;   Label: LAB_0045bf9f
    JNZ 0x0045bfc7                      ; 0045bfa3
        ;   XREF to: 0045bfc7 (CONDITIONAL_JUMP)  ; LAB_0045bfc7
    PUSH 0x1                            ; 0045bfa5
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045bfa7
    PUSH EAX                            ; 0045bfad
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0045bfae
    CALL dword ptr [ESI + 0xe4]         ; 0045bfb4
    ADD ESP,0x8                         ; 0045bfba
    MOV dword ptr [EBX + 0x25698],0x0   ; 0045bfbd
    CMP dword ptr [EBX + 0x25640],0x0   ; 0045bfc7
        ;   Label: LAB_0045bfc7
    JZ 0x0045c004                       ; 0045bfce
        ;   XREF to: 0045c004 (CONDITIONAL_JUMP)  ; LAB_0045c004
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0045bfd0
    TEST ESI,ESI                        ; 0045bfd4
    JNZ 0x0045c835                      ; 0045bfd6
        ;   XREF to: 0045c835 (CONDITIONAL_JUMP)  ; LAB_0045c835
    XOR EAX,EAX                         ; 0045bfdc
        ;   Label: LAB_0045bfdc
    CMP EAX,dword ptr [ESP + 0x58]      ; 0045bfde
        ;   Label: LAB_0045bfde
    JNZ 0x0045c004                      ; 0045bfe2
        ;   XREF to: 0045c004 (CONDITIONAL_JUMP)  ; LAB_0045c004
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0045bfe4
    MOV dword ptr [EBX + 0x25698],EAX   ; 0045bfe8
    TEST EAX,EAX                        ; 0045bfee
    JZ 0x0045c004                       ; 0045bff0
        ;   XREF to: 0045c004 (CONDITIONAL_JUMP)  ; LAB_0045c004
    PUSH 0x2                            ; 0045bff2
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0045bff4
    PUSH EAX                            ; 0045bffa
    CALL dword ptr [ESI + 0xe4]         ; 0045bffb
    ADD ESP,0x8                         ; 0045c001
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 0045c004
        ;   Label: LAB_0045c004
    CMP EDI,0x1                         ; 0045c00a
    JNZ 0x0045c02a                      ; 0045c00d
        ;   XREF to: 0045c02a (CONDITIONAL_JUMP)  ; LAB_0045c02a
    CMP dword ptr [ESP + 0x58],0x5      ; 0045c00f
    JNZ 0x0045c02a                      ; 0045c014
        ;   XREF to: 0045c02a (CONDITIONAL_JUMP)  ; LAB_0045c02a
    PUSH EDI                            ; 0045c016
    PUSH EBX                            ; 0045c017
    CALL core_hero.cpp_FUN_004cff90     ; 0045c018
        ;   XREF to: 004cff90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cff90()
    ADD ESP,0x8                         ; 0045c01d
    MOV dword ptr [EBX + 0x256a4],0x0   ; 0045c020
    MOV EDX,dword ptr [EBX + 0x2561c]   ; 0045c02a
        ;   Label: LAB_0045c02a
    TEST EDX,EDX                        ; 0045c030
    JZ 0x0045c065                       ; 0045c032
        ;   XREF to: 0045c065 (CONDITIONAL_JUMP)  ; LAB_0045c065
    MOV ECX,dword ptr [ESP + 0x58]      ; 0045c034
    TEST ECX,ECX                        ; 0045c038
    JNZ 0x0045c847                      ; 0045c03a
        ;   XREF to: 0045c847 (CONDITIONAL_JUMP)  ; LAB_0045c847
    PUSH 0x1                            ; 0045c040
        ;   Label: LAB_0045c040
    PUSH 0x14                           ; 0045c042
    MOV EAX,dword ptr [ESP + 0x50]      ; 0045c044
    PUSH EAX                            ; 0045c048
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045c049
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x256a4],0x6   ; 0045c04e
    ADD ESP,0xc                         ; 0045c058
    MOV dword ptr [EBX + 0x2561c],0x0   ; 0045c05b
    MOV EDX,dword ptr [ESP + 0x58]      ; 0045c065
        ;   Label: LAB_0045c065
    CMP EDX,0x8                         ; 0045c069
    JNZ 0x0045c90e                      ; 0045c06c
        ;   XREF to: 0045c90e (CONDITIONAL_JUMP)  ; LAB_0045c90e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045c072
    PUSH EAX                            ; 0045c076
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0045c077
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0045c07c
    TEST EAX,EAX                        ; 0045c07f
    JNZ 0x0045c8ff                      ; 0045c081
        ;   XREF to: 0045c8ff (CONDITIONAL_JUMP)  ; LAB_0045c8ff
    MOV dword ptr [EBX + 0x255e8],0x1   ; 0045c087
        ;   Label: LAB_0045c087
    CMP dword ptr [EBX + 0x256a4],0x7   ; 0045c091
        ;   Label: LAB_0045c091
    JNZ 0x0045c0ab                      ; 0045c098
        ;   XREF to: 0045c0ab (CONDITIONAL_JUMP)  ; LAB_0045c0ab
    CMP dword ptr [ESP + 0x58],0x6      ; 0045c09a
    JNZ 0x0045c0ab                      ; 0045c09f
        ;   XREF to: 0045c0ab (CONDITIONAL_JUMP)  ; LAB_0045c0ab
    MOV dword ptr [EBX + 0x256a4],0x0   ; 0045c0a1
    MOV ESI,dword ptr [EBX + 0x2d04]    ; 0045c0ab
        ;   Label: LAB_0045c0ab
    CMP ESI,0x4                         ; 0045c0b1
    JL 0x0045c0e2                       ; 0045c0b4
        ;   XREF to: 0045c0e2 (CONDITIONAL_JUMP)  ; LAB_0045c0e2
    CMP ESI,0x8                         ; 0045c0b6
    JG 0x0045c0e2                       ; 0045c0b9
        ;   XREF to: 0045c0e2 (CONDITIONAL_JUMP)  ; LAB_0045c0e2
    CMP dword ptr [EBX + 0x256a4],0x0   ; 0045c0bb
    JNZ 0x0045c0e2                      ; 0045c0c2
        ;   XREF to: 0045c0e2 (CONDITIONAL_JUMP)  ; LAB_0045c0e2
    MOV EDX,dword ptr [EBX + 0x2d08]    ; 0045c0c4
    CMP EDX,0x3f800000                  ; 0045c0ca
    JNZ 0x0045c0e2                      ; 0045c0d0
        ;   XREF to: 0045c0e2 (CONDITIONAL_JUMP)  ; LAB_0045c0e2
    MOV dword ptr [EBX + 0x2d04],0x3    ; 0045c0d2
    MOV dword ptr [EBX + 0x2d08],EDX    ; 0045c0dc
    MOV ECX,dword ptr [EBX + 0x2d04]    ; 0045c0e2
        ;   Label: LAB_0045c0e2
    TEST ECX,ECX                        ; 0045c0e8
    JNZ 0x0045c105                      ; 0045c0ea
        ;   XREF to: 0045c105 (CONDITIONAL_JUMP)  ; LAB_0045c105
    TEST dword ptr [EBX + 0x2d08],0x7fffffff ; 0045c0ec
    JNZ 0x0045c105                      ; 0045c0f6
        ;   XREF to: 0045c105 (CONDITIONAL_JUMP)  ; LAB_0045c105
    CMP dword ptr [EBX + 0x25640],0x0   ; 0045c0f8
    JZ 0x0045c944                       ; 0045c0ff
        ;   XREF to: 0045c944 (CONDITIONAL_JUMP)  ; LAB_0045c944
    CMP dword ptr [EBX + 0x2d04],0xf    ; 0045c105
        ;   Label: LAB_0045c105
    JNZ 0x0045c12c                      ; 0045c10c
        ;   XREF to: 0045c12c (CONDITIONAL_JUMP)  ; LAB_0045c12c
    MOV EDX,dword ptr [EBX + 0x2d08]    ; 0045c10e
    CMP EDX,0x3f800000                  ; 0045c114
    JNZ 0x0045c12c                      ; 0045c11a
        ;   XREF to: 0045c12c (CONDITIONAL_JUMP)  ; LAB_0045c12c
    MOV dword ptr [EBX + 0x2d04],0x1    ; 0045c11c
    MOV dword ptr [EBX + 0x2d08],EDX    ; 0045c126
    MOV ECX,dword ptr [ESP + 0x60]      ; 0045c12c
        ;   Label: LAB_0045c12c
    PUSH ECX                            ; 0045c130
    PUSH EBX                            ; 0045c131
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620 ; 0045c132
        ;   XREF to: 0042a620 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 0045c137
    MOV ESI,dword ptr [ESP + 0x44]      ; 0045c13a
        ;   Label: LAB_0045c13a
    INC ESI                             ; 0045c13e
    MOV dword ptr [ESP + 0x44],ESI      ; 0045c13f
    CMP ESI,0x2                         ; 0045c143
    JL 0x0045be32                       ; 0045c146
        ;   XREF to: 0045be32 (CONDITIONAL_JUMP)  ; LAB_0045be32
    MOV ESP,EBP                         ; 0045c14c
        ;   Label: LAB_0045c14c
    POP EBP                             ; 0045c14e
    POP EDI                             ; 0045c14f
    POP ESI                             ; 0045c150
    POP EBX                             ; 0045c151
    RET                                 ; 0045c152
    CMP dword ptr [EBX + 0x25640],0x0   ; 0045c153
        ;   Label: LAB_0045c153
    JZ 0x0045be11                       ; 0045c15a
        ;   XREF to: 0045be11 (CONDITIONAL_JUMP)  ; LAB_0045be11
    MOV ECX,dword ptr [EBX + 0x2698]    ; 0045c160
    LEA ESI,[EBX + 0x2437c]             ; 0045c166
    TEST ECX,ECX                        ; 0045c16c
    JNZ 0x0045c1c2                      ; 0045c16e
        ;   XREF to: 0045c1c2 (CONDITIONAL_JUMP)  ; LAB_0045c1c2
    MOV ECX,dword ptr [0x01d0557c]      ; 0045c170 | g_CMeleeClassInfo.name_hash
    MOV EAX,dword ptr [ESI + 0x468]     ; 0045c176
    PUSH ECX                            ; 0045c17c
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x610] ; 0045c17d
    PUSH EAX                            ; 0045c184
    MOV dword ptr [ESP + 0x64],EAX      ; 0045c185
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c189
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c18e
    TEST EAX,EAX                        ; 0045c191
    JZ 0x0045c19d                       ; 0045c193
        ;   XREF to: 0045c19d (CONDITIONAL_JUMP)  ; LAB_0045c19d
    MOV dword ptr [ESP + 0x3c],0x6      ; 0045c195
    CMP dword ptr [ESP + 0x5c],0x0      ; 0045c19d
        ;   Label: LAB_0045c19d
    JNZ 0x0045be11                      ; 0045c1a2
        ;   XREF to: 0045be11 (CONDITIONAL_JUMP)  ; LAB_0045be11
    CMP dword ptr [ESP + 0x3c],0x0      ; 0045c1a8
        ;   Label: LAB_0045c1a8
    JGE 0x0045be11                      ; 0045c1ad
        ;   XREF to: 0045be11 (CONDITIONAL_JUMP)  ; LAB_0045be11
    MOV dword ptr [EBX + 0x25640],0x0   ; 0045c1b3
    JMP 0x0045be11                      ; 0045c1bd
        ;   XREF to: 0045be11 (UNCONDITIONAL_JUMP)  ; LAB_0045be11
    MOV EDI,dword ptr [0x026681a0]      ; 0045c1c2 | g_CLanternClassInfo.name_hash
        ;   Label: LAB_0045c1c2
    PUSH EDI                            ; 0045c1c8
    PUSH ECX                            ; 0045c1c9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c1ca
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c1cf
    TEST EAX,EAX                        ; 0045c1d2
    JZ 0x0045c1e9                       ; 0045c1d4
        ;   XREF to: 0045c1e9 (CONDITIONAL_JUMP)  ; LAB_0045c1e9
    MOV EAX,dword ptr [ESI + 0x468]     ; 0045c1d6
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x610] ; 0045c1dc
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045c1e3
    JMP 0x0045c19d                      ; 0045c1e7
        ;   XREF to: 0045c19d (UNCONDITIONAL_JUMP)  ; LAB_0045c19d
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045c1e9
        ;   Label: LAB_0045c1e9
    JMP 0x0045c1a8                      ; 0045c1ed
        ;   XREF to: 0045c1a8 (UNCONDITIONAL_JUMP)  ; LAB_0045c1a8
    XOR EDX,EDX                         ; 0045c1ef
        ;   Label: LAB_0045c1ef
    MOV dword ptr [ESP + 0x60],EDX      ; 0045c1f1
    JMP 0x0045be7f                      ; 0045c1f5
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    CMP dword ptr [EBX + 0x2561c],0x0   ; 0045c1fa
        ;   Label: LAB_0045c1fa
    JZ 0x0045c231                       ; 0045c201
        ;   XREF to: 0045c231 (CONDITIONAL_JUMP)  ; LAB_0045c231
    CMP dword ptr [EBX + 0x2698],0x0    ; 0045c203
    JZ 0x0045c217                       ; 0045c20a
        ;   XREF to: 0045c217 (CONDITIONAL_JUMP)  ; LAB_0045c217
    XOR EDI,EDI                         ; 0045c20c
    MOV dword ptr [ESP + 0x60],EDI      ; 0045c20e
    JMP 0x0045be7f                      ; 0045c212
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    CMP dword ptr [EBX + 0x25640],0x0   ; 0045c217
        ;   Label: LAB_0045c217
    JZ 0x0045be77                       ; 0045c21e
        ;   XREF to: 0045be77 (CONDITIONAL_JUMP)  ; LAB_0045be77
    MOV dword ptr [ESP + 0x60],0x6      ; 0045c224
    JMP 0x0045be7f                      ; 0045c22c
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    CMP ECX,0x2                         ; 0045c231
        ;   Label: LAB_0045c231
    JNZ 0x0045c243                      ; 0045c234
        ;   XREF to: 0045c243 (CONDITIONAL_JUMP)  ; LAB_0045c243
    MOV dword ptr [ESP + 0x60],0x6      ; 0045c236
    JMP 0x0045be7f                      ; 0045c23e
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    CMP ECX,0x3                         ; 0045c243
        ;   Label: LAB_0045c243
    JNZ 0x0045c2b6                      ; 0045c246
        ;   XREF to: 0045c2b6 (CONDITIONAL_JUMP)  ; LAB_0045c2b6
    MOV EDX,0x4                         ; 0045c248
    PUSH EDX                            ; 0045c24d
    PUSH EBX                            ; 0045c24e
    MOV dword ptr [ESP + 0x68],EDX      ; 0045c24f
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0045c253
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x6c],EAX      ; 0045c258
    FLD float ptr [ESP + 0x6c]          ; 0045c25c
    ADD ESP,0x8                         ; 0045c260
    FCOMP double ptr [0x005d0657]       ; 0045c263 | DAT_005d0657
    FNSTSW AX                           ; 0045c269
    SAHF                                ; 0045c26b
    JBE 0x0045be7f                      ; 0045c26c
        ;   XREF to: 0045be7f (CONDITIONAL_JUMP)  ; LAB_0045be7f
    FLD float ptr [EBP + 0x18]          ; 0045c272
    FMUL double ptr [0x005d064f]        ; 0045c275 | DAT_005d064f
    FADD float ptr [EBX + 0x25650]      ; 0045c27b
    FST float ptr [EBX + 0x25650]       ; 0045c281
    FCOMP float ptr [0x005f5138]        ; 0045c287 | DAT_005f5138
    FNSTSW AX                           ; 0045c28d
    SAHF                                ; 0045c28f
    JA 0x0045c2a9                       ; 0045c290
        ;   XREF to: 0045c2a9 (CONDITIONAL_JUMP)  ; LAB_0045c2a9
    MOV ECX,dword ptr [EBX + 0x10a74]   ; 0045c292
        ;   Label: LAB_0045c292
    TEST ECX,ECX                        ; 0045c298
    JNZ 0x0045c14c                      ; 0045c29a
        ;   XREF to: 0045c14c (CONDITIONAL_JUMP)  ; LAB_0045c14c
    MOV dword ptr [ESP + 0x60],ECX      ; 0045c2a0
    JMP 0x0045be7f                      ; 0045c2a4
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,[0x005f5138]                ; 0045c2a9 | DAT_005f5138
        ;   Label: LAB_0045c2a9
    MOV dword ptr [EBX + 0x25650],EAX   ; 0045c2ae
    JMP 0x0045c292                      ; 0045c2b4
        ;   XREF to: 0045c292 (UNCONDITIONAL_JUMP)  ; LAB_0045c292
    MOV EDX,dword ptr [ESP + 0x54]      ; 0045c2b6
        ;   Label: LAB_0045c2b6
    PUSH EDX                            ; 0045c2ba
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0045c2bb
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0045c2c0
    TEST EAX,EAX                        ; 0045c2c3
    JZ 0x0045c2dd                       ; 0045c2c5
        ;   XREF to: 0045c2dd (CONDITIONAL_JUMP)  ; LAB_0045c2dd
    CMP dword ptr [EBX + 0x255e8],0x0   ; 0045c2c7
    JNZ 0x0045c2dd                      ; 0045c2ce
        ;   XREF to: 0045c2dd (CONDITIONAL_JUMP)  ; LAB_0045c2dd
    MOV dword ptr [ESP + 0x60],0x3      ; 0045c2d0
    JMP 0x0045be7f                      ; 0045c2d8
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV ESI,dword ptr [ESP + 0x54]      ; 0045c2dd
        ;   Label: LAB_0045c2dd
    PUSH ESI                            ; 0045c2e1
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0045c2e2
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0045c2e7
    TEST EAX,EAX                        ; 0045c2ea
    JZ 0x0045c304                       ; 0045c2ec
        ;   XREF to: 0045c304 (CONDITIONAL_JUMP)  ; LAB_0045c304
    CMP dword ptr [EBX + 0x255e8],0x1   ; 0045c2ee
    JNZ 0x0045c304                      ; 0045c2f5
        ;   XREF to: 0045c304 (CONDITIONAL_JUMP)  ; LAB_0045c304
    MOV dword ptr [ESP + 0x60],0x8      ; 0045c2f7
    JMP 0x0045be7f                      ; 0045c2ff
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045c304
        ;   Label: LAB_0045c304
    PUSH EAX                            ; 0045c308
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0045c309
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0045c30e
    TEST EAX,EAX                        ; 0045c311
    JNZ 0x0045c32b                      ; 0045c313
        ;   XREF to: 0045c32b (CONDITIONAL_JUMP)  ; LAB_0045c32b
    CMP dword ptr [EBX + 0x255e8],0x2   ; 0045c315
    JNZ 0x0045c32b                      ; 0045c31c
        ;   XREF to: 0045c32b (CONDITIONAL_JUMP)  ; LAB_0045c32b
    MOV dword ptr [ESP + 0x60],0x8      ; 0045c31e
    JMP 0x0045be7f                      ; 0045c326
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV ECX,dword ptr [ESP + 0x54]      ; 0045c32b
        ;   Label: LAB_0045c32b
    PUSH ECX                            ; 0045c32f
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0045c330
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0045c335
    TEST EAX,EAX                        ; 0045c338
    JNZ 0x0045c352                      ; 0045c33a
        ;   XREF to: 0045c352 (CONDITIONAL_JUMP)  ; LAB_0045c352
    CMP dword ptr [EBX + 0x255e8],0x1   ; 0045c33c
    JNZ 0x0045c352                      ; 0045c343
        ;   XREF to: 0045c352 (CONDITIONAL_JUMP)  ; LAB_0045c352
    MOV dword ptr [ESP + 0x60],0x3      ; 0045c345
    JMP 0x0045be7f                      ; 0045c34d
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0045c352
        ;   Label: LAB_0045c352
    TEST EDI,EDI                        ; 0045c356
    JL 0x0045c442                       ; 0045c358
        ;   XREF to: 0045c442 (CONDITIONAL_JUMP)  ; LAB_0045c442
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0045c35e
    TEST ESI,ESI                        ; 0045c364
    JZ 0x0045c3d2                       ; 0045c366
        ;   XREF to: 0045c3d2 (CONDITIONAL_JUMP)  ; LAB_0045c3d2
    MOV EAX,ESI                         ; 0045c36c
    CMP EAX,dword ptr [ESP + 0x5c]      ; 0045c36e
    JNZ 0x0045c37d                      ; 0045c372
        ;   XREF to: 0045c37d (CONDITIONAL_JUMP)  ; LAB_0045c37d
    MOV dword ptr [ESP + 0x60],EDI      ; 0045c374
    JMP 0x0045be7f                      ; 0045c378
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    TEST EAX,EAX                        ; 0045c37d
        ;   Label: LAB_0045c37d
    JNZ 0x0045c3c0                      ; 0045c37f
        ;   XREF to: 0045c3c0 (CONDITIONAL_JUMP)  ; LAB_0045c3c0
    MOV dword ptr [ESP + 0x60],EAX      ; 0045c381
        ;   Label: LAB_0045c381
    JMP 0x0045be7f                      ; 0045c385
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,0x1                         ; 0045c38a
        ;   Label: caseD_0
    JMP 0x0045c381                      ; 0045c38f
        ;   XREF to: 0045c381 (UNCONDITIONAL_JUMP)  ; LAB_0045c381
    MOV EDI,dword ptr [0x01d0557c]      ; 0045c391 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EDI                            ; 0045c397
    PUSH EAX                            ; 0045c398
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c399
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c39e
    TEST EAX,EAX                        ; 0045c3a1
    JZ 0x0045c3b5                       ; 0045c3a3
        ;   XREF to: 0045c3b5 (CONDITIONAL_JUMP)  ; LAB_0045c3b5
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0045c3a5
    JZ 0x0045c3b5                       ; 0045c3ac
        ;   XREF to: 0045c3b5 (CONDITIONAL_JUMP)  ; LAB_0045c3b5
    MOV EAX,0x5                         ; 0045c3ae
    JMP 0x0045c381                      ; 0045c3b3
        ;   XREF to: 0045c381 (UNCONDITIONAL_JUMP)  ; LAB_0045c381
    XOR EAX,EAX                         ; 0045c3b5
        ;   Label: LAB_0045c3b5
    JMP 0x0045c381                      ; 0045c3b7
        ;   XREF to: 0045c381 (UNCONDITIONAL_JUMP)  ; LAB_0045c381
    MOV EAX,0x3                         ; 0045c3b9
        ;   Label: caseD_1
    JMP 0x0045c381                      ; 0045c3be
        ;   XREF to: 0045c381 (UNCONDITIONAL_JUMP)  ; LAB_0045c381
    MOV ESI,dword ptr [EAX + 0x43c]     ; 0045c3c0
        ;   Label: LAB_0045c3c0
    CMP ESI,0xd                         ; 0045c3c6
    JA 0x0045c3b9                       ; 0045c3c9
        ;   XREF to: 0045c3b9 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [ESI*0x4 + 0x45bc0c]  ; 0045c3cb | caseD_c | caseD_b | caseD_d
        ;   Label: switchD
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0045c3d2
        ;   Label: LAB_0045c3d2
    TEST EDI,EDI                        ; 0045c3d6
    JZ 0x0045be7f                       ; 0045c3d8
        ;   XREF to: 0045be7f (CONDITIONAL_JUMP)  ; LAB_0045be7f
    CMP dword ptr [EBX + 0x25640],0x0   ; 0045c3de
    JZ 0x0045be7f                       ; 0045c3e5
        ;   XREF to: 0045be7f (CONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,EDI                         ; 0045c3eb
    TEST EDI,EDI                        ; 0045c3ed
    JNZ 0x0045c430                      ; 0045c3ef
        ;   XREF to: 0045c430 (CONDITIONAL_JUMP)  ; LAB_0045c430
    MOV dword ptr [ESP + 0x60],EAX      ; 0045c3f1
        ;   Label: LAB_0045c3f1
    JMP 0x0045be7f                      ; 0045c3f5
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,0x1                         ; 0045c3fa
        ;   Label: caseD_0
    JMP 0x0045c3f1                      ; 0045c3ff
        ;   XREF to: 0045c3f1 (UNCONDITIONAL_JUMP)  ; LAB_0045c3f1
    MOV EDX,dword ptr [0x01d0557c]      ; 0045c401 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EDX                            ; 0045c407
    PUSH EAX                            ; 0045c408
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c409
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c40e
    TEST EAX,EAX                        ; 0045c411
    JZ 0x0045c425                       ; 0045c413
        ;   XREF to: 0045c425 (CONDITIONAL_JUMP)  ; LAB_0045c425
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0045c415
    JZ 0x0045c425                       ; 0045c41c
        ;   XREF to: 0045c425 (CONDITIONAL_JUMP)  ; LAB_0045c425
    MOV EAX,0x5                         ; 0045c41e
    JMP 0x0045c3f1                      ; 0045c423
        ;   XREF to: 0045c3f1 (UNCONDITIONAL_JUMP)  ; LAB_0045c3f1
    XOR EAX,EAX                         ; 0045c425
        ;   Label: LAB_0045c425
    JMP 0x0045c3f1                      ; 0045c427
        ;   XREF to: 0045c3f1 (UNCONDITIONAL_JUMP)  ; LAB_0045c3f1
    MOV EAX,0x3                         ; 0045c429
        ;   Label: caseD_1
    JMP 0x0045c3f1                      ; 0045c42e
        ;   XREF to: 0045c3f1 (UNCONDITIONAL_JUMP)  ; LAB_0045c3f1
    MOV ESI,dword ptr [EDI + 0x43c]     ; 0045c430
        ;   Label: LAB_0045c430
    CMP ESI,0xd                         ; 0045c436
    JA 0x0045c429                       ; 0045c439
        ;   XREF to: 0045c429 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [ESI*0x4 + 0x45bc44]  ; 0045c43b | caseD_c | caseD_b | caseD_d
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0045c442
        ;   Label: LAB_0045c442
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045c446
    CMP EAX,EDX                         ; 0045c44c
    JNZ 0x0045c4a1                      ; 0045c44e
        ;   XREF to: 0045c4a1 (CONDITIONAL_JUMP)  ; LAB_0045c4a1
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045c450
    TEST EAX,EAX                        ; 0045c456
    JZ 0x0045c49d                       ; 0045c458
        ;   XREF to: 0045c49d (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0045c45a
    CMP EAX,0xd                         ; 0045c460
    JA 0x0045c49d                       ; 0045c463
        ;   XREF to: 0045c49d (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x45bc7c]  ; 0045c465 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0045c46c
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x60],EAX      ; 0045c471
        ;   Label: LAB_0045c471
    JMP 0x0045be7f                      ; 0045c475
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,0xb                         ; 0045c47a
        ;   Label: caseD_1
    JMP 0x0045c471                      ; 0045c47f
        ;   XREF to: 0045c471 (UNCONDITIONAL_JUMP)  ; LAB_0045c471
    MOV EAX,0xe                         ; 0045c481
        ;   Label: caseD_a
    JMP 0x0045c471                      ; 0045c486
        ;   XREF to: 0045c471 (UNCONDITIONAL_JUMP)  ; LAB_0045c471
    MOV EAX,0xa                         ; 0045c488
        ;   Label: caseD_4
    JMP 0x0045c471                      ; 0045c48d
        ;   XREF to: 0045c471 (UNCONDITIONAL_JUMP)  ; LAB_0045c471
    MOV EAX,0x9                         ; 0045c48f
        ;   Label: caseD_2
    JMP 0x0045c471                      ; 0045c494
        ;   XREF to: 0045c471 (UNCONDITIONAL_JUMP)  ; LAB_0045c471
    MOV EAX,0x6                         ; 0045c496
        ;   Label: caseD_6
    JMP 0x0045c471                      ; 0045c49b
        ;   XREF to: 0045c471 (UNCONDITIONAL_JUMP)  ; LAB_0045c471
    XOR EAX,EAX                         ; 0045c49d
        ;   Label: caseD_3
    JMP 0x0045c471                      ; 0045c49f
        ;   XREF to: 0045c471 (UNCONDITIONAL_JUMP)  ; LAB_0045c471
    TEST EAX,EAX                        ; 0045c4a1
        ;   Label: LAB_0045c4a1
    JNZ 0x0045c4fc                      ; 0045c4a3
        ;   XREF to: 0045c4fc (CONDITIONAL_JUMP)  ; LAB_0045c4fc
    MOV ESI,EDX                         ; 0045c4a5
    TEST EDX,EDX                        ; 0045c4a7
    JNZ 0x0045c4ea                      ; 0045c4a9
        ;   XREF to: 0045c4ea (CONDITIONAL_JUMP)  ; LAB_0045c4ea
    MOV dword ptr [ESP + 0x60],EAX      ; 0045c4ab
        ;   Label: LAB_0045c4ab
    JMP 0x0045be7f                      ; 0045c4af
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,0x1                         ; 0045c4b4
        ;   Label: caseD_0
    JMP 0x0045c4ab                      ; 0045c4b9
        ;   XREF to: 0045c4ab (UNCONDITIONAL_JUMP)  ; LAB_0045c4ab
    MOV EDX,dword ptr [0x01d0557c]      ; 0045c4bb | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EDX                            ; 0045c4c1
    PUSH ESI                            ; 0045c4c2
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c4c3
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c4c8
    TEST EAX,EAX                        ; 0045c4cb
    JZ 0x0045c4df                       ; 0045c4cd
        ;   XREF to: 0045c4df (CONDITIONAL_JUMP)  ; LAB_0045c4df
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0045c4cf
    JZ 0x0045c4df                       ; 0045c4d6
        ;   XREF to: 0045c4df (CONDITIONAL_JUMP)  ; LAB_0045c4df
    MOV EAX,0x5                         ; 0045c4d8
    JMP 0x0045c4ab                      ; 0045c4dd
        ;   XREF to: 0045c4ab (UNCONDITIONAL_JUMP)  ; LAB_0045c4ab
    XOR EAX,EAX                         ; 0045c4df
        ;   Label: LAB_0045c4df
    JMP 0x0045c4ab                      ; 0045c4e1
        ;   XREF to: 0045c4ab (UNCONDITIONAL_JUMP)  ; LAB_0045c4ab
    MOV EAX,0x3                         ; 0045c4e3
        ;   Label: caseD_1
    JMP 0x0045c4ab                      ; 0045c4e8
        ;   XREF to: 0045c4ab (UNCONDITIONAL_JUMP)  ; LAB_0045c4ab
    MOV EAX,dword ptr [EDX + 0x43c]     ; 0045c4ea
        ;   Label: LAB_0045c4ea
    CMP EAX,0xd                         ; 0045c4f0
    JA 0x0045c4e3                       ; 0045c4f3
        ;   XREF to: 0045c4e3 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x45bcb4]  ; 0045c4f5 | caseD_c | caseD_b | caseD_d
        ;   Label: switchD
    JNZ 0x0045c53d                      ; 0045c4fc
        ;   XREF to: 0045c53d (CONDITIONAL_JUMP)  ; LAB_0045c53d
        ;   Label: LAB_0045c4fc
    MOV dword ptr [ESP + 0x60],EAX      ; 0045c4fe
        ;   Label: LAB_0045c4fe
    JMP 0x0045be7f                      ; 0045c502
        ;   XREF to: 0045be7f (UNCONDITIONAL_JUMP)  ; LAB_0045be7f
    MOV EAX,0x1                         ; 0045c507
        ;   Label: caseD_0
    JMP 0x0045c4fe                      ; 0045c50c
        ;   XREF to: 0045c4fe (UNCONDITIONAL_JUMP)  ; LAB_0045c4fe
    MOV ESI,dword ptr [0x01d0557c]      ; 0045c50e | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_6
    PUSH ESI                            ; 0045c514
    PUSH EAX                            ; 0045c515
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c516
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c51b
    TEST EAX,EAX                        ; 0045c51e
    JZ 0x0045c532                       ; 0045c520
        ;   XREF to: 0045c532 (CONDITIONAL_JUMP)  ; LAB_0045c532
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0045c522
    JZ 0x0045c532                       ; 0045c529
        ;   XREF to: 0045c532 (CONDITIONAL_JUMP)  ; LAB_0045c532
    MOV EAX,0x5                         ; 0045c52b
    JMP 0x0045c4fe                      ; 0045c530
        ;   XREF to: 0045c4fe (UNCONDITIONAL_JUMP)  ; LAB_0045c4fe
    XOR EAX,EAX                         ; 0045c532
        ;   Label: LAB_0045c532
    JMP 0x0045c4fe                      ; 0045c534
        ;   XREF to: 0045c4fe (UNCONDITIONAL_JUMP)  ; LAB_0045c4fe
    MOV EAX,0x3                         ; 0045c536
        ;   Label: caseD_1
    JMP 0x0045c4fe                      ; 0045c53b
        ;   XREF to: 0045c4fe (UNCONDITIONAL_JUMP)  ; LAB_0045c4fe
    MOV ESI,dword ptr [EAX + 0x43c]     ; 0045c53d
        ;   Label: LAB_0045c53d
    CMP ESI,0xd                         ; 0045c543
    JA 0x0045c536                       ; 0045c546
        ;   XREF to: 0045c536 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [ESI*0x4 + 0x45bcec]  ; 0045c548 | caseD_c | caseD_b | caseD_d
        ;   Label: switchD
    MOV ESI,dword ptr [0x01c225d8]      ; 0045c54f | g_CDynamiteClassInfo.name_hash
        ;   Label: caseD_c
    PUSH ESI                            ; 0045c555
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045c556
    PUSH EAX                            ; 0045c55c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c55d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ESI,EAX                         ; 0045c562
    ADD ESP,0x8                         ; 0045c564
    TEST EAX,EAX                        ; 0045c567
    JZ 0x0045bf78                       ; 0045c569
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EAX                            ; 0045c56f
    CALL core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0 ; 0045c570
        ;   XREF to: 0047a1a0 (UNCONDITIONAL_CALL)  ; int core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0045c575
    TEST EAX,EAX                        ; 0045c578
    JNZ 0x0045bf78                      ; 0045c57a
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,0xb                         ; 0045c580
    MOV EDX,EAX                         ; 0045c585
    MOV ECX,dword ptr [EDI + 0x64]      ; 0045c587
    SAR EDX,0x1f                        ; 0045c58a
    IDIV ECX                            ; 0045c58d
    MOV dword ptr [ESP + 0x64],EAX      ; 0045c58f
    FILD dword ptr [ESP + 0x64]         ; 0045c593
    FCOMP float ptr [EBX + 0x2d08]      ; 0045c597
    FNSTSW AX                           ; 0045c59d
    SAHF                                ; 0045c59f
    JA 0x0045bf78                       ; 0045c5a0
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH ESI                            ; 0045c5a6
    CALL core_dynamite.cpp_CDynamite_lightFuse_FUN_0047a150 ; 0045c5a7
        ;   XREF to: 0047a150 (UNCONDITIONAL_CALL)  ; void core_dynamite.cpp_CDynamite_lightFuse_FUN_0047a150(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0045c5ac
    JMP 0x0045bf78                      ; 0045c5af
        ;   XREF to: 0045bf78 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x256a4],0x3   ; 0045c5b4
        ;   Label: caseD_d
    JNZ 0x0045c6bb                      ; 0045c5bb
        ;   XREF to: 0045c6bb (CONDITIONAL_JUMP)  ; LAB_0045c6bb
    MOV EAX,0xb                         ; 0045c5c1
    MOV EDX,EAX                         ; 0045c5c6
    MOV ECX,dword ptr [EDI + 0x64]      ; 0045c5c8
    SAR EDX,0x1f                        ; 0045c5cb
    IDIV ECX                            ; 0045c5ce
    MOV dword ptr [ESP + 0x64],EAX      ; 0045c5d0
    FILD dword ptr [ESP + 0x64]         ; 0045c5d4
    FCOMP float ptr [EBX + 0x2d08]      ; 0045c5d8
    FNSTSW AX                           ; 0045c5de
    SAHF                                ; 0045c5e0
    JA 0x0045c6bb                       ; 0045c5e1
        ;   XREF to: 0045c6bb (CONDITIONAL_JUMP)  ; LAB_0045c6bb
    PUSH EBX                            ; 0045c5e7
    LEA ESI,[ESP + 0x4]                 ; 0045c5e8
    LEA EDI,[ESP + 0x1c]                ; 0045c5ec
    CALL core_doc.cpp_FUN_0045bba0      ; 0045c5f0
        ;   XREF to: 0045bba0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0045bba0()
    LEA ESI,[ESP + 0x4]                 ; 0045c5f5
    ADD ESP,0x4                         ; 0045c5f9
    MOVSD ES:EDI,ESI                    ; 0045c5fc
    MOVSD ES:EDI,ESI                    ; 0045c5fd
    MOVSD ES:EDI,ESI                    ; 0045c5fe
    MOV ESI,dword ptr [0x01c225d8]      ; 0045c5ff | g_CDynamiteClassInfo.name_hash
    PUSH ESI                            ; 0045c605
    MOV EDI,dword ptr [EBX + 0x25698]   ; 0045c606
    PUSH EDI                            ; 0045c60c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c60d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x54],EAX      ; 0045c612
    ADD ESP,0x8                         ; 0045c616
    MOV dword ptr [ESP + 0x40],EAX      ; 0045c619
    TEST EAX,EAX                        ; 0045c61d
    JZ 0x0045c686                       ; 0045c61f
        ;   XREF to: 0045c686 (CONDITIONAL_JUMP)  ; LAB_0045c686
    LEA EAX,[ESP + 0x18]                ; 0045c621
    PUSH EAX                            ; 0045c625
    PUSH EBX                            ; 0045c626
    LEA ESI,[ESP + 0x2c]                ; 0045c627
    LEA EDI,[ESP + 0x14]                ; 0045c62b
    CALL core_actor.cpp_FUN_00408cf0    ; 0045c62f
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x2c]                ; 0045c634
    ADD ESP,0x8                         ; 0045c638
    MOVSD ES:EDI,ESI                    ; 0045c63b
    MOVSD ES:EDI,ESI                    ; 0045c63c
    MOVSD ES:EDI,ESI                    ; 0045c63d
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0045c63e
    LEA EAX,[ESP + 0xc]                 ; 0045c642
    ADD ESI,0x6d8                       ; 0045c646
    CMP ESI,EAX                         ; 0045c64c
    JZ 0x0045c664                       ; 0045c64e
        ;   XREF to: 0045c664 (CONDITIONAL_JUMP)  ; LAB_0045c664
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045c650
    MOV dword ptr [ESI],EAX             ; 0045c654
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045c656
    MOV dword ptr [ESI + 0x4],EAX       ; 0045c65a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045c65d
    MOV dword ptr [ESI + 0x8],EAX       ; 0045c661
    MOV EDX,dword ptr [ESP + 0x40]      ; 0045c664
        ;   Label: LAB_0045c664
    MOV EAX,dword ptr [ESP + 0x40]      ; 0045c668
    PUSH EDX                            ; 0045c66c
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0045c66d
    CALL dword ptr [EAX + 0xec]         ; 0045c673
    ADD ESP,0x4                         ; 0045c679
    MOV dword ptr [EBX + 0x25698],0x0   ; 0045c67c
    CMP dword ptr [EBX + 0x2698],0x0    ; 0045c686
        ;   Label: LAB_0045c686
    JZ 0x0045c6a6                       ; 0045c68d
        ;   XREF to: 0045c6a6 (CONDITIONAL_JUMP)  ; LAB_0045c6a6
    LEA EAX,[ESP + 0x18]                ; 0045c68f
    PUSH EAX                            ; 0045c693
    PUSH 0x1                            ; 0045c694
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0045c696
    PUSH EBX                            ; 0045c69c
    CALL dword ptr [ESI + 0x130]        ; 0045c69d
    ADD ESP,0xc                         ; 0045c6a3
    MOV dword ptr [EBX + 0x256a4],0x0   ; 0045c6a6
        ;   Label: LAB_0045c6a6
    MOV EAX,[0x005f5134]                ; 0045c6b0 | DAT_005f5134
    MOV dword ptr [EBX + 0x25650],EAX   ; 0045c6b5
    FLD float ptr [EBX + 0x2d08]        ; 0045c6bb
        ;   Label: LAB_0045c6bb
    FLD1                                ; 0045c6c1
    FCOMPP                              ; 0045c6c3
    FNSTSW AX                           ; 0045c6c5
    SAHF                                ; 0045c6c7
    JA 0x0045bf78                       ; 0045c6c8
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0x2d04],0x0    ; 0045c6ce
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0045c6d8
    JMP 0x0045bf78                      ; 0045c6e2
        ;   XREF to: 0045bf78 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x50],0x3f333333 ; 0045c6e7
        ;   Label: caseD_7
    JGE 0x0045c719                      ; 0045c6ef
        ;   XREF to: 0045c719 (CONDITIONAL_JUMP)  ; LAB_0045c719
    CMP dword ptr [EBX + 0x2d08],0x3f333333 ; 0045c6f1
    JL 0x0045c719                       ; 0045c6fb
        ;   XREF to: 0045c719 (CONDITIONAL_JUMP)  ; LAB_0045c719
    MOV EDI,dword ptr [EBX + 0x25698]   ; 0045c6fd
    TEST EDI,EDI                        ; 0045c703
    JZ 0x0045c719                       ; 0045c705
        ;   XREF to: 0045c719 (CONDITIONAL_JUMP)  ; LAB_0045c719
    PUSH 0x2                            ; 0045c707
    MOV ESI,dword ptr [EDI + 0x2b0]     ; 0045c709
    PUSH EDI                            ; 0045c70f
    CALL dword ptr [ESI + 0x80]         ; 0045c710
    ADD ESP,0x8                         ; 0045c716
    CMP dword ptr [ESP + 0x50],0x3e99999a ; 0045c719
        ;   Label: LAB_0045c719
    JGE 0x0045bf78                      ; 0045c721
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2d08],0x3e99999a ; 0045c727
    JL 0x0045bf78                       ; 0045c731
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    MOV ESI,dword ptr [ESP + 0x38]      ; 0045c737
    PUSH ESI                            ; 0045c73b
    PUSH 0x5d0617                       ; 0045c73c | = "axeswing0?.wav"
    PUSH EBX                            ; 0045c741
    MOV EDI,dword ptr [0x0061c068]      ; 0045c742 | DAT_0061c068
    PUSH EDI                            ; 0045c748
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0045c749
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0045c74e
    JMP 0x0045bf78                      ; 0045c751
        ;   XREF to: 0045bf78 (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x50],0x3e99999a ; 0045c756
        ;   Label: caseD_8
    JGE 0x0045bf78                      ; 0045c75e
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2d08],0x3e99999a ; 0045c764
    JL 0x0045bf78                       ; 0045c76e
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,[0x02668734]                ; 0045c774 | g_CCrossClassInfo.name_hash
    PUSH EAX                            ; 0045c779
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0045c77a
    PUSH EDX                            ; 0045c780
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c781
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c786
    TEST EAX,EAX                        ; 0045c789
    JZ 0x0045bf78                       ; 0045c78b
        ;   XREF to: 0045bf78 (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EAX                            ; 0045c791
    CALL core_cross.cpp_FUN_005a6cf0    ; 0045c792
        ;   XREF to: 005a6cf0 (UNCONDITIONAL_CALL)  ; undefined core_cross.cpp_FUN_005a6cf0()
    ADD ESP,0x4                         ; 0045c797
    JMP 0x0045bf78                      ; 0045c79a
        ;   XREF to: 0045bf78 (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,0x1                         ; 0045c79f
        ;   Label: caseD_0
    JMP 0x0045bf9f                      ; 0045c7a4
        ;   XREF to: 0045bf9f (UNCONDITIONAL_JUMP)  ; LAB_0045bf9f
    MOV EDI,dword ptr [0x01d0557c]      ; 0045c7a9 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EDI                            ; 0045c7af
    PUSH EAX                            ; 0045c7b0
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c7b1
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c7b6
    TEST EAX,EAX                        ; 0045c7b9
    JZ 0x0045c7d0                       ; 0045c7bb
        ;   XREF to: 0045c7d0 (CONDITIONAL_JUMP)  ; LAB_0045c7d0
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0045c7bd
    JZ 0x0045c7d0                       ; 0045c7c4
        ;   XREF to: 0045c7d0 (CONDITIONAL_JUMP)  ; LAB_0045c7d0
    MOV EAX,0x5                         ; 0045c7c6
    JMP 0x0045bf9f                      ; 0045c7cb
        ;   XREF to: 0045bf9f (UNCONDITIONAL_JUMP)  ; LAB_0045bf9f
    XOR EAX,EAX                         ; 0045c7d0
        ;   Label: LAB_0045c7d0
    JMP 0x0045bf9f                      ; 0045c7d2
        ;   XREF to: 0045bf9f (UNCONDITIONAL_JUMP)  ; LAB_0045bf9f
    MOV EAX,0x3                         ; 0045c7d7
        ;   Label: caseD_1
    JMP 0x0045bf9f                      ; 0045c7dc
        ;   XREF to: 0045bf9f (UNCONDITIONAL_JUMP)  ; LAB_0045bf9f
    MOV ESI,dword ptr [EAX + 0x43c]     ; 0045c7e1
        ;   Label: LAB_0045c7e1
    CMP ESI,0xd                         ; 0045c7e7
    JA 0x0045c7d7                       ; 0045c7ea
        ;   XREF to: 0045c7d7 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [ESI*0x4 + 0x45bd4c]  ; 0045c7ec | caseD_c | caseD_b | caseD_d
        ;   Label: switchD
    MOV EAX,0x1                         ; 0045c7f3
        ;   Label: caseD_0
    JMP 0x0045bfde                      ; 0045c7f8
        ;   XREF to: 0045bfde (UNCONDITIONAL_JUMP)  ; LAB_0045bfde
    MOV EAX,[0x01d0557c]                ; 0045c7fd | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EAX                            ; 0045c802
    PUSH ESI                            ; 0045c803
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045c804
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045c809
    TEST EAX,EAX                        ; 0045c80c
    JZ 0x0045bfdc                       ; 0045c80e
        ;   XREF to: 0045bfdc (CONDITIONAL_JUMP)  ; LAB_0045bfdc
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0045c814
    JZ 0x0045bfdc                       ; 0045c81b
        ;   XREF to: 0045bfdc (CONDITIONAL_JUMP)  ; LAB_0045bfdc
    MOV EAX,0x5                         ; 0045c821
    JMP 0x0045bfde                      ; 0045c826
        ;   XREF to: 0045bfde (UNCONDITIONAL_JUMP)  ; LAB_0045bfde
    MOV EAX,0x3                         ; 0045c82b
        ;   Label: caseD_1
    JMP 0x0045bfde                      ; 0045c830
        ;   XREF to: 0045bfde (UNCONDITIONAL_JUMP)  ; LAB_0045bfde
    MOV EAX,dword ptr [ESI + 0x43c]     ; 0045c835
        ;   Label: LAB_0045c835
    CMP EAX,0xd                         ; 0045c83b
    JA 0x0045c82b                       ; 0045c83e
        ;   XREF to: 0045c82b (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x45bd84]  ; 0045c840 | caseD_c | caseD_b | caseD_d
        ;   Label: switchD
    CMP ECX,0x5                         ; 0045c847
        ;   Label: LAB_0045c847
    JZ 0x0045c8be                       ; 0045c84a
        ;   XREF to: 0045c8be (CONDITIONAL_JUMP)  ; LAB_0045c8be
    CMP ECX,0x6                         ; 0045c84c
    JNZ 0x0045c040                      ; 0045c84f
        ;   XREF to: 0045c040 (CONDITIONAL_JUMP)  ; LAB_0045c040
    PUSH 0x0                            ; 0045c855
    PUSH EDX                            ; 0045c857
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0045c858
    PUSH EDX                            ; 0045c85c
    CALL core_inv.cpp_FUN_004db8e0      ; 0045c85d
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db8e0()
    ADD ESP,0xc                         ; 0045c862
    MOV ECX,dword ptr [EBX + 0x2561c]   ; 0045c865
    PUSH ECX                            ; 0045c86b
    MOV ESI,dword ptr [0x00618170]      ; 0045c86c | DAT_00618170
    PUSH ESI                            ; 0045c872 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 0045c873
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045c878
    PUSH 0x0                            ; 0045c87b
    MOV EDI,dword ptr [EBX + 0x2561c]   ; 0045c87d
    PUSH 0x0                            ; 0045c883
    PUSH EDI                            ; 0045c885
    PUSH 0x1                            ; 0045c886
    PUSH EBX                            ; 0045c888
    CALL core_charactr.cpp_FUN_00428b10 ; 0045c889
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428b10()
    MOV dword ptr [EBX + 0x25698],0x0   ; 0045c88e
    MOV dword ptr [EBX + 0x25640],0x0   ; 0045c898
    MOV dword ptr [EBX + 0x2d04],0x2    ; 0045c8a2
    ADD ESP,0x14                        ; 0045c8ac
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0045c8af
    JMP 0x0045c040                      ; 0045c8b9
        ;   XREF to: 0045c040 (UNCONDITIONAL_JUMP)  ; LAB_0045c040
    PUSH 0x0                            ; 0045c8be
        ;   Label: LAB_0045c8be
    PUSH EDX                            ; 0045c8c0
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0045c8c1
    PUSH EDX                            ; 0045c8c5
    CALL core_inv.cpp_FUN_004db8e0      ; 0045c8c6
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db8e0()
    ADD ESP,0xc                         ; 0045c8cb
    MOV ECX,dword ptr [EBX + 0x2561c]   ; 0045c8ce
    PUSH ECX                            ; 0045c8d4
    MOV ESI,dword ptr [0x00618170]      ; 0045c8d5 | DAT_00618170
    PUSH ESI                            ; 0045c8db | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 0045c8dc
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045c8e1
    PUSH 0x0                            ; 0045c8e4
    MOV EDI,dword ptr [EBX + 0x2561c]   ; 0045c8e6
    PUSH 0x0                            ; 0045c8ec
    PUSH EDI                            ; 0045c8ee
    PUSH 0x1                            ; 0045c8ef
    PUSH EBX                            ; 0045c8f1
    CALL core_charactr.cpp_FUN_00428b10 ; 0045c8f2
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428b10()
    ADD ESP,0x14                        ; 0045c8f7
    JMP 0x0045c040                      ; 0045c8fa
        ;   XREF to: 0045c040 (UNCONDITIONAL_JUMP)  ; LAB_0045c040
    MOV dword ptr [EBX + 0x255e8],0x2   ; 0045c8ff
        ;   Label: LAB_0045c8ff
    JMP 0x0045c091                      ; 0045c909
        ;   XREF to: 0045c091 (UNCONDITIONAL_JUMP)  ; LAB_0045c091
    CMP EDX,0x3                         ; 0045c90e
        ;   Label: LAB_0045c90e
    JNZ 0x0045c091                      ; 0045c911
        ;   XREF to: 0045c091 (CONDITIONAL_JUMP)  ; LAB_0045c091
    CMP dword ptr [EBX + 0x255e8],0x2   ; 0045c917
    JGE 0x0045c091                      ; 0045c91e
        ;   XREF to: 0045c091 (CONDITIONAL_JUMP)  ; LAB_0045c091
    MOV EDI,dword ptr [ESP + 0x54]      ; 0045c924
    PUSH EDI                            ; 0045c928
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0 ; 0045c929
        ;   XREF to: 004dccb0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004dccb0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0045c92e
    TEST EAX,EAX                        ; 0045c931
    JNZ 0x0045c087                      ; 0045c933
        ;   XREF to: 0045c087 (CONDITIONAL_JUMP)  ; LAB_0045c087
    MOV dword ptr [EBX + 0x255e8],EAX   ; 0045c939
    JMP 0x0045c091                      ; 0045c93f
        ;   XREF to: 0045c091 (UNCONDITIONAL_JUMP)  ; LAB_0045c091
    MOV dword ptr [EBX + 0x2d04],0x2    ; 0045c944
        ;   Label: LAB_0045c944
    MOV dword ptr [EBX + 0x2d08],ECX    ; 0045c94e
    JMP 0x0045c105                      ; 0045c954
        ;   XREF to: 0045c105 (UNCONDITIONAL_JUMP)  ; LAB_0045c105

