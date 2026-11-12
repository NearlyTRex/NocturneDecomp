; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setIdentityQuaternion_FUN_00585970(CQuaternion4f *quaternion)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quaternion
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 at 0054c0c1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585970
        ;   Label: core_xform.cpp_setIdentityQuaternion_FUN_00585970
    MOV dword ptr [EAX + 0x4],0x0       ; 00585974
    MOV dword ptr [EAX + 0x8],0x0       ; 0058597b
    MOV dword ptr [EAX + 0xc],0x0       ; 00585982
    MOV dword ptr [EAX],0x3f800000      ; 00585989
    RET                                 ; 0058598f

