; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_xform.cpp_setIdentityQuaternion_FUN_005f7620(CQuaternion4f * quaternion)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quaternion
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 at 0059dfb1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f7620
        ;   Label: core_xform.cpp_setIdentityQuaternion_FUN_005f7620
    MOV dword ptr [EAX + 0x4],0x0       ; 005f7624
    MOV dword ptr [EAX + 0x8],0x0       ; 005f762b
    MOV dword ptr [EAX + 0xc],0x0       ; 005f7632
    MOV dword ptr [EAX],0x3f800000      ; 005f7639
    RET                                 ; 005f763f

