; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBulletHole * core_fire_cpp_CBulletHole_dtor_FUN_004a48d0(CBulletHole *this_ptr,uint flags)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a48d0
        ;   Label: core_fire.cpp_CBulletHole_dtor_FUN_004a48d0
    RET                                 ; 004a48d4

