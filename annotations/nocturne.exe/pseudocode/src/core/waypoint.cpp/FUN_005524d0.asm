; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_waypoint_cpp_FUN_005524d0(undefined4 param_1)
;
;
; XREF[1]:
;   core_waypoint.cpp_FUN_005524a0 at 005524b3
;
; Referenced Globals:
;   undefined1* PTR_core_waypoint.cpp_CWaypoint_setup_FUN_00552510_005a4034 = 00552510
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_005478b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005524d0
        ;   Label: core_waypoint.cpp_FUN_005524d0
    PUSH EDX                            ; 005524d4
    CALL core_trigger.cpp_CTrigger_ctor_FUN_005478b0 ; 005524d5
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_ctor_FUN_005478b0()
    MOV dword ptr [EAX + 0x14c],0x5a4034 ; 005524da | PTR_core_waypoint.cpp_CWaypoint_setup_FUN_00552510_005a4034
    MOV dword ptr [EAX + 0x158],0x3f000000 ; 005524e4
    MOV dword ptr [EAX + 0x15c],0x3f800000 ; 005524ee
    MOV dword ptr [EAX + 0x160],0x3f000000 ; 005524f8
    ADD ESP,0x4                         ; 00552502
    MOV dword ptr [EAX + 0x368],0x0     ; 00552505
    RET                                 ; 0055250f

