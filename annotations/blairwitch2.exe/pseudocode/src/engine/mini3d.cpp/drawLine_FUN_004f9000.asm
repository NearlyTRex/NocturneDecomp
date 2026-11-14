; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawLine_FUN_004f9000(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; Referenced Globals:
;   undefined4 DAT_01d0d2e4
;   undefined4 DAT_01d12114
;
; Called Functions:
;   engine_mini3d.cpp_lineListD3DTL_FUN_004f44d0
;   engine_mini3d.cpp_nextDepth2D_FUN_004f93d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9000
        ;   Label: engine_mini3d.cpp_drawLine_FUN_004f9000
    SUB ESP,0x10                        ; 004f9001
    MOV EBX,dword ptr [0x01d12114]      ; 004f9004 | DAT_01d12114
    CALL engine_mini3d.cpp_nextDepth2D_FUN_004f93d0 ; 004f900a
        ;   XREF to: 004f93d0 (UNCONDITIONAL_CALL)  ; float engine_mini3d.cpp_nextDepth2D_FUN_004f93d0()
    MOV dword ptr [ESP + 0xc],EAX       ; 004f900f
    FLD1                                ; 004f9013
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f9015
    MOV dword ptr [ESP],EAX             ; 004f9019
    FDIV float ptr [ESP]                ; 004f901c
    MOV dword ptr [EBX + 0x14],0x0      ; 004f901f
    MOV dword ptr [EBX + 0x18],0x3f000000 ; 004f9026
    MOV dword ptr [EBX + 0x1c],0x3f000000 ; 004f902d
    MOV dword ptr [EBX + 0x34],0x0      ; 004f9034
    PUSH 0x2                            ; 004f903b
    MOV dword ptr [EBX + 0x38],0x3f000000 ; 004f903d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f9044
    MOV dword ptr [EBX + 0x3c],0x3f000000 ; 004f9048
    MOV dword ptr [ESP + 0xc],EAX       ; 004f904f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f9053
    PUSH EBX                            ; 004f9057
    MOV dword ptr [ESP + 0x14],EAX      ; 004f9058
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f905c
    FILD dword ptr [ESP + 0x10]         ; 004f9060
    MOV dword ptr [EBX + 0x8],EAX       ; 004f9064
    FXCH                                ; 004f9067
    FSTP float ptr [ESP + 0xc]          ; 004f9069
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f906d
    FSTP float ptr [EBX]                ; 004f9071
    MOV dword ptr [EBX + 0xc],EAX       ; 004f9073
    MOV EAX,[0x01d0d2e4]                ; 004f9076 | DAT_01d0d2e4
    FILD dword ptr [ESP + 0x14]         ; 004f907b
    MOV dword ptr [EBX + 0x10],EAX      ; 004f907f
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f9082
    FSTP float ptr [EBX + 0x4]          ; 004f9086
    MOV dword ptr [ESP + 0x14],EAX      ; 004f9089
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f908d
    FILD dword ptr [ESP + 0x14]         ; 004f9091
    MOV dword ptr [ESP + 0x14],EAX      ; 004f9095
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f9099
    FSTP float ptr [EBX + 0x20]         ; 004f909d
    MOV dword ptr [EBX + 0x28],EAX      ; 004f90a0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f90a3
    FILD dword ptr [ESP + 0x14]         ; 004f90a7
    MOV dword ptr [EBX + 0x2c],EAX      ; 004f90ab
    MOV EAX,[0x01d0d2e4]                ; 004f90ae | DAT_01d0d2e4
    FSTP float ptr [EBX + 0x24]         ; 004f90b3
    MOV dword ptr [EBX + 0x30],EAX      ; 004f90b6
    CALL engine_mini3d.cpp_lineListD3DTL_FUN_004f44d0 ; 004f90b9
        ;   XREF to: 004f44d0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_lineListD3DTL_FUN_004f44d0(float * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004f90be
    ADD ESP,0x10                        ; 004f90c1
    POP EBX                             ; 004f90c4
    RET                                 ; 004f90c5

