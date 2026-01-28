; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_mobster_cpp_FUN_005279d0(void)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005279d0
        ;   Label: core_mobster.cpp_FUN_005279d0
    PUSH EDX                            ; 005279d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005279d5
    PUSH ECX                            ; 005279d9
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 005279da
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 005279df
    RET                                 ; 005279e2

