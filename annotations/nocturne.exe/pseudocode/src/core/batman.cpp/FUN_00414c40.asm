; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_batman_cpp_FUN_00414c40(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414c40
        ;   Label: core_batman.cpp_FUN_00414c40
    CMP dword ptr [EAX + 0xbdc0],0x0    ; 00414c44
    JZ 0x00414c50                       ; 00414c4b
        ;   XREF to: 00414c50 (CONDITIONAL_JUMP)  ; LAB_00414c50
    XOR EAX,EAX                         ; 00414c4d
    RET                                 ; 00414c4f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00414c50
        ;   Label: LAB_00414c50
    PUSH ECX                            ; 00414c54
    PUSH EAX                            ; 00414c55
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 00414c56
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00414c5b
    RET                                 ; 00414c5e

