; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hand_cpp_CHand_renderOpaque_FUN_005aa450(CHand *this_ptr)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005aa450
        ;   Label: core_hand.cpp_CHand_renderOpaque_FUN_005aa450
    PUSH EDX                            ; 005aa454
    CALL core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20 ; 005aa455
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005aa45a
    RET                                 ; 005aa45d

