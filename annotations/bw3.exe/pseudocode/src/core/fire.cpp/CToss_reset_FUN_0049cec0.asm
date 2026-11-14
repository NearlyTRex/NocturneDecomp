; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_reset_FUN_0049cec0(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004a1480 at 004a1611
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049cec0
        ;   Label: core_fire.cpp_CToss_reset_FUN_0049cec0
    MOV dword ptr [EAX + 0x3dc],0x0     ; 0049cec4
    RET                                 ; 0049cece

