; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_hasCollision_FUN_004fb0f0(CImp *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fb0f0
        ;   Label: core_imp.cpp_CImp_hasCollision_FUN_004fb0f0
    PUSH EDX                            ; 004fb0f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fb0f5
    PUSH ECX                            ; 004fb0f9
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 004fb0fa
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004fb0ff
    RET                                 ; 004fb102

