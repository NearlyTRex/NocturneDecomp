; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(CDemonLight * this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 at 0044df3b
;
; Called Functions:
;   core_event.cpp_FUN_004b19d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475fc0
        ;   Label: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00475fc1
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 00475fc5
    MOV EBX,dword ptr [ECX + 0x1cc4]    ; 00475fcb
    IMUL EDX,EBX                        ; 00475fd1
    MOV EAX,EDX                         ; 00475fd4
    SAR EDX,0x1f                        ; 00475fd6
    SHL EDX,0x3                         ; 00475fd9
    SBB EAX,EDX                         ; 00475fdc
    SAR EAX,0x3                         ; 00475fde
    PUSH EAX                            ; 00475fe1
    MOV ECX,dword ptr [ECX + 0x2fa0]    ; 00475fe2
    XOR EDX,EDX                         ; 00475fe8
    CALL core_event.cpp_FUN_004b19d0    ; 00475fea
        ;   XREF to: 004b19d0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_004b19d0()
    POP EBX                             ; 00475fef
    RET                                 ; 00475ff0

