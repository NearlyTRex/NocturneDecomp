; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0 (SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 at 0049b16d
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ace0
        ;   Label: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
    PUSH ESI                            ; 0049ace1
    PUSH EDI                            ; 0049ace2
    SUB ESP,0x4                         ; 0049ace3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049ace6
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049acea
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049acee
    FLD float ptr [ESI]                 ; 0049acf2
    PUSH EBX                            ; 0049acf4
    FSTP float ptr [EBX + 0x3c]         ; 0049acf5
    MOV EAX,dword ptr [ESI + 0x8]       ; 0049acf8
    MOV dword ptr [EBX + 0x40],EAX      ; 0049acfb
    MOV EAX,dword ptr [EDI]             ; 0049acfe
    MOV dword ptr [EBX + 0x44],EAX      ; 0049ad00
    MOV EAX,dword ptr [EDI + 0x8]       ; 0049ad03
    MOV dword ptr [EBX + 0x48],EAX      ; 0049ad06
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00 ; 0049ad09
        ;   XREF to: 0049aa00 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0049ad0e
    TEST EAX,EAX                        ; 0049ad11
    JZ 0x0049ad37                       ; 0049ad13
        ;   XREF to: 0049ad37 (CONDITIONAL_JUMP)  ; LAB_0049ad37
    FLD float ptr [EDI + 0x4]           ; 0049ad15
    FSUB float ptr [ESI + 0x4]          ; 0049ad18
    FMUL float ptr [EBX + 0x50]         ; 0049ad1b
    FADD float ptr [ESI + 0x4]          ; 0049ad1e
    FST float ptr [ESP]                 ; 0049ad21
    FCOMP float ptr [EBX + 0x28]        ; 0049ad24
    FNSTSW AX                           ; 0049ad27
    SAHF                                ; 0049ad29
    JBE 0x0049ad37                      ; 0049ad2a
        ;   XREF to: 0049ad37 (CONDITIONAL_JUMP)  ; LAB_0049ad37
    FLD float ptr [ESP]                 ; 0049ad2c
    FCOMP float ptr [EBX + 0x24]        ; 0049ad2f
    FNSTSW AX                           ; 0049ad32
    SAHF                                ; 0049ad34
    JC 0x0049ad3e                       ; 0049ad35
        ;   XREF to: 0049ad3e (CONDITIONAL_JUMP)  ; LAB_0049ad3e
    ADD ESP,0x4                         ; 0049ad37
        ;   Label: LAB_0049ad37
    POP EDI                             ; 0049ad3a
    POP ESI                             ; 0049ad3b
    POP EBX                             ; 0049ad3c
    RET                                 ; 0049ad3d
    MOV dword ptr [EBX + 0x8],0x0       ; 0049ad3e
        ;   Label: LAB_0049ad3e
    FLD float ptr [EBX + 0x18]          ; 0049ad45
    FMUL float ptr [EBX + 0x4c]         ; 0049ad48
    FLD float ptr [EBX + 0x1c]          ; 0049ad4b
    FMUL float ptr [EBX + 0x4c]         ; 0049ad4e
    MOV EAX,dword ptr [EBX + 0x4c]      ; 0049ad51
    MOV dword ptr [EBX],EAX             ; 0049ad54
    FXCH                                ; 0049ad56
    FADD float ptr [EBX + 0x10]         ; 0049ad58
    FXCH                                ; 0049ad5b
    FADD float ptr [EBX + 0x14]         ; 0049ad5d
    FLD float ptr [EBX + 0x54]          ; 0049ad60
    FLD float ptr [EBX + 0x58]          ; 0049ad63
    FSUBP ST2,ST0                       ; 0049ad66
    FSUBP ST2,ST0                       ; 0049ad68
    FSTP float ptr [EBX + 0xc]          ; 0049ad6a
    FSTP float ptr [EBX + 0x4]          ; 0049ad6d
    ADD ESP,0x4                         ; 0049ad70
    POP EDI                             ; 0049ad73
    POP ESI                             ; 0049ad74
    POP EBX                             ; 0049ad75
    RET                                 ; 0049ad76

