; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049a1a0(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190 at 0049c36e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049a1a0
        ;   Label: core_fire.cpp_FUN_0049a1a0
    MOV dword ptr [EAX],0x0             ; 0049a1a4
    RET                                 ; 0049a1aa

