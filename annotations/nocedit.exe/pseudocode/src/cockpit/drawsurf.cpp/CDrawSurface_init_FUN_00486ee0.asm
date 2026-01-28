; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00486ee0 (CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)
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
;   cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 at 00486ec2
;   core_dracbrid.cpp_FUN_00486e70 at 00486e8a
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486ee0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
    PUSH ESI                            ; 00486ee1
    PUSH EDI                            ; 00486ee2
    PUSH EBP                            ; 00486ee3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00486ee4
    MOV EDX,dword ptr [ESP + 0x28]      ; 00486ee8
    MOV ECX,dword ptr [ESP + 0x18]      ; 00486eec
    MOV dword ptr [EAX + 0x8],ECX       ; 00486ef0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00486ef3
    MOV dword ptr [EAX + 0xc],ECX       ; 00486ef7
    MOV ECX,dword ptr [ESP + 0x20]      ; 00486efa
    MOV dword ptr [EAX],ECX             ; 00486efe
    MOV ECX,dword ptr [ESP + 0x24]      ; 00486f00
    MOV dword ptr [EAX + 0x4],ECX       ; 00486f04
    MOV ECX,dword ptr [EAX + 0x8]       ; 00486f07
    MOV dword ptr [EAX + 0x10],ECX      ; 00486f0a
    MOV ECX,dword ptr [EAX + 0xc]       ; 00486f0d
    MOV dword ptr [EAX + 0x14],ECX      ; 00486f10
    MOV EBX,dword ptr [EAX]             ; 00486f13
    MOV ECX,dword ptr [EAX + 0x8]       ; 00486f15
    ADD ECX,EBX                         ; 00486f18
    DEC ECX                             ; 00486f1a
    MOV dword ptr [EAX + 0x18],ECX      ; 00486f1b
    MOV ESI,dword ptr [EAX + 0x4]       ; 00486f1e
    MOV ECX,dword ptr [EAX + 0xc]       ; 00486f21
    ADD ECX,ESI                         ; 00486f24
    DEC ECX                             ; 00486f26
    MOV dword ptr [EAX + 0x1c],ECX      ; 00486f27
    TEST EDX,EDX                        ; 00486f2a
    JNZ 0x00486f67                      ; 00486f2c
        ;   XREF to: 00486f67 (CONDITIONAL_JUMP)  ; LAB_00486f67
    CMP dword ptr [EAX + 0x10],0x0      ; 00486f2e
        ;   Label: LAB_00486f2e
    JL 0x00486fe0                       ; 00486f32
        ;   XREF to: 00486fe0 (CONDITIONAL_JUMP)  ; LAB_00486fe0
    CMP dword ptr [EAX + 0x14],0x0      ; 00486f38
        ;   Label: LAB_00486f38
    JL 0x00486fec                       ; 00486f3c
        ;   XREF to: 00486fec (CONDITIONAL_JUMP)  ; LAB_00486fec
    MOV EBX,dword ptr [0x00679394]      ; 00486f42 | g_WindowWidth
        ;   Label: LAB_00486f42
    CMP EBX,dword ptr [EAX + 0x18]      ; 00486f48
    JG 0x00486f53                       ; 00486f4b
        ;   XREF to: 00486f53 (CONDITIONAL_JUMP)  ; LAB_00486f53
    LEA EDX,[EBX + -0x1]                ; 00486f4d
    MOV dword ptr [EAX + 0x18],EDX      ; 00486f50
    MOV ESI,dword ptr [0x00679398]      ; 00486f53 | g_WindowHeight
        ;   Label: LAB_00486f53
    CMP ESI,dword ptr [EAX + 0x1c]      ; 00486f59
    JLE 0x00486ff8                      ; 00486f5c
        ;   XREF to: 00486ff8 (CONDITIONAL_JUMP)  ; LAB_00486ff8
    POP EBP                             ; 00486f62
    POP EDI                             ; 00486f63
    POP ESI                             ; 00486f64
    POP EBX                             ; 00486f65
    RET                                 ; 00486f66
    MOV EDI,dword ptr [EAX + 0x8]       ; 00486f67
        ;   Label: LAB_00486f67
    MOV ECX,dword ptr [EDX + 0x8]       ; 00486f6a
    ADD EDI,ECX                         ; 00486f6d
    MOV dword ptr [EAX + 0x8],EDI       ; 00486f6f
    MOV EBP,dword ptr [EAX + 0xc]       ; 00486f72
    MOV ECX,dword ptr [EDX + 0xc]       ; 00486f75
    ADD EBP,ECX                         ; 00486f78
    MOV dword ptr [EAX + 0xc],EBP       ; 00486f7a
    MOV EBX,dword ptr [EAX + 0x10]      ; 00486f7d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00486f80
    ADD EBX,ECX                         ; 00486f83
    MOV dword ptr [EAX + 0x10],EBX      ; 00486f85
    MOV ESI,dword ptr [EAX + 0x14]      ; 00486f88
    MOV ECX,dword ptr [EDX + 0xc]       ; 00486f8b
    ADD ESI,ECX                         ; 00486f8e
    MOV dword ptr [EAX + 0x14],ESI      ; 00486f90
    MOV EDI,dword ptr [EAX + 0x18]      ; 00486f93
    MOV ECX,dword ptr [EDX + 0x8]       ; 00486f96
    ADD EDI,ECX                         ; 00486f99
    MOV dword ptr [EAX + 0x18],EDI      ; 00486f9b
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00486f9e
    MOV ECX,dword ptr [EDX + 0xc]       ; 00486fa1
    ADD EBP,ECX                         ; 00486fa4
    MOV dword ptr [EAX + 0x1c],EBP      ; 00486fa6
    MOV ECX,dword ptr [EAX + 0x10]      ; 00486fa9
    MOV EBX,dword ptr [EDX + 0x10]      ; 00486fac
    CMP ECX,EBX                         ; 00486faf
    JGE 0x00486fb6                      ; 00486fb1
        ;   XREF to: 00486fb6 (CONDITIONAL_JUMP)  ; LAB_00486fb6
    MOV dword ptr [EAX + 0x10],EBX      ; 00486fb3
    MOV ESI,dword ptr [EDX + 0x14]      ; 00486fb6
        ;   Label: LAB_00486fb6
    CMP ESI,dword ptr [EAX + 0x14]      ; 00486fb9
    JLE 0x00486fc1                      ; 00486fbc
        ;   XREF to: 00486fc1 (CONDITIONAL_JUMP)  ; LAB_00486fc1
    MOV dword ptr [EAX + 0x14],ESI      ; 00486fbe
    MOV EDI,dword ptr [EDX + 0x18]      ; 00486fc1
        ;   Label: LAB_00486fc1
    CMP EDI,dword ptr [EAX + 0x18]      ; 00486fc4
    JGE 0x00486fcc                      ; 00486fc7
        ;   XREF to: 00486fcc (CONDITIONAL_JUMP)  ; LAB_00486fcc
    MOV dword ptr [EAX + 0x18],EDI      ; 00486fc9
    MOV EBP,dword ptr [EDX + 0x1c]      ; 00486fcc
        ;   Label: LAB_00486fcc
    CMP EBP,dword ptr [EAX + 0x1c]      ; 00486fcf
    JGE 0x00486f2e                      ; 00486fd2
        ;   XREF to: 00486f2e (CONDITIONAL_JUMP)  ; LAB_00486f2e
    MOV dword ptr [EAX + 0x1c],EBP      ; 00486fd8
    JMP 0x00486f2e                      ; 00486fdb
        ;   XREF to: 00486f2e (UNCONDITIONAL_JUMP)  ; LAB_00486f2e
    MOV dword ptr [EAX + 0x10],0x0      ; 00486fe0
        ;   Label: LAB_00486fe0
    JMP 0x00486f38                      ; 00486fe7
        ;   XREF to: 00486f38 (UNCONDITIONAL_JUMP)  ; LAB_00486f38
    MOV dword ptr [EAX + 0x14],0x0      ; 00486fec
        ;   Label: LAB_00486fec
    JMP 0x00486f42                      ; 00486ff3
        ;   XREF to: 00486f42 (UNCONDITIONAL_JUMP)  ; LAB_00486f42
    LEA EDX,[ESI + -0x1]                ; 00486ff8
        ;   Label: LAB_00486ff8
    MOV dword ptr [EAX + 0x1c],EDX      ; 00486ffb
    POP EBP                             ; 00486ffe
    POP EDI                             ; 00486fff
    POP ESI                             ; 00487000
    POP EBX                             ; 00487001
    RET                                 ; 00487002

