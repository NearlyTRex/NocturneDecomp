; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(undefined4 *param_1)
;
;
; XREF[4]:
;   core_doc.cpp_FUN_004568e0 at 00457e12
;   core_gabriela.cpp_FUN_004b22c0 at 004b2723
;   core_mirror.cpp_FUN_004f9990 at 004f9cc6
;   core_stranger.cpp_FUN_00568500 at 0056939b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005918a0
        ;   Label: core_xform.cpp_setIdentityMatrix3x4_FUN_005918a0
    MOV dword ptr [EAX + 0x4],0x0       ; 005918a4
    MOV dword ptr [EAX + 0x8],0x0       ; 005918ab
    MOV dword ptr [EAX + 0xc],0x0       ; 005918b2
    MOV dword ptr [EAX + 0x10],0x0      ; 005918b9
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005918c0
    MOV dword ptr [EAX + 0x18],0x0      ; 005918c7
    MOV dword ptr [EAX + 0x1c],0x0      ; 005918ce
    MOV dword ptr [EAX + 0x20],0x0      ; 005918d5
    MOV dword ptr [EAX + 0x24],0x0      ; 005918dc
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 005918e3
    MOV dword ptr [EAX + 0x2c],0x0      ; 005918ea
    MOV dword ptr [EAX],0x3f800000      ; 005918f1
    RET                                 ; 005918f7

