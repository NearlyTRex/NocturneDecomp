; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_reset_FUN_004b3480(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30 at 004b4d28
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b3480
        ;   Label: core_fire.cpp_CLightningBolt_reset_FUN_004b3480
    MOV dword ptr [EAX + 0x14],0x0      ; 004b3484
    RET                                 ; 004b348b

