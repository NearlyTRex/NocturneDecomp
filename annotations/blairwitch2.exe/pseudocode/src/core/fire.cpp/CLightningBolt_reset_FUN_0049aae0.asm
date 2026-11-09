; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_reset_FUN_0049aae0(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190 at 0049c391
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049aae0
        ;   Label: core_fire.cpp_CLightningBolt_reset_FUN_0049aae0
    MOV dword ptr [EAX + 0x14],0x0      ; 0049aae4
    RET                                 ; 0049aaeb

