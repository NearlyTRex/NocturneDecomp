; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_004389c0(SClothVertex *this_ptr,uint flags)
;
; Parameters:
; SClothVertex *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor3_FUN_004389e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004389c0
        ;   Label: core_cloth.cpp_SClothVertex_dtor_FUN_004389c0
    PUSH 0x0                            ; 004389c4
    ADD EAX,0xec                        ; 004389c6
    PUSH EAX                            ; 004389cb
    CALL core_cloth.cpp_CVector3f_arrdtor3_FUN_004389e0 ; 004389cc
        ;   XREF to: 004389e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_CVector3f_arrdtor3_FUN_004389e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004389d1
    SUB EAX,0xec                        ; 004389d4
    RET                                 ; 004389d9

