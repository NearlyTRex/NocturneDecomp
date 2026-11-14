; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_archive_FUN_0056d0b0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d657a
;   TerminatedCString s_wolfInTrap_005d6584
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d0b0
        ;   Label: core_trap.cpp_CTrap_archive_FUN_0056d0b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056d0b1
    PUSH EBX                            ; 0056d0b5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0056d0b6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056d0bb
    PUSH 0x5d657a                       ; 0056d0be | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0056d0c3
    PUSH EAX                            ; 0056d0c9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0056d0ca
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056d0cf
    PUSH 0x5d6584                       ; 0056d0d2 | = "wolfInTrap"
    LEA EAX,[EBX + 0x2d8]               ; 0056d0d7
    PUSH EAX                            ; 0056d0dd
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0056d0de
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056d0e3
    POP EBX                             ; 0056d0e6
    RET                                 ; 0056d0e7

