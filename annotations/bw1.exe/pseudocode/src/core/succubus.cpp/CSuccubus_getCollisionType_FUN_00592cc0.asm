; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00592cc0(CSuccubus *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00592cc0
        ;   Label: core_succubus.cpp_CSuccubus_getCollisionType_FUN_00592cc0
    PUSH EDX                            ; 00592cc4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00592cc5
    PUSH ECX                            ; 00592cc9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 00592cca
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00592ccf
    RET                                 ; 00592cd2

