; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; XREF[2]:
;   core_skeledit.cpp_FUN_0058aeb0 at 0058aefc
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 at 0059f933
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f5190
        ;   Label: core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
    MOV dword ptr [EAX + 0x4],0x0       ; 005f5194
    MOV dword ptr [EAX + 0x8],0x0       ; 005f519b
    MOV dword ptr [EAX + 0x10],0x0      ; 005f51a2
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005f51a9
    MOV dword ptr [EAX + 0x18],0x0      ; 005f51b0
    MOV dword ptr [EAX + 0x20],0x0      ; 005f51b7
    MOV dword ptr [EAX + 0x24],0x0      ; 005f51be
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 005f51c5
    MOV dword ptr [EAX],0x3f800000      ; 005f51cc
    RET                                 ; 005f51d2

