; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_dracbrid_cpp_CDraculaBride_getCollisionType_FUN_0047cfc0(CDraculaBride *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047cfc0
        ;   Label: core_dracbrid.cpp_CDraculaBride_getCollisionType_FUN_0047cfc0
    CMP dword ptr [EAX + 0xc2f4],0x0    ; 0047cfc4
    JZ 0x0047cfd0                       ; 0047cfcb
        ;   XREF to: 0047cfd0 (CONDITIONAL_JUMP)  ; LAB_0047cfd0
    XOR EAX,EAX                         ; 0047cfcd
        ;   Label: caseD_8
    RET                                 ; 0047cfcf
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047cfd0
        ;   Label: LAB_0047cfd0
    PUSH ECX                            ; 0047cfd4
    PUSH EAX                            ; 0047cfd5
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 0047cfd6
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0047cfdb
    RET                                 ; 0047cfde

