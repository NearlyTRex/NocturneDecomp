; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_FUN_00576800(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005eccf1
;   TerminatedCString s_wolfInTrap_005eccfb
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576800
        ;   Label: core_trap.cpp_FUN_00576800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576801
    PUSH EBX                            ; 00576805
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00576806
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057680b
    PUSH 0x5eccf1                       ; 0057680e | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 00576813
    PUSH EAX                            ; 00576819
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0057681a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 0057681f
    PUSH 0x5eccfb                       ; 00576822 | = "wolfInTrap"
    LEA EAX,[EBX + 0x434]               ; 00576827
    PUSH EAX                            ; 0057682d
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0057682e
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 00576833
    POP EBX                             ; 00576836
    RET                                 ; 00576837

