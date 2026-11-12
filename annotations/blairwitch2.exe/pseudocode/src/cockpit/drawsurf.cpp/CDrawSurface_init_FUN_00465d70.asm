; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00465d70(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; CDrawSurface *   Stack[0x18]:4   parent_surface
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30 at 00465d52
;   core_dracbrid.cpp_FUN_00465cfe at 00465d1a
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465d70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00465d70
    PUSH ESI                            ; 00465d71
    PUSH EDI                            ; 00465d72
    PUSH EBP                            ; 00465d73
    MOV EAX,dword ptr [ESP + 0x14]      ; 00465d74
    MOV EDX,dword ptr [ESP + 0x28]      ; 00465d78
    MOV ECX,dword ptr [ESP + 0x18]      ; 00465d7c
    MOV dword ptr [EAX + 0x8],ECX       ; 00465d80
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00465d83
    MOV dword ptr [EAX + 0xc],ECX       ; 00465d87
    MOV ECX,dword ptr [ESP + 0x20]      ; 00465d8a
    MOV dword ptr [EAX],ECX             ; 00465d8e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00465d90
    MOV dword ptr [EAX + 0x4],ECX       ; 00465d94
    MOV ECX,dword ptr [EAX + 0x8]       ; 00465d97
    MOV dword ptr [EAX + 0x10],ECX      ; 00465d9a
    MOV ECX,dword ptr [EAX + 0xc]       ; 00465d9d
    MOV dword ptr [EAX + 0x14],ECX      ; 00465da0
    MOV EBX,dword ptr [EAX]             ; 00465da3
    MOV ECX,dword ptr [EAX + 0x8]       ; 00465da5
    ADD ECX,EBX                         ; 00465da8
    DEC ECX                             ; 00465daa
    MOV dword ptr [EAX + 0x18],ECX      ; 00465dab
    MOV ESI,dword ptr [EAX + 0x4]       ; 00465dae
    MOV ECX,dword ptr [EAX + 0xc]       ; 00465db1
    ADD ECX,ESI                         ; 00465db4
    DEC ECX                             ; 00465db6
    MOV dword ptr [EAX + 0x1c],ECX      ; 00465db7
    TEST EDX,EDX                        ; 00465dba
    JNZ 0x00465df7                      ; 00465dbc
        ;   XREF to: 00465df7 (CONDITIONAL_JUMP)  ; LAB_00465df7
    CMP dword ptr [EAX + 0x10],0x0      ; 00465dbe
        ;   Label: LAB_00465dbe
    JL 0x00465e70                       ; 00465dc2
        ;   XREF to: 00465e70 (CONDITIONAL_JUMP)  ; LAB_00465e70
    CMP dword ptr [EAX + 0x14],0x0      ; 00465dc8
        ;   Label: LAB_00465dc8
    JL 0x00465e7c                       ; 00465dcc
        ;   XREF to: 00465e7c (CONDITIONAL_JUMP)  ; LAB_00465e7c
    MOV EBX,dword ptr [0x006141b8]      ; 00465dd2 | DAT_006141b8
        ;   Label: LAB_00465dd2
    CMP EBX,dword ptr [EAX + 0x18]      ; 00465dd8
    JG 0x00465de3                       ; 00465ddb
        ;   XREF to: 00465de3 (CONDITIONAL_JUMP)  ; LAB_00465de3
    LEA EDX,[EBX + -0x1]                ; 00465ddd
    MOV dword ptr [EAX + 0x18],EDX      ; 00465de0
    MOV ESI,dword ptr [0x006141bc]      ; 00465de3 | DAT_006141bc
        ;   Label: LAB_00465de3
    CMP ESI,dword ptr [EAX + 0x1c]      ; 00465de9
    JLE 0x00465e88                      ; 00465dec
        ;   XREF to: 00465e88 (CONDITIONAL_JUMP)  ; LAB_00465e88
    POP EBP                             ; 00465df2
    POP EDI                             ; 00465df3
    POP ESI                             ; 00465df4
    POP EBX                             ; 00465df5
    RET                                 ; 00465df6
    MOV EDI,dword ptr [EAX + 0x8]       ; 00465df7
        ;   Label: LAB_00465df7
    MOV ECX,dword ptr [EDX + 0x8]       ; 00465dfa
    ADD EDI,ECX                         ; 00465dfd
    MOV dword ptr [EAX + 0x8],EDI       ; 00465dff
    MOV EBP,dword ptr [EAX + 0xc]       ; 00465e02
    MOV ECX,dword ptr [EDX + 0xc]       ; 00465e05
    ADD EBP,ECX                         ; 00465e08
    MOV dword ptr [EAX + 0xc],EBP       ; 00465e0a
    MOV EBX,dword ptr [EAX + 0x10]      ; 00465e0d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00465e10
    ADD EBX,ECX                         ; 00465e13
    MOV dword ptr [EAX + 0x10],EBX      ; 00465e15
    MOV ESI,dword ptr [EAX + 0x14]      ; 00465e18
    MOV ECX,dword ptr [EDX + 0xc]       ; 00465e1b
    ADD ESI,ECX                         ; 00465e1e
    MOV dword ptr [EAX + 0x14],ESI      ; 00465e20
    MOV EDI,dword ptr [EAX + 0x18]      ; 00465e23
    MOV ECX,dword ptr [EDX + 0x8]       ; 00465e26
    ADD EDI,ECX                         ; 00465e29
    MOV dword ptr [EAX + 0x18],EDI      ; 00465e2b
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00465e2e
    MOV ECX,dword ptr [EDX + 0xc]       ; 00465e31
    ADD EBP,ECX                         ; 00465e34
    MOV dword ptr [EAX + 0x1c],EBP      ; 00465e36
    MOV ECX,dword ptr [EAX + 0x10]      ; 00465e39
    MOV EBX,dword ptr [EDX + 0x10]      ; 00465e3c
    CMP ECX,EBX                         ; 00465e3f
    JGE 0x00465e46                      ; 00465e41
        ;   XREF to: 00465e46 (CONDITIONAL_JUMP)  ; LAB_00465e46
    MOV dword ptr [EAX + 0x10],EBX      ; 00465e43
    MOV ESI,dword ptr [EDX + 0x14]      ; 00465e46
        ;   Label: LAB_00465e46
    CMP ESI,dword ptr [EAX + 0x14]      ; 00465e49
    JLE 0x00465e51                      ; 00465e4c
        ;   XREF to: 00465e51 (CONDITIONAL_JUMP)  ; LAB_00465e51
    MOV dword ptr [EAX + 0x14],ESI      ; 00465e4e
    MOV EDI,dword ptr [EDX + 0x18]      ; 00465e51
        ;   Label: LAB_00465e51
    CMP EDI,dword ptr [EAX + 0x18]      ; 00465e54
    JGE 0x00465e5c                      ; 00465e57
        ;   XREF to: 00465e5c (CONDITIONAL_JUMP)  ; LAB_00465e5c
    MOV dword ptr [EAX + 0x18],EDI      ; 00465e59
    MOV EBP,dword ptr [EDX + 0x1c]      ; 00465e5c
        ;   Label: LAB_00465e5c
    CMP EBP,dword ptr [EAX + 0x1c]      ; 00465e5f
    JGE 0x00465dbe                      ; 00465e62
        ;   XREF to: 00465dbe (CONDITIONAL_JUMP)  ; LAB_00465dbe
    MOV dword ptr [EAX + 0x1c],EBP      ; 00465e68
    JMP 0x00465dbe                      ; 00465e6b
        ;   XREF to: 00465dbe (UNCONDITIONAL_JUMP)  ; LAB_00465dbe
    MOV dword ptr [EAX + 0x10],0x0      ; 00465e70
        ;   Label: LAB_00465e70
    JMP 0x00465dc8                      ; 00465e77
        ;   XREF to: 00465dc8 (UNCONDITIONAL_JUMP)  ; LAB_00465dc8
    MOV dword ptr [EAX + 0x14],0x0      ; 00465e7c
        ;   Label: LAB_00465e7c
    JMP 0x00465dd2                      ; 00465e83
        ;   XREF to: 00465dd2 (UNCONDITIONAL_JUMP)  ; LAB_00465dd2
    LEA EDX,[ESI + -0x1]                ; 00465e88
        ;   Label: LAB_00465e88
    MOV dword ptr [EAX + 0x1c],EDX      ; 00465e8b
    POP EBP                             ; 00465e8e
    POP EDI                             ; 00465e8f
    POP ESI                             ; 00465e90
    POP EBX                             ; 00465e91
    RET                                 ; 00465e92

