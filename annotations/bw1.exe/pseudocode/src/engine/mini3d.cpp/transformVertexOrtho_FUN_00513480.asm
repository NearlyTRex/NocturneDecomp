; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_transformVertexOrtho_FUN_00513480(CVector3f *point,float *out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float *          Stack[0x8]:4   out
;
; XREF[1]:
;   engine_mini3d.cpp_polyListSurface_FUN_00516cc0 at 00516dcc
;
; Referenced Globals:
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d22528
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d2adbc
;   undefined4 DAT_01d2adc0
;   undefined4 DAT_01d2adcc
;   undefined4 DAT_01d2add0
;   undefined4 DAT_01d2addc
;   undefined4 DAT_01d2ade0
;
; Called Functions:
;   engine_mini3d.cpp_updateTransform_FUN_005124f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513480
        ;   Label: engine_mini3d.cpp_transformVertexOrtho_FUN_00513480
    PUSH ESI                            ; 00513481
    SUB ESP,0xc                         ; 00513482
    MOV ESI,dword ptr [ESP + 0x18]      ; 00513485
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00513489
    CALL engine_mini3d.cpp_updateTransform_FUN_005124f0 ; 0051348d
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_005124f0()
    MOV EAX,[0x01d2257c]                ; 00513492 | DAT_01d2257c
    FLD float ptr [ESI + 0x4]           ; 00513497
    FSUB float ptr [EAX + 0x28]         ; 0051349a
    FLD ST0                             ; 0051349d
    FMUL float ptr [0x01d2adcc]         ; 0051349f | DAT_01d2adcc
    FLD float ptr [ESI]                 ; 005134a5
    FSUB float ptr [EAX + 0x24]         ; 005134a7
    FLD ST0                             ; 005134aa
    FMUL float ptr [0x01d2adc0]         ; 005134ac | DAT_01d2adc0
    FXCH                                ; 005134b2
    FMUL float ptr [0x01d2adbc]         ; 005134b4 | DAT_01d2adbc
    FXCH ST3                            ; 005134ba
    FMUL float ptr [0x01d2add0]         ; 005134bc | DAT_01d2add0
    FLD float ptr [ESI + 0x8]           ; 005134c2
    FXCH ST4                            ; 005134c5
    FADDP ST3,ST0                       ; 005134c7
    FXCH ST3                            ; 005134c9
    FSUB float ptr [EAX + 0x2c]         ; 005134cb
    FLD ST0                             ; 005134ce
    FMUL float ptr [0x01d2addc]         ; 005134d0 | DAT_01d2addc
    FXCH ST4                            ; 005134d6
    FADDP ST2,ST0                       ; 005134d8
    MOV dword ptr [EBX + 0x8],0x3f800000 ; 005134da
    FMUL float ptr [0x01d2ade0]         ; 005134e1 | DAT_01d2ade0
    MOV dword ptr [EBX + 0x10],0x0      ; 005134e7
    FXCH ST3                            ; 005134ee
    FADDP ST2,ST0                       ; 005134f0
    FADDP ST2,ST0                       ; 005134f2
    FST float ptr [EBX]                 ; 005134f4
    FLD float ptr [0x01d22528]          ; 005134f6 | DAT_01d22528
    FXCH                                ; 005134fc
    FMUL ST1                            ; 005134fe
    FXCH ST2                            ; 00513500
    FST float ptr [EBX + 0x4]           ; 00513502
    FMULP                               ; 00513505
    MOV dword ptr [EBX + 0xc],0x3f800000 ; 00513507
    FLD float ptr [0x01d224e8]          ; 0051350e | DAT_01d224e8
    FLD float ptr [0x01d224e4]          ; 00513514 | DAT_01d224e4
    FADDP ST3,ST0                       ; 0051351a
    FADDP                               ; 0051351c
    FXCH                                ; 0051351e
    FSTP float ptr [EBX + 0x14]         ; 00513520
    FSTP float ptr [EBX + 0x18]         ; 00513523
    ADD ESP,0xc                         ; 00513526
    POP ESI                             ; 00513529
    POP EBX                             ; 0051352a
    RET                                 ; 0051352b

