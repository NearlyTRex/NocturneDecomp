; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(SIntersectXZCylinder *cylinder,CVector3f *segment_start,CVector3f *segment_end)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; CVector3f *      Stack[0x8]:4   segment_start
; CVector3f *      Stack[0xc]:4   segment_end
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30 at 00455ea3
;
; Called Functions:
;   core_dcube.cpp_intersectXZCapsule_FUN_004556b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455990
        ;   Label: core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
    PUSH ESI                            ; 00455991
    PUSH EDI                            ; 00455992
    SUB ESP,0x4                         ; 00455993
    MOV EBX,dword ptr [ESP + 0x14]      ; 00455996
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045599a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045599e
    FLD float ptr [ESI]                 ; 004559a2
    PUSH EBX                            ; 004559a4
    FSTP float ptr [EBX + 0x3c]         ; 004559a5
    MOV EAX,dword ptr [ESI + 0x8]       ; 004559a8
    MOV dword ptr [EBX + 0x40],EAX      ; 004559ab
    MOV EAX,dword ptr [EDI]             ; 004559ae
    MOV dword ptr [EBX + 0x44],EAX      ; 004559b0
    MOV EAX,dword ptr [EDI + 0x8]       ; 004559b3
    MOV dword ptr [EBX + 0x48],EAX      ; 004559b6
    CALL core_dcube.cpp_intersectXZCapsule_FUN_004556b0 ; 004559b9
        ;   XREF to: 004556b0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCapsule_FUN_004556b0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 004559be
    TEST EAX,EAX                        ; 004559c1
    JZ 0x004559e9                       ; 004559c3
        ;   XREF to: 004559e9 (CONDITIONAL_JUMP)  ; LAB_004559e9
    FLD float ptr [EDI + 0x4]           ; 004559c5
    FSUB float ptr [ESI + 0x4]          ; 004559c8
    FMUL float ptr [EBX + 0x50]         ; 004559cb
    FADD float ptr [ESI + 0x4]          ; 004559ce
    FST float ptr [ESP]                 ; 004559d1
    FCOMP float ptr [EBX + 0x28]        ; 004559d4
    FNSTSW AX                           ; 004559d7
    SAHF                                ; 004559d9
    JBE 0x004559e7                      ; 004559da
        ;   XREF to: 004559e7 (CONDITIONAL_JUMP)  ; LAB_004559e7
    FLD float ptr [ESP]                 ; 004559dc
    FCOMP float ptr [EBX + 0x24]        ; 004559df
    FNSTSW AX                           ; 004559e2
    SAHF                                ; 004559e4
    JC 0x004559f0                       ; 004559e5
        ;   XREF to: 004559f0 (CONDITIONAL_JUMP)  ; LAB_004559f0
    XOR EAX,EAX                         ; 004559e7
        ;   Label: LAB_004559e7
    ADD ESP,0x4                         ; 004559e9
        ;   Label: LAB_004559e9
    POP EDI                             ; 004559ec
    POP ESI                             ; 004559ed
    POP EBX                             ; 004559ee
    RET                                 ; 004559ef
    FLD float ptr [EBX + 0x18]          ; 004559f0
        ;   Label: LAB_004559f0
    FMUL float ptr [EBX + 0x4c]         ; 004559f3
    FLD float ptr [EBX + 0x1c]          ; 004559f6
    FMUL float ptr [EBX + 0x4c]         ; 004559f9
    FLD float ptr [EBX + 0x4c]          ; 004559fc
    MOV dword ptr [EBX + 0x8],0x0       ; 004559ff
    MOV EAX,0x1                         ; 00455a06
    FSTP float ptr [EBX]                ; 00455a0b
    FXCH                                ; 00455a0d
    FADD float ptr [EBX + 0x10]         ; 00455a0f
    FXCH                                ; 00455a12
    FADD float ptr [EBX + 0x14]         ; 00455a14
    FLD float ptr [EBX + 0x54]          ; 00455a17
    FLD float ptr [EBX + 0x58]          ; 00455a1a
    FSUBP ST2,ST0                       ; 00455a1d
    FSUBP ST2,ST0                       ; 00455a1f
    FSTP float ptr [EBX + 0xc]          ; 00455a21
    FSTP float ptr [EBX + 0x4]          ; 00455a24
    ADD ESP,0x4                         ; 00455a27
    POP EDI                             ; 00455a2a
    POP ESI                             ; 00455a2b
    POP EBX                             ; 00455a2c
    RET                                 ; 00455a2d

