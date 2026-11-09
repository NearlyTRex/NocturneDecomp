; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00532500(CSentinel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00532500
        ;   Label: core_sentinel.cpp_CSentinel_getCollisionType_FUN_00532500
    PUSH EDX                            ; 00532504
    MOV ECX,dword ptr [ESP + 0x8]       ; 00532505
    PUSH ECX                            ; 00532509
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 0053250a
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0053250f
    RET                                 ; 00532512

