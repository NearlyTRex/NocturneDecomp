; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirbear_cpp_FUN_0059aba0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CPryeMorph_005d9b21
;   TerminatedCString s_bwp3_prye_morph_dfm_005d9b2c
;   TerminatedCString s_prye_morph_005d9b40
;   undefined4 s_rye_morph_005d9b40+1
;   undefined4 s_ye_morph_005d9b40+2
;   undefined4 s_e_morph_005d9b40+3
;   TerminatedCString s_stand_005d9b4b
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_cloth.cpp_CClothList_load_FUN_0043f920
;   core_cloth.cpp_CClothList_process_FUN_0043fc00
;   core_cloth.cpp_CClothList_setup_FUN_0043fbc0
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
;   core_morph.cpp_CMorph_getReady_FUN_004fac10
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_motion.cpp_FUN_004fb9c0
;   core_motion.cpp_FUN_004fc310
;   core_npc.cpp_FUN_00509020
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_FUN_0054c110
;   core_skeleton.cpp_FUN_0054dd10
;   core_skeleton.cpp_FUN_0054e6b0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059aba0
        ;   Label: core_spirbear.cpp_FUN_0059aba0
    PUSH ESI                            ; 0059aba1
    PUSH EBP                            ; 0059aba2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059aba3
    PUSH EBX                            ; 0059aba7
    CALL core_npc.cpp_FUN_00509020      ; 0059aba8
        ;   XREF to: 00509020 (UNCONDITIONAL_CALL)  ; undefined core_npc.cpp_FUN_00509020()
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0059abad
    ADD ESP,0x4                         ; 0059abb3
    TEST EDX,EDX                        ; 0059abb6
    JZ 0x0059abc4                       ; 0059abb8
        ;   XREF to: 0059abc4 (CONDITIONAL_JUMP)  ; LAB_0059abc4
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059abba
    PUSH EDI                            ; 0059abc4
        ;   Label: LAB_0059abc4
    PUSH 0x5d9b21                       ; 0059abc5 | = "CPryeMorph"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0059abca
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c4f0()
    ADD ESP,0x4                         ; 0059abcf
    PUSH 0x5d9b2c                       ; 0059abd2 | = "bwp3_prye_morph.dfm"
    MOV dword ptr [EBX + 0x34170],EAX   ; 0059abd7
    ADD EAX,0x158                       ; 0059abdd
    PUSH EAX                            ; 0059abe2
    CALL core_skeleton.cpp_FUN_0054eae0 ; 0059abe3
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059abe8
    ADD ESP,0x8                         ; 0059abee
    ADD EAX,0x158                       ; 0059abf1
    PUSH EAX                            ; 0059abf6
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 0059abf7
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059abfc
    LEA EBP,[EBX + 0x33fa4]             ; 0059abff
    PUSH EBP                            ; 0059ac05
    CALL core_cloth.cpp_CClothList_load_FUN_0043f920 ; 0059ac06
        ;   XREF to: 0043f920 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_load_FUN_0043f920(CClothList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059ac0b
    ADD ESP,0x4                         ; 0059ac11
    ADD EAX,0x158                       ; 0059ac14
    PUSH EAX                            ; 0059ac19
    LEA ESI,[EBX + 0x30]                ; 0059ac1a
    PUSH ESI                            ; 0059ac1d
    LEA EDI,[EBX + 0x20]                ; 0059ac1e
    PUSH EDI                            ; 0059ac21
    PUSH EBP                            ; 0059ac22
    CALL core_cloth.cpp_CClothList_setup_FUN_0043fbc0 ; 0059ac23
        ;   XREF to: 0043fbc0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_setup_FUN_0043fbc0(CClothList * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059ac28
    ADD ESP,0x10                        ; 0059ac2e
    ADD EAX,0x158                       ; 0059ac31
    PUSH EAX                            ; 0059ac36
    PUSH dword ptr [EBX + 0x2504]       ; 0059ac37
    PUSH 0x3d4ccccd                     ; 0059ac3d
    PUSH ESI                            ; 0059ac42
    PUSH EDI                            ; 0059ac43
    LEA EAX,[EBX + 0x2f08]              ; 0059ac44
    PUSH EAX                            ; 0059ac4a
    CALL core_cloth.cpp_CClothList_process_FUN_0043fc00 ; 0059ac4b
        ;   XREF to: 0043fc00 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_0043fc00(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    MOV ECX,dword ptr [EBX + 0x27a8]    ; 0059ac50
    ADD ESP,0x18                        ; 0059ac56
    TEST ECX,ECX                        ; 0059ac59
    JZ 0x0059ac67                       ; 0059ac5b
        ;   XREF to: 0059ac67 (CONDITIONAL_JUMP)  ; LAB_0059ac67
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059ac5d
    MOV ESI,0x5d9b40                    ; 0059ac67 | = "prye_morph"
        ;   Label: LAB_0059ac67
    MOV EDI,dword ptr [EBX + 0x34170]   ; 0059ac6c
    PUSH EDI                            ; 0059ac72
    MOV AL,byte ptr [ESI]               ; 0059ac73 | = "prye_morph" | s_ye_morph_005d9b40+2
        ;   Label: LAB_0059ac73
    MOV byte ptr [EDI],AL               ; 0059ac75
    CMP AL,0x0                          ; 0059ac77
    JZ 0x0059ac8b                       ; 0059ac79
        ;   XREF to: 0059ac8b (CONDITIONAL_JUMP)  ; LAB_0059ac8b
    MOV AL,byte ptr [ESI + 0x1]         ; 0059ac7b | s_rye_morph_005d9b40+1 | s_e_morph_005d9b40+3
    ADD ESI,0x2                         ; 0059ac7e
    MOV byte ptr [EDI + 0x1],AL         ; 0059ac81
    ADD EDI,0x2                         ; 0059ac84
    CMP AL,0x0                          ; 0059ac87
    JNZ 0x0059ac73                      ; 0059ac89
        ;   XREF to: 0059ac73 (CONDITIONAL_JUMP)  ; LAB_0059ac73
    POP EDI                             ; 0059ac8b
        ;   Label: LAB_0059ac8b
    LEA ESI,[EBX + 0x20]                ; 0059ac8c
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059ac8f
    MOV EDX,dword ptr [ESI]             ; 0059ac95
    MOV dword ptr [EAX + 0x20],EDX      ; 0059ac97
    MOV EDX,dword ptr [ESI + 0x4]       ; 0059ac9a
    MOV dword ptr [EAX + 0x24],EDX      ; 0059ac9d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059aca0
    MOV dword ptr [EAX + 0x28],EDX      ; 0059aca3
    MOV ESI,dword ptr [ESI + 0xc]       ; 0059aca6
    MOV dword ptr [EAX + 0x2c],ESI      ; 0059aca9
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059acac
    LEA ESI,[EBX + 0x30]                ; 0059acb2
    ADD EAX,0x30                        ; 0059acb5
    CMP EAX,ESI                         ; 0059acb8
    JZ 0x0059accc                       ; 0059acba
        ;   XREF to: 0059accc (CONDITIONAL_JUMP)  ; LAB_0059accc
    MOV EDX,dword ptr [ESI]             ; 0059acbc
    MOV dword ptr [EAX],EDX             ; 0059acbe
    MOV EDX,dword ptr [ESI + 0x4]       ; 0059acc0
    MOV dword ptr [EAX + 0x4],EDX       ; 0059acc3
    MOV EDX,dword ptr [ESI + 0x8]       ; 0059acc6
    MOV dword ptr [EAX + 0x8],EDX       ; 0059acc9
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059accc
        ;   Label: LAB_0059accc
    MOV dword ptr [EAX + 0x27b8],0x3f800000 ; 0059acd2
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059acdc
    PUSH EAX                            ; 0059ace2
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059ace3
    CALL dword ptr [ESI]                ; 0059ace9
    ADD ESP,0x4                         ; 0059aceb
    PUSH 0x1                            ; 0059acee
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059acf0
    PUSH 0x5d9b4b                       ; 0059acf6 | = "stand"
    ADD EAX,0x158                       ; 0059acfb
    PUSH EAX                            ; 0059ad00
    CALL core_motion.cpp_FUN_004fc310   ; 0059ad01
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059ad06
    PUSH EAX                            ; 0059ad09
    CALL core_motion.cpp_FUN_004fb9c0   ; 0059ad0a
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059ad0f
    PUSH 0x0                            ; 0059ad12
    PUSH EAX                            ; 0059ad14
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059ad15
    ADD EAX,0x158                       ; 0059ad1b
    PUSH EAX                            ; 0059ad20
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 0059ad21
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059ad26
    ADD ESP,0xc                         ; 0059ad2c
    ADD EAX,0x158                       ; 0059ad2f
    PUSH EAX                            ; 0059ad34
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059ad35
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059ad3a
    ADD ESP,0x4                         ; 0059ad40
    ADD EAX,0x158                       ; 0059ad43
    PUSH EAX                            ; 0059ad48
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0059ad49
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059ad4e
    LEA ESI,[EBX + 0x158]               ; 0059ad51
    PUSH ESI                            ; 0059ad57
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0059ad58
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059ad5d
    PUSH ESI                            ; 0059ad60
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0059ad61
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059ad66
    PUSH ESI                            ; 0059ad69
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 0059ad6a
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059ad6f
    PUSH 0x0                            ; 0059ad72
    MOV EDI,dword ptr [EBX + 0x34138]   ; 0059ad74
    PUSH EDI                            ; 0059ad7a
    PUSH 0x1                            ; 0059ad7b
    LEA EDI,[EBX + 0x34174]             ; 0059ad7d
    PUSH EDI                            ; 0059ad83
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10 ; 0059ad84
        ;   XREF to: 004fab10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 0059ad89
    PUSH ESI                            ; 0059ad8c
    PUSH 0x0                            ; 0059ad8d
    PUSH EDI                            ; 0059ad8f
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059ad90
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059ad95
    ADD ESP,0xc                         ; 0059ad9b
    ADD EAX,0x158                       ; 0059ad9e
    PUSH EAX                            ; 0059ada3
    PUSH 0x1                            ; 0059ada4
    PUSH EDI                            ; 0059ada6
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0 ; 0059ada7
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0059adac
    PUSH EDI                            ; 0059adaf
    CALL core_morph.cpp_CMorph_getReady_FUN_004fac10 ; 0059adb0
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004fac10(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0059adb5
    POP EDI                             ; 0059adb8
    PUSH ESI                            ; 0059adb9
    MOV dword ptr [EBX + 0x34da0],0x0   ; 0059adba
    CALL core_skeleton.cpp_FUN_0054c110 ; 0059adc4
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059adc9
    ADD ESP,0x4                         ; 0059adcf
    ADD EAX,0x158                       ; 0059add2
    PUSH EAX                            ; 0059add7
    CALL core_skeleton.cpp_FUN_0054c110 ; 0059add8
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054c110(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059addd
    ADD ESP,0x4                         ; 0059ade7
    MOV dword ptr [EBX + 0xf8],0x0      ; 0059adea
    POP EBP                             ; 0059adf4
    POP ESI                             ; 0059adf5
    POP EBX                             ; 0059adf6
    RET                                 ; 0059adf7

