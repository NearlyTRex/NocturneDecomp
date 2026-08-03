; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004a88d0(CGargoyle *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004a88d0
        ;   Label: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004a88d0
    PUSH EDX                            ; 004a88d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a88d5
    PUSH ECX                            ; 004a88d9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004a88da
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004a88df
    RET                                 ; 004a88e2

