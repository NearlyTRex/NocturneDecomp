; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_dracbrid_cpp_CDraculaBride_getCollisionType_FUN_0045a240(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045a240
        ;   Label: core_dracbrid.cpp_CDraculaBride_getCollisionType_FUN_0045a240
    CMP dword ptr [EAX + 0xbdb0],0x0    ; 0045a244
    JZ 0x0045a250                       ; 0045a24b
        ;   XREF to: 0045a250 (CONDITIONAL_JUMP)  ; LAB_0045a250
    XOR EAX,EAX                         ; 0045a24d
        ;   Label: caseD_8
    RET                                 ; 0045a24f
    MOV ECX,dword ptr [ESP + 0x8]       ; 0045a250
        ;   Label: LAB_0045a250
    PUSH ECX                            ; 0045a254
    PUSH EAX                            ; 0045a255
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 0045a256
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0045a25b
    RET                                 ; 0045a25e

