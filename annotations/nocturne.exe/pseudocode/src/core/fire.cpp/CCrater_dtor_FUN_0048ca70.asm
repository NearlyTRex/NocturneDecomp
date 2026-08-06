; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_0048ca70(CCrater *this_ptr,uint flags)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048ca70
        ;   Label: core_fire.cpp_CCrater_dtor_FUN_0048ca70
    PUSH 0x0                            ; 0048ca74
    ADD EAX,0x1c                        ; 0048ca76
    PUSH EAX                            ; 0048ca79
    CALL core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0 ; 0048ca7a
        ;   XREF to: 004389e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048ca7f
    SUB EAX,0x1c                        ; 0048ca82
    RET                                 ; 0048ca85

