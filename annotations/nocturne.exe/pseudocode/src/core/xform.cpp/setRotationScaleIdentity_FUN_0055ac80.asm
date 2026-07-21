; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_0055ac80(undefined4 *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 at 0051d1b3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055ac80
        ;   Label: core_xform.cpp_setRotationScaleIdentity_FUN_0055ac80
    MOV dword ptr [EAX + 0x4],0x0       ; 0055ac84
    MOV dword ptr [EAX + 0x8],0x0       ; 0055ac8b
    MOV dword ptr [EAX + 0x10],0x0      ; 0055ac92
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 0055ac99
    MOV dword ptr [EAX + 0x18],0x0      ; 0055aca0
    MOV dword ptr [EAX + 0x20],0x0      ; 0055aca7
    MOV dword ptr [EAX + 0x24],0x0      ; 0055acae
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 0055acb5
    MOV dword ptr [EAX],0x3f800000      ; 0055acbc
    RET                                 ; 0055acc2

