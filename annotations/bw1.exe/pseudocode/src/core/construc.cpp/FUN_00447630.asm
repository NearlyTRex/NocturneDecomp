; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_construc_cpp_FUN_00447630(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00447630
        ;   Label: core_construc.cpp_FUN_00447630
    MOV EAX,dword ptr [ESP + 0x8]       ; 00447634
    CMP dword ptr [EAX],0x4             ; 00447638
    JZ 0x00447649                       ; 0044763b
        ;   XREF to: 00447649 (CONDITIONAL_JUMP)  ; LAB_00447649
    CMP dword ptr [EDX + 0xca58],0x0    ; 0044763d
    JZ 0x0044764f                       ; 00447644
        ;   XREF to: 0044764f (CONDITIONAL_JUMP)  ; LAB_0044764f
    XOR EAX,EAX                         ; 00447646
    RET                                 ; 00447648
    MOV EAX,0x1                         ; 00447649
        ;   Label: LAB_00447649
    RET                                 ; 0044764e
    PUSH EAX                            ; 0044764f
        ;   Label: LAB_0044764f
    PUSH EDX                            ; 00447650
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 00447651
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 00447656
    RET                                 ; 00447659

