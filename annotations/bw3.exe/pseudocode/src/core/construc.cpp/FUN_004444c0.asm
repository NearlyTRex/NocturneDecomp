; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_construc_cpp_FUN_004444c0(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004444c0
        ;   Label: core_construc.cpp_FUN_004444c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004444c4
    CMP dword ptr [EAX],0x4             ; 004444c8
    JZ 0x004444d9                       ; 004444cb
        ;   XREF to: 004444d9 (CONDITIONAL_JUMP)  ; LAB_004444d9
    CMP dword ptr [EDX + 0xd844],0x0    ; 004444cd
    JZ 0x004444df                       ; 004444d4
        ;   XREF to: 004444df (CONDITIONAL_JUMP)  ; LAB_004444df
    XOR EAX,EAX                         ; 004444d6
    RET                                 ; 004444d8
    MOV EAX,0x1                         ; 004444d9
        ;   Label: LAB_004444d9
    RET                                 ; 004444de
    PUSH EAX                            ; 004444df
        ;   Label: LAB_004444df
    PUSH EDX                            ; 004444e0
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 004444e1
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004444e6
    RET                                 ; 004444e9

