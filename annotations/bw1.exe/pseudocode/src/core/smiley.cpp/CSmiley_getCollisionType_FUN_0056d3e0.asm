; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_0056d3e0(CSmiley *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0056d3e0
        ;   Label: core_smiley.cpp_CSmiley_getCollisionType_FUN_0056d3e0
    PUSH EDX                            ; 0056d3e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056d3e5
    PUSH ECX                            ; 0056d3e9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 0056d3ea
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0056d3ef
    RET                                 ; 0056d3f2

