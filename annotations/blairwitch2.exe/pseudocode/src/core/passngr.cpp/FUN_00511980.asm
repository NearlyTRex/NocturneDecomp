; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_passngr_cpp_FUN_00511980(CCharacter *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_FUN_00424bd0
;   core_morph.cpp_CMorph_render_FUN_005b76a0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511980
        ;   Label: core_passngr.cpp_FUN_00511980
    SUB ESP,0x30                        ; 00511981
    MOV EBX,dword ptr [ESP + 0x38]      ; 00511984
    FLD float ptr [EBX + 0x25080]       ; 00511988
    FLD1                                ; 0051198e
    FCOMPP                              ; 00511990
    FNSTSW AX                           ; 00511992
    SAHF                                ; 00511994
    JC 0x005119a0                       ; 00511995
        ;   XREF to: 005119a0 (CONDITIONAL_JUMP)  ; LAB_005119a0
    CMP dword ptr [EBX + 0x2568],0x0    ; 00511997
    JZ 0x005119a7                       ; 0051199e
        ;   XREF to: 005119a7 (CONDITIONAL_JUMP)  ; LAB_005119a7
    XOR EAX,EAX                         ; 005119a0
        ;   Label: LAB_005119a0
    ADD ESP,0x30                        ; 005119a2
    POP EBX                             ; 005119a5
    RET                                 ; 005119a6
    PUSH EDI                            ; 005119a7
        ;   Label: LAB_005119a7
    PUSH ESI                            ; 005119a8
    PUSH EBX                            ; 005119a9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 005119aa
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005119af
    PUSH 0x0                            ; 005119b2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005119b4
    PUSH EBX                            ; 005119ba
    LEA ESI,[ESP + 0x10]                ; 005119bb
    LEA EDI,[ESP + 0x28]                ; 005119bf
    CALL dword ptr [EAX + 0x24]         ; 005119c3
    MOV ECX,0x6                         ; 005119c6
    ADD ESP,0x4                         ; 005119cb
    LEA EAX,[ESP + 0x24]                ; 005119ce
    LEA ESI,[ESP + 0xc]                 ; 005119d2
    PUSH EAX                            ; 005119d6
    MOVSD.REP ES:EDI,ESI                ; 005119d7
    CALL core_box.cpp_FUN_0041a840      ; 005119d9
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 005119de
    MOV EDI,EAX                         ; 005119e1
    TEST EAX,EAX                        ; 005119e3
    JZ 0x005119fc                       ; 005119e5
        ;   XREF to: 005119fc (CONDITIONAL_JUMP)  ; LAB_005119fc
    TEST dword ptr [EBX + 0x25080],0x7fffffff ; 005119e7
    JNZ 0x00511a0e                      ; 005119f1
        ;   XREF to: 00511a0e (CONDITIONAL_JUMP)  ; LAB_00511a0e
    PUSH EBX                            ; 005119f3
    CALL core_charactr.cpp_FUN_00424bd0 ; 005119f4
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005119f9
    PUSH EBX                            ; 005119fc
        ;   Label: LAB_005119fc
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005119fd
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00511a02
    MOV EAX,EDI                         ; 00511a05
    POP ESI                             ; 00511a07
    POP EDI                             ; 00511a08
    ADD ESP,0x30                        ; 00511a09
    POP EBX                             ; 00511a0c
    RET                                 ; 00511a0d
    PUSH 0x0                            ; 00511a0e
        ;   Label: LAB_00511a0e
    LEA EAX,[EBX + 0x2b4]               ; 00511a10
    PUSH EAX                            ; 00511a16
    PUSH 0x0                            ; 00511a17
    LEA ESI,[EBX + 0x24454]             ; 00511a19
    PUSH ESI                            ; 00511a1f
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 00511a20
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00511a25
    MOV EAX,dword ptr [EBX + 0x24450]   ; 00511a28
    PUSH 0x0                            ; 00511a2e
    ADD EAX,0x2b4                       ; 00511a30
    PUSH EAX                            ; 00511a35
    PUSH 0x1                            ; 00511a36
    PUSH ESI                            ; 00511a38
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 00511a39
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00511a3e
    PUSH dword ptr [EBX + 0x25080]      ; 00511a41
    PUSH ESI                            ; 00511a47
    CALL core_morph.cpp_CMorph_render_FUN_005b76a0 ; 00511a48
        ;   XREF to: 005b76a0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005b76a0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 00511a4d
    PUSH EBX                            ; 00511a50
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00511a51
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00511a56
    MOV EAX,EDI                         ; 00511a59
    POP ESI                             ; 00511a5b
    POP EDI                             ; 00511a5c
    ADD ESP,0x30                        ; 00511a5d
    POP EBX                             ; 00511a60
    RET                                 ; 00511a61

