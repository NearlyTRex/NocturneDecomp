; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_zombiepriest_cpp_CZombiePriest_getCollisionType_FUN_0058fc60(CZombiePriest *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CZombiePriest *  Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0058fc60
        ;   Label: core_zombiepriest.cpp_CZombiePriest_getCollisionType_FUN_0058fc60
    PUSH EDX                            ; 0058fc64
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058fc65
    PUSH ECX                            ; 0058fc69
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 0058fc6a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0058fc6f
    RET                                 ; 0058fc72

