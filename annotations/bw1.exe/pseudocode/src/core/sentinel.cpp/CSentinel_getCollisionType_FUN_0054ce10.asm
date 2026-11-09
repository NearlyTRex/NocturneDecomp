; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_0054ce10(CSentinel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0054ce10
        ;   Label: core_sentinel.cpp_CSentinel_getCollisionType_FUN_0054ce10
    PUSH EDX                            ; 0054ce14
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054ce15
    PUSH ECX                            ; 0054ce19
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 0054ce1a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0054ce1f
    RET                                 ; 0054ce22

