; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CGunFlame_ctor_FUN_004c4da0(CGunFlame * this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80 at 004c6e02
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c4da0
        ;   Label: core_fire.cpp_CGunFlame_ctor_FUN_004c4da0
    MOV dword ptr [EAX],0x0             ; 004c4da4
    RET                                 ; 004c4daa

