; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_batcreat_cpp_CBatCreature_hasCollision_FUN_00416290(CBatCreature *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00416290
        ;   Label: core_batcreat.cpp_CBatCreature_hasCollision_FUN_00416290
    PUSH EDX                            ; 00416294
    MOV ECX,dword ptr [ESP + 0x8]       ; 00416295
    PUSH ECX                            ; 00416299
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 0041629a
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0041629f
    RET                                 ; 004162a2

