; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50 at 00441d78
;
; Called Functions:
;   crt_watcom.c__memset_FUN_00481980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451a60
        ;   Label: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60
    MOV ECX,dword ptr [ESP + 0x8]       ; 00451a61
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 00451a65
    MOV EBX,dword ptr [ECX + 0x1cc4]    ; 00451a6b
    IMUL EDX,EBX                        ; 00451a71
    MOV EAX,EDX                         ; 00451a74
    SAR EDX,0x1f                        ; 00451a76
    SHL EDX,0x3                         ; 00451a79
    SBB EAX,EDX                         ; 00451a7c
    SAR EAX,0x3                         ; 00451a7e
    PUSH EAX                            ; 00451a81
    MOV ECX,dword ptr [ECX + 0x2fa0]    ; 00451a82
    XOR EDX,EDX                         ; 00451a88
    CALL crt_watcom.c__memset_FUN_00481980 ; 00451a8a
        ;   XREF to: 00481980 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memset_FUN_00481980()
    POP EBX                             ; 00451a8f
    RET                                 ; 00451a90

