; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dracbrid_cpp_CDraculaBride_hasCollision_FUN_00485bc0(CDraculaBride *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00485bc0
        ;   Label: core_dracbrid.cpp_CDraculaBride_hasCollision_FUN_00485bc0
    CMP dword ptr [EAX + 0xbf48],0x0    ; 00485bc4
    JZ 0x00485bd0                       ; 00485bcb
        ;   XREF to: 00485bd0 (CONDITIONAL_JUMP)  ; LAB_00485bd0
    XOR EAX,EAX                         ; 00485bcd
        ;   Label: caseD_f
    RET                                 ; 00485bcf
    MOV ECX,dword ptr [ESP + 0x8]       ; 00485bd0
        ;   Label: LAB_00485bd0
    PUSH ECX                            ; 00485bd4
    PUSH EAX                            ; 00485bd5
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 00485bd6
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00485bdb
    RET                                 ; 00485bde

