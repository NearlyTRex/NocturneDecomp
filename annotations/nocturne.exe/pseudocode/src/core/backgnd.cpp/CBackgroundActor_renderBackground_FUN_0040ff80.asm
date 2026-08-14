; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ff80(CBackgroundActor *this_ptr,int layer_flag)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ff80
        ;   Label: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80
    SUB ESP,0x18                        ; 0040ff81
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040ff84
    CMP dword ptr [ESP + 0x24],0x0      ; 0040ff88
    JNZ 0x0040ff94                      ; 0040ff8d
        ;   XREF to: 0040ff94 (CONDITIONAL_JUMP)  ; LAB_0040ff94
    ADD ESP,0x18                        ; 0040ff8f
    POP EBX                             ; 0040ff92
    RET                                 ; 0040ff93
    PUSH EBX                            ; 0040ff94
        ;   Label: LAB_0040ff94
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0040ff95
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ff9a
    PUSH 0x0                            ; 0040ff9d
    LEA EDX,[ESP + 0x4]                 ; 0040ff9f
    PUSH EDX                            ; 0040ffa3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040ffa4
    PUSH EBX                            ; 0040ffaa
    CALL dword ptr [EAX + 0x14]         ; 0040ffab
    ADD ESP,0x8                         ; 0040ffae
    PUSH EAX                            ; 0040ffb1
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0040ffb2
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0040ffb7
    TEST EAX,EAX                        ; 0040ffba
    JZ 0x0040ffd1                       ; 0040ffbc
        ;   XREF to: 0040ffd1 (CONDITIONAL_JUMP)  ; LAB_0040ffd1
    PUSH -0x1                           ; 0040ffbe
    LEA EAX,[EBX + 0x150]               ; 0040ffc0
    PUSH 0x0                            ; 0040ffc6
    PUSH EAX                            ; 0040ffc8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0040ffc9
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040ffce
    PUSH EBX                            ; 0040ffd1
        ;   Label: LAB_0040ffd1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0040ffd2
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ffd7
    ADD ESP,0x18                        ; 0040ffda
    POP EBX                             ; 0040ffdd
    RET                                 ; 0040ffde

