; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_sentinel_cpp_FUN_00568ef0(void)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00568ef0
        ;   Label: core_sentinel.cpp_FUN_00568ef0
    PUSH EDX                            ; 00568ef4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00568ef5
    PUSH ECX                            ; 00568ef9
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 00568efa
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00568eff
    RET                                 ; 00568f02

