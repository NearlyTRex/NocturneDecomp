; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_getPathMap_FUN_00513ea0(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
;
; XREF[11]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004203a0 at 004206cf
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00420000 at 0042015f
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 at 00423443
;   core_colonel.cpp_CColonel_processAI_FUN_00435e30 at 00436332
;   core_game.cpp_FUN_004be8a0 at 004bf2ed
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c1980 at 004c1b20
;   core_haystack.cpp_CHaystack_updateAI_FUN_004ccff0 at 004cd551
;   core_icepick.cpp_CIcePick_processAI_FUN_004d5950 at 004d5fbc
;   core_scat.cpp_CScat_updateAI_FUN_0051f490 at 0051f6d9
;   core_svetlana.cpp_CSvetlana_processAI_FUN_00570c80 at 005712ec
;   ... and 1 more
;
; Called Functions:
;   core_path.cpp_getOrCreatePathMap_FUN_00513d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00513ea0
        ;   Label: core_path.cpp_getPathMap_FUN_00513ea0
    PUSH EDX                            ; 00513ea4
    CALL core_path.cpp_getOrCreatePathMap_FUN_00513d30 ; 00513ea5
        ;   XREF to: 00513d30 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getOrCreatePathMap_FUN_00513d30(CLocation * location)
    ADD ESP,0x4                         ; 00513eaa
    RET                                 ; 00513ead

