; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_archive_FUN_00546b50(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00596916
;   TerminatedCString s_wolfInTrap_00596920
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546b50
        ;   Label: core_trap.cpp_CTrap_archive_FUN_00546b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546b51
    PUSH EBX                            ; 00546b55
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00546b56
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00546b5b
    PUSH 0x596916                       ; 00546b5e | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00546b63
    PUSH EAX                            ; 00546b69
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00546b6a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546b6f
    PUSH 0x596920                       ; 00546b72 | = "wolfInTrap"
    LEA EAX,[EBX + 0x2d0]               ; 00546b77
    PUSH EAX                            ; 00546b7d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00546b7e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00546b83
    POP EBX                             ; 00546b86
    RET                                 ; 00546b87

