; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004d81d0(CImp *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d81d0
        ;   Label: core_imp.cpp_CImp_getCollisionType_FUN_004d81d0
    PUSH EDX                            ; 004d81d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d81d5
    PUSH ECX                            ; 004d81d9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 004d81da
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004d81df
    RET                                 ; 004d81e2

