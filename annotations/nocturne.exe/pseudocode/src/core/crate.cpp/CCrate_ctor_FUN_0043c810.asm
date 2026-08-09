; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_0043c810(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crate.cpp_factoryFuncCrate_FUN_0043c7e0 at 0043c7f3
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_0057b422
;   CDemonActor_vtable g_CCrateVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c810
        ;   Label: core_crate.cpp_CCrate_ctor_FUN_0043c810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043c811
    PUSH EBX                            ; 0043c815
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 0043c816
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043c81b
    ADD EAX,0x150                       ; 0043c81e
    PUSH EAX                            ; 0043c823
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0043c824
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043c829
    LEA EBX,[EAX + 0xfffffeb0]          ; 0043c82c
    PUSH 0x57b422                       ; 0043c832 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 0043c837
    PUSH EAX                            ; 0043c83d
    MOV dword ptr [EBX + 0x14c],0x59ba34 ; 0043c83e | g_CCrateVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0043c848
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0043c84d
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0043c850
    MOV EAX,EBX                         ; 0043c85a
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0043c85c
    POP EBX                             ; 0043c866
    RET                                 ; 0043c867

