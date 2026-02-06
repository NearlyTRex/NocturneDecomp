; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_005208b0(CMimic *this_ptr,int layer_flag)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_cloth.cpp_CCloth_render_FUN_0043bae0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005208b0
        ;   Label: core_mimic.cpp_CMimic_renderBackground_FUN_005208b0
    SUB ESP,0x18                        ; 005208b1
    MOV EBX,dword ptr [ESP + 0x20]      ; 005208b4
    CMP dword ptr [EBX + 0xbe28],0x0    ; 005208b8
    JZ 0x00520929                       ; 005208bf
        ;   XREF to: 00520929 (CONDITIONAL_JUMP)  ; LAB_00520929
    CMP dword ptr [ESP + 0x24],0x0      ; 005208c1
    JZ 0x005208d2                       ; 005208c6
        ;   XREF to: 005208d2 (CONDITIONAL_JUMP)  ; LAB_005208d2
    MOV dword ptr [EBX + 0x240c],0x1    ; 005208c8
    PUSH EBX                            ; 005208d2
        ;   Label: LAB_005208d2
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005208d3
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005208d8
    MOV EAX,ESP                         ; 005208db
    PUSH EAX                            ; 005208dd
    MOV EDX,dword ptr [EBX + 0x154]     ; 005208de
    PUSH EBX                            ; 005208e4
    CALL dword ptr [EDX + 0x14]         ; 005208e5
    ADD ESP,0x8                         ; 005208e8
    PUSH EAX                            ; 005208eb
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005208ec
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005208f1
    TEST EAX,EAX                        ; 005208f4
    JZ 0x00520920                       ; 005208f6
        ;   XREF to: 00520920 (CONDITIONAL_JUMP)  ; LAB_00520920
    PUSH 0x0                            ; 005208f8
    PUSH 0x1                            ; 005208fa
    PUSH -0x1                           ; 005208fc
    PUSH -0x1                           ; 005208fe
    LEA EAX,[EBX + 0x158]               ; 00520900
    PUSH EAX                            ; 00520906
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 00520907
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0052090c
    PUSH 0x0                            ; 0052090f
    LEA EAX,[EBX + 0xbf84]              ; 00520911
    PUSH EAX                            ; 00520917
    CALL core_cloth.cpp_CCloth_render_FUN_0043bae0 ; 00520918
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_0043bae0(CCloth * this_ptr, int use_joined_light)
    ADD ESP,0x8                         ; 0052091d
    PUSH EBX                            ; 00520920
        ;   Label: LAB_00520920
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00520921
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00520926
    ADD ESP,0x18                        ; 00520929
        ;   Label: LAB_00520929
    POP EBX                             ; 0052092c
    RET                                 ; 0052092d

