; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_004150d0(CBiggs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004150d0
        ;   Label: core_biggs.cpp_CBiggs_getCollisionType_FUN_004150d0
    PUSH EDX                            ; 004150d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004150d5
    PUSH ECX                            ; 004150d9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 004150da
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004150df
    RET                                 ; 004150e2

