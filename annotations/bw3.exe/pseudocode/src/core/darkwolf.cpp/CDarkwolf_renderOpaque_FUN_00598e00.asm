; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_darkwolf_cpp_CDarkwolf_renderOpaque_FUN_00598e00(CDarkwolf *this_ptr)
;
; Parameters:
; CDarkwolf *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042d8e0
;   core_morph.cpp_CMorph_render_FUN_004fb0e0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598e00
        ;   Label: core_darkwolf.cpp_CDarkwolf_renderOpaque_FUN_00598e00
    SUB ESP,0x30                        ; 00598e01
    MOV EBX,dword ptr [ESP + 0x38]      ; 00598e04
    FLD float ptr [EBX + 0xdc90]        ; 00598e08
    FLD1                                ; 00598e0e
    FCOMPP                              ; 00598e10
    FNSTSW AX                           ; 00598e12
    SAHF                                ; 00598e14
    JC 0x00598e20                       ; 00598e15
        ;   XREF to: 00598e20 (CONDITIONAL_JUMP)  ; LAB_00598e20
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00598e17
    JZ 0x00598e27                       ; 00598e1e
        ;   XREF to: 00598e27 (CONDITIONAL_JUMP)  ; LAB_00598e27
    XOR EAX,EAX                         ; 00598e20
        ;   Label: LAB_00598e20
    ADD ESP,0x30                        ; 00598e22
    POP EBX                             ; 00598e25
    RET                                 ; 00598e26
    PUSH EDI                            ; 00598e27
        ;   Label: LAB_00598e27
    PUSH ESI                            ; 00598e28
    PUSH EBX                            ; 00598e29
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00598e2a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00598e2f
    PUSH 0x0                            ; 00598e32
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598e34
    PUSH EBX                            ; 00598e3a
    LEA ESI,[ESP + 0x10]                ; 00598e3b
    LEA EDI,[ESP + 0x28]                ; 00598e3f
    CALL dword ptr [EAX + 0x1c]         ; 00598e43
    MOV ECX,0x6                         ; 00598e46
    ADD ESP,0x4                         ; 00598e4b
    LEA EAX,[ESP + 0x24]                ; 00598e4e
    LEA ESI,[ESP + 0xc]                 ; 00598e52
    PUSH EAX                            ; 00598e56
    MOVSD.REP ES:EDI,ESI                ; 00598e57
    CALL core_box.cpp_FUN_0041daf0      ; 00598e59
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00598e5e
    MOV EDI,EAX                         ; 00598e61
    TEST EAX,EAX                        ; 00598e63
    JZ 0x00598e7c                       ; 00598e65
        ;   XREF to: 00598e7c (CONDITIONAL_JUMP)  ; LAB_00598e7c
    TEST dword ptr [EBX + 0xdc90],0x7fffffff ; 00598e67
    JNZ 0x00598e8e                      ; 00598e71
        ;   XREF to: 00598e8e (CONDITIONAL_JUMP)  ; LAB_00598e8e
    PUSH EBX                            ; 00598e73
    CALL core_charactr.cpp_FUN_0042d8e0 ; 00598e74
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 00598e79
    PUSH EBX                            ; 00598e7c
        ;   Label: LAB_00598e7c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00598e7d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00598e82
    MOV EAX,EDI                         ; 00598e85
    POP ESI                             ; 00598e87
    POP EDI                             ; 00598e88
    ADD ESP,0x30                        ; 00598e89
    POP EBX                             ; 00598e8c
    RET                                 ; 00598e8d
    PUSH 0x0                            ; 00598e8e
        ;   Label: LAB_00598e8e
    LEA EAX,[EBX + 0x158]               ; 00598e90
    PUSH EAX                            ; 00598e96
    PUSH 0x0                            ; 00598e97
    LEA ESI,[EBX + 0xd064]              ; 00598e99
    PUSH ESI                            ; 00598e9f
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 00598ea0
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00598ea5
    MOV EAX,dword ptr [EBX + 0xd060]    ; 00598ea8
    PUSH 0x0                            ; 00598eae
    ADD EAX,0x158                       ; 00598eb0
    PUSH EAX                            ; 00598eb5
    PUSH 0x1                            ; 00598eb6
    PUSH ESI                            ; 00598eb8
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 00598eb9
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00598ebe
    PUSH dword ptr [EBX + 0xdc90]       ; 00598ec1
    PUSH ESI                            ; 00598ec7
    CALL core_morph.cpp_CMorph_render_FUN_004fb0e0 ; 00598ec8
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004fb0e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 00598ecd
    PUSH EBX                            ; 00598ed0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00598ed1
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00598ed6
    MOV EAX,EDI                         ; 00598ed9
    POP ESI                             ; 00598edb
    POP EDI                             ; 00598edc
    ADD ESP,0x30                        ; 00598edd
    POP EBX                             ; 00598ee0
    RET                                 ; 00598ee1

