; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawLine_FUN_004f3700(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; Referenced Globals:
;   undefined4 DAT_01d76cc4
;   undefined4 DAT_01d7a6c4
;   undefined4 DAT_01d7f4f4
;
; Called Functions:
;   engine_mini3d.cpp_lineListD3DTL_FUN_004ee9f0
;   engine_mini3d.cpp_nextDepth2D_FUN_004f3af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3700
        ;   Label: engine_mini3d.cpp_drawLine_FUN_004f3700
    SUB ESP,0xc                         ; 004f3701
    MOV EBX,dword ptr [0x01d7f4f4]      ; 004f3704 | DAT_01d7f4f4
    CALL engine_mini3d.cpp_nextDepth2D_FUN_004f3af0 ; 004f370a
        ;   XREF to: 004f3af0 (UNCONDITIONAL_CALL)  ; float engine_mini3d.cpp_nextDepth2D_FUN_004f3af0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004f370f
    FLD1                                ; 004f3713
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3715
    MOV dword ptr [ESP + 0x4],EAX       ; 004f3719
    FDIV float ptr [ESP + 0x4]          ; 004f371d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f3721
    MOV dword ptr [ESP + 0x8],EAX       ; 004f3725
    FILD dword ptr [ESP + 0x8]          ; 004f3729
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f372d
    FLD float ptr [0x01d76cc4]          ; 004f3731 | DAT_01d76cc4
    FLD ST0                             ; 004f3737
    MOV dword ptr [ESP + 0x8],EAX       ; 004f3739
    FMULP ST2                           ; 004f373d
    FILD dword ptr [ESP + 0x8]          ; 004f373f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3743
    FMUL ST1                            ; 004f3747
    MOV dword ptr [EBX + 0x8],EAX       ; 004f3749
    FXCH ST3                            ; 004f374c
    FSTP float ptr [ESP]                ; 004f374e
    MOV EAX,dword ptr [ESP]             ; 004f3751
    MOV dword ptr [EBX + 0xc],EAX       ; 004f3754
    MOV EAX,[0x01d7a6c4]                ; 004f3757 | DAT_01d7a6c4
    MOV dword ptr [EBX + 0x10],EAX      ; 004f375c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f375f
    MOV dword ptr [ESP + 0x8],EAX       ; 004f3763
    MOV dword ptr [EBX + 0x14],0x0      ; 004f3767
    FILD dword ptr [ESP + 0x8]          ; 004f376e
    FMUL ST1                            ; 004f3772
    MOV dword ptr [EBX + 0x18],0x3f000000 ; 004f3774
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f377b
    MOV dword ptr [EBX + 0x1c],0x3f000000 ; 004f377f
    MOV dword ptr [ESP + 0x8],EAX       ; 004f3786
    MOV dword ptr [EBX + 0x34],0x0      ; 004f378a
    FILD dword ptr [ESP + 0x8]          ; 004f3791
    FMULP ST2                           ; 004f3795
    MOV dword ptr [EBX + 0x38],0x3f000000 ; 004f3797
    PUSH 0x2                            ; 004f379e
    MOV dword ptr [EBX + 0x3c],0x3f000000 ; 004f37a0
    PUSH EBX                            ; 004f37a7
    FXCH ST2                            ; 004f37a8
    FSTP float ptr [EBX]                ; 004f37aa
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f37ac
    FXCH ST2                            ; 004f37b0
    FSTP float ptr [EBX + 0x4]          ; 004f37b2
    MOV dword ptr [EBX + 0x28],EAX      ; 004f37b5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f37b8
    FSTP float ptr [EBX + 0x20]         ; 004f37bc
    MOV dword ptr [EBX + 0x2c],EAX      ; 004f37bf
    MOV EAX,[0x01d7a6c4]                ; 004f37c2 | DAT_01d7a6c4
    FSTP float ptr [EBX + 0x24]         ; 004f37c7
    MOV dword ptr [EBX + 0x30],EAX      ; 004f37ca
    CALL engine_mini3d.cpp_lineListD3DTL_FUN_004ee9f0 ; 004f37cd
        ;   XREF to: 004ee9f0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_lineListD3DTL_FUN_004ee9f0(float * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004f37d2
    ADD ESP,0xc                         ; 004f37d5
    POP EBX                             ; 004f37d8
    RET                                 ; 004f37d9

