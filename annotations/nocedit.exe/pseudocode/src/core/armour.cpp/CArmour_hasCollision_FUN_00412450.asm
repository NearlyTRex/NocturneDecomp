; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_armour_cpp_CArmour_hasCollision_FUN_00412450(CArmour *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00412450
        ;   Label: core_armour.cpp_CArmour_hasCollision_FUN_00412450
    PUSH EDX                            ; 00412454
    MOV ECX,dword ptr [ESP + 0x8]       ; 00412455
    PUSH ECX                            ; 00412459
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 0041245a
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0041245f
    RET                                 ; 00412462

