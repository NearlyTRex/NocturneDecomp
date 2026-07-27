; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(undefined4 *param_1)
;
;
; XREF[3]:
;   core_gabriela.cpp_FUN_00499ca0 at 0049a04e
;   core_mirror.cpp_FUN_004d6650 at 004d694c
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 at 0053b3e1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055abf0
        ;   Label: core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0
    MOV dword ptr [EAX + 0x4],0x0       ; 0055abf4
    MOV dword ptr [EAX + 0x8],0x0       ; 0055abfb
    MOV dword ptr [EAX + 0xc],0x0       ; 0055ac02
    MOV dword ptr [EAX + 0x10],0x0      ; 0055ac09
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 0055ac10
    MOV dword ptr [EAX + 0x18],0x0      ; 0055ac17
    MOV dword ptr [EAX + 0x1c],0x0      ; 0055ac1e
    MOV dword ptr [EAX + 0x20],0x0      ; 0055ac25
    MOV dword ptr [EAX + 0x24],0x0      ; 0055ac2c
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 0055ac33
    MOV dword ptr [EAX + 0x2c],0x0      ; 0055ac3a
    MOV dword ptr [EAX],0x3f800000      ; 0055ac41
    RET                                 ; 0055ac47

