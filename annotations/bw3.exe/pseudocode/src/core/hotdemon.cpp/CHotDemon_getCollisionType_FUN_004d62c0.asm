; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004d62c0(CHotDemon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d62c0
        ;   Label: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004d62c0
    PUSH EDX                            ; 004d62c4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d62c5
    PUSH ECX                            ; 004d62c9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 004d62ca
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004d62cf
    RET                                 ; 004d62d2

