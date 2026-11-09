; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_00497a30(void)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_004a24a0 at 004a252a
;
; Referenced Globals:
;   TerminatedCString s_stake_kfm_005c0508
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH 0x5c0508                       ; 00497a30 | = "stake.kfm"
        ;   Label: core_fire.cpp_FUN_00497a30
    PUSH 0x1c73698                      ; 00497a35
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00497a3a
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00497a3f
    PUSH 0x1c73698                      ; 00497a42
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 00497a47
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00497a4c
    RET                                 ; 00497a4f

