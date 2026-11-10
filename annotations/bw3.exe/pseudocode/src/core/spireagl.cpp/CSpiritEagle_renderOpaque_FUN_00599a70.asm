; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spireagl_cpp_CSpiritEagle_renderOpaque_FUN_00599a70(CSpiritEagle *this_ptr)
;
; Parameters:
; CSpiritEagle *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_charactr.cpp_FUN_0042d8e0
;   core_morph.cpp_CMorph_render_FUN_004fb0e0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599a70
        ;   Label: core_spireagl.cpp_CSpiritEagle_renderOpaque_FUN_00599a70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599a71
    FLD float ptr [EBX + 0x214a0]       ; 00599a75
    FLD1                                ; 00599a7b
    FCOMPP                              ; 00599a7d
    FNSTSW AX                           ; 00599a7f
    SAHF                                ; 00599a81
    JC 0x00599a8d                       ; 00599a82
        ;   XREF to: 00599a8d (CONDITIONAL_JUMP)  ; LAB_00599a8d
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00599a84
    JZ 0x00599a91                       ; 00599a8b
        ;   XREF to: 00599a91 (CONDITIONAL_JUMP)  ; LAB_00599a91
    XOR EAX,EAX                         ; 00599a8d
        ;   Label: LAB_00599a8d
    POP EBX                             ; 00599a8f
    RET                                 ; 00599a90
    PUSH EBX                            ; 00599a91
        ;   Label: LAB_00599a91
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00599a92
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV ECX,dword ptr [EBX + 0x214a0]   ; 00599a97
    ADD ESP,0x4                         ; 00599a9d
    TEST ECX,0x7fffffff                 ; 00599aa0
    JNZ 0x00599ac1                      ; 00599aa6
        ;   XREF to: 00599ac1 (CONDITIONAL_JUMP)  ; LAB_00599ac1
    PUSH EBX                            ; 00599aa8
    CALL core_charactr.cpp_FUN_0042d8e0 ; 00599aa9
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 00599aae
    PUSH EBX                            ; 00599ab1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00599ab2
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 00599ab7
    ADD ESP,0x4                         ; 00599abc
    POP EBX                             ; 00599abf
    RET                                 ; 00599ac0
    PUSH ESI                            ; 00599ac1
        ;   Label: LAB_00599ac1
    PUSH 0x0                            ; 00599ac2
    LEA EAX,[EBX + 0x158]               ; 00599ac4
    PUSH EAX                            ; 00599aca
    PUSH 0x0                            ; 00599acb
    LEA ESI,[EBX + 0x20874]             ; 00599acd
    PUSH ESI                            ; 00599ad3
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 00599ad4
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00599ad9
    MOV EAX,dword ptr [EBX + 0x20870]   ; 00599adc
    PUSH 0x0                            ; 00599ae2
    ADD EAX,0x158                       ; 00599ae4
    PUSH EAX                            ; 00599ae9
    PUSH 0x1                            ; 00599aea
    PUSH ESI                            ; 00599aec
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 00599aed
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00599af2
    PUSH dword ptr [EBX + 0x214a0]      ; 00599af5
    PUSH ESI                            ; 00599afb
    CALL core_morph.cpp_CMorph_render_FUN_004fb0e0 ; 00599afc
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004fb0e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 00599b01
    POP ESI                             ; 00599b04
    PUSH EBX                            ; 00599b05
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00599b06
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 00599b0b
    ADD ESP,0x4                         ; 00599b10
    POP EBX                             ; 00599b13
    RET                                 ; 00599b14

