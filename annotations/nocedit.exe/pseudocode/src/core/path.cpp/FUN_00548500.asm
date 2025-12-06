; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_path.cpp_FUN_00548500()
;
;
; XREF[10]:
;   core_bugs.cpp_FUN_00425cc0 at 00425e0f
;   core_bugs.cpp_FUN_00425fe0 at 0042628d
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 at 00428849
;   core_colonel.cpp_FUN_0043ff20 at 00440343
;   core_haystack.cpp_FUN_004f13f0 at 004f1863
;   core_icepick.cpp_FUN_004f8c70 at 004f9207
;   core_scat.cpp_FUN_005578e0 at 00557ab9
;   core_svetlana.cpp_FUN_005d9260 at 005d97f7
;   core_waypoint.cpp_CWaypoint_FUN_005ebf70 at 005ec112
;   core_waypoint.cpp_FUN_005ebd40 at 005ebe00
;
; Called Functions:
;   core_path.cpp_FUN_00548390
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00548500
        ;   Label: core_path.cpp_FUN_00548500
    PUSH EDX                            ; 00548504
    CALL core_path.cpp_FUN_00548390     ; 00548505 | undefined core_path.cpp_FUN_00548390()
        ;   XREF to: 00548390 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054850a
    RET                                 ; 0054850d

