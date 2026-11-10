; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00532930(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CWerewolf_005ec869
;   TerminatedCString s_transform_005ec873
;
; Called Functions:
;   core_actor.cpp_createActorByName_FUN_0040c2b0
;   core_morph.cpp_CMorph_getReady_FUN_00523310
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_npc.cpp_CNPC_setup_FUN_00531720
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532930
        ;   Label: core_passngr.cpp_CPassenger_setup_FUN_00532930
    PUSH ESI                            ; 00532931
    PUSH EDI                            ; 00532932
    MOV EBX,dword ptr [ESP + 0x10]      ; 00532933
    PUSH EBX                            ; 00532937
    CALL core_npc.cpp_CNPC_setup_FUN_00531720 ; 00532938
        ;   XREF to: 00531720 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00531720(CNPC * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1fbc0]   ; 0053293d
    ADD ESP,0x4                         ; 00532943
    TEST EDX,EDX                        ; 00532946
    JZ 0x005329f4                       ; 00532948
        ;   XREF to: 005329f4 (CONDITIONAL_JUMP)  ; LAB_005329f4
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 0053294e
        ;   Label: LAB_0053294e
    ADD EAX,0x158                       ; 00532954
    PUSH EAX                            ; 00532959
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 0053295a
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 0053295f
    ADD ESP,0x4                         ; 00532965
    ADD EAX,0x158                       ; 00532968
    PUSH EAX                            ; 0053296d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0053296e
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00532973
    LEA ESI,[EBX + 0x158]               ; 00532976
    PUSH ESI                            ; 0053297c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 0053297d
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00532982
    PUSH ESI                            ; 00532985
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 00532986
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053298b
    PUSH ESI                            ; 0053298e
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 0053298f
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00532994
    PUSH ESI                            ; 00532997
    PUSH 0x0                            ; 00532998
    LEA EDI,[EBX + 0x1fbc4]             ; 0053299a
    PUSH EDI                            ; 005329a0
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 005329a1
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 005329a6
    ADD ESP,0xc                         ; 005329ac
    ADD EAX,0x158                       ; 005329af
    PUSH EAX                            ; 005329b4
    PUSH 0x1                            ; 005329b5
    PUSH EDI                            ; 005329b7
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 005329b8
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005329bd
    PUSH EDI                            ; 005329c0
    CALL core_morph.cpp_CMorph_getReady_FUN_00523310 ; 005329c1
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_00523310(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005329c6
    PUSH ESI                            ; 005329c9
    MOV dword ptr [EBX + 0x207f0],0x0   ; 005329ca
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005329d4
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 005329d9
    ADD ESP,0x4                         ; 005329df
    ADD EAX,0x158                       ; 005329e2
    PUSH EAX                            ; 005329e7
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005329e8
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005329ed
    POP EDI                             ; 005329f0
    POP ESI                             ; 005329f1
    POP EBX                             ; 005329f2
    RET                                 ; 005329f3
    PUSH 0x5ec869                       ; 005329f4 | = "CWerewolf"
        ;   Label: LAB_005329f4
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 005329f9
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c2b0()
    LEA ESI,[EBX + 0x1fb3c]             ; 005329fe
    ADD ESP,0x4                         ; 00532a04
    MOV EDI,EAX                         ; 00532a07
    MOV dword ptr [EBX + 0x1fbc0],EAX   ; 00532a09
    PUSH EDI                            ; 00532a0f
    MOV AL,byte ptr [ESI]               ; 00532a10
        ;   Label: LAB_00532a10
    MOV byte ptr [EDI],AL               ; 00532a12
    CMP AL,0x0                          ; 00532a14
    JZ 0x00532a28                       ; 00532a16
        ;   XREF to: 00532a28 (CONDITIONAL_JUMP)  ; LAB_00532a28
    MOV AL,byte ptr [ESI + 0x1]         ; 00532a18
    ADD ESI,0x2                         ; 00532a1b
    MOV byte ptr [EDI + 0x1],AL         ; 00532a1e
    ADD EDI,0x2                         ; 00532a21
    CMP AL,0x0                          ; 00532a24
    JNZ 0x00532a10                      ; 00532a26
        ;   XREF to: 00532a10 (CONDITIONAL_JUMP)  ; LAB_00532a10
    POP EDI                             ; 00532a28
        ;   Label: LAB_00532a28
    LEA ESI,[EBX + 0x20]                ; 00532a29
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532a2c
    MOV EDX,dword ptr [ESI]             ; 00532a32
    MOV dword ptr [EAX + 0x20],EDX      ; 00532a34
    MOV EDX,dword ptr [ESI + 0x4]       ; 00532a37
    MOV dword ptr [EAX + 0x24],EDX      ; 00532a3a
    MOV EDX,dword ptr [ESI + 0x8]       ; 00532a3d
    MOV dword ptr [EAX + 0x28],EDX      ; 00532a40
    MOV ESI,dword ptr [ESI + 0xc]       ; 00532a43
    MOV dword ptr [EAX + 0x2c],ESI      ; 00532a46
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532a49
    LEA ESI,[EBX + 0x30]                ; 00532a4f
    ADD EAX,0x30                        ; 00532a52
    CMP EAX,ESI                         ; 00532a55
    JZ 0x00532a69                       ; 00532a57
        ;   XREF to: 00532a69 (CONDITIONAL_JUMP)  ; LAB_00532a69
    MOV EDX,dword ptr [ESI]             ; 00532a59
    MOV dword ptr [EAX],EDX             ; 00532a5b
    MOV EDX,dword ptr [ESI + 0x4]       ; 00532a5d
    MOV dword ptr [EAX + 0x4],EDX       ; 00532a60
    MOV EDX,dword ptr [ESI + 0x8]       ; 00532a63
    MOV dword ptr [EAX + 0x8],EDX       ; 00532a66
    LEA EAX,[EBX + 0x1fb1c]             ; 00532a69
        ;   Label: LAB_00532a69
    PUSH EAX                            ; 00532a6f
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532a70
    ADD EAX,0x158                       ; 00532a76
    PUSH EAX                            ; 00532a7b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00532a7c
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532a81
    FLD float ptr [EBX + 0x207f4]       ; 00532a87
    ADD ESP,0x8                         ; 00532a8d
    FSTP float ptr [EAX + 0x27b8]       ; 00532a90
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532a96
    PUSH EAX                            ; 00532a9c
    MOV ESI,dword ptr [EAX + 0x154]     ; 00532a9d
    CALL dword ptr [ESI]                ; 00532aa3
    ADD ESP,0x4                         ; 00532aa5
    PUSH 0x1                            ; 00532aa8
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532aaa
    PUSH 0x5ec873                       ; 00532ab0 | = "transform"
    ADD EAX,0x158                       ; 00532ab5
    PUSH EAX                            ; 00532aba
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00532abb
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00532ac0
    PUSH EAX                            ; 00532ac3
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 00532ac4
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00532ac9
    PUSH 0x0                            ; 00532acc
    PUSH EAX                            ; 00532ace
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532acf
    ADD EAX,0x158                       ; 00532ad5
    PUSH EAX                            ; 00532ada
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10 ; 00532adb
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00532ae0
    JMP 0x0053294e                      ; 00532ae3
        ;   XREF to: 0053294e (UNCONDITIONAL_JUMP)  ; LAB_0053294e

