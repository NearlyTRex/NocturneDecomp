; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004dd9b0(CGargoyle *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004dd9b0
        ;   Label: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004dd9b0
    PUSH EDX                            ; 004dd9b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dd9b5
    PUSH ECX                            ; 004dd9b9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 004dd9ba
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004dd9bf
    RET                                 ; 004dd9c2

