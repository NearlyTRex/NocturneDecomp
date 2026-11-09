; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setutil_cpp_FUN_0055d610(int param_1,int param_2,int param_3,float param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005f147d
;   undefined4 DAT_005f1481
;   undefined4 DAT_005f1489
;   undefined4 DAT_005f1491
;   undefined4 DAT_005f1499
;   undefined4 DAT_00605158
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d610
        ;   Label: core_setutil.cpp_FUN_0055d610
    PUSH ESI                            ; 0055d611
    SUB ESP,0x3c                        ; 0055d612
    MOV EAX,dword ptr [ESP + 0x48]      ; 0055d615
    MOV dword ptr [ESP + 0x38],EAX      ; 0055d619
    FILD dword ptr [ESP + 0x38]         ; 0055d61d
    FMUL float ptr [0x005f147d]         ; 0055d621 | DAT_005f147d
    FLD float ptr [0x005f1481]          ; 0055d627 | DAT_005f1481
    FXCH                                ; 0055d62d
    FMUL ST1                            ; 0055d62f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0055d631
    FMUL double ptr [0x005f1489]        ; 0055d635 | DAT_005f1489
    MOV dword ptr [ESP + 0x38],EAX      ; 0055d63b
    FLD ST0                             ; 0055d63f
    FSIN                                ; 0055d641
    FXCH                                ; 0055d643
    FCOS                                ; 0055d645
    FILD dword ptr [ESP + 0x38]         ; 0055d647
    FMUL float ptr [0x005f1491]         ; 0055d64b | DAT_005f1491
    FMULP ST3                           ; 0055d651
    FLD float ptr [ESP + 0x54]          ; 0055d653
    FXCH ST2                            ; 0055d657
    FMUL ST2                            ; 0055d659
    FXCH ST3                            ; 0055d65b
    FMUL double ptr [0x005f1499]        ; 0055d65d | DAT_005f1499
    FLD ST0                             ; 0055d663
    FCOS                                ; 0055d665
    FXCH                                ; 0055d667
    FSIN                                ; 0055d669
    FXCH ST2                            ; 0055d66b
    FMUL ST3                            ; 0055d66d
    FMUL ST1                            ; 0055d66f
    FXCH ST4                            ; 0055d671
    FMULP                               ; 0055d673
    FXCH                                ; 0055d675
    FMULP ST2                           ; 0055d677
    LEA EBX,[ESP + 0xc]                 ; 0055d679
    MOV EDX,dword ptr [0x00612560]      ; 0055d67d | DAT_00612560
    FXCH ST2                            ; 0055d683
    FSTP float ptr [ESP + 0x8]          ; 0055d685
    MOV EAX,ESP                         ; 0055d689
    FXCH                                ; 0055d68b
    FSTP float ptr [ESP]                ; 0055d68d
    FSTP float ptr [ESP + 0x4]          ; 0055d690
    FLD float ptr [EAX]                 ; 0055d694
    FMUL float ptr [0x00605158]         ; 0055d696 | DAT_00605158
    FISTP dword ptr [EBX]               ; 0055d69c
    FLD float ptr [EAX + 0x4]           ; 0055d69e
    FMUL float ptr [0x00605158]         ; 0055d6a1 | DAT_00605158
    FISTP dword ptr [EBX + 0x4]         ; 0055d6a7
    FLD float ptr [EAX + 0x8]           ; 0055d6aa
    FMUL float ptr [0x00605158]         ; 0055d6ad | DAT_00605158
    FISTP dword ptr [EBX + 0x8]         ; 0055d6b3
    MOV EBX,dword ptr [ESP + 0x50]      ; 0055d6b6
    LEA EAX,[ESP + 0xc]                 ; 0055d6ba
    LEA ESI,[EBX*0x4 + 0x0]             ; 0055d6be
    PUSH EAX                            ; 0055d6c5
    SUB ESI,EBX                         ; 0055d6c6
    MOV EAX,dword ptr [EDX]             ; 0055d6c8
    SHL ESI,0x4                         ; 0055d6ca
    ADD EAX,ESI                         ; 0055d6cd
    PUSH EAX                            ; 0055d6cf
    CALL engine_special.cpp_FUN_00580173 ; 0055d6d0
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 0055d6d5 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 0055d6da
    MOV dword ptr [EDX + ESI*0x1 + 0x18],0x800000 ; 0055d6dc
    MOV EAX,dword ptr [EAX]             ; 0055d6e4
    ADD ESP,0x8                         ; 0055d6e6
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 0055d6e9
    ADD ESP,0x3c                        ; 0055d6f1
    POP ESI                             ; 0055d6f4
    POP EBX                             ; 0055d6f5
    RET                                 ; 0055d6f6

