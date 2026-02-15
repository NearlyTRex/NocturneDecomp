; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; XREF[3]:
;   core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120 at 004d74ce
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0 at 00521884
;   core_stranger.cpp_CStranger_FUN_005c07b0 at 005c15cc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f5100
        ;   Label: core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
    MOV dword ptr [EAX + 0x4],0x0       ; 005f5104
    MOV dword ptr [EAX + 0x8],0x0       ; 005f510b
    MOV dword ptr [EAX + 0xc],0x0       ; 005f5112
    MOV dword ptr [EAX + 0x10],0x0      ; 005f5119
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005f5120
    MOV dword ptr [EAX + 0x18],0x0      ; 005f5127
    MOV dword ptr [EAX + 0x1c],0x0      ; 005f512e
    MOV dword ptr [EAX + 0x20],0x0      ; 005f5135
    MOV dword ptr [EAX + 0x24],0x0      ; 005f513c
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 005f5143
    MOV dword ptr [EAX + 0x2c],0x0      ; 005f514a
    MOV dword ptr [EAX],0x3f800000      ; 005f5151
    RET                                 ; 005f5157

