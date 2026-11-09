; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00452770(SIntersectXZCylinder *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00452810 at 00452c83
;
; Called Functions:
;   core_dcube.cpp_FUN_00452490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452770
        ;   Label: core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00452770
    PUSH ESI                            ; 00452771
    PUSH EDI                            ; 00452772
    SUB ESP,0x4                         ; 00452773
    MOV EBX,dword ptr [ESP + 0x14]      ; 00452776
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045277a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045277e
    FLD float ptr [ESI]                 ; 00452782
    PUSH EBX                            ; 00452784
    FSTP float ptr [EBX + 0x3c]         ; 00452785
    MOV EAX,dword ptr [ESI + 0x8]       ; 00452788
    MOV dword ptr [EBX + 0x40],EAX      ; 0045278b
    MOV EAX,dword ptr [EDI]             ; 0045278e
    MOV dword ptr [EBX + 0x44],EAX      ; 00452790
    MOV EAX,dword ptr [EDI + 0x8]       ; 00452793
    MOV dword ptr [EBX + 0x48],EAX      ; 00452796
    CALL core_dcube.cpp_FUN_00452490    ; 00452799
        ;   XREF to: 00452490 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_FUN_00452490(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0045279e
    TEST EAX,EAX                        ; 004527a1
    JZ 0x004527c9                       ; 004527a3
        ;   XREF to: 004527c9 (CONDITIONAL_JUMP)  ; LAB_004527c9
    FLD float ptr [EDI + 0x4]           ; 004527a5
    FSUB float ptr [ESI + 0x4]          ; 004527a8
    FMUL float ptr [EBX + 0x50]         ; 004527ab
    FADD float ptr [ESI + 0x4]          ; 004527ae
    FST float ptr [ESP]                 ; 004527b1
    FCOMP float ptr [EBX + 0x28]        ; 004527b4
    FNSTSW AX                           ; 004527b7
    SAHF                                ; 004527b9
    JBE 0x004527c7                      ; 004527ba
        ;   XREF to: 004527c7 (CONDITIONAL_JUMP)  ; LAB_004527c7
    FLD float ptr [ESP]                 ; 004527bc
    FCOMP float ptr [EBX + 0x24]        ; 004527bf
    FNSTSW AX                           ; 004527c2
    SAHF                                ; 004527c4
    JC 0x004527d0                       ; 004527c5
        ;   XREF to: 004527d0 (CONDITIONAL_JUMP)  ; LAB_004527d0
    XOR EAX,EAX                         ; 004527c7
        ;   Label: LAB_004527c7
    ADD ESP,0x4                         ; 004527c9
        ;   Label: LAB_004527c9
    POP EDI                             ; 004527cc
    POP ESI                             ; 004527cd
    POP EBX                             ; 004527ce
    RET                                 ; 004527cf
    FLD float ptr [EBX + 0x18]          ; 004527d0
        ;   Label: LAB_004527d0
    FMUL float ptr [EBX + 0x4c]         ; 004527d3
    FLD float ptr [EBX + 0x1c]          ; 004527d6
    FMUL float ptr [EBX + 0x4c]         ; 004527d9
    FLD float ptr [EBX + 0x4c]          ; 004527dc
    MOV dword ptr [EBX + 0x8],0x0       ; 004527df
    MOV EAX,0x1                         ; 004527e6
    FSTP float ptr [EBX]                ; 004527eb
    FXCH                                ; 004527ed
    FADD float ptr [EBX + 0x10]         ; 004527ef
    FXCH                                ; 004527f2
    FADD float ptr [EBX + 0x14]         ; 004527f4
    FLD float ptr [EBX + 0x54]          ; 004527f7
    FLD float ptr [EBX + 0x58]          ; 004527fa
    FSUBP ST2,ST0                       ; 004527fd
    FSUBP ST2,ST0                       ; 004527ff
    FSTP float ptr [EBX + 0xc]          ; 00452801
    FSTP float ptr [EBX + 0x4]          ; 00452804
    ADD ESP,0x4                         ; 00452807
    POP EDI                             ; 0045280a
    POP ESI                             ; 0045280b
    POP EBX                             ; 0045280c
    RET                                 ; 0045280d

