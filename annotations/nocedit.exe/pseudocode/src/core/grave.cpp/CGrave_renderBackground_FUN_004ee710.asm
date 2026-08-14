; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_renderBackground_FUN_004ee710(CGrave *this_ptr,int layer_flag)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee710
        ;   Label: core_grave.cpp_CGrave_renderBackground_FUN_004ee710
    SUB ESP,0x18                        ; 004ee711
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ee714
    CMP dword ptr [ESP + 0x24],0x0      ; 004ee718
    JZ 0x004ee781                       ; 004ee71d
        ;   XREF to: 004ee781 (CONDITIONAL_JUMP)  ; LAB_004ee781
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004ee71f
    JNZ 0x004ee73b                      ; 004ee726
        ;   XREF to: 004ee73b (CONDITIONAL_JUMP)  ; LAB_004ee73b
    CMP dword ptr [EBX + 0x2e0],0x2     ; 004ee728
    JNZ 0x004ee781                      ; 004ee72f
        ;   XREF to: 004ee781 (CONDITIONAL_JUMP)  ; LAB_004ee781
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004ee731
    PUSH EBX                            ; 004ee73b
        ;   Label: LAB_004ee73b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004ee73c
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ee741
    MOV EDX,ESP                         ; 004ee744
    PUSH EDX                            ; 004ee746
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ee747
    PUSH EBX                            ; 004ee74d
    CALL dword ptr [EAX + 0x14]         ; 004ee74e
    ADD ESP,0x8                         ; 004ee751
    PUSH EAX                            ; 004ee754
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004ee755
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004ee75a
    TEST EAX,EAX                        ; 004ee75d
    JZ 0x004ee778                       ; 004ee75f
        ;   XREF to: 004ee778 (CONDITIONAL_JUMP)  ; LAB_004ee778
    PUSH -0x1                           ; 004ee761
    LEA EAX,[EBX + 0x158]               ; 004ee763
    PUSH dword ptr [EBX + 0x2d4]        ; 004ee769
    PUSH EAX                            ; 004ee76f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004ee770
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ee775
    PUSH EBX                            ; 004ee778
        ;   Label: LAB_004ee778
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004ee779
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ee77e
    ADD ESP,0x18                        ; 004ee781
        ;   Label: LAB_004ee781
    POP EBX                             ; 004ee784
    RET                                 ; 004ee785

