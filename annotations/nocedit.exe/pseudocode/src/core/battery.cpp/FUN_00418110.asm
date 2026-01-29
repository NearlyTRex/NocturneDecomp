; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_battery_cpp_FUN_00418110(void)
;
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_00615a4a
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418110
        ;   Label: core_battery.cpp_FUN_00418110
    PUSH ESI                            ; 00418111
    MOV EBX,dword ptr [ESP + 0xc]       ; 00418112
    MOV ESI,dword ptr [ESP + 0x10]      ; 00418116
    PUSH ESI                            ; 0041811a
    PUSH EBX                            ; 0041811b
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0041811c
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00418121
    ADD EBX,0x158                       ; 00418124
    PUSH EBX                            ; 0041812a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0041812b
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00418130
    PUSH EAX                            ; 00418133
    PUSH 0x615a4a                       ; 00418134 | = "MODELS\\%s\n"
    PUSH ESI                            ; 00418139
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0041813a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0041813f
    PUSH 0x0                            ; 00418142
    PUSH ESI                            ; 00418144
    PUSH EBX                            ; 00418145
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00418146
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041814b
    PUSH EAX                            ; 0041814e
    CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 ; 0041814f
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, _FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 00418154
    POP ESI                             ; 00418157
    POP EBX                             ; 00418158
    RET                                 ; 00418159

