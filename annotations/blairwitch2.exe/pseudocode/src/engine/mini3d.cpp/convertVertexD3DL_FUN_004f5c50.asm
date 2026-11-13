; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_convertVertexD3DL_FUN_004f5c50(float *out,float *in)
;
; Parameters:
; float *          Stack[0x4]:4   out
; float *          Stack[0x8]:4   in
;
; XREF[1]:
;   engine_mini3d.cpp_polyList_FUN_004f3920 at 004f3a97
;
; Referenced Globals:
;   undefined4 DAT_005dde4c
;   undefined4 DAT_00618118
;
; Called Functions:
;   engine_mini3d.cpp_lightVertex_FUN_004f4f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5c50
        ;   Label: engine_mini3d.cpp_convertVertexD3DL_FUN_004f5c50
    PUSH ESI                            ; 004f5c51
    PUSH EDI                            ; 004f5c52
    PUSH EBP                            ; 004f5c53
    SUB ESP,0x30                        ; 004f5c54
    MOV EDI,dword ptr [ESP + 0x44]      ; 004f5c57
    MOV EBP,dword ptr [ESP + 0x48]      ; 004f5c5b
    FLD float ptr [EBP]                 ; 004f5c5f
    MOV EAX,ESP                         ; 004f5c62
    FSTP float ptr [EDI]                ; 004f5c64
    FLD float ptr [EBP + 0x4]           ; 004f5c66
    PUSH EAX                            ; 004f5c69
    FSTP float ptr [EDI + 0x4]          ; 004f5c6a
    FLD float ptr [EBP + 0x8]           ; 004f5c6d
    PUSH EBP                            ; 004f5c70
    FSTP float ptr [EDI + 0x8]          ; 004f5c71
    MOV dword ptr [EDI + 0xc],0x0       ; 004f5c74
    CALL engine_mini3d.cpp_lightVertex_FUN_004f4f50 ; 004f5c7b
        ;   XREF to: 004f4f50 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_lightVertex_FUN_004f4f50(float * vertex, float * out_color)
    ADD ESP,0x8                         ; 004f5c80
    FLD float ptr [ESP]                 ; 004f5c83
    FMUL float ptr [0x005dde4c]         ; 004f5c86 | DAT_005dde4c
    LEA EBX,[ESP + 0x1c]                ; 004f5c8c
    LEA EAX,[ESP + 0x10]                ; 004f5c90
    FSTP float ptr [ESP + 0x1c]         ; 004f5c94
    FLD float ptr [EBX]                 ; 004f5c98
    FLD float ptr [0x00618118]          ; 004f5c9a | DAT_00618118
    FSUBP                               ; 004f5ca0
    FISTP dword ptr [EAX]               ; 004f5ca2
    FLD float ptr [ESP + 0x4]           ; 004f5ca4
    FMUL float ptr [0x005dde4c]         ; 004f5ca8 | DAT_005dde4c
    LEA EBX,[ESP + 0x24]                ; 004f5cae
    LEA EAX,[ESP + 0x14]                ; 004f5cb2
    FSTP float ptr [ESP + 0x24]         ; 004f5cb6
    FLD float ptr [EBX]                 ; 004f5cba
    FLD float ptr [0x00618118]          ; 004f5cbc | DAT_00618118
    FSUBP                               ; 004f5cc2
    FISTP dword ptr [EAX]               ; 004f5cc4
    FLD float ptr [ESP + 0x8]           ; 004f5cc6
    FMUL float ptr [0x005dde4c]         ; 004f5cca | DAT_005dde4c
    LEA EBX,[ESP + 0x28]                ; 004f5cd0
    LEA EAX,[ESP + 0x20]                ; 004f5cd4
    FSTP float ptr [ESP + 0x28]         ; 004f5cd8
    FLD float ptr [EBX]                 ; 004f5cdc
    FLD float ptr [0x00618118]          ; 004f5cde | DAT_00618118
    FSUBP                               ; 004f5ce4
    FISTP dword ptr [EAX]               ; 004f5ce6
    FLD float ptr [ESP + 0xc]           ; 004f5ce8
    FMUL float ptr [0x005dde4c]         ; 004f5cec | DAT_005dde4c
    LEA EBX,[ESP + 0x2c]                ; 004f5cf2
    LEA EAX,[ESP + 0x18]                ; 004f5cf6
    FSTP float ptr [ESP + 0x2c]         ; 004f5cfa
    FLD float ptr [EBX]                 ; 004f5cfe
    FLD float ptr [0x00618118]          ; 004f5d00 | DAT_00618118
    FSUBP                               ; 004f5d06
    FISTP dword ptr [EAX]               ; 004f5d08
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f5d0a
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f5d0e
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f5d12
    SHL EAX,0x8                         ; 004f5d16
    SHL EBX,0x10                        ; 004f5d19
    OR EAX,EDX                          ; 004f5d1c
    OR EBX,EAX                          ; 004f5d1e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f5d20
    SHL EAX,0x18                        ; 004f5d24
    MOV dword ptr [EDI + 0x14],0x0      ; 004f5d27
    OR EBX,EAX                          ; 004f5d2e
    MOV dword ptr [EDI + 0x10],EBX      ; 004f5d30
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f5d33
    MOV dword ptr [EDI + 0x18],EAX      ; 004f5d36
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f5d39
    MOV dword ptr [EDI + 0x1c],EAX      ; 004f5d3c
    ADD ESP,0x30                        ; 004f5d3f
    POP EBP                             ; 004f5d42
    POP EDI                             ; 004f5d43
    POP ESI                             ; 004f5d44
    POP EBX                             ; 004f5d45
    RET                                 ; 004f5d46

