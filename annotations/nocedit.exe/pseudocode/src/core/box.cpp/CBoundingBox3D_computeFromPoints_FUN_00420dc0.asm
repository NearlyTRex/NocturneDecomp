; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0(CBoundingBox3D *this_ptr,int point_count,CVector3f *points)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   point_count
; CVector3f *      Stack[0xc]:4   points
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420dc0
        ;   Label: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0
    PUSH ESI                            ; 00420dc1
    PUSH EDI                            ; 00420dc2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00420dc3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00420dc7
    MOV EAX,dword ptr [ESP + 0x18]      ; 00420dcb
    LEA ECX,[EDX + 0xc]                 ; 00420dcf
    MOV EBX,ECX                         ; 00420dd2
    CMP ECX,EAX                         ; 00420dd4
    JNZ 0x00420e44                      ; 00420dd6
        ;   XREF to: 00420e44 (CONDITIONAL_JUMP)  ; LAB_00420e44
    CMP EDX,EBX                         ; 00420ddc
        ;   Label: LAB_00420ddc
    JZ 0x00420df0                       ; 00420dde
        ;   XREF to: 00420df0 (CONDITIONAL_JUMP)  ; LAB_00420df0
    MOV ECX,dword ptr [EBX]             ; 00420de0
    MOV dword ptr [EDX],ECX             ; 00420de2
    MOV ECX,dword ptr [EBX + 0x4]       ; 00420de4
    MOV dword ptr [EDX + 0x4],ECX       ; 00420de7
    MOV ECX,dword ptr [EBX + 0x8]       ; 00420dea
    MOV dword ptr [EDX + 0x8],ECX       ; 00420ded
    MOV ESI,0x1                         ; 00420df0
        ;   Label: LAB_00420df0
    CMP EDI,ESI                         ; 00420df5
    JLE 0x00420e40                      ; 00420df7
        ;   XREF to: 00420e40 (CONDITIONAL_JUMP)  ; LAB_00420e40
    LEA EBX,[EAX + 0xc]                 ; 00420df9
    FLD float ptr [EBX]                 ; 00420dfc
        ;   Label: LAB_00420dfc
    MOV ECX,EBX                         ; 00420dfe
    FCOMP float ptr [EDX]               ; 00420e00
    FNSTSW AX                           ; 00420e02
    SAHF                                ; 00420e04
    JC 0x00420e56                       ; 00420e05
        ;   XREF to: 00420e56 (CONDITIONAL_JUMP)  ; LAB_00420e56
    FLD float ptr [EBX]                 ; 00420e07
    FCOMP float ptr [EDX + 0xc]         ; 00420e09
    FNSTSW AX                           ; 00420e0c
    SAHF                                ; 00420e0e
    JBE 0x00420e16                      ; 00420e0f
        ;   XREF to: 00420e16 (CONDITIONAL_JUMP)  ; LAB_00420e16
    MOV EAX,dword ptr [EBX]             ; 00420e11
    MOV dword ptr [EDX + 0xc],EAX       ; 00420e13
    FLD float ptr [ECX + 0x4]           ; 00420e16
        ;   Label: LAB_00420e16
    FCOMP float ptr [EDX + 0x4]         ; 00420e19
    FNSTSW AX                           ; 00420e1c
    SAHF                                ; 00420e1e
    JNC 0x00420e5c                      ; 00420e1f
        ;   XREF to: 00420e5c (CONDITIONAL_JUMP)  ; LAB_00420e5c
    MOV EAX,dword ptr [ECX + 0x4]       ; 00420e21
    MOV dword ptr [EDX + 0x4],EAX       ; 00420e24
    FLD float ptr [ECX + 0x8]           ; 00420e27
        ;   Label: LAB_00420e27
    FCOMP float ptr [EDX + 0x8]         ; 00420e2a
    FNSTSW AX                           ; 00420e2d
    SAHF                                ; 00420e2f
    JNC 0x00420e6f                      ; 00420e30
        ;   XREF to: 00420e6f (CONDITIONAL_JUMP)  ; LAB_00420e6f
    MOV EAX,dword ptr [ECX + 0x8]       ; 00420e32
    MOV dword ptr [EDX + 0x8],EAX       ; 00420e35
    INC ESI                             ; 00420e38
        ;   Label: LAB_00420e38
    ADD EBX,0xc                         ; 00420e39
    CMP ESI,EDI                         ; 00420e3c
    JL 0x00420dfc                       ; 00420e3e
        ;   XREF to: 00420dfc (CONDITIONAL_JUMP)  ; LAB_00420dfc
    POP EDI                             ; 00420e40
        ;   Label: LAB_00420e40
    POP ESI                             ; 00420e41
    POP EBX                             ; 00420e42
    RET                                 ; 00420e43
    MOV ESI,dword ptr [EAX]             ; 00420e44
        ;   Label: LAB_00420e44
    MOV dword ptr [ECX],ESI             ; 00420e46
    MOV ESI,dword ptr [EAX + 0x4]       ; 00420e48
    MOV dword ptr [ECX + 0x4],ESI       ; 00420e4b
    MOV ESI,dword ptr [EAX + 0x8]       ; 00420e4e
    MOV dword ptr [ECX + 0x8],ESI       ; 00420e51
    JMP 0x00420ddc                      ; 00420e54
        ;   XREF to: 00420ddc (UNCONDITIONAL_JUMP)  ; LAB_00420ddc
    MOV EAX,dword ptr [EBX]             ; 00420e56
        ;   Label: LAB_00420e56
    MOV dword ptr [EDX],EAX             ; 00420e58
    JMP 0x00420e16                      ; 00420e5a
        ;   XREF to: 00420e16 (UNCONDITIONAL_JUMP)  ; LAB_00420e16
    FLD float ptr [ECX + 0x4]           ; 00420e5c
        ;   Label: LAB_00420e5c
    FCOMP float ptr [EDX + 0x10]        ; 00420e5f
    FNSTSW AX                           ; 00420e62
    SAHF                                ; 00420e64
    JBE 0x00420e27                      ; 00420e65
        ;   XREF to: 00420e27 (CONDITIONAL_JUMP)  ; LAB_00420e27
    MOV EAX,dword ptr [ECX + 0x4]       ; 00420e67
    MOV dword ptr [EDX + 0x10],EAX      ; 00420e6a
    JMP 0x00420e27                      ; 00420e6d
        ;   XREF to: 00420e27 (UNCONDITIONAL_JUMP)  ; LAB_00420e27
    FLD float ptr [ECX + 0x8]           ; 00420e6f
        ;   Label: LAB_00420e6f
    FCOMP float ptr [EDX + 0x14]        ; 00420e72
    FNSTSW AX                           ; 00420e75
    SAHF                                ; 00420e77
    JBE 0x00420e38                      ; 00420e78
        ;   XREF to: 00420e38 (CONDITIONAL_JUMP)  ; LAB_00420e38
    MOV EAX,dword ptr [ECX + 0x8]       ; 00420e7a
    MOV dword ptr [EDX + 0x14],EAX      ; 00420e7d
    INC ESI                             ; 00420e80
    ADD EBX,0xc                         ; 00420e81
    CMP ESI,EDI                         ; 00420e84
    JL 0x00420dfc                       ; 00420e86
        ;   XREF to: 00420dfc (CONDITIONAL_JUMP)  ; LAB_00420dfc
    POP EDI                             ; 00420e8c
    POP ESI                             ; 00420e8d
    POP EBX                             ; 00420e8e
    RET                                 ; 00420e8f

