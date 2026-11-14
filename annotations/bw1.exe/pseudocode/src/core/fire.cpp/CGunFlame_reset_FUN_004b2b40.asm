; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_reset_FUN_004b2b40(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30 at 004b4d05
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2b40
        ;   Label: core_fire.cpp_CGunFlame_reset_FUN_004b2b40
    MOV dword ptr [EAX],0x0             ; 004b2b44
    RET                                 ; 004b2b4a

