; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004c6530(CGargoyle *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004c6530
        ;   Label: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004c6530
    PUSH EDX                            ; 004c6534
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c6535
    PUSH ECX                            ; 004c6539
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 004c653a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004c653f
    RET                                 ; 004c6542

