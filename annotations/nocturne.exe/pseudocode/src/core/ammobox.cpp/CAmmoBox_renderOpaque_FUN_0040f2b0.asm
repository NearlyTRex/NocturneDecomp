; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammobox_cpp_CAmmoBox_renderOpaque_FUN_0040f2b0(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f2b0
        ;   Label: core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040f2b0
    PUSH ESI                            ; 0040f2b1
    PUSH EDI                            ; 0040f2b2
    PUSH EBP                            ; 0040f2b3
    MOV EBP,ESP                         ; 0040f2b4
    SUB ESP,0x1c                        ; 0040f2b6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040f2b9
    PUSH EBX                            ; 0040f2bc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0040f2bd
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f2c2
    PUSH 0x0                            ; 0040f2c5
    LEA ESI,[EBP + -0x1c]               ; 0040f2c7
    PUSH ESI                            ; 0040f2ca
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040f2cb
    PUSH EBX                            ; 0040f2d1
    CALL dword ptr [EAX + 0x14]         ; 0040f2d2
    ADD ESP,0x8                         ; 0040f2d5
    PUSH EAX                            ; 0040f2d8
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0040f2d9
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0040f2de
    MOV EDI,EAX                         ; 0040f2e1
    TEST EAX,EAX                        ; 0040f2e3
    JNZ 0x0040f2f9                      ; 0040f2e5
        ;   XREF to: 0040f2f9 (CONDITIONAL_JUMP)  ; LAB_0040f2f9
    PUSH EBX                            ; 0040f2e7
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0040f2e8
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f2ed
    MOV EAX,EDI                         ; 0040f2f0
    MOV ESP,EBP                         ; 0040f2f2
    POP EBP                             ; 0040f2f4
    POP EDI                             ; 0040f2f5
    POP ESI                             ; 0040f2f6
    POP EBX                             ; 0040f2f7
    RET                                 ; 0040f2f8
    PUSH -0x1                           ; 0040f2f9
        ;   Label: LAB_0040f2f9
    LEA ESI,[EBX + 0x150]               ; 0040f2fb
    PUSH ESI                            ; 0040f301
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0040f302
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 0040f307
    DEC EAX                             ; 0040f30d
    MOV dword ptr [EBP + -0x4],EAX      ; 0040f30e
    ADD ESP,0x4                         ; 0040f311
    FILD dword ptr [EBP + -0x4]         ; 0040f314
    FMUL float ptr [EBX + 0x314]        ; 0040f317
    SUB ESP,0x4                         ; 0040f31d
    FSTP float ptr [ESP]                ; 0040f320
    PUSH ESI                            ; 0040f323
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0040f324
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040f329
    PUSH EBX                            ; 0040f32c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0040f32d
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f332
    MOV EAX,EDI                         ; 0040f335
    MOV ESP,EBP                         ; 0040f337
    POP EBP                             ; 0040f339
    POP EDI                             ; 0040f33a
    POP ESI                             ; 0040f33b
    POP EBX                             ; 0040f33c
    RET                                 ; 0040f33d

