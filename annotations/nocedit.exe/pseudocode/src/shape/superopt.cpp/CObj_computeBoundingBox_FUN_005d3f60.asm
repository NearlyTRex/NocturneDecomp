; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60 (CObj *this_ptr,CVector3d *out_min,CVector3d *out_max)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   out_min
; CVector3d *      Stack[0xc]:4   out_max
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3f60
        ;   Label: shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60
    PUSH ESI                            ; 005d3f61
    PUSH EDI                            ; 005d3f62
    PUSH EBP                            ; 005d3f63
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d3f64
    MOV EBX,dword ptr [ESP + 0x18]      ; 005d3f68
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005d3f6c
    MOV EDX,dword ptr [EDI + 0x4]       ; 005d3f70
    MOV ESI,0x1                         ; 005d3f73
    MOV EAX,dword ptr [EDX]             ; 005d3f78
    MOV dword ptr [EBX],EAX             ; 005d3f7a
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d3f7c
    MOV dword ptr [EBX + 0x4],EAX       ; 005d3f7f
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d3f82
    MOV dword ptr [EBX + 0x8],EAX       ; 005d3f85
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d3f88
    MOV dword ptr [EBX + 0xc],EAX       ; 005d3f8b
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d3f8e
    MOV dword ptr [EBX + 0x10],EAX      ; 005d3f91
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d3f94
    MOV dword ptr [EBX + 0x14],EAX      ; 005d3f97
    MOV EAX,dword ptr [EDX]             ; 005d3f9a
    MOV dword ptr [ECX],EAX             ; 005d3f9c
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d3f9e
    MOV dword ptr [ECX + 0x4],EAX       ; 005d3fa1
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d3fa4
    MOV dword ptr [ECX + 0x8],EAX       ; 005d3fa7
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d3faa
    MOV dword ptr [ECX + 0xc],EAX       ; 005d3fad
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d3fb0
    MOV dword ptr [ECX + 0x10],EAX      ; 005d3fb3
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d3fb6
    MOV dword ptr [ECX + 0x14],EAX      ; 005d3fb9
    MOV EBP,dword ptr [EDI]             ; 005d3fbc
    ADD EDX,0x38                        ; 005d3fbe
    CMP EBP,ESI                         ; 005d3fc1
    JBE 0x005d4053                      ; 005d3fc3
        ;   XREF to: 005d4053 (CONDITIONAL_JUMP)  ; LAB_005d4053
    FLD double ptr [EDX]                ; 005d3fc9
        ;   Label: LAB_005d3fc9
    FCOMP double ptr [EBX]              ; 005d3fcb
    FNSTSW AX                           ; 005d3fcd
    SAHF                                ; 005d3fcf
    JC 0x005d4058                       ; 005d3fd0
        ;   XREF to: 005d4058 (CONDITIONAL_JUMP)  ; LAB_005d4058
    FLD double ptr [EDX + 0x8]          ; 005d3fd6
        ;   Label: LAB_005d3fd6
    FCOMP double ptr [EBX + 0x8]        ; 005d3fd9
    FNSTSW AX                           ; 005d3fdc
    SAHF                                ; 005d3fde
    JNC 0x005d3fed                      ; 005d3fdf
        ;   XREF to: 005d3fed (CONDITIONAL_JUMP)  ; LAB_005d3fed
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d3fe1
    MOV dword ptr [EBX + 0x8],EAX       ; 005d3fe4
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d3fe7
    MOV dword ptr [EBX + 0xc],EAX       ; 005d3fea
    FLD double ptr [EDX + 0x10]         ; 005d3fed
        ;   Label: LAB_005d3fed
    FCOMP double ptr [EBX + 0x10]       ; 005d3ff0
    FNSTSW AX                           ; 005d3ff3
    SAHF                                ; 005d3ff5
    JNC 0x005d4004                      ; 005d3ff6
        ;   XREF to: 005d4004 (CONDITIONAL_JUMP)  ; LAB_005d4004
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d3ff8
    MOV dword ptr [EBX + 0x10],EAX      ; 005d3ffb
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d3ffe
    MOV dword ptr [EBX + 0x14],EAX      ; 005d4001
    FLD double ptr [EDX]                ; 005d4004
        ;   Label: LAB_005d4004
    FCOMP double ptr [ECX]              ; 005d4006
    FNSTSW AX                           ; 005d4008
    SAHF                                ; 005d400a
    JBE 0x005d4017                      ; 005d400b
        ;   XREF to: 005d4017 (CONDITIONAL_JUMP)  ; LAB_005d4017
    MOV EAX,dword ptr [EDX]             ; 005d400d
    MOV dword ptr [ECX],EAX             ; 005d400f
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d4011
    MOV dword ptr [ECX + 0x4],EAX       ; 005d4014
    FLD double ptr [EDX + 0x8]          ; 005d4017
        ;   Label: LAB_005d4017
    FCOMP double ptr [ECX + 0x8]        ; 005d401a
    FNSTSW AX                           ; 005d401d
    SAHF                                ; 005d401f
    JBE 0x005d402e                      ; 005d4020
        ;   XREF to: 005d402e (CONDITIONAL_JUMP)  ; LAB_005d402e
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d4022
    MOV dword ptr [ECX + 0x8],EAX       ; 005d4025
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d4028
    MOV dword ptr [ECX + 0xc],EAX       ; 005d402b
    FLD double ptr [EDX + 0x10]         ; 005d402e
        ;   Label: LAB_005d402e
    FCOMP double ptr [ECX + 0x10]       ; 005d4031
    FNSTSW AX                           ; 005d4034
    SAHF                                ; 005d4036
    JBE 0x005d4045                      ; 005d4037
        ;   XREF to: 005d4045 (CONDITIONAL_JUMP)  ; LAB_005d4045
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d4039
    MOV dword ptr [ECX + 0x10],EAX      ; 005d403c
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d403f
    MOV dword ptr [ECX + 0x14],EAX      ; 005d4042
    INC ESI                             ; 005d4045
        ;   Label: LAB_005d4045
    MOV EAX,dword ptr [EDI]             ; 005d4046
    ADD EDX,0x38                        ; 005d4048
    CMP ESI,EAX                         ; 005d404b
    JC 0x005d3fc9                       ; 005d404d
        ;   XREF to: 005d3fc9 (CONDITIONAL_JUMP)  ; LAB_005d3fc9
    POP EBP                             ; 005d4053
        ;   Label: LAB_005d4053
    POP EDI                             ; 005d4054
    POP ESI                             ; 005d4055
    POP EBX                             ; 005d4056
    RET                                 ; 005d4057
    MOV EAX,dword ptr [EDX]             ; 005d4058
        ;   Label: LAB_005d4058
    MOV dword ptr [EBX],EAX             ; 005d405a
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d405c
    MOV dword ptr [EBX + 0x4],EAX       ; 005d405f
    JMP 0x005d3fd6                      ; 005d4062
        ;   XREF to: 005d3fd6 (UNCONDITIONAL_JUMP)  ; LAB_005d3fd6

