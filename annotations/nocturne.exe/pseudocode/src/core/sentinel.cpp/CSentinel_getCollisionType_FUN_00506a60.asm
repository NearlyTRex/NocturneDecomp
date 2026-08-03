; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00506a60(CSentinel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00506a60
        ;   Label: core_sentinel.cpp_CSentinel_getCollisionType_FUN_00506a60
    PUSH EDX                            ; 00506a64
    MOV ECX,dword ptr [ESP + 0x8]       ; 00506a65
    PUSH ECX                            ; 00506a69
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 00506a6a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00506a6f
    RET                                 ; 00506a72

