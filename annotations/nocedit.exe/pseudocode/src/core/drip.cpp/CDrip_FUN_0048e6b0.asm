; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_FUN_0048e6b0(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_FUN_005e7390 at 005e73f9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048e6b0
        ;   Label: core_drip.cpp_CDrip_FUN_0048e6b0
    MOV dword ptr [EAX + 0x2dc],0x0     ; 0048e6b4
    RET                                 ; 0048e6be

