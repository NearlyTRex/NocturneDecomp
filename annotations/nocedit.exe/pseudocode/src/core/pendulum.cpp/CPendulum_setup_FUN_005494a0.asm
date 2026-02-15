; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_005494a0(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005494a0
        ;   Label: core_pendulum.cpp_CPendulum_setup_FUN_005494a0
    SUB ESP,0x48                        ; 005494a1
    MOV EBX,dword ptr [ESP + 0x50]      ; 005494a4
    LEA EAX,[EBX + 0x158]               ; 005494a8
    PUSH EAX                            ; 005494ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005494af
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005494b4
    PUSH EBX                            ; 005494b7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005494b8
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

