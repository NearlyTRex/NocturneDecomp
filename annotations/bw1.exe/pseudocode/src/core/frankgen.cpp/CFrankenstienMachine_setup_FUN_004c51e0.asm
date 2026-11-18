; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004c51e0(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_frankxbed_kfm_005e0aff
;   TerminatedCString s_frankxbed_pth_005e0b0d
;   undefined4 s_frankxbed_pth_005e0b0d+1
;   undefined4 s_frankxbed_pth_005e0b0d+2
;   undefined4 s_frankxbed_pth_005e0b0d+3
;   TerminatedCString s_frankxbody_kfm_005e0b1b
;   TerminatedCString s_frankxcrn1_kfm_005e0b2a
;   TerminatedCString s_frankxcrn2_kfm_005e0b39
;   TerminatedCString s_frankxcrn3_kfm_005e0b48
;   TerminatedCString s_frankxstch_kfm_005e0b57
;   TerminatedCString s_frankxarm_kfm_005e0b66
;   TerminatedCString s_frankxflap1_kfm_005e0b74
;   TerminatedCString s_frankxflap1_pth_005e0b84
;   undefined4 s_frankxflap1_pth_005e0b84+1
;   undefined4 s_frankxflap1_pth_005e0b84+2
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_course.cpp_CCourse_load_FUN_00447db0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c51e0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004c51e0
    PUSH ESI                            ; 004c51e1
    PUSH EDI                            ; 004c51e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c51e3
    PUSH EBX                            ; 004c51e7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 004c51e8
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    MOV byte ptr [EBX + 0x160],0x0      ; 004c51ed
    ADD ESP,0x4                         ; 004c51f4
    MOV EDI,dword ptr [EBX + 0x158]     ; 004c51f7
    MOV dword ptr [EBX + 0x488],0x0     ; 004c51fd
    CMP EDI,0x8                         ; 004c5207
    JA 0x004c5269                       ; 004c520a
        ;   XREF to: 004c5269 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x4c51bc]  ; 004c520c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x5e0aff                       ; 004c5213 | = "frankxbed.kfm"
        ;   Label: caseD_0
    LEA EDI,[EBX + 0x184]               ; 004c5218
    PUSH EDI                            ; 004c521e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c521f
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c5224
    MOV ESI,0x5e0b0d                    ; 004c5227 | = "frankxbed.pth"
    LEA EDI,[EBX + 0x160]               ; 004c522c
    PUSH EDI                            ; 004c5232
    MOV AL,byte ptr [ESI]               ; 004c5233 | = "frankxbed.pth" | s_frankxbed_pth_005e0b0d+2
        ;   Label: LAB_004c5233
    MOV byte ptr [EDI],AL               ; 004c5235
    CMP AL,0x0                          ; 004c5237
    JZ 0x004c524b                       ; 004c5239
        ;   XREF to: 004c524b (CONDITIONAL_JUMP)  ; LAB_004c524b
    MOV AL,byte ptr [ESI + 0x1]         ; 004c523b | s_frankxbed_pth_005e0b0d+1 | s_frankxbed_pth_005e0b0d+3
    ADD ESI,0x2                         ; 004c523e
    MOV byte ptr [EDI + 0x1],AL         ; 004c5241
    ADD EDI,0x2                         ; 004c5244
    CMP AL,0x0                          ; 004c5247
    JNZ 0x004c5233                      ; 004c5249
        ;   XREF to: 004c5233 (CONDITIONAL_JUMP)  ; LAB_004c5233
    POP EDI                             ; 004c524b
        ;   Label: LAB_004c524b
    PUSH 0x5e0b1b                       ; 004c524c | = "frankxbody.kfm"
    LEA EDI,[EBX + 0x30c]               ; 004c5251
    PUSH EDI                            ; 004c5257
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c5258
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c525d
    PUSH EDI                            ; 004c5260
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004c5261
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c5266
    LEA EDI,[EBX + 0x184]               ; 004c5269
        ;   Label: default
    PUSH EDI                            ; 004c526f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004c5270
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    MOV AH,byte ptr [EBX + 0x160]       ; 004c5275
    ADD ESP,0x4                         ; 004c527b
    TEST AH,AH                          ; 004c527e
    JNZ 0x004c53e2                      ; 004c5280
        ;   XREF to: 004c53e2 (CONDITIONAL_JUMP)  ; LAB_004c53e2
    PUSH EBX                            ; 004c5286
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60 ; 004c5287
        ;   XREF to: 004c5c60 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004c528c
    POP EDI                             ; 004c528f
    POP ESI                             ; 004c5290
    POP EBX                             ; 004c5291
    RET                                 ; 004c5292
    PUSH 0x5e0b2a                       ; 004c5293 | = "frankxcrn1.kfm"
        ;   Label: caseD_1
    LEA EDI,[EBX + 0x184]               ; 004c5298
    PUSH EDI                            ; 004c529e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c529f
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c52a4
    MOV dword ptr [EBX + 0x488],0xae    ; 004c52a7
    JMP 0x004c5269                      ; 004c52b1
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e0b39                       ; 004c52b3 | = "frankxcrn2.kfm"
        ;   Label: caseD_2
    LEA EDI,[EBX + 0x184]               ; 004c52b8
    PUSH EDI                            ; 004c52be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c52bf
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c52c4
    MOV dword ptr [EBX + 0x488],0x8c    ; 004c52c7
    JMP 0x004c5269                      ; 004c52d1
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e0b48                       ; 004c52d3 | = "frankxcrn3.kfm"
        ;   Label: caseD_3
    LEA EDI,[EBX + 0x184]               ; 004c52d8
    PUSH EDI                            ; 004c52de
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c52df
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c52e4
    MOV dword ptr [EBX + 0x488],0x16a   ; 004c52e7
    JMP 0x004c5269                      ; 004c52f1
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e0b57                       ; 004c52f6 | = "frankxstch.kfm"
        ;   Label: caseD_4
    LEA EDI,[EBX + 0x184]               ; 004c52fb
    PUSH EDI                            ; 004c5301
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c5302
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c5307
    JMP 0x004c5269                      ; 004c530a
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e0b66                       ; 004c530f | = "frankxarm.kfm"
        ;   Label: caseD_5
    LEA EDI,[EBX + 0x184]               ; 004c5314
    PUSH EDI                            ; 004c531a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c531b
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c5320
    JMP 0x004c5269                      ; 004c5323
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e0b74                       ; 004c5328 | = "frankxflap1.kfm"
        ;   Label: caseD_6
    LEA EDI,[EBX + 0x184]               ; 004c532d
    PUSH EDI                            ; 004c5333
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c5334
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c5339
    MOV ESI,0x5e0b84                    ; 004c533c | = "frankxflap1.pth"
    LEA EDI,[EBX + 0x160]               ; 004c5341
    PUSH EDI                            ; 004c5347
    MOV AL,byte ptr [ESI]               ; 004c5348 | = "frankxflap1.pth" | s_frankxflap1_pth_005e0b84+2
        ;   Label: LAB_004c5348
    MOV byte ptr [EDI],AL               ; 004c534a
    CMP AL,0x0                          ; 004c534c
    JZ 0x004c5360                       ; 004c534e
        ;   XREF to: 004c5360 (CONDITIONAL_JUMP)  ; LAB_004c5360
    MOV AL,byte ptr [ESI + 0x1]         ; 004c5350 | s_frankxflap1_pth_005e0b84+1 | s_frankxflap1_pth_005e0b84+3
    ADD ESI,0x2                         ; 004c5353
    MOV byte ptr [EDI + 0x1],AL         ; 004c5356
    ADD EDI,0x2                         ; 004c5359
    CMP AL,0x0                          ; 004c535c
    JNZ 0x004c5348                      ; 004c535e
        ;   XREF to: 004c5348 (CONDITIONAL_JUMP)  ; LAB_004c5348
    POP EDI                             ; 004c5360
        ;   Label: LAB_004c5360
    JMP 0x004c5269                      ; 004c5361
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e0b94                       ; 004c5366 | = "frankxflap2.kfm"
        ;   Label: caseD_7
    LEA EDI,[EBX + 0x184]               ; 004c536b
    PUSH EDI                            ; 004c5371
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c5372
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c5377
    MOV ESI,0x5e0ba4                    ; 004c537a | = "frankxflap2.pth"
    LEA EDI,[EBX + 0x160]               ; 004c537f
    PUSH EDI                            ; 004c5385
    MOV AL,byte ptr [ESI]               ; 004c5386 | = "frankxflap2.pth" | s_frankxflap2_pth_005e0ba4+2
        ;   Label: LAB_004c5386
    MOV byte ptr [EDI],AL               ; 004c5388
    CMP AL,0x0                          ; 004c538a
    JZ 0x004c539e                       ; 004c538c
        ;   XREF to: 004c539e (CONDITIONAL_JUMP)  ; LAB_004c539e
    MOV AL,byte ptr [ESI + 0x1]         ; 004c538e | s_frankxflap2_pth_005e0ba4+1 | s_frankxflap2_pth_005e0ba4+3
    ADD ESI,0x2                         ; 004c5391
    MOV byte ptr [EDI + 0x1],AL         ; 004c5394
    ADD EDI,0x2                         ; 004c5397
    CMP AL,0x0                          ; 004c539a
    JNZ 0x004c5386                      ; 004c539c
        ;   XREF to: 004c5386 (CONDITIONAL_JUMP)  ; LAB_004c5386
    POP EDI                             ; 004c539e
        ;   Label: LAB_004c539e
    JMP 0x004c5269                      ; 004c539f
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e0bb4                       ; 004c53a4 | = "frankxramp.kfm"
        ;   Label: caseD_8
    LEA EDI,[EBX + 0x184]               ; 004c53a9
    PUSH EDI                            ; 004c53af
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004c53b0
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c53b5
    MOV ESI,0x5e0bc3                    ; 004c53b8 | = "frankxramp.pth"
    LEA EDI,[EBX + 0x160]               ; 004c53bd
    PUSH EDI                            ; 004c53c3
    MOV AL,byte ptr [ESI]               ; 004c53c4 | = "frankxramp.pth" | s_frankxramp_pth_005e0bc3+2
        ;   Label: LAB_004c53c4
    MOV byte ptr [EDI],AL               ; 004c53c6
    CMP AL,0x0                          ; 004c53c8
    JZ 0x004c53dc                       ; 004c53ca
        ;   XREF to: 004c53dc (CONDITIONAL_JUMP)  ; LAB_004c53dc
    MOV AL,byte ptr [ESI + 0x1]         ; 004c53cc | s_frankxramp_pth_005e0bc3+1 | s_frankxramp_pth_005e0bc3+3
    ADD ESI,0x2                         ; 004c53cf
    MOV byte ptr [EDI + 0x1],AL         ; 004c53d2
    ADD EDI,0x2                         ; 004c53d5
    CMP AL,0x0                          ; 004c53d8
    JNZ 0x004c53c4                      ; 004c53da
        ;   XREF to: 004c53c4 (CONDITIONAL_JUMP)  ; LAB_004c53c4
    POP EDI                             ; 004c53dc
        ;   Label: LAB_004c53dc
    JMP 0x004c5269                      ; 004c53dd
        ;   XREF to: 004c5269 (UNCONDITIONAL_JUMP)  ; default
    LEA EDI,[EBX + 0x160]               ; 004c53e2
        ;   Label: LAB_004c53e2
    PUSH EDI                            ; 004c53e8
    LEA EDI,[EBX + 0x300]               ; 004c53e9
    PUSH EDI                            ; 004c53ef
    CALL core_course.cpp_CCourse_load_FUN_00447db0 ; 004c53f0
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00447db0(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c53f5
    PUSH EBX                            ; 004c53f8
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60 ; 004c53f9
        ;   XREF to: 004c5c60 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004c53fe
    POP EDI                             ; 004c5401
    POP ESI                             ; 004c5402
    POP EBX                             ; 004c5403
    RET                                 ; 004c5404

