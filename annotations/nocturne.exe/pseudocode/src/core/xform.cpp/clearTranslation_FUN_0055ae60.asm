; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_clearTranslation_FUN_0055ae60(int param_1)
;
;
; XREF[2]:
;   core_tentacle.cpp_FUN_00543c50 at 00543fc0
;   core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0 at 0055cef2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055ae60
        ;   Label: core_xform.cpp_clearTranslation_FUN_0055ae60
    MOV dword ptr [EAX + 0x2c],0x0      ; 0055ae64
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0055ae6b
    MOV dword ptr [EAX + 0x1c],EDX      ; 0055ae6e
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0055ae71
    MOV dword ptr [EAX + 0xc],EDX       ; 0055ae74
    RET                                 ; 0055ae77

