; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spirbear_cpp_CSpiritBear_isInvulnerable_FUN_0059b510(CSpiritBear *this_ptr)
;
; Parameters:
; CSpiritBear *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059b510
        ;   Label: core_spirbear.cpp_CSpiritBear_isInvulnerable_FUN_0059b510
    CMP dword ptr [EAX + 0x34160],0x0   ; 0059b514
    SETZ AL                             ; 0059b51b
    AND EAX,0xff                        ; 0059b51e
    RET                                 ; 0059b523

