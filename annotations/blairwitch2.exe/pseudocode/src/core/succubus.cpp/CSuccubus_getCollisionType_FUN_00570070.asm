; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00570070(CSuccubus *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00570070
        ;   Label: core_succubus.cpp_CSuccubus_getCollisionType_FUN_00570070
    PUSH EDX                            ; 00570074
    MOV ECX,dword ptr [ESP + 0x8]       ; 00570075
    PUSH ECX                            ; 00570079
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680 ; 0057007a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0057007f
    RET                                 ; 00570082

