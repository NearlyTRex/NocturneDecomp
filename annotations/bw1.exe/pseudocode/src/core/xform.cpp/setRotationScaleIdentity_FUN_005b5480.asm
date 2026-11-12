; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_005b5480(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; XREF[1]:
;   core_skeleton.cpp_FUN_00568e30 at 00568f53
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b5480
        ;   Label: core_xform.cpp_setRotationScaleIdentity_FUN_005b5480
    MOV dword ptr [EAX + 0x4],0x0       ; 005b5484
    MOV dword ptr [EAX + 0x8],0x0       ; 005b548b
    MOV dword ptr [EAX + 0x10],0x0      ; 005b5492
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005b5499
    MOV dword ptr [EAX + 0x18],0x0      ; 005b54a0
    MOV dword ptr [EAX + 0x20],0x0      ; 005b54a7
    MOV dword ptr [EAX + 0x24],0x0      ; 005b54ae
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 005b54b5
    MOV dword ptr [EAX],0x3f800000      ; 005b54bc
    RET                                 ; 005b54c2

