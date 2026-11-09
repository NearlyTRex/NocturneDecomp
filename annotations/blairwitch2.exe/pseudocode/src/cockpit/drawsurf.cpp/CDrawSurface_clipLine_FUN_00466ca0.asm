; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00466ca0(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   x1
; int *            Stack[0xc]:4   y1
; int *            Stack[0x10]:4   x2
; int *            Stack[0x14]:4   y2
; int              Stack[0x18]:4   clip_left
; int              Stack[0x1c]:4   clip_top
; int              Stack[0x20]:4   clip_right
; int              Stack[0x24]:4   clip_bottom
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00466820 at 00466881
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466ca0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00466ca0
    PUSH ESI                            ; 00466ca1
    PUSH EDI                            ; 00466ca2
    PUSH EBP                            ; 00466ca3
    SUB ESP,0x48                        ; 00466ca4
    MOV EBP,dword ptr [ESP + 0x60]      ; 00466ca7
    MOV EDI,dword ptr [ESP + 0x64]      ; 00466cab
    MOV ECX,dword ptr [ESP + 0x70]      ; 00466caf
    MOV dword ptr [ESP + 0xc],ECX       ; 00466cb3
    MOV ECX,dword ptr [ESP + 0x74]      ; 00466cb7
    MOV EBX,dword ptr [EDI]             ; 00466cbb
    MOV dword ptr [ESP + 0x4],ECX       ; 00466cbd
    MOV ECX,dword ptr [ESP + 0x78]      ; 00466cc1
    MOV ESI,dword ptr [EBP]             ; 00466cc5
    MOV dword ptr [ESP + 0x14],ECX      ; 00466cc8
    XOR ECX,ECX                         ; 00466ccc
    CMP EBX,dword ptr [ESP + 0x7c]      ; 00466cce
    JLE 0x00466cd9                      ; 00466cd2
        ;   XREF to: 00466cd9 (CONDITIONAL_JUMP)  ; LAB_00466cd9
    MOV ECX,0x1                         ; 00466cd4
    CMP EBX,dword ptr [ESP + 0x4]       ; 00466cd9
        ;   Label: LAB_00466cd9
    JGE 0x00466ce2                      ; 00466cdd
        ;   XREF to: 00466ce2 (CONDITIONAL_JUMP)  ; LAB_00466ce2
    OR CL,0x2                           ; 00466cdf
    CMP ESI,dword ptr [ESP + 0x14]      ; 00466ce2
        ;   Label: LAB_00466ce2
    JLE 0x00466ceb                      ; 00466ce6
        ;   XREF to: 00466ceb (CONDITIONAL_JUMP)  ; LAB_00466ceb
    OR CL,0x4                           ; 00466ce8
    CMP ESI,dword ptr [ESP + 0xc]       ; 00466ceb
        ;   Label: LAB_00466ceb
    JGE 0x00466cf4                      ; 00466cef
        ;   XREF to: 00466cf4 (CONDITIONAL_JUMP)  ; LAB_00466cf4
    OR CL,0x8                           ; 00466cf1
    MOV ESI,dword ptr [ESP + 0x68]      ; 00466cf4
        ;   Label: LAB_00466cf4
    MOV dword ptr [ESP + 0x44],ECX      ; 00466cf8
    MOV ECX,dword ptr [ESP + 0x70]      ; 00466cfc
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00466d00
    MOV dword ptr [ESP + 0x8],ECX       ; 00466d04
    MOV ECX,dword ptr [ESP + 0x74]      ; 00466d08
    MOV ESI,dword ptr [ESI]             ; 00466d0c
    MOV dword ptr [ESP + 0x10],ECX      ; 00466d0e
    MOV ECX,dword ptr [ESP + 0x78]      ; 00466d12
    MOV EBX,dword ptr [EBX]             ; 00466d16
    MOV dword ptr [ESP],ECX             ; 00466d18
    XOR ECX,ECX                         ; 00466d1b
    CMP EBX,dword ptr [ESP + 0x7c]      ; 00466d1d
    JLE 0x00466d28                      ; 00466d21
        ;   XREF to: 00466d28 (CONDITIONAL_JUMP)  ; LAB_00466d28
    MOV ECX,0x1                         ; 00466d23
    CMP EBX,dword ptr [ESP + 0x10]      ; 00466d28
        ;   Label: LAB_00466d28
    JGE 0x00466d31                      ; 00466d2c
        ;   XREF to: 00466d31 (CONDITIONAL_JUMP)  ; LAB_00466d31
    OR CL,0x2                           ; 00466d2e
    CMP ESI,dword ptr [ESP]             ; 00466d31
        ;   Label: LAB_00466d31
    JLE 0x00466d39                      ; 00466d34
        ;   XREF to: 00466d39 (CONDITIONAL_JUMP)  ; LAB_00466d39
    OR CL,0x4                           ; 00466d36
    CMP ESI,dword ptr [ESP + 0x8]       ; 00466d39
        ;   Label: LAB_00466d39
    JL 0x00466d8a                       ; 00466d3d
        ;   XREF to: 00466d8a (CONDITIONAL_JUMP)  ; LAB_00466d8a
    XOR ESI,ESI                         ; 00466d3f
        ;   Label: LAB_00466d3f
    MOV dword ptr [ESP + 0x3c],ECX      ; 00466d41
    MOV dword ptr [ESP + 0x38],ESI      ; 00466d45
    MOV ECX,dword ptr [ESP + 0x68]      ; 00466d49
        ;   Label: LAB_00466d49
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00466d4d
    MOV EBX,dword ptr [EBP]             ; 00466d51
    MOV ECX,dword ptr [ECX]             ; 00466d54
    MOV ESI,dword ptr [ESI]             ; 00466d56
    SUB ECX,EBX                         ; 00466d58
    SUB ESI,dword ptr [EDI]             ; 00466d5a
    CMP dword ptr [ESP + 0x44],0x0      ; 00466d5c
    JZ 0x00466d8f                       ; 00466d61
        ;   XREF to: 00466d8f (CONDITIONAL_JUMP)  ; LAB_00466d8f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00466d63
        ;   Label: LAB_00466d63
    TEST dword ptr [ESP + 0x3c],EBX     ; 00466d67
    JZ 0x00466da0                       ; 00466d6b
        ;   XREF to: 00466da0 (CONDITIONAL_JUMP)  ; LAB_00466da0
    XOR ESI,ESI                         ; 00466d6d
    MOV dword ptr [ESP + 0x18],ESI      ; 00466d6f
    CMP dword ptr [ESP + 0x38],0x64     ; 00466d73
        ;   Label: LAB_00466d73
    JZ 0x00466f53                       ; 00466d78
        ;   XREF to: 00466f53 (CONDITIONAL_JUMP)  ; LAB_00466f53
    MOV EAX,dword ptr [ESP + 0x18]      ; 00466d7e
    ADD ESP,0x48                        ; 00466d82
    POP EBP                             ; 00466d85
    POP EDI                             ; 00466d86
    POP ESI                             ; 00466d87
    POP EBX                             ; 00466d88
    RET                                 ; 00466d89
    OR CL,0x8                           ; 00466d8a
        ;   Label: LAB_00466d8a
    JMP 0x00466d3f                      ; 00466d8d
        ;   XREF to: 00466d3f (UNCONDITIONAL_JUMP)  ; LAB_00466d3f
    CMP dword ptr [ESP + 0x3c],0x0      ; 00466d8f
        ;   Label: LAB_00466d8f
    JNZ 0x00466d63                      ; 00466d94
        ;   XREF to: 00466d63 (CONDITIONAL_JUMP)  ; LAB_00466d63
    MOV dword ptr [ESP + 0x18],0x1      ; 00466d96
    JMP 0x00466d73                      ; 00466d9e
        ;   XREF to: 00466d73 (UNCONDITIONAL_JUMP)  ; LAB_00466d73
    TEST EBX,EBX                        ; 00466da0
        ;   Label: LAB_00466da0
    JZ 0x00466e3f                       ; 00466da2
        ;   XREF to: 00466e3f (CONDITIONAL_JUMP)  ; LAB_00466e3f
    MOV dword ptr [ESP + 0x40],EBX      ; 00466da8
        ;   Label: LAB_00466da8
    MOV BL,byte ptr [ESP + 0x40]        ; 00466dac
    TEST BL,0x1                         ; 00466db0
    JZ 0x00466e48                       ; 00466db3
        ;   XREF to: 00466e48 (CONDITIONAL_JUMP)  ; LAB_00466e48
    TEST ESI,ESI                        ; 00466db9
    JZ 0x00466ddd                       ; 00466dbb
        ;   XREF to: 00466ddd (CONDITIONAL_JUMP)  ; LAB_00466ddd
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00466dbd
    MOV EBX,dword ptr [EDI]             ; 00466dc1
    MOV EDX,0x10000                     ; 00466dc3
    SUB EAX,EBX                         ; 00466dc8
    MOV EBX,ESI                         ; 00466dca
    IMUL EDX                            ; 00466dcc
    IDIV EBX                            ; 00466dce
    MOV EDX,ECX                         ; 00466dd0
    IMUL EDX                            ; 00466dd2
    SHRD EAX,EDX,0x10                   ; 00466dd4
    MOV EDX,dword ptr [EBP]             ; 00466dd8
    ADD EDX,EAX                         ; 00466ddb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00466ddd
        ;   Label: LAB_00466ddd
    CMP dword ptr [ESP + 0x44],0x0      ; 00466de1
        ;   Label: LAB_00466de1
    JZ 0x00466ede                       ; 00466de6
        ;   XREF to: 00466ede (CONDITIONAL_JUMP)  ; LAB_00466ede
    MOV ECX,dword ptr [ESP + 0x70]      ; 00466dec
    MOV ESI,EAX                         ; 00466df0
    MOV dword ptr [EBP],EDX             ; 00466df2
    MOV dword ptr [ESP + 0x24],ECX      ; 00466df5
    MOV ECX,dword ptr [ESP + 0x74]      ; 00466df9
    MOV dword ptr [EDI],EAX             ; 00466dfd
    MOV dword ptr [ESP + 0x1c],ECX      ; 00466dff
    MOV ECX,dword ptr [ESP + 0x78]      ; 00466e03
    MOV EBX,dword ptr [EBP]             ; 00466e07
    MOV dword ptr [ESP + 0x2c],ECX      ; 00466e0a
    XOR ECX,ECX                         ; 00466e0e
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00466e10
    JLE 0x00466e1b                      ; 00466e14
        ;   XREF to: 00466e1b (CONDITIONAL_JUMP)  ; LAB_00466e1b
    MOV ECX,0x1                         ; 00466e16
    CMP ESI,dword ptr [ESP + 0x1c]      ; 00466e1b
        ;   Label: LAB_00466e1b
    JGE 0x00466e24                      ; 00466e1f
        ;   XREF to: 00466e24 (CONDITIONAL_JUMP)  ; LAB_00466e24
    OR CL,0x2                           ; 00466e21
    CMP EBX,dword ptr [ESP + 0x2c]      ; 00466e24
        ;   Label: LAB_00466e24
    JLE 0x00466e2d                      ; 00466e28
        ;   XREF to: 00466e2d (CONDITIONAL_JUMP)  ; LAB_00466e2d
    OR CL,0x4                           ; 00466e2a
    CMP EBX,dword ptr [ESP + 0x24]      ; 00466e2d
        ;   Label: LAB_00466e2d
    JGE 0x00466e36                      ; 00466e31
        ;   XREF to: 00466e36 (CONDITIONAL_JUMP)  ; LAB_00466e36
    OR CL,0x8                           ; 00466e33
    MOV dword ptr [ESP + 0x44],ECX      ; 00466e36
        ;   Label: LAB_00466e36
    JMP 0x00466f3c                      ; 00466e3a
        ;   XREF to: 00466f3c (UNCONDITIONAL_JUMP)  ; LAB_00466f3c
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00466e3f
        ;   Label: LAB_00466e3f
    JMP 0x00466da8                      ; 00466e43
        ;   XREF to: 00466da8 (UNCONDITIONAL_JUMP)  ; LAB_00466da8
    TEST BL,0x2                         ; 00466e48
        ;   Label: LAB_00466e48
    JZ 0x00466e7a                       ; 00466e4b
        ;   XREF to: 00466e7a (CONDITIONAL_JUMP)  ; LAB_00466e7a
    TEST ESI,ESI                        ; 00466e4d
    JZ 0x00466e71                       ; 00466e4f
        ;   XREF to: 00466e71 (CONDITIONAL_JUMP)  ; LAB_00466e71
    MOV EAX,dword ptr [ESP + 0x74]      ; 00466e51
    MOV EDX,dword ptr [EDI]             ; 00466e55
    MOV EBX,ESI                         ; 00466e57
    SUB EAX,EDX                         ; 00466e59
    MOV EDX,0x10000                     ; 00466e5b
    IMUL EDX                            ; 00466e60
    IDIV EBX                            ; 00466e62
    MOV EDX,ECX                         ; 00466e64
    IMUL EDX                            ; 00466e66
    SHRD EAX,EDX,0x10                   ; 00466e68
    MOV EDX,dword ptr [EBP]             ; 00466e6c
    ADD EDX,EAX                         ; 00466e6f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00466e71
        ;   Label: LAB_00466e71
    JMP 0x00466de1                      ; 00466e75
        ;   XREF to: 00466de1 (UNCONDITIONAL_JUMP)  ; LAB_00466de1
    TEST BL,0x4                         ; 00466e7a
        ;   Label: LAB_00466e7a
    JZ 0x00466eaa                       ; 00466e7d
        ;   XREF to: 00466eaa (CONDITIONAL_JUMP)  ; LAB_00466eaa
    TEST ECX,ECX                        ; 00466e7f
    JZ 0x00466ea1                       ; 00466e81
        ;   XREF to: 00466ea1 (CONDITIONAL_JUMP)  ; LAB_00466ea1
    MOV EAX,dword ptr [ESP + 0x78]      ; 00466e83
    MOV EBX,dword ptr [EBP]             ; 00466e87
    MOV EDX,0x10000                     ; 00466e8a
    SUB EAX,EBX                         ; 00466e8f
    MOV EBX,ECX                         ; 00466e91
    IMUL EDX                            ; 00466e93
    IDIV EBX                            ; 00466e95
    MOV EDX,ESI                         ; 00466e97
    IMUL EDX                            ; 00466e99
    SHRD EAX,EDX,0x10                   ; 00466e9b
    ADD EAX,dword ptr [EDI]             ; 00466e9f
    MOV EDX,dword ptr [ESP + 0x78]      ; 00466ea1
        ;   Label: LAB_00466ea1
    JMP 0x00466de1                      ; 00466ea5
        ;   XREF to: 00466de1 (UNCONDITIONAL_JUMP)  ; LAB_00466de1
    TEST BL,0x8                         ; 00466eaa
        ;   Label: LAB_00466eaa
    JZ 0x00466de1                       ; 00466ead
        ;   XREF to: 00466de1 (CONDITIONAL_JUMP)  ; LAB_00466de1
    TEST ECX,ECX                        ; 00466eb3
    JZ 0x00466ed5                       ; 00466eb5
        ;   XREF to: 00466ed5 (CONDITIONAL_JUMP)  ; LAB_00466ed5
    MOV EAX,dword ptr [ESP + 0x70]      ; 00466eb7
    MOV EDX,dword ptr [EBP]             ; 00466ebb
    MOV EBX,ECX                         ; 00466ebe
    SUB EAX,EDX                         ; 00466ec0
    MOV EDX,0x10000                     ; 00466ec2
    IMUL EDX                            ; 00466ec7
    IDIV EBX                            ; 00466ec9
    MOV EDX,ESI                         ; 00466ecb
    IMUL EDX                            ; 00466ecd
    SHRD EAX,EDX,0x10                   ; 00466ecf
    ADD EAX,dword ptr [EDI]             ; 00466ed3
    MOV EDX,dword ptr [ESP + 0x70]      ; 00466ed5
        ;   Label: LAB_00466ed5
    JMP 0x00466de1                      ; 00466ed9
        ;   XREF to: 00466de1 (UNCONDITIONAL_JUMP)  ; LAB_00466de1
    MOV ECX,dword ptr [ESP + 0x68]      ; 00466ede
        ;   Label: LAB_00466ede
    MOV dword ptr [ECX],EDX             ; 00466ee2
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00466ee4
    MOV dword ptr [ECX],EAX             ; 00466ee8
    MOV ECX,dword ptr [ESP + 0x70]      ; 00466eea
    MOV EBX,dword ptr [ESP + 0x68]      ; 00466eee
    MOV dword ptr [ESP + 0x20],ECX      ; 00466ef2
    MOV ECX,dword ptr [ESP + 0x74]      ; 00466ef6
    MOV dword ptr [ESP + 0x34],EAX      ; 00466efa
    MOV dword ptr [ESP + 0x28],ECX      ; 00466efe
    MOV ECX,dword ptr [ESP + 0x78]      ; 00466f02
    MOV EBX,dword ptr [EBX]             ; 00466f06
    MOV dword ptr [ESP + 0x30],ECX      ; 00466f08
    XOR ECX,ECX                         ; 00466f0c
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00466f0e
    JLE 0x00466f19                      ; 00466f12
        ;   XREF to: 00466f19 (CONDITIONAL_JUMP)  ; LAB_00466f19
    MOV ECX,0x1                         ; 00466f14
    MOV ESI,dword ptr [ESP + 0x34]      ; 00466f19
        ;   Label: LAB_00466f19
    CMP ESI,dword ptr [ESP + 0x28]      ; 00466f1d
    JGE 0x00466f26                      ; 00466f21
        ;   XREF to: 00466f26 (CONDITIONAL_JUMP)  ; LAB_00466f26
    OR CL,0x2                           ; 00466f23
    CMP EBX,dword ptr [ESP + 0x30]      ; 00466f26
        ;   Label: LAB_00466f26
    JLE 0x00466f2f                      ; 00466f2a
        ;   XREF to: 00466f2f (CONDITIONAL_JUMP)  ; LAB_00466f2f
    OR CL,0x4                           ; 00466f2c
    CMP EBX,dword ptr [ESP + 0x20]      ; 00466f2f
        ;   Label: LAB_00466f2f
    JGE 0x00466f38                      ; 00466f33
        ;   XREF to: 00466f38 (CONDITIONAL_JUMP)  ; LAB_00466f38
    OR CL,0x8                           ; 00466f35
    MOV dword ptr [ESP + 0x3c],ECX      ; 00466f38
        ;   Label: LAB_00466f38
    MOV ECX,dword ptr [ESP + 0x38]      ; 00466f3c
        ;   Label: LAB_00466f3c
    INC ECX                             ; 00466f40
    MOV dword ptr [ESP + 0x38],ECX      ; 00466f41
    CMP ECX,0x64                        ; 00466f45
    JL 0x00466d49                       ; 00466f48
        ;   XREF to: 00466d49 (CONDITIONAL_JUMP)  ; LAB_00466d49
    JMP 0x00466d73                      ; 00466f4e
        ;   XREF to: 00466d73 (UNCONDITIONAL_JUMP)  ; LAB_00466d73
    MOV EBP,0x5d12e4                    ; 00466f53
        ;   Label: LAB_00466f53
    MOV EAX,0x369                       ; 00466f58
    PUSH 0x5d12fc                       ; 00466f5d
    MOV dword ptr [0x01d046a0],EBP      ; 00466f62 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00466f68 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00466f6d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00466f72
    MOV EAX,dword ptr [ESP + 0x18]      ; 00466f75
    ADD ESP,0x48                        ; 00466f79
    POP EBP                             ; 00466f7c
    POP EDI                             ; 00466f7d
    POP ESI                             ; 00466f7e
    POP EBX                             ; 00466f7f
    RET                                 ; 00466f80

