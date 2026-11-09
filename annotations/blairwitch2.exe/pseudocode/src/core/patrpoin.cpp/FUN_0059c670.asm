; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_patrpoin_cpp_FUN_0059c670(CWayPoint *param_1)
;
;
; Called Functions:
;   core_waypoint.cpp_FUN_00587dc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c670
        ;   Label: core_patrpoin.cpp_FUN_0059c670
    PUSH EDX                            ; 0059c674
    CALL core_waypoint.cpp_FUN_00587dc0 ; 0059c675
        ;   XREF to: 00587dc0 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_FUN_00587dc0(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 0059c67a
    RET                                 ; 0059c67d

