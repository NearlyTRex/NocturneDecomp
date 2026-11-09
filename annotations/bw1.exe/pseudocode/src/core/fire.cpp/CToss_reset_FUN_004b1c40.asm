; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_reset_FUN_004b1c40(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30 at 004b4cbd
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1c40
        ;   Label: core_fire.cpp_CToss_reset_FUN_004b1c40
    MOV dword ptr [EAX + 0x3dc],0x0     ; 004b1c44
    RET                                 ; 004b1c4e

