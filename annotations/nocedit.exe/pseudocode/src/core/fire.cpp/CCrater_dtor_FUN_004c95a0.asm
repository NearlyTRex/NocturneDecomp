; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_004c95a0(CCrater *this_ptr,uint flags)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor3_FUN_0043e460
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c95a0
        ;   Label: core_fire.cpp_CCrater_dtor_FUN_004c95a0
    PUSH 0x0                            ; 004c95a4
    ADD EAX,0x1c                        ; 004c95a6
    PUSH EAX                            ; 004c95a9
    CALL core_cloth.cpp_CVector3f_arrdtor3_FUN_0043e460 ; 004c95aa
        ;   XREF to: 0043e460 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_CVector3f_arrdtor3_FUN_0043e460(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c95af
    SUB EAX,0x1c                        ; 004c95b2
    RET                                 ; 004c95b5

