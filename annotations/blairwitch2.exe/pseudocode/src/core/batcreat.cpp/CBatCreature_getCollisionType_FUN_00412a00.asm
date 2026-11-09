; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00412a00(CBatCreature *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00412a00
        ;   Label: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00412a00
    PUSH EDX                            ; 00412a04
    MOV ECX,dword ptr [ESP + 0x8]       ; 00412a05
    PUSH ECX                            ; 00412a09
    CALL core_charactr.cpp_FUN_00427680 ; 00412a0a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 00412a0f
    RET                                 ; 00412a12

