; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_00411820(CAmmoBox * this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411820
        ;   Label: core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_00411820
    PUSH ESI                            ; 00411821
    PUSH EDI                            ; 00411822
    PUSH EBP                            ; 00411823
    MOV EBP,ESP                         ; 00411824
    SUB ESP,0x1c                        ; 00411826
    MOV EBX,dword ptr [EBP + 0x14]      ; 00411829
    PUSH EBX                            ; 0041182c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0041182d
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00411832
    LEA ESI,[EBP + -0x1c]               ; 00411835
    PUSH ESI                            ; 00411838
    MOV EAX,dword ptr [EBX + 0x154]     ; 00411839
    PUSH EBX                            ; 0041183f
    CALL dword ptr [EAX + 0x14]         ; 00411840
    ADD ESP,0x8                         ; 00411843
    PUSH EAX                            ; 00411846
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00411847
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0041184c
    MOV EDI,EAX                         ; 0041184f
    TEST EAX,EAX                        ; 00411851
    JNZ 0x00411867                      ; 00411853
        ;   XREF to: 00411867 (CONDITIONAL_JUMP)  ; LAB_00411867
    PUSH EBX                            ; 00411855
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00411856
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041185b
    MOV EAX,EDI                         ; 0041185e
    MOV ESP,EBP                         ; 00411860
    POP EBP                             ; 00411862
    POP EDI                             ; 00411863
    POP ESI                             ; 00411864
    POP EBX                             ; 00411865
    RET                                 ; 00411866
    PUSH -0x1                           ; 00411867
        ;   Label: LAB_00411867
    LEA ESI,[EBX + 0x158]               ; 00411869
    PUSH ESI                            ; 0041186f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00411870
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 00411875
    DEC EAX                             ; 0041187b
    MOV dword ptr [EBP + -0x4],EAX      ; 0041187c
    ADD ESP,0x4                         ; 0041187f
    FILD dword ptr [EBP + -0x4]         ; 00411882
    FMUL float ptr [EBX + 0x31c]        ; 00411885
    SUB ESP,0x4                         ; 0041188b
    FSTP float ptr [ESP]                ; 0041188e
    PUSH ESI                            ; 00411891
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00411892
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00411897
    PUSH EBX                            ; 0041189a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0041189b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004118a0
    MOV EAX,EDI                         ; 004118a3
    MOV ESP,EBP                         ; 004118a5
    POP EBP                             ; 004118a7
    POP EDI                             ; 004118a8
    POP ESI                             ; 004118a9
    POP EBX                             ; 004118aa
    RET                                 ; 004118ab

