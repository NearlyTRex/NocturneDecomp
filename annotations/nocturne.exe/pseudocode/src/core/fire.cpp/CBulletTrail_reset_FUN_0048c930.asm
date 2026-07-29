; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_reset_FUN_0048c930(CBulletTrail *this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048c930
        ;   Label: core_fire.cpp_CBulletTrail_reset_FUN_0048c930
    MOV dword ptr [EAX + 0x18],0x0      ; 0048c934
    RET                                 ; 0048c93b

