; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_CTeleport_archive_FUN_005950c0(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005950c0
        ;   Label: core_teleport.cpp_CTeleport_archive_FUN_005950c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005950c1
    PUSH EBX                            ; 005950c5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 005950c6
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005950cb
    PUSH 0x0                            ; 005950ce
    LEA EAX,[EBX + 0x158]               ; 005950d0
    PUSH EAX                            ; 005950d6
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 005950d7
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 005950dc
    PUSH 0x0                            ; 005950df
    LEA EAX,[EBX + 0x164]               ; 005950e1
    PUSH EAX                            ; 005950e7
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005950e8
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005950ed
    POP EBX                             ; 005950f0
    RET                                 ; 005950f1

