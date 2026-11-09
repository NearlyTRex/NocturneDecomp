; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_reset_FUN_004b3c70(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30 at 004b4d4b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b3c70
        ;   Label: core_fire.cpp_CTrail_reset_FUN_004b3c70
    MOV dword ptr [EAX + 0x10],0x0      ; 004b3c74
    RET                                 ; 004b3c7b

