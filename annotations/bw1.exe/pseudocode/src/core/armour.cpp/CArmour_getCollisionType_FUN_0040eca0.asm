; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_0040eca0(CArmour *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040eca0
        ;   Label: core_armour.cpp_CArmour_getCollisionType_FUN_0040eca0
    PUSH EDX                            ; 0040eca4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040eca5
    PUSH ECX                            ; 0040eca9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 0040ecaa
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0040ecaf
    RET                                 ; 0040ecb2

