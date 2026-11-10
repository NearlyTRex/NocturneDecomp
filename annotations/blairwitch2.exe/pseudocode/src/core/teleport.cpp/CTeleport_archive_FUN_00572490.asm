; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00572490(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572490
        ;   Label: core_teleport.cpp_CTeleport_archive_FUN_00572490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572491
    PUSH EBX                            ; 00572495
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00572496
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057249b
    PUSH 0x0                            ; 0057249e
    LEA EAX,[EBX + 0x2b4]               ; 005724a0
    PUSH EAX                            ; 005724a6
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 005724a7
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 005724ac
    PUSH 0x0                            ; 005724af
    LEA EAX,[EBX + 0x2c0]               ; 005724b1
    PUSH EAX                            ; 005724b7
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 005724b8
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 005724bd
    POP EBX                             ; 005724c0
    RET                                 ; 005724c1

