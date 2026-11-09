; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_0053ec70(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_sound.cpp_FUN_0055f6ae at 0055f712
;   core_sound.cpp_FUN_0055ff40 at 00560620
;   core_weather.cpp_FUN_0057d1a0 at 0057d300
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ec70
        ;   Label: core_setcolid.cpp_FUN_0053ec70
    MOV dword ptr [EAX + 0x15f6ac],0xffffffff ; 0053ec74
    RET                                 ; 0053ec7e

