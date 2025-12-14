; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flamecan.cpp_FUN_004cb750()
;
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_0062a360
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb750
        ;   Label: core_flamecan.cpp_FUN_004cb750
    PUSH ESI                            ; 004cb751
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cb752
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cb756
    PUSH ESI                            ; 004cb75a
    PUSH EBX                            ; 004cb75b
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004cb75c
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 004cb761
    ADD EBX,0x158                       ; 004cb764
    PUSH EBX                            ; 004cb76a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004cb76b
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cb770
    PUSH EAX                            ; 004cb773
    PUSH 0x62a360                       ; 004cb774 | = "MODELS\\%s\n"
    PUSH ESI                            ; 004cb779
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004cb77a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004cb77f
    PUSH 0x0                            ; 004cb782
    PUSH ESI                            ; 004cb784
    PUSH EBX                            ; 004cb785
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004cb786
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cb78b
    PUSH EAX                            ; 004cb78e
    CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 ; 004cb78f
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 004cb794
    POP ESI                             ; 004cb797
    POP EBX                             ; 004cb798
    RET                                 ; 004cb799

