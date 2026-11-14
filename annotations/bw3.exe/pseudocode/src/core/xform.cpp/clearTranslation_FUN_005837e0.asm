; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clearTranslation_FUN_005837e0(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; XREF[1]:
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00585740 at 00585762
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005837e0
        ;   Label: core_xform.cpp_clearTranslation_FUN_005837e0
    MOV dword ptr [EAX + 0x2c],0x0      ; 005837e4
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005837eb
    MOV dword ptr [EAX + 0x1c],EDX      ; 005837ee
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005837f1
    MOV dword ptr [EAX + 0xc],EDX       ; 005837f4
    RET                                 ; 005837f7

