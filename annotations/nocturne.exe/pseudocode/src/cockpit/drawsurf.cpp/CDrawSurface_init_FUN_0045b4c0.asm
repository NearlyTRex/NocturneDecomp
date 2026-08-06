; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_0045b4c0(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; CDrawSurface *   Stack[0x18]:4   parent_surface
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480 at 0045b4a2
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b4c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0
    PUSH ESI                            ; 0045b4c1
    PUSH EDI                            ; 0045b4c2
    PUSH EBP                            ; 0045b4c3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045b4c4
    MOV EDX,dword ptr [ESP + 0x28]      ; 0045b4c8
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045b4cc
    MOV dword ptr [EAX + 0x8],ECX       ; 0045b4d0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045b4d3
    MOV dword ptr [EAX + 0xc],ECX       ; 0045b4d7
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045b4da
    MOV dword ptr [EAX],ECX             ; 0045b4de
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045b4e0
    MOV dword ptr [EAX + 0x4],ECX       ; 0045b4e4
    MOV ECX,dword ptr [EAX + 0x8]       ; 0045b4e7
    MOV dword ptr [EAX + 0x10],ECX      ; 0045b4ea
    MOV ECX,dword ptr [EAX + 0xc]       ; 0045b4ed
    MOV dword ptr [EAX + 0x14],ECX      ; 0045b4f0
    MOV EBX,dword ptr [EAX]             ; 0045b4f3
    MOV ECX,dword ptr [EAX + 0x8]       ; 0045b4f5
    ADD ECX,EBX                         ; 0045b4f8
    DEC ECX                             ; 0045b4fa
    MOV dword ptr [EAX + 0x18],ECX      ; 0045b4fb
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045b4fe
    MOV ECX,dword ptr [EAX + 0xc]       ; 0045b501
    ADD ECX,ESI                         ; 0045b504
    DEC ECX                             ; 0045b506
    MOV dword ptr [EAX + 0x1c],ECX      ; 0045b507
    TEST EDX,EDX                        ; 0045b50a
    JNZ 0x0045b547                      ; 0045b50c
        ;   XREF to: 0045b547 (CONDITIONAL_JUMP)  ; LAB_0045b547
    CMP dword ptr [EAX + 0x10],0x0      ; 0045b50e
        ;   Label: LAB_0045b50e
    JL 0x0045b5c0                       ; 0045b512
        ;   XREF to: 0045b5c0 (CONDITIONAL_JUMP)  ; LAB_0045b5c0
    CMP dword ptr [EAX + 0x14],0x0      ; 0045b518
        ;   Label: LAB_0045b518
    JL 0x0045b5cc                       ; 0045b51c
        ;   XREF to: 0045b5cc (CONDITIONAL_JUMP)  ; LAB_0045b5cc
    MOV EBX,dword ptr [0x005b761c]      ; 0045b522 | g_WindowWidth
        ;   Label: LAB_0045b522
    CMP EBX,dword ptr [EAX + 0x18]      ; 0045b528
    JG 0x0045b533                       ; 0045b52b
        ;   XREF to: 0045b533 (CONDITIONAL_JUMP)  ; LAB_0045b533
    LEA EDX,[EBX + -0x1]                ; 0045b52d
    MOV dword ptr [EAX + 0x18],EDX      ; 0045b530
    MOV ESI,dword ptr [0x005b7620]      ; 0045b533 | g_WindowHeight
        ;   Label: LAB_0045b533
    CMP ESI,dword ptr [EAX + 0x1c]      ; 0045b539
    JLE 0x0045b5d8                      ; 0045b53c
        ;   XREF to: 0045b5d8 (CONDITIONAL_JUMP)  ; LAB_0045b5d8
    POP EBP                             ; 0045b542
    POP EDI                             ; 0045b543
    POP ESI                             ; 0045b544
    POP EBX                             ; 0045b545
    RET                                 ; 0045b546
    MOV EDI,dword ptr [EAX + 0x8]       ; 0045b547
        ;   Label: LAB_0045b547
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045b54a
    ADD EDI,ECX                         ; 0045b54d
    MOV dword ptr [EAX + 0x8],EDI       ; 0045b54f
    MOV EBP,dword ptr [EAX + 0xc]       ; 0045b552
    MOV ECX,dword ptr [EDX + 0xc]       ; 0045b555
    ADD EBP,ECX                         ; 0045b558
    MOV dword ptr [EAX + 0xc],EBP       ; 0045b55a
    MOV EBX,dword ptr [EAX + 0x10]      ; 0045b55d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045b560
    ADD EBX,ECX                         ; 0045b563
    MOV dword ptr [EAX + 0x10],EBX      ; 0045b565
    MOV ESI,dword ptr [EAX + 0x14]      ; 0045b568
    MOV ECX,dword ptr [EDX + 0xc]       ; 0045b56b
    ADD ESI,ECX                         ; 0045b56e
    MOV dword ptr [EAX + 0x14],ESI      ; 0045b570
    MOV EDI,dword ptr [EAX + 0x18]      ; 0045b573
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045b576
    ADD EDI,ECX                         ; 0045b579
    MOV dword ptr [EAX + 0x18],EDI      ; 0045b57b
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0045b57e
    MOV ECX,dword ptr [EDX + 0xc]       ; 0045b581
    ADD EBP,ECX                         ; 0045b584
    MOV dword ptr [EAX + 0x1c],EBP      ; 0045b586
    MOV ECX,dword ptr [EAX + 0x10]      ; 0045b589
    MOV EBX,dword ptr [EDX + 0x10]      ; 0045b58c
    CMP ECX,EBX                         ; 0045b58f
    JGE 0x0045b596                      ; 0045b591
        ;   XREF to: 0045b596 (CONDITIONAL_JUMP)  ; LAB_0045b596
    MOV dword ptr [EAX + 0x10],EBX      ; 0045b593
    MOV ESI,dword ptr [EDX + 0x14]      ; 0045b596
        ;   Label: LAB_0045b596
    CMP ESI,dword ptr [EAX + 0x14]      ; 0045b599
    JLE 0x0045b5a1                      ; 0045b59c
        ;   XREF to: 0045b5a1 (CONDITIONAL_JUMP)  ; LAB_0045b5a1
    MOV dword ptr [EAX + 0x14],ESI      ; 0045b59e
    MOV EDI,dword ptr [EDX + 0x18]      ; 0045b5a1
        ;   Label: LAB_0045b5a1
    CMP EDI,dword ptr [EAX + 0x18]      ; 0045b5a4
    JGE 0x0045b5ac                      ; 0045b5a7
        ;   XREF to: 0045b5ac (CONDITIONAL_JUMP)  ; LAB_0045b5ac
    MOV dword ptr [EAX + 0x18],EDI      ; 0045b5a9
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0045b5ac
        ;   Label: LAB_0045b5ac
    CMP EBP,dword ptr [EAX + 0x1c]      ; 0045b5af
    JGE 0x0045b50e                      ; 0045b5b2
        ;   XREF to: 0045b50e (CONDITIONAL_JUMP)  ; LAB_0045b50e
    MOV dword ptr [EAX + 0x1c],EBP      ; 0045b5b8
    JMP 0x0045b50e                      ; 0045b5bb
        ;   XREF to: 0045b50e (UNCONDITIONAL_JUMP)  ; LAB_0045b50e
    MOV dword ptr [EAX + 0x10],0x0      ; 0045b5c0
        ;   Label: LAB_0045b5c0
    JMP 0x0045b518                      ; 0045b5c7
        ;   XREF to: 0045b518 (UNCONDITIONAL_JUMP)  ; LAB_0045b518
    MOV dword ptr [EAX + 0x14],0x0      ; 0045b5cc
        ;   Label: LAB_0045b5cc
    JMP 0x0045b522                      ; 0045b5d3
        ;   XREF to: 0045b522 (UNCONDITIONAL_JUMP)  ; LAB_0045b522
    LEA EDX,[ESI + -0x1]                ; 0045b5d8
        ;   Label: LAB_0045b5d8
    MOV dword ptr [EAX + 0x1c],EDX      ; 0045b5db
    POP EBP                             ; 0045b5de
    POP EDI                             ; 0045b5df
    POP ESI                             ; 0045b5e0
    POP EBX                             ; 0045b5e1
    RET                                 ; 0045b5e2

