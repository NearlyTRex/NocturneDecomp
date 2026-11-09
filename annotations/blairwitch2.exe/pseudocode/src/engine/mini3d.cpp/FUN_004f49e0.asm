; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f49e0(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d167ac
;   undefined4 DAT_01d167b0
;   undefined4 DAT_01d167b4
;   undefined4 DAT_01d167bc
;   undefined4 DAT_01d167c0
;   undefined4 DAT_01d167c4
;   undefined4 DAT_01d167cc
;   undefined4 DAT_01d167d0
;   undefined4 DAT_01d167d4
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f3740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f49e0
        ;   Label: engine_mini3d.cpp_FUN_004f49e0
    PUSH ESI                            ; 004f49e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f49e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f49e6
    CALL engine_mini3d.cpp_FUN_004f3740 ; 004f49ea
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3740()
    FLD float ptr [EBX + 0x4]           ; 004f49ef
    FMUL float ptr [0x01d167b0]         ; 004f49f2 | DAT_01d167b0
    FLD float ptr [EBX]                 ; 004f49f8
    FMUL float ptr [0x01d167ac]         ; 004f49fa | DAT_01d167ac
    FADDP                               ; 004f4a00
    FLD float ptr [EBX + 0x8]           ; 004f4a02
    FMUL float ptr [0x01d167b4]         ; 004f4a05 | DAT_01d167b4
    FADDP                               ; 004f4a0b
    FSTP float ptr [ESI]                ; 004f4a0d
    FLD float ptr [EBX + 0x4]           ; 004f4a0f
    FMUL float ptr [0x01d167c0]         ; 004f4a12 | DAT_01d167c0
    FLD float ptr [EBX]                 ; 004f4a18
    FMUL float ptr [0x01d167bc]         ; 004f4a1a | DAT_01d167bc
    FADDP                               ; 004f4a20
    FLD float ptr [EBX + 0x8]           ; 004f4a22
    FMUL float ptr [0x01d167c4]         ; 004f4a25 | DAT_01d167c4
    FADDP                               ; 004f4a2b
    FSTP float ptr [ESI + 0x4]          ; 004f4a2d
    FLD float ptr [EBX + 0x4]           ; 004f4a30
    FMUL float ptr [0x01d167d0]         ; 004f4a33 | DAT_01d167d0
    FLD float ptr [EBX]                 ; 004f4a39
    FMUL float ptr [0x01d167cc]         ; 004f4a3b | DAT_01d167cc
    FADDP                               ; 004f4a41
    FLD float ptr [EBX + 0x8]           ; 004f4a43
    FMUL float ptr [0x01d167d4]         ; 004f4a46 | DAT_01d167d4
    FADDP                               ; 004f4a4c
    FSTP float ptr [ESI + 0x8]          ; 004f4a4e
    POP ESI                             ; 004f4a51
    POP EBX                             ; 004f4a52
    RET                                 ; 004f4a53

