; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_cloth_cpp_SClothVertex_dtor_FUN_004389c0(int param_1)
;
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004389c0
        ;   Label: core_cloth.cpp_SClothVertex_dtor_FUN_004389c0
    PUSH 0x0                            ; 004389c4
    ADD EAX,0xec                        ; 004389c6
    PUSH EAX                            ; 004389cb
    CALL core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0 ; 004389cc
        ;   XREF to: 004389e0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0()
    ADD ESP,0x8                         ; 004389d1
    SUB EAX,0xec                        ; 004389d4
    RET                                 ; 004389d9

