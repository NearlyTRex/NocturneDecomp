; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_hasCollision_FUN_00418c60(CBiggs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00418c60
        ;   Label: core_biggs.cpp_CBiggs_hasCollision_FUN_00418c60
    PUSH EDX                            ; 00418c64
    MOV ECX,dword ptr [ESP + 0x8]       ; 00418c65
    PUSH ECX                            ; 00418c69
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 00418c6a
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00418c6f
    RET                                 ; 00418c72

