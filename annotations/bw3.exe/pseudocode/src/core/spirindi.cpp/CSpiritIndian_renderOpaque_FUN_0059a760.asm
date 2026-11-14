; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spirindi_cpp_CSpiritIndian_renderOpaque_FUN_0059a760(CSpiritIndian *this_ptr)
;
; Parameters:
; CSpiritIndian *  Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 0059a760
        ;   Label: core_spirindi.cpp_CSpiritIndian_renderOpaque_FUN_0059a760
    SUB ESP,0x30                        ; 0059a761
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059a764
    FLD float ptr [EBX + 0x34da0]       ; 0059a768
    FLD1                                ; 0059a76e
    FCOMPP                              ; 0059a770
    FNSTSW AX                           ; 0059a772
    SAHF                                ; 0059a774
    JC 0x0059a780                       ; 0059a775
        ;   XREF to: 0059a780 (CONDITIONAL_JUMP)  ; LAB_0059a780
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0059a777
    JZ 0x0059a787                       ; 0059a77e
        ;   XREF to: 0059a787 (CONDITIONAL_JUMP)  ; LAB_0059a787
    XOR EAX,EAX                         ; 0059a780
        ;   Label: LAB_0059a780
    ADD ESP,0x30                        ; 0059a782
    POP EBX                             ; 0059a785
    RET                                 ; 0059a786
    PUSH EDI                            ; 0059a787
        ;   Label: LAB_0059a787
    PUSH ESI                            ; 0059a788
    PUSH EBX                            ; 0059a789
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0059a78a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059a78f
    PUSH 0x0                            ; 0059a792
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059a794
    PUSH EBX                            ; 0059a79a
    LEA ESI,[ESP + 0x10]                ; 0059a79b
    LEA EDI,[ESP + 0x28]                ; 0059a79f
    CALL dword ptr [EAX + 0x1c]         ; 0059a7a3
    MOV ECX,0x6                         ; 0059a7a6
    ADD ESP,0x4                         ; 0059a7ab
    LEA EAX,[ESP + 0x24]                ; 0059a7ae
    LEA ESI,[ESP + 0xc]                 ; 0059a7b2
    PUSH EAX                            ; 0059a7b6
    MOVSD.REP ES:EDI,ESI                ; 0059a7b7
    CALL core_box.cpp_FUN_0041daf0      ; 0059a7b9
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0059a7be
    MOV EDI,EAX                         ; 0059a7c1
    TEST EAX,EAX                        ; 0059a7c3
    JZ 0x0059a7dc                       ; 0059a7c5
        ;   XREF to: 0059a7dc (CONDITIONAL_JUMP)  ; LAB_0059a7dc
    TEST dword ptr [EBX + 0x34da0],0x7fffffff ; 0059a7c7
    JNZ 0x0059a7ee                      ; 0059a7d1
        ;   XREF to: 0059a7ee (CONDITIONAL_JUMP)  ; LAB_0059a7ee
    PUSH EBX                            ; 0059a7d3
    CALL core_charactr.cpp_FUN_0042d8e0 ; 0059a7d4
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 0059a7d9
    PUSH EBX                            ; 0059a7dc
        ;   Label: LAB_0059a7dc
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0059a7dd
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059a7e2
    MOV EAX,EDI                         ; 0059a7e5
    POP ESI                             ; 0059a7e7
    POP EDI                             ; 0059a7e8
    ADD ESP,0x30                        ; 0059a7e9
    POP EBX                             ; 0059a7ec
    RET                                 ; 0059a7ed
    PUSH 0x0                            ; 0059a7ee
        ;   Label: LAB_0059a7ee
    LEA EAX,[EBX + 0x158]               ; 0059a7f0
    PUSH EAX                            ; 0059a7f6
    PUSH 0x0                            ; 0059a7f7
    LEA ESI,[EBX + 0x34174]             ; 0059a7f9
    PUSH ESI                            ; 0059a7ff
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 0059a800
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0059a805
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059a808
    PUSH 0x0                            ; 0059a80e
    ADD EAX,0x158                       ; 0059a810
    PUSH EAX                            ; 0059a815
    PUSH 0x1                            ; 0059a816
    PUSH ESI                            ; 0059a818
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 0059a819
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0059a81e
    PUSH dword ptr [EBX + 0x34da0]      ; 0059a821
    PUSH ESI                            ; 0059a827
    CALL core_morph.cpp_CMorph_render_FUN_004fb0e0 ; 0059a828
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004fb0e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 0059a82d
    PUSH EBX                            ; 0059a830
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0059a831
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059a836
    MOV EAX,EDI                         ; 0059a839
    POP ESI                             ; 0059a83b
    POP EDI                             ; 0059a83c
    ADD ESP,0x30                        ; 0059a83d
    POP EBX                             ; 0059a840
    RET                                 ; 0059a841

