; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clearTranslation_FUN_00591ab0(int param_1)
;
;
; XREF[2]:
;   core_tentacle.cpp_CTentacle_process_FUN_005726c0 at 00572a6e
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 at 00593a32
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00591ab0
        ;   Label: core_xform.cpp_clearTranslation_FUN_00591ab0
    MOV dword ptr [EAX + 0x2c],0x0      ; 00591ab4
    MOV EDX,dword ptr [EAX + 0x2c]      ; 00591abb
    MOV dword ptr [EAX + 0x1c],EDX      ; 00591abe
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00591ac1
    MOV dword ptr [EAX + 0xc],EDX       ; 00591ac4
    RET                                 ; 00591ac7

