; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_reset_FUN_004995f0(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190 at 0049c34b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004995f0
        ;   Label: core_fire.cpp_CCrater_reset_FUN_004995f0
    MOV dword ptr [EAX + 0x4],0x0       ; 004995f4
    MOV dword ptr [EAX + 0x8],0x0       ; 004995fb
    MOV dword ptr [EAX],0x0             ; 00499602
    RET                                 ; 00499608

