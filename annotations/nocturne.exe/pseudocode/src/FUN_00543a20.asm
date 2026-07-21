; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543a20(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543a20
        ;   Label: FUN_00543a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543a21
    PUSH EBX                            ; 00543a25
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00543a26
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 00543a2b
    PUSH 0x0                            ; 00543a2e
    LEA EAX,[EBX + 0x150]               ; 00543a30
    PUSH EAX                            ; 00543a36
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00543a37
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 00543a3c
    PUSH 0x0                            ; 00543a3f
    LEA EAX,[EBX + 0x15c]               ; 00543a41
    PUSH EAX                            ; 00543a47
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00543a48
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00543a4d
    POP EBX                             ; 00543a50
    RET                                 ; 00543a51

