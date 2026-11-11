; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00444f70(SIntersectXZCylinder *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00445010 at 00445483
;
; Called Functions:
;   core_dcube.cpp_intersectXZCylinder_FUN_00444c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444f70
        ;   Label: core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00444f70
    PUSH ESI                            ; 00444f71
    PUSH EDI                            ; 00444f72
    SUB ESP,0x4                         ; 00444f73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00444f76
    MOV ESI,dword ptr [ESP + 0x18]      ; 00444f7a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00444f7e
    FLD float ptr [ESI]                 ; 00444f82
    PUSH EBX                            ; 00444f84
    FSTP float ptr [EBX + 0x3c]         ; 00444f85
    MOV EAX,dword ptr [ESI + 0x8]       ; 00444f88
    MOV dword ptr [EBX + 0x40],EAX      ; 00444f8b
    MOV EAX,dword ptr [EDI]             ; 00444f8e
    MOV dword ptr [EBX + 0x44],EAX      ; 00444f90
    MOV EAX,dword ptr [EDI + 0x8]       ; 00444f93
    MOV dword ptr [EBX + 0x48],EAX      ; 00444f96
    CALL core_dcube.cpp_intersectXZCylinder_FUN_00444c90 ; 00444f99
        ;   XREF to: 00444c90 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinder_FUN_00444c90(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 00444f9e
    TEST EAX,EAX                        ; 00444fa1
    JZ 0x00444fc9                       ; 00444fa3
        ;   XREF to: 00444fc9 (CONDITIONAL_JUMP)  ; LAB_00444fc9
    FLD float ptr [EDI + 0x4]           ; 00444fa5
    FSUB float ptr [ESI + 0x4]          ; 00444fa8
    FMUL float ptr [EBX + 0x50]         ; 00444fab
    FADD float ptr [ESI + 0x4]          ; 00444fae
    FST float ptr [ESP]                 ; 00444fb1
    FCOMP float ptr [EBX + 0x28]        ; 00444fb4
    FNSTSW AX                           ; 00444fb7
    SAHF                                ; 00444fb9
    JBE 0x00444fc7                      ; 00444fba
        ;   XREF to: 00444fc7 (CONDITIONAL_JUMP)  ; LAB_00444fc7
    FLD float ptr [ESP]                 ; 00444fbc
    FCOMP float ptr [EBX + 0x24]        ; 00444fbf
    FNSTSW AX                           ; 00444fc2
    SAHF                                ; 00444fc4
    JC 0x00444fd0                       ; 00444fc5
        ;   XREF to: 00444fd0 (CONDITIONAL_JUMP)  ; LAB_00444fd0
    XOR EAX,EAX                         ; 00444fc7
        ;   Label: LAB_00444fc7
    ADD ESP,0x4                         ; 00444fc9
        ;   Label: LAB_00444fc9
    POP EDI                             ; 00444fcc
    POP ESI                             ; 00444fcd
    POP EBX                             ; 00444fce
    RET                                 ; 00444fcf
    FLD float ptr [EBX + 0x18]          ; 00444fd0
        ;   Label: LAB_00444fd0
    FMUL float ptr [EBX + 0x4c]         ; 00444fd3
    FLD float ptr [EBX + 0x1c]          ; 00444fd6
    FMUL float ptr [EBX + 0x4c]         ; 00444fd9
    FLD float ptr [EBX + 0x4c]          ; 00444fdc
    MOV dword ptr [EBX + 0x8],0x0       ; 00444fdf
    MOV EAX,0x1                         ; 00444fe6
    FSTP float ptr [EBX]                ; 00444feb
    FXCH                                ; 00444fed
    FADD float ptr [EBX + 0x10]         ; 00444fef
    FXCH                                ; 00444ff2
    FADD float ptr [EBX + 0x14]         ; 00444ff4
    FLD float ptr [EBX + 0x54]          ; 00444ff7
    FLD float ptr [EBX + 0x58]          ; 00444ffa
    FSUBP ST2,ST0                       ; 00444ffd
    FSUBP ST2,ST0                       ; 00444fff
    FSTP float ptr [EBX + 0xc]          ; 00445001
    FSTP float ptr [EBX + 0x4]          ; 00445004
    ADD ESP,0x4                         ; 00445007
    POP EDI                             ; 0044500a
    POP ESI                             ; 0044500b
    POP EBX                             ; 0044500c
    RET                                 ; 0044500d

