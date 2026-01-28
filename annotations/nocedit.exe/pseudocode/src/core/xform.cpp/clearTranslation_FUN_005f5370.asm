; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_xform_cpp_clearTranslation_FUN_005f5370(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; XREF[3]:
;   core_skeledit.cpp_FUN_0058aeb0 at 0058aef3
;   core_tentacle.cpp_CTentacle_process_FUN_005db050 at 005db3c0
;   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0 at 005f7402
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f5370
        ;   Label: core_xform.cpp_clearTranslation_FUN_005f5370
    MOV dword ptr [EAX + 0x2c],0x0      ; 005f5374
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005f537b
    MOV dword ptr [EAX + 0x1c],EDX      ; 005f537e
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005f5381
    MOV dword ptr [EAX + 0xc],EDX       ; 005f5384
    RET                                 ; 005f5387

