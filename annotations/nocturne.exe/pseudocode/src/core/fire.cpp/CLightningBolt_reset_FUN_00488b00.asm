; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_reset_FUN_00488b00(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0048a150 at 0048a2f4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00488b00
        ;   Label: core_fire.cpp_CLightningBolt_reset_FUN_00488b00
    MOV dword ptr [EAX + 0x14],0x0      ; 00488b04
    RET                                 ; 00488b0b

