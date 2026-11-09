; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPatrolPoint * core_patrpoin_cpp_CPatrolPoint_ctor_FUN_0059c5e0(CPatrolPoint *this_ptr)
;
; Parameters:
; CPatrolPoint *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_patrpoin.cpp_factoryFuncPatrolPoint_FUN_0059c5b0 at 0059c5c3
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c5e0
        ;   Label: core_patrpoin.cpp_CPatrolPoint_ctor_FUN_0059c5e0
    PUSH EDX                            ; 0059c5e4
    CALL core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70 ; 0059c5e5
        ;   XREF to: 00587d70 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70(CWayPoint * this_ptr)
    MOV dword ptr [EAX + 0x2b0],0x5fe7b4 ; 0059c5ea
    ADD ESP,0x4                         ; 0059c5f4
    MOV dword ptr [EAX + 0x6b8],0x1     ; 0059c5f7
    RET                                 ; 0059c601

