; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_FUN_004f3b80(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   out_plane
; CVector3f *      Stack[0x8]:4   vertex_a
; CVector3f *      Stack[0xc]:4   vertex_b
; CVector3f *      Stack[0x10]:4   vertex_c
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_FUN_004f40b0 at 004f40d3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3b80
        ;   Label: core_mirror.cpp_FUN_004f3b80
    PUSH ESI                            ; 004f3b81
    PUSH EDI                            ; 004f3b82
    PUSH EBP                            ; 004f3b83
    MOV EBP,ESP                         ; 004f3b84
    SUB ESP,0x68                        ; 004f3b86
    AND ESP,0xfffffff8                  ; 004f3b89
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f3b8c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004f3b8f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004f3b92
    FLD float ptr [ECX]                 ; 004f3b95
    FLD float ptr [ECX + 0x4]           ; 004f3b97
    FLD float ptr [ECX + 0x8]           ; 004f3b9a
    MOV EDI,ESP                         ; 004f3b9d
    LEA ESI,[ESP + 0x48]                ; 004f3b9f
    FXCH ST2                            ; 004f3ba3
    FSUB float ptr [EBX]                ; 004f3ba5
    FXCH                                ; 004f3ba7
    FSUB float ptr [EBX + 0x4]          ; 004f3ba9
    FXCH ST2                            ; 004f3bac
    FSUB float ptr [EBX + 0x8]          ; 004f3bae
    FXCH ST2                            ; 004f3bb1
    FSTP float ptr [ESP + 0x4c]         ; 004f3bb3
    FXCH                                ; 004f3bb7
    FSTP float ptr [ESP + 0x50]         ; 004f3bb9
    FSTP float ptr [ESP + 0x48]         ; 004f3bbd
    MOVSD ES:EDI,ESI                    ; 004f3bc1
    MOVSD ES:EDI,ESI                    ; 004f3bc2
    MOVSD ES:EDI,ESI                    ; 004f3bc3
    MOV EAX,ESP                         ; 004f3bc4
    LEA ESI,[ESP + 0x24]                ; 004f3bc6
    CMP ESI,EAX                         ; 004f3bca
    JNZ 0x004f3cfa                      ; 004f3bcc
        ;   XREF to: 004f3cfa (CONDITIONAL_JUMP)  ; LAB_004f3cfa
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f3bd2
        ;   Label: LAB_004f3bd2
    LEA EDI,[ESP + 0x18]                ; 004f3bd5
    LEA ESI,[ESP + 0x54]                ; 004f3bd9
    FLD float ptr [EAX + 0x4]           ; 004f3bdd
    FLD float ptr [EAX + 0x8]           ; 004f3be0
    FLD float ptr [EAX]                 ; 004f3be3
    LEA EAX,[ESP + 0x18]                ; 004f3be5
    FSUB float ptr [ECX]                ; 004f3be9
    FXCH ST2                            ; 004f3beb
    FSUB float ptr [ECX + 0x4]          ; 004f3bed
    FXCH                                ; 004f3bf0
    FSUB float ptr [ECX + 0x8]          ; 004f3bf2
    FXCH                                ; 004f3bf5
    FSTP float ptr [ESP + 0x58]         ; 004f3bf7
    FSTP float ptr [ESP + 0x5c]         ; 004f3bfb
    FSTP float ptr [ESP + 0x54]         ; 004f3bff
    LEA ECX,[ESP + 0x30]                ; 004f3c03
    MOVSD ES:EDI,ESI                    ; 004f3c07
    MOVSD ES:EDI,ESI                    ; 004f3c08
    MOVSD ES:EDI,ESI                    ; 004f3c09
    CMP ECX,EAX                         ; 004f3c0a
    JZ 0x004f3c26                       ; 004f3c0c
        ;   XREF to: 004f3c26 (CONDITIONAL_JUMP)  ; LAB_004f3c26
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3c0e
    MOV dword ptr [ESP + 0x30],EAX      ; 004f3c12
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f3c16
    MOV dword ptr [ESP + 0x34],EAX      ; 004f3c1a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f3c1e
    MOV dword ptr [ESP + 0x38],EAX      ; 004f3c22
    FLD float ptr [ESP + 0x28]          ; 004f3c26
        ;   Label: LAB_004f3c26
    FMUL float ptr [ESP + 0x38]         ; 004f3c2a
    FLD float ptr [ESP + 0x2c]          ; 004f3c2e
    FMUL float ptr [ESP + 0x30]         ; 004f3c32
    FLD float ptr [ESP + 0x24]          ; 004f3c36
    FMUL float ptr [ESP + 0x34]         ; 004f3c3a
    FLD float ptr [ESP + 0x2c]          ; 004f3c3e
    FMUL float ptr [ESP + 0x34]         ; 004f3c42
    FLD float ptr [ESP + 0x24]          ; 004f3c46
    FMUL float ptr [ESP + 0x38]         ; 004f3c4a
    FLD float ptr [ESP + 0x28]          ; 004f3c4e
    FMUL float ptr [ESP + 0x30]         ; 004f3c52
    LEA EDI,[ESP + 0x3c]                ; 004f3c56
    LEA ESI,[ESP + 0xc]                 ; 004f3c5a
    LEA EAX,[ESP + 0x3c]                ; 004f3c5e
    FXCH ST2                            ; 004f3c62
    FSUBP ST5,ST0                       ; 004f3c64
    FSUBP ST3,ST0                       ; 004f3c66
    FSUBP                               ; 004f3c68
    FXCH                                ; 004f3c6a
    FSTP float ptr [ESP + 0x10]         ; 004f3c6c
    FSTP float ptr [ESP + 0x14]         ; 004f3c70
    FSTP float ptr [ESP + 0xc]          ; 004f3c74
    MOVSD ES:EDI,ESI                    ; 004f3c78
    MOVSD ES:EDI,ESI                    ; 004f3c79
    MOVSD ES:EDI,ESI                    ; 004f3c7a
    CMP EDX,EAX                         ; 004f3c7b
    JZ 0x004f3c93                       ; 004f3c7d
        ;   XREF to: 004f3c93 (CONDITIONAL_JUMP)  ; LAB_004f3c93
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f3c7f
    MOV dword ptr [EDX],EAX             ; 004f3c83
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f3c85
    MOV dword ptr [EDX + 0x4],EAX       ; 004f3c89
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f3c8c
    MOV dword ptr [EDX + 0x8],EAX       ; 004f3c90
    FLD float ptr [EDX + 0x4]           ; 004f3c93
        ;   Label: LAB_004f3c93
    FMUL ST0                            ; 004f3c96
    FLD float ptr [EDX]                 ; 004f3c98
    FMUL ST0                            ; 004f3c9a
    FADDP                               ; 004f3c9c
    FLD float ptr [EDX + 0x8]           ; 004f3c9e
    FMUL ST0                            ; 004f3ca1
    FADDP                               ; 004f3ca3
    FSQRT                               ; 004f3ca5
    FLDZ                                ; 004f3ca7
    FXCH                                ; 004f3ca9
    FSTP float ptr [ESP + 0x64]         ; 004f3cab
    FCOMP float ptr [ESP + 0x64]        ; 004f3caf
    FNSTSW AX                           ; 004f3cb3
    SAHF                                ; 004f3cb5
    JNC 0x004f3d16                      ; 004f3cb6
        ;   XREF to: 004f3d16 (CONDITIONAL_JUMP)  ; LAB_004f3d16
    FLD1                                ; 004f3cb8
    FLD float ptr [EDX]                 ; 004f3cba
    FXCH                                ; 004f3cbc
    FDIV float ptr [ESP + 0x64]         ; 004f3cbe
    FXCH                                ; 004f3cc2
    FMUL ST1                            ; 004f3cc4
    FLD float ptr [EDX + 0x4]           ; 004f3cc6
    FMUL ST2                            ; 004f3cc9
    FLD float ptr [EDX + 0x8]           ; 004f3ccb
    FMULP ST3                           ; 004f3cce
    FXCH                                ; 004f3cd0
    FSTP float ptr [EDX]                ; 004f3cd2
    FSTP float ptr [EDX + 0x4]          ; 004f3cd4
    FSTP float ptr [EDX + 0x8]          ; 004f3cd7
    FLD float ptr [EDX + 0x4]           ; 004f3cda
        ;   Label: LAB_004f3cda
    FMUL float ptr [EBX + 0x4]          ; 004f3cdd
    FLD float ptr [EDX]                 ; 004f3ce0
    FMUL float ptr [EBX]                ; 004f3ce2
    FADDP                               ; 004f3ce4
    FLD float ptr [EDX + 0x8]           ; 004f3ce6
    FMUL float ptr [EBX + 0x8]          ; 004f3ce9
    FADDP                               ; 004f3cec
    FCHS                                ; 004f3cee
    FSTP float ptr [EDX + 0xc]          ; 004f3cf0
    MOV ESP,EBP                         ; 004f3cf3
    POP EBP                             ; 004f3cf5
    POP EDI                             ; 004f3cf6
    POP ESI                             ; 004f3cf7
    POP EBX                             ; 004f3cf8
    RET                                 ; 004f3cf9
    MOV EAX,dword ptr [ESP]             ; 004f3cfa
        ;   Label: LAB_004f3cfa
    MOV dword ptr [ESP + 0x24],EAX      ; 004f3cfd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3d01
    MOV dword ptr [ESP + 0x28],EAX      ; 004f3d05
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3d09
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f3d0d
    JMP 0x004f3bd2                      ; 004f3d11
        ;   XREF to: 004f3bd2 (UNCONDITIONAL_JUMP)  ; LAB_004f3bd2
    MOV dword ptr [EDX + 0x8],0x0       ; 004f3d16
        ;   Label: LAB_004f3d16
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f3d1d
    MOV dword ptr [EDX + 0x4],EAX       ; 004f3d20
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f3d23
    MOV dword ptr [EDX],EAX             ; 004f3d26
    JMP 0x004f3cda                      ; 004f3d28
        ;   XREF to: 004f3cda (UNCONDITIONAL_JUMP)  ; LAB_004f3cda

