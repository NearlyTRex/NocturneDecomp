; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_door_cpp_CDoor_renderBackground_FUN_004809e0(CDoor *this_ptr,int layer_flag)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 004809e0
        ;   Label: core_door.cpp_CDoor_renderBackground_FUN_004809e0
    SUB ESP,0x18                        ; 004809e1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004809e4
    CMP dword ptr [ESP + 0x24],0x0      ; 004809e8
    JZ 0x004809f8                       ; 004809ed
        ;   XREF to: 004809f8 (CONDITIONAL_JUMP)  ; LAB_004809f8
    CMP dword ptr [EBX + 0x9c8],0x2     ; 004809ef
    JGE 0x004809fd                      ; 004809f6
        ;   XREF to: 004809fd (CONDITIONAL_JUMP)  ; LAB_004809fd
    ADD ESP,0x18                        ; 004809f8
        ;   Label: LAB_004809f8
    POP EBX                             ; 004809fb
    RET                                 ; 004809fc
    PUSH EBX                            ; 004809fd
        ;   Label: LAB_004809fd
    MOV dword ptr [EBX + 0x9c8],0x3     ; 004809fe
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00480a08
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00480a0d
    MOV EDX,ESP                         ; 00480a10
    PUSH EDX                            ; 00480a12
    MOV EAX,dword ptr [EBX + 0x154]     ; 00480a13
    PUSH EBX                            ; 00480a19
    CALL dword ptr [EAX + 0x14]         ; 00480a1a
    ADD ESP,0x8                         ; 00480a1d
    PUSH EAX                            ; 00480a20
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00480a21
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00480a26
    TEST EAX,EAX                        ; 00480a29
    JZ 0x00480a40                       ; 00480a2b
        ;   XREF to: 00480a40 (CONDITIONAL_JUMP)  ; LAB_00480a40
    PUSH -0x1                           ; 00480a2d
    LEA EAX,[EBX + 0x158]               ; 00480a2f
    PUSH 0x0                            ; 00480a35
    PUSH EAX                            ; 00480a37
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00480a38
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00480a3d
    PUSH EBX                            ; 00480a40
        ;   Label: LAB_00480a40
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00480a41
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00480a46
    ADD ESP,0x18                        ; 00480a49
    POP EBX                             ; 00480a4c
    RET                                 ; 00480a4d

