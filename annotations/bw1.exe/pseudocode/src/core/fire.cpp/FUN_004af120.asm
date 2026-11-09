; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004af120(void)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0 at 004b5b0c
;
; Referenced Globals:
;   TerminatedCString s_leaf_d_kfm_005df26c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af120
        ;   Label: core_fire.cpp_FUN_004af120
    PUSH ESI                            ; 004af121
    SUB ESP,0x64                        ; 004af122
    MOV EBX,0x1c576a8                   ; 004af125
    XOR ESI,ESI                         ; 004af12a
    INC ESI                             ; 004af12c
        ;   Label: LAB_004af12c
    PUSH ESI                            ; 004af12d
    PUSH 0x5df26c                       ; 004af12e | = "leaf%d.kfm"
    LEA EAX,[ESP + 0x8]                 ; 004af133
    PUSH EAX                            ; 004af137
    CALL crt_unknown.c_FUN_005bfb40     ; 004af138
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004af13d
    MOV EAX,ESP                         ; 004af140
    PUSH EAX                            ; 004af142
    PUSH EBX                            ; 004af143
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004af144
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004af149
    PUSH EBX                            ; 004af14c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004af14d
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004af152
    ADD EBX,0x17c                       ; 004af155
    CMP ESI,0x4                         ; 004af15b
    JL 0x004af12c                       ; 004af15e
        ;   XREF to: 004af12c (CONDITIONAL_JUMP)  ; LAB_004af12c
    ADD ESP,0x64                        ; 004af160
    POP ESI                             ; 004af163
    POP EBX                             ; 004af164
    RET                                 ; 004af165

