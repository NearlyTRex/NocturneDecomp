; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_passngr_cpp_FUN_00545d30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWerewolf_0063e7c4
;   TerminatedCString s_transform_0063e7ce
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_morph.cpp_FUN_0052b430
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_npc.cpp_CNPC_FUN_00544870
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545d30
        ;   Label: core_passngr.cpp_FUN_00545d30
    PUSH ESI                            ; 00545d31
    PUSH EDI                            ; 00545d32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00545d33
    PUSH EBX                            ; 00545d37
    CALL core_npc.cpp_CNPC_FUN_00544870 ; 00545d38
        ;   XREF to: 00544870 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544870(CNPC * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1f810]   ; 00545d3d
    ADD ESP,0x4                         ; 00545d43
    TEST EDX,EDX                        ; 00545d46
    JZ 0x00545df4                       ; 00545d48
        ;   XREF to: 00545df4 (CONDITIONAL_JUMP)  ; LAB_00545df4
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545d4e
        ;   Label: LAB_00545d4e
    ADD EAX,0x158                       ; 00545d54
    PUSH EAX                            ; 00545d59
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 00545d5a
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545d5f
    ADD ESP,0x4                         ; 00545d65
    ADD EAX,0x158                       ; 00545d68
    PUSH EAX                            ; 00545d6d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 00545d6e
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00545d73
    LEA ESI,[EBX + 0x158]               ; 00545d76
    PUSH ESI                            ; 00545d7c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 00545d7d
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00545d82
    PUSH ESI                            ; 00545d85
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 00545d86
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00545d8b
    PUSH ESI                            ; 00545d8e
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00545d8f
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00545d94
    PUSH ESI                            ; 00545d97
    PUSH 0x0                            ; 00545d98
    LEA EDI,[EBX + 0x1f814]             ; 00545d9a
    PUSH EDI                            ; 00545da0
    CALL core_morph.cpp_FUN_0052b430    ; 00545da1
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545da6
    ADD ESP,0xc                         ; 00545dac
    ADD EAX,0x158                       ; 00545daf
    PUSH EAX                            ; 00545db4
    PUSH 0x1                            ; 00545db5
    PUSH EDI                            ; 00545db7
    CALL core_morph.cpp_FUN_0052b430    ; 00545db8
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 00545dbd
    PUSH EDI                            ; 00545dc0
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 00545dc1
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00545dc6
    PUSH ESI                            ; 00545dc9
    MOV dword ptr [EBX + 0x20440],0x0   ; 00545dca
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 00545dd4
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545dd9
    ADD ESP,0x4                         ; 00545ddf
    ADD EAX,0x158                       ; 00545de2
    PUSH EAX                            ; 00545de7
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 00545de8
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00545ded
    POP EDI                             ; 00545df0
    POP ESI                             ; 00545df1
    POP EBX                             ; 00545df2
    RET                                 ; 00545df3
    PUSH 0x63e7c4                       ; 00545df4 | = "CWerewolf"
        ;   Label: LAB_00545df4
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 00545df9
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    LEA ESI,[EBX + 0x1f78c]             ; 00545dfe
    ADD ESP,0x4                         ; 00545e04
    MOV EDI,EAX                         ; 00545e07
    MOV dword ptr [EBX + 0x1f810],EAX   ; 00545e09
    PUSH EDI                            ; 00545e0f
    MOV AL,byte ptr [ESI]               ; 00545e10
        ;   Label: LAB_00545e10
    MOV byte ptr [EDI],AL               ; 00545e12
    CMP AL,0x0                          ; 00545e14
    JZ 0x00545e28                       ; 00545e16
        ;   XREF to: 00545e28 (CONDITIONAL_JUMP)  ; LAB_00545e28
    MOV AL,byte ptr [ESI + 0x1]         ; 00545e18
    ADD ESI,0x2                         ; 00545e1b
    MOV byte ptr [EDI + 0x1],AL         ; 00545e1e
    ADD EDI,0x2                         ; 00545e21
    CMP AL,0x0                          ; 00545e24
    JNZ 0x00545e10                      ; 00545e26
        ;   XREF to: 00545e10 (CONDITIONAL_JUMP)  ; LAB_00545e10
    POP EDI                             ; 00545e28
        ;   Label: LAB_00545e28
    LEA ESI,[EBX + 0x20]                ; 00545e29
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545e2c
    MOV EDX,dword ptr [ESI]             ; 00545e32
    MOV dword ptr [EAX + 0x20],EDX      ; 00545e34
    MOV EDX,dword ptr [ESI + 0x4]       ; 00545e37
    MOV dword ptr [EAX + 0x24],EDX      ; 00545e3a
    MOV EDX,dword ptr [ESI + 0x8]       ; 00545e3d
    MOV dword ptr [EAX + 0x28],EDX      ; 00545e40
    MOV ESI,dword ptr [ESI + 0xc]       ; 00545e43
    MOV dword ptr [EAX + 0x2c],ESI      ; 00545e46
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545e49
    LEA ESI,[EBX + 0x30]                ; 00545e4f
    ADD EAX,0x30                        ; 00545e52
    CMP EAX,ESI                         ; 00545e55
    JZ 0x00545e69                       ; 00545e57
        ;   XREF to: 00545e69 (CONDITIONAL_JUMP)  ; LAB_00545e69
    MOV EDX,dword ptr [ESI]             ; 00545e59
    MOV dword ptr [EAX],EDX             ; 00545e5b
    MOV EDX,dword ptr [ESI + 0x4]       ; 00545e5d
    MOV dword ptr [EAX + 0x4],EDX       ; 00545e60
    MOV EDX,dword ptr [ESI + 0x8]       ; 00545e63
    MOV dword ptr [EAX + 0x8],EDX       ; 00545e66
    LEA EAX,[EBX + 0x1f76c]             ; 00545e69
        ;   Label: LAB_00545e69
    PUSH EAX                            ; 00545e6f
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545e70
    ADD EAX,0x158                       ; 00545e76
    PUSH EAX                            ; 00545e7b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00545e7c
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545e81
    FLD float ptr [EBX + 0x20444]       ; 00545e87
    ADD ESP,0x8                         ; 00545e8d
    FSTP float ptr [EAX + 0x261c]       ; 00545e90
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545e96
    PUSH EAX                            ; 00545e9c
    MOV ESI,dword ptr [EAX + 0x154]     ; 00545e9d
    CALL dword ptr [ESI]                ; 00545ea3
    ADD ESP,0x4                         ; 00545ea5
    PUSH 0x1                            ; 00545ea8
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545eaa
    PUSH 0x63e7ce                       ; 00545eb0 | = "transform"
    ADD EAX,0x158                       ; 00545eb5
    PUSH EAX                            ; 00545eba
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 00545ebb
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00545ec0
    PUSH EAX                            ; 00545ec3
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 00545ec4
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 00545ec9
    PUSH 0x0                            ; 00545ecc
    PUSH EAX                            ; 00545ece
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00545ecf
    ADD EAX,0x158                       ; 00545ed5
    PUSH EAX                            ; 00545eda
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 00545edb
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00545ee0
    JMP 0x00545d4e                      ; 00545ee3
        ;   XREF to: 00545d4e (UNCONDITIONAL_JUMP)  ; LAB_00545d4e

