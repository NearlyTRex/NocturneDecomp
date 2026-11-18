; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004ac230(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_frankxbed_kfm_005d6a86
;   TerminatedCString s_frankxbed_pth_005d6a94
;   undefined4 s_frankxbed_pth_005d6a94+1
;   undefined4 s_frankxbed_pth_005d6a94+2
;   undefined4 s_frankxbed_pth_005d6a94+3
;   TerminatedCString s_frankxbody_kfm_005d6aa2
;   TerminatedCString s_frankxcrn1_kfm_005d6ab1
;   TerminatedCString s_frankxcrn2_kfm_005d6ac0
;   TerminatedCString s_frankxcrn3_kfm_005d6acf
;   TerminatedCString s_frankxstch_kfm_005d6ade
;   TerminatedCString s_frankxarm_kfm_005d6aed
;   TerminatedCString s_frankxflap1_kfm_005d6afb
;   TerminatedCString s_frankxflap1_pth_005d6b0b
;   undefined4 s_frankxflap1_pth_005d6b0b+1
;   undefined4 s_frankxflap1_pth_005d6b0b+2
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_course.cpp_CCourse_load_FUN_00438af0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac230
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004ac230
    PUSH ESI                            ; 004ac231
    PUSH EDI                            ; 004ac232
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ac233
    PUSH EBX                            ; 004ac237
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 004ac238
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    MOV byte ptr [EBX + 0x2bc],0x0      ; 004ac23d
    ADD ESP,0x4                         ; 004ac244
    MOV EDI,dword ptr [EBX + 0x2b4]     ; 004ac247
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004ac24d
    CMP EDI,0x8                         ; 004ac257
    JA 0x004ac2b9                       ; 004ac25a
        ;   XREF to: 004ac2b9 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x4ac20c]  ; 004ac25c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x5d6a86                       ; 004ac263 | = "frankxbed.kfm"
        ;   Label: caseD_0
    LEA EDI,[EBX + 0x2e0]               ; 004ac268
    PUSH EDI                            ; 004ac26e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac26f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac274
    MOV ESI,0x5d6a94                    ; 004ac277 | = "frankxbed.pth"
    LEA EDI,[EBX + 0x2bc]               ; 004ac27c
    PUSH EDI                            ; 004ac282
    MOV AL,byte ptr [ESI]               ; 004ac283 | = "frankxbed.pth" | s_frankxbed_pth_005d6a94+2
        ;   Label: LAB_004ac283
    MOV byte ptr [EDI],AL               ; 004ac285
    CMP AL,0x0                          ; 004ac287
    JZ 0x004ac29b                       ; 004ac289
        ;   XREF to: 004ac29b (CONDITIONAL_JUMP)  ; LAB_004ac29b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac28b | s_frankxbed_pth_005d6a94+1 | s_frankxbed_pth_005d6a94+3
    ADD ESI,0x2                         ; 004ac28e
    MOV byte ptr [EDI + 0x1],AL         ; 004ac291
    ADD EDI,0x2                         ; 004ac294
    CMP AL,0x0                          ; 004ac297
    JNZ 0x004ac283                      ; 004ac299
        ;   XREF to: 004ac283 (CONDITIONAL_JUMP)  ; LAB_004ac283
    POP EDI                             ; 004ac29b
        ;   Label: LAB_004ac29b
    PUSH 0x5d6aa2                       ; 004ac29c | = "frankxbody.kfm"
    LEA EDI,[EBX + 0x468]               ; 004ac2a1
    PUSH EDI                            ; 004ac2a7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac2a8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac2ad
    PUSH EDI                            ; 004ac2b0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004ac2b1
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ac2b6
    LEA EDI,[EBX + 0x2e0]               ; 004ac2b9
        ;   Label: default
    PUSH EDI                            ; 004ac2bf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004ac2c0
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    MOV AH,byte ptr [EBX + 0x2bc]       ; 004ac2c5
    ADD ESP,0x4                         ; 004ac2cb
    TEST AH,AH                          ; 004ac2ce
    JNZ 0x004ac432                      ; 004ac2d0
        ;   XREF to: 004ac432 (CONDITIONAL_JUMP)  ; LAB_004ac432
    PUSH EBX                            ; 004ac2d6
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0 ; 004ac2d7
        ;   XREF to: 004accb0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004ac2dc
    POP EDI                             ; 004ac2df
    POP ESI                             ; 004ac2e0
    POP EBX                             ; 004ac2e1
    RET                                 ; 004ac2e2
    PUSH 0x5d6ab1                       ; 004ac2e3 | = "frankxcrn1.kfm"
        ;   Label: caseD_1
    LEA EDI,[EBX + 0x2e0]               ; 004ac2e8
    PUSH EDI                            ; 004ac2ee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac2ef
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac2f4
    MOV dword ptr [EBX + 0x5e4],0xae    ; 004ac2f7
    JMP 0x004ac2b9                      ; 004ac301
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5d6ac0                       ; 004ac303 | = "frankxcrn2.kfm"
        ;   Label: caseD_2
    LEA EDI,[EBX + 0x2e0]               ; 004ac308
    PUSH EDI                            ; 004ac30e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac30f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac314
    MOV dword ptr [EBX + 0x5e4],0x8c    ; 004ac317
    JMP 0x004ac2b9                      ; 004ac321
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5d6acf                       ; 004ac323 | = "frankxcrn3.kfm"
        ;   Label: caseD_3
    LEA EDI,[EBX + 0x2e0]               ; 004ac328
    PUSH EDI                            ; 004ac32e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac32f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac334
    MOV dword ptr [EBX + 0x5e4],0x16a   ; 004ac337
    JMP 0x004ac2b9                      ; 004ac341
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5d6ade                       ; 004ac346 | = "frankxstch.kfm"
        ;   Label: caseD_4
    LEA EDI,[EBX + 0x2e0]               ; 004ac34b
    PUSH EDI                            ; 004ac351
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac352
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac357
    JMP 0x004ac2b9                      ; 004ac35a
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5d6aed                       ; 004ac35f | = "frankxarm.kfm"
        ;   Label: caseD_5
    LEA EDI,[EBX + 0x2e0]               ; 004ac364
    PUSH EDI                            ; 004ac36a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac36b
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac370
    JMP 0x004ac2b9                      ; 004ac373
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5d6afb                       ; 004ac378 | = "frankxflap1.kfm"
        ;   Label: caseD_6
    LEA EDI,[EBX + 0x2e0]               ; 004ac37d
    PUSH EDI                            ; 004ac383
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac384
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac389
    MOV ESI,0x5d6b0b                    ; 004ac38c | = "frankxflap1.pth"
    LEA EDI,[EBX + 0x2bc]               ; 004ac391
    PUSH EDI                            ; 004ac397
    MOV AL,byte ptr [ESI]               ; 004ac398 | = "frankxflap1.pth" | s_frankxflap1_pth_005d6b0b+2
        ;   Label: LAB_004ac398
    MOV byte ptr [EDI],AL               ; 004ac39a
    CMP AL,0x0                          ; 004ac39c
    JZ 0x004ac3b0                       ; 004ac39e
        ;   XREF to: 004ac3b0 (CONDITIONAL_JUMP)  ; LAB_004ac3b0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac3a0 | s_frankxflap1_pth_005d6b0b+1 | s_frankxflap1_pth_005d6b0b+3
    ADD ESI,0x2                         ; 004ac3a3
    MOV byte ptr [EDI + 0x1],AL         ; 004ac3a6
    ADD EDI,0x2                         ; 004ac3a9
    CMP AL,0x0                          ; 004ac3ac
    JNZ 0x004ac398                      ; 004ac3ae
        ;   XREF to: 004ac398 (CONDITIONAL_JUMP)  ; LAB_004ac398
    POP EDI                             ; 004ac3b0
        ;   Label: LAB_004ac3b0
    JMP 0x004ac2b9                      ; 004ac3b1
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5d6b1b                       ; 004ac3b6 | = "frankxflap2.kfm"
        ;   Label: caseD_7
    LEA EDI,[EBX + 0x2e0]               ; 004ac3bb
    PUSH EDI                            ; 004ac3c1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac3c2
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac3c7
    MOV ESI,0x5d6b2b                    ; 004ac3ca | = "frankxflap2.pth"
    LEA EDI,[EBX + 0x2bc]               ; 004ac3cf
    PUSH EDI                            ; 004ac3d5
    MOV AL,byte ptr [ESI]               ; 004ac3d6 | = "frankxflap2.pth" | s_frankxflap2_pth_005d6b2b+2
        ;   Label: LAB_004ac3d6
    MOV byte ptr [EDI],AL               ; 004ac3d8
    CMP AL,0x0                          ; 004ac3da
    JZ 0x004ac3ee                       ; 004ac3dc
        ;   XREF to: 004ac3ee (CONDITIONAL_JUMP)  ; LAB_004ac3ee
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac3de | s_frankxflap2_pth_005d6b2b+1 | s_frankxflap2_pth_005d6b2b+3
    ADD ESI,0x2                         ; 004ac3e1
    MOV byte ptr [EDI + 0x1],AL         ; 004ac3e4
    ADD EDI,0x2                         ; 004ac3e7
    CMP AL,0x0                          ; 004ac3ea
    JNZ 0x004ac3d6                      ; 004ac3ec
        ;   XREF to: 004ac3d6 (CONDITIONAL_JUMP)  ; LAB_004ac3d6
    POP EDI                             ; 004ac3ee
        ;   Label: LAB_004ac3ee
    JMP 0x004ac2b9                      ; 004ac3ef
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5d6b3b                       ; 004ac3f4 | = "frankxramp.kfm"
        ;   Label: caseD_8
    LEA EDI,[EBX + 0x2e0]               ; 004ac3f9
    PUSH EDI                            ; 004ac3ff
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004ac400
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac405
    MOV ESI,0x5d6b4a                    ; 004ac408 | = "frankxramp.pth"
    LEA EDI,[EBX + 0x2bc]               ; 004ac40d
    PUSH EDI                            ; 004ac413
    MOV AL,byte ptr [ESI]               ; 004ac414 | = "frankxramp.pth" | s_frankxramp_pth_005d6b4a+2
        ;   Label: LAB_004ac414
    MOV byte ptr [EDI],AL               ; 004ac416
    CMP AL,0x0                          ; 004ac418
    JZ 0x004ac42c                       ; 004ac41a
        ;   XREF to: 004ac42c (CONDITIONAL_JUMP)  ; LAB_004ac42c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ac41c | s_frankxramp_pth_005d6b4a+1 | s_frankxramp_pth_005d6b4a+3
    ADD ESI,0x2                         ; 004ac41f
    MOV byte ptr [EDI + 0x1],AL         ; 004ac422
    ADD EDI,0x2                         ; 004ac425
    CMP AL,0x0                          ; 004ac428
    JNZ 0x004ac414                      ; 004ac42a
        ;   XREF to: 004ac414 (CONDITIONAL_JUMP)  ; LAB_004ac414
    POP EDI                             ; 004ac42c
        ;   Label: LAB_004ac42c
    JMP 0x004ac2b9                      ; 004ac42d
        ;   XREF to: 004ac2b9 (UNCONDITIONAL_JUMP)  ; default
    LEA EDI,[EBX + 0x2bc]               ; 004ac432
        ;   Label: LAB_004ac432
    PUSH EDI                            ; 004ac438
    LEA EDI,[EBX + 0x45c]               ; 004ac439
    PUSH EDI                            ; 004ac43f
    CALL core_course.cpp_CCourse_load_FUN_00438af0 ; 004ac440
        ;   XREF to: 00438af0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00438af0(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ac445
    PUSH EBX                            ; 004ac448
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0 ; 004ac449
        ;   XREF to: 004accb0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004ac44e
    POP EDI                             ; 004ac451
    POP ESI                             ; 004ac452
    POP EBX                             ; 004ac453
    RET                                 ; 004ac454

