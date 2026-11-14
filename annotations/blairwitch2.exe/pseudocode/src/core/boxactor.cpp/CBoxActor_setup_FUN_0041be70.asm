; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_0041be70(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   core_boxactor.cpp_CLightActor_setup_FUN_0041cff0 at 0041cfff
;   core_doc.cpp_CDoc_setup_FUN_00450620 at 00450a16
;   core_hpbox.cpp_CParticleBox_setup_FUN_005ac8d0 at 005ac8d7
;   core_mine.cpp_CSpiritMine_setup_FUN_005ad4f0 at 005ad4f7
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_boxactor.cpp_FUN_0041bf10
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041be70
        ;   Label: core_boxactor.cpp_CBoxActor_setup_FUN_0041be70
    PUSH ESI                            ; 0041be71
    SUB ESP,0x4                         ; 0041be72
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041be75
    PUSH EBX                            ; 0041be79
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0041be7a
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041be7f
    LEA ESI,[EBX + 0x2b4]               ; 0041be82
    PUSH ESI                            ; 0041be88
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0041be89
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041be8e
    PUSH ESI                            ; 0041be91
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0041be92
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x46c]         ; 0041be97
    FLDZ                                ; 0041be9d
    ADD ESP,0x4                         ; 0041be9f
    MOV ESI,dword ptr [EAX + 0x100]     ; 0041bea2
    FCOMPP                              ; 0041bea8
    FNSTSW AX                           ; 0041beaa
    SAHF                                ; 0041beac
    JA 0x0041bee6                       ; 0041bead
        ;   XREF to: 0041bee6 (CONDITIONAL_JUMP)  ; LAB_0041bee6
    MOV dword ptr [ESP],ESI             ; 0041beaf
        ;   Label: LAB_0041beaf
    FILD dword ptr [ESP]                ; 0041beb2
    FCOMP float ptr [EBX + 0x46c]       ; 0041beb5
    FNSTSW AX                           ; 0041bebb
    SAHF                                ; 0041bebd
    JA 0x0041becd                       ; 0041bebe
        ;   XREF to: 0041becd (CONDITIONAL_JUMP)  ; LAB_0041becd
    DEC ESI                             ; 0041bec0
    MOV dword ptr [ESP],ESI             ; 0041bec1
    FILD dword ptr [ESP]                ; 0041bec4
    FSTP float ptr [EBX + 0x46c]        ; 0041bec7
    CMP dword ptr [EBX + 0x744],0x0     ; 0041becd
        ;   Label: LAB_0041becd
    JL 0x0041bef2                       ; 0041bed4
        ;   XREF to: 0041bef2 (CONDITIONAL_JUMP)  ; LAB_0041bef2
    MOV dword ptr [EBX + 0x484],0x0     ; 0041bed6
    ADD ESP,0x4                         ; 0041bee0
    POP ESI                             ; 0041bee3
    POP EBX                             ; 0041bee4
    RET                                 ; 0041bee5
    MOV dword ptr [EBX + 0x46c],0x0     ; 0041bee6
        ;   Label: LAB_0041bee6
    JMP 0x0041beaf                      ; 0041bef0
        ;   XREF to: 0041beaf (UNCONDITIONAL_JUMP)  ; LAB_0041beaf
    PUSH EBX                            ; 0041bef2
        ;   Label: LAB_0041bef2
    CALL core_boxactor.cpp_FUN_0041bf10 ; 0041bef3
        ;   XREF to: 0041bf10 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_0041bf10()
    ADD ESP,0x4                         ; 0041bef8
    MOV dword ptr [EBX + 0x484],0x0     ; 0041befb
    ADD ESP,0x4                         ; 0041bf05
    POP ESI                             ; 0041bf08
    POP EBX                             ; 0041bf09
    RET                                 ; 0041bf0a

