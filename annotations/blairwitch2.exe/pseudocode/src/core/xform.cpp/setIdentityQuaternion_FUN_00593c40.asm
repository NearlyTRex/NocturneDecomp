; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setIdentityQuaternion_FUN_00593c40(undefined4 *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60 at 00544e91
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00593c40
        ;   Label: core_xform.cpp_setIdentityQuaternion_FUN_00593c40
    MOV dword ptr [EAX + 0x4],0x0       ; 00593c44
    MOV dword ptr [EAX + 0x8],0x0       ; 00593c4b
    MOV dword ptr [EAX + 0xc],0x0       ; 00593c52
    MOV dword ptr [EAX],0x3f800000      ; 00593c59
    RET                                 ; 00593c5f

