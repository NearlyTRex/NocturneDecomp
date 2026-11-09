; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_reset_FUN_0049b2d0(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190 at 0049c3b4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049b2d0
        ;   Label: core_fire.cpp_CTrail_reset_FUN_0049b2d0
    MOV dword ptr [EAX + 0x10],0x0      ; 0049b2d4
    RET                                 ; 0049b2db

