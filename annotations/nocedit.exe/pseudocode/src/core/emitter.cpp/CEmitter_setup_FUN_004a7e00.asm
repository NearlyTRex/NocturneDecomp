; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004a7e00(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7e00
        ;   Label: core_emitter.cpp_CEmitter_setup_FUN_004a7e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7e01
    PUSH EBX                            ; 004a7e05
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004a7e06
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0x234]         ; 004a7e0b
    ADD ESP,0x4                         ; 004a7e11
    MOV EDX,dword ptr [EBX + 0x158]     ; 004a7e14
    FSTP float ptr [EBX + 0x448]        ; 004a7e1a
    CMP EDX,0x4                         ; 004a7e20
    JZ 0x004a7e50                       ; 004a7e23
        ;   XREF to: 004a7e50 (CONDITIONAL_JUMP)  ; LAB_004a7e50
    CMP dword ptr [EBX + 0x3d0],0x0     ; 004a7e25
        ;   Label: LAB_004a7e25
    JZ 0x004a7e61                       ; 004a7e2c
        ;   XREF to: 004a7e61 (CONDITIONAL_JUMP)  ; LAB_004a7e61
    MOV dword ptr [EBX + 0x438],0x0     ; 004a7e2e
        ;   Label: LAB_004a7e2e
    MOV EAX,dword ptr [EBX + 0x168]     ; 004a7e38
    MOV dword ptr [EBX + 0x48c],0x0     ; 004a7e3e
    MOV dword ptr [EBX + 0x490],EAX     ; 004a7e48
    POP EBX                             ; 004a7e4e
    RET                                 ; 004a7e4f
    LEA EAX,[EBX + 0x248]               ; 004a7e50
        ;   Label: LAB_004a7e50
    PUSH EAX                            ; 004a7e56
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004a7e57
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a7e5c
    JMP 0x004a7e25                      ; 004a7e5f
        ;   XREF to: 004a7e25 (UNCONDITIONAL_JUMP)  ; LAB_004a7e25
    MOV EAX,[0x02db87d0]                ; 004a7e61 | g_LocalHeroIndex
        ;   Label: LAB_004a7e61
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004a7e66 | g_HeroActors
    MOV dword ptr [EBX + 0x3d0],EAX     ; 004a7e6d
    JMP 0x004a7e2e                      ; 004a7e73
        ;   XREF to: 004a7e2e (UNCONDITIONAL_JUMP)  ; LAB_004a7e2e

