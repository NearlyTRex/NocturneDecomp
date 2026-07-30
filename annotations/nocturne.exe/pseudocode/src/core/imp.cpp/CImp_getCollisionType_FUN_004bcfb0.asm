; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_CImp_getCollisionType_FUN_004bcfb0(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004bcfb0
        ;   Label: core_imp.cpp_CImp_getCollisionType_FUN_004bcfb0
    PUSH EDX                            ; 004bcfb4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004bcfb5
    PUSH ECX                            ; 004bcfb9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004bcfba
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004bcfbf
    RET                                 ; 004bcfc2

