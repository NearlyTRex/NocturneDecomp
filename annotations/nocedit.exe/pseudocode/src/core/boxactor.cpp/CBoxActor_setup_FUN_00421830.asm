; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421830(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_setup_FUN_00422a20 at 00422a2f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421830
        ;   Label: core_boxactor.cpp_CBoxActor_setup_FUN_00421830
    PUSH ESI                            ; 00421831
    SUB ESP,0x4                         ; 00421832
    MOV EBX,dword ptr [ESP + 0x10]      ; 00421835
    PUSH EBX                            ; 00421839
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0042183a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042183f
    LEA ESI,[EBX + 0x158]               ; 00421842
    PUSH ESI                            ; 00421848
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00421849
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042184e
    PUSH ESI                            ; 00421851
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00421852
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x310]         ; 00421857
    FLDZ                                ; 0042185d
    ADD ESP,0x4                         ; 0042185f
    MOV ESI,dword ptr [EAX + 0x100]     ; 00421862
    FCOMPP                              ; 00421868
    FNSTSW AX                           ; 0042186a
    SAHF                                ; 0042186c
    JA 0x004218a6                       ; 0042186d
        ;   XREF to: 004218a6 (CONDITIONAL_JUMP)  ; LAB_004218a6
    MOV dword ptr [ESP],ESI             ; 0042186f
        ;   Label: LAB_0042186f
    FILD dword ptr [ESP]                ; 00421872
    FCOMP float ptr [EBX + 0x310]       ; 00421875
    FNSTSW AX                           ; 0042187b
    SAHF                                ; 0042187d
    JA 0x0042188d                       ; 0042187e
        ;   XREF to: 0042188d (CONDITIONAL_JUMP)  ; LAB_0042188d
    DEC ESI                             ; 00421880
    MOV dword ptr [ESP],ESI             ; 00421881
    FILD dword ptr [ESP]                ; 00421884
    FSTP float ptr [EBX + 0x310]        ; 00421887
    CMP dword ptr [EBX + 0x5e8],0x0     ; 0042188d
        ;   Label: LAB_0042188d
    JL 0x004218b2                       ; 00421894
        ;   XREF to: 004218b2 (CONDITIONAL_JUMP)  ; LAB_004218b2
    MOV dword ptr [EBX + 0x328],0x0     ; 00421896
    ADD ESP,0x4                         ; 004218a0
    POP ESI                             ; 004218a3
    POP EBX                             ; 004218a4
    RET                                 ; 004218a5
    MOV dword ptr [EBX + 0x310],0x0     ; 004218a6
        ;   Label: LAB_004218a6
    JMP 0x0042186f                      ; 004218b0
        ;   XREF to: 0042186f (UNCONDITIONAL_JUMP)  ; LAB_0042186f
    PUSH EBX                            ; 004218b2
        ;   Label: LAB_004218b2
    CALL core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0 ; 004218b3
        ;   XREF to: 004218d0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 004218b8
    MOV dword ptr [EBX + 0x328],0x0     ; 004218bb
    ADD ESP,0x4                         ; 004218c5
    POP ESI                             ; 004218c8
    POP EBX                             ; 004218c9
    RET                                 ; 004218ca

