; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_reset_FUN_004c3ed0(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80 at 004c6db8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3ed0
        ;   Label: core_fire.cpp_CToss_reset_FUN_004c3ed0
    MOV dword ptr [EAX + 0x3dc],0x0     ; 004c3ed4
    RET                                 ; 004c3ede

