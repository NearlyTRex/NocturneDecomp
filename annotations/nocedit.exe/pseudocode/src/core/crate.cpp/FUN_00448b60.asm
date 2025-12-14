; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_crate.cpp_FUN_00448b60()
;
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_00619b4f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448b60
        ;   Label: core_crate.cpp_FUN_00448b60
    PUSH ESI                            ; 00448b61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448b62
    MOV ESI,dword ptr [ESP + 0x10]      ; 00448b66
    PUSH ESI                            ; 00448b6a
    PUSH EBX                            ; 00448b6b
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00448b6c
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 00448b71
    ADD EBX,0x158                       ; 00448b74
    PUSH EBX                            ; 00448b7a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00448b7b
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00448b80
    PUSH EAX                            ; 00448b83
    PUSH 0x619b4f                       ; 00448b84 | = "MODELS\\%s\n"
    PUSH ESI                            ; 00448b89
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00448b8a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00448b8f
    PUSH 0x0                            ; 00448b92
    PUSH ESI                            ; 00448b94
    PUSH EBX                            ; 00448b95
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00448b96
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00448b9b
    PUSH EAX                            ; 00448b9e
    CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 ; 00448b9f
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 00448ba4
    POP ESI                             ; 00448ba7
    POP EBX                             ; 00448ba8
    RET                                 ; 00448ba9

