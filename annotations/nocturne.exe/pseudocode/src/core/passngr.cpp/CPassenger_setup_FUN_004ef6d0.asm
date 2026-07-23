; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_CPassenger_setup_FUN_004ef6d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CWerewolf_0058cbfc
;   TerminatedCString s_transform_0058cc06
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_morph.cpp_CMorph_getReady_FUN_004e03c0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
;   FUN_004ee9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef6d0
        ;   Label: core_passngr.cpp_CPassenger_setup_FUN_004ef6d0
    PUSH ESI                            ; 004ef6d1
    PUSH EDI                            ; 004ef6d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ef6d3
    PUSH EBX                            ; 004ef6d7
    CALL FUN_004ee9e0                   ; 004ef6d8
        ;   XREF to: 004ee9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee9e0()
    MOV EDX,dword ptr [EBX + 0x1f678]   ; 004ef6dd
    ADD ESP,0x4                         ; 004ef6e3
    TEST EDX,EDX                        ; 004ef6e6
    JZ 0x004ef794                       ; 004ef6e8
        ;   XREF to: 004ef794 (CONDITIONAL_JUMP)  ; LAB_004ef794
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef6ee
        ;   Label: LAB_004ef6ee
    ADD EAX,0x150                       ; 004ef6f4
    PUSH EAX                            ; 004ef6f9
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 004ef6fa
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800()
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef6ff
    ADD ESP,0x4                         ; 004ef705
    ADD EAX,0x150                       ; 004ef708
    PUSH EAX                            ; 004ef70d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 004ef70e
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0()
    ADD ESP,0x4                         ; 004ef713
    LEA ESI,[EBX + 0x150]               ; 004ef716
    PUSH ESI                            ; 004ef71c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 004ef71d
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800()
    ADD ESP,0x4                         ; 004ef722
    PUSH ESI                            ; 004ef725
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 004ef726
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0()
    ADD ESP,0x4                         ; 004ef72b
    PUSH ESI                            ; 004ef72e
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004ef72f
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 004ef734
    PUSH ESI                            ; 004ef737
    PUSH 0x0                            ; 004ef738
    LEA EDI,[EBX + 0x1f67c]             ; 004ef73a
    PUSH EDI                            ; 004ef740
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004ef741
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170()
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef746
    ADD ESP,0xc                         ; 004ef74c
    ADD EAX,0x150                       ; 004ef74f
    PUSH EAX                            ; 004ef754
    PUSH 0x1                            ; 004ef755
    PUSH EDI                            ; 004ef757
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004ef758
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170()
    ADD ESP,0xc                         ; 004ef75d
    PUSH EDI                            ; 004ef760
    CALL core_morph.cpp_CMorph_getReady_FUN_004e03c0 ; 004ef761
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_getReady_FUN_004e03c0()
    ADD ESP,0x4                         ; 004ef766
    PUSH ESI                            ; 004ef769
    MOV dword ptr [EBX + 0x202a8],0x0   ; 004ef76a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 004ef774
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef779
    ADD ESP,0x4                         ; 004ef77f
    ADD EAX,0x150                       ; 004ef782
    PUSH EAX                            ; 004ef787
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 004ef788
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 004ef78d
    POP EDI                             ; 004ef790
    POP ESI                             ; 004ef791
    POP EBX                             ; 004ef792
    RET                                 ; 004ef793
    PUSH 0x58cbfc                       ; 004ef794 | = "CWerewolf"
        ;   Label: LAB_004ef794
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004ef799
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040d540()
    LEA ESI,[EBX + 0x1f5f4]             ; 004ef79e
    ADD ESP,0x4                         ; 004ef7a4
    MOV EDI,EAX                         ; 004ef7a7
    MOV dword ptr [EBX + 0x1f678],EAX   ; 004ef7a9
    PUSH EDI                            ; 004ef7af
    MOV AL,byte ptr [ESI]               ; 004ef7b0
        ;   Label: LAB_004ef7b0
    MOV byte ptr [EDI],AL               ; 004ef7b2
    CMP AL,0x0                          ; 004ef7b4
    JZ 0x004ef7c8                       ; 004ef7b6
        ;   XREF to: 004ef7c8 (CONDITIONAL_JUMP)  ; LAB_004ef7c8
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef7b8
    ADD ESI,0x2                         ; 004ef7bb
    MOV byte ptr [EDI + 0x1],AL         ; 004ef7be
    ADD EDI,0x2                         ; 004ef7c1
    CMP AL,0x0                          ; 004ef7c4
    JNZ 0x004ef7b0                      ; 004ef7c6
        ;   XREF to: 004ef7b0 (CONDITIONAL_JUMP)  ; LAB_004ef7b0
    POP EDI                             ; 004ef7c8
        ;   Label: LAB_004ef7c8
    LEA ESI,[EBX + 0x20]                ; 004ef7c9
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef7cc
    MOV EDX,dword ptr [ESI]             ; 004ef7d2
    MOV dword ptr [EAX + 0x20],EDX      ; 004ef7d4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004ef7d7
    MOV dword ptr [EAX + 0x24],EDX      ; 004ef7da
    MOV EDX,dword ptr [ESI + 0x8]       ; 004ef7dd
    MOV dword ptr [EAX + 0x28],EDX      ; 004ef7e0
    MOV ESI,dword ptr [ESI + 0xc]       ; 004ef7e3
    MOV dword ptr [EAX + 0x2c],ESI      ; 004ef7e6
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef7e9
    LEA ESI,[EBX + 0x30]                ; 004ef7ef
    ADD EAX,0x30                        ; 004ef7f2
    CMP EAX,ESI                         ; 004ef7f5
    JZ 0x004ef809                       ; 004ef7f7
        ;   XREF to: 004ef809 (CONDITIONAL_JUMP)  ; LAB_004ef809
    MOV EDX,dword ptr [ESI]             ; 004ef7f9
    MOV dword ptr [EAX],EDX             ; 004ef7fb
    MOV EDX,dword ptr [ESI + 0x4]       ; 004ef7fd
    MOV dword ptr [EAX + 0x4],EDX       ; 004ef800
    MOV EDX,dword ptr [ESI + 0x8]       ; 004ef803
    MOV dword ptr [EAX + 0x8],EDX       ; 004ef806
    LEA EAX,[EBX + 0x1f5d4]             ; 004ef809
        ;   Label: LAB_004ef809
    PUSH EAX                            ; 004ef80f
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef810
    ADD EAX,0x150                       ; 004ef816
    PUSH EAX                            ; 004ef81b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004ef81c
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef821
    FLD float ptr [EBX + 0x202ac]       ; 004ef827
    ADD ESP,0x8                         ; 004ef82d
    FSTP float ptr [EAX + 0x2614]       ; 004ef830
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef836
    PUSH EAX                            ; 004ef83c
    MOV ESI,dword ptr [EAX + 0x14c]     ; 004ef83d
    CALL dword ptr [ESI]                ; 004ef843
    ADD ESP,0x4                         ; 004ef845
    PUSH 0x1                            ; 004ef848
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef84a
    PUSH 0x58cc06                       ; 004ef850 | = "transform"
    ADD EAX,0x150                       ; 004ef855
    PUSH EAX                            ; 004ef85a
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004ef85b
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 004ef860
    PUSH EAX                            ; 004ef863
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004ef864
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010()
    ADD ESP,0xc                         ; 004ef869
    PUSH 0x0                            ; 004ef86c
    PUSH EAX                            ; 004ef86e
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004ef86f
    ADD EAX,0x150                       ; 004ef875
    PUSH EAX                            ; 004ef87a
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990 ; 004ef87b
        ;   XREF to: 004e1990 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990()
    ADD ESP,0xc                         ; 004ef880
    JMP 0x004ef6ee                      ; 004ef883
        ;   XREF to: 004ef6ee (UNCONDITIONAL_JUMP)  ; LAB_004ef6ee

