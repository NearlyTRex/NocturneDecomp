; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boxactor_cpp_CBoxActor_addFilesToExtract_FUN_00422900(CBoxActor *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_006168e8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422900
        ;   Label: core_boxactor.cpp_CBoxActor_addFilesToExtract_FUN_00422900
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422901
    ADD EBX,0x158                       ; 00422905
    PUSH EBX                            ; 0042290b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0042290c
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00422911
    PUSH EAX                            ; 00422914
    PUSH 0x6168e8                       ; 00422915 | = "MODELS\\%s\n"
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042291a
    PUSH EDX                            ; 0042291e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0042291f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00422924
    PUSH 0x0                            ; 00422927
    MOV ECX,dword ptr [ESP + 0x10]      ; 00422929
    PUSH ECX                            ; 0042292d
    PUSH EBX                            ; 0042292e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0042292f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00422934
    PUSH EAX                            ; 00422937
    CALL core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00 ; 00422938
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel * this_ptr, _FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 0042293d
    POP EBX                             ; 00422940
    RET                                 ; 00422941

