; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_00529750(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   float FLOAT_00661938 = 2
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_FUN_00429aa0
;   core_morph.cpp_CMorphModel_FUN_0052bae0
;   core_morph.cpp_FUN_0052b600
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529750
        ;   Label: core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750
    SUB ESP,0x18                        ; 00529751
    MOV EBX,dword ptr [ESP + 0x20]      ; 00529754
    MOV EDX,dword ptr [0x006703ec]      ; 00529758 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0052975e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 0052975f
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00529764
    TEST EAX,EAX                        ; 00529767
    JZ 0x00529857                       ; 00529769
        ;   XREF to: 00529857 (CONDITIONAL_JUMP)  ; LAB_00529857
    CMP dword ptr [EBX + 0x240c],0x0    ; 0052976f
        ;   Label: LAB_0052976f
    JNZ 0x00529862                      ; 00529776
        ;   XREF to: 00529862 (CONDITIONAL_JUMP)  ; LAB_00529862
    PUSH EDI                            ; 0052977c
    PUSH ESI                            ; 0052977d
    PUSH EBX                            ; 0052977e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0052977f
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00529784
    LEA EAX,[ESP + 0x8]                 ; 00529787
    PUSH EAX                            ; 0052978b
    MOV ESI,dword ptr [EBX + 0x154]     ; 0052978c
    PUSH EBX                            ; 00529792
    CALL dword ptr [ESI + 0x14]         ; 00529793
    ADD ESP,0x8                         ; 00529796
    PUSH EAX                            ; 00529799
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0052979a
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0052979f
    MOV EDI,EAX                         ; 005297a2
    TEST EAX,EAX                        ; 005297a4
    JZ 0x00529845                       ; 005297a6
        ;   XREF to: 00529845 (CONDITIONAL_JUMP)  ; LAB_00529845
    MOV ESI,dword ptr [EBX + 0x21e8c]   ; 005297ac
    MOV dword ptr [EBX + 0x2620],0x1    ; 005297b2
    TEST ESI,ESI                        ; 005297bc
    JZ 0x00529869                       ; 005297be
        ;   XREF to: 00529869 (CONDITIONAL_JUMP)  ; LAB_00529869
    PUSH 0x0                            ; 005297c4
    LEA EAX,[EBX + 0x158]               ; 005297c6
    PUSH EAX                            ; 005297cc
    PUSH 0x0                            ; 005297cd
    LEA ESI,[EBX + 0x21f5c]             ; 005297cf
    PUSH ESI                            ; 005297d5
    CALL core_morph.cpp_FUN_0052b600    ; 005297d6
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b600()
    ADD ESP,0x10                        ; 005297db
    PUSH 0x0                            ; 005297de
    LEA EAX,[EBX + 0x1fbd4]             ; 005297e0
    PUSH EAX                            ; 005297e6
    PUSH 0x1                            ; 005297e7
    PUSH ESI                            ; 005297e9
    CALL core_morph.cpp_FUN_0052b600    ; 005297ea
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b600()
    FLD float ptr [EBX + 0x21e90]       ; 005297ef
    FDIV float ptr [0x00661938]         ; 005297f5 | FLOAT_00661938
    ADD ESP,0x10                        ; 005297fb
    SUB ESP,0x4                         ; 005297fe
    FSTP float ptr [ESP]                ; 00529801
    PUSH ESI                            ; 00529804
    CALL core_morph.cpp_CMorphModel_FUN_0052bae0 ; 00529805
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_FUN_0052bae0(CMorphModel * this_ptr)
    ADD ESP,0x8                         ; 0052980a
    CMP dword ptr [0x02f43978],0x0      ; 0052980d | DAT_02f43978
        ;   Label: LAB_0052980d
    JZ 0x00529845                       ; 00529814
        ;   XREF to: 00529845 (CONDITIONAL_JUMP)  ; LAB_00529845
    MOV EAX,[0x006703ec]                ; 00529816 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0052981b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0052981c
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00529821
    TEST EAX,EAX                        ; 00529824
    JNZ 0x00529845                      ; 00529826
        ;   XREF to: 00529845 (CONDITIONAL_JUMP)  ; LAB_00529845
    PUSH EBX                            ; 00529828
    LEA EAX,[EBX + 0x158]               ; 00529829
    PUSH EAX                            ; 0052982f
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 00529830
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00529835
    MOV EAX,dword ptr [EBX + 0x154]     ; 00529838
    PUSH EBX                            ; 0052983e
    CALL dword ptr [EAX + 0x50]         ; 0052983f
    ADD ESP,0x4                         ; 00529842
    PUSH EBX                            ; 00529845
        ;   Label: LAB_00529845
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00529846
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0052984b
    MOV EAX,EDI                         ; 0052984e
    POP ESI                             ; 00529850
    POP EDI                             ; 00529851
    ADD ESP,0x18                        ; 00529852
    POP EBX                             ; 00529855
    RET                                 ; 00529856
    MOV dword ptr [EBX + 0x2620],EAX    ; 00529857
        ;   Label: LAB_00529857
    JMP 0x0052976f                      ; 0052985d
        ;   XREF to: 0052976f (UNCONDITIONAL_JUMP)  ; LAB_0052976f
    XOR EAX,EAX                         ; 00529862
        ;   Label: LAB_00529862
    ADD ESP,0x18                        ; 00529864
    POP EBX                             ; 00529867
    RET                                 ; 00529868
    PUSH EBX                            ; 00529869
        ;   Label: LAB_00529869
    CALL core_charactr.cpp_CCharacter_FUN_00429aa0 ; 0052986a
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429aa0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0052986f
    JMP 0x0052980d                      ; 00529872
        ;   XREF to: 0052980d (UNCONDITIONAL_JUMP)  ; LAB_0052980d

