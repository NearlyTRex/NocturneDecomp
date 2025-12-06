; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590(CSuccubus * this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   float FLOAT_00663938 = 4
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_FUN_00429aa0
;   core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
;   core_morph.cpp_CMorphModel_FUN_0052bae0
;   core_morph.cpp_FUN_0052b600
;   core_morph.cpp_FUN_0052b640
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7590
        ;   Label: core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590
    PUSH EBP                            ; 005c7591
    SUB ESP,0x1c                        ; 005c7592
    MOV EBX,dword ptr [ESP + 0x28]      ; 005c7595
    MOV EDX,dword ptr [0x006703ec]      ; 005c7599 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 005c759f | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 005c75a0 | int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c75a5
    MOV EBP,EAX                         ; 005c75a8
    TEST EAX,EAX                        ; 005c75aa
    JZ 0x005c7674                       ; 005c75ac | LAB_005c7674
        ;   XREF to: 005c7674 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x240c],0x0    ; 005c75b2
        ;   Label: LAB_005c75b2
    JNZ 0x005c767f                      ; 005c75b9 | LAB_005c767f
        ;   XREF to: 005c767f (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005c75bf
    PUSH ESI                            ; 005c75c0
    PUSH EBX                            ; 005c75c1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005c75c2 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c75c7
    LEA EAX,[ESP + 0x8]                 ; 005c75ca
    PUSH EAX                            ; 005c75ce
    MOV ESI,dword ptr [EBX + 0x154]     ; 005c75cf
    PUSH EBX                            ; 005c75d5
    CALL dword ptr [ESI + 0x14]         ; 005c75d6
    ADD ESP,0x8                         ; 005c75d9
    PUSH EAX                            ; 005c75dc
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005c75dd | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c75e2
    MOV dword ptr [ESP + 0x20],EAX      ; 005c75e5
    TEST EAX,EAX                        ; 005c75e9
    JZ 0x005c765f                       ; 005c75eb | LAB_005c765f
        ;   XREF to: 005c765f (CONDITIONAL_JUMP)
    LEA EDI,[EBX + 0xbebc]              ; 005c75ed
    MOV dword ptr [EBX + 0x2620],0x1    ; 005c75f3
    TEST EBP,EBP                        ; 005c75fd
    JZ 0x005c7687                       ; 005c75ff | LAB_005c7687
        ;   XREF to: 005c7687 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005c7605
    PUSH 0x1                            ; 005c7607
    PUSH -0x1                           ; 005c7609
    PUSH -0x1                           ; 005c760b
    PUSH EDI                            ; 005c760d
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 005c760e | void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005c7613
    PUSH EDI                            ; 005c7616
    LEA EAX,[EBX + 0xe170]              ; 005c7617
    PUSH EAX                            ; 005c761d
    CALL core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320 ; 005c761e | undefined core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320()
        ;   XREF to: 0043c320 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c7623
        ;   Label: LAB_005c7623
    CMP dword ptr [0x02f43978],0x0      ; 005c7626 | undefined4 DAT_02f43978
        ;   Label: LAB_005c7626
    JZ 0x005c765f                       ; 005c762d | LAB_005c765f
        ;   XREF to: 005c765f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x006703ec]      ; 005c762f | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 005c7635 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005c7636 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c763b
    TEST EAX,EAX                        ; 005c763e
    JNZ 0x005c765f                      ; 005c7640 | LAB_005c765f
        ;   XREF to: 005c765f (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005c7642
    LEA EAX,[EBX + 0x158]               ; 005c7643
    PUSH EAX                            ; 005c7649
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 005c764a | void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c764f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c7652
    PUSH EBX                            ; 005c7658
    CALL dword ptr [EAX + 0x50]         ; 005c7659
    ADD ESP,0x4                         ; 005c765c
    PUSH EBX                            ; 005c765f
        ;   Label: LAB_005c765f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005c7660 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c7665
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c7668
    POP ESI                             ; 005c766c
    POP EDI                             ; 005c766d
    ADD ESP,0x1c                        ; 005c766e
    POP EBP                             ; 005c7671
    POP EBX                             ; 005c7672
    RET                                 ; 005c7673
    MOV dword ptr [EBX + 0x2620],EAX    ; 005c7674
        ;   Label: LAB_005c7674
    JMP 0x005c75b2                      ; 005c767a | LAB_005c75b2
        ;   XREF to: 005c75b2 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c767f
        ;   Label: LAB_005c767f
    ADD ESP,0x1c                        ; 005c7681
    POP EBP                             ; 005c7684
    POP EBX                             ; 005c7685
    RET                                 ; 005c7686
    CMP dword ptr [EBX + 0xe334],0x0    ; 005c7687
        ;   Label: LAB_005c7687
    JZ 0x005c76fc                       ; 005c768e | LAB_005c76fc
        ;   XREF to: 005c76fc (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005c7690
    LEA EAX,[EBX + 0x158]               ; 005c7691
    PUSH EAX                            ; 005c7697
    PUSH EBP                            ; 005c7698
    LEA ESI,[EBX + 0xe33c]              ; 005c7699
    PUSH ESI                            ; 005c769f
    CALL core_morph.cpp_FUN_0052b600    ; 005c76a0 | undefined core_morph.cpp_FUN_0052b600()
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005c76a5
    PUSH EBP                            ; 005c76a8
    PUSH EDI                            ; 005c76a9
    PUSH 0x1                            ; 005c76aa
    PUSH ESI                            ; 005c76ac
    CALL core_morph.cpp_FUN_0052b600    ; 005c76ad | undefined core_morph.cpp_FUN_0052b600()
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005c76b2
    PUSH 0x1                            ; 005c76b5
    PUSH EBP                            ; 005c76b7
    MOV EDI,dword ptr [EBX + 0xe304]    ; 005c76b8
    PUSH EDI                            ; 005c76be
    PUSH 0x1                            ; 005c76bf
    PUSH ESI                            ; 005c76c1
    CALL core_morph.cpp_FUN_0052b640    ; 005c76c2 | void core_morph.cpp_FUN_0052b640()
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005c76c7
    PUSH 0x2                            ; 005c76ca
    PUSH EBP                            ; 005c76cc
    MOV EBP,dword ptr [EBX + 0xe304]    ; 005c76cd
    PUSH EBP                            ; 005c76d3
    PUSH 0x1                            ; 005c76d4
    PUSH ESI                            ; 005c76d6
    CALL core_morph.cpp_FUN_0052b640    ; 005c76d7 | void core_morph.cpp_FUN_0052b640()
        ;   XREF to: 0052b640 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0xe338]        ; 005c76dc
    FDIV float ptr [0x00663938]         ; 005c76e2 | float FLOAT_00663938
    ADD ESP,0x14                        ; 005c76e8
    SUB ESP,0x4                         ; 005c76eb
    FSTP float ptr [ESP]                ; 005c76ee
    PUSH ESI                            ; 005c76f1
    CALL core_morph.cpp_CMorphModel_FUN_0052bae0 ; 005c76f2 | void core_morph.cpp_CMorphModel_FUN_0052bae0(CMorphModel * this_ptr)
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
    JMP 0x005c7623                      ; 005c76f7 | LAB_005c7623
        ;   XREF to: 005c7623 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005c76fc
        ;   Label: LAB_005c76fc
    CALL core_charactr.cpp_CCharacter_FUN_00429aa0 ; 005c76fd | void core_charactr.cpp_CCharacter_FUN_00429aa0(CCharacter * this_ptr)
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c7702
    JMP 0x005c7626                      ; 005c7705 | LAB_005c7626
        ;   XREF to: 005c7626 (UNCONDITIONAL_JUMP)

