; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_00478fb0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dtri.cpp_cylinderTriangleTest_FUN_00479050 at 0047942e
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478fb0
        ;   Label: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00478fb0
    PUSH ESI                            ; 00478fb1
    PUSH EDI                            ; 00478fb2
    SUB ESP,0x4                         ; 00478fb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00478fb6
    MOV ESI,dword ptr [ESP + 0x18]      ; 00478fba
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00478fbe
    FLD float ptr [ESI]                 ; 00478fc2
    PUSH EBX                            ; 00478fc4
    FSTP float ptr [EBX + 0x3c]         ; 00478fc5
    MOV EAX,dword ptr [ESI + 0x8]       ; 00478fc8
    MOV dword ptr [EBX + 0x40],EAX      ; 00478fcb
    MOV EAX,dword ptr [EDI]             ; 00478fce
    MOV dword ptr [EBX + 0x44],EAX      ; 00478fd0
    MOV EAX,dword ptr [EDI + 0x8]       ; 00478fd3
    MOV dword ptr [EBX + 0x48],EAX      ; 00478fd6
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0 ; 00478fd9
        ;   XREF to: 00478cd0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 00478fde
    TEST EAX,EAX                        ; 00478fe1
    JZ 0x00479007                       ; 00478fe3
        ;   XREF to: 00479007 (CONDITIONAL_JUMP)  ; LAB_00479007
    FLD float ptr [EDI + 0x4]           ; 00478fe5
    FSUB float ptr [ESI + 0x4]          ; 00478fe8
    FMUL float ptr [EBX + 0x50]         ; 00478feb
    FADD float ptr [ESI + 0x4]          ; 00478fee
    FST float ptr [ESP]                 ; 00478ff1
    FCOMP float ptr [EBX + 0x28]        ; 00478ff4
    FNSTSW AX                           ; 00478ff7
    SAHF                                ; 00478ff9
    JBE 0x00479007                      ; 00478ffa
        ;   XREF to: 00479007 (CONDITIONAL_JUMP)  ; LAB_00479007
    FLD float ptr [ESP]                 ; 00478ffc
    FCOMP float ptr [EBX + 0x24]        ; 00478fff
    FNSTSW AX                           ; 00479002
    SAHF                                ; 00479004
    JC 0x0047900e                       ; 00479005
        ;   XREF to: 0047900e (CONDITIONAL_JUMP)  ; LAB_0047900e
    ADD ESP,0x4                         ; 00479007
        ;   Label: LAB_00479007
    POP EDI                             ; 0047900a
    POP ESI                             ; 0047900b
    POP EBX                             ; 0047900c
    RET                                 ; 0047900d
    MOV dword ptr [EBX + 0x8],0x0       ; 0047900e
        ;   Label: LAB_0047900e
    FLD float ptr [EBX + 0x18]          ; 00479015
    FMUL float ptr [EBX + 0x4c]         ; 00479018
    FLD float ptr [EBX + 0x1c]          ; 0047901b
    FMUL float ptr [EBX + 0x4c]         ; 0047901e
    MOV EAX,dword ptr [EBX + 0x4c]      ; 00479021
    MOV dword ptr [EBX],EAX             ; 00479024
    FXCH                                ; 00479026
    FADD float ptr [EBX + 0x10]         ; 00479028
    FXCH                                ; 0047902b
    FADD float ptr [EBX + 0x14]         ; 0047902d
    FLD float ptr [EBX + 0x54]          ; 00479030
    FLD float ptr [EBX + 0x58]          ; 00479033
    FSUBP ST2,ST0                       ; 00479036
    FSUBP ST2,ST0                       ; 00479038
    FSTP float ptr [EBX + 0xc]          ; 0047903a
    FSTP float ptr [EBX + 0x4]          ; 0047903d
    ADD ESP,0x4                         ; 00479040
    POP EDI                             ; 00479043
    POP ESI                             ; 00479044
    POP EBX                             ; 00479045
    RET                                 ; 00479046

