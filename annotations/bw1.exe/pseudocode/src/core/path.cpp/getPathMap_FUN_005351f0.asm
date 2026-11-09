; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_getPathMap_FUN_005351f0(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
;
; XREF[11]:
;   core_bugs.cpp_FUN_00426030 at 0042618f
;   core_bugs.cpp_FUN_004263d0 at 004266ff
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 at 0042d133
;   core_colonel.cpp_FUN_00444b4e at 00445052
;   core_game.cpp_FUN_004d9260 at 004da161
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004de100 at 004de2a0
;   core_haystack.cpp_FUN_004e98b0 at 004e9e11
;   core_icepick.cpp_FUN_004f1b50 at 004f21bc
;   core_scat.cpp_FUN_005415c0 at 005417fb
;   core_svetlana.cpp_FUN_005938c0 at 00593f2c
;   ... and 1 more
;
; Called Functions:
;   core_path.cpp_FUN_00535080
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005351f0
        ;   Label: core_path.cpp_getPathMap_FUN_005351f0
    PUSH EDX                            ; 005351f4
    CALL core_path.cpp_FUN_00535080     ; 005351f5
        ;   XREF to: 00535080 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_FUN_00535080(CLocation * location)
    ADD ESP,0x4                         ; 005351fa
    RET                                 ; 005351fd

