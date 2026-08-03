; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004b99b0(CHotDemon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004b99b0
        ;   Label: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004b99b0
    PUSH EDX                            ; 004b99b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b99b5
    PUSH ECX                            ; 004b99b9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004b99ba
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004b99bf
    RET                                 ; 004b99c2

