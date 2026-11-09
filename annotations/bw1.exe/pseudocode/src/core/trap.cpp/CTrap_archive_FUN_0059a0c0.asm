; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_archive_FUN_0059a0c0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005f800b
;   TerminatedCString s_wolfInTrap_005f8015
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a0c0
        ;   Label: core_trap.cpp_CTrap_archive_FUN_0059a0c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a0c1
    PUSH EBX                            ; 0059a0c5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0059a0c6
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059a0cb
    PUSH 0x5f800b                       ; 0059a0ce | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0059a0d3
    PUSH EAX                            ; 0059a0d9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 0059a0da
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 0059a0df
    PUSH 0x5f8015                       ; 0059a0e2 | = "wolfInTrap"
    LEA EAX,[EBX + 0x2d8]               ; 0059a0e7
    PUSH EAX                            ; 0059a0ed
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0059a0ee
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 0059a0f3
    POP EBX                             ; 0059a0f6
    RET                                 ; 0059a0f7

