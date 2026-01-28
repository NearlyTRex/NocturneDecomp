; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_normalizeVertex_FUN_00461e60(CVector3f *vertex)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vertex
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 at 00461fe4
;   shape_design.c_calculateVertexAngle_FUN_00462050 at 004620cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461e60
        ;   Label: shape_design.c_normalizeVertex_FUN_00461e60
    PUSH ESI                            ; 00461e61
    PUSH EDI                            ; 00461e62
    PUSH EBP                            ; 00461e63
    MOV EBP,ESP                         ; 00461e64
    SUB ESP,0x8                         ; 00461e66
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461e6c
    FLD double ptr [EAX + 0x8]          ; 00461e6f
    FMUL double ptr [EAX + 0x8]         ; 00461e72
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461e75
    FLD double ptr [EAX]                ; 00461e78
    FMUL double ptr [EAX]               ; 00461e7a
    FADDP                               ; 00461e7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461e7e
    FLD double ptr [EAX + 0x10]         ; 00461e81
    FMUL double ptr [EAX + 0x10]        ; 00461e84
    FADDP                               ; 00461e87
    FSQRT                               ; 00461e89
    FSTP double ptr [EBP + -0x8]        ; 00461e8b
    TEST dword ptr [EBP + -0x4],0x7fffffff ; 00461e8e
    JNZ 0x00461eab                      ; 00461e95
        ;   XREF to: 00461eab (CONDITIONAL_JUMP)  ; LAB_00461eab
    CMP dword ptr [EBP + -0x8],0x0      ; 00461e97
    JNZ 0x00461eab                      ; 00461e9b
        ;   XREF to: 00461eab (CONDITIONAL_JUMP)  ; LAB_00461eab
    MOV dword ptr [EBP + -0x8],0x0      ; 00461e9d
    MOV dword ptr [EBP + -0x4],0x3ff00000 ; 00461ea4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461eab
        ;   Label: LAB_00461eab
    FLD double ptr [EAX]                ; 00461eae
    FDIV double ptr [EBP + -0x8]        ; 00461eb0
    FSTP double ptr [EAX]               ; 00461eb3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461eb5
    FLD double ptr [EAX + 0x8]          ; 00461eb8
    FDIV double ptr [EBP + -0x8]        ; 00461ebb
    FSTP double ptr [EAX + 0x8]         ; 00461ebe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461ec1
    FLD double ptr [EAX + 0x10]         ; 00461ec4
    FDIV double ptr [EBP + -0x8]        ; 00461ec7
    FSTP double ptr [EAX + 0x10]        ; 00461eca
    MOV ESP,EBP                         ; 00461ecd
    POP EBP                             ; 00461ecf
    POP EDI                             ; 00461ed0
    POP ESI                             ; 00461ed1
    POP EBX                             ; 00461ed2
    RET                                 ; 00461ed3

