; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_smiley_cpp_CSmiley_getCollisionType_FUN_005210b0(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005210b0
        ;   Label: core_smiley.cpp_CSmiley_getCollisionType_FUN_005210b0
    PUSH EDX                            ; 005210b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005210b5
    PUSH ECX                            ; 005210b9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 005210ba
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 005210bf
    RET                                 ; 005210c2

