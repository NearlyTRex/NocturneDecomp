; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGoggles * __cdecl core_goggles_cpp_CGoggles_ctor_FUN_004cc6c0(CGoggles *this_ptr)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_goggles.cpp_factoryFuncGoggles_FUN_004cc690 at 004cc6a3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc6c0
        ;   Label: core_goggles.cpp_CGoggles_ctor_FUN_004cc6c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc6c1
    PUSH EBX                            ; 004cc6c5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004cc6c6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cc6cb
    ADD EAX,0x158                       ; 004cc6ce
    PUSH EAX                            ; 004cc6d3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 004cc6d4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cc6d9
    LEA EBX,[EAX + 0xfffffea8]          ; 004cc6dc
    PUSH 0x5c4601                       ; 004cc6e2
    LEA EAX,[EBX + 0x158]               ; 004cc6e7
    PUSH EAX                            ; 004cc6ed
    MOV dword ptr [EBX + 0x154],0x5e0d04 ; 004cc6ee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004cc6f8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004cc6fd
    MOV EAX,EBX                         ; 004cc700
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004cc702
    POP EBX                             ; 004cc70c
    RET                                 ; 004cc70d

