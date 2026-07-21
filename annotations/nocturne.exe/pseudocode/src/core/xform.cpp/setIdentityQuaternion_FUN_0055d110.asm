; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_setIdentityQuaternion_FUN_0055d110(undefined4 *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 at 0051b831
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055d110
        ;   Label: core_xform.cpp_setIdentityQuaternion_FUN_0055d110
    MOV dword ptr [EAX + 0x4],0x0       ; 0055d114
    MOV dword ptr [EAX + 0x8],0x0       ; 0055d11b
    MOV dword ptr [EAX + 0xc],0x0       ; 0055d122
    MOV dword ptr [EAX],0x3f800000      ; 0055d129
    RET                                 ; 0055d12f

