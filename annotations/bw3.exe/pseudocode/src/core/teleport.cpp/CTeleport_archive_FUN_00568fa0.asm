; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00568fa0(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568fa0
        ;   Label: core_teleport.cpp_CTeleport_archive_FUN_00568fa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568fa1
    PUSH EBX                            ; 00568fa5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00568fa6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00568fab
    PUSH 0x0                            ; 00568fae
    LEA EAX,[EBX + 0x158]               ; 00568fb0
    PUSH EAX                            ; 00568fb6
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00568fb7
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00568fbc
    PUSH 0x0                            ; 00568fbf
    LEA EAX,[EBX + 0x164]               ; 00568fc1
    PUSH EAX                            ; 00568fc7
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00568fc8
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00568fcd
    POP EBX                             ; 00568fd0
    RET                                 ; 00568fd1

