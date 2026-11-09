; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00594e70(CTeleportDest *this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_teleport.cpp_factoryFuncTeleportDest_FUN_00594e40 at 00594e53
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594e70
        ;   Label: core_teleport.cpp_CTeleportDest_ctor_FUN_00594e70
    PUSH EDX                            ; 00594e74
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00594e75
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00594e7a
    MOV dword ptr [EAX + 0x154],0x6068c4 ; 00594e7d
    RET                                 ; 00594e87

