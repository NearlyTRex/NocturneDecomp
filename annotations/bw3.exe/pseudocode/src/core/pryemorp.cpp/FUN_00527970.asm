; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_pryemorp_cpp_FUN_00527970(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042d8e0
;   core_morph.cpp_CMorph_render_FUN_004fb0e0
;   core_morph.cpp_FUN_004fab90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527970
        ;   Label: core_pryemorp.cpp_FUN_00527970
    SUB ESP,0x30                        ; 00527971
    MOV EBX,dword ptr [ESP + 0x38]      ; 00527974
    FLD float ptr [EBX + 0x21440]       ; 00527978
    FLD1                                ; 0052797e
    FCOMPP                              ; 00527980
    FNSTSW AX                           ; 00527982
    SAHF                                ; 00527984
    JC 0x00527990                       ; 00527985
        ;   XREF to: 00527990 (CONDITIONAL_JUMP)  ; LAB_00527990
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00527987
    JZ 0x00527997                       ; 0052798e
        ;   XREF to: 00527997 (CONDITIONAL_JUMP)  ; LAB_00527997
    XOR EAX,EAX                         ; 00527990
        ;   Label: LAB_00527990
    ADD ESP,0x30                        ; 00527992
    POP EBX                             ; 00527995
    RET                                 ; 00527996
    PUSH EDI                            ; 00527997
        ;   Label: LAB_00527997
    PUSH ESI                            ; 00527998
    PUSH EBX                            ; 00527999
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0052799a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0052799f
    PUSH 0x0                            ; 005279a2
    MOV EAX,dword ptr [EBX + 0x154]     ; 005279a4
    PUSH EBX                            ; 005279aa
    LEA ESI,[ESP + 0x10]                ; 005279ab
    LEA EDI,[ESP + 0x28]                ; 005279af
    CALL dword ptr [EAX + 0x1c]         ; 005279b3
    MOV ECX,0x6                         ; 005279b6
    ADD ESP,0x4                         ; 005279bb
    LEA EAX,[ESP + 0x24]                ; 005279be
    LEA ESI,[ESP + 0xc]                 ; 005279c2
    PUSH EAX                            ; 005279c6
    MOVSD.REP ES:EDI,ESI                ; 005279c7
    CALL core_box.cpp_FUN_0041daf0      ; 005279c9
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005279ce
    MOV EDI,EAX                         ; 005279d1
    TEST EAX,EAX                        ; 005279d3
    JZ 0x005279ec                       ; 005279d5
        ;   XREF to: 005279ec (CONDITIONAL_JUMP)  ; LAB_005279ec
    TEST dword ptr [EBX + 0x21440],0x7fffffff ; 005279d7
    JNZ 0x005279fe                      ; 005279e1
        ;   XREF to: 005279fe (CONDITIONAL_JUMP)  ; LAB_005279fe
    PUSH EBX                            ; 005279e3
    CALL core_charactr.cpp_FUN_0042d8e0 ; 005279e4
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 005279e9
    PUSH EBX                            ; 005279ec
        ;   Label: LAB_005279ec
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005279ed
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005279f2
    MOV EAX,EDI                         ; 005279f5
    POP ESI                             ; 005279f7
    POP EDI                             ; 005279f8
    ADD ESP,0x30                        ; 005279f9
    POP EBX                             ; 005279fc
    RET                                 ; 005279fd
    PUSH 0x0                            ; 005279fe
        ;   Label: LAB_005279fe
    LEA EAX,[EBX + 0x158]               ; 00527a00
    PUSH EAX                            ; 00527a06
    PUSH 0x0                            ; 00527a07
    LEA ESI,[EBX + 0x20814]             ; 00527a09
    PUSH ESI                            ; 00527a0f
    CALL core_morph.cpp_FUN_004fab90    ; 00527a10
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00527a15
    MOV EAX,dword ptr [EBX + 0x20810]   ; 00527a18
    PUSH 0x0                            ; 00527a1e
    ADD EAX,0x158                       ; 00527a20
    PUSH EAX                            ; 00527a25
    PUSH 0x1                            ; 00527a26
    PUSH ESI                            ; 00527a28
    CALL core_morph.cpp_FUN_004fab90    ; 00527a29
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00527a2e
    PUSH dword ptr [EBX + 0x21440]      ; 00527a31
    PUSH ESI                            ; 00527a37
    CALL core_morph.cpp_CMorph_render_FUN_004fb0e0 ; 00527a38
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004fb0e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 00527a3d
    PUSH EBX                            ; 00527a40
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00527a41
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00527a46
    MOV EAX,EDI                         ; 00527a49
    POP ESI                             ; 00527a4b
    POP EDI                             ; 00527a4c
    ADD ESP,0x30                        ; 00527a4d
    POP EBX                             ; 00527a50
    RET                                 ; 00527a51

