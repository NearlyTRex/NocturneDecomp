; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setIdentityQuaternion_FUN_005b7790(CQuaternion4f *quaternion)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quaternion
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 at 00567531
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b7790
        ;   Label: core_xform.cpp_setIdentityQuaternion_FUN_005b7790
    MOV dword ptr [EAX + 0x4],0x0       ; 005b7794
    MOV dword ptr [EAX + 0x8],0x0       ; 005b779b
    MOV dword ptr [EAX + 0xc],0x0       ; 005b77a2
    MOV dword ptr [EAX],0x3f800000      ; 005b77a9
    RET                                 ; 005b77af

