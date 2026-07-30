; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_CArmour_getCollisionType_FUN_0040fc10(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040fc10
        ;   Label: core_armour.cpp_CArmour_getCollisionType_FUN_0040fc10
    PUSH EDX                            ; 0040fc14
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040fc15
    PUSH ECX                            ; 0040fc19
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 0040fc1a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0040fc1f
    RET                                 ; 0040fc22

