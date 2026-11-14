; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004c1220(CGargoyle *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004c1220
        ;   Label: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004c1220
    PUSH EDX                            ; 004c1224
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c1225
    PUSH ECX                            ; 004c1229
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680 ; 004c122a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004c122f
    RET                                 ; 004c1232

