; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004f42b0(CImp *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f42b0
        ;   Label: core_imp.cpp_CImp_getCollisionType_FUN_004f42b0
    PUSH EDX                            ; 004f42b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f42b5
    PUSH ECX                            ; 004f42b9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 004f42ba
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004f42bf
    RET                                 ; 004f42c2

