; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_reset_FUN_004c5630(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80 at 004c6e24
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5630
        ;   Label: core_fire.cpp_CLightningBolt_reset_FUN_004c5630
    MOV dword ptr [EAX + 0x14],0x0      ; 004c5634
    RET                                 ; 004c563b

