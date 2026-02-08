; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_succubus_cpp_CSuccubus_hasCollision_FUN_005c7790 (CSuccubus *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005c7790
        ;   Label: core_succubus.cpp_CSuccubus_hasCollision_FUN_005c7790
    PUSH EDX                            ; 005c7794
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c7795
    PUSH ECX                            ; 005c7799
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 005c779a
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 005c779f
    RET                                 ; 005c77a2

