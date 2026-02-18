; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_reset_FUN_004c9460(CBulletTrail *this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9460
        ;   Label: core_fire.cpp_CBulletTrail_reset_FUN_004c9460
    MOV dword ptr [EAX + 0x18],0x0      ; 004c9464
    RET                                 ; 004c946b

