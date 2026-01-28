; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_stairs_cpp_FUN_005babf0(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005babf0
        ;   Label: core_stairs.cpp_FUN_005babf0
    PUSH EDX                            ; 005babf4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005babf5
    PUSH ECX                            ; 005babf9
    CALL core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000 ; 005babfa
        ;   XREF to: 0040d000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000(CDemonActor * this_ptr, CDemonActor * deleted_actor)
    ADD ESP,0x8                         ; 005babff
    RET                                 ; 005bac02

