; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_CMobster_getCollisionType_FUN_004dc920(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004dc920
        ;   Label: core_mobster.cpp_CMobster_getCollisionType_FUN_004dc920
    PUSH EDX                            ; 004dc924
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dc925
    PUSH ECX                            ; 004dc929
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004dc92a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004dc92f
    RET                                 ; 004dc932

