; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00541840(CSuccubus *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00541840
        ;   Label: core_succubus.cpp_CSuccubus_getCollisionType_FUN_00541840
    PUSH EDX                            ; 00541844
    MOV ECX,dword ptr [ESP + 0x8]       ; 00541845
    PUSH ECX                            ; 00541849
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 0054184a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0054184f
    RET                                 ; 00541852

