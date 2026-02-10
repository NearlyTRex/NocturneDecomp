; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_004189b0(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   float FLOAT_0065ac10 = 4
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_morph.cpp_CMorphModel_FUN_0052bae0
;   core_morph.cpp_FUN_0052b600
;   core_morph.cpp_FUN_0052b640
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004189b0
        ;   Label: core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0
    PUSH EBP                            ; 004189b1
    SUB ESP,0x18                        ; 004189b2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004189b5
    CMP dword ptr [EBX + 0x240c],0x0    ; 004189b9
    JZ 0x004189ca                       ; 004189c0
        ;   XREF to: 004189ca (CONDITIONAL_JUMP)  ; LAB_004189ca
    XOR EAX,EAX                         ; 004189c2
    ADD ESP,0x18                        ; 004189c4
    POP EBP                             ; 004189c7
    POP EBX                             ; 004189c8
    RET                                 ; 004189c9
    PUSH EDI                            ; 004189ca
        ;   Label: LAB_004189ca
    PUSH ESI                            ; 004189cb
    PUSH EBX                            ; 004189cc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004189cd
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004189d2
    LEA ESI,[ESP + 0x8]                 ; 004189d5
    PUSH ESI                            ; 004189d9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004189da
    PUSH EBX                            ; 004189e0
    CALL dword ptr [EAX + 0x14]         ; 004189e1
    ADD ESP,0x8                         ; 004189e4
    PUSH EAX                            ; 004189e7
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004189e8
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004189ed
    MOV EDI,EAX                         ; 004189f0
    TEST EAX,EAX                        ; 004189f2
    JZ 0x00418a9f                       ; 004189f4
        ;   XREF to: 00418a9f (CONDITIONAL_JUMP)  ; LAB_00418a9f
    MOV ECX,dword ptr [EBX + 0xc038]    ; 004189fa
    MOV dword ptr [EBX + 0x2620],0x1    ; 00418a00
    TEST ECX,ECX                        ; 00418a0a
    JZ 0x00418ab2                       ; 00418a0c
        ;   XREF to: 00418ab2 (CONDITIONAL_JUMP)  ; LAB_00418ab2
    PUSH 0x0                            ; 00418a12
    LEA EAX,[EBX + 0x158]               ; 00418a14
    PUSH EAX                            ; 00418a1a
    PUSH 0x0                            ; 00418a1b
    LEA ESI,[EBX + 0xc040]              ; 00418a1d
    PUSH ESI                            ; 00418a23
    CALL core_morph.cpp_FUN_0052b600    ; 00418a24
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b600()
    ADD ESP,0x10                        ; 00418a29
    PUSH 0x0                            ; 00418a2c
    PUSH 0x0                            ; 00418a2e
    LEA EAX,[EBX + 0xbebc]              ; 00418a30
    PUSH EAX                            ; 00418a36
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00418a37
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00418a3c
    PUSH EAX                            ; 00418a3f
    PUSH 0x1                            ; 00418a40
    PUSH ESI                            ; 00418a42
    CALL core_morph.cpp_FUN_0052b640    ; 00418a43
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b640()
    FLD float ptr [EBX + 0xc03c]        ; 00418a48
    FDIV float ptr [0x0065ac10]         ; 00418a4e | FLOAT_0065ac10
    ADD ESP,0x14                        ; 00418a54
    SUB ESP,0x4                         ; 00418a57
    FSTP float ptr [ESP]                ; 00418a5a
    PUSH ESI                            ; 00418a5d
    CALL core_morph.cpp_CMorphModel_FUN_0052bae0 ; 00418a5e
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052bae0(CMorphModel * this_ptr)
    ADD ESP,0x8                         ; 00418a63
    CMP dword ptr [0x02f43978],0x0      ; 00418a66 | DAT_02f43978
        ;   Label: LAB_00418a66
    JZ 0x00418a9f                       ; 00418a6d
        ;   XREF to: 00418a9f (CONDITIONAL_JUMP)  ; LAB_00418a9f
    MOV EBP,dword ptr [0x006703ec]      ; 00418a6f | g_CDemonRendererPtr2
    PUSH EBP                            ; 00418a75 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00418a76
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00418a7b
    TEST EAX,EAX                        ; 00418a7e
    JNZ 0x00418a9f                      ; 00418a80
        ;   XREF to: 00418a9f (CONDITIONAL_JUMP)  ; LAB_00418a9f
    PUSH EBX                            ; 00418a82
    LEA EAX,[EBX + 0x158]               ; 00418a83
    PUSH EAX                            ; 00418a89
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 00418a8a
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00418a8f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00418a92
    PUSH EBX                            ; 00418a98
    CALL dword ptr [EAX + 0x50]         ; 00418a99
    ADD ESP,0x4                         ; 00418a9c
    PUSH EBX                            ; 00418a9f
        ;   Label: LAB_00418a9f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00418aa0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00418aa5
    MOV EAX,EDI                         ; 00418aa8
    POP ESI                             ; 00418aaa
    POP EDI                             ; 00418aab
    ADD ESP,0x18                        ; 00418aac
    POP EBP                             ; 00418aaf
    POP EBX                             ; 00418ab0
    RET                                 ; 00418ab1
    PUSH EBX                            ; 00418ab2
        ;   Label: LAB_00418ab2
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0 ; 00418ab3
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00418ab8
    JMP 0x00418a66                      ; 00418abb
        ;   XREF to: 00418a66 (UNCONDITIONAL_JUMP)  ; LAB_00418a66

