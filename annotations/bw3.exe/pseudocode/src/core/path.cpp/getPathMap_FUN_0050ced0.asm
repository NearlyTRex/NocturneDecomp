; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_getPathMap_FUN_0050ced0(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
;
; XREF[6]:
;   core_bugs.cpp_FUN_004221c0 at 0042231f
;   core_bugs.cpp_FUN_00422570 at 0042288f
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 at 0042bdf5
;   core_game.cpp_FUN_004c07b0 at 004c1998
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c6c80 at 004c6e20
;   core_waypoint.cpp_FUN_00579130 at 00579202
;
; Called Functions:
;   core_path.cpp_FUN_0050cd60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050ced0
        ;   Label: core_path.cpp_getPathMap_FUN_0050ced0
    PUSH EDX                            ; 0050ced4
    CALL core_path.cpp_FUN_0050cd60     ; 0050ced5
        ;   XREF to: 0050cd60 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_FUN_0050cd60(CLocation * location)
    ADD ESP,0x4                         ; 0050ceda
    RET                                 ; 0050cedd

