; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_getPathMap_FUN_00548500(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
;
; XREF[10]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00425fe0 at 0042628d
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00425cc0 at 00425e0f
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 at 00428849
;   core_colonel.cpp_CColonel_FUN_0043ff20 at 00440343
;   core_haystack.cpp_CHaystack_updateAI_FUN_004f13f0 at 004f1863
;   core_icepick.cpp_CIcePick_FUN_004f8c70 at 004f9207
;   core_scat.cpp_CScat_updateAI_FUN_005578e0 at 00557ab9
;   core_svetlana.cpp_CSvetlana_processAI_FUN_005d9260 at 005d97f7
;   core_waypoint.cpp_CWayPoint_isReachable_FUN_005ebd40 at 005ebe00
;   core_waypoint.cpp_CWaypoint_renderOpaque_FUN_005ebf70 at 005ec112
;
; Called Functions:
;   core_path.cpp_getOrCreatePathMap_FUN_00548390
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00548500
        ;   Label: core_path.cpp_getPathMap_FUN_00548500
    PUSH EDX                            ; 00548504
    CALL core_path.cpp_getOrCreatePathMap_FUN_00548390 ; 00548505
        ;   XREF to: 00548390 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getOrCreatePathMap_FUN_00548390(CLocation * location)
    ADD ESP,0x4                         ; 0054850a
    RET                                 ; 0054850d

