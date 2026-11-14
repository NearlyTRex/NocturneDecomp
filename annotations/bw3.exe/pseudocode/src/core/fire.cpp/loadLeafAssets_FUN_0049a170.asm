; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadLeafAssets_FUN_0049a170(void)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004a24a0 at 004a2539
;
; Referenced Globals:
;   TerminatedCString s_leaf_d_kfm_005c05a8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a170
        ;   Label: core_fire.cpp_loadLeafAssets_FUN_0049a170
    PUSH ESI                            ; 0049a171
    SUB ESP,0x64                        ; 0049a172
    MOV EBX,0x1c73c88                   ; 0049a175
    XOR ESI,ESI                         ; 0049a17a
    INC ESI                             ; 0049a17c
        ;   Label: LAB_0049a17c
    PUSH ESI                            ; 0049a17d
    PUSH 0x5c05a8                       ; 0049a17e | = "leaf%d.kfm"
    LEA EAX,[ESP + 0x8]                 ; 0049a183
    PUSH EAX                            ; 0049a187
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0049a188
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0049a18d
    MOV EAX,ESP                         ; 0049a190
    PUSH EAX                            ; 0049a192
    PUSH EBX                            ; 0049a193
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0049a194
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0049a199
    PUSH EBX                            ; 0049a19c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0049a19d
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049a1a2
    ADD EBX,0x17c                       ; 0049a1a5
    CMP ESI,0x4                         ; 0049a1ab
    JL 0x0049a17c                       ; 0049a1ae
        ;   XREF to: 0049a17c (CONDITIONAL_JUMP)  ; LAB_0049a17c
    ADD ESP,0x64                        ; 0049a1b0
    POP ESI                             ; 0049a1b3
    POP EBX                             ; 0049a1b4
    RET                                 ; 0049a1b5

