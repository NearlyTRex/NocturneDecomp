; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00412670(CBatCreature *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00412670
        ;   Label: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00412670
    PUSH EDX                            ; 00412674
    MOV ECX,dword ptr [ESP + 0x8]       ; 00412675
    PUSH ECX                            ; 00412679
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 0041267a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0041267f
    RET                                 ; 00412682

