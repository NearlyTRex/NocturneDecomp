; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_reset_FUN_00488270(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0048a150 at 0048a2d2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00488270
        ;   Label: core_fire.cpp_CGunFlame_reset_FUN_00488270
    MOV dword ptr [EAX],0x0             ; 00488274
    RET                                 ; 0048827a

