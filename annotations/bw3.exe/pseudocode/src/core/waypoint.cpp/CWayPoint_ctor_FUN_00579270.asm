; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_00579270(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_factoryFuncWayPoint_FUN_00579240 at 00579253
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00579270
        ;   Label: core_waypoint.cpp_CWayPoint_ctor_FUN_00579270
    PUSH EDX                            ; 00579274
    CALL core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0 ; 00579275
        ;   XREF to: 0056dfa0 (UNCONDITIONAL_CALL)  ; CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_0056dfa0(CTrigger * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5e6124 ; 0057927a
    MOV dword ptr [EAX + 0x160],0x3f000000 ; 00579284
    MOV dword ptr [EAX + 0x164],0x3f800000 ; 0057928e
    MOV dword ptr [EAX + 0x168],0x3f000000 ; 00579298
    ADD ESP,0x4                         ; 005792a2
    MOV dword ptr [EAX + 0x374],0x0     ; 005792a5
    RET                                 ; 005792af

