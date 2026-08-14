; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_drip_cpp_CDrip_renderOpaque_FUN_00462720(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462720
        ;   Label: core_drip.cpp_CDrip_renderOpaque_FUN_00462720
    PUSH ESI                            ; 00462721
    SUB ESP,0x18                        ; 00462722
    MOV EBX,dword ptr [ESP + 0x24]      ; 00462725
    PUSH EBX                            ; 00462729
    MOV dword ptr [EBX + 0x330],0x0     ; 0046272a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00462734
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00462739
    PUSH 0x0                            ; 0046273c
    LEA EAX,[ESP + 0x4]                 ; 0046273e
    PUSH EAX                            ; 00462742
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00462743
    PUSH EBX                            ; 00462749
    CALL dword ptr [ESI + 0x14]         ; 0046274a
    ADD ESP,0x8                         ; 0046274d
    PUSH EAX                            ; 00462750
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00462751
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00462756
    MOV ESI,EAX                         ; 00462759
    TEST EAX,EAX                        ; 0046275b
    JNZ 0x00462770                      ; 0046275d
        ;   XREF to: 00462770 (CONDITIONAL_JUMP)  ; LAB_00462770
    PUSH EBX                            ; 0046275f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00462760
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00462765
    MOV EAX,ESI                         ; 00462768
    ADD ESP,0x18                        ; 0046276a
    POP ESI                             ; 0046276d
    POP EBX                             ; 0046276e
    RET                                 ; 0046276f
    PUSH -0x1                           ; 00462770
        ;   Label: LAB_00462770
    LEA EAX,[EBX + 0x150]               ; 00462772
    PUSH 0x0                            ; 00462778
    PUSH EAX                            ; 0046277a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0046277b
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00462780
    MOV dword ptr [EBX + 0x330],0x1     ; 00462783
    PUSH EBX                            ; 0046278d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0046278e
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00462793
    MOV EAX,ESI                         ; 00462796
    ADD ESP,0x18                        ; 00462798
    POP ESI                             ; 0046279b
    POP EBX                             ; 0046279c
    RET                                 ; 0046279d

