; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_intersectClipPlane0_FUN_00514d40(float *from,float *to,float *out)
;
; Parameters:
; float *          Stack[0x4]:4   from
; float *          Stack[0x8]:4   to
; float *          Stack[0xc]:4   out
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_mini3d.cpp_clipAgainstPlane0_FUN_00515080 at 00515142
;
; Referenced Globals:
;   undefined4 DAT_01d25f14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514d40
        ;   Label: engine_mini3d.cpp_intersectClipPlane0_FUN_00514d40
    SUB ESP,0x4                         ; 00514d41
    MOV EAX,dword ptr [ESP + 0xc]       ; 00514d44
    MOV ECX,dword ptr [ESP + 0x10]      ; 00514d48
    MOV EDX,dword ptr [ESP + 0x14]      ; 00514d4c
    FLD float ptr [ECX]                 ; 00514d50
    FADD float ptr [EAX + 0x8]          ; 00514d52
    FLD float ptr [EAX]                 ; 00514d55
    FADD float ptr [ECX + 0x8]          ; 00514d57
    FSUBP                               ; 00514d5a
    FLD float ptr [EAX + 0x8]           ; 00514d5c
    FSUB float ptr [EAX]                ; 00514d5f
    FDIVRP                              ; 00514d61
    FLD float ptr [ECX + 0x8]           ; 00514d63
    FSUB float ptr [EAX + 0x8]          ; 00514d66
    FXCH                                ; 00514d69
    FSTP float ptr [ESP]                ; 00514d6b
    FMUL float ptr [ESP]                ; 00514d6e
    FADD float ptr [EAX + 0x8]          ; 00514d71
    FST float ptr [EDX + 0x8]           ; 00514d74
    FSTP float ptr [EDX]                ; 00514d77
    FLD float ptr [ECX + 0x4]           ; 00514d79
    FSUB float ptr [EAX + 0x4]          ; 00514d7c
    FMUL float ptr [ESP]                ; 00514d7f
    FADD float ptr [EAX + 0x4]          ; 00514d82
    MOV EBX,dword ptr [0x01d25f14]      ; 00514d85 | DAT_01d25f14
    FSTP float ptr [EDX + 0x4]          ; 00514d8b
    TEST EBX,EBX                        ; 00514d8e
    JZ 0x00514d97                       ; 00514d90
        ;   XREF to: 00514d97 (CONDITIONAL_JUMP)  ; LAB_00514d97
    ADD ESP,0x4                         ; 00514d92
    POP EBX                             ; 00514d95
    RET                                 ; 00514d96
    FLD float ptr [ECX + 0x2c]          ; 00514d97
        ;   Label: LAB_00514d97
    FSUB float ptr [EAX + 0x2c]         ; 00514d9a
    FLD float ptr [ESP]                 ; 00514d9d
    FXCH                                ; 00514da0
    FMUL ST1                            ; 00514da2
    FADD float ptr [EAX + 0x2c]         ; 00514da4
    FSTP float ptr [EDX + 0x2c]         ; 00514da7
    FLD float ptr [ECX + 0x28]          ; 00514daa
    FSUB float ptr [EAX + 0x28]         ; 00514dad
    FMUL ST1                            ; 00514db0
    FADD float ptr [EAX + 0x28]         ; 00514db2
    FSTP float ptr [EDX + 0x28]         ; 00514db5
    FLD float ptr [ECX + 0x24]          ; 00514db8
    FSUB float ptr [EAX + 0x24]         ; 00514dbb
    FMUL ST1                            ; 00514dbe
    FADD float ptr [EAX + 0x24]         ; 00514dc0
    FSTP float ptr [EDX + 0x24]         ; 00514dc3
    FLD float ptr [ECX + 0x1c]          ; 00514dc6
    FSUB float ptr [EAX + 0x1c]         ; 00514dc9
    FMUL ST1                            ; 00514dcc
    FADD float ptr [EAX + 0x1c]         ; 00514dce
    FSTP float ptr [EDX + 0x1c]         ; 00514dd1
    FLD float ptr [ECX + 0x20]          ; 00514dd4
    FSUB float ptr [EAX + 0x20]         ; 00514dd7
    FMUL ST1                            ; 00514dda
    FADD float ptr [EAX + 0x20]         ; 00514ddc
    FSTP float ptr [EDX + 0x20]         ; 00514ddf
    FLD float ptr [ECX + 0x30]          ; 00514de2
    FSUB float ptr [EAX + 0x30]         ; 00514de5
    FMUL ST1                            ; 00514de8
    FADD float ptr [EAX + 0x30]         ; 00514dea
    FSTP float ptr [EDX + 0x30]         ; 00514ded
    FLD float ptr [ECX + 0x34]          ; 00514df0
    FSUB float ptr [EAX + 0x34]         ; 00514df3
    FMULP                               ; 00514df6
    FADD float ptr [EAX + 0x34]         ; 00514df8
    FSTP float ptr [EDX + 0x34]         ; 00514dfb
    ADD ESP,0x4                         ; 00514dfe
    POP EBX                             ; 00514e01
    RET                                 ; 00514e02

