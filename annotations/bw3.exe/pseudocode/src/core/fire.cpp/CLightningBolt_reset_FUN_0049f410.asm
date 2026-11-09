; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_reset_FUN_0049f410(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1480 at 004a167c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049f410
        ;   Label: core_fire.cpp_CLightningBolt_reset_FUN_0049f410
    MOV dword ptr [EAX + 0x14],0x0      ; 0049f414
    RET                                 ; 0049f41b

