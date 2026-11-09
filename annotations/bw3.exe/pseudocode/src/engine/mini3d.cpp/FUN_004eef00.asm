; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004eef00(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d7f53c
;   undefined4 DAT_01d7f540
;   undefined4 DAT_01d7f544
;   undefined4 DAT_01d7f54c
;   undefined4 DAT_01d7f550
;   undefined4 DAT_01d7f554
;   undefined4 DAT_01d7f55c
;   undefined4 DAT_01d7f560
;   undefined4 DAT_01d7f564
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004edcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eef00
        ;   Label: engine_mini3d.cpp_FUN_004eef00
    PUSH ESI                            ; 004eef01
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eef02
    MOV ESI,dword ptr [ESP + 0x10]      ; 004eef06
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004eef0a
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
    FLD float ptr [EBX + 0x4]           ; 004eef0f
    FMUL float ptr [0x01d7f540]         ; 004eef12 | DAT_01d7f540
    FLD float ptr [EBX]                 ; 004eef18
    FMUL float ptr [0x01d7f53c]         ; 004eef1a | DAT_01d7f53c
    FADDP                               ; 004eef20
    FLD float ptr [EBX + 0x8]           ; 004eef22
    FMUL float ptr [0x01d7f544]         ; 004eef25 | DAT_01d7f544
    FADDP                               ; 004eef2b
    FSTP float ptr [ESI]                ; 004eef2d
    FLD float ptr [EBX + 0x4]           ; 004eef2f
    FMUL float ptr [0x01d7f550]         ; 004eef32 | DAT_01d7f550
    FLD float ptr [EBX]                 ; 004eef38
    FMUL float ptr [0x01d7f54c]         ; 004eef3a | DAT_01d7f54c
    FADDP                               ; 004eef40
    FLD float ptr [EBX + 0x8]           ; 004eef42
    FMUL float ptr [0x01d7f554]         ; 004eef45 | DAT_01d7f554
    FADDP                               ; 004eef4b
    FSTP float ptr [ESI + 0x4]          ; 004eef4d
    FLD float ptr [EBX + 0x4]           ; 004eef50
    FMUL float ptr [0x01d7f560]         ; 004eef53 | DAT_01d7f560
    FLD float ptr [EBX]                 ; 004eef59
    FMUL float ptr [0x01d7f55c]         ; 004eef5b | DAT_01d7f55c
    FADDP                               ; 004eef61
    FLD float ptr [EBX + 0x8]           ; 004eef63
    FMUL float ptr [0x01d7f564]         ; 004eef66 | DAT_01d7f564
    FADDP                               ; 004eef6c
    FSTP float ptr [ESI + 0x8]          ; 004eef6e
    POP ESI                             ; 004eef71
    POP EBX                             ; 004eef72
    RET                                 ; 004eef73

