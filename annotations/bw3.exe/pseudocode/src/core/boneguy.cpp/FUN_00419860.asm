; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_boneguy_cpp_FUN_00419860(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00419860
        ;   Label: core_boneguy.cpp_FUN_00419860
    CMP dword ptr [EAX + 0xd0e4],0x0    ; 00419864
    JZ 0x00419870                       ; 0041986b
        ;   XREF to: 00419870 (CONDITIONAL_JUMP)  ; LAB_00419870
    XOR EAX,EAX                         ; 0041986d
    RET                                 ; 0041986f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00419870
        ;   Label: LAB_00419870
    PUSH ECX                            ; 00419874
    PUSH EAX                            ; 00419875
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 00419876
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0041987b
    RET                                 ; 0041987e

