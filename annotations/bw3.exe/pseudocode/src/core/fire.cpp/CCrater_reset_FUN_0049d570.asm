; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_reset_FUN_0049d570(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004a1480 at 004a1636
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049d570
        ;   Label: core_fire.cpp_CCrater_reset_FUN_0049d570
    MOV dword ptr [EAX + 0x4],0x0       ; 0049d574
    MOV dword ptr [EAX + 0x8],0x0       ; 0049d57b
    MOV dword ptr [EAX],0x0             ; 0049d582
    RET                                 ; 0049d588

