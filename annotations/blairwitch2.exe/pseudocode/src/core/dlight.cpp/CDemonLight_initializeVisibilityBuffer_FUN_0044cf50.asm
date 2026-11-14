; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_0044cf50(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220 at 0043d34b
;
; Called Functions:
;   crt_watcom.c__memset_FUN_00492670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cf50
        ;   Label: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_0044cf50
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044cf51
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 0044cf55
    MOV EBX,dword ptr [ECX + 0x1cc4]    ; 0044cf5b
    IMUL EDX,EBX                        ; 0044cf61
    MOV EAX,EDX                         ; 0044cf64
    SAR EDX,0x1f                        ; 0044cf66
    SHL EDX,0x3                         ; 0044cf69
    SBB EAX,EDX                         ; 0044cf6c
    SAR EAX,0x3                         ; 0044cf6e
    PUSH EAX                            ; 0044cf71
    MOV ECX,dword ptr [ECX + 0x2fa0]    ; 0044cf72
    XOR EDX,EDX                         ; 0044cf78
    CALL crt_watcom.c__memset_FUN_00492670 ; 0044cf7a
        ;   XREF to: 00492670 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memset_FUN_00492670(void * dest, int fill_byte, uint size)
    POP EBX                             ; 0044cf7f
    RET                                 ; 0044cf80

