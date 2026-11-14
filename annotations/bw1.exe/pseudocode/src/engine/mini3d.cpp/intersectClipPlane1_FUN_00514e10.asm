; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_intersectClipPlane1_FUN_00514e10(float *from,float *to,float *out)
;
; Parameters:
; float *          Stack[0x4]:4   from
; float *          Stack[0x8]:4   to
; float *          Stack[0xc]:4   out
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   engine_mini3d.cpp_clipAgainstPlane1_FUN_005151b0 at 00515276
;
; Referenced Globals:
;   undefined4 DAT_01d25f14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514e10
        ;   Label: engine_mini3d.cpp_intersectClipPlane1_FUN_00514e10
    SUB ESP,0x8                         ; 00514e11
    MOV EAX,dword ptr [ESP + 0x10]      ; 00514e14
    MOV EDX,dword ptr [ESP + 0x14]      ; 00514e18
    MOV ECX,dword ptr [ESP + 0x18]      ; 00514e1c
    FLD float ptr [EAX]                 ; 00514e20
    FADD float ptr [EAX + 0x8]          ; 00514e22
    FLD ST0                             ; 00514e25
    FSUB float ptr [EDX]                ; 00514e27
    FSUB float ptr [EDX + 0x8]          ; 00514e29
    FDIVP                               ; 00514e2c
    FLD float ptr [EDX + 0x8]           ; 00514e2e
    FSUB float ptr [EAX + 0x8]          ; 00514e31
    FXCH                                ; 00514e34
    FSTP float ptr [ESP]                ; 00514e36
    FMUL float ptr [ESP]                ; 00514e39
    FADD float ptr [EAX + 0x8]          ; 00514e3c
    FST float ptr [ECX + 0x8]           ; 00514e3f
    FCHS                                ; 00514e42
    FSTP float ptr [ECX]                ; 00514e44
    FLD float ptr [EDX + 0x4]           ; 00514e46
    FSUB float ptr [EAX + 0x4]          ; 00514e49
    FMUL float ptr [ESP]                ; 00514e4c
    FADD float ptr [EAX + 0x4]          ; 00514e4f
    MOV EBX,dword ptr [0x01d25f14]      ; 00514e52 | DAT_01d25f14
    FSTP float ptr [ECX + 0x4]          ; 00514e58
    TEST EBX,EBX                        ; 00514e5b
    JZ 0x00514e64                       ; 00514e5d
        ;   XREF to: 00514e64 (CONDITIONAL_JUMP)  ; LAB_00514e64
    ADD ESP,0x8                         ; 00514e5f
    POP EBX                             ; 00514e62
    RET                                 ; 00514e63
    FLD float ptr [EDX + 0x2c]          ; 00514e64
        ;   Label: LAB_00514e64
    FSUB float ptr [EAX + 0x2c]         ; 00514e67
    FLD float ptr [ESP]                 ; 00514e6a
    FXCH                                ; 00514e6d
    FMUL ST1                            ; 00514e6f
    FADD float ptr [EAX + 0x2c]         ; 00514e71
    FSTP float ptr [ECX + 0x2c]         ; 00514e74
    FLD float ptr [EDX + 0x28]          ; 00514e77
    FSUB float ptr [EAX + 0x28]         ; 00514e7a
    FMUL ST1                            ; 00514e7d
    FADD float ptr [EAX + 0x28]         ; 00514e7f
    FSTP float ptr [ECX + 0x28]         ; 00514e82
    FLD float ptr [EDX + 0x24]          ; 00514e85
    FSUB float ptr [EAX + 0x24]         ; 00514e88
    FMUL ST1                            ; 00514e8b
    FADD float ptr [EAX + 0x24]         ; 00514e8d
    FSTP float ptr [ECX + 0x24]         ; 00514e90
    FLD float ptr [EDX + 0x1c]          ; 00514e93
    FSUB float ptr [EAX + 0x1c]         ; 00514e96
    FMUL ST1                            ; 00514e99
    FADD float ptr [EAX + 0x1c]         ; 00514e9b
    FSTP float ptr [ECX + 0x1c]         ; 00514e9e
    FLD float ptr [EDX + 0x20]          ; 00514ea1
    FSUB float ptr [EAX + 0x20]         ; 00514ea4
    FMUL ST1                            ; 00514ea7
    FADD float ptr [EAX + 0x20]         ; 00514ea9
    FSTP float ptr [ECX + 0x20]         ; 00514eac
    FLD float ptr [EDX + 0x30]          ; 00514eaf
    FSUB float ptr [EAX + 0x30]         ; 00514eb2
    FMUL ST1                            ; 00514eb5
    FADD float ptr [EAX + 0x30]         ; 00514eb7
    FSTP float ptr [ECX + 0x30]         ; 00514eba
    FLD float ptr [EDX + 0x34]          ; 00514ebd
    FSUB float ptr [EAX + 0x34]         ; 00514ec0
    FMULP                               ; 00514ec3
    FADD float ptr [EAX + 0x34]         ; 00514ec5
    FSTP float ptr [ECX + 0x34]         ; 00514ec8
    ADD ESP,0x8                         ; 00514ecb
    POP EBX                             ; 00514ece
    RET                                 ; 00514ecf

