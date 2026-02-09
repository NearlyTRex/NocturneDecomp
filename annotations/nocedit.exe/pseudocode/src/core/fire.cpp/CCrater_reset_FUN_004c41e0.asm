; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CCrater_reset_FUN_004c41e0(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80 at 004c6ddf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c41e0
        ;   Label: core_fire.cpp_CCrater_reset_FUN_004c41e0
    MOV dword ptr [EAX + 0x4],0x0       ; 004c41e4
    MOV dword ptr [EAX + 0x8],0x0       ; 004c41eb
    MOV dword ptr [EAX],0x0             ; 004c41f2
    RET                                 ; 004c41f8

