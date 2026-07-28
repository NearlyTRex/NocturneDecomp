; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_getPathMap_FUN_004f1e00(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
;
; XREF[10]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 0042261d
;   core_bugs.cpp_FUN_00422050 at 0042219f
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 at 00424959
;   core_colonel.cpp_CColonel_processAI_FUN_0043a470 at 0043a893
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004a9040 at 004a91e0
;   core_haystack.cpp_CHaystack_updateAI_FUN_004b3880 at 004b3cf3
;   core_icepick.cpp_FUN_004baba0 at 004bb137
;   core_scat.cpp_CScat_updateAI_FUN_004fc610 at 004fc7e9
;   core_svetlana.cpp_FUN_005423c0 at 00542957
;   core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0 at 00552470
;
; Called Functions:
;   core_path.cpp_getOrCreatePathMap_FUN_004f1c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1e00
        ;   Label: core_path.cpp_getPathMap_FUN_004f1e00
    PUSH EDX                            ; 004f1e04
    CALL core_path.cpp_getOrCreatePathMap_FUN_004f1c90 ; 004f1e05
        ;   XREF to: 004f1c90 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getOrCreatePathMap_FUN_004f1c90(CLocation * location)
    ADD ESP,0x4                         ; 004f1e0a
    RET                                 ; 004f1e0d

