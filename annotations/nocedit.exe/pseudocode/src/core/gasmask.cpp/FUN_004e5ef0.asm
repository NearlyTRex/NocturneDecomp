; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gasmask.cpp_FUN_004e5ef0()
;
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_0062dad7
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5ef0
        ;   Label: core_gasmask.cpp_FUN_004e5ef0
    PUSH ESI                            ; 004e5ef1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e5ef2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e5ef6
    PUSH ESI                            ; 004e5efa
    PUSH EBX                            ; 004e5efb
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004e5efc | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e5f01
    ADD EBX,0x158                       ; 004e5f04
    PUSH EBX                            ; 004e5f0a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004e5f0b | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e5f10
    PUSH EAX                            ; 004e5f13
    PUSH 0x62dad7                       ; 004e5f14 | = "MODELS\\%s\n" | s_MODELS_s_0062dad7 = MODELS\%s

    PUSH ESI                            ; 004e5f19
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e5f1a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e5f1f
    PUSH 0x0                            ; 004e5f22
    PUSH ESI                            ; 004e5f24
    PUSH EBX                            ; 004e5f25
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004e5f26 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e5f2b
    PUSH EAX                            ; 004e5f2e
    CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 ; 004e5f2f | void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e5f34
    POP ESI                             ; 004e5f37
    POP EBX                             ; 004e5f38
    RET                                 ; 004e5f39

