; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_reset_FUN_004992a0(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190 at 0049c326
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004992a0
        ;   Label: core_fire.cpp_CToss_reset_FUN_004992a0
    MOV dword ptr [EAX + 0x3dc],0x0     ; 004992a4
    RET                                 ; 004992ae

