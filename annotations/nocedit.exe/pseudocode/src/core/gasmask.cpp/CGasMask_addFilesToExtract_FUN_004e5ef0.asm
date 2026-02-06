; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gasmask_cpp_CGasMask_addFilesToExtract_FUN_004e5ef0(CGasMask *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_0062dad7
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5ef0
        ;   Label: core_gasmask.cpp_CGasMask_addFilesToExtract_FUN_004e5ef0
    PUSH ESI                            ; 004e5ef1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e5ef2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e5ef6
    PUSH ESI                            ; 004e5efa
    PUSH EBX                            ; 004e5efb
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 004e5efc
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e5f01
    ADD EBX,0x158                       ; 004e5f04
    PUSH EBX                            ; 004e5f0a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004e5f0b
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e5f10
    PUSH EAX                            ; 004e5f13
    PUSH 0x62dad7                       ; 004e5f14 | = "MODELS\\%s\n"
    PUSH ESI                            ; 004e5f19
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e5f1a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004e5f1f
    PUSH 0x0                            ; 004e5f22
    PUSH ESI                            ; 004e5f24
    PUSH EBX                            ; 004e5f25
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004e5f26
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e5f2b
    PUSH EAX                            ; 004e5f2e
    CALL core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00 ; 004e5f2f
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel * this_ptr, _FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 004e5f34
    POP ESI                             ; 004e5f37
    POP EBX                             ; 004e5f38
    RET                                 ; 004e5f39

