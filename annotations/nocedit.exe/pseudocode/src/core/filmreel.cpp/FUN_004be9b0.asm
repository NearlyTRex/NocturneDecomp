; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004be9b0()
;
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_00629b1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be9b0
        ;   Label: core_filmreel.cpp_FUN_004be9b0
    PUSH ESI                            ; 004be9b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004be9b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004be9b6
    PUSH ESI                            ; 004be9ba
    PUSH EBX                            ; 004be9bb
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004be9bc | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004be9c1
    ADD EBX,0x158                       ; 004be9c4
    PUSH EBX                            ; 004be9ca
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004be9cb | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004be9d0
    PUSH EAX                            ; 004be9d3
    PUSH 0x629b1c                       ; 004be9d4 | = "MODELS\\%s\n" | s_MODELS_s_00629b1c = MODELS\%s

    PUSH ESI                            ; 004be9d9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004be9da | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004be9df
    PUSH 0x0                            ; 004be9e2
    PUSH ESI                            ; 004be9e4
    PUSH EBX                            ; 004be9e5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004be9e6 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004be9eb
    PUSH EAX                            ; 004be9ee
    CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 ; 004be9ef | void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004be9f4
    POP ESI                             ; 004be9f7
    POP EBX                             ; 004be9f8
    RET                                 ; 004be9f9

