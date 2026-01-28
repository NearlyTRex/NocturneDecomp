; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_anvil_cpp_CAnvil_FUN_00412090(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_00614d95
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412090
        ;   Label: core_anvil.cpp_CAnvil_FUN_00412090
    PUSH ESI                            ; 00412091
    MOV EBX,dword ptr [ESP + 0xc]       ; 00412092
    MOV ESI,dword ptr [ESP + 0x10]      ; 00412096
    PUSH ESI                            ; 0041209a
    PUSH EBX                            ; 0041209b
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0041209c
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 004120a1
    ADD EBX,0x158                       ; 004120a4
    PUSH EBX                            ; 004120aa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004120ab
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004120b0
    PUSH EAX                            ; 004120b3
    PUSH 0x614d95                       ; 004120b4 | = "MODELS\\%s\n"
    PUSH ESI                            ; 004120b9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004120ba
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004120bf
    PUSH 0x0                            ; 004120c2
    PUSH ESI                            ; 004120c4
    PUSH EBX                            ; 004120c5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004120c6
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004120cb
    PUSH EAX                            ; 004120ce
    CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 ; 004120cf
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 004120d4
    POP ESI                             ; 004120d7
    POP EBX                             ; 004120d8
    RET                                 ; 004120d9

