; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_deactivate_FUN_004c9480(CBulletTrail *this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9480
        ;   Label: core_fire.cpp_CBulletTrail_deactivate_FUN_004c9480
    MOV dword ptr [EAX + 0x20],0x0      ; 004c9484
    RET                                 ; 004c948b

