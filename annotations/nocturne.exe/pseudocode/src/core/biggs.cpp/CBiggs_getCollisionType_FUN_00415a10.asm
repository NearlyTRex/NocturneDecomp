; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_00415a10(CBiggs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00415a10
        ;   Label: core_biggs.cpp_CBiggs_getCollisionType_FUN_00415a10
    PUSH EDX                            ; 00415a14
    MOV ECX,dword ptr [ESP + 0x8]       ; 00415a15
    PUSH ECX                            ; 00415a19
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 00415a1a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00415a1f
    RET                                 ; 00415a22

