; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043c810(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0043c7e0 at 0043c7f3
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_0057b422
;   undefined1* PTR_core_crate.cpp_CCrate_setup_FUN_0043c870_0059ba34 = 0043c870
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c810
        ;   Label: FUN_0043c810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043c811
    PUSH EBX                            ; 0043c815
    CALL core_actor.cpp_FUN_00409d30    ; 0043c816
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 0043c81b
    ADD EAX,0x150                       ; 0043c81e
    PUSH EAX                            ; 0043c823
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0043c824
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0043c829
    LEA EBX,[EAX + 0xfffffeb0]          ; 0043c82c
    PUSH 0x57b422                       ; 0043c832 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 0043c837
    PUSH EAX                            ; 0043c83d
    MOV dword ptr [EBX + 0x14c],0x59ba34 ; 0043c83e | PTR_core_crate.cpp_CCrate_setup_FUN_0043c870_0059ba34
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0043c848
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0043c84d
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0043c850
    MOV EAX,EBX                         ; 0043c85a
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0043c85c
    POP EBX                             ; 0043c866
    RET                                 ; 0043c867

