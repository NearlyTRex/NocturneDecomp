; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004f0880(CHotDemon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f0880
        ;   Label: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004f0880
    PUSH EDX                            ; 004f0884
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f0885
    PUSH ECX                            ; 004f0889
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 004f088a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004f088f
    RET                                 ; 004f0892

