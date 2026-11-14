; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_hino_cpp_CHino_getCollisionType_FUN_0059d640(CHino *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CHino *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059d640
        ;   Label: core_hino.cpp_CHino_getCollisionType_FUN_0059d640
    PUSH EDX                            ; 0059d644
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059d645
    PUSH ECX                            ; 0059d649
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 0059d64a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0059d64f
    RET                                 ; 0059d652

