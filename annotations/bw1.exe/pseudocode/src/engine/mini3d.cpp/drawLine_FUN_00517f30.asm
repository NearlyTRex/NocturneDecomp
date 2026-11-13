; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawLine_FUN_00517f30(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; Referenced Globals:
;   undefined4 DAT_01d22544
;   undefined4 DAT_01d25f44
;   undefined4 DAT_01d2ad74
;
; Called Functions:
;   engine_mini3d.cpp_lineListD3DTL_FUN_00513220
;   engine_mini3d.cpp_nextDepth2D_FUN_00518320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517f30
        ;   Label: engine_mini3d.cpp_drawLine_FUN_00517f30
    SUB ESP,0xc                         ; 00517f31
    MOV EBX,dword ptr [0x01d2ad74]      ; 00517f34 | DAT_01d2ad74
    CALL engine_mini3d.cpp_nextDepth2D_FUN_00518320 ; 00517f3a
        ;   XREF to: 00518320 (UNCONDITIONAL_CALL)  ; float engine_mini3d.cpp_nextDepth2D_FUN_00518320()
    MOV dword ptr [ESP + 0x8],EAX       ; 00517f3f
    FLD1                                ; 00517f43
    MOV EAX,dword ptr [ESP + 0x8]       ; 00517f45
    MOV dword ptr [ESP + 0x4],EAX       ; 00517f49
    FDIV float ptr [ESP + 0x4]          ; 00517f4d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00517f51
    MOV dword ptr [ESP + 0x8],EAX       ; 00517f55
    FILD dword ptr [ESP + 0x8]          ; 00517f59
    MOV EAX,dword ptr [ESP + 0x18]      ; 00517f5d
    FLD float ptr [0x01d22544]          ; 00517f61 | DAT_01d22544
    FLD ST0                             ; 00517f67
    MOV dword ptr [ESP + 0x8],EAX       ; 00517f69
    FMULP ST2                           ; 00517f6d
    FILD dword ptr [ESP + 0x8]          ; 00517f6f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517f73
    FMUL ST1                            ; 00517f77
    MOV dword ptr [EBX + 0x8],EAX       ; 00517f79
    FXCH ST3                            ; 00517f7c
    FSTP float ptr [ESP]                ; 00517f7e
    MOV EAX,dword ptr [ESP]             ; 00517f81
    MOV dword ptr [EBX + 0xc],EAX       ; 00517f84
    MOV EAX,[0x01d25f44]                ; 00517f87 | DAT_01d25f44
    MOV dword ptr [EBX + 0x10],EAX      ; 00517f8c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00517f8f
    MOV dword ptr [ESP + 0x8],EAX       ; 00517f93
    MOV dword ptr [EBX + 0x14],0x0      ; 00517f97
    FILD dword ptr [ESP + 0x8]          ; 00517f9e
    FMUL ST1                            ; 00517fa2
    MOV dword ptr [EBX + 0x18],0x3f000000 ; 00517fa4
    MOV EAX,dword ptr [ESP + 0x20]      ; 00517fab
    MOV dword ptr [EBX + 0x1c],0x3f000000 ; 00517faf
    MOV dword ptr [ESP + 0x8],EAX       ; 00517fb6
    MOV dword ptr [EBX + 0x34],0x0      ; 00517fba
    FILD dword ptr [ESP + 0x8]          ; 00517fc1
    FMULP ST2                           ; 00517fc5
    MOV dword ptr [EBX + 0x38],0x3f000000 ; 00517fc7
    PUSH 0x2                            ; 00517fce
    MOV dword ptr [EBX + 0x3c],0x3f000000 ; 00517fd0
    PUSH EBX                            ; 00517fd7
    FXCH ST2                            ; 00517fd8
    FSTP float ptr [EBX]                ; 00517fda
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517fdc
    FXCH ST2                            ; 00517fe0
    FSTP float ptr [EBX + 0x4]          ; 00517fe2
    MOV dword ptr [EBX + 0x28],EAX      ; 00517fe5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00517fe8
    FSTP float ptr [EBX + 0x20]         ; 00517fec
    MOV dword ptr [EBX + 0x2c],EAX      ; 00517fef
    MOV EAX,[0x01d25f44]                ; 00517ff2 | DAT_01d25f44
    FSTP float ptr [EBX + 0x24]         ; 00517ff7
    MOV dword ptr [EBX + 0x30],EAX      ; 00517ffa
    CALL engine_mini3d.cpp_lineListD3DTL_FUN_00513220 ; 00517ffd
        ;   XREF to: 00513220 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_lineListD3DTL_FUN_00513220(float * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00518002
    ADD ESP,0xc                         ; 00518005
    POP EBX                             ; 00518008
    RET                                 ; 00518009

