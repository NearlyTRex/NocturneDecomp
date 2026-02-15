; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_reset_FUN_004c5de0(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80 at 004c6e47
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5de0
        ;   Label: core_fire.cpp_CTrail_reset_FUN_004c5de0
    MOV dword ptr [EAX + 0x10],0x0      ; 004c5de4
    RET                                 ; 004c5deb

