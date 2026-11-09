; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_passngr_cpp_FUN_00532cd0(CCharacter *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
;   core_morph.cpp_CMorph_render_FUN_005237e0
;   core_morph.cpp_FUN_00523290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532cd0
        ;   Label: core_passngr.cpp_FUN_00532cd0
    SUB ESP,0x30                        ; 00532cd1
    MOV EBX,dword ptr [ESP + 0x38]      ; 00532cd4
    FLD float ptr [EBX + 0x207f0]       ; 00532cd8
    FLD1                                ; 00532cde
    FCOMPP                              ; 00532ce0
    FNSTSW AX                           ; 00532ce2
    SAHF                                ; 00532ce4
    JC 0x00532cf0                       ; 00532ce5
        ;   XREF to: 00532cf0 (CONDITIONAL_JUMP)  ; LAB_00532cf0
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00532ce7
    JZ 0x00532cf7                       ; 00532cee
        ;   XREF to: 00532cf7 (CONDITIONAL_JUMP)  ; LAB_00532cf7
    XOR EAX,EAX                         ; 00532cf0
        ;   Label: LAB_00532cf0
    ADD ESP,0x30                        ; 00532cf2
    POP EBX                             ; 00532cf5
    RET                                 ; 00532cf6
    PUSH EDI                            ; 00532cf7
        ;   Label: LAB_00532cf7
    PUSH ESI                            ; 00532cf8
    PUSH EBX                            ; 00532cf9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00532cfa
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00532cff
    PUSH 0x0                            ; 00532d02
    MOV EAX,dword ptr [EBX + 0x154]     ; 00532d04
    PUSH EBX                            ; 00532d0a
    LEA ESI,[ESP + 0x10]                ; 00532d0b
    LEA EDI,[ESP + 0x28]                ; 00532d0f
    CALL dword ptr [EAX + 0x1c]         ; 00532d13
    MOV ECX,0x6                         ; 00532d16
    ADD ESP,0x4                         ; 00532d1b
    LEA EAX,[ESP + 0x24]                ; 00532d1e
    LEA ESI,[ESP + 0xc]                 ; 00532d22
    PUSH EAX                            ; 00532d26
    MOVSD.REP ES:EDI,ESI                ; 00532d27
    CALL core_box.cpp_FUN_004207b0      ; 00532d29
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00532d2e
    MOV EDI,EAX                         ; 00532d31
    TEST EAX,EAX                        ; 00532d33
    JZ 0x00532d4c                       ; 00532d35
        ;   XREF to: 00532d4c (CONDITIONAL_JUMP)  ; LAB_00532d4c
    TEST dword ptr [EBX + 0x207f0],0x7fffffff ; 00532d37
    JNZ 0x00532d5e                      ; 00532d41
        ;   XREF to: 00532d5e (CONDITIONAL_JUMP)  ; LAB_00532d5e
    PUSH EBX                            ; 00532d43
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 00532d44
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00532d49
    PUSH EBX                            ; 00532d4c
        ;   Label: LAB_00532d4c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00532d4d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00532d52
    MOV EAX,EDI                         ; 00532d55
    POP ESI                             ; 00532d57
    POP EDI                             ; 00532d58
    ADD ESP,0x30                        ; 00532d59
    POP EBX                             ; 00532d5c
    RET                                 ; 00532d5d
    PUSH 0x0                            ; 00532d5e
        ;   Label: LAB_00532d5e
    LEA EAX,[EBX + 0x158]               ; 00532d60
    PUSH EAX                            ; 00532d66
    PUSH 0x0                            ; 00532d67
    LEA ESI,[EBX + 0x1fbc4]             ; 00532d69
    PUSH ESI                            ; 00532d6f
    CALL core_morph.cpp_FUN_00523290    ; 00532d70
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00532d75
    MOV EAX,dword ptr [EBX + 0x1fbc0]   ; 00532d78
    PUSH 0x0                            ; 00532d7e
    ADD EAX,0x158                       ; 00532d80
    PUSH EAX                            ; 00532d85
    PUSH 0x1                            ; 00532d86
    PUSH ESI                            ; 00532d88
    CALL core_morph.cpp_FUN_00523290    ; 00532d89
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00532d8e
    PUSH dword ptr [EBX + 0x207f0]      ; 00532d91
    PUSH ESI                            ; 00532d97
    CALL core_morph.cpp_CMorph_render_FUN_005237e0 ; 00532d98
        ;   XREF to: 005237e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005237e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 00532d9d
    PUSH EBX                            ; 00532da0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00532da1
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00532da6
    MOV EAX,EDI                         ; 00532da9
    POP ESI                             ; 00532dab
    POP EDI                             ; 00532dac
    ADD ESP,0x30                        ; 00532dad
    POP EBX                             ; 00532db0
    RET                                 ; 00532db1

