; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_004153f0(CBiggs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004153f0
        ;   Label: core_biggs.cpp_CBiggs_getCollisionType_FUN_004153f0
    PUSH EDX                            ; 004153f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004153f5
    PUSH ECX                            ; 004153f9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680 ; 004153fa
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004153ff
    RET                                 ; 00415402

